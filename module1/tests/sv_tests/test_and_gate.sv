/**
 * Module 1 Test: SystemVerilog Testbench for AND Gate
 * 
 * Demonstrates:
 * - SystemVerilog testbench structure
 * - Signal driving and checking
 * - Basic verification patterns
 */

`timescale 1ns/1ps

module test_and_gate;
    // DUT signals
    logic a, b, y;
    
    // DUT instantiation
    and_gate dut (
        .a(a),
        .b(b),
        .y(y)
    );
    
    /**
     * Test 1: Basic truth table test
     */
    task test_basic();
        $display("Test 1: Basic truth table test");
        
        // Test case 1: 0 & 0 = 0
        a = 0; b = 0;
        #10;
        assert (y == 0) else $error("Test failed: 0 & 0 should be 0, got %b", y);
        
        // Test case 2: 0 & 1 = 0
        a = 0; b = 1;
        #10;
        assert (y == 0) else $error("Test failed: 0 & 1 should be 0, got %b", y);
        
        // Test case 3: 1 & 0 = 0
        a = 1; b = 0;
        #10;
        assert (y == 0) else $error("Test failed: 1 & 0 should be 0, got %b", y);
        
        // Test case 4: 1 & 1 = 1
        a = 1; b = 1;
        #10;
        assert (y == 1) else $error("Test failed: 1 & 1 should be 1, got %b", y);
        
        $display("Test 1 passed!");
    endtask
    
    /**
     * Test 2: Systematic truth table verification
     */
    task test_truth_table();
        $display("Test 2: Systematic truth table verification");
        
        for (int i = 0; i < 2; i++) begin
            for (int j = 0; j < 2; j++) begin
                a = bit'(i);
                b = bit'(j);
                #10;
                assert (y == (a & b)) else 
                    $error("Test failed: %b & %b should be %b, got %b", a, b, (a & b), y);
                $display("  %b & %b = %b (PASS)", a, b, y);
            end
        end
        
        $display("Test 2 passed!");
    endtask
    
    /**
     * Test 3: Timing verification
     */
    task test_timing();
        $display("Test 3: Timing verification");
        
        // Test propagation delay
        a = 0; b = 0;
        #5;
        a = 1; b = 1;
        #5;
        assert (y == 1) else $error("Test failed: Output should propagate");
        
        $display("Test 3 passed!");
    endtask
    
    // Main test execution
    initial begin
        $display("============================================================");
        $display("AND Gate SystemVerilog Testbench");
        $display("============================================================");
        $display();
        
        // Initialize signals
        a = 0;
        b = 0;
        
        // Run tests
        test_basic();
        $display();
        
        test_truth_table();
        $display();
        
        test_timing();
        $display();
        
        $display("============================================================");
        $display("All tests passed!");
        $display("============================================================");
        
        #100;
        $finish;
    end
endmodule
