# Module 1: SystemVerilog and Verification Basics

This directory contains all examples, exercises, and test cases for Module 1, focusing on SystemVerilog fundamentals for hardware verification and basic testbench concepts.

## Directory Structure

```
module1/
├── examples/              # SystemVerilog examples for each topic
│   ├── sv_basics/         # Classes, inheritance, OOP
│   │   └── transaction.sv
│   ├── interfaces/        # Interfaces and modports
│   │   └── interface_example.sv
│   ├── packages/          # Packages and namespaces
│   │   └── package_example.sv
│   ├── data_structures/   # Data structures for verification
│   │   └── data_structures_example.sv
│   └── error_handling/    # Exception handling and logging
│       └── error_handling_example.sv
├── dut/                   # Verilog/SystemVerilog Design Under Test modules
│   └── simple_gates/
│       ├── and_gate.v     # 2-input AND gate
│       └── counter.v      # 8-bit up counter with reset
├── tests/                 # Testbenches
│   ├── sv_tests/          # SystemVerilog testbenches
│   │   ├── test_and_gate.sv
│   │   └── test_counter.sv
│   └── uvm_tests/         # SystemVerilog UVM testbenches
│       └── test_and_gate_uvm.sv
└── exercises/             # Exercise solutions (if any)
```

## Prerequisites

Before running the experiments, ensure you have:

- **SystemVerilog Simulator**: Verilator 5.036+ (tested with 5.045) or commercial simulator (VCS, Questa, Xcelium)
- **UVM Library**: Accellera UVM 1.2 installed
- **Make**: For building and running tests
- **C++ Compiler**: GCC or Clang (for Verilator)

To verify your environment:

```bash
verilator --version      # Should be 5.036+
echo $UVM_HOME          # Should point to UVM installation
make --version          # Should be available
```

## SystemVerilog Examples

### 1. SystemVerilog Basics (`examples/sv_basics/transaction.sv`)

Demonstrates object-oriented programming concepts essential for verification:

- **Transaction Class**: Base class for verification data structures
  - `new()`, `copy()`, `compare()`, `convert2string()` methods
  - Class attributes and instance variables
- **Inheritance**: Creating derived transaction classes
  - `ReadTransaction` - Extends base with address field
  - `WriteTransaction` - Extends base with address and data fields
- **UVM Integration**: Using UVM base classes and factory

**Running the example:**

```bash
# Compile and run
cd module1/examples/sv_basics
make
```

**Expected Output:**
- Base transaction creation and manipulation
- Derived transaction examples showing inheritance
- Copy and compare operations
- String conversion examples

### 2. Interfaces (`examples/interfaces/interface_example.sv`)

Shows SystemVerilog interfaces, modports, and clocking blocks:

- **Interface Definition**: `apb_if` interface with signals and clocking block
- **Modports**: `master_mp` and `slave_mp` modports with different signal directions
- **Clocking Block**: Synchronous signal access
- **Interface Usage**: Module using interface with modport

**Key Concepts:**
- Interfaces provide structured communication between modules
- Modports control signal direction and access
- Clocking blocks enable synchronous signal access
- Interfaces are essential for UVM testbenches

**Running the example:**

```bash
cd module1/examples/interfaces
make
```

### 3. Packages (`examples/packages/package_example.sv`)

Demonstrates SystemVerilog packages for code organization:

- **Package Definition**: `verification_pkg` with common types and functions
- **Package Import**: Using `import verification_pkg::*`
- **Name Resolution**: Handling name conflicts
- **Package Organization**: Structuring verification code

**Key Concepts:**
- Packages organize related code
- Import statements control namespace
- Packages improve code reusability
- Essential for UVM library organization

**Running the example:**

```bash
cd module1/examples/packages
make
```

### 4. Data Structures (`examples/data_structures/data_structures_example.sv`)

Shows data structures commonly used in verification:

- **Transaction Queues**: Using SystemVerilog queues for FIFO operations
- **Scoreboards**: Using associative arrays for checking
- **Coverage Collectors**: Using associative arrays for coverage tracking
- **Dynamic Arrays**: Flexible array operations

**Key Data Structures:**
- `queue` - Fast FIFO/LIFO queue operations
- `associative array` - Key-value lookups
- `dynamic array` - Flexible array sizing
- Structs for organizing related data

**Running the example:**

```bash
cd module1/examples/data_structures
make
```

### 5. Error Handling (`examples/error_handling/error_handling_example.sv`)

Demonstrates UVM reporting and error handling:

- **UVM Reporting**: Using `uvm_info()`, `uvm_error()`, `uvm_warning()`
- **Severity Levels**: FATAL, ERROR, WARNING, INFO, DEBUG
- **Verbosity Levels**: Controlling message output
- **Retry Logic**: Implementing retry mechanisms

**Key Features:**
- UVM reporting system
- Severity and verbosity control
- Retry mechanisms with configurable attempts
- Structured logging

**Running the example:**

```bash
cd module1/examples/error_handling
make
```

## Design Under Test (DUT)

### AND Gate (`dut/simple_gates/and_gate.v`)

A simple 2-input AND gate for basic verification examples.

**Module Interface:**
```systemverilog
module and_gate (
    input  wire a,    // Input signal A
    input  wire b,    // Input signal B
    output reg  y     // Output signal Y = A & B
);
```

**Truth Table:**
| A | B | Y |
|---|---|---|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

**Characteristics:**
- Combinational logic
- No clock required
- Immediate output propagation

### Counter (`dut/simple_gates/counter.v`)

An 8-bit up counter with active-low reset and enable.

**Module Interface:**
```systemverilog
module counter (
    input  wire       clk,     // Clock signal
    input  wire       rst_n,   // Active-low reset
    input  wire       enable,  // Counter enable
    output reg [7:0]  count    // 8-bit counter output
);
```

**Functionality:**
- Resets to 0 when `rst_n` is low
- Increments on positive clock edge when `enable` is high
- Holds value when `enable` is low
- Wraps around at 0xFF → 0x00

**Characteristics:**
- Sequential logic
- Requires clock signal
- Asynchronous reset

## Testbenches

### SystemVerilog Tests (`tests/sv_tests/`)

#### AND Gate Test (`test_and_gate.sv`)

Comprehensive testbench for the AND gate using SystemVerilog:

**Test Cases:**
1. `test_basic` - Basic truth table test
   - Tests all 4 input combinations
   - Verifies correct output for each combination
   - Uses delays for signal propagation

2. `test_truth_table` - Systematic truth table verification
   - Uses loop to iterate through all combinations
   - Checks output using assertions
   - Demonstrates test vector generation

3. `test_timing` - Timing verification
   - Tests signal propagation timing
   - Verifies output stability
   - Checks response to input changes

**Running the test:**

```bash
# Via module script (if available)
./scripts/module1.sh --sv-tests

# Directly from test directory
cd module1/tests/sv_tests
make SIM=verilator TEST=test_and_gate
```

**Expected Results:**
- 3 test cases, all passing
- Total simulation time: ~105ns
- All input combinations verified

#### Counter Test (`test_counter.sv`)

Testbench for the counter module:

**Test Cases:**
1. `test_reset` - Reset functionality
   - Verifies counter resets to 0
   - Tests active-low reset behavior

2. `test_increment` - Increment functionality
   - Verifies counter increments correctly
   - Tests 10 consecutive clock cycles
   - Validates enable control

3. `test_enable` - Enable control
   - Tests counter hold when disabled
   - Verifies increment when enabled

4. `test_overflow` - Overflow behavior
   - Tests wrap-around at 0xFF → 0x00
   - Verifies 256 count cycles

**Key Features:**
- Clock generation using `initial` block
- Reset sequence helper function
- Rising edge detection using `@(posedge clk)`

**Running the test:**

```bash
cd module1/tests/sv_tests
make SIM=verilator TEST=test_counter
```

**Expected Results:**
- 4 test cases, all passing
- Total simulation time: ~2773ns (includes overflow test)
- All counter functionality verified

### UVM Tests (`tests/uvm_tests/`)

#### AND Gate UVM Test (`test_and_gate_uvm.sv`)

UVM-style testbench demonstrating SystemVerilog UVM architecture:

**UVM Components:**

1. **Transaction (`AndGateTransaction`)**
   - Extends `uvm_sequence_item`
   - Contains test data (a, b, expected_y)

2. **Sequence (`AndGateSequence`)**
   - Extends `uvm_sequence`
   - Generates test vectors for the AND gate

3. **Driver (`AndGateDriver`)**
   - Extends `uvm_driver`
   - Drives transactions to DUT
   - Uses `seq_item_port` for communication

4. **Monitor (`AndGateMonitor`)**
   - Extends `uvm_monitor`
   - Observes DUT outputs
   - Uses `analysis_port` for data forwarding

5. **Scoreboard (`AndGateScoreboard`)**
   - Extends `uvm_scoreboard`
   - Checks DUT behavior
   - Compares expected and actual results

6. **Agent (`AndGateAgent`)**
   - Extends `uvm_agent`
   - Contains driver, monitor, and sequencer
   - Connects components in `connect_phase`

7. **Environment (`AndGateEnv`)**
   - Extends `uvm_env`
   - Contains agent instances
   - Top-level verification environment

8. **Test (`AndGateTest`)**
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
./scripts/module1.sh --uvm-tests

# Directly from test directory
cd module1/tests/uvm_tests
make SIM=verilator TEST=test_and_gate_uvm
```

**Note**: Verilator has limited UVM support. For full UVM features, use commercial simulators (VCS, Questa, Xcelium). UVM compilation with Verilator can take 20-30 minutes due to extensive template instantiations, but the test will execute successfully.

## Running Examples and Tests

### Using the Module Script

The `module1.sh` script provides a convenient way to run all examples and tests:

```bash
# Run everything (SystemVerilog examples + all tests)
./scripts/module1.sh

# Run only SystemVerilog examples
./scripts/module1.sh --all-sv

# Run only hardware tests
./scripts/module1.sh --skip-sv

# Run specific SystemVerilog examples
./scripts/module1.sh --sv-basics
./scripts/module1.sh --interfaces
./scripts/module1.sh --packages
./scripts/module1.sh --data-structures
./scripts/module1.sh --error-handling

# Run specific test suites
./scripts/module1.sh --sv-tests
./scripts/module1.sh --uvm-tests
./scripts/module1.sh --all-tests

# Combine options
./scripts/module1.sh --sv-basics --sv-tests
```

### Running Individual Tests

#### Direct SystemVerilog Execution

```bash
# Compile and run SystemVerilog examples
cd module1/examples/sv_basics
make

cd module1/examples/interfaces
make
```

#### Running SystemVerilog Tests

```bash
# Change to test directory
cd module1/tests/sv_tests

# Run AND gate tests
make SIM=verilator TEST=test_and_gate

# Run counter tests
make SIM=verilator TEST=test_counter

# Run all tests
make test_all

# Clean build artifacts
make clean
```

#### Running UVM Tests

```bash
# Change to test directory
cd module1/tests/uvm_tests

# Run UVM AND gate test
make SIM=verilator TEST=test_and_gate_uvm

# For commercial simulators
make SIM=vcs TEST=test_and_gate_uvm
make SIM=questa TEST=test_and_gate_uvm

# Clean build artifacts
make clean
```

## Test Results

### Execution Status

✅ **All examples and tests have been successfully executed and verified.**

**Last Execution:** 2026-01-23 23:50:29  
**Verilator Version:** 5.045  
**UVM Library:** UVM 2017 (1800.2-2017-1.0)

**Execution Summary:**
- ✅ All 5 SystemVerilog examples completed successfully
- ✅ All SystemVerilog tests passed (3 AND gate tests + 4 Counter tests)
- ✅ UVM test compiled and passed
- ⏱️ Total execution time: ~29 minutes (UVM compilation takes ~29 minutes due to template instantiations)

### SystemVerilog Test Output

When tests complete successfully, you should see:

```
============================================================
AND Gate SystemVerilog Testbench
============================================================

Test 1: Basic truth table test
Test 1 passed!

Test 2: Systematic truth table verification
  0 & 0 = 0 (PASS)
  0 & 1 = 0 (PASS)
  1 & 0 = 0 (PASS)
  1 & 1 = 1 (PASS)
Test 2 passed!

Test 3: Timing verification
Test 3 passed!

============================================================
All tests passed!
============================================================
```

### Test Counts

- **SystemVerilog AND gate tests**: 3 tests ✅
- **SystemVerilog Counter tests**: 4 tests ✅
- **UVM AND gate test**: 1 test ✅
- **Total**: 8 hardware tests (all passing)

### Generated Files

After execution, each example directory contains:
- `*.cpp` - C++ wrapper files generated by Verilator
- `*.vcd` - Waveform dump files (can be viewed with GTKWave)
- `compile.log` - Compilation log
- `run.log` - Execution output log
- `obj_dir/` - Verilator build directory

Full execution log is saved to `module1/module1.log`.

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
   ls -la module1/tests/sv_tests/obj_dir/
   ```

4. **View Detailed Logs:**
   ```bash
   # Check log files
   tail -f *.log
   ```

5. **Run Tests with Verbose Output:**
   ```bash
   make SIM=verilator TEST=test_and_gate V=1
   ```

## Topics Covered

1. **SystemVerilog Classes and Inheritance** - OOP fundamentals for verification data structures
2. **Interfaces and Modports** - SystemVerilog patterns for testbench communication
3. **Packages** - Code organization and namespace management
4. **Verification Fundamentals** - Basic testbench concepts and structure
5. **Testbench Architecture** - DUT, stimulus generation, result checking
6. **Simulation Flow** - Time management and synchronization
7. **Data Structures** - Collections optimized for verification (queues, scoreboards, coverage)
8. **Error Handling** - UVM reporting and structured logging
9. **SystemVerilog Basics** - Writing SystemVerilog testbenches
10. **UVM Basics** - UVM-style testbench architecture

## Next Steps

After completing Module 1, proceed to:

- **Module 2**: SystemVerilog Testbench Fundamentals - Clock generation, reset patterns, signal access
- **Module 3**: UVM Basics - Phases, factory, configuration database
- **Module 4**: UVM Components - Agents, sequencers, monitors, drivers

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **UVM User's Guide**: Accellera Systems Initiative
- **Verilator Documentation**: https://verilator.org/
- **Verification Academy**: https://verificationacademy.com/

## File Descriptions

### Examples

| File | Description |
|------|-------------|
| `transaction.sv` | Base transaction class and inheritance examples |
| `interface_example.sv` | Interfaces and modports for verification |
| `package_example.sv` | Packages and namespaces |
| `data_structures_example.sv` | Data structures for verification (queues, scoreboards, coverage) |
| `error_handling_example.sv` | UVM reporting and error handling patterns |

### DUT Modules

| File | Description | Ports |
|------|-------------|-------|
| `and_gate.v` | 2-input AND gate | `a`, `b` (inputs), `y` (output) |
| `counter.v` | 8-bit up counter | `clk`, `rst_n`, `enable` (inputs), `count` (output) |

### Testbenches

| File | Framework | Description | Tests |
|------|-----------|-------------|-------|
| `test_and_gate.sv` | SystemVerilog | AND gate testbench | 3 test functions |
| `test_counter.sv` | SystemVerilog | Counter testbench | 4 test functions |
| `test_and_gate_uvm.sv` | UVM | AND gate UVM testbench | 1 UVM test |

---

For questions or issues, refer to the main project README or check the test logs for detailed error messages.
