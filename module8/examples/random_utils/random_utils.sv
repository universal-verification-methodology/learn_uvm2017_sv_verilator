/**
 * Module 8 Example 8.8: Random Utilities
 * Demonstrates random number generation and utilities.
 * 
 * This example shows:
 * - Random number generation
 * - Random utilities
 * - Constrained random
 * - Random patterns
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Random utility class
 */
class RandomUtils extends uvm_object;
    `uvm_object_utils(RandomUtils)
    
    function new(string name = "RandomUtils");
        super.new(name);
    endfunction
    
    // Generate random integer in range
    function int random_range(int min_val, int max_val);
        return $urandom_range(max_val, min_val);
    endfunction
    
    // Generate random bit vector
    function logic [31:0] random_bits(int width = 32);
        return $urandom();
    endfunction
    
    // Generate weighted random value
    function int weighted_random(int weights[]);
        int total_weight = 0;
        int random_val;
        int cumulative = 0;
        
        foreach (weights[i]) begin
            total_weight += weights[i];
        end
        
        random_val = $urandom_range(total_weight - 1, 0);
        
        foreach (weights[i]) begin
            cumulative += weights[i];
            if (random_val < cumulative) begin
                return i;
            end
        end
        
        return weights.size() - 1;
    endfunction
    
    // Generate random delay
    function int random_delay(int min_delay, int max_delay);
        return $urandom_range(max_delay, min_delay);
    endfunction
endclass

/**
 * Transaction with random constraints
 */
class RandomTransaction extends uvm_sequence_item;
    rand logic [7:0] data;
    rand logic [15:0] address;
    rand int delay;
    
    constraint valid_data {
        data inside {[8'h00:8'hFF]};
    }
    
    constraint valid_address {
        address inside {[16'h0000:16'hFFFF]};
    }
    
    constraint valid_delay {
        delay inside {[1:100]};
    }
    
    `uvm_object_utils(RandomTransaction)
    
    function new(string name = "RandomTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h, delay=%0d", data, address, delay);
    endfunction
endclass

/**
 * Test for random utilities
 */
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
        phase.raise_objection(this);
        
        `uvm_info("RANDOM", "Testing random utilities", UVM_LOW)
        
        // Test random range
        for (int i = 0; i < 10; i++) begin
            int rand_val = rand_utils.random_range(0, 100);
            `uvm_info("RANDOM", $sformatf("random_range(0, 100) = %0d", rand_val), UVM_DEBUG)
        end
        
        // Test random bits
        logic [31:0] rand_bits = rand_utils.random_bits(32);
        `uvm_info("RANDOM", $sformatf("random_bits(32) = 0x%08h", rand_bits), UVM_MEDIUM)
        
        // Test weighted random
        weights = new[3];
        weights[0] = 10;
        weights[1] = 30;
        weights[2] = 60;
        for (int i = 0; i < 10; i++) begin
            int weighted_val = rand_utils.weighted_random(weights);
            `uvm_info("RANDOM", $sformatf("weighted_random() = %0d", weighted_val), UVM_DEBUG)
        end
        
        // Test constrained random transaction
        for (int i = 0; i < 10; i++) begin
            txn = RandomTransaction::type_id::create("txn");
            void'(txn.randomize());
            `uvm_info("RANDOM", $sformatf("Random transaction: %s", txn.convert2string()), UVM_MEDIUM)
            #txn.delay;
        end
        
        #100;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level module for random utilities example
 */
module random_utils_top;
    import uvm_pkg::*;
    
    initial begin
        run_test("RandomUtilsTest");
    end
endmodule
