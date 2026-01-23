# Module 6: Complex Testbenches

This module focuses on building **production-quality multi-agent UVM environments**, protocol-oriented verification scaffolds, protocol checkers, and multi-channel scoreboarding.

## Directory Structure

```
module6/
├── examples/
│   ├── architecture/
│   │   ├── architecture.sv
│   │   └── architecture.cpp
│   ├── multi_agent/
│   │   ├── multi_agent.sv
│   │   └── multi_agent.cpp
│   ├── protocol/
│   │   ├── protocol.sv
│   │   └── protocol.cpp
│   ├── protocol_checkers/
│   │   ├── protocol_checkers.sv
│   │   └── protocol_checkers.cpp
│   └── scoreboards/
│       ├── scoreboards.sv
│       └── scoreboards.cpp
├── dut/
│   └── protocols/
│       └── axi4_lite_slave.v
└── tests/
    └── uvm_tests/
        ├── test_complex_testbench_uvm.sv
        └── Makefile
```

## What You’ll Learn

- **Architecture**: clean component hierarchy and separation of concerns
- **Multi-agent**: coordinating two+ agents and cross-agent stimulus
- **Protocol verification**: protocol-shaped driver/monitor scaffolding (AXI4-Lite-lite)
- **Protocol checkers**: simple handshake rule checking (assertion-like patterns)
- **Multi-channel scoreboards**: matching and aggregating transactions from multiple streams

## Running

### Via script

```bash
./scripts/module6.sh
./scripts/module6.sh --protocol
./scripts/module6.sh --uvm-tests
```

### Direct (test)

```bash
cd module6/tests/uvm_tests
make SIM=verilator TEST=test_complex_testbench_uvm
```

## Notes

- The protocol examples are **teaching scaffolds**, not full compliance VIP.
- UVM builds under Verilator can be heavy; use `--jobs` and consider `--no-clean` for iteration.

