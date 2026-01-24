/**
 * Module 2 Example 2.3: Signal Access
 * Demonstrates signal reading, writing, and monitoring in SystemVerilog testbenches.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand signal access mechanisms in SystemVerilog
 *   2. Learn signal reading and writing techniques
 *   3. Master signal monitoring for debugging
 *   4. Understand different signal types and their handling
 *   5. Apply signal access patterns in testbenches
 * 
 * SIGNAL ACCESS OPERATIONS:
 *   - Reading: Accessing signal values for checking
 *   - Writing: Driving signal values to DUT
 *   - Monitoring: Observing signal changes automatically
 *   - Timing: Proper timing for signal access
 * 
 * SIGNAL TYPES:
 *   - Single-bit: logic (1 bit)
 *   - Multi-bit: logic [N:0] (N+1 bits)
 *   - Arrays: logic [M:0][N:0] (multi-dimensional)
 * 
 * This example shows:
 * - Signal reading
 * - Signal driving
 * - Signal monitoring
 * - Different signal types
 */

`timescale 1ns/1ps

module signal_access;
    // DUT signals (simulated simple register)
    logic clk;
    logic rst_n;
    logic enable;
    logic [7:0] d;
    logic [7:0] q;
    
    // Additional signals for demonstration
    logic single_bit;
    logic [15:0] multi_bit;
    logic [3:0][7:0] array_signal;  // 4x8-bit array
    
    // Clock generation
    parameter CLK_PERIOD = 10;
    always begin
        clk = 0;
        #(CLK_PERIOD/2);
        clk = 1;
        #(CLK_PERIOD/2);
    end
    
    /**
     * Simple register model for demonstration
     */
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            q <= 8'h00;
        end else if (enable) begin
            q <= d;
        end
    end
    
    /**
     * Example 1: Signal Reading
     * Demonstrates reading signal values
     */
    task test_signal_reading();
        $display("Example 1: Signal Reading");
        
        // Initialize signals
        rst_n = 0;
        enable = 0;
        d = 8'h00;
        #(CLK_PERIOD);
        
        // Read initial values
        $display("  Initial state:");
        $display("    q = 0x%02h (%0d)", q, q);
        $display("    rst_n = %b", rst_n);
        $display("    enable = %b", enable);
        
        // De-assert reset and read
        rst_n = 1;
        #(CLK_PERIOD);
        $display("  After reset de-assert:");
        $display("    q = 0x%02h (%0d)", q, q);
        
        // Write and read
        enable = 1;
        d = 8'hAA;
        #(CLK_PERIOD);
        $display("  After write (d=0xAA):");
        $display("    q = 0x%02h (%0d)", q, q);
        assert (q == 8'hAA) else $error("Read failed: expected 0xAA, got 0x%02h", q);
        
        $display("  Signal reading PASSED");
    endtask
    
    /**
     * Example 2: Signal Driving
     * Demonstrates driving signals to DUT
     */
    task test_signal_driving();
        $display();
        $display("Example 2: Signal Driving");
        
        // Drive different values
        d = 8'h55;
        enable = 1;
        #(CLK_PERIOD);
        $display("  Drove d = 0x%02h, q = 0x%02h", d, q);
        assert (q == 8'h55) else $error("Drive failed");
        
        d = 8'hFF;
        #(CLK_PERIOD);
        $display("  Drove d = 0x%02h, q = 0x%02h", d, q);
        assert (q == 8'hFF) else $error("Drive failed");
        
        d = 8'h00;
        #(CLK_PERIOD);
        $display("  Drove d = 0x%02h, q = 0x%02h", d, q);
        assert (q == 8'h00) else $error("Drive failed");
        
        $display("  Signal driving PASSED");
    endtask
    
    /**
     * Example 3: Signal Monitoring
     * Demonstrates monitoring signal changes
     */
    int monitor_count = 0;
    
    task test_signal_monitoring();
        $display();
        $display("Example 3: Signal Monitoring");
        $display("  Monitoring q signal changes...");
        
        monitor_count = 0;
        
        // Drive values and monitor
        d = 8'h11;
        #(CLK_PERIOD);
        
        d = 8'h22;
        #(CLK_PERIOD);
        
        d = 8'h33;
        #(CLK_PERIOD);
        
        $display("  Signal monitoring PASSED (monitored %0d changes)", monitor_count);
    endtask
    
    // Monitor for q changes
    always @(q) begin
        monitor_count++;
        $display("    [%0t] q changed to 0x%02h", $time, q);
    end
    
    /**
     * Example 4: Different Signal Types
     * Demonstrates handling different signal types
     */
    task test_signal_types();
        $display();
        $display("Example 4: Different Signal Types");
        
        // Single-bit signal
        single_bit = 1'b0;
        $display("  Single-bit: %b", single_bit);
        single_bit = 1'b1;
        $display("  Single-bit: %b", single_bit);
        
        // Multi-bit signal
        multi_bit = 16'hABCD;
        $display("  Multi-bit: 0x%04h (%0d)", multi_bit, multi_bit);
        $display("  Multi-bit width: %0d bits", $bits(multi_bit));
        
        // Array signal
        array_signal[0] = 8'h00;
        array_signal[1] = 8'h11;
        array_signal[2] = 8'h22;
        array_signal[3] = 8'h33;
        $display("  Array signal:");
        for (int i = 0; i < 4; i++) begin
            $display("    array_signal[%0d] = 0x%02h", i, array_signal[i]);
        end
        
        $display("  Signal types PASSED");
    endtask
    
    /**
     * Main test sequence
     */
    initial begin
        $display("============================================================");
        $display("Signal Access Examples");
        $display("============================================================");
        $display();
        
        // Initialize
        rst_n = 0;
        enable = 0;
        d = 8'h00;
        single_bit = 0;
        multi_bit = 0;
        
        #(CLK_PERIOD * 2);
        
        // Run examples
        test_signal_reading();
        test_signal_driving();
        test_signal_monitoring();
        test_signal_types();
        
        // Summary
        $display();
        $display("============================================================");
        $display("Signal Access Examples Complete");
        $display("============================================================");
        $display();
        $display("Key Concepts:");
        $display("  - Signal access is fundamental to testbench operation");
        $display("  - Proper timing is essential for signal driving");
        $display("  - Signal monitoring enables response checking");
        $display("  - Different signal types require different handling");
        $display();
        
        #(CLK_PERIOD * 2);
        $finish;
    end

endmodule
