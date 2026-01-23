/**
 * Module 3: Adder UVM Test
 * SystemVerilog UVM testbench for 8-bit adder.
 *
 * Demonstrates:
 * - Complete UVM testbench structure
 * - UVM phases
 * - Transaction modeling
 * - Sequence generation
 * - Driver, monitor, scoreboard
 * - Agent and environment
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

`timescale 1ns/1ps

/**
 * Transaction class for adder test
 */
class AdderTransaction extends uvm_sequence_item;
    rand logic [7:0] a;
    rand logic [7:0] b;
    logic [7:0] expected_sum;
    logic expected_carry;
    
    `uvm_object_utils(AdderTransaction)
    
    function new(string name = "AdderTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("a=0x%02h, b=0x%02h, expected_sum=0x%02h, expected_carry=%0b", 
                        a, b, expected_sum, expected_carry);
    endfunction
    
    function void post_randomize();
        // Calculate expected results
        logic [8:0] result = a + b;
        expected_sum = result[7:0];
        expected_carry = result[8];
    endfunction
endclass

/**
 * Sequence to generate adder test vectors
 */
class AdderSequence extends uvm_sequence #(AdderTransaction);
    `uvm_object_utils(AdderSequence)
    
    function new(string name = "AdderSequence");
        super.new(name);
    endfunction
    
    task body();
        AdderTransaction txn;
        
        // Generate test vectors
        logic [7:0] test_a[] = '{8'h00, 8'h01, 8'h55, 8'hAA, 8'hFF, 8'h80, 8'h7F};
        logic [7:0] test_b[] = '{8'h00, 8'h01, 8'h55, 8'hAA, 8'h01, 8'h80, 8'h01};
        
        foreach (test_a[i]) begin
            txn = AdderTransaction::type_id::create("txn");
            txn.a = test_a[i];
            txn.b = test_b[i];
            txn.post_randomize();  // Calculate expected results
            
            start_item(txn);
            finish_item(txn);
        end
    endtask
endclass

/**
 * Driver to apply inputs to DUT
 */
class AdderDriver extends uvm_driver #(AdderTransaction);
    virtual adder_if vif;
    
    `uvm_component_utils(AdderDriver)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(virtual adder_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NO_VIF", "Virtual interface not found")
        end
    endfunction
    
    task run_phase(uvm_phase phase);
        AdderTransaction txn;
        
        forever begin
            seq_item_port.get_next_item(txn);
            
            // Drive DUT signals
            vif.a <= txn.a;
            vif.b <= txn.b;
            
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
class AdderMonitor extends uvm_monitor;
    virtual adder_if vif;
    uvm_analysis_port #(AdderTransaction) ap;
    
    `uvm_component_utils(AdderMonitor)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(virtual adder_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NO_VIF", "Virtual interface not found")
        end
    endfunction
    
    task run_phase(uvm_phase phase);
        AdderTransaction txn;
        
        forever begin
            @(posedge vif.clk);
            #1;
            
            txn = AdderTransaction::type_id::create("txn");
            txn.a = vif.a;
            txn.b = vif.b;
            txn.expected_sum = vif.sum;
            txn.expected_carry = vif.carry;
            
            `uvm_info("MONITOR", $sformatf("Observed: sum=0x%02h, carry=%0b", 
                      vif.sum, vif.carry), UVM_MEDIUM)
            
            ap.write(txn);
        end
    endtask
endclass

/**
 * Scoreboard to check DUT behavior
 */
class AdderScoreboard extends uvm_scoreboard;
    uvm_analysis_imp #(AdderTransaction, AdderScoreboard) imp;
    AdderTransaction expected_queue[$];
    int match_count = 0;
    int mismatch_count = 0;
    
    `uvm_component_utils(AdderScoreboard)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        imp = new("imp", this);
    endfunction
    
    function void write(AdderTransaction txn);
        AdderTransaction expected;
        logic [8:0] calculated_result;
        
        if (expected_queue.size() > 0) begin
            expected = expected_queue.pop_front();
            calculated_result = expected.a + expected.b;
            
            if ((txn.expected_sum == calculated_result[7:0]) && 
                (txn.expected_carry == calculated_result[8])) begin
                match_count++;
                `uvm_info("SCOREBOARD", $sformatf("PASS: %s", txn.convert2string()), UVM_MEDIUM)
            end else begin
                mismatch_count++;
                `uvm_error("SCOREBOARD", $sformatf("FAIL: Expected sum=0x%02h, carry=%0b, got sum=0x%02h, carry=%0b",
                          calculated_result[7:0], calculated_result[8], 
                          txn.expected_sum, txn.expected_carry))
            end
        end
    endfunction
    
    function void add_expected(AdderTransaction txn);
        expected_queue.push_back(txn);
    endfunction
    
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        `uvm_info("SCOREBOARD", $sformatf("Matches: %0d, Mismatches: %0d", 
                  match_count, mismatch_count), UVM_MEDIUM)
    endfunction
endclass

/**
 * Agent containing driver, monitor, and sequencer
 */
class AdderAgent extends uvm_agent;
    AdderDriver driver;
    AdderMonitor monitor;
    uvm_sequencer #(AdderTransaction) sequencer;
    
    `uvm_component_utils(AdderAgent)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        driver = AdderDriver::type_id::create("driver", this);
        monitor = AdderMonitor::type_id::create("monitor", this);
        sequencer = uvm_sequencer#(AdderTransaction)::type_id::create("sequencer", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction
endclass

/**
 * Environment containing agent and scoreboard
 */
class AdderEnv extends uvm_env;
    AdderAgent agent;
    AdderScoreboard scoreboard;
    
    `uvm_component_utils(AdderEnv)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        agent = AdderAgent::type_id::create("agent", this);
        scoreboard = AdderScoreboard::type_id::create("scoreboard", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        agent.monitor.ap.connect(scoreboard.imp);
    endfunction
endclass

/**
 * Test class
 */
class AdderTest extends uvm_test;
    AdderEnv env;
    AdderSequence seq;
    
    `uvm_component_utils(AdderTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = AdderEnv::type_id::create("env", this);
        seq = AdderSequence::type_id::create("seq");
    endfunction
    
    task run_phase(uvm_phase phase);
        AdderTransaction txn;
        
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
 * Interface for adder
 */
interface adder_if(input logic clk);
    logic rst_n;
    logic [7:0] a;
    logic [7:0] b;
    logic [7:0] sum;
    logic carry;
endinterface

/**
 * Top-level testbench module
 */
module test_adder_uvm;
    // Clock and reset
    logic clk;
    logic rst_n;
    
    // Interface
    adder_if adder_if_inst(clk);
    
    // DUT
    adder dut (
        .clk(adder_if_inst.clk),
        .rst_n(adder_if_inst.rst_n),
        .a(adder_if_inst.a),
        .b(adder_if_inst.b),
        .sum(adder_if_inst.sum),
        .carry(adder_if_inst.carry)
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
    // Note: clk is already connected via interface port (adder_if_inst(clk))
    assign adder_if_inst.rst_n = rst_n;
    
    // Run test
    initial begin
        uvm_config_db#(virtual adder_if)::set(null, "*", "vif", adder_if_inst);
        run_test("AdderTest");
    end
endmodule
