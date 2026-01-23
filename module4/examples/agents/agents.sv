/**
 * Module 4 Example 4.7: Complete UVM Agent
 * Demonstrates building a complete UVM agent with driver, monitor, and sequencer.
 * 
 * This example shows:
 * - Agent structure
 * - Component integration
 * - Agent configuration
 * - Complete agent example
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Transaction for agent example
 */
class AgentTransaction extends uvm_sequence_item;
    logic [7:0] data;
    logic [15:0] address;
    
    `uvm_object_utils(AgentTransaction)
    
    function new(string name = "AgentTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h", data, address);
    endfunction
endclass

/**
 * Sequence for agent example
 */
class AgentSequence extends uvm_sequence #(AgentTransaction);
    `uvm_object_utils(AgentSequence)
    
    function new(string name = "AgentSequence");
        super.new(name);
    endfunction
    
    task body();
        AgentTransaction item;
        
        for (int i = 0; i < 5; i++) begin
            item = AgentTransaction::type_id::create("item");
            item.data = 8'h20 + 8'(i);
            item.address = 16'h1000 + 16'(i * 4);
            
            start_item(item);
            finish_item(item);
        end
    endtask
endclass

/**
 * Driver for agent
 */
class AgentDriver extends uvm_driver #(AgentTransaction);
    `uvm_component_utils(AgentDriver)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    task run_phase(uvm_phase phase);
        AgentTransaction txn;
        
        forever begin
            seq_item_port.get_next_item(txn);
            `uvm_info("DRIVER", $sformatf("Driving: %s", txn.convert2string()), UVM_MEDIUM)
            #10;
            seq_item_port.item_done();
        end
    endtask
endclass

/**
 * Monitor for agent
 */
class AgentMonitor extends uvm_monitor;
    uvm_analysis_port #(AgentTransaction) ap;
    
    `uvm_component_utils(AgentMonitor)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        AgentTransaction txn;
        
        forever begin
            #15;
            txn = AgentTransaction::type_id::create("txn");
            txn.data = $urandom_range(0, 255);
            txn.address = $urandom_range(0, 65535);
            
            `uvm_info("MONITOR", $sformatf("Monitored: %s", txn.convert2string()), UVM_MEDIUM)
            ap.write(txn);
        end
    endtask
endclass

/**
 * Complete agent
 */
class CompleteAgent extends uvm_agent;
    AgentDriver driver;
    AgentMonitor monitor;
    uvm_sequencer #(AgentTransaction) sequencer;
    bit is_active = 1;  // Active agent by default
    
    `uvm_component_utils(CompleteAgent)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("AGENT", $sformatf("Building agent: %s (active=%0b)", 
                  get_name(), is_active), UVM_MEDIUM)
        
        monitor = AgentMonitor::type_id::create("monitor", this);
        
        if (is_active) begin
            driver = AgentDriver::type_id::create("driver", this);
            sequencer = uvm_sequencer#(AgentTransaction)::type_id::create("sequencer", this);
        end
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        `uvm_info("AGENT", $sformatf("Connecting agent: %s", get_name()), UVM_MEDIUM)
        
        if (is_active) begin
            driver.seq_item_port.connect(sequencer.seq_item_export);
        end
    endfunction
endclass

/**
 * Environment containing agent
 */
class AgentEnv extends uvm_env;
    CompleteAgent agent;
    
    `uvm_component_utils(AgentEnv)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        agent = CompleteAgent::type_id::create("agent", this);
    endfunction
endclass

/**
 * Test class demonstrating complete agent
 */
class AgentsTest extends uvm_test;
    AgentEnv env;
    AgentSequence seq;
    
    `uvm_component_utils(AgentsTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("TEST", "Building agent test", UVM_MEDIUM)
        env = AgentEnv::type_id::create("env", this);
        seq = AgentSequence::type_id::create("seq");
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        
        `uvm_info("TEST", "Starting agent test", UVM_MEDIUM)
        
        // Start sequence on sequencer
        if (env.agent.is_active) begin
            seq.start(env.agent.sequencer);
        end
        
        #200;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level testbench module
 */
module agents;
    initial begin
        $display("============================================================");
        $display("UVM Complete Agent Example");
        $display("============================================================");
        $display();
        
        run_test("AgentsTest");
    end
endmodule
