/**
 * Module 2 Example 2.5: Common Verification Patterns
 * Demonstrates common verification patterns in SystemVerilog testbenches.
 * 
 * This example shows:
 * - Testbench structure
 * - Driver pattern
 * - Monitor pattern
 * - Scoreboard pattern
 * - Reusable components
 */

`timescale 1ns/1ps

package common_patterns_pkg;
    /**
     * Simple transaction class
     */
    class Transaction;
        int id;
        logic [7:0] data;
        int timestamp;
        
        function new(int id_val = 0, logic [7:0] data_val = 0);
            id = id_val;
            data = data_val;
            timestamp = 0;
        endfunction
        
        function string convert2string();
            return $sformatf("Transaction(id=%0d, data=0x%02h)", id, data);
        endfunction
    endclass
    
    /**
     * Driver class - generates stimulus
     */
    class Driver;
        virtual task drive_transaction(Transaction txn);
            // This would drive signals to DUT
            $display("    [DRIVER] Driving %s", txn.convert2string());
        endtask
    endclass
    
    /**
     * Monitor class - observes DUT behavior
     */
    class Monitor;
        Transaction captured_txn;
        
        function new();
            captured_txn = null;
        endfunction
        
        virtual task monitor_dut();
            // This would sample DUT signals
            $display("    [MONITOR] Monitoring DUT");
        endtask
        
        function Transaction get_captured();
            return captured_txn;
        endfunction
    endclass
    
    /**
     * Scoreboard class - checks DUT behavior
     */
    class Scoreboard;
        Transaction expected_queue[$];
        Transaction actual_queue[$];
        int match_count = 0;
        int mismatch_count = 0;
        
        function new();
            expected_queue.delete();
            actual_queue.delete();
        endfunction
        
        function void add_expected(Transaction txn);
            expected_queue.push_back(txn);
            $display("    [SCOREBOARD] Added expected: %s", txn.convert2string());
        endfunction
        
        function void add_actual(Transaction txn);
            actual_queue.push_back(txn);
            $display("    [SCOREBOARD] Added actual: %s", txn.convert2string());
        endfunction
        
        function bit check();
            bit result = 1;
            
            if (expected_queue.size() != actual_queue.size()) begin
                $error("Queue size mismatch: expected %0d, got %0d", 
                       expected_queue.size(), actual_queue.size());
                return 0;
            end
            
            for (int i = 0; i < expected_queue.size(); i++) begin
                if (expected_queue[i].data != actual_queue[i].data) begin
                    $error("Mismatch at index %0d: expected 0x%02h, got 0x%02h",
                           i, expected_queue[i].data, actual_queue[i].data);
                    mismatch_count++;
                    result = 0;
                end else begin
                    match_count++;
                end
            end
            
            return result;
        endfunction
        
        function void print_stats();
            $display("    [SCOREBOARD] Matches: %0d, Mismatches: %0d", 
                     match_count, mismatch_count);
        endfunction
    endclass
endpackage

module common_patterns;
    import common_patterns_pkg::*;
    
    // DUT signals (simulated)
    logic clk;
    logic rst_n;
    logic [7:0] data_in;
    logic [7:0] data_out;
    
    // Clock generation
    parameter CLK_PERIOD = 10;
    always begin
        clk = 0;
        #(CLK_PERIOD/2);
        clk = 1;
        #(CLK_PERIOD/2);
    end
    
    // Simple DUT model
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            data_out <= 8'h00;
        end else begin
            data_out <= data_in;
        end
    end
    
    /**
     * Example 1: Testbench Structure
     * Organized testbench with phases
     */
    task test_testbench_structure();
        $display("Example 1: Testbench Structure");
        
        $display("  Phase 1: Initialization");
        rst_n = 0;
        data_in = 8'h00;
        #(CLK_PERIOD * 2);
        
        $display("  Phase 2: Reset");
        rst_n = 1;
        #(CLK_PERIOD);
        
        $display("  Phase 3: Stimulus Generation");
        for (int i = 0; i < 5; i++) begin
            data_in = 8'(i);
            #(CLK_PERIOD);
        end
        
        $display("  Phase 4: Response Checking");
        assert (data_out == data_in) else $error("Response check failed");
        
        $display("  Phase 5: Cleanup");
        data_in = 8'h00;
        #(CLK_PERIOD);
        
        $display("  Testbench structure PASSED");
    endtask
    
    /**
     * Example 2: Driver Pattern
     * Stimulus generation component
     */
    task test_driver_pattern();
        $display();
        $display("Example 2: Driver Pattern");
        
        // Declare without initialization to avoid issues with declaration-time
        // construction in some Verilator versions.
        Driver driver;
        Transaction txn;

        driver = new();
        
        for (int i = 0; i < 3; i++) begin
            txn = new(i, 8'(i * 10));
            driver.drive_transaction(txn);
            #(CLK_PERIOD);
        end
        
        $display("  Driver pattern PASSED");
    endtask
    
    /**
     * Example 3: Monitor Pattern
     * Response monitoring component
     */
    task test_monitor_pattern();
        $display();
        $display("Example 3: Monitor Pattern");
        
        // Separate declaration and construction for better tool compatibility.
        Monitor monitor;

        monitor = new();
        
        // Simulate monitoring
        for (int i = 0; i < 3; i++) begin
            monitor.monitor_dut();
            #(CLK_PERIOD);
        end
        
        $display("  Monitor pattern PASSED");
    endtask
    
    /**
     * Example 4: Scoreboard Pattern
     * Response checking component
     */
    task test_scoreboard_pattern();
        $display();
        $display("Example 4: Scoreboard Pattern");
        
        // Avoid declaration-time construction and multi-variable declarations.
        Scoreboard scoreboard;
        Transaction expected_txn;
        Transaction actual_txn;

        scoreboard = new();
        
        // Add expected transactions
        for (int i = 0; i < 5; i++) begin
            expected_txn = new(i, 8'(i * 5));
            scoreboard.add_expected(expected_txn);
        end
        
        // Add actual transactions (simulated)
        for (int i = 0; i < 5; i++) begin
            actual_txn = new(i, 8'(i * 5));
            scoreboard.add_actual(actual_txn);
        end
        
        // Check results
        if (scoreboard.check()) begin
            $display("  Scoreboard check PASSED");
        end else begin
            $error("Scoreboard check FAILED");
        end
        
        scoreboard.print_stats();
        $display("  Scoreboard pattern PASSED");
    endtask
    
    /**
     * Example 5: Reusable Components
     * Demonstrates component reuse
     */
    task test_reusable_components();
        $display();
        $display("Example 5: Reusable Components");
        
        // Declare first, then construct to keep syntax simple for Verilator.
        Driver driver;
        Monitor monitor;
        Scoreboard scoreboard;
        Transaction txn;

        driver = new();
        monitor = new();
        scoreboard = new();
        
        // Use components together
        for (int i = 0; i < 3; i++) begin
            txn = new(i, 8'(i * 20));
            
            // Driver generates stimulus
            driver.drive_transaction(txn);
            scoreboard.add_expected(txn);
            
            #(CLK_PERIOD);
            
            // Monitor captures response
            monitor.monitor_dut();
            scoreboard.add_actual(txn);
        end
        
        scoreboard.check();
        scoreboard.print_stats();
        
        $display("  Reusable components PASSED");
    endtask
    
    /**
     * Main test sequence
     */
    initial begin
        $display("============================================================");
        $display("Common Verification Patterns Examples");
        $display("============================================================");
        $display();
        
        // Initialize
        rst_n = 0;
        data_in = 8'h00;
        
        #(CLK_PERIOD);
        
        // Run examples
        test_testbench_structure();
        test_driver_pattern();
        test_monitor_pattern();
        test_scoreboard_pattern();
        test_reusable_components();
        
        // Summary
        $display();
        $display("============================================================");
        $display("Common Verification Patterns Examples Complete");
        $display("============================================================");
        $display();
        $display("Key Concepts:");
        $display("  - Structured testbenches are easier to maintain");
        $display("  - Reusable components improve productivity");
        $display("  - Common patterns enable code reuse");
        $display("  - Patterns prepare for UVM methodology");
        $display();
        
        #(CLK_PERIOD * 5);
        $finish;
    end

endmodule
