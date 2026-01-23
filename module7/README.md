# Module 7: Real-World Applications

This module applies UVM patterns to more “real-world” scenarios: **DMA**, **UART**, protocol-style scaffolds (SPI/I2C stubs), VIP packaging, and best practices.

## Directory Structure

```
module7/
├── examples/
│   ├── dma/
│   │   ├── dma.sv
│   │   └── dma.cpp
│   ├── protocols/
│   │   ├── uart_example.sv
│   │   ├── uart_example.cpp
│   │   ├── spi_example.sv
│   │   ├── spi_example.cpp
│   │   ├── i2c_example.sv
│   │   └── i2c_example.cpp
│   ├── vip/
│   │   ├── vip.sv
│   │   └── vip.cpp
│   └── best_practices/
│       ├── best_practices.sv
│       └── best_practices.cpp
├── dut/
│   ├── dma/
│   │   └── simple_dma.v
│   └── protocols/
│       └── uart.v
└── tests/
    └── uvm_tests/
        ├── test_real_world_uvm.sv
        └── Makefile
```

## Notes on Protocol Examples

- UART has a DUT (`dut/protocols/uart.v`) and the example uses a **loopback** (`rx = tx`) for a minimal smoke.
- SPI and I2C examples are currently **UVM scaffolds only** in the SV/Verilator track (no DUT in this repo yet), mirroring the “real-world patterns” intent without overbuilding.

## Running

```bash
./scripts/module7.sh
./scripts/module7.sh --dma
./scripts/module7.sh --protocols
./scripts/module7.sh --uvm-tests
```

Or run the test directly:

```bash
cd module7/tests/uvm_tests
make SIM=verilator TEST=test_real_world_uvm
```

