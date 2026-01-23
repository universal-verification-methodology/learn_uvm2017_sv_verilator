/**
 * Module 3 Example 3.1: UVM Class Hierarchy
 * Demonstrates UVM class hierarchy and component structure.
 * 
 * This example shows:
 * - uvm_object vs uvm_component
 * - Component hierarchy
 * - Component creation
 * - Phase implementation
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Transaction class - extends uvm_object hierarchy
 */
class MyTransaction extends uvm_sequence_item;
    logic [7:0] data;
    logic [15:0] address;
    
    `uvm_object_utils(MyTransaction)
    
    function new(string name = "MyTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, address=0x%04h", data, address);
    endfunction
endclass

/**
 * Driver - extends uvm_component hierarchy
 */
class MyDriver extends uvm_driver #(MyTransaction);
    `uvm_component_utils(MyDriver)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("DRIVER", "Building driver component", UVM_MEDIUM)
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        `uvm_info("DRIVER", "Connecting driver component", UVM_MEDIUM)
    endfunction
    
    task run_phase(uvm_phase phase);
        `uvm_info("DRIVER", "Driver run_phase executing", UVM_MEDIUM)
        phase.raise_objection(this);
        #100;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Monitor - extends uvm_component hierarchy
 */
class MyMonitor extends uvm_monitor;
    uvm_analysis_port #(MyTransaction) ap;
    
    `uvm_component_utils(MyMonitor)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("MONITOR", "Building monitor component", UVM_MEDIUM)
    endfunction
    
    task run_phase(uvm_phase phase);
        `uvm_info("MONITOR", "Monitor run_phase executing", UVM_MEDIUM)
        phase.raise_objection(this);
        #100;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Agent - demonstrates component composition
 */
class MyAgent extends uvm_agent;
    MyDriver driver;
    MyMonitor monitor;
    uvm_sequencer #(MyTransaction) sequencer;
    
    `uvm_component_utils(MyAgent)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("AGENT", "Building agent component", UVM_MEDIUM)
        driver = MyDriver::type_id::create("driver", this);
        monitor = MyMonitor::type_id::create("monitor", this);
        sequencer = uvm_sequencer#(MyTransaction)::type_id::create("sequencer", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        `uvm_info("AGENT", "Connecting agent components", UVM_MEDIUM)
        driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction
endclass

/**
 * Environment - top-level verification environment
 */
class MyEnv extends uvm_env;
    MyAgent agent;
    
    `uvm_component_utils(MyEnv)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("ENV", "Building environment component", UVM_MEDIUM)
        agent = MyAgent::type_id::create("agent", this);
    endfunction
endclass

/**
 * Test - top-level test class
 */
class ClassHierarchyTest extends uvm_test;
    MyEnv env;
    MyTransaction txn;
    
    `uvm_component_utils(ClassHierarchyTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("TEST", "Building test component", UVM_MEDIUM)
        env = MyEnv::type_id::create("env", this);
        
        // Create transaction object (uvm_object)
        txn = MyTransaction::type_id::create("txn");
        txn.data = 8'hAA;
        txn.address = 16'h1234;
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        `uvm_info("TEST", "Connecting test components", UVM_MEDIUM)
    endfunction
    
    task run_phase(uvm_phase phase);
        `uvm_info("TEST", "Test run_phase executing", UVM_MEDIUM)
        `uvm_info("TEST", $sformatf("Transaction: %s", txn.convert2string()), UVM_MEDIUM)
        
        phase.raise_objection(this);
        #200;
        phase.drop_objection(this);
    endtask
    
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        `uvm_info("TEST", "Class hierarchy demonstration complete", UVM_MEDIUM)
    endfunction
endclass

/**
 * Top-level testbench module
 */
module class_hierarchy;
    initial begin
        $display("============================================================");
        $display("UVM Class Hierarchy Example");
        $display("============================================================");
        $display();
        
        run_test("ClassHierarchyTest");
    end
endmodule
