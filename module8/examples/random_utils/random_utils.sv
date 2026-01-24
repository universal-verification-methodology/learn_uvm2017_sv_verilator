/**
 * Module 8 Example 8.8: Random Utilities
 * Demonstrates random number generation and utilities.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand random number generation
 *   2. Learn random range generation
 *   3. Understand weighted random selection
 *   4. Learn random delay generation
 *   5. Understand constrained random patterns
 * 
 * RANDOM UTILITIES:
 *   - Random range: Generate random integer in range
 *   - Random bits: Generate random bit vector
 *   - Weighted random: Generate random value with weights
 *   - Random delay: Generate random delay value
 * 
 * This example shows:
 * - Random number generation
 * - Random utilities
 * - Constrained random
 * - Random patterns
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================================
// RANDOM UTILITY CLASS
// ============================================================================
/**
 * RandomUtils: Random utility class
 * 
 * UTILITY PURPOSE:
 *   - Provides random number generation
 *   - Weighted random selection
 *   - Random delay generation
 */
class RandomUtils extends uvm_object;
    `uvm_object_utils(RandomUtils)
    
    function new(string name = "RandomUtils");
        super.new(name);
    endfunction
    
    // ========================================================================
    // RANDOM RANGE
    // ========================================================================
    /**
     * Random range: Generate random integer in range
     * 
     * RANDOM RANGE:
     *   - $urandom_range(max, min): Generate random value in range
     *   - Inclusive range: [min, max]
     *   - Returns integer value
     */
    function int random_range(int min_val, int max_val);
        // ====================================================================
        // GENERATE RANDOM VALUE
        // ====================================================================
        // 
        // URANDOM_RANGE:
        //   - $urandom_range(max, min): Random value in [min, max]
        //   - Inclusive: Both min and max are possible
        //   - Example: $urandom_range(100, 0) -> 0 to 100
        return $urandom_range(max_val, min_val);
        // 
        // RANDOM RANGE EXAMPLE:
        //   min_val = 0, max_val = 100
        //   $urandom_range(100, 0) -> Random value: 0 to 100
        //   Possible values: 0, 1, 2, ..., 99, 100
    endfunction
    
    // ========================================================================
    // RANDOM BITS
    // ========================================================================
    /**
     * Random bits: Generate random bit vector
     * 
     * RANDOM BITS:
     *   - $urandom(): Generate random 32-bit value
     *   - Returns random bit vector
     *   - Width parameter for future extension
     */
    function logic [31:0] random_bits(int width = 32);
        // ====================================================================
        // GENERATE RANDOM BITS
        // ====================================================================
        // 
        // URANDOM:
        //   - $urandom(): Generate random 32-bit value
        //   - Returns random bit vector
        //   - Example: 0x12345678, 0xABCDEF01, etc.
        return $urandom();
        // 
        // RANDOM BITS EXAMPLE:
        //   $urandom() -> 0x12345678 (random 32-bit value)
        //   $urandom() -> 0xABCDEF01 (different random value)
        //   $urandom() -> 0x00000000 (possible, but unlikely)
    endfunction
    
    // ========================================================================
    // WEIGHTED RANDOM
    // ========================================================================
    /**
     * Weighted random: Generate random value with weights
     * 
     * WEIGHTED RANDOM:
     *   - Each index has a weight
     *   - Higher weight = higher probability
     *   - Returns index based on weighted probability
     * 
     * ALGORITHM:
     *   1. Calculate total weight
     *   2. Generate random value in [0, total_weight)
     *   3. Find index where cumulative weight > random value
     */
    function int weighted_random(int weights[]);
        int total_weight = 0;
        int random_val;
        int cumulative = 0;
        
        // ====================================================================
        // CALCULATE TOTAL WEIGHT
        // ====================================================================
        // 
        // TOTAL WEIGHT:
        //   - Sum all weights
        //   - Used for random value range
        foreach (weights[i]) begin
            total_weight += weights[i];
        end
        // 
        // TOTAL WEIGHT EXAMPLE:
        //   weights = [10, 30, 60]
        //   total_weight = 10 + 30 + 60 = 100
        
        // ====================================================================
        // GENERATE RANDOM VALUE
        // ====================================================================
        // 
        // RANDOM VALUE:
        //   - Generate in range [0, total_weight)
        //   - Used to select weighted index
        random_val = $urandom_range(total_weight - 1, 0);
        // 
        // RANDOM VALUE EXAMPLE:
        //   total_weight = 100
        //   random_val = $urandom_range(99, 0) -> 0 to 99
        
        // ====================================================================
        // FIND WEIGHTED INDEX
        // ====================================================================
        // 
        // WEIGHTED SELECTION:
        //   - Build cumulative weight distribution
        //   - Find index where cumulative > random_val
        //   - Higher weight = larger range = higher probability
        // 
        // WEIGHTED SELECTION ALGORITHM:
        //   Step 1: Initialize cumulative = 0
        //   Step 2: For each weight:
        //     - Add weight to cumulative
        //     - Check if random_val < cumulative
        //     - If yes: Return current index
        //     - If no: Continue to next weight
        //   Step 3: If no match: Return last index (fallback)
        foreach (weights[i]) begin
            cumulative += weights[i];
            if (random_val < cumulative) begin
                return i;  // Found weighted index
            end
        end
        // 
        // WEIGHTED SELECTION DETAILED EXAMPLE:
        //   weights = [10, 30, 60]
        //   total_weight = 100
        //   random_val = 25
        //   
        //   Iteration 0 (i=0):
        //     cumulative = 0 + 10 = 10
        //     random_val = 25
        //     25 < 10? No
        //     Continue
        //   
        //   Iteration 1 (i=1):
        //     cumulative = 10 + 30 = 40
        //     random_val = 25
        //     25 < 40? Yes
        //     Return 1
        //   
        //   Result: index 1 (weight 30, probability 30%)
        // 
        // PROBABILITY DISTRIBUTION DETAILED:
        //   weights = [10, 30, 60]
        //   total_weight = 100
        //   
        //   Index 0:
        //     Weight: 10
        //     Probability: 10% (10/100)
        //     Range: [0, 9] (10 values)
        //     Cumulative: [0, 10)
        //   
        //   Index 1:
        //     Weight: 30
        //     Probability: 30% (30/100)
        //     Range: [10, 39] (30 values)
        //     Cumulative: [10, 40)
        //   
        //   Index 2:
        //     Weight: 60
        //     Probability: 60% (60/100)
        //     Range: [40, 99] (60 values)
        //     Cumulative: [40, 100)
        // 
        //   SELECTION EXAMPLES:
        //     random_val = 5: 5 < 10? Yes -> Index 0 (10% probability)
        //     random_val = 25: 25 < 10? No, 25 < 40? Yes -> Index 1 (30% probability)
        //     random_val = 75: 75 < 10? No, 75 < 40? No, 75 < 100? Yes -> Index 2 (60% probability)
        // 
        //   PROBABILITY VERIFICATION:
        //     After many iterations:
        //       Index 0: ~10% of selections
        //       Index 1: ~30% of selections
        //       Index 2: ~60% of selections
        
        // ====================================================================
        // FALLBACK (SHOULD NOT REACH)
        // ====================================================================
        return weights.size() - 1;
    endfunction
    
    // ========================================================================
    // RANDOM DELAY
    // ========================================================================
    /**
     * Random delay: Generate random delay value
     * 
     * RANDOM DELAY:
     *   - Generate random delay in range
     *   - Used for timing variation
     *   - Improves test coverage
     */
    function int random_delay(int min_delay, int max_delay);
        // ====================================================================
        // GENERATE RANDOM DELAY
        // ====================================================================
        // 
        // DELAY GENERATION:
        //   - Random value in [min_delay, max_delay]
        //   - Used for timing variation
        //   - Example: min_delay=1, max_delay=100 -> delay 1 to 100
        return $urandom_range(max_delay, min_delay);
        // 
        // RANDOM DELAY EXAMPLE:
        //   min_delay = 1, max_delay = 100
        //   $urandom_range(100, 1) -> Random delay: 1 to 100
        //   Possible delays: 1, 2, 3, ..., 99, 100
    endfunction
endclass

// ============================================================================
// TRANSACTION WITH RANDOM CONSTRAINTS
// ============================================================================
/**
 * RandomTransaction: Transaction with random constraints
 * 
 * CONSTRAINED RANDOM:
 *   - Random fields with constraints
 *   - Valid ranges for each field
 *   - Ensures valid transaction values
 */
class RandomTransaction extends uvm_sequence_item;
    rand logic [7:0] data;      // Data (8-bit, constrained)
    rand logic [15:0] address;  // Address (16-bit, constrained)
    rand int delay;             // Delay (constrained)
    
    // ========================================================================
    // CONSTRAINTS
    // ========================================================================
    // 
    // CONSTRAINT PURPOSE:
    //   - Limit random values to valid ranges
    //   - Ensure transaction validity
    //   - Improve test coverage
    constraint valid_data {
        data inside {[8'h00:8'hFF]};  // Data: 0x00 to 0xFF
    }
    
    constraint valid_address {
        address inside {[16'h0000:16'hFFFF]};  // Address: 0x0000 to 0xFFFF
    }
    
    constraint valid_delay {
        delay inside {[1:100]};  // Delay: 1 to 100
    }
    
    `uvm_object_utils(RandomTransaction)
    
    function new(string name = "RandomTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h, delay=%0d", data, address, delay);
    endfunction
endclass

// ============================================================================
// TEST CLASS
// ============================================================================
class RandomUtilsTest extends uvm_test;
    RandomUtils rand_utils;
    
    `uvm_component_utils(RandomUtilsTest)
    
    function new(string name = "RandomUtilsTest", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        rand_utils = RandomUtils::type_id::create("rand_utils");
    endfunction
    
    task run_phase(uvm_phase phase);
        RandomTransaction txn;
        int weights[];
        logic [31:0] rand_bits;
        phase.raise_objection(this);
        
        `uvm_info("RANDOM", "Testing random utilities", UVM_LOW)
        
        // ====================================================================
        // TEST RANDOM RANGE
        // ====================================================================
        // 
        // RANDOM RANGE TEST:
        //   - Generate multiple random values
        //   - Verify values are in range [0, 100]
        for (int i = 0; i < 10; i++) begin
            int rand_val = rand_utils.random_range(0, 100);
            `uvm_info("RANDOM", $sformatf("random_range(0, 100) = %0d", rand_val), UVM_DEBUG)
        end
        
        // ====================================================================
        // TEST RANDOM BITS
        // ====================================================================
        rand_bits = rand_utils.random_bits(32);
        `uvm_info("RANDOM", $sformatf("random_bits(32) = 0x%08h", rand_bits), UVM_MEDIUM)
        
        // ====================================================================
        // TEST WEIGHTED RANDOM
        // ====================================================================
        // 
        // WEIGHTED RANDOM TEST:
        //   - weights = [10, 30, 60]
        //   - Probabilities: 10%, 30%, 60%
        //   - Generate multiple weighted values
        weights = new[3];
        weights[0] = 10;  // 10% probability
        weights[1] = 30;  // 30% probability
        weights[2] = 60;  // 60% probability
        for (int i = 0; i < 10; i++) begin
            int weighted_val = rand_utils.weighted_random(weights);
            `uvm_info("RANDOM", $sformatf("weighted_random() = %0d", weighted_val), UVM_DEBUG)
        end
        
        // ====================================================================
        // TEST CONSTRAINED RANDOM TRANSACTION
        // ====================================================================
        // 
        // CONSTRAINED RANDOM TEST:
        //   - Generate random transactions
        //   - Constraints ensure valid values
        //   - Use delay from transaction
        for (int i = 0; i < 10; i++) begin
            txn = RandomTransaction::type_id::create("txn");
            void'(txn.randomize());
            `uvm_info("RANDOM", $sformatf("Random transaction: %s", txn.convert2string()), UVM_MEDIUM)
            #txn.delay;  // Use random delay from transaction
        end
        
        #100;
        phase.drop_objection(this);
    endtask
endclass

// ============================================================================
// TOP-LEVEL MODULE
// ============================================================================
module random_utils_top;
    import uvm_pkg::*;
    
    initial begin
        run_test("RandomUtilsTest");
    end
endmodule
