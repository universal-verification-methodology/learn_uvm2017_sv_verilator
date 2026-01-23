/**
 * Module 1 Example 1.5: Error Handling and Logging
 * Demonstrates UVM reporting and error handling patterns.
 */

package error_handling_pkg;
    // Note: This is a standalone example without UVM dependency.
    // For UVM reporting, see the UVM testbenches.
    
    /**
     * Custom exception class
     */
    class VerificationException;
        string message;
        int error_code;
        
        function new(string msg = "", int code = 0);
            message = msg;
            error_code = code;
        endfunction
        
        function string convert2string();
            return $sformatf("VerificationException: %s (code=%0d)", message, error_code);
        endfunction
    endclass
    
    /**
     * Component with error handling
     */
    class ErrorHandlingComponent;
        int retry_count;
        int max_retries;
        
        function new();
            retry_count = 0;
            max_retries = 3;
        endfunction
        
        /**
         * Task with retry logic
         */
        task retry_task(int attempts = 3);
            bit success = 0;
            int attempt = 0;
            
            while (!success && attempt < attempts) begin
                attempt++;
                $display("[RETRY] Attempt %0d of %0d", attempt, attempts);
                
                // Simulate operation that might fail
                #10;
                if ($urandom_range(0, 1) != 0) begin
                    success = 1;
                    $display("[RETRY] Operation succeeded");
                end else begin
                    $display("[RETRY] WARNING: Operation failed, retrying...");
                end
            end
            
            if (!success) begin
                $display("[RETRY] ERROR: Operation failed after all retries");
            end
        endtask
        
        /**
         * Task demonstrating different reporting levels
         */
        task demonstrate_reporting();
            $display("[DEMO] INFO: This is an INFO message");
            $display("[DEMO] INFO: This is a MEDIUM verbosity INFO");
            $display("[DEMO] INFO: This is a HIGH verbosity INFO");
            $display("[DEMO] WARNING: This is a WARNING message");
            $display("[DEMO] ERROR: This is an ERROR message");
        endtask
    endclass
endpackage

/**
 * Test program demonstrating error handling
 */
module error_handling_example;
    import error_handling_pkg::*;
    
    ErrorHandlingComponent comp;
    
    initial begin
        $display("============================================================");
        $display("Module 1 Example 1.5: Error Handling and Logging");
        $display("============================================================");
        $display();
        
        // Create component
        comp = new();
        
        // Demonstrate reporting
        $display("1. Reporting Levels:");
        comp.demonstrate_reporting();
        $display();
        
        // Demonstrate retry logic
        $display("2. Retry Logic:");
        comp.retry_task(3);
        $display();
        
        // Demonstrate exception handling
        $display("3. Exception Handling:");
        begin
            VerificationException exc;
            exc = new("Test exception", 42);
            $display("   Created exception: %s", exc.convert2string());
        end
        $display();
        
        $display("============================================================");
        $display("Example completed successfully!");
        $display("============================================================");
        
        #100;
        $finish;
    end
endmodule
