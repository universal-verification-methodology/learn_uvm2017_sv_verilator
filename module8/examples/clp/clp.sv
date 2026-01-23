/**
 * Module 8 Example 8.1: Command Line Processor (CLP)
 * Demonstrates using UVM Command Line Processor for test configuration.
 * 
 * This example shows:
 * - Command-line argument parsing
 * - Plusarg handling
 * - Test configuration from command line
 * - CLP usage patterns
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Transaction for CLP example
 */
class CLPTransaction extends uvm_sequence_item;
    rand logic [7:0] data;
    rand logic [15:0] address;
    
    `uvm_object_utils(CLPTransaction)
    
    function new(string name = "CLPTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h", data, address);
    endfunction
endclass

/**
 * Sequence using CLP configuration
 */
class CLPSequence extends uvm_sequence #(CLPTransaction);
    int num_transactions = 10;
    
    `uvm_object_utils(CLPSequence)
    
    function new(string name = "CLPSequence");
        super.new(name);
    endfunction
    
    task body();
        for (int i = 0; i < num_transactions; i++) begin
            CLPTransaction txn;
            `uvm_do(txn)
            txn.data = i * 8'h10;
            txn.address = i * 16'h100;
        end
    endtask
endclass

/**
 * Driver for CLP example
 */
class CLPDriver extends uvm_driver #(CLPTransaction);
    `uvm_component_utils(CLPDriver)
    
    function new(string name = "CLPDriver", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    task run_phase(uvm_phase phase);
        CLPTransaction txn;
        forever begin
            seq_item_port.get_next_item(txn);
            `uvm_info("DRIVER", $sformatf("Driving: %s", txn.convert2string()), UVM_MEDIUM)
            #10;
            seq_item_port.item_done();
        end
    endtask
endclass

/**
 * Agent for CLP example
 */
class CLPAgent extends uvm_agent;
    CLPDriver driver;
    uvm_sequencer #(CLPTransaction) sequencer;
    
    `uvm_component_utils(CLPAgent)
    
    function new(string name = "CLPAgent", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        driver = CLPDriver::type_id::create("driver", this);
        sequencer = uvm_sequencer #(CLPTransaction)::type_id::create("sequencer", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction
endclass

/**
 * Environment demonstrating CLP usage
 */
class CLPEnv extends uvm_env;
    CLPAgent agent;
    string test_mode = "normal";
    int debug_level = 0;
    int num_transactions = 10;
    int seed = 0;
    
    `uvm_component_utils(CLPEnv)
    
    function new(string name = "CLPEnv", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        `uvm_info("CLP", "=" * 60, UVM_LOW)
        `uvm_info("CLP", "Building CLP Environment", UVM_LOW)
        `uvm_info("CLP", "=" * 60, UVM_LOW)
        
        // Get command-line arguments using UVM CLP
        void'(uvm_cmdline_proc.get_arg_value("+test_mode", test_mode));
        void'(uvm_cmdline_proc.get_arg_value("+debug_level", debug_level));
        void'(uvm_cmdline_proc.get_arg_value("+num_transactions", num_transactions));
        void'(uvm_cmdline_proc.get_arg_value("+seed", seed));
        
        `uvm_info("CLP", $sformatf("CLP Configuration:"), UVM_LOW)
        `uvm_info("CLP", $sformatf("  test_mode: %s", test_mode), UVM_LOW)
        `uvm_info("CLP", $sformatf("  debug_level: %0d", debug_level), UVM_LOW)
        `uvm_info("CLP", $sformatf("  num_transactions: %0d", num_transactions), UVM_LOW)
        `uvm_info("CLP", $sformatf("  seed: %0d", seed), UVM_LOW)
        
        // Set random seed if provided
        if (seed != 0) begin
            `uvm_info("CLP", $sformatf("Setting random seed to %0d", seed), UVM_LOW)
            // Note: SystemVerilog doesn't have direct seed setting like Python
            // This would typically be done via $urandom(seed) or similar
        end
        
        agent = CLPAgent::type_id::create("agent", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        CLPSequence seq;
        phase.raise_objection(this);
        
        seq = CLPSequence::type_id::create("seq");
        seq.num_transactions = num_transactions;
        seq.start(agent.sequencer);
        
        #100;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Test for CLP example
 */
class CLPTest extends uvm_test;
    CLPEnv env;
    
    `uvm_component_utils(CLPTest)
    
    function new(string name = "CLPTest", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = CLPEnv::type_id::create("env", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        #200;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level module for CLP example
 */
module clp_top;
    import uvm_pkg::*;
    
    initial begin
        run_test("CLPTest");
    end
endmodule
