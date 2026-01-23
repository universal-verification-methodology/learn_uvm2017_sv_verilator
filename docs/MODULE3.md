# Module 3: UVM Basics

**Duration**: 2 weeks  
**Complexity**: Beginner-Intermediate  
**Goal**: Master UVM class hierarchy and phases

## Overview

This module introduces the Universal Verification Methodology (UVM) using SystemVerilog. You'll learn the fundamental UVM concepts, class hierarchy, phases, and how to structure UVM testbenches.

### Examples and Code Structure

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
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
└── README.md             # Module 3 documentation
```

## Topics Covered

### 1. Introduction to UVM
- Universal Verification Methodology
- IEEE 1800.2-2017 standard
- UVM class library
- Methodology benefits

### 2. UVM Class Hierarchy
- `uvm_object` vs `uvm_component`
- Component classes: `uvm_test`, `uvm_env`, `uvm_agent`, `uvm_driver`, `uvm_monitor`, `uvm_sequencer`
- Object classes: `uvm_sequence_item`, `uvm_sequence`
- Class relationships and inheritance

### 3. UVM Phases
- Build phases: `build_phase()`, `connect_phase()`, `end_of_elaboration_phase()`
- Run phases: All 12 run phases
- Cleanup phases: `extract_phase()`, `check_phase()`, `report_phase()`, `final_phase()`
- Phase synchronization and objections

### 4. UVM Reporting
- UVM messaging system
- Severity levels: FATAL, ERROR, WARNING, INFO, DEBUG
- Verbosity levels
- Message formatting

### 5. ConfigDB
- Configuration database basics
- Setting and getting configuration
- Configuration hierarchy
- Configuration objects

### 6. Factory Pattern
- Factory pattern basics
- Factory registration
- Factory creation
- Type override

### 7. Objections
- Objection mechanism
- Raising and dropping objections
- Phase completion
- Simulation control

**Note**: Verilator has limited support for some UVM features. See [SYSTEMVERILOG_VERILATOR_INTERACTION.md](SYSTEMVERILOG_VERILATOR_INTERACTION.md) for details and workarounds.

## Learning Outcomes

- Understand UVM class hierarchy
- Master UVM phases
- Use UVM reporting effectively
- Configure components using ConfigDB
- Understand factory pattern
- Control simulation with objections

## Next Steps

Proceed to [Module 4: UVM Components](MODULE4.md) to build complete UVM testbenches.
