/**
 * Module 2 Example 2.4: Triggers and Timing Control
 * Demonstrates event and timing control in SystemVerilog testbenches.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand event control (@) for synchronization
 *   2. Learn delay control (#) for timing
 *   3. Master wait statements for condition-based waiting
 *   4. Understand fork-join constructs for parallel execution
 *   5. Apply timing control patterns in testbenches
 * 
 * TIMING CONTROL MECHANISMS:
 *   - Event Control (@): Wait for signal/event changes
 *   - Delay Control (#): Wait for specific time duration
 *   - Wait Statements: Wait for conditions to become true
 *   - Fork-Join: Parallel execution with synchronization
 * 
 * FORK-JOIN VARIANTS:
 *   - fork...join: Wait for all tasks to complete
 *   - fork...join_any: Continue after first task completes
 *   - fork...join_none: Start tasks and continue immediately
 * 
 * This example shows:
 * - Event control (@)
 * - Delay control (#)
 * - Wait statements
 * - Fork-join constructs
 */

`timescale 1ns/1ps

module triggers;
    // Clock and signals
    logic clk;
    logic signal_a;
    logic signal_b;
    logic condition_met;
    
    // Events
    event event_a;
    event event_b;
    event combined_event;
    
    // Clock generation
    parameter CLK_PERIOD = 10;
    always begin
        clk = 0;
        #(CLK_PERIOD/2);
        clk = 1;
        #(CLK_PERIOD/2);
    end
    
    /**
     * Example 1: Event Control (@)
     * Using @ for event-based timing
     */
    task test_event_control();
        $display("Example 1: Event Control (@)");
        
        // Wait for clock edge
        @(posedge clk);
        $display("  [%0t] Detected rising edge of clk", $time);
        
        // Wait for signal change
        signal_a = 1;
        @(signal_a);
        $display("  [%0t] Detected change in signal_a", $time);
        
        // Wait for specific edge
        signal_a = 0;
        @(negedge signal_a);
        $display("  [%0t] Detected falling edge of signal_a", $time);
        
        $display("  Event control PASSED");
    endtask
    
    /**
     * Example 2: Delay Control (#)
     * Using # for time-based delays
     */
    task test_delay_control();
        int start_time;
        $display();
        $display("Example 2: Delay Control (#)");
        
        // Track when this example starts
        start_time = $time;
        
        #10;
        $display("  [%0t] After 10ns delay", $time);
        
        #20;
        $display("  [%0t] After additional 20ns delay", $time);
        
        #(CLK_PERIOD);
        $display("  [%0t] After one clock period delay", $time);
        
        $display("  Delay control PASSED");
    endtask
    
    /**
     * Example 3: Wait Statements
     * Using wait for condition-based waiting
     */
    task test_wait_statements();
        $display();
        $display("Example 3: Wait Statements");
        
        condition_met = 0;
        
        // Start a process that will set condition
        fork
            begin
                #50;
                condition_met = 1;
                $display("  [%0t] Condition set to true", $time);
            end
        join_none
        
        // Wait for condition
        wait(condition_met == 1);
        $display("  [%0t] Condition met, continuing", $time);
        
        $display("  Wait statements PASSED");
    endtask
    
    /**
     * Example 4: Fork-Join
     * Parallel execution with synchronization
     */
    task test_fork_join();
        int task1_time;
        int task2_time;
        int task3_time;
        $display();
        $display("Example 4: Fork-Join");
        
        task1_time = 0;
        task2_time = 0;
        task3_time = 0;
        
        fork
            begin
                #10;
                task1_time = $time;
                $display("  [%0t] Task 1 completed", $time);
            end
            begin
                #20;
                task2_time = $time;
                $display("  [%0t] Task 2 completed", $time);
            end
            begin
                #30;
                task3_time = $time;
                $display("  [%0t] Task 3 completed", $time);
            end
        join  // Wait for all tasks
        
        $display("  [%0t] All tasks completed", $time);
        $display("  Fork-join PASSED");
    endtask
    
    /**
     * Example 5: Fork-Join_Any
     * Wait for first task to complete
     */
    task test_fork_join_any();
        $display();
        $display("Example 5: Fork-Join_Any");
        
        fork
            begin
                #50;
                $display("  [%0t] Task A completed", $time);
            end
            begin
                #20;
                $display("  [%0t] Task B completed (first)", $time);
            end
            begin
                #30;
                $display("  [%0t] Task C completed", $time);
            end
        join_any  // Continue after first task
        
        $display("  [%0t] First task completed, continuing", $time);
        $display("  Fork-join_any PASSED");
    endtask
    
    /**
     * Example 6: Fork-Join_None
     * Start tasks without waiting
     */
    task test_fork_join_none();
        $display();
        $display("Example 6: Fork-Join_None");
        
        fork
            begin
                #10;
                $display("  [%0t] Background task 1", $time);
            end
            begin
                #20;
                $display("  [%0t] Background task 2", $time);
            end
        join_none  // Don't wait, continue immediately
        
        $display("  [%0t] Tasks started, continuing immediately", $time);
        #30;  // Wait for tasks to complete
        $display("  [%0t] Waited for background tasks", $time);
        $display("  Fork-join_none PASSED");
    endtask
    
    /**
     * Example 7: Named Events
     * Using events for synchronization
     */
    task test_named_events();
        $display();
        $display("Example 7: Named Events");
        
        // Start process that waits for event
        fork
            begin
                @(event_a);
                $display("  [%0t] Received event_a", $time);
            end
        join_none
        
        // Trigger event after delay
        #25;
        -> event_a;
        $display("  [%0t] Triggered event_a", $time);
        
        #10;  // Wait for event handler
        
        $display("  Named events PASSED");
    endtask
    
    /**
     * Example 8: Timeout Handling
     * Using wait with timeout
     */
    task test_timeout();
        int timeout;
        int start_time;
        $display();
        $display("Example 8: Timeout Handling");
        
        condition_met = 0;
        timeout = 100;
        start_time = $time;
        
        fork
            begin
                // This will never set condition (simulating timeout)
                #200;
                condition_met = 1;
            end
            begin
                // Timeout check
                #timeout;
                if (!condition_met) begin
                    $display("  [%0t] Timeout occurred after %0dns", $time, timeout);
                end
            end
        join_any
        
        $display("  Timeout handling PASSED");
    endtask
    
    /**
     * Main test sequence
     */
    initial begin
        $display("============================================================");
        $display("Triggers and Timing Control Examples");
        $display("============================================================");
        $display();
        
        // Initialize
        signal_a = 0;
        signal_b = 0;
        condition_met = 0;
        
        #(CLK_PERIOD);
        
        // Run examples
        test_event_control();
        test_delay_control();
        test_wait_statements();
        test_fork_join();
        test_fork_join_any();
        test_fork_join_none();
        test_named_events();
        test_timeout();
        
        // Summary
        $display();
        $display("============================================================");
        $display("Triggers and Timing Control Examples Complete");
        $display("============================================================");
        $display();
        $display("Key Concepts:");
        $display("  - Events enable synchronization between processes");
        $display("  - Timing control is essential for proper testbench operation");
        $display("  - Wait statements enable condition-based synchronization");
        $display("  - Fork-join enables parallel execution");
        $display("  - Named events provide flexible synchronization");
        $display();
        
        #(CLK_PERIOD * 5);
        $finish;
    end

endmodule
