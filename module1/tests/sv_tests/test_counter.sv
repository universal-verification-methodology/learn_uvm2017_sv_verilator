/**
 * Module 1 Test: SystemVerilog Testbench for Counter
 * 
 * Demonstrates:
 * - Clock generation
 * - Reset sequences
 * - Sequential logic verification
 */

`timescale 1ns/1ps

module test_counter;
    // DUT signals
    logic clk;
    logic rst_n;
    logic enable;
    logic [7:0] count;
    
    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end
    
    // DUT instantiation
    counter dut (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .count(count)
    );
    
    /**
     * Reset task
     */
    task reset();
        rst_n = 0;
        enable = 0;
        #20;
        rst_n = 1;
        #10;
    endtask
    
    /**
     * Test 1: Reset functionality
     */
    task test_reset();
        $display("Test 1: Reset functionality");
        
        reset();
        assert (count == 8'h00) else $error("Test failed: Counter should reset to 0");
        
        $display("Test 1 passed!");
    endtask
    
    /**
     * Test 2: Increment functionality
     */
    task test_increment();
        $display("Test 2: Increment functionality");
        
        reset();
        enable = 1;
        
        for (int i = 0; i < 10; i++) begin
            @(posedge clk);
            #1;
            assert (count == 8'(i)) else $error("Test failed: Expected count=%0d, got %0d", i, count);
            $display("  Count = %0d (PASS)", count);
        end
        
        $display("Test 2 passed!");
    endtask
    
    /**
     * Test 3: Enable control
     */
    task test_enable();
        $display("Test 3: Enable control");
        
        reset();
        enable = 1;
        
        @(posedge clk);
        #1;
        assert (count == 1) else $error("Test failed: Counter should increment when enabled");
        
        enable = 0;
        @(posedge clk);
        #1;
        assert (count == 1) else $error("Test failed: Counter should hold when disabled");
        
        enable = 1;
        @(posedge clk);
        #1;
        assert (count == 2) else $error("Test failed: Counter should increment when re-enabled");
        
        $display("Test 3 passed!");
    endtask
    
    /**
     * Test 4: Overflow behavior
     */
    task test_overflow();
        $display("Test 4: Overflow behavior");
        
        reset();
        enable = 1;
        
        // Count to overflow
        for (int i = 0; i < 256; i++) begin
            @(posedge clk);
            #1;
            assert (count == 8'(i % 256)) else 
                $error("Test failed: Expected count=%0d, got %0d", i % 256, count);
        end
        
        // Verify wrap-around
        @(posedge clk);
        #1;
        assert (count == 0) else $error("Test failed: Counter should wrap to 0");
        
        $display("Test 4 passed!");
    endtask
    
    // Main test execution
    initial begin
        $display("============================================================");
        $display("Counter SystemVerilog Testbench");
        $display("============================================================");
        $display();
        
        // Run tests
        test_reset();
        $display();
        
        test_increment();
        $display();
        
        test_enable();
        $display();
        
        test_overflow();
        $display();
        
        $display("============================================================");
        $display("All tests passed!");
        $display("============================================================");
        
        #100;
        $finish;
    end
endmodule
