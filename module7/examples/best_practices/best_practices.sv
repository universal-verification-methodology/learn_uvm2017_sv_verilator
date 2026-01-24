/**
 * Module 7 Example 7.6: Best Practices (small demo)
 * Highlights logging, naming, and short phases for maintainability.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand UVM best practices
 *   2. Learn proper logging and reporting
 *   3. Understand phase organization
 *   4. Learn testbench maintainability patterns
 *   5. Understand topology printing
 * 
 * BEST PRACTICES COVERED:
 *   - Clear logging: Use meaningful messages
 *   - Phase organization: Keep phases focused
 *   - Topology printing: Debug testbench structure
 *   - Proper phase implementation: Override only what's needed
 *   - Maintainable code: Clear structure and naming
 */
`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================================
// TEST CLASS
// ============================================================================
/**
 * BestPracticesTest: Demonstrates UVM best practices
 * 
 * BEST PRACTICES:
 *   - Clear component naming
 *   - Meaningful log messages
 *   - Proper phase organization
 *   - Topology printing for debugging
 */
class BestPracticesTest extends uvm_test;
    `uvm_component_utils(BestPracticesTest)
    
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    // ========================================================================
    // BUILD PHASE
    // ========================================================================
    /**
     * Build phase: Construct components and configure
     * 
     * BEST PRACTICE:
     *   - Keep build_phase focused on construction
     *   - Use clear log messages
     *   - Document what's being built
     */
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // ====================================================================
        // LOGGING BEST PRACTICE
        // ====================================================================
        // 
        // LOG MESSAGE GUIDELINES:
        //   - Use meaningful tag: "BP" (Best Practices)
        //   - Clear message: Describe what's happening
        //   - Appropriate verbosity: UVM_MEDIUM (not too verbose)
        //   - Consistent format: Easy to filter and search
        // 
        // VERBOSITY LEVELS:
        //   - UVM_NONE: No messages (disabled)
        //   - UVM_LOW: Critical messages only
        //   - UVM_MEDIUM: Standard messages (default for most cases)
        //   - UVM_HIGH: Detailed messages (debugging)
        //   - UVM_FULL: All messages (maximum verbosity)
        //   - UVM_DEBUG: Debug messages (development)
        // 
        // LOG MESSAGE FORMAT:
        //   - Tag: Component or category identifier
        //   - Message: Clear description of action
        //   - Verbosity: Appropriate level for message importance
        //   - Example: `uvm_info("BP", "build_phase: construct components/configure", UVM_MEDIUM)
        //   - Output: [BP] build_phase: construct components/configure
        `uvm_info("BP", "build_phase: construct components/configure", UVM_MEDIUM)
        // 
        // LOG MESSAGE BENEFITS:
        //   - Easy to trace execution flow
        //   - Helps debug testbench issues
        //   - Documents testbench behavior
        //   - Can be filtered by tag or verbosity
        // 
        // LOG FILTERING:
        //   - Filter by tag: +UVM_VERBOSITY=BP
        //   - Filter by verbosity: +UVM_VERBOSITY=UVM_MEDIUM
        //   - Filter by component: +UVM_VERBOSITY=BestPracticesTest
        //   - Useful for debugging specific components or phases
        // 
        // LOG MESSAGE EXAMPLES:
        //   - Good: `uvm_info("BP", "build_phase: construct components/configure", UVM_MEDIUM)
        //   - Bad: `uvm_info("BP", "building", UVM_MEDIUM)  // Too vague
        //   - Bad: `uvm_info("BP", "build_phase: construct components/configure", UVM_DEBUG)  // Wrong verbosity
        //   - Good: `uvm_info("BP", "build_phase: construct components/configure", UVM_MEDIUM)  // Clear and appropriate
    endfunction
    
    // ========================================================================
    // END OF ELABORATION PHASE
    // ========================================================================
    /**
     * End of elaboration phase: Print topology
     * 
     * BEST PRACTICE:
     *   - Print topology after all connections made
     *   - Helps verify testbench structure
     *   - Useful for debugging hierarchy issues
     */
    function void end_of_elaboration_phase(uvm_phase phase);
        super.end_of_elaboration_phase(phase);
        
        // ====================================================================
        // TOPOLOGY PRINTING BEST PRACTICE
        // ====================================================================
        // 
        // TOPOLOGY PRINTING:
        //   - Print after all components created and connected
        //   - Shows complete testbench hierarchy
        //   - Helps verify structure is correct
        `uvm_info("BP", "end_of_elaboration: print topology", UVM_MEDIUM)
        
        // ====================================================================
        // PRINT TOPOLOGY
        // ====================================================================
        // 
        // PRINT_TOPOLOGY:
        //   - Prints complete component hierarchy
        //   - Shows all components and their relationships
        //   - Useful for debugging and documentation
        //   - Example output:
        //     --- UVM Component Topology ---
        //     BestPracticesTest
        //       (no children in this example)
        uvm_root::get().print_topology();
        // 
        // TOPOLOGY BENEFITS:
        //   - Verify testbench structure
        //   - Debug connection issues
        //   - Document testbench hierarchy
        //   - Understand component relationships
    endfunction
    
    // ========================================================================
    // RUN PHASE
    // ========================================================================
    /**
     * Run phase: Execute stimulus
     * 
     * BEST PRACTICE:
     *   - Keep run_phase focused on test execution
     *   - Use clear log messages
     *   - Proper objection handling
     */
    task run_phase(uvm_phase phase);
        // ====================================================================
        // OBJECTION HANDLING BEST PRACTICE
        // ====================================================================
        // 
        // OBJECTION PATTERN:
        //   - Raise objection before test execution
        //   - Drop objection after test completion
        //   - Prevents premature phase termination
        phase.raise_objection(this);
        
        // ====================================================================
        // TEST EXECUTION LOGGING
        // ====================================================================
        `uvm_info("BP", "run_phase: execute stimulus", UVM_MEDIUM)
        
        // ====================================================================
        // TEST EXECUTION
        // ====================================================================
        // 
        // TEST EXECUTION:
        //   - Execute test stimulus
        //   - Wait for completion
        //   - In real test: Start sequences, wait for completion
        #100;  // Simulate test execution
        
        // ====================================================================
        // OBJECTION DROP
        // ====================================================================
        phase.drop_objection(this);
    endtask
    
    // ========================================================================
    // REPORT PHASE
    // ========================================================================
    /**
     * Report phase: Summarize results
     * 
     * BEST PRACTICE:
     *   - Report phase for final summary
     *   - Log test results
     *   - Provide test completion status
     */
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        
        // ====================================================================
        // REPORTING BEST PRACTICE
        // ====================================================================
        // 
        // REPORT PHASE:
        //   - Final phase before test completion
        //   - Summarize test results
        //   - Log completion status
        `uvm_info("BP", "report_phase: summarize results", UVM_MEDIUM)
        // 
        // REPORTING BENEFITS:
        //   - Clear test completion indication
        //   - Summary of test results
        //   - Easy to identify test status
        //   - Useful for test automation
    endfunction
endclass

// ============================================================================
// TOP-LEVEL MODULE
// ============================================================================
module best_practices;
    initial run_test("BestPracticesTest");
endmodule
