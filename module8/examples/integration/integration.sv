/**
 * Module 8 Example 8.9: Utility Integration
 * Demonstrates integration of multiple UVM utilities.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand utility integration patterns
 *   2. Learn combining multiple utilities
 *   3. Understand real-world utility usage
 *   4. Learn utility coordination
 *   5. Understand integrated testbench patterns
 * 
 * UTILITY INTEGRATION:
 *   - Combine multiple utilities in one component
 *   - CLP for configuration
 *   - Queues for transaction management
 *   - Recorders for transaction recording
 *   - Coordinated utility usage
 * 
 * This example shows:
 * - Combining multiple utilities
 * - Utility integration patterns
 * - Real-world utility usage
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================================
// TRANSACTION CLASS
// ============================================================================
/**
 * IntegrationTransaction: Transaction for integration example
 * 
 * TRANSACTION FIELDS:
 *   - data: 8-bit data
 *   - address: 16-bit address
 *   - timestamp: Transaction timestamp
 *   - prio: Priority (for queue operations)
 */
class IntegrationTransaction extends uvm_sequence_item;
    rand logic [7:0] data;      // Data (8-bit, randomized)
    rand logic [15:0] address; // Address (16-bit, randomized)
    int timestamp;              // Timestamp (for recording)
    int prio;                   // Priority (for queue operations)
    
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

// ============================================================================
// INTEGRATED UTILITY MANAGER
// ============================================================================
/**
 * IntegratedUtilityManager: Integrated utility manager
 * 
 * MANAGER PURPOSE:
 *   - Combines multiple utilities
 *   - CLP for configuration
 *   - Queues for transaction management
 *   - Recorders for transaction recording
 *   - Coordinated utility usage
 */
class IntegratedUtilityManager extends uvm_component;
    IntegrationTransaction transaction_queue[$];      // Transaction queue
    IntegrationTransaction recorded_transactions[$];  // Recorded transactions
    int transaction_count;                            // Transaction counter
    string test_mode;                                 // Test mode (from CLP)
    
    `uvm_component_utils(IntegratedUtilityManager)
    
    function new(string name = "IntegratedUtilityManager", uvm_component parent = null);
        super.new(name, parent);
        transaction_count = 0;
        test_mode = "normal";
    endfunction
    
    // ========================================================================
    // CLP CONFIGURATION
    // ========================================================================
    /**
     * Configure from CLP: Get configuration from command line
     * 
     * CLP CONFIGURATION:
     *   - Parse command-line arguments
     *   - Set test_mode from +test_mode=...
     *   - Allows dynamic configuration
     */
    function void configure_from_clp();
        // ====================================================================
        // PARSE TEST MODE
        // ====================================================================
        // 
        // CLP PARSING:
        //   - uvm_cmdline_proc.get_arg_value(): Get plusarg value
        //   - Format: +test_mode=normal
        //   - Default: "normal" (if not specified)
        void'(uvm_cmdline_proc.get_arg_value("+test_mode", test_mode));
        `uvm_info("INTEGRATION", $sformatf("Configured test_mode: %s", test_mode), UVM_LOW)
        // 
        // CLP EXAMPLE:
        //   Command line: +test_mode=debug
        //   test_mode = "debug"
        //   Usage: Control test behavior
    endfunction
    
    // ========================================================================
    // TRANSACTION RECORDING
    // ========================================================================
    /**
     * Record transaction: Record transaction for analysis
     * 
     * RECORDING:
     *   - Create copy of transaction
     *   - Set timestamp
     *   - Store in recorded queue
     *   - Increment counter
     */
    function void record_transaction(IntegrationTransaction txn);
        IntegrationTransaction recorded_txn;
        
        // ====================================================================
        // CREATE TRANSACTION COPY
        // ====================================================================
        recorded_txn = IntegrationTransaction::type_id::create("recorded_txn");
        recorded_txn.copy(txn);
        
        // ====================================================================
        // SET TIMESTAMP
        // ====================================================================
        recorded_txn.timestamp = $time;
        
        // ====================================================================
        // STORE RECORDED TRANSACTION
        // ====================================================================
        recorded_transactions.push_back(recorded_txn);
        transaction_count++;
        
        `uvm_info("INTEGRATION", $sformatf("Recorded transaction #%0d: %s", 
            transaction_count, recorded_txn.convert2string()), UVM_MEDIUM)
        // 
        // RECORDING EXAMPLE:
        //   Transaction: data=0x55, addr=0x1000, prio=5
        //   Recorded: transaction #1, timestamp=$time
        //   Queue: [txn1]
    endfunction
    
    // ========================================================================
    // QUEUE OPERATIONS
    // ========================================================================
    /**
     * Enqueue transaction: Add transaction to queue
     * 
     * ENQUEUE:
     *   - Add transaction to queue
     *   - FIFO behavior
     *   - Track queue size
     */
    function void enqueue_transaction(IntegrationTransaction txn);
        transaction_queue.push_back(txn);
        `uvm_info("INTEGRATION", $sformatf("Enqueued transaction: %s (queue size: %0d)", 
            txn.convert2string(), transaction_queue.size()), UVM_DEBUG)
        // 
        // ENQUEUE EXAMPLE:
        //   Queue: [txn0, txn1]
        //   Enqueue: txn2
        //   Queue: [txn0, txn1, txn2]
    endfunction
    
    /**
     * Dequeue transaction: Remove transaction from queue
     * 
     * DEQUEUE:
     *   - Remove first transaction (FIFO)
     *   - Return transaction
     *   - Track queue size
     */
    function IntegrationTransaction dequeue_transaction();
        IntegrationTransaction txn;
        if (transaction_queue.size() > 0) begin
            txn = transaction_queue.pop_front();
            `uvm_info("INTEGRATION", $sformatf("Dequeued transaction: %s (queue size: %0d)", 
                txn.convert2string(), transaction_queue.size()), UVM_DEBUG)
            // 
            // DEQUEUE EXAMPLE:
            //   Queue: [txn0, txn1, txn2]
            //   Dequeue: txn0 (first in, first out)
            //   Queue: [txn1, txn2]
        end
        return txn;
    endfunction
    
    // ========================================================================
    // REPORT PHASE
    // ========================================================================
    function void report_phase(uvm_phase phase);
        `uvm_info("INTEGRATION", $sformatf("Integration Statistics:"), UVM_LOW)
        `uvm_info("INTEGRATION", $sformatf("  Test Mode: %s", test_mode), UVM_LOW)
        `uvm_info("INTEGRATION", $sformatf("  Transactions Recorded: %0d", transaction_count), UVM_LOW)
        `uvm_info("INTEGRATION", $sformatf("  Queue Size: %0d", transaction_queue.size()), UVM_LOW)
        // 
        // STATISTICS INTERPRETATION:
        //   - Test Mode: Configuration from CLP
        //   - Transactions Recorded: Number of transactions recorded
        //   - Queue Size: Transactions remaining in queue
    endfunction
endclass

// ============================================================================
// TEST CLASS
// ============================================================================
class IntegrationTest extends uvm_test;
    IntegratedUtilityManager utility_mgr;
    
    `uvm_component_utils(IntegrationTest)
    
    function new(string name = "IntegrationTest", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        utility_mgr = IntegratedUtilityManager::type_id::create("utility_mgr", this);
        
        // ====================================================================
        // CONFIGURE FROM CLP
        // ====================================================================
        utility_mgr.configure_from_clp();
    endfunction
    
    task run_phase(uvm_phase phase);
        IntegrationTransaction txn;
        phase.raise_objection(this);
        
        `uvm_info("INTEGRATION", "Testing integrated utilities", UVM_LOW)
        
        // ====================================================================
        // GENERATE, RECORD, AND ENQUEUE TRANSACTIONS
        // ====================================================================
        // 
        // INTEGRATED PATTERN:
        //   - Generate transactions
        //   - Record transactions (for analysis)
        //   - Enqueue transactions (for processing)
        //   - Demonstrates utility integration
        for (int i = 0; i < 10; i++) begin
            txn = IntegrationTransaction::type_id::create("txn");
            void'(txn.randomize());
            txn.data = i * 8'h10;
            txn.address = i * 16'h100;
            txn.prio = $urandom_range(0, 9);  // Random priority
            
            // ================================================================
            // RECORD TRANSACTION
            // ================================================================
            utility_mgr.record_transaction(txn);
            
            // ================================================================
            // ENQUEUE TRANSACTION
            // ================================================================
            utility_mgr.enqueue_transaction(txn);
            #10;
        end
        
        // ====================================================================
        // DEQUEUE AND PROCESS TRANSACTIONS
        // ====================================================================
        // 
        // PROCESSING PATTERN:
        //   - Dequeue transactions from queue
        //   - Process each transaction
        //   - Demonstrates queue usage
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

// ============================================================================
// TOP-LEVEL MODULE
// ============================================================================
module integration_top;
    import uvm_pkg::*;
    
    initial begin
        run_test("IntegrationTest");
    end
endmodule
