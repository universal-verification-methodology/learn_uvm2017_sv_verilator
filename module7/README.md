# Module 7: Real-World Applications

This directory contains all examples, exercises, and test cases for Module 7, focusing on applying UVM patterns to real-world verification scenarios including DMA verification, protocol verification (UART, SPI, I2C), VIP development, and best practices.

## Directory Structure

```
module7/
├── examples/              # SystemVerilog UVM examples
│   ├── dma/              # DMA verification examples
│   │   ├── dma.sv
│   │   └── dma.cpp
│   ├── protocols/        # Protocol verification (UART, SPI, I2C)
│   │   ├── uart_example.sv
│   │   ├── uart_example.cpp
│   │   ├── spi_example.sv
│   │   ├── spi_example.cpp
│   │   ├── i2c_example.sv
│   │   └── i2c_example.cpp
│   ├── vip/              # VIP development examples
│   │   ├── vip.sv
│   │   └── vip.cpp
│   └── best_practices/   # Best practices and patterns
│       ├── best_practices.sv
│       └── best_practices.cpp
├── dut/                   # Verilog/SystemVerilog Design Under Test modules
│   ├── dma/              # DMA modules
│   │   └── simple_dma.v
│   └── protocols/        # Protocol modules
│       └── uart.v
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
│       ├── test_real_world_uvm.sv
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

### 1. DMA Verification (`examples/dma/dma.sv`)

Demonstrates DMA controller verification using UVM patterns:

- **Interface (`dma_if`)**: DMA interface with start, done, addresses, length, and channel signals
- **Transaction (`DmaTxn`)**: DMA transaction with source address, destination address, length, and channel
- **Sequence (`DmaSeq`)**: DMA sequence generating random DMA transfers
- **Driver (`DmaDriver`)**: DMA driver implementing DMA protocol
- **Environment (`DmaEnv`)**: DMA verification environment
- **Test (`DmaTest`)**: DMA verification test with simple DMA DUT

**Key Concepts:**
- DMA transaction modeling
- DMA protocol implementation
- DMA sequence generation
- DMA result checking
- Real-world verification patterns

**Running the example:**

```bash
# Using orchestrator script
./scripts/module7.sh --dma

# Or compile directly
cd module7/examples/dma
verilator -sv --cc --exe --timing --trace dma.sv dma.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" ../dut/dma/simple_dma.v --top-module dma
make -C obj_dir -f Vdma.mk
./obj_dir/Vdma
```

**Expected Output:**
- DMA transaction generation
- DMA protocol execution
- DMA transfer completion
- UVM report summary

### 2. Protocol Verification - UART (`examples/protocols/uart_example.sv`)

Demonstrates UART protocol verification using UVM patterns:

- **Interface (`uart_if`)**: UART interface with TX/RX signals and control
- **Transaction (`UartTxn`)**: UART transaction with data field
- **Sequence (`UartSeq`)**: UART sequence generating random UART transfers
- **Driver (`UartDriver`)**: UART driver implementing UART protocol
- **Environment (`UartEnv`)**: UART verification environment
- **Test (`UartTest`)**: UART verification test with UART DUT

**Key Concepts:**
- UART protocol modeling
- Serial communication verification
- Protocol-specific patterns
- Loopback testing

**Note**: The example uses a **loopback** (`rx = tx`) for minimal smoke testing.

**Running the example:**

```bash
./scripts/module7.sh --protocols
# or
cd module7/examples/protocols
verilator -sv --cc --exe --timing --trace uart_example.sv uart_example.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" ../dut/protocols/uart.v --top-module uart_example
make -C obj_dir -f Vuart_example.mk
./obj_dir/Vuart_example
```

**Expected Output:**
- UART transaction generation
- UART protocol execution
- UART TX/RX operation
- Loopback verification

### 3. Protocol Verification - SPI (`examples/protocols/spi_example.sv`)

Demonstrates SPI protocol verification scaffold (UVM pattern only, no DUT):

- **Test (`SpiExampleTest`)**: SPI verification test scaffold
- **UVM Pattern**: Demonstrates UVM structure for SPI verification

**Key Concepts:**
- SPI protocol verification patterns
- UVM scaffold for protocol verification
- Protocol-specific testbench structure

**Note**: This is a **UVM scaffold only** - no SPI DUT is included in this repository yet. It demonstrates the "real-world patterns" intent without overbuilding.

**Running the example:**

```bash
./scripts/module7.sh --protocols
# or
cd module7/examples/protocols
verilator -sv --cc --exe --timing --trace spi_example.sv spi_example.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" --top-module spi_example
make -C obj_dir -f Vspi_example.mk
./obj_dir/Vspi_example
```

**Expected Output:**
- SPI UVM scaffold demonstration
- UVM test structure
- Protocol verification pattern

### 4. Protocol Verification - I2C (`examples/protocols/i2c_example.sv`)

Demonstrates I2C protocol verification scaffold (UVM pattern only, no DUT):

- **Test (`I2cExampleTest`)**: I2C verification test scaffold
- **UVM Pattern**: Demonstrates UVM structure for I2C verification

**Key Concepts:**
- I2C protocol verification patterns
- UVM scaffold for protocol verification
- Protocol-specific testbench structure

**Note**: This is a **UVM scaffold only** - no I2C DUT is included in this repository yet. It demonstrates the "real-world patterns" intent without overbuilding.

**Running the example:**

```bash
./scripts/module7.sh --protocols
# or
cd module7/examples/protocols
verilator -sv --cc --exe --timing --trace i2c_example.sv i2c_example.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" --top-module i2c_example
make -C obj_dir -f Vi2c_example.mk
./obj_dir/Vi2c_example
```

**Expected Output:**
- I2C UVM scaffold demonstration
- UVM test structure
- Protocol verification pattern

### 5. VIP Development (`examples/vip/vip.sv`)

Demonstrates how a protocol VIP might be packaged with transaction, sequence, and agent:

- **Transaction (`VipTxn`)**: VIP transaction with payload
- **Sequence (`VipSeq`)**: VIP sequence generating transactions
- **Driver (`VipDriver`)**: VIP driver
- **Agent (`VipAgent`)**: VIP agent containing sequencer and driver
- **Test (`VipTest`)**: VIP test demonstrating VIP usage

**Key Concepts:**
- VIP architecture
- VIP component organization
- VIP packaging patterns
- VIP reuse strategies

**Running the example:**

```bash
./scripts/module7.sh --vip
# or
cd module7/examples/vip
verilator -sv --cc --exe --timing --trace vip.sv vip.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" --top-module vip
make -C obj_dir -f Vvip.mk
./obj_dir/Vvip
```

**Expected Output:**
- VIP transaction generation
- VIP agent operation
- VIP packaging demonstration
- VIP reuse pattern

### 6. Best Practices (`examples/best_practices/best_practices.sv`)

Demonstrates UVM best practices including logging, naming, and phase organization:

- **Test (`BestPracticesTest`)**: Test demonstrating best practices
- **Phase Organization**: Proper phase usage and logging
- **Topology Printing**: Component hierarchy visualization
- **Logging Patterns**: Structured logging for maintainability

**Key Concepts:**
- Code organization
- Naming conventions
- Phase-based logging
- Topology visualization
- Maintainability patterns

**Running the example:**

```bash
./scripts/module7.sh --best-practices
# or
cd module7/examples/best_practices
verilator -sv --cc --exe --timing --trace best_practices.sv best_practices.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" --top-module best_practices
make -C obj_dir -f Vbest_practices.mk
./obj_dir/Vbest_practices
```

**Expected Output:**
- Phase-based logging
- Component topology printing
- Best practices demonstration
- Structured logging output

## Design Under Test (DUT)

### Simple DMA Controller (`dut/dma/simple_dma.v`)

A simple DMA controller for verification:

**Module Interface:**
```systemverilog
module simple_dma (
    input  wire        clk,          // Clock signal
    input  wire        rst_n,         // Active-low reset
    input  wire        dma_start,     // Start DMA transfer
    output reg         dma_done,      // DMA transfer complete
    input  wire [31:0] dma_src_addr,  // Source address
    input  wire [31:0] dma_dst_addr,  // Destination address
    input  wire [15:0] dma_length,    // Transfer length
    input  wire [2:0]  dma_channel    // DMA channel select
);
```

**Functionality:**
- Starts DMA transfer on `dma_start` assertion
- Transfers data from source to destination address
- Completes transfer and asserts `dma_done`
- Supports multiple DMA channels
- Configurable transfer length

**Characteristics:**
- Simple DMA controller implementation
- Teaching scaffold for DMA verification
- Demonstrates DMA protocol
- Multi-channel support

### UART (`dut/protocols/uart.v`)

A UART module for protocol verification:

**Module Interface:**
```systemverilog
module uart (
    input  wire       clk,        // Clock signal
    input  wire       rst_n,      // Active-low reset
    output reg        tx,         // Transmit output
    input  wire       rx,         // Receive input
    input  wire [7:0] tx_data,    // Transmit data
    input  wire       tx_start,   // Start transmission
    output reg        tx_busy,    // Transmission busy
    output reg  [7:0] rx_data,    // Receive data
    output reg        rx_ready    // Receive data ready
);
```

**Functionality:**
- Serial transmission and reception
- Configurable baud rate (simplified)
- TX and RX data handling
- Status signals (busy, ready)

**Characteristics:**
- Simplified UART implementation
- Teaching scaffold for UART verification
- Demonstrates serial communication
- Loopback testing support

## Testbenches

### UVM Tests (`tests/uvm_tests/`)

#### Real-World UVM Test (`test_real_world_uvm.sv`)

UVM-style testbench demonstrating real-world verification with DMA and UART:

**UVM Components:**

1. **Interfaces**
   - `dma_if` - DMA interface
   - `uart_if` - UART interface

2. **Test (`RealWorldTest`)**
   - Extends `uvm_test`
   - Instantiates both DMA and UART DUTs
   - Runs minimal directed stimulus
   - Demonstrates multi-DUT verification

**Test Features:**
- DMA directed test
- UART directed test
- Multi-DUT verification
- Real-world verification patterns

**Running the test:**

```bash
# Via module script
./scripts/module7.sh --uvm-tests

# Directly from test directory
cd module7/tests/uvm_tests
make SIM=verilator TEST=test_real_world_uvm
```

**Note**: Verilator has limited UVM support. For full UVM features, use commercial simulators (VCS, Questa, Xcelium). UVM builds under Verilator can be heavy; use `--jobs` and consider `--no-clean` for iteration.

## Running Examples and Tests

### Using the Module Script

The `module7.sh` script provides a convenient way to run all examples and tests:

```bash
# Run everything (all examples + UVM tests)
./scripts/module7.sh

# Run only examples
./scripts/module7.sh --all-examples

# Run only UVM tests
./scripts/module7.sh --skip-examples --uvm-tests

# Run specific examples
./scripts/module7.sh --dma
./scripts/module7.sh --protocols
./scripts/module7.sh --vip
./scripts/module7.sh --best-practices

# Run specific test suites
./scripts/module7.sh --uvm-tests

# Combine options
./scripts/module7.sh --dma --protocols --uvm-tests

# Performance options
./scripts/module7.sh --jobs 12        # Use 12 parallel jobs
./scripts/module7.sh --no-clean       # Skip clean builds for faster iteration
```

### Running Individual Examples

#### Direct SystemVerilog Execution

```bash
# Compile and run SystemVerilog UVM examples
cd module7/examples/dma
verilator -sv --cc --exe --timing --trace dma.sv dma.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" ../dut/dma/simple_dma.v --top-module dma
make -C obj_dir -f Vdma.mk
./obj_dir/Vdma

cd module7/examples/protocols
verilator -sv --cc --exe --timing --trace uart_example.sv uart_example.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" ../dut/protocols/uart.v --top-module uart_example
make -C obj_dir -f Vuart_example.mk
./obj_dir/Vuart_example
```

#### Running UVM Tests

```bash
# Change to test directory
cd module7/tests/uvm_tests

# Run UVM real-world test
make SIM=verilator TEST=test_real_world_uvm

# For commercial simulators
make SIM=vcs TEST=test_real_world_uvm
make SIM=questa TEST=test_real_world_uvm

# Clean build artifacts
make clean
```

## Test Results

### Execution Status

✅ **All examples and tests have been successfully executed and verified.**

**Last Execution:** 2026-01-24 02:33:33  
**Verilator Version:** 5.045  
**UVM Library:** UVM 2017 (1800.2-2017-1.0)

**Execution Summary:**
- ✅ All 6 SystemVerilog UVM examples completed successfully
- ✅ UVM test compiled and passed
- ⏱️ Total execution time: ~55 minutes (UVM compilation takes significant time due to template instantiations)

**Examples Executed:**
1. ✅ DMA - DMA controller verification demonstrated
2. ✅ UART - UART protocol verification with loopback
3. ✅ SPI - SPI protocol verification scaffold (UVM pattern)
4. ✅ I2C - I2C protocol verification scaffold (UVM pattern)
5. ✅ VIP - VIP development and packaging demonstrated
6. ✅ Best Practices - UVM best practices demonstrated

**Tests Executed:**
- ✅ UVM Real-World test - 1 UVM test passing (DMA + UART)

### SystemVerilog Example Output

When tests complete successfully, you should see:

```
============================================================
UVM Report Summary
============================================================

[OBJTN_CLEAR]     1
[RNTST]     1
[UVM/COMP/NAME]    19
[UVM/COMP/NAMECHECK]     1
[UVM/RELNOTES]     1
```

### Test Counts

- **DMA example**: DMA controller verification demonstrated ✅
- **UART example**: UART protocol verification demonstrated ✅
- **SPI example**: SPI protocol verification scaffold demonstrated ✅
- **I2C example**: I2C protocol verification scaffold demonstrated ✅
- **VIP example**: VIP development demonstrated ✅
- **Best Practices example**: UVM best practices demonstrated ✅
- **UVM Real-World test**: 1 UVM test ✅

### Generated Files

After execution, each example directory contains:
- `*.cpp` - C++ wrapper files generated by Verilator
- `*.vcd` - Waveform dump files (can be viewed with GTKWave)
- `compile.log` - Compilation log
- `run.log` - Execution output log
- `obj_dir/` - Verilator build directory

Full execution log is saved to `module7/module7.log`.

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
./scripts/module7.sh --jobs 12 --no-clean
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
   ls -la module7/tests/uvm_tests/obj_dir/
   ```

4. **View Detailed Logs:**
   ```bash
   # Check log files
   tail -f *.log
   ```

5. **Run Tests with Verbose Output:**
   ```bash
   make SIM=verilator TEST=test_real_world_uvm V=1
   ```

6. **Use Incremental Builds:**
   ```bash
   # Skip clean for faster iteration
   ./scripts/module7.sh --no-clean
   ```

## Topics Covered

1. **DMA Verification** - DMA controller verification patterns
2. **Protocol Verification** - UART, SPI, I2C protocol verification
3. **VIP Development** - VIP architecture and packaging
4. **Best Practices** - Code organization, naming, logging, phase usage
5. **Real-World Applications** - Applying UVM to practical verification scenarios
6. **Multi-DUT Verification** - Verifying multiple DUTs in a single testbench
7. **Protocol Scaffolds** - UVM patterns for protocol verification
8. **Production-Quality Testbenches** - Building maintainable verification environments

## Next Steps

After completing Module 7, proceed to:

- **Module 8**: UVM Miscellaneous Utilities - Utility classes and advanced features

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **UVM User's Guide**: Accellera Systems Initiative
- **DMA Controller Specifications**: Various vendor specifications
- **Protocol Specifications**: UART, SPI, I2C protocol standards
- **Verilator Documentation**: https://verilator.org/
- **Verification Academy**: https://verificationacademy.com/

## File Descriptions

### Examples

| File | Description |
|------|-------------|
| `dma.sv` | DMA verification with transaction, sequence, driver, and environment |
| `uart_example.sv` | UART protocol verification with loopback testing |
| `spi_example.sv` | SPI protocol verification scaffold (UVM pattern only) |
| `i2c_example.sv` | I2C protocol verification scaffold (UVM pattern only) |
| `vip.sv` | VIP development demonstrating transaction, sequence, driver, and agent packaging |
| `best_practices.sv` | UVM best practices including logging, naming, and phase organization |

### DUT Modules

| File | Description | Ports |
|------|-------------|-------|
| `simple_dma.v` | Simple DMA controller | `clk`, `rst_n`, `dma_start`, `dma_done`, `dma_src_addr[31:0]`, `dma_dst_addr[31:0]`, `dma_length[15:0]`, `dma_channel[2:0]` |
| `uart.v` | UART module | `clk`, `rst_n`, `tx`, `rx`, `tx_data[7:0]`, `tx_start`, `tx_busy`, `rx_data[7:0]`, `rx_ready` |

### Testbenches

| File | Framework | Description | Tests |
|------|-----------|-------------|-------|
| `test_real_world_uvm.sv` | UVM | Real-world testbench with DMA and UART DUTs | 1 UVM test |

---

For questions or issues, refer to the main project README or check the test logs for detailed error messages.