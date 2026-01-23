/**
 * Module 3 Example 3.3: UVM Reporting
 * Demonstrates UVM reporting system with severity and verbosity levels.
 * 
 * This example shows:
 * - Severity levels: INFO, WARNING, ERROR, FATAL
 * - Verbosity levels: UVM_LOW, UVM_MEDIUM, UVM_HIGH, UVM_FULL, UVM_DEBUG
 * - Message formatting
 * - Hierarchical reporting
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Component demonstrating UVM reporting
 */
class ReportingComponent extends uvm_component;
    `uvm_component_utils(ReportingComponent)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // Demonstrate different severity levels
        `uvm_info("REPORTING", "This is an INFO message (severity: INFO)", UVM_MEDIUM)
        `uvm_info("REPORTING", "This is a HIGH verbosity INFO message", UVM_HIGH)
        `uvm_info("REPORTING", "This is a DEBUG verbosity INFO message", UVM_DEBUG)
        
        `uvm_warning("REPORTING", "This is a WARNING message (severity: WARNING)")
        
        // Note: ERROR and FATAL would stop simulation, so we'll demonstrate them carefully
        `uvm_info("REPORTING", "ERROR and FATAL messages would stop simulation", UVM_MEDIUM)
        `uvm_info("REPORTING", "We'll demonstrate them in a controlled way", UVM_MEDIUM)
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        
        // Demonstrate formatted messages
        logic [7:0] data = 8'hAA;
        logic [15:0] address = 16'h1234;
        int count = 42;
        
        `uvm_info("REPORTING", $sformatf("Formatted message: data=0x%02h, address=0x%04h, count=%0d", 
                  data, address, count), UVM_MEDIUM)
        
        // Demonstrate different verbosity levels
        `uvm_info("REPORTING", "Message at UVM_LOW verbosity", UVM_LOW)
        `uvm_info("REPORTING", "Message at UVM_MEDIUM verbosity", UVM_MEDIUM)
        `uvm_info("REPORTING", "Message at UVM_HIGH verbosity", UVM_HIGH)
        `uvm_info("REPORTING", "Message at UVM_FULL verbosity", UVM_FULL)
        `uvm_info("REPORTING", "Message at UVM_DEBUG verbosity", UVM_DEBUG)
        
        #10;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Child component for hierarchical reporting
 */
class ReportingChild extends uvm_component;
    `uvm_component_utils(ReportingChild)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("CHILD", $sformatf("Reporting from child component: %s", get_full_name()), UVM_MEDIUM)
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        `uvm_info("CHILD", "Child component reporting during run_phase", UVM_MEDIUM)
        #10;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Test class
 */
class ReportingTest extends uvm_test;
    ReportingComponent parent_comp;
    ReportingChild child_comp;
    
    `uvm_component_utils(ReportingTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // Set verbosity level (optional - can be set globally or per component)
        // set_report_verbosity_level(UVM_HIGH);
        
        `uvm_info("TEST", "Building test with reporting components", UVM_MEDIUM)
        parent_comp = ReportingComponent::type_id::create("parent_comp", this);
        child_comp = ReportingChild::type_id::create("child_comp", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        
        `uvm_info("TEST", "Test run_phase executing", UVM_MEDIUM)
        `uvm_info("TEST", "Demonstrating hierarchical reporting", UVM_MEDIUM)
        `uvm_info("TEST", $sformatf("Test component full name: %s", get_full_name()), UVM_MEDIUM)
        
        #50;
        phase.drop_objection(this);
    endtask
    
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        `uvm_info("TEST", "Reporting demonstration complete", UVM_MEDIUM)
        `uvm_info("TEST", "Key Concepts:", UVM_MEDIUM)
        `uvm_info("TEST", "  - Severity: INFO, WARNING, ERROR, FATAL", UVM_MEDIUM)
        `uvm_info("TEST", "  - Verbosity: UVM_LOW, UVM_MEDIUM, UVM_HIGH, UVM_FULL, UVM_DEBUG", UVM_MEDIUM)
        `uvm_info("TEST", "  - Messages include component hierarchy context", UVM_MEDIUM)
    endfunction
endclass

/**
 * Top-level testbench module
 */
module reporting;
    initial begin
        $display("============================================================");
        $display("UVM Reporting Example");
        $display("============================================================");
        $display();
        $display("This example demonstrates:");
        $display("  - Severity levels (INFO, WARNING, ERROR, FATAL)");
        $display("  - Verbosity levels (LOW, MEDIUM, HIGH, FULL, DEBUG)");
        $display("  - Message formatting with data");
        $display("  - Hierarchical component reporting");
        $display();
        
        run_test("ReportingTest");
    end
endmodule
