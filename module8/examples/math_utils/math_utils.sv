/**
 * Module 8 Example 8.7: Math Utilities
 * Demonstrates mathematical operations and utilities.
 * 
 * This example shows:
 * - Mathematical operations
 * - Math utilities
 * - Statistical functions
 * - Math patterns
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Math utility class
 */
class MathUtils extends uvm_object;
    `uvm_object_utils(MathUtils)
    
    function new(string name = "MathUtils");
        super.new(name);
    endfunction
    
    // Calculate average of array
    function real calculate_average(int values[]);
        int sum = 0;
        foreach (values[i]) begin
            sum += values[i];
        end
        return sum / real'(values.size());
    endfunction
    
    // Calculate maximum value
    function int calculate_max(int values[]);
        int max_val = values[0];
        foreach (values[i]) begin
            if (values[i] > max_val) begin
                max_val = values[i];
            end
        end
        return max_val;
    endfunction
    
    // Calculate minimum value
    function int calculate_min(int values[]);
        int min_val = values[0];
        foreach (values[i]) begin
            if (values[i] < min_val) begin
                min_val = values[i];
            end
        end
        return min_val;
    endfunction
    
    // Calculate standard deviation
    function real calculate_std_dev(int values[]);
        real avg = calculate_average(values);
        real variance = 0;
        foreach (values[i]) begin
            real diff = values[i] - avg;
            variance += diff * diff;
        end
        variance = variance / real'(values.size());
        return $sqrt(variance);
    endfunction
    
    // Clamp value to range
    function int clamp(int value, int min_val, int max_val);
        if (value < min_val) return min_val;
        if (value > max_val) return max_val;
        return value;
    endfunction
endclass

/**
 * Test for math utilities
 */
class MathUtilsTest extends uvm_test;
    MathUtils math_utils;
    
    `uvm_component_utils(MathUtilsTest)
    
    function new(string name = "MathUtilsTest", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        math_utils = MathUtils::type_id::create("math_utils");
    endfunction
    
    task run_phase(uvm_phase phase);
        int values[];
        real avg, std_dev;
        int max_val, min_val;
        phase.raise_objection(this);
        
        `uvm_info("MATH", "Testing math utilities", UVM_LOW)
        
        // Initialize test values
        values = new[10];
        for (int i = 0; i < 10; i++) begin
            values[i] = i * 10;
        end
        
        // Test average calculation
        avg = math_utils.calculate_average(values);
        `uvm_info("MATH", $sformatf("Average of values: %0.2f", avg), UVM_MEDIUM)
        
        // Test max calculation
        max_val = math_utils.calculate_max(values);
        `uvm_info("MATH", $sformatf("Maximum value: %0d", max_val), UVM_MEDIUM)
        
        // Test min calculation
        min_val = math_utils.calculate_min(values);
        `uvm_info("MATH", $sformatf("Minimum value: %0d", min_val), UVM_MEDIUM)
        
        // Test standard deviation
        std_dev = math_utils.calculate_std_dev(values);
        `uvm_info("MATH", $sformatf("Standard deviation: %0.2f", std_dev), UVM_MEDIUM)
        
        // Test clamp function
        int clamped = math_utils.clamp(150, 0, 100);
        `uvm_info("MATH", $sformatf("clamp(150, 0, 100) = %0d", clamped), UVM_MEDIUM)
        
        #100;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level module for math utilities example
 */
module math_utils_top;
    import uvm_pkg::*;
    
    initial begin
        run_test("MathUtilsTest");
    end
endmodule
