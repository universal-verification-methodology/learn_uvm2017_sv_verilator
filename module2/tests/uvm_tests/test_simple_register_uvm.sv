/**
 * Module 2: Simple Register UVM Test
 * SystemVerilog UVM testbench for simple register.
 *
 * Demonstrates:
 * - UVM test structure
 * - UVM phases
 * - Clock and reset generation
 * - Signal driving and monitoring
 * - Basic verification patterns
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

`timescale 1ns/1ps

/**
 * Transaction class for register test
 */
class RegisterTransaction extends uvm_sequence_item;
    rand logic [7:0] data;
    logic [7:0] expected_q;
    
    `uvm_object_utils(RegisterTransaction)
    
    function new(string name = "RegisterTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, expected_q=0x%02h", data, expected_q);
    endfunction
endclass

/**
 * Sequence to generate register test vectors
 */
class RegisterSequence extends uvm_sequence #(RegisterTransaction);
    `uvm_object_utils(RegisterSequence)
    
    function new(string name = "RegisterSequence");
        super.new(name);
    endfunction
    
    task body();
        RegisterTransaction txn;
        
        // Generate test vectors
        logic [7:0] test_data[] = '{8'h00, 8'h55, 8'hAA, 8'hFF, 8'h11, 8'h22};
        
        foreach (test_data[i]) begin
            txn = RegisterTransaction::type_id::create("txn");
            txn.data = test_data[i];
            txn.expected_q = test_data[i];
            
            start_item(txn);
            finish_item(txn);
        end
    endtask
endclass

/**
 * Driver to apply inputs to DUT
 */
class RegisterDriver extends uvm_driver #(RegisterTransaction);
    virtual register_if vif;
    
    `uvm_component_utils(RegisterDriver)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(virtual register_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NO_VIF", "Virtual interface not found")
        end
    endfunction
    
    task run_phase(uvm_phase phase);
        RegisterTransaction txn;
        
        forever begin
            seq_item_port.get_next_item(txn);
            
            // Drive DUT signals
            vif.enable <= 1;
            vif.d <= txn.data;
            
            `uvm_info("DRIVER", $sformatf("Driving: %s", txn.convert2string()), UVM_MEDIUM)
            
            @(posedge vif.clk);
            #1;
            
            seq_item_port.item_done();
        end
    endtask
endclass

/**
 * Monitor to observe DUT outputs
 */
class RegisterMonitor extends uvm_monitor;
    virtual register_if vif;
    uvm_analysis_port #(RegisterTransaction) ap;
    
    `uvm_component_utils(RegisterMonitor)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(virtual register_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NO_VIF", "Virtual interface not found")
        end
    endfunction
    
    task run_phase(uvm_phase phase);
        RegisterTransaction txn;
        
        forever begin
            @(posedge vif.clk);
            #1;
            
            txn = RegisterTransaction::type_id::create("txn");
            txn.data = vif.d;
            txn.expected_q = vif.q;
            
            `uvm_info("MONITOR", $sformatf("Observed: q=0x%02h", vif.q), UVM_MEDIUM)
            
            ap.write(txn);
        end
    endtask
endclass

/**
 * Scoreboard to check DUT behavior
 */
class RegisterScoreboard extends uvm_scoreboard;
    uvm_analysis_imp #(RegisterTransaction, RegisterScoreboard) imp;
    RegisterTransaction expected_queue[$];
    
    `uvm_component_utils(RegisterScoreboard)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        imp = new("imp", this);
    endfunction
    
    function void write(RegisterTransaction txn);
        RegisterTransaction expected;
        
        if (expected_queue.size() > 0) begin
            expected = expected_queue.pop_front();
            if (txn.expected_q == expected.expected_q) begin
                `uvm_info("SCOREBOARD", $sformatf("PASS: Expected 0x%02h, got 0x%02h", 
                          expected.expected_q, txn.expected_q), UVM_MEDIUM)
            end else begin
                `uvm_error("SCOREBOARD", $sformatf("FAIL: Expected 0x%02h, got 0x%02h", 
                          expected.expected_q, txn.expected_q))
            end
        end
    endfunction
    
    function void add_expected(RegisterTransaction txn);
        expected_queue.push_back(txn);
    endfunction
endclass

/**
 * Agent containing driver, monitor, and sequencer
 */
class RegisterAgent extends uvm_agent;
    RegisterDriver driver;
    RegisterMonitor monitor;
    uvm_sequencer #(RegisterTransaction) sequencer;
    
    `uvm_component_utils(RegisterAgent)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        driver = RegisterDriver::type_id::create("driver", this);
        monitor = RegisterMonitor::type_id::create("monitor", this);
        sequencer = uvm_sequencer#(RegisterTransaction)::type_id::create("sequencer", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction
endclass

/**
 * Environment containing agent and scoreboard
 */
class RegisterEnv extends uvm_env;
    RegisterAgent agent;
    RegisterScoreboard scoreboard;
    
    `uvm_component_utils(RegisterEnv)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        agent = RegisterAgent::type_id::create("agent", this);
        scoreboard = RegisterScoreboard::type_id::create("scoreboard", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        agent.monitor.ap.connect(scoreboard.imp);
    endfunction
endclass

/**
 * Test class
 */
class RegisterTest extends uvm_test;
    RegisterEnv env;
    RegisterSequence seq;
    
    `uvm_component_utils(RegisterTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = RegisterEnv::type_id::create("env", this);
        seq = RegisterSequence::type_id::create("seq");
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        
        `uvm_info("TEST", "Starting test", UVM_MEDIUM)
        
        // Start sequence
        seq.start(env.agent.sequencer);
        
        // Wait for completion
        #1000;
        
        `uvm_info("TEST", "Test complete", UVM_MEDIUM)
        
        phase.drop_objection(this);
    endtask
endclass

/**
 * Interface for register
 */
interface register_if(input logic clk);
    logic rst_n;
    logic enable;
    logic [7:0] d;
    logic [7:0] q;
endinterface

/**
 * Top-level testbench module
 */
module test_simple_register_uvm;
    // Clock and reset
    logic clk;
    logic rst_n;
    
    // Interface
    register_if reg_if(clk);
    
    // DUT
    simple_register dut (
        .clk(reg_if.clk),
        .rst_n(reg_if.rst_n),
        .enable(reg_if.enable),
        .d(reg_if.d),
        .q(reg_if.q)
    );
    
    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end
    
    // Reset generation
    initial begin
        rst_n = 0;
        #100;
        rst_n = 1;
    end
    
    // Connect interface reset (clock is already connected via interface port)
    assign reg_if.rst_n = rst_n;
    
    // Run test
    initial begin
        uvm_config_db#(virtual register_if)::set(null, "*", "vif", reg_if);
        run_test("RegisterTest");
    end
endmodule
