# Module 6: Complex Testbenches

This directory contains all examples, exercises, and test cases for Module 6, focusing on building production-quality multi-agent UVM environments, protocol-oriented verification scaffolds, protocol checkers, and multi-channel scoreboarding.

## Directory Structure

```
module6/
├── examples/              # SystemVerilog UVM examples
│   ├── architecture/     # Testbench architecture examples
│   │   ├── architecture.sv
│   │   └── architecture.cpp
│   ├── multi_agent/      # Multi-agent environment examples
│   │   ├── multi_agent.sv
│   │   └── multi_agent.cpp
│   ├── protocol/         # Protocol verification examples
│   │   ├── protocol.sv
│   │   └── protocol.cpp
│   ├── protocol_checkers/# Protocol checker examples
│   │   ├── protocol_checkers.sv
│   │   └── protocol_checkers.cpp
│   └── scoreboards/      # Multi-channel scoreboard examples
│       ├── scoreboards.sv
│       └── scoreboards.cpp
├── dut/                   # Verilog/SystemVerilog Design Under Test modules
│   └── protocols/        # Protocol DUT modules
│       └── axi4_lite_slave.v
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
│       ├── test_complex_testbench_uvm.sv
│       └── Makefile
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

## SystemVerilog UVM Examples

### 1. Testbench Architecture (`examples/architecture/architecture.sv`)

Demonstrates a structured, hierarchical UVM environment skeleton with clean component hierarchy and separation of concerns:

- **Transaction (`ArchTxn`)**: Base transaction class with address, data, and write/read control
- **Sequencer (`ArchSequencer`)**: UVM sequencer for transaction flow control
- **Driver (`ArchDriver`)**: UVM driver that receives transactions and drives them to DUT
- **Monitor (`ArchMonitor`)**: UVM monitor that observes DUT behavior and publishes transactions
- **Agent (`ArchAgent`)**: UVM agent containing sequencer, driver, and monitor
- **Environment (`ArchEnv`)**: UVM environment containing agent instances
- **Sequence (`ArchSmokeSeq`)**: UVM sequence that generates random transactions
- **Test (`ArchitectureTest`)**: Top-level UVM test that orchestrates the verification

**Key Concepts:**
- Hierarchical component organization
- Separation of concerns (driver, monitor, sequencer)
- Component factory and configuration
- Phase-based execution model
- Transaction-based communication

**Running the example:**

```bash
# Using orchestrator script
./scripts/module6.sh --architecture

# Or compile directly
cd module6/examples/architecture
verilator -sv --cc --exe --timing --trace architecture.sv architecture.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" --top-module architecture
make -C obj_dir -f Varchitecture.mk
./obj_dir/Varchitecture
```

**Expected Output:**
- UVM component hierarchy construction
- Transaction generation and driving
- Component phase execution
- UVM report summary

### 2. Multi-Agent Environment (`examples/multi_agent/multi_agent.sv`)

Demonstrates coordinating two independent agents from a single test using virtual sequences:

- **Transaction (`MA_Txn`)**: Transaction with agent ID and data fields
- **Agent (`MA_Agent`)**: Parameterized agent with configurable agent ID
- **Virtual Sequence (`MA_VirtualSeq`)**: Coordinates sequences across multiple sequencers
- **Environment (`MA_Env`)**: Contains two agent instances (a0 and a1)
- **Test (`MultiAgentTest`)**: Orchestrates multi-agent verification

**Key Concepts:**
- Multiple agent coordination
- Virtual sequences for cross-agent stimulus
- Agent configuration via config database
- Parallel sequence execution using fork-join
- Agent reuse patterns

**Running the example:**

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

**Expected Output:**
- Two agents running in parallel
- Virtual sequence coordinating both agents
- Agent-specific transaction generation
- Cross-agent stimulus coordination

### 3. Protocol Verification (`examples/protocol/protocol.sv`)

Demonstrates a minimal driver/monitor skeleton for protocol-like interfaces (AXI4-Lite-lite handshake demo):

- **Interface (`axi_lite_if`)**: AXI4-Lite interface with all required signals
- **Transaction (`AxiTxn`)**: AXI transaction with read/write, address, and data
- **Driver (`AxiDriver`)**: Protocol-aware driver implementing AXI4-Lite handshake protocol
- **Monitor (`AxiMonitor`)**: Protocol monitor for observing AXI transactions
- **Environment (`ProtocolEnv`)**: Protocol verification environment
- **Test (`ProtocolTest`)**: Protocol verification test

**Key Concepts:**
- Protocol-shaped driver/monitor scaffolding
- Handshake protocol implementation (VALID/READY)
- Interface-based communication
- Protocol transaction modeling
- Clock-synchronized protocol operations

**Note**: This is a **teaching scaffold**, not a full AXI4-Lite compliance VIP.

**Running the example:**

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

**Expected Output:**
- AXI4-Lite write and read transactions
- Handshake protocol demonstration
- Protocol driver and monitor operation
- DUT interaction with protocol interface

### 4. Protocol Checkers (`examples/protocol_checkers/protocol_checkers.sv`)

Demonstrates simple assertion-style checking for handshake behavior:

- **Interface (`chk_if`)**: Simple handshake interface with valid/ready signals
- **Checker Component (`CheckerComp`)**: UVM component that monitors protocol rules
- **Protocol Rules**: Valid must stay asserted until ready (bounded wait)
- **Test (`ProtocolCheckersTest`)**: Test that exercises protocol checker

**Key Concepts:**
- Protocol rule checking
- Assertion-like patterns in UVM
- Bounded wait checking
- Protocol compliance verification
- Error detection and reporting

**Running the example:**

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

**Expected Output:**
- Protocol handshake monitoring
- Rule violation detection (if any)
- Bounded wait checking
- Protocol compliance reporting

### 5. Multi-Channel Scoreboards (`examples/scoreboards/scoreboards.sv`)

Demonstrates matching and aggregating transactions from multiple streams:

- **Transaction (`SB_Txn`)**: Scoreboard transaction with stream ID, sequence number, and data
- **Stream Producer (`StreamProducer`)**: Component that generates transactions for a stream
- **Multi-Channel Scoreboard (`MultiChannelScoreboard`)**: Scoreboard that matches transactions from multiple streams
- **Test (`ScoreboardsTest`)**: Test with two stream producers and a scoreboard

**Key Concepts:**
- Multi-channel scoreboarding
- Transaction matching across streams
- Result aggregation
- Scoreboard architecture
- Stream-based verification

**Running the example:**

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

**Expected Output:**
- Two stream producers generating transactions
- Scoreboard matching transactions from both streams
- Pass/fail reporting
- Transaction matching results

## Design Under Test (DUT)

### AXI4-Lite Slave (`dut/protocols/axi4_lite_slave.v`)

A simplified AXI4-Lite slave for protocol verification. This is a teaching scaffold, not a full AXI4-Lite compliance implementation.

**Module Interface:**
```systemverilog
module axi4_lite_slave (
    input  wire        ACLK,      // Clock signal
    input  wire        ARESETn,   // Active-low reset
    
    // Write Address Channel
    input  wire        AWVALID,   // Write address valid
    output reg         AWREADY,   // Write address ready
    input  wire [31:0] AWADDR,    // Write address
    input  wire [2:0]  AWPROT,    // Write protection type
    
    // Write Data Channel
    input  wire        WVALID,    // Write data valid
    output reg         WREADY,    // Write data ready
    input  wire [31:0] WDATA,     // Write data
    input  wire [3:0]  WSTRB,     // Write strobe
    
    // Write Response Channel
    output reg         BVALID,    // Write response valid
    input  wire        BREADY,    // Write response ready
    output reg  [1:0]  BRESP,     // Write response
    
    // Read Address Channel
    input  wire        ARVALID,   // Read address valid
    output reg         ARREADY,   // Read address ready
    input  wire [31:0] ARADDR,    // Read address
    input  wire [2:0]  ARPROT,    // Read protection type
    
    // Read Data Channel
    output reg         RVALID,    // Read data valid
    input  wire        RREADY,    // Read data ready
    output reg  [31:0] RDATA,     // Read data
    output reg  [1:0]  RRESP      // Read response
);
```

**Functionality:**
- Implements AXI4-Lite write and read channels
- Handles handshake protocol (VALID/READY)
- Simple memory-mapped register storage
- Supports write and read operations
- Provides response codes (OKAY response)

**Characteristics:**
- Simplified AXI4-Lite implementation
- Teaching scaffold for protocol verification
- Demonstrates handshake protocol
- Memory-mapped register interface

## Testbenches

### UVM Tests (`tests/uvm_tests/`)

#### Complex Testbench UVM Test (`test_complex_testbench_uvm.sv`)

UVM-style testbench demonstrating a complete complex testbench with AXI4-Lite protocol verification:

**UVM Components:**

1. **Interface (`axi_lite_if`)**
   - AXI4-Lite interface with all required signals
   - Clock and reset signals
   - Write and read channel signals

2. **Transaction (`AxiTxn`)**
   - Extends `uvm_sequence_item`
   - Contains read/write control, address, and data

3. **Sequence (`AxiSeq`)**
   - Extends `uvm_sequence`
   - Generates deterministic write and read transactions

4. **Driver (`AxiDriver`)**
   - Extends `uvm_driver`
   - Implements AXI4-Lite write and read protocol
   - Handles handshake timing

5. **Environment (`AxiEnv`)**
   - Extends `uvm_env`
   - Contains sequencer and driver
   - Connects components

6. **Test (`AxiTest`)**
   - Extends `uvm_test`
   - Top-level test class
   - Instantiates DUT and environment

**UVM Phases:**
- `build_phase()` - Component construction
- `connect_phase()` - Component connections
- `run_phase()` - Test execution
- `check_phase()` - Result verification
- `report_phase()` - Final reporting

**Running the test:**

```bash
# Via module script
./scripts/module6.sh --uvm-tests

# Directly from test directory
cd module6/tests/uvm_tests
make SIM=verilator TEST=test_complex_testbench_uvm
```

**Note**: Verilator has limited UVM support. For full UVM features, use commercial simulators (VCS, Questa, Xcelium). UVM builds under Verilator can be heavy; use `--jobs` and consider `--no-clean` for iteration.

## Running Examples and Tests

### Using the Module Script

The `module6.sh` script provides a convenient way to run all examples and tests:

```bash
# Run everything (all examples + UVM tests)
./scripts/module6.sh

# Run only examples
./scripts/module6.sh --all-examples

# Run only UVM tests
./scripts/module6.sh --skip-examples --uvm-tests

# Run specific examples
./scripts/module6.sh --architecture
./scripts/module6.sh --multi-agent
./scripts/module6.sh --protocol
./scripts/module6.sh --protocol-checkers
./scripts/module6.sh --scoreboards

# Run specific test suites
./scripts/module6.sh --uvm-tests

# Combine options
./scripts/module6.sh --architecture --multi-agent --uvm-tests

# Performance options
./scripts/module6.sh --jobs 12        # Use 12 parallel jobs
./scripts/module6.sh --no-clean       # Skip clean builds for faster iteration
```

### Running Individual Examples

#### Direct SystemVerilog Execution

```bash
# Compile and run SystemVerilog examples
cd module6/examples/architecture
verilator -sv --cc --exe --timing --trace architecture.sv architecture.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" --top-module architecture
make -C obj_dir -f Varchitecture.mk
./obj_dir/Varchitecture

cd module6/examples/multi_agent
verilator -sv --cc --exe --timing --trace multi_agent.sv multi_agent.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" --top-module multi_agent
make -C obj_dir -f Vmulti_agent.mk
./obj_dir/Vmulti_agent
```

#### Running UVM Tests

```bash
# Change to test directory
cd module6/tests/uvm_tests

# Run UVM complex testbench test
make SIM=verilator TEST=test_complex_testbench_uvm

# For commercial simulators
make SIM=vcs TEST=test_complex_testbench_uvm
make SIM=questa TEST=test_complex_testbench_uvm

# Clean build artifacts
make clean
```

## Test Results

### Execution Status

✅ **All examples and tests have been successfully executed and verified.**

**Last Execution:** 2026-01-24 02:07:38  
**Verilator Version:** 5.045  
**UVM Library:** UVM 2017 (1800.2-2017-1.0)

**Execution Summary:**
- ✅ All 5 SystemVerilog UVM examples completed successfully
- ✅ UVM test compiled and passed
- ⏱️ Total execution time: ~39 minutes (UVM compilation takes significant time due to template instantiations)

**Examples Executed:**
1. ✅ Architecture - Hierarchical UVM environment demonstrated
2. ✅ Multi-Agent - Two-agent coordination with virtual sequences
3. ✅ Protocol - AXI4-Lite protocol verification scaffold
4. ✅ Protocol Checkers - Handshake rule checking demonstrated
5. ✅ Scoreboards - Multi-channel scoreboarding with transaction matching

**Tests Executed:**
- ✅ UVM Complex Testbench test - 1 UVM test passing

### SystemVerilog Example Output

When tests complete successfully, you should see:

```
============================================================
UVM Report Summary
============================================================

[ARCH_DRV]     1
[OBJTN_CLEAR]     1
[RNTST]     1
[UVM/COMP/NAME]    22
[UVM/COMP/NAMECHECK]     1
[UVM/RELNOTES]     1
```

### Test Counts

- **Architecture example**: Hierarchical UVM environment demonstrated ✅
- **Multi-Agent example**: Two-agent coordination demonstrated ✅
- **Protocol example**: AXI4-Lite protocol verification demonstrated ✅
- **Protocol Checkers example**: Handshake rule checking demonstrated ✅
- **Scoreboards example**: Multi-channel scoreboarding demonstrated ✅
- **UVM Complex Testbench test**: 1 UVM test ✅

### Generated Files

After execution, each example directory contains:
- `*.cpp` - C++ wrapper files generated by Verilator
- `*.vcd` - Waveform dump files (can be viewed with GTKWave)
- `compile.log` - Compilation log
- `run.log` - Execution output log
- `obj_dir/` - Verilator build directory

Full execution log is saved to `module6/module6.log`.

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

#### 4. Long Compilation Times

**Error:** UVM compilation takes a very long time

**Solution:** Use parallel builds and skip clean when iterating:

```bash
./scripts/module6.sh --jobs 12 --no-clean
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
   ls -la module6/tests/uvm_tests/obj_dir/
   ```

4. **View Detailed Logs:**
   ```bash
   # Check log files
   tail -f *.log
   ```

5. **Run Tests with Verbose Output:**
   ```bash
   make SIM=verilator TEST=test_complex_testbench_uvm V=1
   ```

6. **Use Incremental Builds:**
   ```bash
   # Skip clean for faster iteration
   ./scripts/module6.sh --no-clean
   ```

## Topics Covered

1. **Testbench Architecture** - Hierarchical component organization and separation of concerns
2. **Multi-Agent Environments** - Coordinating multiple agents and cross-agent stimulus
3. **Protocol Verification** - Protocol-shaped driver/monitor scaffolding (AXI4-Lite-lite)
4. **Protocol Checkers** - Simple handshake rule checking (assertion-like patterns)
5. **Multi-Channel Scoreboards** - Matching and aggregating transactions from multiple streams
6. **Virtual Sequences** - Coordinating sequences across multiple sequencers
7. **Component Reuse** - Reusable agent and environment patterns
8. **Protocol Modeling** - Interface-based protocol verification
9. **Transaction Matching** - Scoreboard-based result checking
10. **Production-Quality Testbenches** - Building complex, maintainable verification environments

## Next Steps

After completing Module 6, proceed to:

- **Module 7**: Real-World Applications - Practical applications and case studies
- **Module 8**: Advanced Topics - Advanced UVM features and techniques

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **UVM User's Guide**: Accellera Systems Initiative
- **AXI4 Protocol Specification**: ARM AMBA 4 AXI4 Protocol Specification
- **Verilator Documentation**: https://verilator.org/
- **Verification Academy**: https://verificationacademy.com/

## File Descriptions

### Examples

| File | Description |
|------|-------------|
| `architecture.sv` | Hierarchical UVM environment skeleton with clean component organization |
| `multi_agent.sv` | Multi-agent environment with virtual sequence coordination |
| `protocol.sv` | AXI4-Lite protocol verification scaffold (teaching example) |
| `protocol_checkers.sv` | Protocol checker with handshake rule checking |
| `scoreboards.sv` | Multi-channel scoreboard with transaction matching |

### DUT Modules

| File | Description | Ports |
|------|-------------|-------|
| `axi4_lite_slave.v` | Simplified AXI4-Lite slave (teaching scaffold) | AXI4-Lite interface signals (ACLK, ARESETn, AW*, W*, B*, AR*, R*) |

### Testbenches

| File | Framework | Description | Tests |
|------|-----------|-------------|-------|
| `test_complex_testbench_uvm.sv` | UVM | Complex testbench with AXI4-Lite protocol verification | 1 UVM test |

---

For questions or issues, refer to the main project README or check the test logs for detailed error messages.