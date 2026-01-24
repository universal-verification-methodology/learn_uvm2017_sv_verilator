/**
 * Module 8 Example 8.7: Math Utilities
 * Demonstrates mathematical operations and utilities.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand mathematical utility functions
 *   2. Learn statistical calculations
 *   3. Understand array operations
 *   4. Learn value clamping
 *   5. Understand mathematical patterns
 * 
 * MATH UTILITIES:
 *   - Average calculation
 *   - Maximum/minimum finding
 *   - Standard deviation calculation
 *   - Value clamping
 * 
 * This example shows:
 * - Mathematical operations
 * - Math utilities
 * - Statistical functions
 * - Math patterns
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================================
// MATH UTILITY CLASS
// ============================================================================
/**
 * MathUtils: Math utility class
 * 
 * UTILITY PURPOSE:
 *   - Provides mathematical operations
 *   - Statistical calculations
 *   - Value manipulation
 */
class MathUtils extends uvm_object;
    `uvm_object_utils(MathUtils)
    
    function new(string name = "MathUtils");
        super.new(name);
    endfunction
    
    // ========================================================================
    // CALCULATE AVERAGE
    // ========================================================================
    /**
     * Calculate average: Compute average of array values
     * 
     * AVERAGE CALCULATION:
     *   - Sum all values
     *   - Divide by array size
     *   - Returns real (floating point) result
     * 
     * FORMULA:
     *   average = sum(values) / size(values)
     */
    function real calculate_average(int values[]);
        int sum = 0;
        
        // ====================================================================
        // SUM ALL VALUES
        // ====================================================================
        // 
        // SUM CALCULATION:
        //   - Iterate through array
        //   - Accumulate sum
        //   - Example: values = [10, 20, 30] -> sum = 60
        foreach (values[i]) begin
            sum += values[i];
        end
        // 
        // SUM EXAMPLE:
        //   values = [10, 20, 30, 40, 50]
        //   i=0: sum = 0 + 10 = 10
        //   i=1: sum = 10 + 20 = 30
        //   i=2: sum = 30 + 30 = 60
        //   i=3: sum = 60 + 40 = 100
        //   i=4: sum = 100 + 50 = 150
        
        // ====================================================================
        // CALCULATE AVERAGE
        // ====================================================================
        // 
        // AVERAGE CALCULATION:
        //   - sum / real'(values.size()): Divide sum by array size
        //   - real'(): Type cast to real (floating point)
        //   - Returns floating point result
        return sum / real'(values.size());
        // 
        // AVERAGE EXAMPLE:
        //   values = [10, 20, 30, 40, 50]
        //   sum = 150
        //   size = 5
        //   average = 150 / 5.0 = 30.0
    endfunction
    
    // ========================================================================
    // CALCULATE MAXIMUM
    // ========================================================================
    /**
     * Calculate maximum: Find maximum value in array
     * 
     * MAXIMUM FINDING:
     *   - Initialize with first value
     *   - Compare with each value
     *   - Update if larger value found
     */
    function int calculate_max(int values[]);
        int max_val = values[0];  // Initialize with first value
        
        // ====================================================================
        // FIND MAXIMUM
        // ====================================================================
        // 
        // MAXIMUM SEARCH:
        //   - Compare each value with current maximum
        //   - Update maximum if larger value found
        //   - Example: values = [10, 30, 20] -> max = 30
        foreach (values[i]) begin
            if (values[i] > max_val) begin
                max_val = values[i];  // Update maximum
            end
        end
        // 
        // MAXIMUM EXAMPLE:
        //   values = [10, 30, 20, 50, 40]
        //   max_val = 10 (initial)
        //   i=1: 30 > 10 -> max_val = 30
        //   i=2: 20 < 30 -> max_val = 30 (no change)
        //   i=3: 50 > 30 -> max_val = 50
        //   i=4: 40 < 50 -> max_val = 50 (no change)
        //   Result: max_val = 50
        return max_val;
    endfunction
    
    // ========================================================================
    // CALCULATE MINIMUM
    // ========================================================================
    /**
     * Calculate minimum: Find minimum value in array
     * 
     * MINIMUM FINDING:
     *   - Initialize with first value
     *   - Compare with each value
     *   - Update if smaller value found
     */
    function int calculate_min(int values[]);
        int min_val = values[0];  // Initialize with first value
        
        // ====================================================================
        // FIND MINIMUM
        // ====================================================================
        // 
        // MINIMUM SEARCH:
        //   - Compare each value with current minimum
        //   - Update minimum if smaller value found
        //   - Example: values = [10, 5, 20] -> min = 5
        foreach (values[i]) begin
            if (values[i] < min_val) begin
                min_val = values[i];  // Update minimum
            end
        end
        // 
        // MINIMUM EXAMPLE:
        //   values = [30, 10, 50, 5, 40]
        //   min_val = 30 (initial)
        //   i=1: 10 < 30 -> min_val = 10
        //   i=2: 50 > 10 -> min_val = 10 (no change)
        //   i=3: 5 < 10 -> min_val = 5
        //   i=4: 40 > 5 -> min_val = 5 (no change)
        //   Result: min_val = 5
        return min_val;
    endfunction
    
    // ========================================================================
    // CALCULATE STANDARD DEVIATION
    // ========================================================================
    /**
     * Calculate standard deviation: Compute standard deviation of array
     * 
     * STANDARD DEVIATION CALCULATION:
     *   1. Calculate average
     *   2. Calculate variance (average of squared differences)
     *   3. Calculate standard deviation (square root of variance)
     * 
     * FORMULA:
     *   variance = sum((value - average)^2) / size
     *   std_dev = sqrt(variance)
     */
    function real calculate_std_dev(int values[]);
        real avg = calculate_average(values);  // Calculate average
        real variance = 0;
        
        // ====================================================================
        // CALCULATE VARIANCE
        // ====================================================================
        // 
        // VARIANCE CALCULATION:
        //   - For each value: (value - average)^2
        //   - Sum all squared differences
        //   - Divide by array size
        // 
        // VARIANCE FORMULA:
        //   variance = Σ(value[i] - average)^2 / n
        //   Where:
        //     - value[i]: Individual value
        //     - average: Mean of all values
        //     - n: Number of values
        foreach (values[i]) begin
            real diff = values[i] - avg;       // Difference from average
            variance += diff * diff;             // Square and accumulate
            // 
            // VARIANCE CALCULATION STEP-BY-STEP:
            //   Step 1: Calculate difference from average
            //     diff = values[i] - avg
            //   Step 2: Square the difference
            //     diff * diff = diff^2
            //   Step 3: Accumulate squared differences
            //     variance += diff^2
            // 
            // VARIANCE EXAMPLE (values = [10, 20, 30, 40, 50], avg = 30.0):
            //   i=0: diff = 10 - 30 = -20, diff^2 = 400, variance = 400
            //   i=1: diff = 20 - 30 = -10, diff^2 = 100, variance = 500
            //   i=2: diff = 30 - 30 = 0, diff^2 = 0, variance = 500
            //   i=3: diff = 40 - 30 = 10, diff^2 = 100, variance = 600
            //   i=4: diff = 50 - 30 = 20, diff^2 = 400, variance = 1000
        end
        variance = variance / real'(values.size());  // Average variance
        // 
        // VARIANCE FINAL CALCULATION:
        //   variance = 1000 / 5 = 200.0
        //   This represents the average squared deviation from mean
        
        // ====================================================================
        // CALCULATE STANDARD DEVIATION
        // ====================================================================
        // 
        // STANDARD DEVIATION:
        //   - Square root of variance
        //   - Measures spread of values
        //   - Same units as original values
        //   - Example: values = [10, 20, 30] -> std_dev ≈ 8.16
        // 
        // STANDARD DEVIATION INTERPRETATION:
        //   - Low std_dev: Values close to average (tight distribution)
        //   - High std_dev: Values spread out (wide distribution)
        //   - Zero std_dev: All values identical
        return $sqrt(variance);
        // 
        // STANDARD DEVIATION DETAILED EXAMPLE:
        //   values = [10, 20, 30, 40, 50]
        //   average = 30.0
        //   variance = 200.0
        //   std_dev = sqrt(200.0) ≈ 14.14
        // 
        //   INTERPRETATION:
        //     - Average value: 30.0
        //     - Standard deviation: 14.14
        //     - Most values within 30.0 ± 14.14 (15.86 to 44.14)
        //     - 68% of values within 1 std_dev of mean (normal distribution)
        //     - 95% of values within 2 std_dev of mean
        // 
        //   COMPARISON EXAMPLES:
        //     Tight distribution: [28, 29, 30, 31, 32]
        //       average = 30.0, std_dev ≈ 1.41 (low spread)
        //     
        //     Wide distribution: [0, 10, 30, 50, 60]
        //       average = 30.0, std_dev ≈ 22.36 (high spread)
        //     
        //     Identical values: [30, 30, 30, 30, 30]
        //       average = 30.0, std_dev = 0.0 (no spread)
    endfunction
    
    // ========================================================================
    // CLAMP VALUE
    // ========================================================================
    /**
     * Clamp value: Clamp value to range
     * 
     * CLAMP OPERATION:
     *   - If value < min_val: Return min_val
     *   - If value > max_val: Return max_val
     *   - Otherwise: Return value
     * 
     * USAGE:
     *   - Limit values to valid range
     *   - Prevent out-of-range values
     */
    function int clamp(int value, int min_val, int max_val);
        // ====================================================================
        // CLAMP TO MINIMUM
        // ====================================================================
        if (value < min_val) return min_val;
        // 
        // CLAMP MIN EXAMPLE:
        //   value = 5, min_val = 10, max_val = 100
        //   value < min_val: 5 < 10 -> return 10
        
        // ====================================================================
        // CLAMP TO MAXIMUM
        // ====================================================================
        if (value > max_val) return max_val;
        // 
        // CLAMP MAX EXAMPLE:
        //   value = 150, min_val = 10, max_val = 100
        //   value > max_val: 150 > 100 -> return 100
        
        // ====================================================================
        // VALUE IN RANGE
        // ====================================================================
        return value;
        // 
        // IN RANGE EXAMPLE:
        //   value = 50, min_val = 10, max_val = 100
        //   value >= min_val: 50 >= 10 (true)
        //   value <= max_val: 50 <= 100 (true)
        //   return 50 (no clamping needed)
    endfunction
endclass

// ============================================================================
// TEST CLASS
// ============================================================================
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
        int clamped;
        phase.raise_objection(this);
        
        `uvm_info("MATH", "Testing math utilities", UVM_LOW)
        
        // ====================================================================
        // INITIALIZE TEST VALUES
        // ====================================================================
        // 
        // TEST DATA:
        //   - Array of 10 values: [0, 10, 20, 30, 40, 50, 60, 70, 80, 90]
        //   - Sequential pattern for easy verification
        values = new[10];
        for (int i = 0; i < 10; i++) begin
            values[i] = i * 10;
        end
        // 
        // VALUES EXAMPLE:
        //   values = [0, 10, 20, 30, 40, 50, 60, 70, 80, 90]
        //   Sum = 450
        //   Average = 45.0
        //   Max = 90
        //   Min = 0
        
        // ====================================================================
        // TEST AVERAGE CALCULATION
        // ====================================================================
        avg = math_utils.calculate_average(values);
        `uvm_info("MATH", $sformatf("Average of values: %0.2f", avg), UVM_MEDIUM)
        // 
        // AVERAGE VERIFICATION:
        //   values = [0, 10, 20, 30, 40, 50, 60, 70, 80, 90]
        //   sum = 450
        //   size = 10
        //   average = 450 / 10 = 45.0
        
        // ====================================================================
        // TEST MAX CALCULATION
        // ====================================================================
        max_val = math_utils.calculate_max(values);
        `uvm_info("MATH", $sformatf("Maximum value: %0d", max_val), UVM_MEDIUM)
        // 
        // MAX VERIFICATION:
        //   values = [0, 10, 20, 30, 40, 50, 60, 70, 80, 90]
        //   max = 90 (last value)
        
        // ====================================================================
        // TEST MIN CALCULATION
        // ====================================================================
        min_val = math_utils.calculate_min(values);
        `uvm_info("MATH", $sformatf("Minimum value: %0d", min_val), UVM_MEDIUM)
        // 
        // MIN VERIFICATION:
        //   values = [0, 10, 20, 30, 40, 50, 60, 70, 80, 90]
        //   min = 0 (first value)
        
        // ====================================================================
        // TEST STANDARD DEVIATION
        // ====================================================================
        std_dev = math_utils.calculate_std_dev(values);
        `uvm_info("MATH", $sformatf("Standard deviation: %0.2f", std_dev), UVM_MEDIUM)
        // 
        // STANDARD DEVIATION VERIFICATION:
        //   values = [0, 10, 20, 30, 40, 50, 60, 70, 80, 90]
        //   average = 45.0
        //   variance = sum((value - 45)^2) / 10
        //            = (2025 + 1225 + 625 + 225 + 25 + 25 + 225 + 625 + 1225 + 2025) / 10
        //            = 8250 / 10 = 825.0
        //   std_dev = sqrt(825.0) ≈ 28.72
        
        // ====================================================================
        // TEST CLAMP FUNCTION
        // ====================================================================
        clamped = math_utils.clamp(150, 0, 100);
        `uvm_info("MATH", $sformatf("clamp(150, 0, 100) = %0d", clamped), UVM_MEDIUM)
        // 
        // CLAMP VERIFICATION:
        //   value = 150, min = 0, max = 100
        //   value > max: 150 > 100 -> return 100
        //   Result: 100
        
        #100;
        phase.drop_objection(this);
    endtask
endclass

// ============================================================================
// TOP-LEVEL MODULE
// ============================================================================
module math_utils_top;
    import uvm_pkg::*;
    
    initial begin
        run_test("MathUtilsTest");
    end
endmodule
