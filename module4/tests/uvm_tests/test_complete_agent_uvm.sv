/**
 * Module 4: Complete Agent UVM Test
 * SystemVerilog UVM testbench demonstrating complete agent with all components.
 *
 * Demonstrates:
 * - Complete UVM agent structure
 * - Driver, monitor, sequencer integration
 * - TLM communication
 * - Scoreboard for result checking
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

`timescale 1ns/1ps

/**
 * Interface for simple_interface DUT
 */
interface simple_if(input logic clk);
    logic rst_n;
    logic valid;
    logic ready;
    logic [7:0] data;
    logic [15:0] address;
    logic [7:0] result;
endinterface

/**
 * Transaction class
 */
class InterfaceTransaction extends uvm_sequence_item;
    rand logic [7:0] data;
    rand logic [15:0] address;
    logic [7:0] expected_result;
    logic [7:0] actual_result;
    
    `uvm_object_utils(InterfaceTransaction)
    
    function new(string name = "InterfaceTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h, expected=0x%02h, actual=0x%02h", 
                        data, address, expected_result, actual_result);
    endfunction
    
    function void post_randomize();
        expected_result = data + 1;  // DUT operation: result = data + 1
    endfunction
endclass

/**
 * Sequence to generate transactions
 */
class InterfaceSequence extends uvm_sequence #(InterfaceTransaction);
    `uvm_object_utils(InterfaceSequence)
    
    function new(string name = "InterfaceSequence");
        super.new(name);
    endfunction
    
    task body();
        InterfaceTransaction txn;
        
        for (int i = 0; i < 10; i++) begin
            txn = InterfaceTransaction::type_id::create("txn");
            if (!txn.randomize()) begin
                `uvm_error("SEQUENCE", "Randomization failed")
            end
            txn.post_randomize();
            
            start_item(txn);
            finish_item(txn);
        end
    endtask
endclass

/**
 * Driver to drive DUT
 */
class InterfaceDriver extends uvm_driver #(InterfaceTransaction);
    virtual simple_if vif;
    
    `uvm_component_utils(InterfaceDriver)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(virtual simple_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NO_VIF", "Virtual interface not found")
        end
    endfunction
    
    task run_phase(uvm_phase phase);
        InterfaceTransaction txn;
        
        forever begin
            seq_item_port.get_next_item(txn);
            
            // Drive DUT signals
            @(posedge vif.clk);
            vif.valid <= 1'b1;
            vif.data <= txn.data;
            vif.address <= txn.address;
            
            // Wait for ready
            @(posedge vif.clk);
            while (!vif.ready) @(posedge vif.clk);
            
            vif.valid <= 1'b0;
            
            `uvm_info("DRIVER", $sformatf("Drove: %s", txn.convert2string()), UVM_MEDIUM)
            
            seq_item_port.item_done();
        end
    endtask
endclass

/**
 * Monitor to observe DUT
 */
class InterfaceMonitor extends uvm_monitor;
    virtual simple_if vif;
    uvm_analysis_port #(InterfaceTransaction) ap;
    
    `uvm_component_utils(InterfaceMonitor)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(virtual simple_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NO_VIF", "Virtual interface not found")
        end
    endfunction
    
    task run_phase(uvm_phase phase);
        InterfaceTransaction txn;
        
        forever begin
            @(posedge vif.clk);
            if (vif.valid && vif.ready) begin
                txn = InterfaceTransaction::type_id::create("txn");
                txn.data = vif.data;
                txn.address = vif.address;
                txn.actual_result = vif.result;
                txn.expected_result = vif.data + 1;
                
                `uvm_info("MONITOR", $sformatf("Monitored: %s", txn.convert2string()), UVM_MEDIUM)
                ap.write(txn);
            end
        end
    endtask
endclass

/**
 * Scoreboard
 */
class InterfaceScoreboard extends uvm_scoreboard;
    uvm_analysis_imp #(InterfaceTransaction, InterfaceScoreboard) imp;
    InterfaceTransaction expected_queue[$];
    int pass_count = 0;
    int fail_count = 0;
    
    `uvm_component_utils(InterfaceScoreboard)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        imp = new("imp", this);
    endfunction
    
    function void write(InterfaceTransaction txn);
        InterfaceTransaction expected;
        
        if (expected_queue.size() > 0) begin
            expected = expected_queue.pop_front();
            
            if (txn.actual_result == expected.expected_result) begin
                pass_count++;
                `uvm_info("SCOREBOARD", $sformatf("PASS: %s", txn.convert2string()), UVM_MEDIUM)
            end else begin
                fail_count++;
                `uvm_error("SCOREBOARD", $sformatf("FAIL: %s", txn.convert2string()))
            end
        end
    endfunction
    
    function void add_expected(InterfaceTransaction txn);
        expected_queue.push_back(txn);
    endfunction
    
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        `uvm_info("SCOREBOARD", $sformatf("Results: Pass=%0d, Fail=%0d", 
                  pass_count, fail_count), UVM_MEDIUM)
    endfunction
endclass

/**
 * Complete agent
 */
class InterfaceAgent extends uvm_agent;
    InterfaceDriver driver;
    InterfaceMonitor monitor;
    uvm_sequencer #(InterfaceTransaction) sequencer;
    
    `uvm_component_utils(InterfaceAgent)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        driver = InterfaceDriver::type_id::create("driver", this);
        monitor = InterfaceMonitor::type_id::create("monitor", this);
        sequencer = uvm_sequencer#(InterfaceTransaction)::type_id::create("sequencer", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction
endclass

/**
 * Environment
 */
class InterfaceEnv extends uvm_env;
    InterfaceAgent agent;
    InterfaceScoreboard scoreboard;
    
    `uvm_component_utils(InterfaceEnv)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        agent = InterfaceAgent::type_id::create("agent", this);
        scoreboard = InterfaceScoreboard::type_id::create("scoreboard", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        agent.monitor.ap.connect(scoreboard.imp);
    endfunction
endclass

/**
 * Test class
 */
class CompleteAgentTest extends uvm_test;
    InterfaceEnv env;
    InterfaceSequence seq;
    
    `uvm_component_utils(CompleteAgentTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = InterfaceEnv::type_id::create("env", this);
        seq = InterfaceSequence::type_id::create("seq");
    endfunction
    
    task run_phase(uvm_phase phase);
        InterfaceTransaction txn;
        
        phase.raise_objection(this);
        
        `uvm_info("TEST", "Starting complete agent test", UVM_MEDIUM)
        
        // Add expected transactions
        fork
            begin
                for (int i = 0; i < 10; i++) begin
                    txn = InterfaceTransaction::type_id::create("txn");
                    txn.data = $urandom_range(0, 255);
                    txn.address = $urandom_range(0, 65535);
                    txn.expected_result = txn.data + 1;
                    env.scoreboard.add_expected(txn);
                end
            end
        join_none
        
        // Start sequence
        seq.start(env.agent.sequencer);
        
        #1000;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level testbench module
 */
module test_complete_agent_uvm;
    // Clock and reset
    logic clk;
    logic rst_n;
    
    // Interface
    simple_if simple_if_inst(clk);
    
    // DUT
    simple_interface dut (
        .clk(simple_if_inst.clk),
        .rst_n(simple_if_inst.rst_n),
        .valid(simple_if_inst.valid),
        .ready(simple_if_inst.ready),
        .data(simple_if_inst.data),
        .address(simple_if_inst.address),
        .result(simple_if_inst.result)
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
    
    // Connect interface signals
    assign simple_if_inst.clk = clk;
    assign simple_if_inst.rst_n = rst_n;
    
    // Run test
    initial begin
        uvm_config_db#(virtual simple_if)::set(null, "*", "vif", simple_if_inst);
        run_test("CompleteAgentTest");
    end
endmodule
