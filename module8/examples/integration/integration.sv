/**
 * Module 8 Example 8.9: Utility Integration
 * Demonstrates integration of multiple UVM utilities.
 * 
 * This example shows:
 * - Combining multiple utilities
 * - Utility integration patterns
 * - Real-world utility usage
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Transaction for integration example
 */
class IntegrationTransaction extends uvm_sequence_item;
    rand logic [7:0] data;
    rand logic [15:0] address;
    int timestamp;
    int prio;
    
    `uvm_object_utils(IntegrationTransaction)
    
    function new(string name = "IntegrationTransaction");
        super.new(name);
        timestamp = 0;
        prio = 0;
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h, ts=%0d, prio=%0d", 
            data, address, timestamp, prio);
    endfunction
endclass

/**
 * Integrated utility manager
 */
class IntegratedUtilityManager extends uvm_component;
    IntegrationTransaction transaction_queue[$];
    IntegrationTransaction recorded_transactions[$];
    int transaction_count;
    string test_mode;
    
    `uvm_component_utils(IntegratedUtilityManager)
    
    function new(string name = "IntegratedUtilityManager", uvm_component parent = null);
        super.new(name, parent);
        transaction_count = 0;
        test_mode = "normal";
    endfunction
    
    function void configure_from_clp();
        void'(uvm_cmdline_proc.get_arg_value("+test_mode", test_mode));
        `uvm_info("INTEGRATION", $sformatf("Configured test_mode: %s", test_mode), UVM_LOW)
    endfunction
    
    function void record_transaction(IntegrationTransaction txn);
        IntegrationTransaction recorded_txn;
        recorded_txn = IntegrationTransaction::type_id::create("recorded_txn");
        recorded_txn.copy(txn);
        recorded_txn.timestamp = $time;
        recorded_transactions.push_back(recorded_txn);
        transaction_count++;
        
        `uvm_info("INTEGRATION", $sformatf("Recorded transaction #%0d: %s", 
            transaction_count, recorded_txn.convert2string()), UVM_MEDIUM)
    endfunction
    
    function void enqueue_transaction(IntegrationTransaction txn);
        transaction_queue.push_back(txn);
        `uvm_info("INTEGRATION", $sformatf("Enqueued transaction: %s (queue size: %0d)", 
            txn.convert2string(), transaction_queue.size()), UVM_DEBUG)
    endfunction
    
    function IntegrationTransaction dequeue_transaction();
        IntegrationTransaction txn;
        if (transaction_queue.size() > 0) begin
            txn = transaction_queue.pop_front();
            `uvm_info("INTEGRATION", $sformatf("Dequeued transaction: %s (queue size: %0d)", 
                txn.convert2string(), transaction_queue.size()), UVM_DEBUG)
        end
        return txn;
    endfunction
    
    function void report_phase(uvm_phase phase);
        `uvm_info("INTEGRATION", $sformatf("Integration Statistics:"), UVM_LOW)
        `uvm_info("INTEGRATION", $sformatf("  Test Mode: %s", test_mode), UVM_LOW)
        `uvm_info("INTEGRATION", $sformatf("  Transactions Recorded: %0d", transaction_count), UVM_LOW)
        `uvm_info("INTEGRATION", $sformatf("  Queue Size: %0d", transaction_queue.size()), UVM_LOW)
    endfunction
endclass

/**
 * Test for integration example
 */
class IntegrationTest extends uvm_test;
    IntegratedUtilityManager utility_mgr;
    
    `uvm_component_utils(IntegrationTest)
    
    function new(string name = "IntegrationTest", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        utility_mgr = IntegratedUtilityManager::type_id::create("utility_mgr", this);
        utility_mgr.configure_from_clp();
    endfunction
    
    task run_phase(uvm_phase phase);
        IntegrationTransaction txn;
        phase.raise_objection(this);
        
        `uvm_info("INTEGRATION", "Testing integrated utilities", UVM_LOW)
        
        // Generate, record, and enqueue transactions
        for (int i = 0; i < 10; i++) begin
            txn = IntegrationTransaction::type_id::create("txn");
            void'(txn.randomize());
            txn.data = i * 8'h10;
            txn.address = i * 16'h100;
            txn.prio = $urandom_range(0, 9);
            
            utility_mgr.record_transaction(txn);
            utility_mgr.enqueue_transaction(txn);
            #10;
        end
        
        // Dequeue and process transactions
        for (int i = 0; i < 10; i++) begin
            txn = utility_mgr.dequeue_transaction();
            if (txn != null) begin
                `uvm_info("INTEGRATION", $sformatf("Processing transaction: %s", 
                    txn.convert2string()), UVM_MEDIUM)
            end
            #10;
        end
        
        #100;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level module for integration example
 */
module integration_top;
    import uvm_pkg::*;
    
    initial begin
        run_test("IntegrationTest");
    end
endmodule
