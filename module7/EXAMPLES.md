# Module 7 — Hands-on labs

Generated from `docs/MODULE7.md` for slides, PDF, and video.
Run commands from the **course repository root** unless noted.

**Course topic:** Real-World Applications

## 1. DMA Verification (`dma/`)

**Source:** `module7/examples/dma/dma.sv`

**What you'll learn:**
- Interface (`dma_if`): DMA interface with start, done, addresses, length, and channel signals
- Transaction (`DmaTxn`): DMA transaction with source address, destination address, length, and channel
- Sequence (`DmaSeq`): DMA sequence generating random DMA transfers
- Driver (`DmaDriver`): DMA driver implementing DMA protocol
- Environment (`DmaEnv`): DMA verification environment

**Run:**

```bash
./scripts/module7.sh --dma
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE7.md` and explore `module7/examples/dma/`.

## 2. UART Verification (`protocols/`)

**Source:** `module7/examples/protocols/uart_example.sv`

**What you'll learn:**
- Interface (`uart_if`): UART interface with TX/RX signals and control
- Transaction (`UartTxn`): UART transaction with data field
- Sequence (`UartSeq`): UART sequence generating random UART transfers
- Driver (`UartDriver`): UART driver implementing UART protocol
- Environment (`UartEnv`): UART verification environment

**Run:**

```bash
./scripts/module7.sh --protocols
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE7.md` and explore `module7/examples/protocols/`.

## 3. SPI Verification (`protocols/`)

**Source:** `module7/examples/protocols/spi_example.sv`

**What you'll learn:**
- Test (`SpiExampleTest`): SPI verification test scaffold
- UVM Pattern: Demonstrates UVM structure for SPI verification

**Run:**

```bash
./scripts/module7.sh --protocols
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE7.md` and explore `module7/examples/protocols/`.

## 4. I2C Verification (`protocols/`)

**Source:** `module7/examples/protocols/i2c_example.sv`

**What you'll learn:**
- Test (`I2cExampleTest`): I2C verification test scaffold
- UVM Pattern: Demonstrates UVM structure for I2C verification

**Run:**

```bash
./scripts/module7.sh --protocols
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE7.md` and explore `module7/examples/protocols/`.

## 5. VIP Development (`vip/`)

**Source:** `module7/examples/vip/vip.sv`

**What you'll learn:**
- Transaction (`VipTxn`): VIP transaction with payload
- Sequence (`VipSeq`): VIP sequence generating transactions
- Driver (`VipDriver`): VIP driver
- Agent (`VipAgent`): VIP agent containing sequencer and driver
- Test (`VipTest`): VIP test demonstrating VIP usage

**Run:**

```bash
./scripts/module7.sh --vip && cd module7/examples/vip && verilator -sv --cc --exe --timing --trace vip.sv vip.cpp \ && -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE7.md` and explore `module7/examples/vip/`.

## 6. Best Practices (`best_practices/`)

**Source:** `module7/examples/best_practices/best_practices.sv`

**What you'll learn:**
- Test (`BestPracticesTest`): Test demonstrating best practices
- Phase Organization: Proper phase usage and logging
- Topology Printing: Component hierarchy visualization
- Logging Patterns: Structured logging for maintainability

**Run:**

```bash
./scripts/module7.sh --best-practices
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE7.md` and explore `module7/examples/best_practices/`.
