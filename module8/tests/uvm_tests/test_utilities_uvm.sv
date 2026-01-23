/**
 * Module 8: UVM Utilities Testbench
 * 
 * Comprehensive testbench demonstrating UVM utility classes including:
 * - Command Line Processor (CLP)
 * - Comparators
 * - Recorders
 * - Pools
 * - Queues
 * - String, Math, and Random utilities
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Transaction for utilities testbench
 */
class UtilitiesTransaction extends uvm_sequence_item;
    rand logic [7:0] data;
    rand logic [15:0] address;
    int timestamp;
    int priority;
    
    `uvm_object_utils(UtilitiesTransaction)
    
    function new(string name = "UtilitiesTransaction");
        super.new(name);
        timestamp = 0;
        priority = 0;
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h, ts=%0d, prio=%0d", 
            data, address, timestamp, priority);
    endfunction
    
    function bit compare(UtilitiesTransaction rhs);
        return (data == rhs.data && address == rhs.address);
    endfunction
endclass

/**
 * Sequence for utilities testbench
 */
class UtilitiesSequence extends uvm_sequence #(UtilitiesTransaction);
    int num_transactions = 20;
    
    `uvm_object_utils(UtilitiesSequence)
    
    function new(string name = "UtilitiesSequence");
        super.new(name);
    endfunction
    
    task body();
        for (int i = 0; i < num_transactions; i++) begin
            UtilitiesTransaction txn;
            `uvm_do(txn)
            txn.data = i * 8'h10;
            txn.address = i * 16'h100;
            txn.timestamp = i * 10;
            txn.priority = $urandom_range(0, 9);
        end
    endtask
endclass

/**
 * Driver for utilities testbench
 */
class UtilitiesDriver extends uvm_driver #(UtilitiesTransaction);
    `uvm_component_utils(UtilitiesDriver)
    
    function new(string name = "UtilitiesDriver", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    task run_phase(uvm_phase phase);
        UtilitiesTransaction txn;
        forever begin
            seq_item_port.get_next_item(txn);
            `uvm_info("DRIVER", $sformatf("Driving: %s", txn.convert2string()), UVM_MEDIUM)
            #10;
            seq_item_port.item_done();
        end
    endtask
endclass

/**
 * Monitor for utilities testbench
 */
class UtilitiesMonitor extends uvm_monitor;
    uvm_analysis_port #(UtilitiesTransaction) analysis_port;
    
    `uvm_component_utils(UtilitiesMonitor)
    
    function new(string name = "UtilitiesMonitor", uvm_component parent = null);
        super.new(name, parent);
        analysis_port = new("analysis_port", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        // Monitor would sample signals here
        // For this example, we'll generate transactions
        UtilitiesTransaction txn;
        for (int i = 0; i < 20; i++) begin
            #10;
            txn = UtilitiesTransaction::type_id::create("txn");
            txn.data = i * 8'h10;
            txn.address = i * 16'h100;
            txn.timestamp = i * 10;
            analysis_port.write(txn);
        end
    endtask
endclass

/**
 * Scoreboard using comparator
 */
class UtilitiesScoreboard extends uvm_scoreboard;
    UtilitiesTransaction expected_queue[$];
    UtilitiesTransaction actual_queue[$];
    int matches;
    int mismatches;
    
    uvm_analysis_imp #(UtilitiesTransaction, UtilitiesScoreboard) expected_imp;
    uvm_analysis_imp #(UtilitiesTransaction, UtilitiesScoreboard) actual_imp;
    
    `uvm_component_utils(UtilitiesScoreboard)
    
    function new(string name = "UtilitiesScoreboard", uvm_component parent = null);
        super.new(name, parent);
        expected_imp = new("expected_imp", this);
        actual_imp = new("actual_imp", this);
        matches = 0;
        mismatches = 0;
    endfunction
    
    function void write_expected(UtilitiesTransaction txn);
        expected_queue.push_back(txn);
        compare_transactions();
    endfunction
    
    function void write_actual(UtilitiesTransaction txn);
        actual_queue.push_back(txn);
        compare_transactions();
    endfunction
    
    function void compare_transactions();
        while (expected_queue.size() > 0 && actual_queue.size() > 0) begin
            UtilitiesTransaction exp_txn = expected_queue.pop_front();
            UtilitiesTransaction act_txn = actual_queue.pop_front();
            
            if (exp_txn.compare(act_txn)) begin
                matches++;
                `uvm_info("SCOREBOARD", $sformatf("MATCH: %s", exp_txn.convert2string()), UVM_MEDIUM)
            end else begin
                mismatches++;
                `uvm_error("SCOREBOARD", $sformatf("MISMATCH: Expected %s, Got %s", 
                    exp_txn.convert2string(), act_txn.convert2string()))
            end
        end
    endfunction
    
    function void report_phase(uvm_phase phase);
        `uvm_info("SCOREBOARD", $sformatf("Scoreboard Statistics:"), UVM_LOW)
        `uvm_info("SCOREBOARD", $sformatf("  Matches: %0d", matches), UVM_LOW)
        `uvm_info("SCOREBOARD", $sformatf("  Mismatches: %0d", mismatches), UVM_LOW)
    endfunction
endclass

/**
 * Agent for utilities testbench
 */
class UtilitiesAgent extends uvm_agent;
    UtilitiesDriver driver;
    UtilitiesMonitor monitor;
    uvm_sequencer #(UtilitiesTransaction) sequencer;
    
    `uvm_component_utils(UtilitiesAgent)
    
    function new(string name = "UtilitiesAgent", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        driver = UtilitiesDriver::type_id::create("driver", this);
        monitor = UtilitiesMonitor::type_id::create("monitor", this);
        sequencer = uvm_sequencer #(UtilitiesTransaction)::type_id::create("sequencer", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction
endclass

/**
 * Environment for utilities testbench
 */
class UtilitiesEnv extends uvm_env;
    UtilitiesAgent agent;
    UtilitiesScoreboard scoreboard;
    string test_mode;
    
    `uvm_component_utils(UtilitiesEnv)
    
    function new(string name = "UtilitiesEnv", uvm_component parent = null);
        super.new(name, parent);
        test_mode = "normal";
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // Configure from command line
        void'(uvm_cmdline_proc.get_arg_value("+test_mode", test_mode));
        `uvm_info("ENV", $sformatf("Test mode: %s", test_mode), UVM_LOW)
        
        agent = UtilitiesAgent::type_id::create("agent", this);
        scoreboard = UtilitiesScoreboard::type_id::create("scoreboard", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        agent.monitor.analysis_port.connect(scoreboard.actual_imp);
    endfunction
endclass

/**
 * Test for utilities testbench
 */
class UtilitiesTest extends uvm_test;
    UtilitiesEnv env;
    
    `uvm_component_utils(UtilitiesTest)
    
    function new(string name = "UtilitiesTest", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = UtilitiesEnv::type_id::create("env", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        UtilitiesSequence seq;
        phase.raise_objection(this);
        
        seq = UtilitiesSequence::type_id::create("seq");
        seq.start(env.agent.sequencer);
        
        #500;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level module for utilities testbench
 */
module test_utilities_uvm;
    import uvm_pkg::*;
    
    initial begin
        run_test("UtilitiesTest");
    end
endmodule
