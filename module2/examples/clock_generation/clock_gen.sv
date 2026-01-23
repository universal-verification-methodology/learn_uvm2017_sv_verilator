/**
 * Module 2 Example 2.1: Clock Generation
 * Demonstrates various clock generation patterns in SystemVerilog testbenches.
 * 
 * This example shows:
 * - Simple clock generation
 * - Parameterized clock with configurable period
 * - Multiple clocks
 * - Clock gating
 * - Clock stopping
 */

`timescale 1ns/1ps

module clock_gen;
    // Clock signals
    logic clk1;
    logic clk2;
    logic clk3;
    logic clk_gated;
    logic clk_enable;
    
    // Clock parameters
    parameter CLK1_PERIOD = 10;  // 10ns period (100 MHz)
    parameter CLK2_PERIOD = 20;  // 20ns period (50 MHz)
    parameter CLK3_PERIOD = 5;   // 5ns period (200 MHz)
    
    /**
     * Example 1: Simple clock generation
     * Basic clock with fixed period using always block
     */
    initial begin
        $display("============================================================");
        $display("Clock Generation Examples");
        $display("============================================================");
        $display();
        $display("Example 1: Simple Clock Generation");
        $display("  Clock period: %0d ns", CLK1_PERIOD);
    end
    
    // Simple clock - toggles every half period
    always begin
        clk1 = 0;
        #(CLK1_PERIOD/2);
        clk1 = 1;
        #(CLK1_PERIOD/2);
    end
    
    /**
     * Example 2: Parameterized clock
     * Clock with configurable period
     */
    initial begin
        #50;
        $display("Example 2: Parameterized Clock");
        $display("  Clock period: %0d ns", CLK2_PERIOD);
    end
    
    always begin
        clk2 = 0;
        #(CLK2_PERIOD/2);
        clk2 = 1;
        #(CLK2_PERIOD/2);
    end
    
    /**
     * Example 3: Multiple clocks
     * Demonstrates multiple independent clock domains
     */
    initial begin
        #100;
        $display("Example 3: Multiple Clocks");
        $display("  Clock 1 period: %0d ns", CLK1_PERIOD);
        $display("  Clock 2 period: %0d ns", CLK2_PERIOD);
        $display("  Clock 3 period: %0d ns", CLK3_PERIOD);
    end
    
    always begin
        clk3 = 0;
        #(CLK3_PERIOD/2);
        clk3 = 1;
        #(CLK3_PERIOD/2);
    end
    
    /**
     * Example 4: Clock gating
     * Clock that can be enabled/disabled
     */
    initial begin
        clk_gated = 0;
        clk_enable = 1;  // Start enabled
        
        #150;
        $display("Example 4: Clock Gating");
        $display("  Clock enabled initially");
        
        #50;
        clk_enable = 0;  // Disable clock
        $display("  Clock disabled at 200ns");
        
        #50;
        clk_enable = 1;  // Re-enable clock
        $display("  Clock re-enabled at 250ns");
    end
    
    // Gated clock - only toggles when enabled
    always begin
        if (clk_enable) begin
            clk_gated = 0;
            #(CLK1_PERIOD/2);
            clk_gated = 1;
            #(CLK1_PERIOD/2);
        end else begin
            clk_gated = 0;
            #(CLK1_PERIOD);
        end
    end
    
    /**
     * Example 5: Clock stopping
     * Demonstrates controlled clock stopping
     */
    logic clk_stop;
    logic clk_stopped;
    
    initial begin
        clk_stop = 0;
        clk_stopped = 0;
        
        #300;
        $display("Example 5: Clock Stopping");
        $display("  Stopping clock at 300ns");
        clk_stop = 1;
    end
    
    always begin
        if (!clk_stop && !clk_stopped) begin
            clk_stopped = 0;
            #(CLK1_PERIOD/2);
            clk_stopped = 1;
            #(CLK1_PERIOD/2);
        end else begin
            clk_stopped = 0;
            wait(clk_stop == 0);  // Wait for stop signal to clear
        end
    end
    
    /**
     * Monitor clock edges
     */
    initial begin
        #350;
        $display();
        $display("============================================================");
        $display("Clock Generation Examples Complete");
        $display("============================================================");
        $display();
        $display("Key Concepts:");
        $display("  - Clocks are fundamental to synchronous designs");
        $display("  - Parameterized clocks enable flexibility");
        $display("  - Multiple clocks require careful synchronization");
        $display("  - Clock gating is common in low-power designs");
        $display("  - Clock stopping enables controlled simulation");
        $finish;
    end
    
    /**
     * Monitor clock edges for verification
     */
    int clk1_edges = 0;
    int clk2_edges = 0;
    int clk3_edges = 0;
    
    always @(posedge clk1) begin
        clk1_edges++;
        if (clk1_edges <= 3) begin
            $display("[%0t] CLK1 rising edge #%0d", $time, clk1_edges);
        end
    end
    
    always @(posedge clk2) begin
        clk2_edges++;
        if (clk2_edges <= 3) begin
            $display("[%0t] CLK2 rising edge #%0d", $time, clk2_edges);
        end
    end
    
    always @(posedge clk3) begin
        clk3_edges++;
        if (clk3_edges <= 3) begin
            $display("[%0t] CLK3 rising edge #%0d", $time, clk3_edges);
        end
    end

endmodule
