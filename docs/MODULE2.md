# Module 2: SystemVerilog Testbench Fundamentals

**Goal**: Master SystemVerilog testbench construction

## Overview

This module provides comprehensive coverage of SystemVerilog testbench construction. You'll learn how to build testbenches, generate clocks, handle resets, access signals, and create robust verification environments.

> **📖 Fundamental Concept**: Before diving into the details, make sure you understand [How SystemVerilog and Verilator Interact](SYSTEMVERILOG_VERILATOR_INTERACTION.md). This foundational document explains the compilation process, simulation flow, signal access, and how SystemVerilog testbenches interact with Verilog hardware designs.

### Examples and Code Structure

This module includes comprehensive examples and testbenches located in the `module2/` directory:

```
module2/
├── examples/              # SystemVerilog testbench examples
│   ├── clock_generation/  # Clock generation patterns
│   ├── reset_patterns/    # Reset sequences
│   ├── signal_access/     # Signal reading and writing
│   ├── triggers/         # Event and timing control
│   └── common_patterns/  # Common verification patterns
├── dut/                   # Verilog/SystemVerilog Design Under Test modules
│   ├── registers/         # Register modules
│   ├── fifos/            # FIFO modules
│   └── state_machines/   # State machine modules
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
└── README.md             # Module 2 documentation
```

### Quick Start

**Run all tests using the orchestrator script:**
```bash
# Run all SystemVerilog testbench examples
./scripts/module2.sh --all-examples

# Run specific examples
./scripts/module2.sh --clock-generation
./scripts/module2.sh --reset-patterns
./scripts/module2.sh --signal-access
./scripts/module2.sh --triggers
./scripts/module2.sh --common-patterns

# Run tests
./scripts/module2.sh --uvm-tests
```

**Run examples individually:**
```bash
# Run SystemVerilog testbench examples
cd module2/examples/clock_generation
make

# Run UVM tests
cd module2/tests/uvm_tests
make SIM=verilator TEST=test_simple_register
```

## Topics Covered

### 1. SystemVerilog Testbench Architecture

- **What is a Testbench?**
  - Testbench purpose and structure
  - DUT (Design Under Test) connection
  - Stimulus generation
  - Response checking

- **Testbench Components**
  - Testbench module
  - DUT instantiation
  - Interface instantiation
  - Clock and reset generation
  - Stimulus and monitoring

- **Key Concepts**
  - Module hierarchy
  - Signal connectivity
  - Time management
  - Event scheduling

### 2. Clock Generation and Management

- **Clock Generation**
  - Simple clock generation
  - Clock with parameters (period, duty cycle)
  - Multiple clocks
  - Clock gating

- **Clock Patterns**
  - Regular clocks
  - Gated clocks
  - Clock division
  - Clock stopping
  - Clock domain crossing

- **Clock Domain Management**
  - Multiple clock domains
  - Clock domain crossing verification
  - Synchronization between domains
  - Metastability handling

#### Example 2.1: Clock Generation (`module2/examples/clock_generation/clock_gen.sv`)

**What it demonstrates:**
- **Simple Clock**: Basic clock generation with `always` block
- **Parameterized Clock**: Clock with configurable period and duty cycle
- **Multiple Clocks**: Generating multiple independent clocks
- **Clock Gating**: Conditional clock generation
- **Clock Stopping**: Controlled clock stopping

**Clock Generation Patterns:**

1. **Simple Clock with `always` Block:**
   ```systemverilog
   always begin
       clk1 = 0;
       #(CLK1_PERIOD/2);  // Half period low
       clk1 = 1;
       #(CLK1_PERIOD/2);  // Half period high
   end
   ```
   - Uses `always` block for continuous execution
   - Delay operator `#` controls timing
   - Creates 50% duty cycle clock

2. **Parameterized Clock:**
   ```systemverilog
   parameter CLK2_PERIOD = 20;  // Configurable period
   always begin
       clk2 = 0;
       #(CLK2_PERIOD/2);
       clk2 = 1;
       #(CLK2_PERIOD/2);
   end
   ```
   - Uses parameters for flexibility
   - Same pattern, different frequency

3. **Clock Gating Pattern:**
   ```systemverilog
   always begin
       if (clk_enable) begin
           clk_gated = 0;
           #(CLK1_PERIOD/2);
           clk_gated = 1;
           #(CLK1_PERIOD/2);
       end else begin
           clk_gated = 0;
           #(CLK1_PERIOD);  // Hold low when disabled
       end
   end
   ```
   - Conditional clock generation
   - Uses `if-else` for gating control

4. **Clock Stopping Pattern:**
   ```systemverilog
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
   ```
   - Uses `wait` statement for condition-based stopping
   - Demonstrates controlled clock stopping

**Built-in Functions Used:**
- `$display()` - Print clock information
- `$time` - Get current simulation time
- `$finish` - Terminate simulation

**Key Concepts:**
- Clocks are fundamental to synchronous designs
- Parameterized clocks enable flexibility
- Multiple clocks require careful synchronization
- Clock gating is common in low-power designs
- `always` blocks create continuous processes
- Delay operator `#` controls timing
- `wait` statements enable condition-based control

**Verified Output:**
- Simple clock generation with configurable period
- Multiple independent clocks demonstrated
- Clock gating and stopping patterns working correctly

### 3. Reset Patterns and Sequences

- **Reset Types**
  - Synchronous reset
  - Asynchronous reset
  - Reset assertion and de-assertion
  - Reset timing

- **Reset Patterns**
  - Power-on reset
  - Software reset
  - Hardware reset
  - Partial reset

- **Reset Sequences**
  - Reset assertion sequence
  - Reset de-assertion sequence
  - Reset verification
  - Reset timing checks

#### Example 2.2: Reset Patterns (`module2/examples/reset_patterns/reset_patterns.sv`)

**What it demonstrates:**
- **Synchronous Reset**: Reset synchronized to clock
- **Asynchronous Reset**: Reset independent of clock
- **Reset Sequence**: Controlled reset assertion and de-assertion
- **Reset Verification**: Checking reset behavior

**Reset Task Patterns:**

1. **Asynchronous Reset Sequence Task:**
   ```systemverilog
   task async_reset_sequence(int reset_duration_ns = 100);
       $display("[%0t] Asserting async reset", $time);
       rst_n = 0;
       #(reset_duration_ns);  // Delay for reset duration
       $display("[%0t] De-asserting async reset", $time);
       rst_n = 1;
       #(CLK_PERIOD * 2);  // Wait for propagation
   endtask
   ```
   - **Purpose**: Encapsulates async reset sequence
   - **Parameters**: Configurable reset duration
   - **Usage**: `async_reset_sequence(100);`
   - **Key Features**: Uses delays, displays timing info

2. **Synchronous Reset Sequence Task:**
   ```systemverilog
   task sync_reset_sequence(int reset_cycles = 5);
       $display("[%0t] Asserting sync reset", $time);
       rst_sync = 1;
       repeat (reset_cycles) @(posedge clk);  // Wait for N clock cycles
       $display("[%0t] De-asserting sync reset", $time);
       rst_sync = 0;
       @(posedge clk);  // Wait one cycle for propagation
   endtask
   ```
   - **Purpose**: Encapsulates sync reset sequence
   - **Parameters**: Number of reset cycles
   - **Usage**: `sync_reset_sequence(5);`
   - **Key Features**: Uses `repeat` and `@(posedge clk)` for clock synchronization

3. **Reset Verification Task:**
   ```systemverilog
   task verify_reset();
       $display("[%0t] Verifying reset state", $time);
       assert (reg_async == 8'h00) else 
           $error("Async reset failed: reg_async = 0x%02h", reg_async);
       assert (reg_sync == 8'h00) else 
           $error("Sync reset failed: reg_sync = 0x%02h", reg_sync);
       $display("  Reset verification PASSED");
   endtask
   ```
   - **Purpose**: Verifies reset properly initializes registers
   - **Uses**: `assert` statements with `$error()` for verification
   - **Usage**: `verify_reset();`

**Key Concepts:**
- Reset is critical for proper design initialization
- Synchronous vs asynchronous reset have different timing
- Reset sequences must follow design requirements
- Reset verification ensures proper operation
- **Tasks encapsulate reset sequences** for reusability
- **`repeat` statement** repeats clock cycles
- **`@(posedge clk)`** synchronizes to clock edges
- **`assert` statements** verify reset behavior

**Verified Output:**
- Synchronous and asynchronous reset patterns demonstrated
- Reset sequences executed correctly
- Reset verification checks passing

### 4. Signal Access and Driving

- **Signal Access**
  - Reading signal values
  - Signal types and widths
  - Signal state checking
  - Signal monitoring

- **Driving Signals**
  - Assigning values
  - Continuous assignment
  - Procedural assignment
  - Signal driving timing

- **Signal Types**
  - Single-bit signals
  - Multi-bit signals (vectors)
  - Buses and arrays
  - Bidirectional signals

#### Example 2.3: Signal Access (`module2/examples/signal_access/signal_access.sv`)

**What it demonstrates:**
- **Signal Reading**: Reading DUT signal values
- **Signal Driving**: Driving signals to DUT
- **Signal Monitoring**: Monitoring signal changes
- **Signal Types**: Handling different signal types

**Signal Access Task Patterns:**

1. **Signal Reading Task:**
   ```systemverilog
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
       
       // De-assert reset and read
       rst_n = 1;
       #(CLK_PERIOD);
       $display("  After reset de-assert:");
       $display("    q = 0x%02h (%0d)", q, q);
   endtask
   ```
   - **Purpose**: Demonstrates reading signal values
   - **Uses**: `$display()` with format specifiers (`%02h`, `%0d`, `%b`)
   - **Key**: Reads signals after delays for proper timing

2. **Signal Driving Task:**
   ```systemverilog
   task test_signal_driving();
       // Drive different values
       d = 8'h55;
       enable = 1;
       #(CLK_PERIOD);
       $display("  Drove d = 0x%02h, q = 0x%02h", d, q);
       assert (q == 8'h55) else $error("Drive failed");
       
       d = 8'hFF;
       #(CLK_PERIOD);
       assert (q == 8'hFF) else $error("Drive failed");
   endtask
   ```
   - **Purpose**: Demonstrates driving signals to DUT
   - **Uses**: Blocking assignment (`=`) for signal driving
   - **Verification**: Uses `assert` to verify driven values

3. **Signal Monitoring Pattern:**
   ```systemverilog
   // Monitor for q changes
   always @(q) begin
       monitor_count++;
       $display("    [%0t] q changed to 0x%02h", $time, q);
   end
   ```
   - **Purpose**: Automatically monitors signal changes
   - **Uses**: `always @(signal)` for event-driven monitoring
   - **Key**: Runs in parallel with test tasks

4. **Signal Types Task:**
   ```systemverilog
   task test_signal_types();
       // Single-bit signal
       single_bit = 1'b0;
       $display("  Single-bit: %b", single_bit);
       
       // Multi-bit signal
       multi_bit = 16'hABCD;
       $display("  Multi-bit: 0x%04h (%0d)", multi_bit, multi_bit);
       $display("  Multi-bit width: %0d bits", $bits(multi_bit));
       
       // Array signal
       array_signal[0] = 8'h00;
       array_signal[1] = 8'h11;
       for (int i = 0; i < 4; i++) begin
           $display("    array_signal[%0d] = 0x%02h", i, array_signal[i]);
       end
   endtask
   ```
   - **Purpose**: Demonstrates different signal types
   - **Uses**: `$bits()` built-in function for signal width
   - **Key**: Handles single-bit, multi-bit, and array signals

**Built-in Functions Used:**
- `$display()` - Print signal values with formatting
- `$time` - Get current simulation time
- `$bits()` - Get signal bit width
- `$error()` - Report errors in assertions

**Key Concepts:**
- Signal access is fundamental to testbench operation
- Proper timing is essential for signal driving
- Signal monitoring enables response checking
- Different signal types require different handling
- **Tasks organize signal access operations**
- **`always @(signal)`** creates event-driven monitors
- **Blocking assignment (`=`)** for signal driving
- **Format specifiers** (`%b`, `%h`, `%d`) for display

**Verified Output:**
- Signal reading operations working correctly
- Signal driving verified with assertions
- Signal monitoring capturing changes
- Different signal types handled properly

### 5. Event and Timing Control

- **SystemVerilog Events**
  - Event declaration
  - Event triggering (`->`)
  - Event waiting (`@`)
  - Named events

- **Timing Control**
  - `#` delay operator
  - `@` event control
  - `wait` statement
  - `fork-join` constructs

- **Synchronization**
  - Task synchronization
  - Barrier synchronization
  - Timeout handling
  - Race condition avoidance

#### Example 2.4: Triggers and Timing (`module2/examples/triggers/triggers.sv`)

**What it demonstrates:**
- **Event Control**: Using `@` for event-based timing
- **Delay Control**: Using `#` for time-based delays
- **Wait Statements**: Using `wait` for condition-based waiting
- **Fork-Join**: Parallel execution with synchronization
- **Named Events**: Event-based synchronization
- **Timeout Handling**: Timeout patterns

**Timing Control Task Patterns:**

1. **Event Control Task:**
   ```systemverilog
   task test_event_control();
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
   endtask
   ```
   - **Purpose**: Demonstrates event-based timing
   - **Uses**: `@(posedge)`, `@(negedge)`, `@(signal)` for event control
   - **Key**: Waits for specific events before continuing

2. **Delay Control Task:**
   ```systemverilog
   task test_delay_control();
       int start_time;
       start_time = $time;
       
       #10;  // Fixed delay
       $display("  [%0t] After 10ns delay", $time);
       
       #20;  // Another delay
       $display("  [%0t] After additional 20ns delay", $time);
       
       #(CLK_PERIOD);  // Parameterized delay
       $display("  [%0t] After one clock period delay", $time);
   endtask
   ```
   - **Purpose**: Demonstrates time-based delays
   - **Uses**: `#` delay operator with fixed and parameterized values
   - **Key**: Tracks time using `$time` built-in function

3. **Wait Statement Task:**
   ```systemverilog
   task test_wait_statements();
       condition_met = 0;
       
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
   endtask
   ```
   - **Purpose**: Demonstrates condition-based waiting
   - **Uses**: `wait(condition)` statement
   - **Key**: Waits until condition becomes true

4. **Fork-Join Task:**
   ```systemverilog
   task test_fork_join();
       fork
           begin
               #10;
               $display("  [%0t] Task 1 completed", $time);
           end
           begin
               #20;
               $display("  [%0t] Task 2 completed", $time);
           end
           begin
               #30;
               $display("  [%0t] Task 3 completed", $time);
           end
       join  // Wait for all tasks
       $display("  [%0t] All tasks completed", $time);
   endtask
   ```
   - **Purpose**: Demonstrates parallel execution
   - **Uses**: `fork-join` for parallel tasks
   - **Key**: Waits for all tasks to complete

5. **Fork-Join_Any Task:**
   ```systemverilog
   task test_fork_join_any();
       fork
           begin #50; $display("  Task A completed"); end
           begin #20; $display("  Task B completed (first)"); end
           begin #30; $display("  Task C completed"); end
       join_any  // Continue after first task
       $display("  First task completed, continuing");
   endtask
   ```
   - **Purpose**: Continues after first task completes
   - **Uses**: `fork-join_any` construct
   - **Key**: Doesn't wait for all tasks

6. **Fork-Join_None Task:**
   ```systemverilog
   task test_fork_join_none();
       fork
           begin #10; $display("  Background task 1"); end
           begin #20; $display("  Background task 2"); end
       join_none  // Don't wait, continue immediately
       $display("  Tasks started, continuing immediately");
       #30;  // Wait for tasks to complete
   endtask
   ```
   - **Purpose**: Starts tasks without waiting
   - **Uses**: `fork-join_none` construct
   - **Key**: Continues immediately, tasks run in background

7. **Named Events Task:**
   ```systemverilog
   task test_named_events();
       event event_a;
       
       fork
           begin
               @(event_a);  // Wait for event
               $display("  [%0t] Received event_a", $time);
           end
       join_none
       
       #25;
       -> event_a;  // Trigger event
       $display("  [%0t] Triggered event_a", $time);
   endtask
   ```
   - **Purpose**: Demonstrates named event synchronization
   - **Uses**: `event` declaration, `@(event)` wait, `-> event` trigger
   - **Key**: Flexible synchronization mechanism

**Key Concepts:**
- Events enable synchronization between processes
- Timing control is essential for proper testbench operation
- Wait statements enable condition-based synchronization
- Fork-join enables parallel execution
- **`@(posedge/negedge)`** waits for signal edges
- **`#` delay operator** creates time-based delays
- **`wait(condition)`** waits for condition to become true
- **`fork-join`** creates parallel execution with synchronization
- **Named events** provide flexible synchronization

### 6. Common Verification Patterns

- **Testbench Structure**
  - Initialization phase
  - Stimulus generation
  - Response checking
  - Cleanup phase

- **Verification Patterns**
  - Directed testing
  - Constrained random testing
  - Coverage-driven verification
  - Assertion-based verification

- **Reusable Components**
  - Driver components
  - Monitor components
  - Scoreboard components
  - Checker components

#### Example 2.5: Common Patterns (`module2/examples/common_patterns/common_patterns.sv`)

**What it demonstrates:**
- **Testbench Structure**: Organized testbench with phases
- **Driver Pattern**: Stimulus generation component
- **Monitor Pattern**: Response monitoring component
- **Scoreboard Pattern**: Response checking component
- **Reusable Components**: Component reuse patterns

**Common Pattern Functions and Tasks:**

1. **Testbench Structure Task:**
   ```systemverilog
   task test_testbench_structure();
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
   endtask
   ```
   - **Purpose**: Demonstrates organized testbench phases
   - **Structure**: Initialization → Reset → Stimulus → Checking → Cleanup
   - **Key**: Clear separation of test phases

2. **Driver Class with Virtual Task:**
   ```systemverilog
   class Driver;
       virtual task drive_transaction(Transaction txn);
           // This would drive signals to DUT
           $display("    [DRIVER] Driving %s", txn.convert2string());
       endtask
   endclass
   ```
   - **Purpose**: Stimulus generation component
   - **Uses**: Virtual task for polymorphism
   - **Key**: Can be extended in derived classes

3. **Monitor Class with Methods:**
   ```systemverilog
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
   ```
   - **Purpose**: Response monitoring component
   - **Uses**: Constructor function, virtual task, accessor function
   - **Key**: Captures and provides access to monitored data

4. **Scoreboard Class with Methods:**
   ```systemverilog
   class Scoreboard;
       Transaction expected_queue[$];
       Transaction actual_queue[$];
       
       function void add_expected(Transaction txn);
           expected_queue.push_back(txn);
           $display("    [SCOREBOARD] Added expected: %s", txn.convert2string());
       endfunction
       
       function void add_actual(Transaction txn);
           actual_queue.push_back(txn);
           $display("    [SCOREBOARD] Added actual: %s", txn.convert2string());
       endfunction
       
       function bit check();
           if (expected_queue.size() != actual_queue.size()) begin
               $error("Queue size mismatch");
               return 0;
           end
           for (int i = 0; i < expected_queue.size(); i++) begin
               if (expected_queue[i].data != actual_queue[i].data) begin
                   $error("Mismatch at index %0d", i);
                   return 0;
               end
           end
           return 1;
       endfunction
   endclass
   ```
   - **Purpose**: Response checking component
   - **Uses**: Queue methods (`push_back()`, `size()`), comparison logic
   - **Key**: Compares expected vs actual results

**Key Concepts:**
- Structured testbenches are easier to maintain
- Reusable components improve productivity
- Common patterns enable code reuse
- Patterns prepare for UVM methodology
- **Tasks organize test phases** (init, reset, stimulus, check)
- **Virtual tasks** enable polymorphism
- **Class methods** encapsulate component behavior
- **Queue operations** manage transaction lists

### 7. Test Structure and Organization

- **Test Function Structure**
  - Test module organization
  - Test phases
  - Test organization
  - Test parameters

- **Multiple Tests**
  - Test discovery
  - Test selection
  - Test parameters
  - Test fixtures

- **Test Organization**
  - Test file structure
  - Test naming conventions
  - Test documentation
  - Test maintenance

### 7. Functions and Tasks for Testbench Construction

Understanding how to use functions and tasks effectively is crucial for building robust SystemVerilog testbenches. This section covers testbench-specific patterns and best practices.

#### Testbench Task Patterns

**1. Reset Sequence Tasks**
```systemverilog
// Asynchronous reset task
task async_reset(int duration_ns = 100);
    rst_n = 0;
    #(duration_ns);
    rst_n = 1;
    #(CLK_PERIOD * 2);  // Wait for propagation
endtask

// Synchronous reset task
task sync_reset(int cycles = 5);
    rst_sync = 1;
    repeat (cycles) @(posedge clk);
    rst_sync = 0;
    @(posedge clk);
endtask
```
- **Purpose**: Encapsulate reset sequences
- **Reusability**: Can be called from multiple test tasks
- **Parameters**: Configurable duration/cycles

**2. Clock Generation Patterns**
```systemverilog
// Simple clock generation
always begin
    clk = 0;
    #(PERIOD/2);
    clk = 1;
    #(PERIOD/2);
end

// Clock with enable
always begin
    if (clk_enable) begin
        clk = 0;
        #(PERIOD/2);
        clk = 1;
        #(PERIOD/2);
    end else begin
        clk = 0;
        #(PERIOD);
    end
end
```
- **Purpose**: Generate clock signals
- **Pattern**: Use `always` blocks for continuous generation
- **Key**: Delay operator `#` controls timing

**3. Test Phase Tasks**
```systemverilog
task test_phase();
    // Phase 1: Initialization
    initialize_signals();
    
    // Phase 2: Reset
    async_reset(100);
    
    // Phase 3: Stimulus
    generate_stimulus();
    
    // Phase 4: Verification
    verify_response();
    
    // Phase 5: Cleanup
    cleanup();
endtask
```
- **Purpose**: Organize test into phases
- **Structure**: Clear separation of concerns
- **Maintainability**: Easy to modify individual phases

**4. Signal Access Tasks**
```systemverilog
task drive_signal(logic [7:0] value);
    data_in = value;
    enable = 1;
    @(posedge clk);
    enable = 0;
endtask

task read_signal(output logic [7:0] value);
    @(posedge clk);
    value = data_out;
endtask
```
- **Purpose**: Encapsulate signal operations
- **Output Parameters**: Use `output` for return values
- **Timing**: Synchronize with clock edges

#### Timing Control Functions and Tasks

**1. Delay Control**
```systemverilog
#10;                    // Fixed delay (10 time units)
#(CLK_PERIOD);          // Parameterized delay
#(CLK_PERIOD * 2);      // Calculated delay
```
- **Purpose**: Create time-based delays
- **Usage**: In tasks and initial blocks
- **Key**: Cannot be used in functions

**2. Event Control**
```systemverilog
@(posedge clk);          // Wait for rising edge
@(negedge clk);          // Wait for falling edge
@(signal);               // Wait for any change
@(signal_a or signal_b); // Wait for either signal
```
- **Purpose**: Synchronize to events
- **Usage**: In tasks and always blocks
- **Key**: Event-driven synchronization

**3. Wait Statements**
```systemverilog
wait(condition);                    // Wait for condition
wait(condition == 1);               // Wait for specific value
wait(signal_a && signal_b);         // Wait for multiple conditions
wait(signal_a || signal_b);         // Wait for any condition
```
- **Purpose**: Condition-based waiting
- **Usage**: In tasks
- **Key**: Waits until condition becomes true

**4. Fork-Join Constructs**
```systemverilog
// Fork-Join: Wait for all
fork
    task1();
    task2();
    task3();
join

// Fork-Join_Any: Wait for first
fork
    task1();
    task2();
join_any

// Fork-Join_None: Don't wait
fork
    task1();
    task2();
join_none
```
- **Purpose**: Parallel execution
- **Usage**: In tasks
- **Key**: Different join types for different synchronization needs

#### Built-in Functions for Testbenches

**1. Time Functions**
```systemverilog
time current_time = $time;        // Current simulation time
realtime real_time = $realtime;   // Real time with fractions
$display("Time: %0t", $time);     // Display time
```
- **Purpose**: Track simulation time
- **Usage**: Timing verification, logging

**2. Signal Width Functions**
```systemverilog
int width = $bits(signal);        // Get signal bit width
$display("Width: %0d bits", $bits(data));
```
- **Purpose**: Get signal dimensions
- **Usage**: Dynamic signal handling

**3. Display Functions**
```systemverilog
$display("Value: %0d", value);           // Standard output
$display("Hex: 0x%0h", data);            // Hexadecimal
$display("Binary: %0b", signal);      // Binary
$display("Time: %0t, Value: %0d", $time, value);  // Multiple values
```
- **Purpose**: Print formatted output
- **Format Specifiers**: `%0d` (decimal), `%0h` (hex), `%0b` (binary), `%0t` (time)

**4. Assertion Functions**
```systemverilog
assert (condition) else $error("Error message");
assert (condition) else $fatal("Fatal error");
assert (condition) else $warning("Warning");
```
- **Purpose**: Verify conditions
- **Usage**: Test verification
- **Severity**: ERROR, FATAL, WARNING

#### Common Testbench Patterns

**1. Clock Generation Pattern**
```systemverilog
parameter CLK_PERIOD = 10;
initial begin
    clk = 0;
    forever #(CLK_PERIOD/2) clk = ~clk;
end
```
- **Pattern**: Free-running clock
- **Key**: Uses `forever` loop

**2. Reset Pattern**
```systemverilog
task reset();
    rst_n = 0;
    #(RESET_DURATION);
    rst_n = 1;
    #(CLK_PERIOD * 2);
endtask
```
- **Pattern**: Reusable reset sequence
- **Key**: Encapsulated in task

**3. Stimulus Generation Pattern**
```systemverilog
task generate_stimulus();
    for (int i = 0; i < NUM_TRANSACTIONS; i++) begin
        data_in = i;
        @(posedge clk);
    end
endtask
```
- **Pattern**: Loop-based stimulus
- **Key**: Synchronized to clock

**4. Response Checking Pattern**
```systemverilog
task check_response();
    @(posedge clk);
    assert (data_out == expected) else 
        $error("Mismatch: expected %0d, got %0d", expected, data_out);
endtask
```
- **Pattern**: Assertion-based checking
- **Key**: Uses `assert` with `$error()`

**5. Monitor Pattern**
```systemverilog
always @(posedge clk) begin
    if (enable) begin
        captured_data = data_out;
        $display("[%0t] Captured: 0x%02h", $time, captured_data);
    end
end
```
- **Pattern**: Event-driven monitoring
- **Key**: Uses `always @(posedge clk)`

#### Best Practices for Testbench Tasks

**1. Task Organization**
- Each test phase as separate task
- Helper tasks for common operations
- Clear task naming conventions

**2. Parameter Usage**
- Use parameters for configurability
- Default parameter values
- Type-safe parameters

**3. Timing Control**
- Always synchronize to clock edges
- Use appropriate delays
- Avoid race conditions

**4. Error Handling**
- Use assertions for verification
- Provide informative error messages
- Handle edge cases

**5. Code Reusability**
- Encapsulate common sequences
- Use virtual tasks for polymorphism
- Create reusable components

#### Common Pitfalls in Testbench Construction

**1. Race Conditions in Clock Generation**
```systemverilog
// ❌ WRONG: Potential race condition
initial begin
    clk = 0;
    forever #5 clk = ~clk;
end

// ✅ CORRECT: Explicit assignment pattern
always begin
    clk = 0;
    #(PERIOD/2);
    clk = 1;
    #(PERIOD/2);
end
```
- **Issue**: `forever` with `~` operator can cause timing issues
- **Solution**: Use explicit assignment with delays

**2. Missing Clock Synchronization**
```systemverilog
// ❌ WRONG: Fixed delay may miss clock edge
task drive_data(logic [7:0] data);
    data_in = data;
    enable = 1;
    #10;  // May not align with clock
endtask

// ✅ CORRECT: Synchronize to clock edge
task drive_data(logic [7:0] data);
    data_in = data;
    enable = 1;
    @(posedge clk);  // Wait for clock edge
    enable = 0;
endtask
```
- **Issue**: Fixed delays don't guarantee clock alignment
- **Solution**: Always use `@(posedge clk)` for synchronization

**3. Incorrect Reset Timing**
```systemverilog
// ❌ WRONG: Reset de-asserted too early
task reset();
    rst_n = 0;
    #10;  // May be insufficient
    rst_n = 1;
endtask

// ✅ CORRECT: Proper reset duration and propagation
task reset();
    rst_n = 0;
    #(RESET_DURATION);  // Sufficient duration
    rst_n = 1;
    #(CLK_PERIOD * 2);  // Wait for propagation
endtask
```
- **Issue**: Insufficient reset duration or propagation time
- **Solution**: Use configurable duration and add propagation delay

**4. Blocking vs Non-blocking in Tasks**
```systemverilog
// ❌ WRONG: Non-blocking in task (unpredictable)
task drive_signals();
    data <= 8'h55;  // Non-blocking in task
    enable <= 1;
endtask

// ✅ CORRECT: Blocking in task
task drive_signals();
    data = 8'h55;  // Blocking assignment
    enable = 1;
endtask
```
- **Issue**: Non-blocking assignments in tasks can cause timing issues
- **Solution**: Use blocking assignments (`=`) in tasks

**5. Fork-Join Without Proper Synchronization**
```systemverilog
// ❌ WRONG: No verification tasks completed
fork
    task1();
    task2();
join
// No guarantee tasks completed properly

// ✅ CORRECT: Proper synchronization and verification
fork
    begin
        task1();
        $display("Task1 completed");
    end
    begin
        task2();
        $display("Task2 completed");
    end
join
$display("All tasks completed");
```
- **Issue**: No way to verify tasks completed successfully
- **Solution**: Add completion messages or flags

**6. Wait Statement Hanging**
```systemverilog
// ❌ WRONG: May hang forever
wait(condition);
// If condition never becomes true, simulation hangs

// ✅ CORRECT: Add timeout
fork
    begin
        wait(condition);
        $display("Condition met");
    end
    begin
        #(TIMEOUT);
        if (!condition) $error("Timeout waiting for condition");
    end
join_any
```
- **Issue**: Wait statement can hang if condition never becomes true
- **Solution**: Use fork-join with timeout

#### Real-World Testbench Examples

**Example 1: Complete Test Sequence**
```systemverilog
task complete_test();
    // Phase 1: Initialization
    $display("[%0t] Phase 1: Initialization", $time);
    initialize_all_signals();
    
    // Phase 2: Reset
    $display("[%0t] Phase 2: Reset", $time);
    async_reset(100);
    verify_reset();
    
    // Phase 3: Stimulus Generation
    $display("[%0t] Phase 3: Stimulus", $time);
    for (int i = 0; i < 10; i++) begin
        drive_transaction(i);
        @(posedge clk);
    end
    
    // Phase 4: Response Checking
    $display("[%0t] Phase 4: Verification", $time);
    verify_all_responses();
    
    // Phase 5: Cleanup
    $display("[%0t] Phase 5: Cleanup", $time);
    cleanup_signals();
    
    $display("[%0t] Test completed successfully", $time);
endtask
```

**Example 2: Multi-Clock Domain Test**
```systemverilog
task multi_clock_test();
    // Synchronize to both clocks
    @(posedge clk1);
    @(posedge clk2);
    
    // Drive on clk1 domain
    data_clk1 = 8'hAA;
    @(posedge clk1);
    
    // Wait for synchronization
    repeat (2) @(posedge clk2);
    
    // Check on clk2 domain
    assert (data_clk2 == 8'hAA) else 
        $error("Clock domain crossing failed");
endtask
```

**Example 3: Timeout Pattern**
```systemverilog
task wait_with_timeout(bit condition, int timeout_ns);
    bit success = 0;
    fork
        begin
            wait(condition);
            success = 1;
        end
        begin
            #(timeout_ns);
            if (!success) begin
                $error("Timeout waiting for condition after %0d ns", timeout_ns);
            end
        end
    join_any
endtask
```

#### Performance Considerations

**1. Clock Generation Performance**
- **Simple clocks**: Use `always` blocks (efficient)
- **Multiple clocks**: Each clock needs separate `always` block
- **Gated clocks**: Conditional logic adds minimal overhead

**2. Task vs Function Performance**
- **Tasks**: Slower due to timing simulation overhead
- **Functions**: Faster (zero-time), but can't use delays
- **Recommendation**: Use functions for calculations, tasks for sequences

**3. Event Control Performance**
- **`@(posedge clk)`**: Efficient, event-driven
- **`#delay`**: Time-based, requires scheduling
- **`wait(condition)`**: Polls condition, can be slower

**4. Fork-Join Performance**
- **`fork-join`**: Creates parallel processes (overhead)
- **Use sparingly**: Only when parallel execution is needed
- **Alternative**: Sequential execution is faster

#### Troubleshooting Guide

**Problem: "Clock not generating"**
- **Symptoms**: Clock signal stuck at 0 or 1
- **Causes**: 
  - `always` block not executing
  - Delay value too large or zero
  - Blocking on condition that never becomes true
- **Solutions**:
  - Check `always` block syntax
  - Verify delay values are positive
  - Use `$display` to debug clock generation

**Problem: "Reset not working"**
- **Symptoms**: Registers not resetting to expected values
- **Causes**:
  - Insufficient reset duration
  - Reset de-asserted too early
  - Missing propagation delay
- **Solutions**:
  - Increase reset duration
  - Add delay after reset de-assert
  - Verify reset polarity (active-high vs active-low)

**Problem: "Signal not updating"**
- **Symptoms**: Signal value doesn't change as expected
- **Causes**:
  - Not synchronized to clock
  - Using wrong assignment type
  - Signal not being driven
- **Solutions**:
  - Use `@(posedge clk)` before reading
  - Use blocking assignment (`=`) in tasks
  - Verify signal is being driven

**Problem: "Race condition"**
- **Symptoms**: Inconsistent behavior, timing-dependent failures
- **Causes**:
  - Multiple processes accessing same signal
  - Clock and data changing simultaneously
  - Missing synchronization
- **Solutions**:
  - Use proper clock synchronization
  - Avoid shared variable access
  - Use non-blocking assignment in sequential logic

**Problem: "Fork-join not waiting"**
- **Symptoms**: Code continues before tasks complete
- **Causes**:
  - Using `join_none` instead of `join`
  - Tasks completing before join
- **Solutions**:
  - Use `join` to wait for all tasks
  - Use `join_any` to wait for first task
  - Add completion flags if needed

**Problem: "Wait statement hanging"**
- **Symptoms**: Simulation hangs, never completes
- **Causes**:
  - Condition never becomes true
  - Signal never assigned
  - Logic error in condition
- **Solutions**:
  - Add timeout mechanism
  - Verify condition logic
  - Check signal assignments
  - Use `$display` to debug

## Learning Outcomes

By the end of this module, you should be able to:

- Understand SystemVerilog testbench architecture
- Generate clocks and manage clock domains
- Implement reset patterns and sequences
- Access and drive signals correctly
- Use events and timing control effectively
- Apply common verification patterns
- Structure testbenches for maintainability
- Prepare for UVM methodology
- Write effective testbench tasks and functions
- Use timing control constructs properly

## Exercises

1. **Clock Generation**
   - Create a parameterized clock generator
   - Generate multiple clocks with different frequencies
   - Implement clock gating
   - Test clock domain crossing

2. **Reset Implementation**
   - Implement synchronous and asynchronous reset
   - Create reset sequences
   - Verify reset behavior
   - Test reset timing

3. **Signal Access**
   - Read and drive DUT signals
   - Monitor signal changes
   - Handle different signal types
   - Implement signal checking

4. **Timing Control**
   - Use events for synchronization
   - Implement delays and waits
   - Use fork-join for parallel execution
   - Handle timeouts

5. **Testbench Patterns**
   - Implement driver pattern
   - Implement monitor pattern
   - Implement scoreboard pattern
   - Create reusable testbench components

## Execution Status

✅ **Module 2 has been successfully executed and verified.**

**Verification Date:** 2026-01-24  
**Status:** All examples and tests passing  
**Verilator Version:** 5.045  
**Test Results:**
- ✅ 5 SystemVerilog testbench examples executed successfully
- ✅ 1 UVM test compiled and passed

**Note:** UVM compilation with Verilator takes approximately 20-30 seconds due to template instantiations, but all tests execute successfully.

**Execution Logs:** Full execution logs are available in `module2/module2.log` and individual example logs in each example directory (`compile.log`, `run.log`).

## Assessment

- [x] Can generate clocks and manage clock domains
- [x] Can implement reset patterns
- [x] Can access and drive signals correctly
- [x] Can use events and timing control
- [x] Can apply common verification patterns
- [x] Can structure testbenches effectively
- [x] Understands testbench organization

## Next Steps

After completing this module, proceed to [Module 3: UVM Basics](MODULE3.md) to learn the UVM methodology.

## Quick Reference: Testbench Functions and Tasks Cheat Sheet

### Clock Generation Patterns

| Pattern | Code | Use Case |
|---------|------|----------|
| **Simple Clock** | `always begin clk=0; #(P/2); clk=1; #(P/2); end` | Basic clock |
| **Gated Clock** | `always begin if(en) clk=0; #(P/2); clk=1; #(P/2); end` | Power saving |
| **Stopped Clock** | `always begin if(!stop) clk=0; #(P/2); clk=1; #(P/2); end` | Controlled stop |
| **Forever Loop** | `initial begin clk=0; forever #(P/2) clk=~clk; end` | Alternative pattern |

### Reset Task Templates

```systemverilog
// Async Reset Template
task async_reset(int duration_ns = 100);
    rst_n = 0;
    #(duration_ns);
    rst_n = 1;
    #(CLK_PERIOD * 2);
endtask

// Sync Reset Template
task sync_reset(int cycles = 5);
    rst_sync = 1;
    repeat (cycles) @(posedge clk);
    rst_sync = 0;
    @(posedge clk);
endtask

// Reset Verification Template
task verify_reset();
    assert (reg == RESET_VALUE) else 
        $error("Reset failed: reg = 0x%02h", reg);
endtask
```

### Timing Control Quick Reference

| Construct | Syntax | Purpose | Can Use In |
|-----------|--------|---------|------------|
| **Delay** | `#10;` or `#(PERIOD);` | Time-based delay | Task, Initial, Always |
| **Event Control** | `@(posedge clk);` | Wait for edge | Task, Initial, Always |
| **Wait** | `wait(condition);` | Wait for condition | Task, Initial |
| **Fork-Join** | `fork ... join` | Parallel, wait all | Task, Initial |
| **Fork-Join_Any** | `fork ... join_any` | Parallel, wait first | Task, Initial |
| **Fork-Join_None** | `fork ... join_none` | Parallel, don't wait | Task, Initial |
| **Repeat** | `repeat(N) @(posedge clk);` | Repeat N times | Task, Initial |

### Signal Access Patterns

```systemverilog
// Signal Reading Pattern
task read_signal(output logic [7:0] value);
    @(posedge clk);
    value = data_out;
endtask

// Signal Driving Pattern
task drive_signal(logic [7:0] value);
    data_in = value;
    enable = 1;
    @(posedge clk);
    enable = 0;
endtask

// Signal Monitoring Pattern
always @(posedge clk) begin
    if (enable) begin
        captured = data_out;
        $display("[%0t] Captured: 0x%02h", $time, captured);
    end
end
```

### Test Phase Organization

```systemverilog
task test_sequence();
    // Phase 1: Initialization
    initialize();
    
    // Phase 2: Reset
    async_reset(100);
    
    // Phase 3: Stimulus
    generate_stimulus();
    
    // Phase 4: Verification
    verify_response();
    
    // Phase 5: Cleanup
    cleanup();
endtask
```

### Common Pitfalls and Solutions

**1. Race Conditions in Clock Generation**
```systemverilog
// ❌ WRONG: Race condition possible
initial begin
    clk = 0;
    forever #5 clk = ~clk;
end

// ✅ CORRECT: Explicit assignment
always begin
    clk = 0;
    #(PERIOD/2);
    clk = 1;
    #(PERIOD/2);
end
```

**2. Missing Clock Synchronization**
```systemverilog
// ❌ WRONG: No clock synchronization
task drive_data(logic [7:0] data);
    data_in = data;
    enable = 1;
    #10;  // Fixed delay may miss clock edge
endtask

// ✅ CORRECT: Synchronize to clock
task drive_data(logic [7:0] data);
    data_in = data;
    enable = 1;
    @(posedge clk);  // Wait for clock edge
    enable = 0;
endtask
```

**3. Incorrect Reset Timing**
```systemverilog
// ❌ WRONG: Reset de-asserted too early
task reset();
    rst_n = 0;
    #10;
    rst_n = 1;  // May not be enough time
endtask

// ✅ CORRECT: Proper reset duration
task reset();
    rst_n = 0;
    #(RESET_DURATION);  // Sufficient duration
    rst_n = 1;
    #(CLK_PERIOD * 2);  // Wait for propagation
endtask
```

**4. Blocking vs Non-blocking in Tasks**
```systemverilog
// ❌ WRONG: Non-blocking in task (may cause issues)
task drive_signals();
    data <= 8'h55;  // Non-blocking in task
    enable <= 1;
endtask

// ✅ CORRECT: Blocking in task
task drive_signals();
    data = 8'h55;  // Blocking assignment
    enable = 1;
endtask
```

**5. Fork-Join Without Proper Synchronization**
```systemverilog
// ❌ WRONG: Tasks may interfere
fork
    task1();
    task2();
join
// No guarantee tasks completed properly

// ✅ CORRECT: Proper synchronization
fork
    begin
        task1();
        $display("Task1 done");
    end
    begin
        task2();
        $display("Task2 done");
    end
join
$display("All tasks completed");
```

### Built-in Functions Reference

| Function | Syntax | Returns | Purpose |
|----------|--------|---------|---------|
| `$time` | `time t = $time;` | time | Current simulation time |
| `$realtime` | `realtime t = $realtime;` | realtime | Real time with fractions |
| `$bits()` | `int w = $bits(signal);` | int | Signal bit width |
| `$display()` | `$display("fmt", args);` | void | Print formatted text |
| `$error()` | `$error("msg", args);` | void | Report error |
| `$warning()` | `$warning("msg", args);` | void | Report warning |
| `$info()` | `$info("msg", args);` | void | Report info |
| `$finish` | `$finish;` | void | Terminate simulation |

### Format Specifiers for Testbenches

| Specifier | Meaning | Example Output |
|-----------|---------|----------------|
| `%0d` | Decimal | `42` |
| `%0h` or `%0x` | Hexadecimal | `2a` |
| `%0b` | Binary | `101010` |
| `%0t` | Time | `1000` |
| `%0s` | String | `hello` |
| `%02h` | Hex with 2 digits | `0a` |
| `%04h` | Hex with 4 digits | `002a` |

### Event Control Patterns

```systemverilog
@(posedge clk);           // Wait for rising edge
@(negedge clk);           // Wait for falling edge
@(signal);                // Wait for any change
@(signal_a or signal_b);  // Wait for either signal
@(signal_a, signal_b);     // Wait for both signals (comma = or)
```

### Wait Statement Patterns

```systemverilog
wait(condition);                    // Wait until true
wait(condition == 1);               // Wait for specific value
wait(signal_a && signal_b);         // Wait for both
wait(signal_a || signal_b);         // Wait for either
wait(signal_a == 1 && signal_b == 0); // Complex condition
```

### Fork-Join Decision Guide

```
Need parallel execution?
├─ YES → Need to wait?
│   ├─ Wait for all → fork ... join
│   ├─ Wait for first → fork ... join_any
│   └─ Don't wait → fork ... join_none
│
└─ NO → Sequential execution
```

### Best Practices Checklist

- [ ] ✅ Use tasks for test sequences (not functions)
- [ ] ✅ Always synchronize to clock edges (`@(posedge clk)`)
- [ ] ✅ Use blocking assignment (`=`) in tasks
- [ ] ✅ Encapsulate reset sequences in tasks
- [ ] ✅ Organize tests into clear phases
- [ ] ✅ Use parameters for configurability
- [ ] ✅ Verify with assertions
- [ ] ✅ Provide informative error messages
- [ ] ✅ Use `repeat` for clock cycle counting
- [ ] ✅ Use `wait` for condition-based synchronization
- [ ] ✅ Use `fork-join` appropriately for parallel execution
- [ ] ✅ Monitor signals with `always @(signal)`
- [ ] ✅ Use `$time` for timing verification
- [ ] ✅ Clean up signals in cleanup phase

### Code Location Reference

| Concept | Example File | Key Functions/Tasks |
|---------|--------------|---------------------|
| Clock Generation | `examples/clock_generation/clock_gen.sv` | `always` blocks, delay patterns |
| Reset Patterns | `examples/reset_patterns/reset_patterns.sv` | `async_reset_sequence()`, `sync_reset_sequence()`, `verify_reset()` |
| Signal Access | `examples/signal_access/signal_access.sv` | `test_signal_reading()`, `test_signal_driving()`, `test_signal_types()` |
| Timing Control | `examples/triggers/triggers.sv` | `test_event_control()`, `test_delay_control()`, `test_wait_statements()`, `test_fork_join()` |
| Common Patterns | `examples/common_patterns/common_patterns.sv` | `test_testbench_structure()`, Driver/Monitor/Scoreboard classes |

### Troubleshooting Guide

**Problem: "Clock not generating"**
- **Cause**: `always` block not executing or delay too long
- **Solution**: Check `always` block syntax, verify delay values

**Problem: "Reset not working"**
- **Cause**: Insufficient reset duration or timing issue
- **Solution**: Increase reset duration, add propagation delay after de-assert

**Problem: "Signal not updating"**
- **Cause**: Not synchronized to clock or using wrong assignment type
- **Solution**: Use `@(posedge clk)` before reading, check blocking vs non-blocking

**Problem: "Race condition"**
- **Cause**: Multiple processes accessing same signal simultaneously
- **Solution**: Use proper synchronization, avoid shared variable access

**Problem: "Fork-join not waiting"**
- **Cause**: Using `join_none` instead of `join`
- **Solution**: Use `join` to wait for all tasks, `join_any` for first task

**Problem: "Wait statement hanging"**
- **Cause**: Condition never becomes true
- **Solution**: Add timeout, verify condition logic, check signal assignments

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **SystemVerilog for Verification**: Chris Spear and Greg Tumbush
- **Verification Academy**: https://verificationacademy.com/
