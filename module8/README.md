# Module 8: UVM Miscellaneous Utilities

This module covers UVM utility classes including Command Line Processor, comparators, recorders, pools, queues, and string/math/random utilities.

## Directory Structure

```
module8/
├── examples/
│   ├── clp/
│   │   ├── clp.sv
│   │   └── clp.cpp
│   ├── comparators/
│   │   ├── comparators.sv
│   │   └── comparators.cpp
│   ├── recorders/
│   │   ├── recorders.sv
│   │   └── recorders.cpp
│   ├── pools/
│   │   ├── pools.sv
│   │   └── pools.cpp
│   ├── queues/
│   │   ├── queues.sv
│   │   └── queues.cpp
│   ├── string_utils/
│   │   ├── string_utils.sv
│   │   └── string_utils.cpp
│   ├── math_utils/
│   │   ├── math_utils.sv
│   │   └── math_utils.cpp
│   ├── random_utils/
│   │   ├── random_utils.sv
│   │   └── random_utils.cpp
│   └── integration/
│       ├── integration.sv
│       └── integration.cpp
├── dut/
│   └── dma/
│       └── simple_dma.v
└── tests/
    └── uvm_tests/
        ├── test_utilities_uvm.sv
        └── Makefile
```

## Examples Overview

### 1. Command Line Processor (CLP) (`examples/clp/`)

Demonstrates using UVM Command Line Processor for test configuration:

- Command-line argument parsing using `uvm_cmdline_proc`
- Plusarg handling (`+test_mode`, `+debug_level`, etc.)
- Test configuration from command line
- CLP usage patterns

**Key Features:**
- `uvm_cmdline_proc.get_arg_value()` for parsing command-line arguments
- Configuration via plusargs
- Test mode and parameter configuration

**Expected Output:**
- Command-line argument parsing
- Plusarg handling
- Test configuration from command line
- Dynamic test configuration

### 2. Comparators (`examples/comparators/`)

Demonstrates using comparators for transaction comparison:

- In-order transaction comparison
- Out-of-order transaction comparison using address matching
- Transaction matching algorithms
- Comparator statistics and reporting

**Key Features:**
- `InOrderComparator` for sequential comparison
- `OutOfOrderComparator` for address-based matching
- Match/mismatch tracking and reporting

**Expected Output:**
- In-order transaction comparison
- Out-of-order transaction comparison
- Match/mismatch tracking
- Comparator statistics

### 3. Recorders (`examples/recorders/`)

Demonstrates transaction recording and playback:

- Transaction recording with timestamps
- Recorder implementation
- Recording formats
- Playback capabilities

**Key Features:**
- `do_record()` for transaction recording
- Transaction storage and retrieval
- Playback functionality

**Expected Output:**
- Transaction recording
- Recorder storage
- Playback functionality
- Recording formats

### 4. Pools (`examples/pools/`)

Demonstrates object pooling for memory management:

- Object pooling to reduce allocation overhead
- Pool implementation with configurable size
- Pool usage patterns
- Memory management

**Key Features:**
- `allocate()` and `free()` methods
- Pool size management
- Statistics tracking

**Expected Output:**
- Object pool creation
- Object allocation
- Object deallocation
- Pool statistics

### 5. Queues (`examples/queues/`)

Demonstrates queue utilities and operations:

- FIFO queue operations
- Priority queue implementation
- Queue management
- Queue statistics

**Key Features:**
- `enqueue_fifo()` and `dequeue_fifo()` for FIFO operations
- `enqueue_priority()` and `dequeue_priority()` for priority queues
- Queue size tracking

**Expected Output:**
- FIFO queue operations
- Priority queue operations
- Queue management
- Queue statistics

### 6. String Utilities (`examples/string_utils/`)

Demonstrates string manipulation and formatting:

- String conversion (hex, binary)
- String padding
- Transaction formatting
- Field extraction

**Key Features:**
- `int_to_hex()` and `int_to_bin()` conversions
- `pad_string()` for formatting
- `format_transaction()` for transaction strings
- `extract_field()` for parsing

**Expected Output:**
- String conversion operations
- String padding
- Transaction formatting
- Field extraction

### 7. Math Utilities (`examples/math_utils/`)

Demonstrates mathematical operations and utilities:

- Average calculation
- Min/max operations
- Standard deviation calculation
- Value clamping

**Key Features:**
- `calculate_average()`, `calculate_max()`, `calculate_min()`
- `calculate_std_dev()` for statistical analysis
- `clamp()` for value range limiting

**Expected Output:**
- Average calculation
- Min/max operations
- Standard deviation calculation
- Value clamping

### 8. Random Utilities (`examples/random_utils/`)

Demonstrates random number generation:

- Random range generation
- Random bit vector generation
- Weighted random selection
- Random delay generation

**Key Features:**
- `random_range()` for bounded random values
- `random_bits()` for bit vector generation
- `weighted_random()` for probability-based selection
- Constrained random transactions

**Expected Output:**
- Random range generation
- Random bit vector generation
- Weighted random selection
- Random delay generation

### 9. Integration (`examples/integration/`)

Demonstrates integration of multiple utilities:

- Combining CLP, recorders, and queues
- Utility integration patterns
- Real-world utility usage

**Key Features:**
- Combined utility usage
- Transaction recording and queuing
- Command-line configuration

**Expected Output:**
- Combined utility usage
- Transaction recording and queuing
- Command-line configuration
- Integration patterns

## Running Examples

### Via Module Script

```bash
./scripts/module8.sh
./scripts/module8.sh --clp
./scripts/module8.sh --comparators
./scripts/module8.sh --recorders
./scripts/module8.sh --pools
./scripts/module8.sh --queues
./scripts/module8.sh --string-utils
./scripts/module8.sh --math-utils
./scripts/module8.sh --random-utils
./scripts/module8.sh --integration
./scripts/module8.sh --uvm-tests
```

### Direct Execution

```bash
# CLP example
cd module8/examples/clp
make SIM=verilator TEST=clp_top

# Comparators example
cd module8/examples/comparators
make SIM=verilator TEST=comparators_top

# Recorders example
cd module8/examples/recorders
make SIM=verilator TEST=recorders_top

# Pools example
cd module8/examples/pools
make SIM=verilator TEST=pools_top

# Queues example
cd module8/examples/queues
make SIM=verilator TEST=queues_top

# String utilities example
cd module8/examples/string_utils
make SIM=verilator TEST=string_utils_top

# Math utilities example
cd module8/examples/math_utils
make SIM=verilator TEST=math_utils_top

# Random utilities example
cd module8/examples/random_utils
make SIM=verilator TEST=random_utils_top

# Integration example
cd module8/examples/integration
make SIM=verilator TEST=integration_top

# UVM testbench
cd module8/tests/uvm_tests
make SIM=verilator TEST=test_utilities_uvm
```

## Command-Line Arguments

The CLP example supports the following plusargs:

```bash
+test_mode=<mode>          # Test mode (e.g., "normal", "stress")
+debug_level=<level>       # Debug verbosity level
+num_transactions=<count>   # Number of transactions
+seed=<value>              # Random seed
```

Example:

```bash
cd module8/examples/clp
make SIM=verilator TEST=clp_top EXTRA_ARGS="+test_mode=stress +num_transactions=20"
```

## Test Results

### Execution Status

✅ **All examples and tests have been successfully executed and verified.**

**Last Execution:** 2026-01-24 04:18:58  
**Verilator Version:** 5.045  
**UVM Library:** UVM 2017 (1800.2-2017-1.0)

**Execution Summary:**
- ✅ All 9 SystemVerilog UVM examples completed successfully
- ✅ UVM test compiled and passed
- ⏱️ Total execution time: ~16 minutes (UVM compilation takes significant time due to template instantiations)

**Examples Executed:**
1. ✅ CLP - Command Line Processor demonstrated (8 CLP messages, 1 driver message)
2. ✅ Comparators - Transaction comparators demonstrated (10 COMPARATOR messages)
3. ✅ Recorders - Transaction recording demonstrated (3 RECORDER messages)
4. ✅ Pools - Object pooling demonstrated (3 POOL messages)
5. ✅ Queues - Queue utilities demonstrated (6 QUEUE messages)
6. ✅ String Utils - String utilities demonstrated (6 STRING messages)
7. ✅ Math Utils - Math utilities demonstrated (6 MATH messages)
8. ✅ Random Utils - Random utilities demonstrated (3 RANDOM messages)
9. ✅ Integration - Utility integration demonstrated

**Tests Executed:**
- ✅ UVM Utilities test - 1 UVM test passing

### SystemVerilog Example Output

When tests complete successfully, you should see:

```
============================================================
UVM Report Summary
============================================================

[CLP]     8
[DRIVER]     1
[OBJTN_CLEAR]     1
[RNTST]     1
[UVM/COMP/NAME]    20
[UVM/COMP/NAMECHECK]     1
[UVM/RELNOTES]     1
```

### Test Counts

- **CLP example**: Command Line Processor demonstrated ✅
- **Comparators example**: Transaction comparators demonstrated ✅
- **Recorders example**: Transaction recording demonstrated ✅
- **Pools example**: Object pooling demonstrated ✅
- **Queues example**: Queue utilities demonstrated ✅
- **String Utils example**: String utilities demonstrated ✅
- **Math Utils example**: Math utilities demonstrated ✅
- **Random Utils example**: Random utilities demonstrated ✅
- **Integration example**: Utility integration demonstrated ✅
- **UVM Utilities test**: 1 UVM test ✅

### Generated Files

After execution, each example directory contains:
- `*.cpp` - C++ wrapper files generated by Verilator
- `*.vcd` - Waveform dump files (can be viewed with GTKWave)
- `compile.log` - Compilation log
- `run.log` - Execution output log
- `obj_dir/` - Verilator build directory

Full execution log is saved to `module8/module8.log`.

## Learning Outcomes

After completing this module, you should be able to:

- Use UVM utility classes effectively
- Parse command-line arguments using CLP
- Compare transactions using comparators
- Record and playback transactions
- Use pools and queues for memory management
- Apply string, math, and random utilities
- Integrate multiple utilities in testbenches
- Build flexible and configurable testbenches

## Next Steps

Congratulations! You've completed the UVM learning path. Review the [IEEE 1800.2-2017 Coverage](docs/IEEE_1800_2_2017_COVERAGE.md) to ensure complete understanding.
