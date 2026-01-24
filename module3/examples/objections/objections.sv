/**
 * Module 3 Example 3.6: UVM Objections
 * Demonstrates UVM objection mechanism for controlling test execution.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand UVM objection mechanism
 *   2. Learn raising objections (phase.raise_objection)
 *   3. Master dropping objections (phase.drop_objection)
 *   4. Understand multiple objections per component
 *   5. Apply phase completion control
 * 
 * OBJECTION PURPOSE:
 *   - Controls when phases can complete
 *   - Prevents premature phase termination
 *   - Coordinates component completion
 *   - Ensures all work completes before phase ends
 * 
 * OBJECTION MECHANISM:
 *   - Raise objection: Keeps phase running
 *   - Drop objection: Signals work complete
 *   - Phase completes: When all objections dropped
 *   - Multiple objections: Component can have multiple named objections
 * 
 * OBJECTION RULES:
 *   - Must raise before phase can run
 *   - Must drop when work complete
 *   - Unmatched raise/drop causes warnings
 *   - Phase waits for all objections
 * 
 * This example shows:
 * - Raising objections
 * - Dropping objections
 * - Multiple objections per component
 * - Phase completion control
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Component with objections
 */
class ObjectionComponent extends uvm_component;
    int work_duration;
    string component_name;
    
    `uvm_component_utils(ObjectionComponent)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        work_duration = 100;
        component_name = name;
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("OBJECTIONS", $sformatf("%s: Building component", component_name), UVM_MEDIUM)
    endfunction
    
    task run_phase(uvm_phase phase);
        // Raise objection to keep simulation running
        phase.raise_objection(this);
        `uvm_info("OBJECTIONS", $sformatf("%s: Raised objection, starting work", component_name), UVM_MEDIUM)
        
        // Simulate work
        #(work_duration);
        
        `uvm_info("OBJECTIONS", $sformatf("%s: Work complete, dropping objection", component_name), UVM_MEDIUM)
        phase.drop_objection(this);
    endtask
endclass

/**
 * Component with multiple objections
 */
class MultiObjectionComponent extends uvm_component;
    `uvm_component_utils(MultiObjectionComponent)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    task run_phase(uvm_phase phase);
        // ========================================================================
        // MULTIPLE OBJECTIONS PER COMPONENT
        // ========================================================================
        // 
        // NAMED OBJECTIONS:
        //   - Component can have multiple objections with different names
        //   - Each objection tracked separately
        //   - Useful for tracking multiple concurrent tasks
        // 
        // OBJECTION SYNTAX:
        //   phase.raise_objection(this, "objection_name")
        //   phase.drop_objection(this, "objection_name")
        // 
        // MULTIPLE OBJECTIONS:
        //   - Task 1 and Task 2 are independent
        //   - Each has its own objection
        //   - Phase completes when ALL objections dropped
        // 
        // USAGE:
        //   - Multiple concurrent sequences
        //   - Multiple independent tasks
        //   - Fine-grained phase control
        phase.raise_objection(this, "Task 1");
        `uvm_info("OBJECTIONS", "MultiObjectionComponent: Started Task 1", UVM_MEDIUM)
        #50;
        phase.drop_objection(this, "Task 1");
        `uvm_info("OBJECTIONS", "MultiObjectionComponent: Completed Task 1", UVM_MEDIUM)
        
        phase.raise_objection(this, "Task 2");
        `uvm_info("OBJECTIONS", "MultiObjectionComponent: Started Task 2", UVM_MEDIUM)
        #50;
        phase.drop_objection(this, "Task 2");
        `uvm_info("OBJECTIONS", "MultiObjectionComponent: Completed Task 2", UVM_MEDIUM)
    endtask
endclass

/**
 * Component with coordinated objections
 */
class CoordinatedComponent extends uvm_component;
    int delay;
    
    `uvm_component_utils(CoordinatedComponent)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        delay = 150;
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        `uvm_info("OBJECTIONS", $sformatf("CoordinatedComponent: Working for %0d time units", delay), UVM_MEDIUM)
        #(delay);
        `uvm_info("OBJECTIONS", "CoordinatedComponent: Work complete", UVM_MEDIUM)
        phase.drop_objection(this);
    endtask
endclass

/**
 * Test class demonstrating objections
 */
class ObjectionsTest extends uvm_test;
    ObjectionComponent comp1;
    ObjectionComponent comp2;
    MultiObjectionComponent comp3;
    CoordinatedComponent comp4;
    
    `uvm_component_utils(ObjectionsTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("TEST", "Building test with objection components", UVM_MEDIUM)
        
        comp1 = ObjectionComponent::type_id::create("comp1", this);
        comp1.work_duration = 100;
        
        comp2 = ObjectionComponent::type_id::create("comp2", this);
        comp2.work_duration = 150;
        
        comp3 = MultiObjectionComponent::type_id::create("comp3", this);
        comp4 = CoordinatedComponent::type_id::create("comp4", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        // Test raises objection to keep simulation running
        phase.raise_objection(this);
        `uvm_info("TEST", "Test run_phase: Raised objection", UVM_MEDIUM)
        `uvm_info("TEST", "Test run_phase: Waiting for all components to complete", UVM_MEDIUM)
        
        // Wait for all components to complete their work
        // Phase will complete when all objections are dropped
        #300;  // Wait for longest component
        
        `uvm_info("TEST", "Test run_phase: All components should be complete", UVM_MEDIUM)
        phase.drop_objection(this);
    endtask
    
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        `uvm_info("TEST", "Objections demonstration complete", UVM_MEDIUM)
        `uvm_info("TEST", "Key Concepts:", UVM_MEDIUM)
        `uvm_info("TEST", "  - Raise objection to keep phase running", UVM_MEDIUM)
        `uvm_info("TEST", "  - Drop objection when work completes", UVM_MEDIUM)
        `uvm_info("TEST", "  - Phase completes when all objections dropped", UVM_MEDIUM)
        `uvm_info("TEST", "  - Multiple objections per component supported", UVM_MEDIUM)
        `uvm_info("TEST", "  - Objections coordinate component completion", UVM_MEDIUM)
    endfunction
endclass

/**
 * Top-level testbench module
 */
module objections;
    initial begin
        $display("============================================================");
        $display("UVM Objections Example");
        $display("============================================================");
        $display();
        $display("This example demonstrates:");
        $display("  - Raising objections to keep simulation running");
        $display("  - Dropping objections when work completes");
        $display("  - Multiple objections per component");
        $display("  - Coordinated phase completion");
        $display();
        $display("Note: Simulation ends when all objections are dropped");
        $display();
        
        run_test("ObjectionsTest");
    end
endmodule
