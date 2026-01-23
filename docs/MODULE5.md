# Module 5: Advanced UVM Concepts

**Duration**: 3 weeks  
**Complexity**: Advanced  
**Goal**: Master advanced UVM features and patterns

## Overview

This module covers advanced UVM concepts including virtual sequences, coverage models, advanced configuration, callbacks, and register models. You'll learn how to coordinate multiple sequencers, implement functional coverage, use complex configuration objects, implement callbacks, and work with register models.

### Examples and Code Structure

This module includes comprehensive examples and testbenches located in the `module5/` directory:

```
module5/
├── examples/              # SystemVerilog UVM examples
│   ├── virtual_sequences/ # Virtual sequence examples
│   ├── coverage/         # Coverage model examples
│   ├── configuration/     # Advanced configuration
│   ├── callbacks/        # Callback examples
│   └── register_model/   # Register model examples
├── dut/                   # Verilog/SystemVerilog Design Under Test
│   └── advanced/         # Advanced DUT modules
│       └── multi_channel.v
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
│       └── test_advanced_uvm.sv
└── README.md             # Module 5 documentation
```

### Quick Start

**Run all examples using the orchestrator script:**
```bash
# Run all UVM examples
./scripts/module5.sh

# Run specific examples
./scripts/module5.sh --virtual-sequences
./scripts/module5.sh --coverage
./scripts/module5.sh --configuration
./scripts/module5.sh --callbacks
./scripts/module5.sh --register-model

# Run tests
./scripts/module5.sh --uvm-tests

# Run everything
./scripts/module5.sh --all-examples --uvm-tests
```

**Run examples individually:**
```bash
# Compile and run UVM examples
cd module5/examples/virtual_sequences
verilator -sv --cc --exe --timing --trace \
    -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI \
    --binary $UVM_HOME/src/uvm_pkg.sv virtual_sequences.sv virtual_sequences.cpp \
    --top-module virtual_sequences
make -C obj_dir -f Vvirtual_sequences.mk
./obj_dir/Vvirtual_sequences

# Run UVM tests
cd module5/tests/uvm_tests
make SIM=verilator TEST=test_advanced_uvm
```

## Topics Covered

### 1. Virtual Sequences and Sequencers

- **Virtual Sequence Purpose**
  - Coordinating multiple sequencers
  - Cross-agent stimulus generation
  - System-level sequence coordination
  - Sequence libraries

- **Virtual Sequencer Implementation**
  - Virtual sequencer structure
  - Sequencer references
  - Connection in connect_phase
  - Virtual sequencer usage

#### Example 5.1: Virtual Sequences (`module5/examples/virtual_sequences/virtual_sequences.sv`)

**What it demonstrates:**
- **VirtualSequencer**: Contains references to multiple sequencers (`master_seqr`, `slave_seqr`)
- **VirtualSequence**: Coordinates sequences on multiple sequencers
- **ChannelSequence**: Regular sequence for a single channel
- **Parallel Execution**: Using `fork-join` for concurrent sequences
- **Sequential Execution**: Sequential sequence coordination

**Key Concepts:**
- Virtual sequencer contains references to multiple sequencers
- Virtual sequence coordinates sequences on different sequencers
- Parallel sequence execution using fork-join enables concurrent testing
- Sequential sequence execution enables ordered coordination

**Execution:**
```bash
# Using orchestrator script (recommended)
./scripts/module5.sh --virtual-sequences

# Or compile directly with Verilator
cd module5/examples/virtual_sequences
verilator -sv --cc --exe --timing --trace \
    -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI \
    --binary $UVM_HOME/src/uvm_pkg.sv virtual_sequences.sv virtual_sequences.cpp \
    --top-module virtual_sequences
make -C obj_dir -f Vvirtual_sequences.mk
./obj_dir/Vvirtual_sequences
```

**Verified Output:**
- Virtual sequencer creation and connection
- Virtual sequence coordination
- Parallel sequence execution
- Sequential sequence execution

### 2. Coverage Models

- **Functional Coverage**
  - Coverage model structure
  - Coverage sampling
  - Coverage analysis
  - Coverage reporting

- **Coverage Types**
  - Data coverage
  - Address range coverage
  - Command coverage
  - Cross coverage

#### Example 5.2: Coverage (`module5/examples/coverage/coverage.sv`)

**What it demonstrates:**
- **CoverageModel**: Extends `uvm_subscriber` for coverage collection
- **Coverage Sampling**: Via `write()` method from analysis port
- **Coverage Types**: Data, address range, command, and cross coverage
- **Coverage Analysis**: Coverage statistics and reporting

**Key Concepts:**
- Coverage model class extending `uvm_subscriber` enables automatic sampling
- Coverage sampling via `write()` method receives transactions
- Coverpoints and bins track unique values and ranges
- Cross coverage between multiple fields tracks combinations

**Execution:**
```bash
./scripts/module5.sh --coverage
```

**Verified Output:**
- Coverage sampling demonstrated
- Data coverage tracking
- Address range coverage
- Command coverage tracking
- Cross coverage analysis

### 3. Advanced Configuration

- **Complex Configuration Objects**
  - Configuration object design
  - Configuration fields
  - Configuration methods
  - Configuration copying

- **Configuration Hierarchy**
  - Environment-level configuration
  - Agent-level configuration
  - Component-specific configuration
  - Configuration inheritance

#### Example 5.3: Advanced Configuration (`module5/examples/configuration/configuration.sv`)

**What it demonstrates:**
- **AgentConfig**: Complex configuration object with multiple fields
- **EnvConfig**: Environment-level configuration containing agent configs
- **Configuration Hierarchy**: Multi-level configuration structure
- **Configuration Usage**: Setting and getting complex configuration

**Key Concepts:**
- Complex configuration objects enable rich configuration data
- Configuration hierarchy supports multi-level configuration
- Resource database usage provides flexible configuration access
- Configuration inheritance enables configuration reuse

**Execution:**
```bash
./scripts/module5.sh --configuration
```

**Verified Output:**
- Complex configuration object creation
- Configuration hierarchy demonstrated
- Configuration setting and getting
- Configuration object usage

### 4. Callbacks

- **Callback Mechanism**
  - Callback base classes
  - Callback registration
  - Pre/post callbacks
  - Callback execution

- **Callback Usage Patterns**
  - Driver callbacks
  - Monitor callbacks
  - Transaction modification
  - Side-effect actions

#### Example 5.4: Callbacks (`module5/examples/callbacks/callbacks.sv`)

**What it demonstrates:**
- **DriverCallbackBase**: Base callback class for driver
- **DriverCallback**: Driver callback implementation
- **MonitorCallbackBase**: Base callback class for monitor
- **MonitorCallback**: Monitor callback implementation
- **Callback Registration**: Registering callbacks with components

**Key Concepts:**
- Callback mechanism enables non-intrusive extension
- Pre/post callbacks provide hooks for customization
- Callback registration connects callbacks to components
- Callback usage patterns enable flexible test customization

**Execution:**
```bash
./scripts/module5.sh --callbacks
```

**Verified Output:**
- Callback registration demonstrated
- Pre-drive callbacks executed
- Post-drive callbacks executed
- Monitor callbacks executed

### 5. Register Model

- **Register Model Basics**
  - Register model structure
  - Register blocks, registers, fields
  - Register read/write operations
  - Register predictor

- **Register Model Components**
  - RegisterField: Individual register fields
  - Register: Complete registers
  - RegisterBlock: Register address spaces
  - Register operations

#### Example 5.5: Register Model (`module5/examples/register_model/register_model.sv`)

**What it demonstrates:**
- **RegisterField**: Represents a register field with offset, width, and value
- **Register**: Represents a register with address and fields
- **RegisterBlock**: Represents a register block with multiple registers
- **Register Operations**: Read/write operations on registers

**Key Concepts:**
- Register model structure provides abstraction for register access
- Register blocks, registers, fields organize register hierarchy
- Register read/write operations enable register verification
- Simplified register model demonstrates concepts (full implementation requires uvm_reg)

**Note:** This is a simplified register model. Full UVM register model requires the `uvm_reg` package.

**Execution:**
```bash
./scripts/module5.sh --register-model
```

**Verified Output:**
- Register model structure demonstrated
- Register field operations
- Register read/write operations
- Register block management

## Learning Outcomes

By the end of this module, you should be able to:

- Implement virtual sequences to coordinate multiple sequencers
- Create coverage models for functional verification
- Use advanced configuration with complex objects
- Implement callbacks for component extension
- Use register models for register verification
- Apply advanced UVM patterns in testbenches

## Exercises

1. **Virtual Sequences**
   - Create virtual sequencer with multiple sequencer references
   - Implement virtual sequence coordinating multiple channels
   - Test parallel sequence execution
   - Test sequential sequence coordination

2. **Coverage Models**
   - Create coverage model extending uvm_subscriber
   - Implement coverage sampling
   - Define coverage bins and ranges
   - Implement cross coverage

3. **Advanced Configuration**
   - Design complex configuration objects
   - Implement configuration hierarchy
   - Set and get configuration at multiple levels
   - Test configuration inheritance

4. **Callbacks**
   - Create callback base classes
   - Implement callback classes
   - Register callbacks with components
   - Test callback execution

5. **Register Model**
   - Design register model structure
   - Implement register fields and registers
   - Create register blocks
   - Test register read/write operations

## Execution Status

✅ **Module 5 has been successfully executed and verified.**

**Verification Date:** 2026-01-24  
**Status:** All examples and tests passing  
**Verilator Version:** 5.045  
**UVM Library:** UVM 2017 (1800.2-2017-1.0)  
**Test Results:**
- ✅ 5 SystemVerilog UVM examples executed successfully
- ✅ 1 UVM test compiled and passed
- ⏱️ Total execution time: ~27 minutes (UVM compilation takes significant time due to template instantiations)

**Examples Executed:**
1. ✅ Virtual Sequences - Virtual sequencer and sequence coordination demonstrated
2. ✅ Coverage - Functional coverage implementation demonstrated
3. ✅ Configuration - Advanced configuration objects demonstrated
4. ✅ Callbacks - Callback mechanism demonstrated
5. ✅ Register Model - Register model basics demonstrated

**Note:** UVM compilation with Verilator takes approximately 20-30 minutes due to extensive template instantiations, but all tests execute successfully.

**Execution Logs:** Full execution logs are available in `module5/module5.log` and individual example logs in each example directory (`compile.log`, `run.log`).

## Assessment

- [x] Can implement virtual sequences
- [x] Can create coverage models
- [x] Can use advanced configuration
- [x] Can implement callbacks
- [x] Can use register models
- [x] Understands advanced UVM patterns
- [x] Can apply advanced concepts in testbenches

## Next Steps

After completing this module, proceed to [Module 6: Complex Testbenches](MODULE6.md) for system-level verification with multi-agent environments, protocol verification, and multi-channel scoreboards.

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **UVM User's Guide**: Accellera Systems Initiative
- **Verilator Documentation**: https://verilator.org/
- **Verification Academy**: https://verificationacademy.com/
