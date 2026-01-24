/**
 * Module 4 Example 4.6: UVM Scoreboard
 * Demonstrates scoreboard implementation for result checking.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand UVM scoreboard purpose and structure
 *   2. Learn transaction comparison (expected vs actual)
 *   3. Master result checking and pass/fail tracking
 *   4. Understand analysis imp for receiving transactions
 *   5. Apply scoreboard patterns for verification
 * 
 * SCOREBOARD PURPOSE:
 *   - Compares expected vs actual results
 *   - Tracks pass/fail statistics
 *   - Reports test results
 *   - Centralized result checking
 * 
 * SCOREBOARD OPERATION:
 *   - Receives expected transactions (from reference model)
 *   - Receives actual transactions (from monitor)
 *   - Compares transactions
 *   - Tracks pass/fail counts
 * 
 * ANALYSIS IMP:
 *   - Receives transactions from analysis ports
 *   - write() method called for each transaction
 *   - Can receive from multiple sources
 * 
 * This example shows:
 * - Scoreboard purpose and structure
 * - Transaction comparison
 * - Result checking
 * - Pass/fail tracking
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Transaction for scoreboard example
 */
class ScoreboardTransaction extends uvm_sequence_item;
    logic [7:0] data;
    logic [7:0] expected_result;
    logic [7:0] actual_result;
    
    `uvm_object_utils(ScoreboardTransaction)
    
    function new(string name = "ScoreboardTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, expected=0x%02h, actual=0x%02h", 
                        data, expected_result, actual_result);
    endfunction
endclass

/**
 * Scoreboard for checking DUT results
 */
class SimpleScoreboard extends uvm_scoreboard;
    uvm_analysis_imp #(ScoreboardTransaction, SimpleScoreboard) imp;
    ScoreboardTransaction expected_queue[$];
    int pass_count = 0;
    int fail_count = 0;
    
    `uvm_component_utils(SimpleScoreboard)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        imp = new("imp", this);
    endfunction
    
    function void write(ScoreboardTransaction txn);
        ScoreboardTransaction expected;
        
        if (expected_queue.size() > 0) begin
            expected = expected_queue.pop_front();
            
            if (txn.actual_result == expected.expected_result) begin
                pass_count++;
                `uvm_info("SCOREBOARD", $sformatf("PASS: %s", txn.convert2string()), UVM_MEDIUM)
            end else begin
                fail_count++;
                `uvm_error("SCOREBOARD", $sformatf("FAIL: %s, expected=0x%02h, got=0x%02h", 
                          txn.convert2string(), expected.expected_result, txn.actual_result))
            end
        end else begin
            `uvm_warning("SCOREBOARD", "No expected transaction found")
        end
    endfunction
    
    function void add_expected(ScoreboardTransaction txn);
        expected_queue.push_back(txn);
    endfunction
    
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        `uvm_info("SCOREBOARD", $sformatf("Results: Pass=%0d, Fail=%0d", 
                  pass_count, fail_count), UVM_MEDIUM)
        if (fail_count > 0) begin
            `uvm_error("SCOREBOARD", "Test FAILED - some transactions did not match")
        end else begin
            `uvm_info("SCOREBOARD", "Test PASSED - all transactions matched", UVM_MEDIUM)
        end
    endfunction
endclass

/**
 * Producer to send expected transactions
 */
class ExpectedProducer extends uvm_component;
    uvm_analysis_port #(ScoreboardTransaction) ap;
    
    `uvm_component_utils(ExpectedProducer)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        ScoreboardTransaction txn;
        
        phase.raise_objection(this);
        `uvm_info("PRODUCER", "Generating expected transactions", UVM_MEDIUM)
        
        for (int i = 0; i < 5; i++) begin
            txn = ScoreboardTransaction::type_id::create("txn");
            txn.data = 8'h10 + 8'(i);
            txn.expected_result = txn.data + 1;  // Expected: data + 1
            txn.actual_result = txn.data + 1;    // Simulate correct result
            
            `uvm_info("PRODUCER", $sformatf("Expected: %s", txn.convert2string()), UVM_MEDIUM)
            ap.write(txn);
            #10;
        end
        
        phase.drop_objection(this);
    endtask
endclass

/**
 * Producer to send actual transactions (with some failures)
 */
class ActualProducer extends uvm_component;
    uvm_analysis_port #(ScoreboardTransaction) ap;
    
    `uvm_component_utils(ActualProducer)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        ScoreboardTransaction txn;
        
        phase.raise_objection(this);
        `uvm_info("PRODUCER", "Generating actual transactions", UVM_MEDIUM)
        
        for (int i = 0; i < 5; i++) begin
            txn = ScoreboardTransaction::type_id::create("txn");
            txn.data = 8'h10 + 8'(i);
            txn.expected_result = txn.data + 1;
            
            // Simulate: first 3 correct, last 2 incorrect
            if (i < 3) begin
                txn.actual_result = txn.data + 1;  // Correct
            end else begin
                txn.actual_result = txn.data;      // Incorrect
            end
            
            `uvm_info("PRODUCER", $sformatf("Actual: %s", txn.convert2string()), UVM_MEDIUM)
            ap.write(txn);
            #10;
        end
        
        phase.drop_objection(this);
    endtask
endclass

/**
 * Test class demonstrating scoreboard
 */
class ScoreboardsTest extends uvm_test;
    SimpleScoreboard scoreboard;
    ExpectedProducer expected_producer;
    ActualProducer actual_producer;
    
    `uvm_component_utils(ScoreboardsTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("TEST", "Building scoreboard test", UVM_MEDIUM)
        scoreboard = SimpleScoreboard::type_id::create("scoreboard", this);
        expected_producer = ExpectedProducer::type_id::create("expected_producer", this);
        actual_producer = ActualProducer::type_id::create("actual_producer", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        // Connect expected to scoreboard (for expected queue)
        expected_producer.ap.connect(scoreboard.imp);
        // Connect actual to scoreboard (for comparison)
        actual_producer.ap.connect(scoreboard.imp);
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        `uvm_info("TEST", "Starting scoreboard test", UVM_MEDIUM)
        
        // Add expected transactions to scoreboard
        fork
            begin
                ScoreboardTransaction txn;
                for (int i = 0; i < 5; i++) begin
                    txn = ScoreboardTransaction::type_id::create("txn");
                    txn.data = 8'h10 + 8'(i);
                    txn.expected_result = txn.data + 1;
                    scoreboard.add_expected(txn);
                end
            end
        join_none
        
        #200;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level testbench module
 */
module scoreboards;
    initial begin
        $display("============================================================");
        $display("UVM Scoreboard Example");
        $display("============================================================");
        $display();
        
        run_test("ScoreboardsTest");
    end
endmodule
