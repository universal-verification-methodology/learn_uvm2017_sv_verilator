# Module 4: UVM Components

**Duration**: 3 weeks  
**Complexity**: Intermediate-Advanced  
**Goal**: Build complete UVM agents with driver, monitor, and sequencer

## Overview

This module covers the core UVM components used to build verification environments. You'll learn how to create agents, drivers, monitors, sequencers, and sequences to build complete verification environments.

### Examples and Code Structure

```
module4/
├── examples/              # SystemVerilog UVM examples
│   ├── drivers/          # Driver implementation examples
│   ├── monitors/         # Monitor implementation examples
│   ├── sequencers/       # Sequencer and sequence examples
│   ├── tlm/              # TLM communication examples
│   ├── scoreboards/      # Scoreboard examples
│   ├── transactions/     # Transaction modeling examples
│   └── agents/           # Complete agent examples
├── dut/                   # Verilog/SystemVerilog Design Under Test
│   └── interfaces/       # Interface modules for testing
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
└── README.md             # Module 4 documentation
```

## Topics Covered

### 1. UVM Agent Architecture
- Agent overview and structure
- Active vs passive agents
- Agent components

### 2. UVM Driver Implementation
- Driver purpose and responsibilities
- Driver implementation
- Driver-sequencer communication
- Signal driving patterns

### 3. UVM Monitor Implementation
- Monitor purpose and responsibilities
- Monitor implementation
- Signal sampling
- Transaction creation

### 4. UVM Sequencer and Sequences
- Sequencer implementation
- Sequence items (`uvm_sequence_item`)
- Sequences (`uvm_sequence`)
- Sequence execution
- Sequence libraries

### 5. TLM (Transaction-Level Modeling)
- TLM interfaces (put, get, peek, transport)
- TLM ports and exports
- TLM FIFOs
- Analysis ports and exports
- TLM connections

### 6. Scoreboards
- Scoreboard purpose
- Scoreboard implementation
- Transaction comparison
- Result checking

### 7. Complete Agent Example
- Building complete agents
- Agent integration
- Agent configuration
- Agent testing

**Note**: Some TLM features may have limited Verilator support. See documentation for workarounds.

## Learning Outcomes

- Build complete UVM agents
- Implement drivers, monitors, and sequencers
- Use TLM for component communication
- Create scoreboards for result checking
- Integrate components into testbenches

## Next Steps

Proceed to [Module 5: Advanced UVM Concepts](MODULE5.md) for advanced UVM features.
