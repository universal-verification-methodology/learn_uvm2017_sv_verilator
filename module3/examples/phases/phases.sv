/**
 * Module 3 Example 3.2: UVM Phases
 * Demonstrates UVM phase execution and implementation.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand UVM phase system and execution order
 *   2. Learn build-time phases (top-down execution)
 *   3. Master run-time phases (bottom-up execution)
 *   4. Understand cleanup phases (bottom-up execution)
 *   5. Apply phase implementation patterns
 * 
 * UVM PHASE CATEGORIES:
 *   - Build-time phases: Top-down (parent before child)
 *     * build_phase, connect_phase, end_of_elaboration_phase, start_of_simulation_phase
 *   - Run-time phases: Bottom-up (child before parent), async tasks
 *     * pre_reset, reset, post_reset, pre_configure, configure, post_configure,
 *       pre_main, main, post_main, pre_shutdown, shutdown, post_shutdown
 *   - Cleanup phases: Bottom-up (child before parent)
 *     * extract_phase, check_phase, report_phase, final_phase
 * 
 * PHASE EXECUTION ORDER:
 *   1. Build-time: build -> connect -> end_of_elaboration -> start_of_simulation
 *   2. Run-time: pre_reset -> reset -> ... -> post_shutdown
 *   3. Cleanup: extract -> check -> report -> final
 * 
 * PHASE TYPES:
 *   - Function phases: No delays, immediate execution
 *   - Task phases: Can have delays, async execution
 * 
 * This example shows:
 * - Build-time phases (top-down)
 * - Run-time phases (bottom-up)
 * - Cleanup phases (bottom-up)
 * - Phase execution order
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Component demonstrating all UVM phases
 */
class PhasesComponent extends uvm_component;
    int phase_count;
    
    `uvm_component_utils(PhasesComponent)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        phase_count = 0;
    endfunction
    
    // Build-time phases (top-down)
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[BUILD] %s: Building component (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[CONNECT] %s: Connecting component (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
    endfunction
    
    function void end_of_elaboration_phase(uvm_phase phase);
        super.end_of_elaboration_phase(phase);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[END_OF_ELAB] %s: Elaboration complete (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
    endfunction
    
    function void start_of_simulation_phase(uvm_phase phase);
        super.start_of_simulation_phase(phase);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[START_OF_SIM] %s: Simulation starting (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
    endfunction
    
    // Run-time phases (bottom-up, async)
    task pre_reset_phase(uvm_phase phase);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[PRE_RESET] %s: Pre-reset phase (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
        #10;
    endtask
    
    task reset_phase(uvm_phase phase);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[RESET] %s: Reset phase (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
        #20;
    endtask
    
    task post_reset_phase(uvm_phase phase);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[POST_RESET] %s: Post-reset phase (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
        #10;
    endtask
    
    task pre_configure_phase(uvm_phase phase);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[PRE_CONFIGURE] %s: Pre-configure phase (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
        #10;
    endtask
    
    task configure_phase(uvm_phase phase);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[CONFIGURE] %s: Configure phase (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
        #10;
    endtask
    
    task post_configure_phase(uvm_phase phase);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[POST_CONFIGURE] %s: Post-configure phase (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
        #10;
    endtask
    
    task pre_main_phase(uvm_phase phase);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[PRE_MAIN] %s: Pre-main phase (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
        #10;
    endtask
    
    task main_phase(uvm_phase phase);
        phase.raise_objection(this);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[MAIN] %s: Main phase (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
        #50;
        phase.drop_objection(this);
    endtask
    
    task post_main_phase(uvm_phase phase);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[POST_MAIN] %s: Post-main phase (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
        #10;
    endtask
    
    task pre_shutdown_phase(uvm_phase phase);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[PRE_SHUTDOWN] %s: Pre-shutdown phase (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
        #10;
    endtask
    
    task shutdown_phase(uvm_phase phase);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[SHUTDOWN] %s: Shutdown phase (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
        #10;
    endtask
    
    task post_shutdown_phase(uvm_phase phase);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[POST_SHUTDOWN] %s: Post-shutdown phase (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
        #10;
    endtask
    
    // Cleanup phases (bottom-up)
    function void extract_phase(uvm_phase phase);
        super.extract_phase(phase);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[EXTRACT] %s: Extracting results (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
    endfunction
    
    function void check_phase(uvm_phase phase);
        super.check_phase(phase);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[CHECK] %s: Checking results (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
    endfunction
    
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[REPORT] %s: Generating report (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
        `uvm_info("PHASES", $sformatf("[REPORT] %s: Total phases executed: %0d", 
                  get_name(), phase_count), UVM_MEDIUM)
    endfunction
    
    function void final_phase(uvm_phase phase);
        super.final_phase(phase);
        phase_count++;
        `uvm_info("PHASES", $sformatf("[FINAL] %s: Final cleanup (phase #%0d)", 
                  get_name(), phase_count), UVM_MEDIUM)
    endfunction
endclass

/**
 * Child component to demonstrate hierarchical phase execution
 */
class PhasesChild extends PhasesComponent;
    `uvm_component_utils(PhasesChild)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
endclass

/**
 * Test class
 */
class PhasesTest extends uvm_test;
    PhasesComponent parent_comp;
    PhasesChild child_comp;
    
    `uvm_component_utils(PhasesTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("TEST", "Building test with phase components", UVM_MEDIUM)
        parent_comp = PhasesComponent::type_id::create("parent_comp", this);
        child_comp = PhasesChild::type_id::create("child_comp", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        `uvm_info("TEST", "Test run_phase executing", UVM_MEDIUM)
        #200;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level testbench module
 */
module phases;
    initial begin
        $display("============================================================");
        $display("UVM Phases Example");
        $display("============================================================");
        $display();
        $display("Note: Build-time phases execute top-down (parent before child)");
        $display("      Run-time phases execute bottom-up (child before parent)");
        $display("      Cleanup phases execute bottom-up (child before parent)");
        $display();
        
        run_test("PhasesTest");
    end
endmodule
