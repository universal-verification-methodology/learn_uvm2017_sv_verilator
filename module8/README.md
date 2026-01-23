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

### 9. Integration (`examples/integration/`)

Demonstrates integration of multiple utilities:

- Combining CLP, recorders, and queues
- Utility integration patterns
- Real-world utility usage

**Key Features:**
- Combined utility usage
- Transaction recording and queuing
- Command-line configuration

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

## Learning Outcomes

After completing this module, you should be able to:

- Use UVM utility classes effectively
- Parse command-line arguments using CLP
- Compare transactions using comparators
- Record and playback transactions
- Use pools and queues for memory management
- Apply string, math, and random utilities
- Integrate multiple utilities in testbenches

## Next Steps

Congratulations! You've completed the UVM learning path. Review the [IEEE 1800.2-2017 Coverage](docs/IEEE_1800_2_2017_COVERAGE.md) to ensure complete understanding.
