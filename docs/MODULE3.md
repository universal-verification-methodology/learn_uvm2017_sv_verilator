# Module 3: UVM Basics

**Duration**: 2 weeks  
**Complexity**: Beginner-Intermediate  
**Goal**: Master UVM class hierarchy and phases

## Overview

This module introduces the Universal Verification Methodology (UVM) using SystemVerilog. You'll learn the fundamental UVM concepts, class hierarchy, phases, and how to structure UVM testbenches. This module establishes the foundation for all advanced UVM concepts.

### Examples and Code Structure

This module includes comprehensive examples and testbenches located in the `module3/` directory:

```
module3/
├── examples/              # SystemVerilog UVM examples
│   ├── class_hierarchy/   # UVM class hierarchy examples
│   ├── phases/           # UVM phases examples
│   ├── reporting/        # UVM reporting examples
│   ├── configdb/         # ConfigDB examples
│   ├── factory/          # Factory pattern examples
│   └── objections/       # Objection mechanism examples
├── dut/                   # Verilog/SystemVerilog Design Under Test
│   └── simple_blocks/     # Simple blocks for UVM testing
│       └── adder.v        # 8-bit adder
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
│       └── test_adder_uvm.sv
└── README.md             # Module 3 documentation
```

### Quick Start

**Run all examples using the orchestrator script:**
```bash
# Run all UVM examples
./scripts/module3.sh

# Run specific examples
./scripts/module3.sh --class-hierarchy
./scripts/module3.sh --phases
./scripts/module3.sh --reporting
./scripts/module3.sh --configdb
./scripts/module3.sh --factory
./scripts/module3.sh --objections

# Run tests
./scripts/module3.sh --uvm-tests

# Run everything
./scripts/module3.sh --all-examples --uvm-tests
```

**Run examples individually:**
```bash
# Compile and run UVM examples
cd module3/examples/class_hierarchy
verilator -sv --cc --exe --timing --trace \
    -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI \
    --binary $UVM_HOME/src/uvm_pkg.sv class_hierarchy.sv class_hierarchy.cpp \
    --top-module class_hierarchy
make -C obj_dir -f Vclass_hierarchy.mk
./obj_dir/Vclass_hierarchy

# Run UVM tests
cd module3/tests/uvm_tests
make SIM=verilator TEST=test_adder_uvm
```

## Topics Covered

### 1. Introduction to UVM

- **Universal Verification Methodology**
  - UVM standard (IEEE 1800.2-2017)
  - UVM class library
  - Methodology benefits
  - Industry adoption

- **UVM Benefits**
  - Reusability
  - Standardization
  - Scalability
  - Maintainability

#### Example 3.1: Class Hierarchy (`module3/examples/class_hierarchy/class_hierarchy.sv`)

**What it demonstrates:**
- **Transaction Class (`MyTransaction`)**: Extends `uvm_sequence_item` (uvm_object hierarchy)
- **Driver Class (`MyDriver`)**: Extends `uvm_driver` (uvm_component hierarchy)
- **Monitor Class (`MyMonitor`)**: Extends `uvm_monitor` (uvm_component hierarchy)
- **Agent Class (`MyAgent`)**: Extends `uvm_agent`, demonstrates component composition
- **Environment Class (`MyEnv`)**: Extends `uvm_env`, top-level verification environment
- **Test Class (`ClassHierarchyTest`)**: Extends `uvm_test`, orchestrates test execution

**Key Concepts:**
- `uvm_object` - Base class for all UVM objects (transactions, sequences)
- `uvm_component` - Base class for all UVM components (drivers, monitors, agents)
- Component hierarchy: Test → Environment → Agent → Driver/Monitor
- Component creation using factory pattern

**Execution:**
```bash
# Using orchestrator script (recommended)
./scripts/module3.sh --class-hierarchy

# Or compile directly with Verilator
cd module3/examples/class_hierarchy
verilator -sv --cc --exe --timing --trace \
    -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI \
    --binary $UVM_HOME/src/uvm_pkg.sv class_hierarchy.sv class_hierarchy.cpp \
    --top-module class_hierarchy
make -C obj_dir -f Vclass_hierarchy.mk
./obj_dir/Vclass_hierarchy
```

**Verified Output:**
- Component hierarchy construction
- Phase execution demonstration
- Component creation and connection
- UVM report summary

### 2. UVM Class Hierarchy

- **Object vs Component**
  - `uvm_object` - Base for transactions, sequences
  - `uvm_component` - Base for testbench components
  - Lifetime differences
  - Hierarchy differences

- **Component Classes**
  - `uvm_test` - Top-level test class
  - `uvm_env` - Verification environment
  - `uvm_agent` - Agent containing driver, monitor, sequencer
  - `uvm_driver` - Drives transactions to DUT
  - `uvm_monitor` - Observes DUT behavior
  - `uvm_sequencer` - Manages sequence execution

- **Object Classes**
  - `uvm_sequence_item` - Base transaction class
  - `uvm_sequence` - Sequence of transactions
  - Class relationships and inheritance

### 3. UVM Phases

- **Build-Time Phases (Top-down)**
  - `build_phase()` - Component construction
  - `connect_phase()` - Component connections
  - `end_of_elaboration_phase()` - Final setup
  - `start_of_simulation_phase()` - Simulation start

- **Run-Time Phases (Bottom-up)**
  - `pre_reset_phase()`, `reset_phase()`, `post_reset_phase()`
  - `pre_configure_phase()`, `configure_phase()`, `post_configure_phase()`
  - `pre_main_phase()`, `main_phase()`, `post_main_phase()`
  - `pre_shutdown_phase()`, `shutdown_phase()`, `post_shutdown_phase()`

- **Cleanup Phases (Bottom-up)**
  - `extract_phase()` - Extract results
  - `check_phase()` - Final checks
  - `report_phase()` - Generate reports
  - `final_phase()` - Final cleanup

#### Example 3.2: Phases (`module3/examples/phases/phases.sv`)

**What it demonstrates:**
- **Build-Time Phases**: Top-down execution (parent before child)
- **Run-Time Phases**: Bottom-up execution (child before parent)
- **Cleanup Phases**: Bottom-up execution (child before parent)
- **Phase Execution Order**: Demonstrates all UVM phases

**Key Concepts:**
- Build-time phases execute top-down (parent before child)
- Run-time phases execute bottom-up (child before parent)
- Cleanup phases execute bottom-up (child before parent)
- Phases enable structured testbench execution

**Execution:**
```bash
./scripts/module3.sh --phases
```

**Verified Output:**
- All build-time phases executed in order
- All run-time phases executed in order
- All cleanup phases executed in order
- Phase execution logging

### 4. UVM Reporting

- **UVM Messaging System**
  - Severity levels: FATAL, ERROR, WARNING, INFO, DEBUG
  - Verbosity levels: UVM_LOW, UVM_MEDIUM, UVM_HIGH, UVM_FULL, UVM_DEBUG
  - Message formatting
  - Hierarchical reporting

#### Example 3.3: Reporting (`module3/examples/reporting/reporting.sv`)

**What it demonstrates:**
- **Severity Levels**: INFO, WARNING, ERROR, FATAL
- **Verbosity Levels**: UVM_LOW, UVM_MEDIUM, UVM_HIGH, UVM_FULL, UVM_DEBUG
- **Message Formatting**: Formatted messages with data values
- **Hierarchical Reporting**: Component context in messages

**Key Concepts:**
- Severity indicates message importance
- Verbosity controls message visibility
- Messages include component hierarchy context
- Reporting enables debugging and monitoring

**Execution:**
```bash
./scripts/module3.sh --reporting
```

**Verified Output:**
- Different severity levels demonstrated
- Verbosity control demonstrated
- Formatted messages with data
- Hierarchical message context

### 5. ConfigDB

- **Configuration Database Basics**
  - Setting configuration
  - Getting configuration
  - Configuration hierarchy
  - Configuration objects

#### Example 3.4: ConfigDB (`module3/examples/configdb/configdb.sv`)

**What it demonstrates:**
- **Setting Configuration**: Global and component-specific
- **Getting Configuration**: Hierarchical lookup
- **Configuration Objects**: Complex configuration data
- **Scalar Values**: Simple configuration values

**Key Concepts:**
- ConfigDB enables flexible test configuration
- Configuration can be set globally or per-component
- Components look up configuration in `build_phase()`
- Hierarchical paths enable component-specific config

**Execution:**
```bash
./scripts/module3.sh --configdb
```

**Verified Output:**
- Configuration setting and getting
- Hierarchical configuration lookup
- Component-specific configuration
- Configuration object usage

### 6. Factory Pattern

- **Factory Pattern Basics**
  - Factory registration
  - Factory creation
  - Type override
  - Instance override

#### Example 3.5: Factory (`module3/examples/factory/factory.sv`)

**What it demonstrates:**
- **Factory Registration**: Automatic registration via `uvm_object_utils`
- **Factory Creation**: Using `type_id::create()`
- **Type Override**: Substituting base class with extended class
- **Instance Override**: Overriding specific instances

**Key Concepts:**
- Factory enables centralized object creation
- Type override affects all instances
- Instance override affects specific instances
- Overrides enable test customization

**Execution:**
```bash
./scripts/module3.sh --factory
```

**Verified Output:**
- Factory creation demonstrated
- Type override demonstrated
- Instance override demonstrated
- Override effects verified

### 7. Objections

- **Objection Mechanism**
  - Raising objections
  - Dropping objections
  - Phase completion
  - Simulation control

#### Example 3.6: Objections (`module3/examples/objections/objections.sv`)

**What it demonstrates:**
- **Raising Objections**: Keep simulation running
- **Dropping Objections**: Allow phase completion
- **Multiple Objections**: Per-component objection tracking
- **Coordinated Completion**: Phase completes when all objections dropped

**Key Concepts:**
- Raise objection to keep phase running
- Drop objection when work completes
- Phase completes when all objections dropped
- Multiple objections per component supported

**Execution:**
```bash
./scripts/module3.sh --objections
```

**Verified Output:**
- Objection raising and dropping
- Phase completion control
- Multiple objection handling
- Coordinated phase completion

**Note**: Verilator has limited support for some UVM features. See [SYSTEMVERILOG_VERILATOR_INTERACTION.md](SYSTEMVERILOG_VERILATOR_INTERACTION.md) for details and workarounds.

## Learning Outcomes

By the end of this module, you should be able to:

- Understand UVM class hierarchy (uvm_object vs uvm_component)
- Master UVM phases (build-time, run-time, cleanup)
- Use UVM reporting effectively (severity, verbosity, formatting)
- Configure components using ConfigDB
- Understand factory pattern (registration, creation, overrides)
- Control simulation with objections
- Structure UVM testbenches properly

## Exercises

1. **Class Hierarchy**
   - Create transaction classes extending uvm_sequence_item
   - Create component classes extending uvm_component
   - Build component hierarchy
   - Test component creation

2. **Phases**
   - Implement all build-time phases
   - Implement run-time phases
   - Implement cleanup phases
   - Verify phase execution order

3. **Reporting**
   - Use different severity levels
   - Control verbosity
   - Format messages with data
   - Test hierarchical reporting

4. **ConfigDB**
   - Set global configuration
   - Set component-specific configuration
   - Get configuration in components
   - Use configuration objects

5. **Factory**
   - Register classes with factory
   - Create objects using factory
   - Implement type overrides
   - Implement instance overrides

6. **Objections**
   - Raise objections in run_phase
   - Drop objections when work completes
   - Test multiple objections
   - Verify phase completion

## Execution Status

✅ **Module 3 has been successfully executed and verified.**

**Verification Date:** 2026-01-24  
**Status:** All examples and tests passing  
**Verilator Version:** 5.045  
**UVM Library:** UVM 2017 (1800.2-2017-1.0)  
**Test Results:**
- ✅ 6 SystemVerilog UVM examples executed successfully
- ✅ 1 UVM test compiled and passed
- ⏱️ Total execution time: ~30 minutes (UVM compilation takes significant time due to template instantiations)

**Examples Executed:**
1. ✅ Class Hierarchy - UVM class hierarchy and component structure demonstrated
2. ✅ Phases - All UVM phases demonstrated (42 phase messages)
3. ✅ Reporting - UVM reporting system demonstrated (7 reporting messages)
4. ✅ ConfigDB - Configuration database demonstrated (10 config messages)
5. ✅ Factory - Factory pattern demonstrated (5 factory messages)
6. ✅ Objections - Objection mechanism demonstrated

**Note:** UVM compilation with Verilator takes approximately 20-30 minutes due to extensive template instantiations, but all tests execute successfully.

**Execution Logs:** Full execution logs are available in `module3/module3.log` and individual example logs in each example directory (`compile.log`, `run.log`).

## Assessment

- [x] Understands UVM class hierarchy
- [x] Masters UVM phases
- [x] Uses UVM reporting effectively
- [x] Configures components using ConfigDB
- [x] Understands factory pattern
- [x] Controls simulation with objections
- [x] Structures UVM testbenches properly

## Next Steps

After completing this module, proceed to [Module 4: UVM Components](MODULE4.md) to build complete UVM testbenches with detailed agent, driver, monitor, and sequencer implementation.

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **UVM User's Guide**: Accellera Systems Initiative
- **Verilator Documentation**: https://verilator.org/
- **Verification Academy**: https://verificationacademy.com/
