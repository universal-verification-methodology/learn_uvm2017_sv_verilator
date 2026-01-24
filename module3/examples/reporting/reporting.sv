/**
 * Module 3 Example 3.3: UVM Reporting
 * Demonstrates UVM reporting system with severity and verbosity levels.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand UVM reporting system
 *   2. Learn severity levels (INFO, WARNING, ERROR, FATAL)
 *   3. Master verbosity levels (LOW, MEDIUM, HIGH, FULL, DEBUG)
 *   4. Understand message formatting
 *   5. Apply hierarchical reporting
 * 
 * UVM REPORTING MACROS:
 *   - `uvm_info: Informational message (severity: INFO)
 *   - `uvm_warning: Warning message (severity: WARNING)
 *   - `uvm_error: Error message (severity: ERROR, continues simulation)
 *   - `uvm_fatal: Fatal message (severity: FATAL, stops simulation)
 * 
 * VERBOSITY LEVELS:
 *   - UVM_LOW: Always visible (default)
 *   - UVM_MEDIUM: Medium detail (default for most messages)
 *   - UVM_HIGH: High detail (debugging)
 *   - UVM_FULL: Full detail (detailed debugging)
 *   - UVM_DEBUG: Debug level (most verbose)
 * 
 * MESSAGE FORMATTING:
 *   - $sformatf: Format strings with data
 *   - Format specifiers: %h (hex), %d (decimal), %s (string), %0d (no padding)
 * 
 * HIERARCHICAL REPORTING:
 *   - Messages include component hierarchy
 *   - get_full_name(): Returns hierarchical component name
 *   - Context-aware: Shows where message originated
 * 
 * This example shows:
 * - Severity levels: INFO, WARNING, ERROR, FATAL
 * - Verbosity levels: UVM_LOW, UVM_MEDIUM, UVM_HIGH, UVM_FULL, UVM_DEBUG
 * - Message formatting
 * - Hierarchical reporting
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================================
// REPORTING COMPONENT CLASS
// ============================================================================
/**
 * Component demonstrating UVM reporting
 * 
 * REPORTING COMPONENT PURPOSE:
 *   - Demonstrates all UVM reporting features
 *   - Shows severity levels (INFO, WARNING, ERROR, FATAL)
 *   - Shows verbosity levels (LOW, MEDIUM, HIGH, FULL, DEBUG)
 *   - Demonstrates message formatting
 */
class ReportingComponent extends uvm_component;
    `uvm_component_utils(ReportingComponent)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // ========================================================================
        // DEMONSTRATE DIFFERENT SEVERITY LEVELS
        // ========================================================================
        // 
        // UVM_INFO MACRO:
        //   `uvm_info(id, message, verbosity)
        // 
        // PARAMETERS:
        //   - id: Message ID string ("REPORTING") - used for filtering
        //   - message: Message text to display
        //   - verbosity: Verbosity level (UVM_LOW, UVM_MEDIUM, UVM_HIGH, etc.)
        // 
        // SEVERITY: INFO
        //   - Informational message (non-critical)
        //   - Does not stop simulation
        //   - Used for normal operation messages
        //   - Most common message type
        `uvm_info("REPORTING", "This is an INFO message (severity: INFO)", UVM_MEDIUM)
        
        // HIGH verbosity INFO message
        // 
        // VERBOSITY CONTROL:
        //   - UVM_HIGH: Only shown when verbosity >= UVM_HIGH
        //   - Useful for detailed debugging
        //   - Can be filtered: +UVM_VERBOSITY=UVM_HIGH
        `uvm_info("REPORTING", "This is a HIGH verbosity INFO message", UVM_HIGH)
        
        // DEBUG verbosity INFO message
        // 
        // DEBUG MESSAGES:
        //   - UVM_DEBUG: Most verbose level
        //   - Only shown when verbosity >= UVM_DEBUG
        //   - Use for very detailed debugging
        //   - Can significantly slow simulation if overused
        `uvm_info("REPORTING", "This is a DEBUG verbosity INFO message", UVM_DEBUG)
        
        // ========================================================================
        // UVM_WARNING MACRO
        // ========================================================================
        // 
        // UVM_WARNING:
        //   `uvm_warning(id, message)
        // 
        // SEVERITY: WARNING
        //   - Warning message (potential issue)
        //   - Does not stop simulation
        //   - Used for non-fatal issues
        //   - Should be investigated but doesn't break functionality
        // 
        // WARNING USAGE:
        //   - Configuration not found (using defaults)
        //   - Unexpected but handled conditions
        //   - Deprecated feature usage
        // 
        // NOTE: No verbosity parameter - warnings always shown
        `uvm_warning("REPORTING", "This is a WARNING message (severity: WARNING)")
        
        // ========================================================================
        // ERROR AND FATAL MESSAGES
        // ========================================================================
        // 
        // UVM_ERROR:
        //   `uvm_error(id, message)
        //   - Severity: ERROR
        //   - Continues simulation (doesn't stop)
        //   - Used for errors that should be fixed
        //   - Increments error count
        //   - Example: `uvm_error("DRIVER", "Invalid transaction received")
        // 
        // UVM_FATAL:
        //   `uvm_fatal(id, message)
        //   - Severity: FATAL
        //   - Stops simulation immediately
        //   - Used for unrecoverable errors
        //   - Example: `uvm_fatal("TEST", "Critical configuration missing")
        // 
        // NOTE: We don't demonstrate ERROR/FATAL here to avoid stopping simulation
        // In real code, use them appropriately:
        //   - ERROR: For recoverable errors (continue simulation)
        //   - FATAL: For unrecoverable errors (stop simulation)
        `uvm_info("REPORTING", "ERROR and FATAL messages would stop simulation", UVM_MEDIUM)
        `uvm_info("REPORTING", "We'll demonstrate them in a controlled way", UVM_MEDIUM)
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        
        // ========================================================================
        // FORMATTED MESSAGES WITH INLINE VALUES
        // ========================================================================
        // 
        // MESSAGE FORMATTING:
        //   - Use $sformatf() for formatted strings
        //   - Format specifiers:
        //     * %h: Hexadecimal (lowercase)
        //     * %H: Hexadecimal (uppercase)
        //     * %d: Decimal
        //     * %0d: Decimal (no padding, no leading zeros)
        //     * %s: String
        //     * %b: Binary
        //     * %t: Time
        // 
        // FORMAT SPECIFIER DETAILS:
        //   - %02h: 2-digit hex with leading zeros (e.g., 0x0A)
        //   - %04h: 4-digit hex with leading zeros (e.g., 0x0012)
        //   - %0d: Decimal without padding (e.g., 42, not 042)
        // 
        // EXAMPLE OUTPUT:
        //   "Formatted message: data=0xAA, address=0x1234, count=42"
        `uvm_info("REPORTING", $sformatf("Formatted message: data=0x%02h, address=0x%04h, count=%0d", 
                  8'hAA, 16'h1234, 42), UVM_MEDIUM)
        
        // ========================================================================
        // DEMONSTRATE DIFFERENT VERBOSITY LEVELS
        // ========================================================================
        // 
        // VERBOSITY HIERARCHY (from least to most verbose):
        //   UVM_NONE < UVM_LOW < UVM_MEDIUM < UVM_HIGH < UVM_FULL < UVM_DEBUG
        // 
        // VERBOSITY CONTROL:
        //   - Command line: +UVM_VERBOSITY=UVM_HIGH
        //   - Code: set_report_verbosity_level(UVM_HIGH)
        //   - Component-specific: comp.set_report_verbosity_level(UVM_HIGH)
        // 
        // VERBOSITY BEST PRACTICES:
        //   - UVM_LOW: Critical messages (always visible)
        //   - UVM_MEDIUM: Normal operation messages (default)
        //   - UVM_HIGH: Detailed debugging
        //   - UVM_FULL: Very detailed debugging
        //   - UVM_DEBUG: Most verbose (use sparingly)
        
        // UVM_LOW: Always visible (unless verbosity < UVM_LOW)
        // Use for: Critical status, major state changes
        `uvm_info("REPORTING", "Message at UVM_LOW verbosity", UVM_LOW)
        
        // UVM_MEDIUM: Default verbosity level
        // Use for: Normal operation messages, standard debugging
        `uvm_info("REPORTING", "Message at UVM_MEDIUM verbosity", UVM_MEDIUM)
        
        // UVM_HIGH: Detailed debugging
        // Use for: Detailed state information, transaction details
        `uvm_info("REPORTING", "Message at UVM_HIGH verbosity", UVM_HIGH)
        
        // UVM_FULL: Very detailed debugging
        // Use for: Very detailed information, internal state
        `uvm_info("REPORTING", "Message at UVM_FULL verbosity", UVM_FULL)
        
        // UVM_DEBUG: Most verbose level
        // Use for: Extremely detailed debugging, trace every operation
        // WARNING: Can significantly slow simulation if overused
        `uvm_info("REPORTING", "Message at UVM_DEBUG verbosity", UVM_DEBUG)
        
        #10;
        phase.drop_objection(this);
    endtask
endclass

// ============================================================================
// CHILD COMPONENT FOR HIERARCHICAL REPORTING
// ============================================================================
/**
 * Child component for hierarchical reporting
 * 
 * HIERARCHICAL REPORTING:
 *   - Demonstrates component hierarchy in messages
 *   - Shows get_full_name() usage
 *   - Illustrates context-aware reporting
 */
class ReportingChild extends uvm_component;
    `uvm_component_utils(ReportingChild)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // ========================================================================
        // HIERARCHICAL COMPONENT NAMING
        // ========================================================================
        // 
        // GET_FULL_NAME():
        //   - Returns full hierarchical name of component
        //   - Format: "parent.child.grandchild"
        //   - Example: "ReportingTest.child_comp"
        // 
        // HIERARCHICAL CONTEXT:
        //   - Messages automatically include component hierarchy
        //   - Format: "UVM_INFO @ time [id] component_path message"
        //   - Example: "UVM_INFO @ 100 [CHILD] ReportingTest.child_comp Reporting from child..."
        // 
        // BENEFITS:
        //   - Easy to identify message source
        //   - Useful in complex hierarchies
        //   - Enables hierarchical filtering
        `uvm_info("CHILD", $sformatf("Reporting from child component: %s", get_full_name()), UVM_MEDIUM)
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        
        // Child component reporting
        // Message will show: "UVM_INFO @ time [CHILD] ReportingTest.child_comp ..."
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
        
        // ========================================================================
        // VERBOSITY LEVEL CONTROL
        // ========================================================================
        // 
        // SET_REPORT_VERBOSITY_LEVEL():
        //   - Sets verbosity level for this component and all children
        //   - Can be set globally or per component
        //   - Overrides default verbosity
        // 
        // VERBOSITY SETTING OPTIONS:
        //   1. Global: uvm_top.set_report_verbosity_level(UVM_HIGH)
        //   2. Component: this.set_report_verbosity_level(UVM_HIGH)
        //   3. Command line: +UVM_VERBOSITY=UVM_HIGH
        //   4. Per-ID: set_report_id_verbosity("REPORTING", UVM_HIGH)
        // 
        // VERBOSITY INHERITANCE:
        //   - Children inherit parent's verbosity
        //   - Can override per component
        //   - Most specific setting wins
        // 
        // NOTE: Commented out - uncomment to enable higher verbosity
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
        
        // ========================================================================
        // REPORT PHASE SUMMARY
        // ========================================================================
        // 
        // REPORT_PHASE:
        //   - Final phase before simulation ends
        //   - Used for summary reporting
        //   - Good place for test results summary
        `uvm_info("TEST", "Reporting demonstration complete", UVM_MEDIUM)
        `uvm_info("TEST", "Key Concepts:", UVM_MEDIUM)
        `uvm_info("TEST", "  - Severity: INFO, WARNING, ERROR, FATAL", UVM_MEDIUM)
        `uvm_info("TEST", "  - Verbosity: UVM_LOW, UVM_MEDIUM, UVM_HIGH, UVM_FULL, UVM_DEBUG", UVM_MEDIUM)
        `uvm_info("TEST", "  - Messages include component hierarchy context", UVM_MEDIUM)
        
        // ========================================================================
        // REPORTING BEST PRACTICES
        // ========================================================================
        // 
        // MESSAGE ID USAGE:
        //   - Use consistent IDs for filtering
        //   - Example: "DRIVER", "MONITOR", "SCOREBOARD"
        //   - Filter: +UVM_VERBOSITY_DRIVER=UVM_HIGH
        // 
        // VERBOSITY GUIDELINES:
        //   - UVM_LOW: Critical status, errors, warnings
        //   - UVM_MEDIUM: Normal operation (default)
        //   - UVM_HIGH: Detailed debugging
        //   - UVM_FULL/DEBUG: Very detailed (use sparingly)
        // 
        // MESSAGE FORMATTING:
        //   - Use $sformatf for formatted messages
        //   - Include relevant data (addresses, values, etc.)
        //   - Make messages self-explanatory
        // 
        // HIERARCHICAL REPORTING:
        //   - Use get_full_name() for context
        //   - Messages automatically include hierarchy
        //   - Useful for debugging complex testbenches
        // 
        // PERFORMANCE:
        //   - Excessive DEBUG messages can slow simulation
        //   - Use appropriate verbosity levels
        //   - Filter messages when not needed
    endfunction
endclass
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
