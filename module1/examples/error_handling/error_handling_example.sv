/**
 * Module 1 Example 1.5: Error Handling and Logging
 * Demonstrates UVM reporting and error handling patterns.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand error handling patterns in verification
 *   2. Learn retry logic implementation
 *   3. Master different reporting levels (INFO, WARNING, ERROR)
 *   4. Understand exception handling in SystemVerilog
 *   5. Apply defensive programming techniques
 * 
 * ERROR HANDLING PATTERNS:
 *   - Retry Logic: Automatic retry for transient failures
 *   - Exception Objects: Structured error information
 *   - Reporting Levels: Severity-based message classification
 *   - Timeout Handling: Prevent infinite waits
 * 
 * VERIFICATION BEST PRACTICES:
 *   - Always check for null pointers
 *   - Provide meaningful error messages
 *   - Use appropriate reporting levels
 *   - Implement retry mechanisms for unreliable operations
 * 
 * UVM RELATIONSHIP:
 *   - Similar to uvm_report_object reporting methods
 *   - Retry patterns used in uvm_sequence_item
 *   - Exception handling similar to UVM error handling
 */

// ============================================================================
// PACKAGE DECLARATION
// ============================================================================
// Package declaration: creates a namespace for error handling classes
// Packages allow code organization and prevent naming conflicts
package error_handling_pkg;
    // Note: This is a standalone example without UVM dependency.
    // For UVM reporting, see the UVM testbenches.
    
    /**
     * Custom exception class
     * 
     * This class demonstrates how to create custom exception objects
     * for error handling in verification. In real UVM, you would use
     * uvm_report_object for reporting, but this shows the basic concept.
     */
    class VerificationException;
        // Instance variables for exception information
        string message;      // Human-readable error message
        int error_code;       // Numeric error code for programmatic error handling
        
        /**
         * Constructor: creates a new exception object
         * 
         * @param msg Error message string (defaults to empty string)
         * @param code Error code integer (defaults to 0)
         */
        function new(string msg = "", int code = 0);
            // Assign constructor parameters to instance variables
            message = msg;        // Store error message
            error_code = code;   // Store error code
        endfunction
        
        /**
         * Convert exception to string representation
         * 
         * @return Formatted string with exception message and code
         */
        function string convert2string();
            // Format string with exception information
            return $sformatf("VerificationException: %s (code=%0d)", message, error_code);
        endfunction
    endclass  // End of VerificationException class
    
    /**
     * Component with error handling
     * 
     * This class demonstrates error handling patterns including:
     * - Retry logic for operations that may fail
     * - Different reporting levels (INFO, WARNING, ERROR)
     */
    class ErrorHandlingComponent;
        // Instance variables for retry tracking
        int retry_count;      // Current number of retry attempts
        int max_retries;     // Maximum number of retries allowed
        
        /**
         * Constructor: initializes error handling component
         */
        function new();
            // Initialize retry tracking variables
            retry_count = 0;      // Start with zero retries
            max_retries = 3;      // Allow up to 3 retry attempts
        endfunction
        
        /**
         * Task with retry logic
         * 
         * Demonstrates retry mechanism for operations that may fail.
         * Retries the operation up to 'attempts' times until success.
         * 
         * @param attempts Maximum number of retry attempts (defaults to 3)
         */
        task retry_task(int attempts = 3);
            // Local variables for retry loop
            bit success = 0;      // Flag to track if operation succeeded (0 = failed, 1 = success)
            int attempt = 0;      // Current attempt counter
            
            // Retry loop: continue until success or max attempts reached
            // '!' is logical NOT, '&&' is logical AND
            // Loop continues while: NOT success AND attempt < attempts
            while (!success && attempt < attempts) begin
                // Increment attempt counter
                attempt++;
                // Display retry attempt information
                $display("[RETRY] Attempt %0d of %0d", attempt, attempts);
                
                // Simulate operation that might fail
                // Wait 10 time units to simulate operation delay
                #10;
                // Simulate random success/failure using random number generator
                // '$urandom_range(0, 1)' returns random value 0 or 1
                // If result is not 0 (i.e., equals 1), operation succeeds
                if ($urandom_range(0, 1) != 0) begin
                    // Operation succeeded: set success flag
                    success = 1;
                    $display("[RETRY] Operation succeeded");
                end else begin
                    // Operation failed: display warning and continue loop
                    $display("[RETRY] WARNING: Operation failed, retrying...");
                end
            end  // End of retry loop
            
            // Check if operation failed after all retries
            if (!success) begin
                // Display error message if all retries exhausted
                $display("[RETRY] ERROR: Operation failed after all retries");
            end
        endtask
        
        /**
         * Task demonstrating different reporting levels
         * 
         * Shows different message severity levels used in verification.
         * In UVM, these would use uvm_report_info(), uvm_report_warning(), etc.
         */
        task demonstrate_reporting();
            // INFO level messages: informational, non-critical
            $display("[DEMO] INFO: This is an INFO message");
            $display("[DEMO] INFO: This is a MEDIUM verbosity INFO");
            $display("[DEMO] INFO: This is a HIGH verbosity INFO");
            // WARNING level: indicates potential issues but not fatal
            $display("[DEMO] WARNING: This is a WARNING message");
            // ERROR level: indicates actual errors that need attention
            $display("[DEMO] ERROR: This is an ERROR message");
        endtask
    endclass  // End of ErrorHandlingComponent class
endpackage  // End of error_handling_pkg package

/**
 * Test program demonstrating error handling
 * 
 * This module demonstrates:
 * - Different reporting levels (INFO, WARNING, ERROR)
 * - Retry logic for operations that may fail
 * - Custom exception objects for error handling
 */
module error_handling_example;
    // Import all items from the error_handling_pkg package
    import error_handling_pkg::*;
    
    // Declare handle to error handling component object
    ErrorHandlingComponent comp;
    
    // 'initial' block: executes once at simulation start (time 0)
    initial begin
        // Display section header for test output
        $display("============================================================");
        $display("Module 1 Example 1.5: Error Handling and Logging");
        $display("============================================================");
        $display();  // Empty line
        
        // Create error handling component object
        comp = new();
        
        // Test 1: Demonstrate different reporting levels
        $display("1. Reporting Levels:");
        // Call task to display messages at different severity levels
        comp.demonstrate_reporting();
        $display();  // Empty line
        
        // Test 2: Demonstrate retry logic
        $display("2. Retry Logic:");
        // Call retry task with 3 maximum attempts
        // This will retry an operation up to 3 times until it succeeds
        comp.retry_task(3);
        $display();  // Empty line
        
        // Test 3: Demonstrate exception handling
        $display("3. Exception Handling:");
        // Begin-end block creates a local scope for the exception variable
        begin
            // Declare handle to exception object
            VerificationException exc;
            // Create exception object with message and error code
            exc = new("Test exception", 42);
            // Display exception information using convert2string() method
            $display("   Created exception: %s", exc.convert2string());
        end  // Exception handle goes out of scope here
        $display();  // Empty line
        
        // Display completion message
        $display("============================================================");
        $display("Example completed successfully!");
        $display("============================================================");
        
        // Wait 100 time units before finishing
        // Longer delay allows retry logic to complete
        #100;
        // Terminate simulation
        $finish;
    end  // End of initial block
endmodule  // End of module definition
