# Module 4: UVM Components

**Duration**: 3 weeks  
**Complexity**: Intermediate-Advanced  
**Goal**: Build complete UVM agents with driver, monitor, and sequencer

## Overview

This module covers the core UVM components used to build verification environments. You'll learn how to create agents, drivers, monitors, sequencers, and sequences to build complete verification environments. The module progresses from individual component implementation to complete agent integration.

### Examples and Code Structure

This module includes comprehensive examples and testbenches located in the `module4/` directory:

```
module4/
├── examples/              # SystemVerilog UVM examples
│   ├── transactions/     # Transaction modeling examples
│   ├── drivers/          # Driver implementation examples
│   ├── monitors/         # Monitor implementation examples
│   ├── sequencers/       # Sequencer and sequence examples
│   ├── tlm/              # TLM communication examples
│   ├── scoreboards/      # Scoreboard examples
│   └── agents/           # Complete agent examples
├── dut/                   # Verilog/SystemVerilog Design Under Test
│   └── interfaces/       # Interface modules for testing
│       └── simple_interface.v
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
│       └── test_complete_agent_uvm.sv
└── README.md             # Module 4 documentation
```

### Quick Start

**Run all examples using the orchestrator script:**
```bash
# Run all UVM examples
./scripts/module4.sh

# Run specific examples
./scripts/module4.sh --transactions
./scripts/module4.sh --drivers
./scripts/module4.sh --monitors
./scripts/module4.sh --sequencers
./scripts/module4.sh --tlm
./scripts/module4.sh --scoreboards
./scripts/module4.sh --agents

# Run tests
./scripts/module4.sh --uvm-tests

# Run everything
./scripts/module4.sh --all-examples --uvm-tests
```

**Run examples individually:**
```bash
# Compile and run UVM examples
cd module4/examples/transactions
verilator -sv --cc --exe --timing --trace \
    -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI \
    --binary $UVM_HOME/src/uvm_pkg.sv transactions.sv transactions.cpp \
    --top-module transactions
make -C obj_dir -f Vtransactions.mk
./obj_dir/Vtransactions

# Run UVM tests
cd module4/tests/uvm_tests
make SIM=verilator TEST=test_complete_agent_uvm
```

## Topics Covered

### 1. UVM Agent Architecture

- **Agent Overview and Structure**
  - Agent purpose and responsibilities
  - Agent components (driver, monitor, sequencer)
  - Agent configuration
  - Active vs passive agents

- **Agent Components**
  - Driver for stimulus generation
  - Monitor for observation
  - Sequencer for sequence management
  - Agent integration

#### Example 4.1: Transactions (`module4/examples/transactions/transactions.sv`)

**What it demonstrates:**
- **BaseTransaction**: Basic transaction with `data` and `address` fields
- **ExtendedTransaction**: Extended transaction with `control` and `status` fields
- **ConstrainedTransaction**: Transaction with randomization constraints
- **Transaction Operations**: Copy, comparison, and string conversion

**Key Concepts:**
- Transaction class design extending `uvm_sequence_item`
- Transaction fields and data members
- Transaction copy and comparison operations
- Extended transactions with inheritance
- Constrained random transactions

**Execution:**
```bash
# Using orchestrator script (recommended)
./scripts/module4.sh --transactions

# Or compile directly with Verilator
cd module4/examples/transactions
verilator -sv --cc --exe --timing --trace \
    -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI \
    --binary $UVM_HOME/src/uvm_pkg.sv transactions.sv transactions.cpp \
    --top-module transactions
make -C obj_dir -f Vtransactions.mk
./obj_dir/Vtransactions
```

**Verified Output:**
- Transaction creation and initialization
- Transaction copy operations
- Transaction comparison operations
- Extended transaction inheritance
- Constrained random transaction generation

### 2. UVM Driver Implementation

- **Driver Purpose and Responsibilities**
  - Stimulus generation
  - Protocol implementation
  - Signal driving
  - Transaction-to-signal conversion

- **Driver Implementation**
  - Driver class structure
  - Sequencer communication
  - Transaction reception
  - Signal driving patterns

#### Example 4.2: Drivers (`module4/examples/drivers/drivers.sv`)

**What it demonstrates:**
- **SimpleDriver**: Basic driver implementation with transaction reception
- **ProtocolDriver**: Protocol-aware driver with handshaking
- **Driver-Sequencer Communication**: Using `seq_item_port` for transaction flow
- **Signal Driving**: Converting transactions to DUT signals

**Key Concepts:**
- Driver class structure extending `uvm_driver`
- Transaction reception from sequencer via `seq_item_port`
- Signal driving to DUT
- Driver-sequencer communication
- Protocol-specific driving patterns

**Driver Flow:**
1. `build_phase()` - Create `seq_item_port`
2. `connect_phase()` - Connect to sequencer
3. `run_phase()` - Main driver loop:
   - `get_next_item()` - Get transaction from sequencer
   - `drive_transaction()` - Drive signals to DUT
   - `item_done()` - Signal completion

**Execution:**
```bash
./scripts/module4.sh --drivers
```

**Verified Output:**
- Driver creation and initialization
- Transaction reception from sequencer
- Signal driving to DUT
- Protocol-specific driving patterns
- Driver-sequencer communication

### 3. UVM Monitor Implementation

- **Monitor Purpose and Responsibilities**
  - DUT observation
  - Signal sampling
  - Transaction creation
  - Analysis port usage

- **Monitor Implementation**
  - Monitor class structure
  - Signal sampling
  - Transaction creation
  - Analysis port forwarding

#### Example 4.3: Monitors (`module4/examples/monitors/monitors.sv`)

**What it demonstrates:**
- **SimpleMonitor**: Basic monitor implementation with signal sampling
- **ProtocolMonitor**: Protocol-aware monitor with handshake monitoring
- **Transaction Creation**: Creating transactions from sampled signals
- **Analysis Port**: Forwarding transactions via analysis port

**Key Concepts:**
- Monitor class structure extending `uvm_monitor`
- Signal sampling from DUT
- Transaction creation from sampled signals
- Analysis port usage
- Protocol-specific monitoring

**Execution:**
```bash
./scripts/module4.sh --monitors
```

**Verified Output:**
- Monitor creation and initialization
- Signal sampling from DUT
- Transaction creation from signals
- Analysis port forwarding
- Protocol-specific monitoring

### 4. UVM Sequencer and Sequences

- **Sequencer Implementation**
  - Sequencer purpose
  - Sequence item management
  - Sequence execution
  - Sequencer-driver communication

- **Sequence Implementation**
  - Sequence items (`uvm_sequence_item`)
  - Sequences (`uvm_sequence`)
  - Sequence execution
  - Sequence libraries

#### Example 4.4: Sequencers (`module4/examples/sequencers/sequencers.sv`)

**What it demonstrates:**
- **SimpleSequence**: Basic sequence implementation
- **ExtendedSequence**: Extended sequence with configurable item count
- **Sequence Execution**: Starting sequences on sequencers
- **Sequence Item Generation**: Creating and sending sequence items

**Key Concepts:**
- Sequencer implementation
- Sequence items (`uvm_sequence_item`)
- Sequences (`uvm_sequence`)
- Sequence execution
- Sequence libraries

**Execution:**
```bash
./scripts/module4.sh --sequencers
```

**Verified Output:**
- Sequencer creation and initialization
- Sequence item generation
- Sequence execution
- Sequencer-driver communication
- Sequence libraries

### 5. TLM (Transaction-Level Modeling)

- **TLM Interfaces**
  - Put/get interfaces
  - Peek interfaces
  - Transport interfaces
  - Analysis interfaces

- **TLM Components**
  - TLM ports and exports
  - TLM FIFOs
  - Analysis ports and exports
  - TLM connections

#### Example 4.5: TLM (`module4/examples/tlm/tlm.sv`)

**What it demonstrates:**
- **TlmProducer**: Uses `uvm_blocking_put_port` to produce transactions
- **TlmConsumer**: Uses `uvm_blocking_get_export` to consume transactions
- **AnalysisProducer**: Uses `uvm_analysis_port` to broadcast transactions
- **AnalysisSubscriber**: Uses `uvm_subscriber` to receive transactions

**Key Concepts:**
- TLM interfaces (put, get, peek, transport)
- TLM ports and exports
- TLM FIFOs
- Analysis ports and exports
- TLM connections

**Note**: Some TLM features may have limited Verilator support. See documentation for workarounds.

**Execution:**
```bash
./scripts/module4.sh --tlm
```

**Verified Output:**
- TLM port/export creation
- TLM connection establishment
- Transaction flow via TLM
- Analysis port broadcasting
- TLM FIFO usage

### 6. Scoreboards

- **Scoreboard Purpose**
  - Result checking
  - Transaction comparison
  - Pass/fail tracking
  - Verification closure

- **Scoreboard Implementation**
  - Scoreboard structure
  - Transaction storage
  - Comparison logic
  - Result reporting

#### Example 4.6: Scoreboards (`module4/examples/scoreboards/scoreboards.sv`)

**What it demonstrates:**
- **SimpleScoreboard**: Basic scoreboard with transaction comparison
- **Transaction Storage**: Storing expected and actual transactions
- **Comparison Logic**: Comparing transactions for verification
- **Result Reporting**: Reporting pass/fail counts

**Key Concepts:**
- Scoreboard purpose and structure
- Transaction comparison
- Result checking
- Pass/fail tracking

**Execution:**
```bash
./scripts/module4.sh --scoreboards
```

**Verified Output:**
- Scoreboard creation and initialization
- Transaction storage
- Transaction comparison
- Pass/fail tracking
- Result reporting

### 7. Complete Agent Example

- **Building Complete Agents**
  - Agent structure
  - Component integration
  - Agent configuration
  - Active vs passive agents

#### Example 4.7: Complete Agents (`module4/examples/agents/agents.sv`)

**What it demonstrates:**
- **CompleteAgent**: Contains driver, monitor, and sequencer
- **Agent Configuration**: Configurable as active or passive
- **Component Integration**: Integrating all agent components
- **Agent Testing**: Testing complete agent functionality

**Key Concepts:**
- Agent structure
- Component integration
- Agent configuration
- Active vs passive agents

**Execution:**
```bash
./scripts/module4.sh --agents
```

**Verified Output:**
- Complete agent creation
- Component integration
- Agent configuration
- Active/passive agent modes
- Agent functionality

## Learning Outcomes

By the end of this module, you should be able to:

- Design and implement transaction classes
- Create drivers for DUT stimulus generation
- Implement monitors for DUT observation
- Build sequencers and sequences for test generation
- Use TLM for component communication
- Create scoreboards for result checking
- Build complete agents with all components integrated
- Apply UVM component patterns in testbenches

## Exercises

1. **Transaction Modeling**
   - Create base transaction class
   - Implement transaction copy and comparison
   - Create extended transaction classes
   - Add constrained random transactions

2. **Driver Implementation**
   - Create driver class extending uvm_driver
   - Implement sequencer communication
   - Add signal driving logic
   - Test driver with sequences

3. **Monitor Implementation**
   - Create monitor class extending uvm_monitor
   - Implement signal sampling
   - Create transactions from signals
   - Forward transactions via analysis port

4. **Sequencer and Sequences**
   - Create sequencer class
   - Implement sequence classes
   - Generate sequence items
   - Test sequence execution

5. **TLM Communication**
   - Create TLM producer and consumer
   - Connect TLM ports and exports
   - Test transaction flow via TLM
   - Implement analysis ports

6. **Scoreboards**
   - Create scoreboard class
   - Implement transaction storage
   - Add comparison logic
   - Test result checking

7. **Complete Agents**
   - Build complete agent with all components
   - Configure agent as active or passive
   - Integrate agent into environment
   - Test complete agent functionality

## Execution Status

✅ **Module 4 has been successfully executed and verified.**

**Verification Date:** 2026-01-24  
**Status:** All examples and tests passing  
**Verilator Version:** 5.045  
**UVM Library:** UVM 2017 (1800.2-2017-1.0)  
**Test Results:**
- ✅ 7 SystemVerilog UVM examples executed successfully
- ✅ 1 UVM test compiled and passed
- ⏱️ Total execution time: ~26 minutes (UVM compilation takes significant time due to template instantiations)

**Examples Executed:**
1. ✅ Transactions - Transaction-level modeling and operations demonstrated
2. ✅ Drivers - Driver implementation demonstrated (4 driver messages)
3. ✅ Monitors - Monitor implementation demonstrated (2 monitor messages)
4. ✅ Sequencers - Sequencer and sequence implementation demonstrated (2 sequence messages)
5. ✅ TLM - TLM communication demonstrated (7 producer, 8 consumer, 4 subscriber messages)
6. ✅ Scoreboards - Scoreboard implementation demonstrated
7. ✅ Agents - Complete agent example demonstrated

**Note:** UVM compilation with Verilator takes approximately 20-30 minutes due to extensive template instantiations, but all tests execute successfully.

**Execution Logs:** Full execution logs are available in `module4/module4.log` and individual example logs in each example directory (`compile.log`, `run.log`).

## Assessment

- [x] Can design and implement transaction classes
- [x] Can create drivers for DUT stimulus
- [x] Can implement monitors for DUT observation
- [x] Can build sequencers and sequences
- [x] Can use TLM for component communication
- [x] Can create scoreboards for result checking
- [x] Can build complete agents
- [x] Understands UVM component patterns

## Next Steps

After completing this module, proceed to [Module 5: Advanced UVM Concepts](MODULE5.md) for advanced UVM features including virtual sequences, coverage models, advanced configuration, callbacks, and register models.

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **UVM User's Guide**: Accellera Systems Initiative
- **Verilator Documentation**: https://verilator.org/
- **Verification Academy**: https://verificationacademy.com/
