/**
 * Module 8 Example 8.4: UVM Pools
 * Demonstrates object pooling for memory management.
 * 
 * This example shows:
 * - Object pooling
 * - Pool implementation
 * - Pool usage patterns
 * - Memory management
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Transaction for pool example
 */
class PoolTransaction extends uvm_sequence_item;
    rand logic [7:0] data;
    rand logic [15:0] address;
    
    `uvm_object_utils(PoolTransaction)
    
    function new(string name = "PoolTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h", data, address);
    endfunction
endclass

/**
 * Simple object pool
 */
class TransactionPool extends uvm_object;
    PoolTransaction pool[$];
    int pool_size;
    int allocated_count;
    int freed_count;
    
    `uvm_object_utils(TransactionPool)
    
    function new(string name = "TransactionPool");
        super.new(name);
        pool_size = 10;
        allocated_count = 0;
        freed_count = 0;
        initialize_pool();
    endfunction
    
    function void initialize_pool();
        PoolTransaction txn;
        for (int i = 0; i < pool_size; i++) begin
            txn = PoolTransaction::type_id::create($sformatf("pool_txn_%0d", i));
            pool.push_back(txn);
        end
        `uvm_info("POOL", $sformatf("Initialized pool with %0d objects", pool_size), UVM_LOW)
    endfunction
    
    function PoolTransaction allocate();
        PoolTransaction txn;
        if (pool.size() > 0) begin
            txn = pool.pop_front();
            allocated_count++;
            `uvm_info("POOL", $sformatf("Allocated from pool: %s (remaining: %0d)", 
                txn.convert2string(), pool.size()), UVM_DEBUG)
        end else begin
            // Create new object if pool is empty
            txn = PoolTransaction::type_id::create("new_txn");
            allocated_count++;
            `uvm_info("POOL", $sformatf("Pool empty, created new: %s", txn.convert2string()), UVM_DEBUG)
        end
        return txn;
    endfunction
    
    function void free(PoolTransaction txn);
        if (pool.size() < pool_size) begin
            pool.push_back(txn);
            freed_count++;
            `uvm_info("POOL", $sformatf("Freed to pool: %s (pool size: %0d)", 
                txn.convert2string(), pool.size()), UVM_DEBUG)
        end else begin
            freed_count++;
            `uvm_info("POOL", $sformatf("Pool full, discarding: %s", txn.convert2string()), UVM_DEBUG)
        end
    endfunction
    
    function void report_phase(uvm_phase phase);
        `uvm_info("POOL", $sformatf("Pool Statistics:"), UVM_LOW)
        `uvm_info("POOL", $sformatf("  Pool Size: %0d", pool_size), UVM_LOW)
        `uvm_info("POOL", $sformatf("  Current Pool Size: %0d", pool.size()), UVM_LOW)
        `uvm_info("POOL", $sformatf("  Allocated: %0d", allocated_count), UVM_LOW)
        `uvm_info("POOL", $sformatf("  Freed: %0d", freed_count), UVM_LOW)
    endfunction
endclass

/**
 * Test for pool example
 */
class PoolTest extends uvm_test;
    TransactionPool pool;
    
    `uvm_component_utils(PoolTest)
    
    function new(string name = "PoolTest", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        pool = TransactionPool::type_id::create("pool");
    endfunction
    
    task run_phase(uvm_phase phase);
        PoolTransaction txn[$];
        phase.raise_objection(this);
        
        `uvm_info("POOL", "Testing object pool", UVM_LOW)
        
        // Allocate transactions from pool
        for (int i = 0; i < 15; i++) begin
            PoolTransaction allocated_txn = pool.allocate();
            void'(allocated_txn.randomize());
            allocated_txn.data = i * 8'h10;
            allocated_txn.address = i * 16'h100;
            txn.push_back(allocated_txn);
            `uvm_info("POOL", $sformatf("Allocated #%0d: %s", i, allocated_txn.convert2string()), UVM_MEDIUM)
            #10;
        end
        
        // Free transactions back to pool
        foreach (txn[i]) begin
            pool.free(txn[i]);
            #10;
        end
        
        #50;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level module for pool example
 */
module pools_top;
    import uvm_pkg::*;
    
    initial begin
        run_test("PoolTest");
    end
endmodule
