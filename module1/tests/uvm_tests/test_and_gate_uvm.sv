/**
 * Module 1: AND Gate UVM Test
 * SystemVerilog UVM testbench for AND gate.
 *
 * Demonstrates:
 * - UVM test structure
 * - UVM phases
 * - UVM reporting
 * - Transaction modeling
 * - Sequence generation
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Transaction class for AND gate test
 */
class AndGateTransaction extends uvm_sequence_item;
    rand bit a;
    rand bit b;
    bit expected_y;
    
    `uvm_object_utils(AndGateTransaction)
    
    function new(string name = "AndGateTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("a=%0b, b=%0b, expected_y=%0b", a, b, expected_y);
    endfunction
    
    constraint valid_combination {
        // All combinations are valid
    }
endclass

/**
 * Sequence to generate AND gate test vectors
 */
class AndGateSequence extends uvm_sequence #(AndGateTransaction);
    `uvm_object_utils(AndGateSequence)
    
    function new(string name = "AndGateSequence");
        super.new(name);
    endfunction
    
    task body();
        AndGateTransaction txn;
        
        // Generate test vectors
        int test_vectors[4][3] = '{
            '{0, 0, 0},
            '{0, 1, 0},
            '{1, 0, 0},
            '{1, 1, 1}
        };
        
        for (int i = 0; i < 4; i++) begin
            txn = AndGateTransaction::type_id::create("txn");
            txn.a = test_vectors[i][0];
            txn.b = test_vectors[i][1];
            txn.expected_y = test_vectors[i][2];
            
            start_item(txn);
            finish_item(txn);
        end
    endtask
endclass

/**
 * Driver to apply inputs to DUT
 */
class AndGateDriver extends uvm_driver #(AndGateTransaction);
    virtual and_gate_if vif;
    
    `uvm_component_utils(AndGateDriver)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(virtual and_gate_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NO_VIF", "Virtual interface not found")
        end
    endfunction
    
    task run_phase(uvm_phase phase);
        AndGateTransaction txn;
        
        forever begin
            seq_item_port.get_next_item(txn);
            
            // Drive DUT signals from transaction
            vif.a <= txn.a;
            vif.b <= txn.b;
            
            `uvm_info("DRIVER", $sformatf("Driving DUT: %s", txn.convert2string()), UVM_MEDIUM)
            
            @(posedge vif.clk);
            #1;
            
            seq_item_port.item_done();
        end
    endtask
endclass

/**
 * Monitor to observe DUT outputs
 */
class AndGateMonitor extends uvm_monitor;
    virtual and_gate_if vif;
    uvm_analysis_port #(AndGateTransaction) ap;
    
    `uvm_component_utils(AndGateMonitor)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(virtual and_gate_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NO_VIF", "Virtual interface not found")
        end
    endfunction
    
    task run_phase(uvm_phase phase);
        AndGateTransaction txn;
        
        forever begin
            @(posedge vif.clk);
            #1;
            
            txn = AndGateTransaction::type_id::create("txn");
            txn.a = vif.a;
            txn.b = vif.b;
            txn.expected_y = vif.y;
            
            `uvm_info("MONITOR", $sformatf("Observed: %s", txn.convert2string()), UVM_MEDIUM)
            
            ap.write(txn);
        end
    endtask
endclass

/**
 * Scoreboard to check results
 */
class AndGateScoreboard extends uvm_scoreboard;
    uvm_analysis_imp #(AndGateTransaction, AndGateScoreboard) imp;
    int pass_count = 0;
    int fail_count = 0;
    
    `uvm_component_utils(AndGateScoreboard)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        imp = new("imp", this);
    endfunction
    
    function void write(AndGateTransaction txn);
        bit expected = txn.a & txn.b;
        
        if (txn.expected_y == expected) begin
            pass_count++;
            `uvm_info("SCOREBOARD", $sformatf("PASS: %s", txn.convert2string()), UVM_MEDIUM)
        end else begin
            fail_count++;
            `uvm_error("SCOREBOARD", $sformatf("FAIL: %s, expected=%0b, got=%0b", 
                      txn.convert2string(), expected, txn.expected_y))
        end
    endfunction
    
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        `uvm_info("SCOREBOARD", $sformatf("Pass: %0d, Fail: %0d", pass_count, fail_count), UVM_MEDIUM)
    endfunction
endclass

/**
 * Agent containing driver, monitor, and sequencer
 */
class AndGateAgent extends uvm_agent;
    AndGateDriver driver;
    AndGateMonitor monitor;
    uvm_sequencer #(AndGateTransaction) sequencer;
    
    `uvm_component_utils(AndGateAgent)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        driver = AndGateDriver::type_id::create("driver", this);
        monitor = AndGateMonitor::type_id::create("monitor", this);
        sequencer = uvm_sequencer#(AndGateTransaction)::type_id::create("sequencer", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction
endclass

/**
 * Environment containing agent and scoreboard
 */
class AndGateEnv extends uvm_env;
    AndGateAgent agent;
    AndGateScoreboard scoreboard;
    
    `uvm_component_utils(AndGateEnv)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        agent = AndGateAgent::type_id::create("agent", this);
        scoreboard = AndGateScoreboard::type_id::create("scoreboard", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        agent.monitor.ap.connect(scoreboard.imp);
    endfunction
endclass

/**
 * Test class
 */
class AndGateTest extends uvm_test;
    AndGateEnv env;
    AndGateSequence seq;
    
    `uvm_component_utils(AndGateTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = AndGateEnv::type_id::create("env", this);
        seq = AndGateSequence::type_id::create("seq");
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        
        `uvm_info("TEST", "Starting AND gate test", UVM_MEDIUM)
        
        seq.start(env.agent.sequencer);
        
        #100;
        
        phase.drop_objection(this);
    endtask
endclass

/**
 * Interface for AND gate
 */
interface and_gate_if(input logic clk);
    logic a;
    logic b;
    logic y;
endinterface

/**
 * Testbench module
 */
module test_and_gate_uvm;
    // Clock generation
    logic clk;
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end
    
    // Interface instantiation
    and_gate_if bus(clk);
    
    // DUT instantiation
    and_gate dut (
        .a(bus.a),
        .b(bus.b),
        .y(bus.y)
    );
    
    initial begin
        // Set virtual interface in ConfigDB
        uvm_config_db#(virtual and_gate_if)::set(null, "*", "vif", bus);
        
        // Run test
        run_test("AndGateTest");
    end
endmodule
