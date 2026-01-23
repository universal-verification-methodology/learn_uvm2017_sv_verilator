/**
 * Module 5: Advanced UVM Test
 * SystemVerilog UVM testbench demonstrating advanced UVM concepts.
 *
 * Demonstrates:
 * - Virtual sequences
 * - Coverage models
 * - Advanced configuration
 * - Callbacks
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

`timescale 1ns/1ps

/**
 * Interface for multi_channel DUT
 */
interface multi_channel_if(input logic clk);
    logic rst_n;
    logic master_valid;
    logic master_ready;
    logic [7:0] master_data;
    logic slave_valid;
    logic slave_ready;
    logic [7:0] slave_data;
endinterface

/**
 * Transaction class
 */
class AdvancedTransaction extends uvm_sequence_item;
    rand logic [7:0] data;
    int channel;
    
    `uvm_object_utils(AdvancedTransaction)
    
    function new(string name = "AdvancedTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, channel=%0d", data, channel);
    endfunction
endclass

/**
 * Coverage model
 */
class AdvancedCoverage extends uvm_subscriber #(AdvancedTransaction);
    int data_coverage[logic [7:0]];
    int channel_coverage[2];
    
    `uvm_component_utils(AdvancedCoverage)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        channel_coverage[0] = 0;
        channel_coverage[1] = 0;
    endfunction
    
    function void write(AdvancedTransaction t);
        if (!data_coverage.exists(t.data)) begin
            data_coverage[t.data] = 0;
        end
        data_coverage[t.data]++;
        channel_coverage[t.channel]++;
    endfunction
    
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        `uvm_info("COVERAGE", $sformatf("Data coverage: %0d unique values", data_coverage.num()), UVM_MEDIUM)
        `uvm_info("COVERAGE", $sformatf("Channel coverage: master=%0d, slave=%0d", 
                  channel_coverage[0], channel_coverage[1]), UVM_MEDIUM)
    endfunction
endclass

/**
 * Sequence
 */
class AdvancedSequence extends uvm_sequence #(AdvancedTransaction);
    int num_items = 10;
    
    `uvm_object_utils(AdvancedSequence)
    
    function new(string name = "AdvancedSequence");
        super.new(name);
    endfunction
    
    task body();
        AdvancedTransaction item;
        
        for (int i = 0; i < num_items; i++) begin
            item = AdvancedTransaction::type_id::create("item");
            if (!item.randomize()) begin
                `uvm_error("SEQUENCE", "Randomization failed")
            end
            item.channel = 0;
            
            start_item(item);
            finish_item(item);
        end
    endtask
endclass

/**
 * Driver
 */
class AdvancedDriver extends uvm_driver #(AdvancedTransaction);
    virtual multi_channel_if vif;
    
    `uvm_component_utils(AdvancedDriver)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(virtual multi_channel_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NO_VIF", "Virtual interface not found")
        end
    endfunction
    
    task run_phase(uvm_phase phase);
        AdvancedTransaction txn;
        
        forever begin
            seq_item_port.get_next_item(txn);
            
            if (txn.channel == 0) begin
                @(posedge vif.clk);
                vif.master_valid <= 1'b1;
                vif.master_data <= txn.data;
                @(posedge vif.clk);
                while (!vif.master_ready) @(posedge vif.clk);
                vif.master_valid <= 1'b0;
            end
            
            seq_item_port.item_done();
        end
    endtask
endclass

/**
 * Monitor
 */
class AdvancedMonitor extends uvm_monitor;
    virtual multi_channel_if vif;
    uvm_analysis_port #(AdvancedTransaction) ap;
    
    `uvm_component_utils(AdvancedMonitor)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(virtual multi_channel_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NO_VIF", "Virtual interface not found")
        end
    endfunction
    
    task run_phase(uvm_phase phase);
        AdvancedTransaction txn;
        
        forever begin
            @(posedge vif.clk);
            if (vif.master_valid && vif.master_ready) begin
                txn = AdvancedTransaction::type_id::create("txn");
                txn.data = vif.master_data;
                txn.channel = 0;
                ap.write(txn);
            end
        end
    endtask
endclass

/**
 * Agent
 */
class AdvancedAgent extends uvm_agent;
    AdvancedDriver driver;
    AdvancedMonitor monitor;
    uvm_sequencer #(AdvancedTransaction) sequencer;
    
    `uvm_component_utils(AdvancedAgent)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        driver = AdvancedDriver::type_id::create("driver", this);
        monitor = AdvancedMonitor::type_id::create("monitor", this);
        sequencer = uvm_sequencer#(AdvancedTransaction)::type_id::create("sequencer", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction
endclass

/**
 * Environment
 */
class AdvancedEnv extends uvm_env;
    AdvancedAgent agent;
    AdvancedCoverage coverage;
    
    `uvm_component_utils(AdvancedEnv)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        agent = AdvancedAgent::type_id::create("agent", this);
        coverage = AdvancedCoverage::type_id::create("coverage", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        agent.monitor.ap.connect(coverage.analysis_export);
    endfunction
endclass

/**
 * Test class
 */
class AdvancedTest extends uvm_test;
    AdvancedEnv env;
    AdvancedSequence seq;
    
    `uvm_component_utils(AdvancedTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = AdvancedEnv::type_id::create("env", this);
        seq = AdvancedSequence::type_id::create("seq");
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        
        `uvm_info("TEST", "Starting advanced UVM test", UVM_MEDIUM)
        seq.start(env.agent.sequencer);
        #1000;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level testbench module
 */
module test_advanced_uvm;
    // Clock and reset
    logic clk;
    logic rst_n;
    
    // Interface
    multi_channel_if multi_channel_if_inst(clk);
    
    // DUT
    multi_channel dut (
        .clk(multi_channel_if_inst.clk),
        .rst_n(multi_channel_if_inst.rst_n),
        .master_valid(multi_channel_if_inst.master_valid),
        .master_ready(multi_channel_if_inst.master_ready),
        .master_data(multi_channel_if_inst.master_data),
        .slave_valid(multi_channel_if_inst.slave_valid),
        .slave_ready(multi_channel_if_inst.slave_ready),
        .slave_data(multi_channel_if_inst.slave_data)
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
    assign multi_channel_if_inst.clk = clk;
    assign multi_channel_if_inst.rst_n = rst_n;
    
    // Run test
    initial begin
        uvm_config_db#(virtual multi_channel_if)::set(null, "*", "vif", multi_channel_if_inst);
        run_test("AdvancedTest");
    end
endmodule
