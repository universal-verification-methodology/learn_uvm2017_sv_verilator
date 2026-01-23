# Module 6: Complex Testbenches

**Duration**: 3 weeks  
**Complexity**: Advanced  
**Goal**: Build production-quality multi-agent testbenches

## Overview

This module covers building complex, production-quality testbenches with multiple agents, protocol verification, and system-level architecture. You'll learn how to coordinate multiple agents, verify protocols, implement protocol checkers, and build multi-channel scoreboards.

### Examples and Code Structure

This module includes comprehensive examples and testbenches located in the `module6/` directory:

```
module6/
├── examples/              # SystemVerilog UVM examples
│   ├── architecture/     # Testbench architecture examples
│   ├── multi_agent/      # Multi-agent environment examples
│   ├── protocol/         # Protocol verification examples
│   ├── protocol_checkers/# Protocol checker examples
│   └── scoreboards/      # Multi-channel scoreboard examples
├── dut/                   # Verilog/SystemVerilog Design Under Test
│   └── protocols/        # Protocol DUT modules
│       └── axi4_lite_slave.v
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
│       └── test_complex_testbench_uvm.sv
└── README.md             # Module 6 documentation
```

### Quick Start

**Run all examples using the orchestrator script:**
```bash
# Run all SystemVerilog UVM examples
./scripts/module6.sh

# Run specific examples
./scripts/module6.sh --architecture
./scripts/module6.sh --multi-agent
./scripts/module6.sh --protocol
./scripts/module6.sh --protocol-checkers
./scripts/module6.sh --scoreboards

# Run tests
./scripts/module6.sh --uvm-tests

# Run everything
./scripts/module6.sh --all-examples --uvm-tests

# Performance options
./scripts/module6.sh --jobs 12        # Use 12 parallel jobs
./scripts/module6.sh --no-clean       # Skip clean builds for faster iteration
```

**Run examples individually:**
```bash
# Compile and run SystemVerilog UVM examples
cd module6/examples/architecture
verilator -sv --cc --exe --timing --trace architecture.sv architecture.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" --top-module architecture
make -C obj_dir -f Varchitecture.mk
./obj_dir/Varchitecture

# Run UVM tests
cd module6/tests/uvm_tests
make SIM=verilator TEST=test_complex_testbench_uvm
```

## Topics Covered

### 1. Testbench Architecture

- **Hierarchical Component Organization**
  - Component hierarchy design
  - Separation of concerns
  - Component relationships
  - Environment structure

- **Component Integration**
  - Agent construction
  - Environment assembly
  - Component connections
  - Phase-based execution

- **Best Practices**
  - Clean component hierarchy
  - Reusable components
  - Configuration management
  - Maintainable testbench structure

#### Example 6.1: Testbench Architecture (`module6/examples/architecture/architecture.sv`)

**What it demonstrates:**
- **Transaction Class (`ArchTxn`)**: Base transaction with address, data, and write/read control
- **Sequencer (`ArchSequencer`)**: UVM sequencer for transaction flow control
- **Driver (`ArchDriver`)**: UVM driver that receives and drives transactions
- **Monitor (`ArchMonitor`)**: UVM monitor that observes DUT behavior
- **Agent (`ArchAgent`)**: UVM agent containing sequencer, driver, and monitor
- **Environment (`ArchEnv`)**: UVM environment containing agent instances
- **Sequence (`ArchSmokeSeq`)**: UVM sequence generating random transactions
- **Test (`ArchitectureTest`)**: Top-level UVM test orchestrating verification

**Key Concepts:**
- Hierarchical component organization enables maintainable testbenches
- Separation of concerns (driver, monitor, sequencer) improves reusability
- Component factory and configuration provide flexibility
- Phase-based execution model ensures proper initialization and execution
- Transaction-based communication decouples components

**Execution:**
```bash
# Using orchestrator script (recommended)
./scripts/module6.sh --architecture

# Or compile directly with Verilator
cd module6/examples/architecture
verilator -sv --cc --exe --timing --trace architecture.sv architecture.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" --top-module architecture
make -C obj_dir -f Varchitecture.mk
./obj_dir/Varchitecture
```

**Verified Output:**
- UVM component hierarchy construction
- Transaction generation and driving
- Component phase execution
- UVM report summary with component counts

**Key Concepts:**
- **Component Hierarchy**: Agent → Sequencer/Driver/Monitor structure
- **Factory Pattern**: Using `type_id::create()` for component creation
- **Phase Execution**: Build, connect, run, check, report phases
- **Transaction Flow**: Sequence → Sequencer → Driver → DUT

### 2. Multi-Agent Environments

- **Multiple Agent Coordination**
  - Multiple agent instantiation
  - Agent configuration
  - Agent communication
  - Cross-agent stimulus

- **Virtual Sequences**
  - Virtual sequence definition
  - Multi-sequencer coordination
  - Parallel sequence execution
  - Sequence synchronization

- **Agent Reuse**
  - Parameterized agents
  - Agent configuration database
  - Reusable agent patterns
  - Agent instantiation patterns

#### Example 6.2: Multi-Agent Environment (`module6/examples/multi_agent/multi_agent.sv`)

**What it demonstrates:**
- **Transaction (`MA_Txn`)**: Transaction with agent ID and data fields
- **Agent (`MA_Agent`)**: Parameterized agent with configurable agent ID
- **Virtual Sequence (`MA_VirtualSeq`)**: Coordinates sequences across multiple sequencers
- **Environment (`MA_Env`)**: Contains two agent instances (a0 and a1)
- **Test (`MultiAgentTest`)**: Orchestrates multi-agent verification

**Key Concepts:**
- Multiple agents enable complex verification scenarios
- Virtual sequences coordinate stimulus across agents
- Agent configuration via config database provides flexibility
- Parallel sequence execution using fork-join enables concurrent testing
- Agent reuse patterns improve productivity

**Execution:**
```bash
./scripts/module6.sh --multi-agent
# or
cd module6/examples/multi_agent
verilator -sv --cc --exe --timing --trace multi_agent.sv multi_agent.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" --top-module multi_agent
make -C obj_dir -f Vmulti_agent.mk
./obj_dir/Vmulti_agent
```

**Verified Output:**
- Two agents running in parallel
- Virtual sequence coordinating both agents
- Agent-specific transaction generation
- Cross-agent stimulus coordination

**Key Concepts:**
- **Virtual Sequences**: Sequences that coordinate multiple sequencers
- **Agent Configuration**: Using `uvm_config_db` to configure agent parameters
- **Parallel Execution**: Fork-join for concurrent sequence execution
- **Agent Reuse**: Same agent class used for multiple instances

### 3. Protocol Verification

- **Protocol Modeling**
  - Interface definition
  - Protocol transaction modeling
  - Protocol signal mapping
  - Protocol timing

- **Protocol Sequences**
  - Protocol-aware sequences
  - Protocol transaction generation
  - Protocol sequence patterns
  - Protocol coverage

- **Protocol Drivers and Monitors**
  - Protocol driver implementation
  - Protocol monitor implementation
  - Handshake protocol handling
  - Protocol signal sampling

#### Example 6.3: Protocol Verification (`module6/examples/protocol/protocol.sv`)

**What it demonstrates:**
- **Interface (`axi_lite_if`)**: AXI4-Lite interface with all required signals
- **Transaction (`AxiTxn`)**: AXI transaction with read/write, address, and data
- **Driver (`AxiDriver`)**: Protocol-aware driver implementing AXI4-Lite handshake protocol
- **Monitor (`AxiMonitor`)**: Protocol monitor for observing AXI transactions
- **Environment (`ProtocolEnv`)**: Protocol verification environment
- **Test (`ProtocolTest`)**: Protocol verification test with AXI4-Lite slave DUT

**Key Concepts:**
- Protocol-shaped driver/monitor scaffolding enables protocol verification
- Handshake protocol implementation (VALID/READY) is fundamental
- Interface-based communication provides structured protocol access
- Protocol transaction modeling captures protocol semantics
- Clock-synchronized protocol operations ensure correct timing

**Note**: This is a **teaching scaffold**, not a full AXI4-Lite compliance VIP.

**Execution:**
```bash
./scripts/module6.sh --protocol
# or
cd module6/examples/protocol
verilator -sv --cc --exe --timing --trace protocol.sv protocol.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" ../dut/protocols/axi4_lite_slave.v --top-module protocol
make -C obj_dir -f Vprotocol.mk
./obj_dir/Vprotocol
```

**Verified Output:**
- AXI4-Lite write and read transactions
- Handshake protocol demonstration
- Protocol driver and monitor operation
- DUT interaction with protocol interface

**Key Concepts:**
- **Protocol Interfaces**: Structured interface definition for protocol signals
- **Handshake Protocol**: VALID/READY handshake for flow control
- **Protocol Drivers**: Clock-synchronized protocol signal driving
- **Protocol Monitors**: Protocol signal observation and transaction reconstruction

### 4. Protocol Checkers

- **Protocol Rule Checking**
  - Protocol rule definition
  - Assertion-like checking
  - Bounded wait checking
  - Protocol compliance verification

- **Error Detection**
  - Protocol violation detection
  - Error reporting
  - Protocol timing checks
  - Protocol state checking

- **Checker Implementation**
  - UVM checker components
  - Interface monitoring
  - Rule enforcement
  - Compliance reporting

#### Example 6.4: Protocol Checkers (`module6/examples/protocol_checkers/protocol_checkers.sv`)

**What it demonstrates:**
- **Interface (`chk_if`)**: Simple handshake interface with valid/ready signals
- **Checker Component (`CheckerComp`)**: UVM component that monitors protocol rules
- **Protocol Rules**: Valid must stay asserted until ready (bounded wait)
- **Test (`ProtocolCheckersTest`)**: Test that exercises protocol checker

**Key Concepts:**
- Protocol rule checking ensures protocol compliance
- Assertion-like patterns in UVM provide structured checking
- Bounded wait checking prevents protocol violations
- Protocol compliance verification catches design errors
- Error detection and reporting enable debugging

**Execution:**
```bash
./scripts/module6.sh --protocol-checkers
# or
cd module6/examples/protocol_checkers
verilator -sv --cc --exe --timing --trace protocol_checkers.sv protocol_checkers.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" --top-module protocol_checkers
make -C obj_dir -f Vprotocol_checkers.mk
./obj_dir/Vprotocol_checkers
```

**Verified Output:**
- Protocol handshake monitoring
- Rule violation detection (if any)
- Bounded wait checking
- Protocol compliance reporting

**Key Concepts:**
- **Protocol Checkers**: UVM components that monitor protocol rules
- **Bounded Wait**: Checking that protocol signals don't wait indefinitely
- **Rule Enforcement**: Detecting and reporting protocol violations
- **Compliance Verification**: Ensuring design follows protocol specification

### 5. Multi-Channel Scoreboards

- **Multi-Channel Scoreboarding**
  - Multiple stream handling
  - Transaction matching
  - Result aggregation
  - Scoreboard architecture

- **Transaction Matching**
  - Matching algorithms
  - Transaction comparison
  - Match criteria
  - Unmatched transaction handling

- **Result Aggregation**
  - Pass/fail counting
  - Result reporting
  - Statistics collection
  - Coverage tracking

#### Example 6.5: Multi-Channel Scoreboards (`module6/examples/scoreboards/scoreboards.sv`)

**What it demonstrates:**
- **Transaction (`SB_Txn`)**: Scoreboard transaction with stream ID, sequence number, and data
- **Stream Producer (`StreamProducer`)**: Component that generates transactions for a stream
- **Multi-Channel Scoreboard (`MultiChannelScoreboard`)**: Scoreboard that matches transactions from multiple streams
- **Test (`ScoreboardsTest`)**: Test with two stream producers and a scoreboard

**Key Concepts:**
- Multi-channel scoreboarding enables complex verification scenarios
- Transaction matching across streams verifies data integrity
- Result aggregation provides overall test status
- Scoreboard architecture supports multiple verification paths
- Stream-based verification enables parallel checking

**Execution:**
```bash
./scripts/module6.sh --scoreboards
# or
cd module6/examples/scoreboards
verilator -sv --cc --exe --timing --trace scoreboards.sv scoreboards.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" --top-module scoreboards
make -C obj_dir -f Vscoreboards.mk
./obj_dir/Vscoreboards
```

**Verified Output:**
- Two stream producers generating transactions
- Scoreboard matching transactions from both streams
- Pass/fail reporting
- Transaction matching results

**Key Concepts:**
- **Multi-Channel Scoreboards**: Scoreboards that handle multiple transaction streams
- **Transaction Matching**: Matching transactions based on sequence numbers or other criteria
- **Result Aggregation**: Collecting and reporting overall test results
- **Stream-Based Verification**: Verifying data integrity across multiple paths

## Learning Outcomes

By the end of this module, you should be able to:

- Design complex testbench architectures with hierarchical component organization
- Coordinate multiple agents using virtual sequences
- Verify protocols using protocol-shaped drivers and monitors
- Implement protocol checkers for compliance verification
- Build multi-channel scoreboards for transaction matching
- Apply production-quality testbench patterns
- Create reusable verification components
- Structure testbenches for maintainability and scalability

## Exercises

1. **Testbench Architecture**
   - Design a hierarchical testbench with multiple agents
   - Implement component separation of concerns
   - Create reusable agent and environment patterns
   - Structure testbench for maintainability

2. **Multi-Agent Coordination**
   - Create multiple agent instances
   - Implement virtual sequences for cross-agent coordination
   - Configure agents using config database
   - Test parallel agent execution

3. **Protocol Verification**
   - Model a protocol interface
   - Implement protocol-aware driver
   - Implement protocol monitor
   - Create protocol sequences

4. **Protocol Checkers**
   - Implement protocol rule checking
   - Create bounded wait checkers
   - Detect protocol violations
   - Report compliance status

5. **Multi-Channel Scoreboards**
   - Implement multi-channel scoreboard
   - Create transaction matching logic
   - Aggregate results from multiple streams
   - Report overall test status

## Execution Status

✅ **Module 6 has been successfully executed and verified.**

**Verification Date:** 2026-01-24  
**Status:** All examples and tests passing  
**Verilator Version:** 5.045  
**UVM Library:** UVM 2017 (1800.2-2017-1.0)  
**Test Results:**
- ✅ 5 SystemVerilog UVM examples executed successfully
- ✅ 1 UVM test compiled and passed
- ⏱️ Total execution time: ~39 minutes (UVM compilation takes significant time due to template instantiations)

**Examples Executed:**
1. ✅ Architecture - Hierarchical UVM environment demonstrated
2. ✅ Multi-Agent - Two-agent coordination with virtual sequences
3. ✅ Protocol - AXI4-Lite protocol verification scaffold
4. ✅ Protocol Checkers - Handshake rule checking demonstrated
5. ✅ Scoreboards - Multi-channel scoreboarding with transaction matching

**Note:** UVM builds under Verilator can be heavy; use `--jobs` and consider `--no-clean` for iteration. The protocol examples are **teaching scaffolds**, not full compliance VIP.

**Execution Logs:** Full execution logs are available in `module6/module6.log` and individual example logs in each example directory (`compile.log`, `run.log`).

## Assessment

- [x] Can design complex testbench architectures
- [x] Can coordinate multiple agents
- [x] Can verify protocols
- [x] Can implement protocol checkers
- [x] Can build multi-channel scoreboards
- [x] Can apply production-quality testbench patterns
- [x] Can create reusable verification components
- [x] Understands testbench organization and maintainability

## Next Steps

After completing this module, proceed to [Module 7: Real-World Applications](MODULE7.md) for practical applications and case studies.

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **UVM User's Guide**: Accellera Systems Initiative
- **AXI4 Protocol Specification**: ARM AMBA 4 AXI4 Protocol Specification
- **Verilator Documentation**: https://verilator.org/
- **Verification Academy**: https://verificationacademy.com/
