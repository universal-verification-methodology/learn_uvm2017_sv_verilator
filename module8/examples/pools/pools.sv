/**
 * Module 8 Example 8.4: UVM Pools
 * Demonstrates object pooling for memory management.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand object pooling patterns
 *   2. Learn pool implementation
 *   3. Understand pool usage patterns
 *   4. Learn memory management benefits
 *   5. Understand pool allocation and deallocation
 * 
 * OBJECT POOLING:
 *   - Pre-allocate objects in pool
 *   - Reuse objects instead of creating new ones
 *   - Reduces memory allocation overhead
 *   - Improves performance
 * 
 * This example shows:
 * - Object pooling
 * - Pool implementation
 * - Pool usage patterns
 * - Memory management
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================================
// TRANSACTION CLASS
// ============================================================================
/**
 * PoolTransaction: Transaction for pool example
 * 
 * TRANSACTION FIELDS:
 *   - data: 8-bit data
 *   - address: 16-bit address
 */
class PoolTransaction extends uvm_sequence_item;
    rand logic [7:0] data;      // Data (8-bit, randomized)
    rand logic [15:0] address; // Address (16-bit, randomized)
    
    `uvm_object_utils(PoolTransaction)
    
    function new(string name = "PoolTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h", data, address);
    endfunction
endclass

// ============================================================================
// OBJECT POOL
// ============================================================================
/**
 * TransactionPool: Simple object pool
 * 
 * POOL PURPOSE:
 *   - Pre-allocate objects for reuse
 *   - Reduce memory allocation overhead
 *   - Improve performance
 * 
 * POOL OPERATIONS:
 *   - allocate(): Get object from pool (or create new if empty)
 *   - free(): Return object to pool (or discard if full)
 *   - initialize_pool(): Pre-allocate objects
 */
class TransactionPool extends uvm_object;
    PoolTransaction pool[$];    // Pool queue
    int pool_size;              // Maximum pool size
    int allocated_count;        // Allocation counter
    int freed_count;            // Free counter
    
    `uvm_object_utils(TransactionPool)
    
    function new(string name = "TransactionPool");
        super.new(name);
        pool_size = 10;         // Default pool size
        allocated_count = 0;
        freed_count = 0;
        initialize_pool();
    endfunction
    
    // ========================================================================
    // INITIALIZE POOL
    // ========================================================================
    /**
     * Initialize pool: Pre-allocate objects
     * 
     * POOL INITIALIZATION:
     *   - Create pool_size objects
     *   - Add to pool queue
     *   - Ready for allocation
     */
    function void initialize_pool();
        PoolTransaction txn;
        
        // ====================================================================
        // PRE-ALLOCATE OBJECTS
        // ====================================================================
        // 
        // PRE-ALLOCATION:
        //   - Create pool_size objects
        //   - Add to pool queue
        //   - Objects ready for reuse
        // 
        // POOL INITIALIZATION EXAMPLE:
        //   pool_size = 10
        //   Create: txn0, txn1, ..., txn9
        //   Pool: [txn0, txn1, ..., txn9]
        for (int i = 0; i < pool_size; i++) begin
            txn = PoolTransaction::type_id::create($sformatf("pool_txn_%0d", i));
            pool.push_back(txn);
        end
        `uvm_info("POOL", $sformatf("Initialized pool with %0d objects", pool_size), UVM_LOW)
        // 
        // INITIALIZATION BENEFITS:
        //   - Objects pre-allocated (no allocation delay)
        //   - Ready for immediate use
        //   - Reduces allocation overhead
    endfunction
    
    // ========================================================================
    // ALLOCATE METHOD
    // ========================================================================
    /**
     * Allocate: Get object from pool
     * 
     * ALLOCATION BEHAVIOR:
     *   1. If pool has objects: Pop from pool
     *   2. If pool empty: Create new object
     *   3. Return object for use
     */
    function PoolTransaction allocate();
        PoolTransaction txn;
        
        if (pool.size() > 0) begin
            // ================================================================
            // ALLOCATE FROM POOL
            // ================================================================
            // 
            // POOL ALLOCATION:
            //   - pop_front(): Get object from pool
            //   - Reuse existing object
            //   - No new allocation needed
            // 
            // ALLOCATION BENEFITS:
            //   - Faster: No object creation overhead
            //   - Memory efficient: Reuse existing objects
            //   - Predictable: Pre-allocated objects
            txn = pool.pop_front();
            allocated_count++;
            `uvm_info("POOL", $sformatf("Allocated from pool: %s (remaining: %0d)", 
                txn.convert2string(), pool.size()), UVM_DEBUG)
            // 
            // ALLOCATION DETAILED EXAMPLE:
            //   Initial pool: [txn0, txn1, txn2, txn3, txn4, txn5, txn6, txn7, txn8, txn9]
            //   Pool size: 10
            //   
            //   Allocation 1:
            //     txn = pool.pop_front() -> txn0
            //     Pool: [txn1, txn2, txn3, txn4, txn5, txn6, txn7, txn8, txn9]
            //     Remaining: 9
            //   
            //   Allocation 2:
            //     txn = pool.pop_front() -> txn1
            //     Pool: [txn2, txn3, txn4, txn5, txn6, txn7, txn8, txn9]
            //     Remaining: 8
            //   
            //   ... (continue until pool empty)
            //   
            //   Allocation 10:
            //     txn = pool.pop_front() -> txn9
            //     Pool: []
            //     Remaining: 0
            //   
            //   Allocation 11:
            //     Pool empty -> Create new object
        end else begin
            // ================================================================
            // CREATE NEW OBJECT (POOL EMPTY)
            // ================================================================
            // 
            // NEW ALLOCATION:
            //   - Pool empty: Create new object
            //   - Fallback when pool exhausted
            //   - Still track allocation
            // 
            // NEW ALLOCATION OVERHEAD:
            //   - Slower: Object creation overhead
            //   - Memory: New object allocation
            //   - Unpredictable: Dynamic allocation
            txn = PoolTransaction::type_id::create("new_txn");
            allocated_count++;
            `uvm_info("POOL", $sformatf("Pool empty, created new: %s", txn.convert2string()), UVM_DEBUG)
            // 
            // NEW ALLOCATION DETAILED EXAMPLE:
            //   Pool: [] (empty, all objects allocated)
            //   
            //   Allocation 11:
            //     Create new: PoolTransaction::type_id::create("new_txn")
            //     New object: txn10 (newly created)
            //     Pool: [] (still empty)
            //     New allocation required
            //   
            //   Allocation 12:
            //     Create new: PoolTransaction::type_id::create("new_txn")
            //     New object: txn11 (newly created)
            //     Pool: [] (still empty)
            //     New allocation required
            //   
            //   PERFORMANCE IMPACT:
            //     - Pool allocation: O(1) - pop from queue
            //     - New allocation: O(1) but with object creation overhead
            //     - Pool allocation: ~10-100x faster than new allocation
        end
        return txn;
    endfunction
    
    // ========================================================================
    // FREE METHOD
    // ========================================================================
    /**
     * Free: Return object to pool
     * 
     * FREE BEHAVIOR:
     *   1. If pool not full: Add to pool
     *   2. If pool full: Discard object
     *   3. Object available for reuse
     */
    function void free(PoolTransaction txn);
        if (pool.size() < pool_size) begin
            // ================================================================
            // RETURN TO POOL
            // ================================================================
            // 
            // POOL RETURN:
            //   - push_back(): Add to pool
            //   - Object available for reuse
            //   - Reduces allocation overhead
            pool.push_back(txn);
            freed_count++;
            `uvm_info("POOL", $sformatf("Freed to pool: %s (pool size: %0d)", 
                txn.convert2string(), pool.size()), UVM_DEBUG)
            // 
            // FREE EXAMPLE:
            //   Pool: [txn1, txn2, ..., txn9]
            //   Free: txn0 (return to pool)
            //   Pool: [txn1, txn2, ..., txn9, txn0]
            //   Object available for reuse
        end else begin
            // ================================================================
            // DISCARD OBJECT (POOL FULL)
            // ================================================================
            // 
            // POOL FULL:
            //   - Pool at maximum size
            //   - Discard object (don't add to pool)
            //   - Prevents pool from growing indefinitely
            freed_count++;
            `uvm_info("POOL", $sformatf("Pool full, discarding: %s", txn.convert2string()), UVM_DEBUG)
            // 
            // DISCARD EXAMPLE:
            //   Pool: [txn0, txn1, ..., txn9] (full, size=10)
            //   Free: txn10 (pool full)
            //   Pool: [txn0, txn1, ..., txn9] (unchanged)
            //   Object discarded
        end
    endfunction
    
    // ========================================================================
    // REPORT PHASE
    // ========================================================================
    function void report_phase(uvm_phase phase);
        `uvm_info("POOL", $sformatf("Pool Statistics:"), UVM_LOW)
        `uvm_info("POOL", $sformatf("  Pool Size: %0d", pool_size), UVM_LOW)
        `uvm_info("POOL", $sformatf("  Current Pool Size: %0d", pool.size()), UVM_LOW)
        `uvm_info("POOL", $sformatf("  Allocated: %0d", allocated_count), UVM_LOW)
        `uvm_info("POOL", $sformatf("  Freed: %0d", freed_count), UVM_LOW)
        // 
        // STATISTICS INTERPRETATION:
        //   - Pool Size: Maximum pool capacity
        //   - Current Pool Size: Objects currently in pool
        //   - Allocated: Total objects allocated
        //   - Freed: Total objects freed
        //   - Efficiency: (Freed / Allocated) * 100% (reuse rate)
    endfunction
endclass

// ============================================================================
// TEST CLASS
// ============================================================================
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
        PoolTransaction txn[$];  // Transaction queue
        phase.raise_objection(this);
        
        `uvm_info("POOL", "Testing object pool", UVM_LOW)
        
        // ====================================================================
        // ALLOCATE TRANSACTIONS FROM POOL
        // ====================================================================
        // 
        // ALLOCATION PATTERN:
        //   - Allocate from pool (reuse objects)
        //   - Configure transactions
        //   - Store for later freeing
        for (int i = 0; i < 15; i++) begin
            // ================================================================
            // ALLOCATE FROM POOL
            // ================================================================
            // 
            // ALLOCATION:
            //   - First 10: From pre-allocated pool
            //   - Next 5: New allocation (pool empty)
            PoolTransaction allocated_txn = pool.allocate();
            void'(allocated_txn.randomize());
            allocated_txn.data = i * 8'h10;
            allocated_txn.address = i * 16'h100;
            txn.push_back(allocated_txn);
            `uvm_info("POOL", $sformatf("Allocated #%0d: %s", i, allocated_txn.convert2string()), UVM_MEDIUM)
            #10;
        end
        
        // ====================================================================
        // FREE TRANSACTIONS BACK TO POOL
        // ====================================================================
        // 
        // FREE PATTERN:
        //   - Return transactions to pool
        //   - Objects available for reuse
        //   - Reduces allocation overhead
        foreach (txn[i]) begin
            pool.free(txn[i]);
            #10;
        end
        
        #50;
        phase.drop_objection(this);
    endtask
endclass

// ============================================================================
// TOP-LEVEL MODULE
// ============================================================================
module pools_top;
    import uvm_pkg::*;
    
    initial begin
        run_test("PoolTest");
    end
endmodule
