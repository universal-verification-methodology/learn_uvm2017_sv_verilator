# Module 5: Advanced UVM Concepts

This directory contains all examples, exercises, and test cases for Module 5, focusing on advanced UVM concepts including virtual sequences, coverage models, complex configuration, callbacks, and register models.

## Directory Structure

```
module5/
├── examples/              # SystemVerilog UVM examples
│   ├── virtual_sequences/ # Virtual sequence examples
│   │   ├── virtual_sequences.sv
│   │   └── virtual_sequences.cpp
│   ├── coverage/          # Coverage model examples
│   │   ├── coverage.sv
│   │   └── coverage.cpp
│   ├── configuration/     # Advanced configuration examples
│   │   ├── configuration.sv
│   │   └── configuration.cpp
│   ├── callbacks/         # Callback examples
│   │   ├── callbacks.sv
│   │   └── callbacks.cpp
│   └── register_model/    # Register model examples
│       ├── register_model.sv
│       └── register_model.cpp
├── dut/                   # Verilog/SystemVerilog Design Under Test modules
│   └── advanced/          # Advanced modules for testing
│       └── multi_channel.v
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
│       ├── test_advanced_uvm.sv
│       └── Makefile
└── exercises/             # Exercise solutions (if any)
```

## Prerequisites

Before running the experiments, ensure you have:

- **SystemVerilog Simulator**: Verilator 5.036+ (open-source) or commercial simulator (VCS, Questa, Xcelium)
- **UVM Library**: Accellera UVM 1.2 installed
- **Make**: For building and running tests
- **C++ Compiler**: GCC or Clang (for Verilator)

To verify your environment:

```bash
verilator --version      # Should be 5.036+
echo $UVM_HOME          # Should point to UVM installation
make --version          # Should be available
```

## Advanced UVM Examples

### 1. Virtual Sequences (`examples/virtual_sequences/virtual_sequences.sv`)

Demonstrates virtual sequencer and virtual sequence coordination:

**Key Concepts:**
- Virtual sequencer containing references to multiple sequencers
- Virtual sequence coordinating sequences on different sequencers
- Parallel sequence execution using `fork-join`
- Sequential sequence execution

**Virtual Sequence Components:**

1. **VirtualSequencer**
   - Extends `uvm_sequencer`
   - Contains references to multiple sequencers (`master_seqr`, `slave_seqr`)
   - References set in `connect_phase()` from environment

2. **VirtualSequence**
   - Extends `uvm_sequence`
   - Coordinates sequences on multiple sequencers
   - Parallel execution using `fork-join`
   - Sequential execution

3. **ChannelSequence**
   - Regular sequence for a single channel
   - Generates transactions for a specific channel

**Running the example:**

```bash
# Using orchestrator script
./scripts/module5.sh --virtual-sequences

# Or compile directly
cd module5/examples/virtual_sequences
verilator -sv --cc --exe --timing --trace \
    -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI \
    --binary $UVM_HOME/src/uvm_pkg.sv virtual_sequences.sv virtual_sequences.cpp \
    --top-module virtual_sequences
make -C obj_dir -f Vvirtual_sequences.mk
./obj_dir/Vvirtual_sequences
```

### 2. Coverage (`examples/coverage/coverage.sv`)

Demonstrates functional coverage implementation:

**Key Concepts:**
- Coverage model class extending `uvm_subscriber`
- Coverage sampling via `write()` method
- Coverpoints and bins
- Cross coverage between multiple fields
- Coverage analysis and reporting

**Coverage Types:**

1. **Data Coverage**
   - Tracks unique data values
   - Coverage: number of unique values

2. **Address Range Coverage**
   - Tracks address ranges (low, mid, high)
   - Coverage: samples in each range

3. **Command Coverage**
   - Tracks unique command values
   - Coverage: number of unique commands

4. **Cross Coverage**
   - Tracks combinations of data and command
   - Coverage: number of unique combinations

**Running the example:**

```bash
./scripts/module5.sh --coverage
```

### 3. Advanced Configuration (`examples/configuration/configuration.sv`)

Demonstrates complex configuration objects:

**Key Concepts:**
- Complex configuration objects
- Configuration hierarchy
- Resource database usage
- Configuration inheritance

**Configuration Classes:**

1. **AgentConfig**
   - Complex configuration object
   - Contains multiple fields (active, coverage, widths, timeout, mode)
   - Demonstrates configuration object design

2. **EnvConfig**
   - Environment-level configuration
   - Contains multiple agent configurations
   - Demonstrates configuration hierarchy

**Running the example:**

```bash
./scripts/module5.sh --configuration
```

### 4. Callbacks (`examples/callbacks/callbacks.sv`)

Demonstrates callback implementation:

**Key Concepts:**
- Callback mechanism
- Pre/post callbacks
- Callback registration
- Callback usage patterns

**Callback Classes:**

1. **DriverCallback**
   - Pre-drive and post-drive callbacks
   - Can modify transactions before/after driving
   - Demonstrates driver callbacks

2. **MonitorCallback**
   - Pre-sample and post-sample callbacks
   - Can perform actions before/after sampling
   - Demonstrates monitor callbacks

**Running the example:**

```bash
./scripts/module5.sh --callbacks
```

### 5. Register Model (`examples/register_model/register_model.sv`)

Demonstrates register model basics:

**Key Concepts:**
- Register model structure
- Register blocks, registers, fields
- Register read/write operations
- Simplified register model (full implementation requires uvm_reg)

**Register Model Components:**

1. **RegisterField**
   - Represents a register field
   - Contains offset, width, and value

2. **Register**
   - Represents a register
   - Contains address and fields
   - Supports read/write operations

3. **RegisterBlock**
   - Represents a register block
   - Contains multiple registers
   - Manages register addressing

**Note:** This is a simplified register model. Full UVM register model requires the `uvm_reg` package.

**Running the example:**

```bash
./scripts/module5.sh --register-model
```

## Design Under Test (DUT)

### Multi-Channel Interface (`dut/advanced/multi_channel.v`)

A multi-channel interface for advanced UVM testing.

**Module Interface:**
```systemverilog
module multi_channel (
    input  wire       clk,
    input  wire       rst_n,
    input  wire       master_valid,
    output reg        master_ready,
    input  wire [7:0] master_data,
    input  wire       slave_valid,
    output reg        slave_ready,
    input  wire [7:0] slave_data
);
```

**Functionality:**
- Resets to all zeros when `rst_n` is low
- Handles master and slave channels independently
- Simple handshaking protocol
- Designed for virtual sequence testing

## Testbenches

### UVM Tests (`tests/uvm_tests/`)

#### Advanced UVM Test (`test_advanced_uvm.sv`)

Complete UVM testbench demonstrating advanced concepts:

**UVM Components:**

1. **Transaction (`AdvancedTransaction`)**
   - Extends `uvm_sequence_item`
   - Contains data and channel information

2. **Coverage (`AdvancedCoverage`)**
   - Extends `uvm_subscriber`
   - Tracks data and channel coverage

3. **Sequence (`AdvancedSequence`)**
   - Extends `uvm_sequence`
   - Generates test vectors

4. **Driver (`AdvancedDriver`)**
   - Extends `uvm_driver`
   - Drives transactions to DUT

5. **Monitor (`AdvancedMonitor`)**
   - Extends `uvm_monitor`
   - Observes DUT outputs

6. **Agent (`AdvancedAgent`)**
   - Extends `uvm_agent`
   - Contains driver, monitor, and sequencer

7. **Environment (`AdvancedEnv`)**
   - Extends `uvm_env`
   - Contains agent and coverage

8. **Test (`AdvancedTest`)**
   - Extends `uvm_test`
   - Top-level test class

**Running the test:**

```bash
# Via module script
./scripts/module5.sh --uvm-tests

# Directly from test directory
cd module5/tests/uvm_tests
make SIM=verilator TEST=test_advanced_uvm
```

## Running Examples and Tests

### Using the Module Script

The `module5.sh` script provides a convenient way to run all examples and tests:

```bash
# Run everything (all examples + all tests)
./scripts/module5.sh

# Run only examples
./scripts/module5.sh --all-examples

# Run only tests
./scripts/module5.sh --uvm-tests

# Run specific examples
./scripts/module5.sh --virtual-sequences
./scripts/module5.sh --coverage
./scripts/module5.sh --configuration
./scripts/module5.sh --callbacks
./scripts/module5.sh --register-model

# Combine options
./scripts/module5.sh --coverage --callbacks --uvm-tests
```

### Running Individual Examples

#### Direct SystemVerilog Execution

```bash
# Compile and run UVM examples
cd module5/examples/virtual_sequences
verilator -sv --cc --exe --timing --trace \
    -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI \
    --binary $UVM_HOME/src/uvm_pkg.sv virtual_sequences.sv virtual_sequences.cpp \
    --top-module virtual_sequences
make -C obj_dir -f Vvirtual_sequences.mk
./obj_dir/Vvirtual_sequences
```

#### Running UVM Tests

```bash
# Change to test directory
cd module5/tests/uvm_tests

# Run UVM advanced test
make SIM=verilator TEST=test_advanced_uvm

# For commercial simulators
make SIM=vcs TEST=test_advanced_uvm
make SIM=questa TEST=test_advanced_uvm

# Clean build artifacts
make clean
```

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

#### 3. Callback Registration Errors

**Error:** Callbacks not working

**Solution:** 
- Verify callback registration in `connect_phase()`
- Check callback base class and derived class definitions
- Ensure `uvm_register_cb` macro is used correctly

#### 4. Virtual Sequence Coordination Issues

**Error:** Virtual sequence not coordinating correctly

**Solution:**
- Verify sequencer references are set in `connect_phase()`
- Check that virtual sequencer references point to actual sequencers
- Ensure sequences are started on correct sequencers

## Topics Covered

1. **Virtual Sequences** - Coordinating multiple sequencers
2. **Coverage Models** - Functional coverage implementation
3. **Advanced Configuration** - Complex configuration objects
4. **Callbacks** - Callback mechanism and usage
5. **Register Model** - Register model basics (simplified)

## Next Steps

After completing Module 5, proceed to:

- **Module 6**: Complex Testbenches - System-level verification

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **UVM User's Guide**: Accellera Systems Initiative
- **Verilator Documentation**: https://verilator.org/
- **Verification Academy**: https://verificationacademy.com/

## File Descriptions

### Examples

| File | Description |
|------|-------------|
| `virtual_sequences.sv` | Virtual sequencer and sequence coordination |
| `coverage.sv` | Functional coverage implementation |
| `configuration.sv` | Advanced configuration objects |
| `callbacks.sv` | Callback mechanism |
| `register_model.sv` | Register model basics (simplified) |

### DUT Modules

| File | Description | Ports |
|------|-------------|-------|
| `multi_channel.v` | Multi-channel interface | `clk`, `rst_n`, `master_valid`, `master_ready`, `master_data[7:0]`, `slave_valid`, `slave_ready`, `slave_data[7:0]` |

### Testbenches

| File | Framework | Description | Tests |
|------|-----------|-------------|-------|
| `test_advanced_uvm.sv` | UVM | Advanced UVM testbench | 1 UVM test |

---

For questions or issues, refer to the main project README or check the test logs for detailed error messages.
