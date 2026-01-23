/**
 * Module 2 Example 2.2: Reset Patterns
 * Demonstrates reset sequence implementation in SystemVerilog testbenches.
 * 
 * This example shows:
 * - Synchronous reset
 * - Asynchronous reset
 * - Reset sequence
 * - Reset verification
 */

`timescale 1ns/1ps

module reset_patterns;
    // Clock and reset signals
    logic clk;
    logic rst_n;      // Active-low asynchronous reset
    logic rst_sync;   // Active-high synchronous reset
    
    // DUT signals (simulated)
    logic [7:0] reg_async;
    logic [7:0] reg_sync;
    
    // Clock generation
    parameter CLK_PERIOD = 10;
    always begin
        clk = 0;
        #(CLK_PERIOD/2);
        clk = 1;
        #(CLK_PERIOD/2);
    end
    
    /**
     * Example 1: Asynchronous Reset
     * Reset is independent of clock
     */
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            reg_async <= 8'h00;
        end else begin
            reg_async <= reg_async + 1;
        end
    end
    
    /**
     * Example 2: Synchronous Reset
     * Reset is synchronized to clock
     */
    always @(posedge clk) begin
        if (rst_sync) begin
            reg_sync <= 8'h00;
        end else begin
            reg_sync <= reg_sync + 1;
        end
    end
    
    /**
     * Reset sequence task
     * Demonstrates proper reset assertion and de-assertion
     */
    task async_reset_sequence(int reset_duration_ns = 100);
        $display("[%0t] Asserting async reset", $time);
        rst_n = 0;
        #(reset_duration_ns);
        $display("[%0t] De-asserting async reset", $time);
        rst_n = 1;
        #(CLK_PERIOD * 2);  // Wait for propagation
    endtask
    
    task sync_reset_sequence(int reset_cycles = 5);
        $display("[%0t] Asserting sync reset", $time);
        rst_sync = 1;
        repeat (reset_cycles) @(posedge clk);
        $display("[%0t] De-asserting sync reset", $time);
        rst_sync = 0;
        @(posedge clk);  // Wait one cycle for propagation
    endtask
    
    /**
     * Reset verification task
     * Checks that reset properly initializes registers
     */
    task verify_reset();
        $display("[%0t] Verifying reset state", $time);
        assert (reg_async == 8'h00) else 
            $error("Async reset failed: reg_async = 0x%02h", reg_async);
        assert (reg_sync == 8'h00) else 
            $error("Sync reset failed: reg_sync = 0x%02h", reg_sync);
        $display("  Reset verification PASSED");
    endtask
    
    /**
     * Main test sequence
     */
    initial begin
        $display("============================================================");
        $display("Reset Patterns Examples");
        $display("============================================================");
        $display();
        
        // Initialize
        rst_n = 1;
        rst_sync = 0;
        reg_async = 8'hFF;
        reg_sync = 8'hFF;
        
        #(CLK_PERIOD);
        
        // Example 1: Asynchronous Reset
        $display("Example 1: Asynchronous Reset");
        $display("  Reset is independent of clock");
        async_reset_sequence(100);
        verify_reset();
        $display();
        
        // Let registers count for a few cycles
        #(CLK_PERIOD * 5);
        $display("[%0t] After 5 cycles: reg_async = 0x%02h, reg_sync = 0x%02h", 
                 $time, reg_async, reg_sync);
        $display();
        
        // Example 2: Synchronous Reset
        $display("Example 2: Synchronous Reset");
        $display("  Reset is synchronized to clock");
        sync_reset_sequence(5);
        verify_reset();
        $display();
        
        // Example 3: Reset during operation
        $display("Example 3: Reset During Operation");
        #(CLK_PERIOD * 10);
        $display("[%0t] Before reset: reg_async = 0x%02h", $time, reg_async);
        async_reset_sequence(50);
        $display("[%0t] After reset: reg_async = 0x%02h", $time, reg_async);
        verify_reset();
        $display();
        
        // Summary
        $display("============================================================");
        $display("Reset Patterns Examples Complete");
        $display("============================================================");
        $display();
        $display("Key Concepts:");
        $display("  - Reset is critical for proper design initialization");
        $display("  - Synchronous vs asynchronous reset have different timing");
        $display("  - Reset sequences must follow design requirements");
        $display("  - Reset verification ensures proper operation");
        $display();
        
        #(CLK_PERIOD * 5);
        $finish;
    end

endmodule
