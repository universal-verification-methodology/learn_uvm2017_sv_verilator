# Module 2: SystemVerilog Testbench Fundamentals

This directory contains all examples, exercises, and test cases for Module 2, focusing on SystemVerilog testbench construction including clock generation, reset patterns, signal access, timing control, and common verification patterns.

## Directory Structure

```
module2/
├── examples/              # SystemVerilog testbench examples
│   ├── clock_generation/  # Clock generation patterns
│   │   ├── clock_gen.sv
│   │   └── clock_gen.cpp
│   ├── reset_patterns/   # Reset sequences
│   │   ├── reset_patterns.sv
│   │   └── reset_patterns.cpp
│   ├── signal_access/     # Signal reading and writing
│   │   ├── signal_access.sv
│   │   └── signal_access.cpp
│   ├── triggers/         # Event and timing control
│   │   ├── triggers.sv
│   │   └── triggers.cpp
│   └── common_patterns/  # Common verification patterns
│       ├── common_patterns.sv
│       └── common_patterns.cpp
├── dut/                   # Verilog/SystemVerilog Design Under Test modules
│   ├── registers/         # Register modules
│   │   ├── simple_register.v
│   │   └── shift_register.v
│   ├── fifos/            # FIFO modules
│   │   └── simple_fifo.v
│   └── state_machines/   # State machine modules
│       └── simple_fsm.v
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
│       ├── test_simple_register_uvm.sv
│       └── Makefile
└── exercises/             # Exercise solutions (if any)
```

## Prerequisites

Before running the experiments, ensure you have:

- **SystemVerilog Simulator**: Verilator 5.036+ (open-source) or commercial simulator (VCS, Questa, Xcelium)
- **UVM Library**: Accellera UVM 1.2 installed (for UVM tests)
- **Make**: For building and running tests
- **C++ Compiler**: GCC or Clang (for Verilator)

To verify your environment:

```bash
verilator --version      # Should be 5.036+
echo $UVM_HOME          # Should point to UVM installation (for UVM tests)
make --version          # Should be available
```

## SystemVerilog Testbench Examples

### 1. Clock Generation (`examples/clock_generation/clock_gen.sv`)

Demonstrates various clock generation patterns:

- **Simple Clock**: Basic clock generation with `always` block
- **Parameterized Clock**: Clock with configurable period and duty cycle
- **Multiple Clocks**: Generating multiple independent clocks
- **Clock Gating**: Conditional clock generation
- **Clock Stopping**: Controlled clock stopping

**Key Concepts:**
- Clocks are fundamental to synchronous designs
- Parameterized clocks enable flexibility
- Multiple clocks require careful synchronization
- Clock gating is common in low-power designs

**Running the example:**

```bash
# Using orchestrator script
./scripts/module2.sh --clock-generation

# Or compile directly
cd module2/examples/clock_generation
verilator -sv --cc --exe --timing --trace clock_gen.sv clock_gen.cpp --top-module clock_gen
make -C obj_dir -f Vclock_gen.mk
./obj_dir/Vclock_gen
```

**Expected Output:**
- Clock generation demonstrations
- Multiple clock domains
- Clock gating examples
- Clock stopping patterns

### 2. Reset Patterns (`examples/reset_patterns/reset_patterns.sv`)

Shows reset sequence implementation:

- **Synchronous Reset**: Reset synchronized to clock
- **Asynchronous Reset**: Reset independent of clock
- **Reset Sequence**: Controlled reset assertion and de-assertion
- **Reset Verification**: Checking reset behavior

**Key Concepts:**
- Reset is critical for proper design initialization
- Synchronous vs asynchronous reset have different timing
- Reset sequences must follow design requirements
- Reset verification ensures proper operation

**Running the example:**

```bash
./scripts/module2.sh --reset-patterns
# or
cd module2/examples/reset_patterns
verilator -sv --cc --exe --timing --trace reset_patterns.sv reset_patterns.cpp --top-module reset_patterns
make -C obj_dir -f Vreset_patterns.mk
./obj_dir/Vreset_patterns
```

### 3. Signal Access (`examples/signal_access/signal_access.sv`)

Demonstrates signal reading, writing, and monitoring:

- **Signal Reading**: Reading DUT signal values
- **Signal Driving**: Driving signals to DUT
- **Signal Monitoring**: Monitoring signal changes
- **Signal Types**: Handling different signal types (single-bit, multi-bit, arrays)

**Key Concepts:**
- Signal access is fundamental to testbench operation
- Proper timing is essential for signal driving
- Signal monitoring enables response checking
- Different signal types require different handling

**Running the example:**

```bash
./scripts/module2.sh --signal-access
# or
cd module2/examples/signal_access
verilator -sv --cc --exe --timing --trace signal_access.sv signal_access.cpp --top-module signal_access
make -C obj_dir -f Vsignal_access.mk
./obj_dir/Vsignal_access
```

### 4. Triggers and Timing Control (`examples/triggers/triggers.sv`)

Demonstrates event and timing control:

- **Event Control**: Using `@` for event-based timing
- **Delay Control**: Using `#` for time-based delays
- **Wait Statements**: Using `wait` for condition-based waiting
- **Fork-Join**: Parallel execution with synchronization
- **Named Events**: Event-based synchronization

**Key Concepts:**
- Events enable synchronization between processes
- Timing control is essential for proper testbench operation
- Wait statements enable condition-based synchronization
- Fork-join enables parallel execution

**Running the example:**

```bash
./scripts/module2.sh --triggers
# or
cd module2/examples/triggers
verilator -sv --cc --exe --timing --trace triggers.sv triggers.cpp --top-module triggers
make -C obj_dir -f Vtriggers.mk
./obj_dir/Vtriggers
```

### 5. Common Verification Patterns (`examples/common_patterns/common_patterns.sv`)

Demonstrates common verification patterns:

- **Testbench Structure**: Organized testbench with phases
- **Driver Pattern**: Stimulus generation component
- **Monitor Pattern**: Response monitoring component
- **Scoreboard Pattern**: Response checking component
- **Reusable Components**: Component reuse patterns

**Key Concepts:**
- Structured testbenches are easier to maintain
- Reusable components improve productivity
- Common patterns enable code reuse
- Patterns prepare for UVM methodology

**Running the example:**

```bash
./scripts/module2.sh --common-patterns
# or
cd module2/examples/common_patterns
verilator -sv --cc --exe --timing --trace common_patterns.sv common_patterns.cpp --top-module common_patterns
make -C obj_dir -f Vcommon_patterns.mk
./obj_dir/Vcommon_patterns
```

## Design Under Test (DUT)

### Simple Register (`dut/registers/simple_register.v`)

A basic 8-bit register with clock, reset, and enable control.

**Module Interface:**
```systemverilog
module simple_register (
    input  wire       clk,     // Clock signal
    input  wire       rst_n,   // Active-low reset
    input  wire       enable,  // Register enable
    input  wire [7:0] d,       // Data input
    output reg  [7:0] q        // Data output
);
```

**Functionality:**
- Resets to 0x00 when `rst_n` is low
- Updates `q` with `d` on positive clock edge when `enable` is high
- Holds current value when `enable` is low
- Asynchronous reset (sensitive to `rst_n` edge)

**Characteristics:**
- 8-bit data width
- Synchronous operation with async reset
- Enable-controlled updates

### Shift Register (`dut/registers/shift_register.v`)

An 8-bit shift register with serial input/output and parallel output.

**Module Interface:**
```systemverilog
module shift_register (
    input  wire       clk,        // Clock signal
    input  wire       rst_n,      // Active-low reset
    input  wire       shift,      // Shift enable
    input  wire       data_in,    // Serial data input
    output reg        data_out,   // Serial data output (MSB)
    output reg  [7:0] q           // Parallel output
);
```

**Functionality:**
- Resets to all zeros when `rst_n` is low
- Shifts left (MSB out, LSB in) on positive clock edge when `shift` is high
- `data_out` provides MSB (q[7])
- Parallel output `q` shows current register contents

**Shift Operation:**
- `q <= {q[6:0], data_in}` - Shift left, insert `data_in` at LSB
- `data_out <= q[7]` - Output MSB before shift

**Characteristics:**
- Serial-to-parallel and parallel-to-serial conversion
- MSB-first shifting (first bit shifted becomes MSB)
- 8-bit internal storage

### Simple FIFO (`dut/fifos/simple_fifo.v`)

A 16-entry FIFO (First-In-First-Out) buffer with read/write pointers.

**Module Interface:**
```systemverilog
module simple_fifo (
    input  wire       clk,       // Clock signal
    input  wire       rst_n,     // Active-low reset
    input  wire       write_en,  // Write enable
    input  wire       read_en,   // Read enable
    input  wire [7:0] data_in,   // Write data
    output reg  [7:0] data_out,  // Read data
    output reg        full,      // FIFO full flag
    output reg        empty      // FIFO empty flag
);
```

**Functionality:**
- Resets to empty state when `rst_n` is low
- Writes `data_in` when `write_en` is high and FIFO is not full
- Reads `data_out` when `read_en` is high and FIFO is not empty
- Maintains `full` and `empty` status flags
- 16-entry capacity (addresses 0-15)

**FIFO Behavior:**
- Write pointer increments on write (wraps at 16)
- Read pointer increments on read (wraps at 16)
- Count tracks number of entries
- `full` when count == 16
- `empty` when count == 0

**Characteristics:**
- Circular buffer implementation
- Status flag management
- Overflow/underflow prevention

### Simple FSM (`dut/state_machines/simple_fsm.v`)

A 4-state finite state machine with start/done control.

**Module Interface:**
```systemverilog
module simple_fsm (
    input  wire       clk,     // Clock signal
    input  wire       rst_n,   // Active-low reset
    input  wire       start,   // Start signal
    output reg        done,    // Done signal
    output reg  [1:0] state    // Current state output
);
```

**State Encoding:**
- `IDLE` (2'b00) - Initial/idle state
- `START` (2'b01) - Start state
- `WORK` (2'b10) - Working state
- `DONE` (2'b11) - Done state

**State Transitions:**
- `IDLE` → `START`: When `start` signal is asserted
- `START` → `WORK`: Automatic transition on next clock
- `WORK` → `DONE`: Automatic transition on next clock
- `DONE` → `IDLE`: Automatic transition, asserts `done`

**Functionality:**
- Resets to `IDLE` state when `rst_n` is low
- `done` signal asserted only in `DONE` state
- State transitions on positive clock edge
- External control via `start` signal

**Characteristics:**
- 4-state Moore machine (outputs depend only on state)
- Simple control flow demonstration
- State visibility via `state` output

## Testbenches

### UVM Tests (`tests/uvm_tests/`)

#### Simple Register UVM Test (`test_simple_register_uvm.sv`)

UVM-style testbench demonstrating SystemVerilog UVM architecture:

**UVM Components:**

1. **Transaction (`RegisterTransaction`)**
   - Extends `uvm_sequence_item`
   - Contains test data (data, expected_q)

2. **Sequence (`RegisterSequence`)**
   - Extends `uvm_sequence`
   - Generates test vectors for the register

3. **Driver (`RegisterDriver`)**
   - Extends `uvm_driver`
   - Drives transactions to DUT
   - Uses `seq_item_port` for communication

4. **Monitor (`RegisterMonitor`)**
   - Extends `uvm_monitor`
   - Observes DUT outputs
   - Uses `analysis_port` for data forwarding

5. **Scoreboard (`RegisterScoreboard`)**
   - Extends `uvm_scoreboard`
   - Checks DUT behavior
   - Compares expected and actual results

6. **Agent (`RegisterAgent`)**
   - Extends `uvm_agent`
   - Contains driver, monitor, and sequencer
   - Connects components in `connect_phase`

7. **Environment (`RegisterEnv`)**
   - Extends `uvm_env`
   - Contains agent instances
   - Top-level verification environment

8. **Test (`RegisterTest`)**
   - Extends `uvm_test`
   - Top-level test class
   - Orchestrates test execution

**UVM Phases:**
- `build_phase()` - Component construction
- `connect_phase()` - Component connections
- `run_phase()` - Test execution
- `check_phase()` - Result verification
- `report_phase()` - Final reporting

**Running the test:**

```bash
# Via module script
./scripts/module2.sh --uvm-tests

# Directly from test directory
cd module2/tests/uvm_tests
make SIM=verilator TEST=test_simple_register_uvm
```

**Note**: Verilator has limited UVM support. For full UVM features, use commercial simulators (VCS, Questa, Xcelium).

## Running Examples and Tests

### Using the Module Script

The `module2.sh` script provides a convenient way to run all examples and tests:

```bash
# Run everything (SystemVerilog examples + all tests)
./scripts/module2.sh

# Run only SystemVerilog examples
./scripts/module2.sh --all-examples

# Run only hardware tests
./scripts/module2.sh --skip-examples

# Run specific SystemVerilog examples
./scripts/module2.sh --clock-generation
./scripts/module2.sh --reset-patterns
./scripts/module2.sh --signal-access
./scripts/module2.sh --triggers
./scripts/module2.sh --common-patterns

# Run specific test suites
./scripts/module2.sh --uvm-tests

# Combine options
./scripts/module2.sh --clock-generation --reset-patterns --uvm-tests
```

### Running Individual Examples

#### Direct SystemVerilog Execution

```bash
# Compile and run SystemVerilog examples
cd module2/examples/clock_generation
verilator -sv --cc --exe --timing --trace clock_gen.sv clock_gen.cpp --top-module clock_gen
make -C obj_dir -f Vclock_gen.mk
./obj_dir/Vclock_gen

cd module2/examples/reset_patterns
verilator -sv --cc --exe --timing --trace reset_patterns.sv reset_patterns.cpp --top-module reset_patterns
make -C obj_dir -f Vreset_patterns.mk
./obj_dir/Vreset_patterns
```

#### Running UVM Tests

```bash
# Change to test directory
cd module2/tests/uvm_tests

# Run UVM register test
make SIM=verilator TEST=test_simple_register_uvm

# For commercial simulators
make SIM=vcs TEST=test_simple_register_uvm
make SIM=questa TEST=test_simple_register_uvm

# Clean build artifacts
make clean
```

## Test Results

When tests complete successfully, you should see:

### SystemVerilog Example Output

```
============================================================
Clock Generation Examples
============================================================

Example 1: Simple Clock Generation
  Clock period: 10 ns
[5] CLK1 rising edge #1
[15] CLK1 rising edge #2
[25] CLK1 rising edge #3
...
```

### Expected Test Counts

- **Clock Generation example**: Multiple clock patterns demonstrated
- **Reset Patterns example**: Async and sync reset sequences
- **Signal Access example**: Signal read/write operations
- **Triggers example**: Event and timing control patterns
- **Common Patterns example**: Driver, monitor, scoreboard patterns
- **UVM Register test**: 1 UVM test

## Troubleshooting

### Common Issues

#### 1. Verilator Version Error

**Error:** `Verilator version too old`

**Solution:** Upgrade Verilator to 5.036 or later:

```bash
./scripts/install_verilator.sh --from-submodule --force
```

#### 2. UVM Library Not Found

**Error:** `Cannot find UVM library`

**Solution:** Set UVM_HOME environment variable:

```bash
export UVM_HOME=/path/to/uvm-1.2
```

#### 3. Compilation Errors

**Error:** Build errors in compilation

**Solution:** Clean and rebuild:

```bash
make clean
make SIM=verilator TEST=<test_name>
```

### Debugging Tips

1. **Check Verilator Version:**
   ```bash
   verilator --version
   ```

2. **Verify UVM Library:**
   ```bash
   echo $UVM_HOME
   ls $UVM_HOME/src/uvm_pkg.sv
   ```

3. **Check Build Directory:**
   ```bash
   ls -la module2/tests/uvm_tests/obj_dir/
   ```

4. **View Detailed Logs:**
   ```bash
   # Check log files
   tail -f *.log
   ```

5. **Run Tests with Verbose Output:**
   ```bash
   make SIM=verilator TEST=test_simple_register_uvm V=1
   ```

## Topics Covered

1. **SystemVerilog Testbench Architecture** - Testbench structure and components
2. **Clock Generation and Management** - Clock patterns and domain management
3. **Reset Patterns** - Synchronous and asynchronous reset sequences
4. **Signal Access** - Reading, writing, and monitoring signals
5. **Event and Timing Control** - Events, delays, waits, fork-join
6. **Common Verification Patterns** - Driver, monitor, scoreboard patterns
7. **Test Structure** - Organizing testbenches effectively
8. **UVM Basics** - UVM-style testbench architecture

## Next Steps

After completing Module 2, proceed to:

- **Module 3**: UVM Basics - Phases, factory, configuration database
- **Module 4**: UVM Components - Agents, sequencers, monitors, drivers

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **SystemVerilog for Verification**: Chris Spear and Greg Tumbush
- **Verification Academy**: https://verificationacademy.com/
- **Verilator Documentation**: https://verilator.org/

## File Descriptions

### Examples

| File | Description |
|------|-------------|
| `clock_gen.sv` | Clock generation patterns (simple, parameterized, multiple, gated, stopped) |
| `reset_patterns.sv` | Reset sequence implementation (async, sync, verification) |
| `signal_access.sv` | Signal reading, writing, and monitoring |
| `triggers.sv` | Event and timing control (events, delays, waits, fork-join) |
| `common_patterns.sv` | Common verification patterns (driver, monitor, scoreboard) |

### DUT Modules

| File | Description | Ports |
|------|-------------|-------|
| `simple_register.v` | 8-bit register with enable | `clk`, `rst_n`, `enable`, `d[7:0]`, `q[7:0]` |
| `shift_register.v` | 8-bit shift register | `clk`, `rst_n`, `shift`, `data_in`, `data_out`, `q[7:0]` |
| `simple_fifo.v` | 16-entry FIFO | `clk`, `rst_n`, `write_en`, `read_en`, `data_in[7:0]`, `data_out[7:0]`, `full`, `empty` |
| `simple_fsm.v` | 4-state FSM | `clk`, `rst_n`, `start`, `done`, `state[1:0]` |

### Testbenches

| File | Framework | Description | Tests |
|------|-----------|-------------|-------|
| `test_simple_register_uvm.sv` | UVM | Simple register UVM testbench | 1 UVM test |

---

For questions or issues, refer to the main project README or check the test logs for detailed error messages.
