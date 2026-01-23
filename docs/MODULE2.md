# Module 2: SystemVerilog Testbench Fundamentals

**Duration**: 2 weeks  
**Complexity**: Beginner-Intermediate  
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

**Key Concepts:**
- Clocks are fundamental to synchronous designs
- Parameterized clocks enable flexibility
- Multiple clocks require careful synchronization
- Clock gating is common in low-power designs

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

**Key Concepts:**
- Reset is critical for proper design initialization
- Synchronous vs asynchronous reset have different timing
- Reset sequences must follow design requirements
- Reset verification ensures proper operation

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

**Key Concepts:**
- Signal access is fundamental to testbench operation
- Proper timing is essential for signal driving
- Signal monitoring enables response checking
- Different signal types require different handling

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

**Key Concepts:**
- Events enable synchronization between processes
- Timing control is essential for proper testbench operation
- Wait statements enable condition-based synchronization
- Fork-join enables parallel execution

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

**Key Concepts:**
- Structured testbenches are easier to maintain
- Reusable components improve productivity
- Common patterns enable code reuse
- Patterns prepare for UVM methodology

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

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **SystemVerilog for Verification**: Chris Spear and Greg Tumbush
- **Verification Academy**: https://verificationacademy.com/
