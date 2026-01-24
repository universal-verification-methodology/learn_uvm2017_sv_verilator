# Module 7: Real-World Applications

**Duration**: 3 weeks  
**Complexity**: Advanced  
**Goal**: Apply UVM to real-world verification scenarios

## Overview

This module applies UVM to real-world verification scenarios including DMA verification, protocol verification (UART, SPI, I2C), VIP development, and best practices. You'll learn how to verify complex designs, develop reusable VIP, and apply production-quality verification patterns.

### Examples and Code Structure

This module includes comprehensive examples and testbenches located in the `module7/` directory:

```
module7/
├── examples/              # SystemVerilog UVM examples
│   ├── dma/              # DMA verification examples
│   ├── protocols/        # Protocol verification (UART, SPI, I2C)
│   ├── vip/              # VIP development examples
│   └── best_practices/   # Best practices and patterns
├── dut/                   # Verilog/SystemVerilog Design Under Test
│   ├── dma/              # DMA modules
│   │   └── simple_dma.v
│   └── protocols/       # Protocol modules
│       └── uart.v
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
│       └── test_real_world_uvm.sv
└── README.md             # Module 7 documentation
```

### Quick Start

**Run all examples using the orchestrator script:**
```bash
# Run all SystemVerilog UVM examples
./scripts/module7.sh

# Run specific examples
./scripts/module7.sh --dma
./scripts/module7.sh --protocols
./scripts/module7.sh --vip
./scripts/module7.sh --best-practices

# Run tests
./scripts/module7.sh --uvm-tests

# Run everything
./scripts/module7.sh --all-examples --uvm-tests

# Performance options
./scripts/module7.sh --jobs 12        # Use 12 parallel jobs
./scripts/module7.sh --no-clean       # Skip clean builds for faster iteration
```

**Run examples individually:**
```bash
# Compile and run SystemVerilog UVM examples
cd module7/examples/dma
verilator -sv --cc --exe --timing --trace dma.sv dma.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" ../dut/dma/simple_dma.v --top-module dma
make -C obj_dir -f Vdma.mk
./obj_dir/Vdma

# Run UVM tests
cd module7/tests/uvm_tests
make SIM=verilator TEST=test_real_world_uvm
```

## Topics Covered

### 1. DMA Verification

- **DMA Controller Verification**
  - DMA transaction modeling
  - DMA protocol implementation
  - DMA sequence generation
  - DMA result checking

- **DMA Patterns**
  - DMA transfer patterns
  - Multi-channel DMA
  - DMA completion handling
  - DMA error handling

#### Example 7.1: DMA Verification (`module7/examples/dma/dma.sv`)

**What it demonstrates:**
- **Interface (`dma_if`)**: DMA interface with start, done, addresses, length, and channel signals
- **Transaction (`DmaTxn`)**: DMA transaction with source address, destination address, length, and channel
- **Sequence (`DmaSeq`)**: DMA sequence generating random DMA transfers
- **Driver (`DmaDriver`)**: DMA driver implementing DMA protocol
- **Environment (`DmaEnv`)**: DMA verification environment
- **Test (`DmaTest`)**: DMA verification test with simple DMA DUT

**DMA Verification Methods and Patterns:**

1. **DMA Transaction Randomization:**
   ```systemverilog
   class DmaTxn extends uvm_sequence_item;
       rand bit [31:0] src;   // Source address (randomizable)
       rand bit [31:0] dst;   // Destination address (randomizable)
       rand bit [15:0] len;   // Transfer length (randomizable)
       rand bit [2:0]  ch;    // DMA channel (randomizable)
       
       // In sequence
       void'(t.randomize() with { len inside {[1:20]}; });
       // Method: randomize() -> bit (1 = success, 0 = failure)
       // Constraint: len must be between 1 and 20
       // Purpose: Generate random DMA transfer parameters
   endclass
   ```
   - **Method Signature**: `function bit randomize();`
   - **Purpose**: Generate random DMA transfer parameters
   - **Constraints**: Use `with { constraint; }` to limit values
   - **Key**: `len inside {[1:20]}` constrains transfer length

2. **DMA Driver Protocol Implementation:**
   ```systemverilog
   task run_phase(uvm_phase phase);
       DmaTxn t;  // Transaction variable (local to run_phase)
       
       // Step 1: Initialize DMA start signal
       vif.dma_start <= 0;
       // Purpose: Ensure start signal is deasserted initially
       // Timing: Before entering forever loop
       
       // Step 2: Driver loop (runs continuously)
       forever begin
           // ================================================================
           // STEP 2.1: GET TRANSACTION FROM SEQUENCER
           // ================================================================
           seq_item_port.get_next_item(t);
           // Method: get_next_item(ref T item) -> void
           // Parameters: t = transaction variable (passed by reference)
           // Purpose: Get next transaction from sequencer
           // Behavior: 
           //   - Blocks until sequencer provides transaction
           //   - Transaction stored in 't'
           //   - Sequencer waits for item_done() before providing next
           // TLM Communication: Driver requests transaction via TLM port
           
           // ================================================================
           // STEP 2.2: DRIVE DMA CONTROL SIGNALS
           // ================================================================
           @(posedge vif.clk);  // Wait for clock edge
           // Purpose: Synchronize with protocol clock
           // Behavior: Blocks until positive clock edge
           
           // Drive DMA transfer parameters
           vif.dma_src_addr <= t.src;   // Source address (32-bit)
           // Purpose: Set source address for DMA transfer
           // Value: From transaction's src field
           
           vif.dma_dst_addr <= t.dst;   // Destination address (32-bit)
           // Purpose: Set destination address for DMA transfer
           // Value: From transaction's dst field
           
           vif.dma_length   <= t.len;   // Transfer length (16-bit)
           // Purpose: Set number of bytes to transfer
           // Value: From transaction's len field
           
           vif.dma_channel  <= t.ch;    // Channel select (3-bit)
           // Purpose: Select DMA channel for transfer
           // Value: From transaction's ch field
           
           vif.dma_start    <= 1;       // Assert start signal
           // Purpose: Initiate DMA transfer
           // Behavior: Start signal asserted for one clock cycle
           
           // ================================================================
           // STEP 2.3: DEASSERT START SIGNAL
           // ================================================================
           @(posedge vif.clk);  // Wait for next clock edge
           // Purpose: Allow start signal to be sampled by DUT
           // Timing: One clock cycle after asserting start
           
           vif.dma_start    <= 0;       // Deassert start signal
           // Purpose: Complete start pulse (one clock cycle wide)
           // Behavior: Start signal is now low, DUT should have captured it
           
           // ================================================================
           // STEP 2.4: WAIT FOR DMA COMPLETION
           // ================================================================
           do @(posedge vif.clk); while (!vif.dma_done);
           // Pattern: Wait for done pulse
           // Purpose: Wait until DMA transfer completes
           // Behavior: 
           //   - Blocks at each clock edge
           //   - Checks dma_done signal
           //   - Continues until dma_done is asserted (high)
           //   - DMA transfer may take multiple clock cycles
           // Note: This is a blocking wait - simulation will hang if done never asserts
           
           // ================================================================
           // STEP 2.5: SIGNAL TRANSACTION COMPLETION
           // ================================================================
           seq_item_port.item_done();
           // Method: item_done() -> void
           // Purpose: Signal transaction completion to sequencer
           // Behavior:
           //   - Unblocks sequencer to provide next transaction
           //   - Allows sequence to continue (finish_item() returns)
           //   - Required for proper transaction flow
           // Timing: Called after DMA transfer completes
       end  // forever loop continues
   endtask
   ```
   - **Method Signature**: 
     - `task get_next_item(ref T item);` - Get transaction from sequencer
     - `task item_done();` - Signal transaction completion
   - **Purpose**: Implement DMA protocol with start/done handshake
   - **Protocol Flow**: 
     1. Initialize start signal → 2. Get transaction → 3. Drive addresses/length/channel → 4. Assert start → 5. Deassert start → 6. Wait for done → 7. Signal completion → 8. Repeat
   - **Key**: `do-while` loop waits for `dma_done` pulse (blocking wait)
   - **Timing**: Start signal is one clock cycle pulse
   - **Blocking Behavior**: `get_next_item()` blocks until sequencer provides transaction, `item_done()` unblocks sequencer
   - **Completion Detection**: Wait for `dma_done` signal assertion (may take multiple clock cycles)

3. **DMA Sequence Generation:**
   ```systemverilog
   task body();
       DmaTxn t;  // Transaction variable (local to body)
       
       // Generate 3 DMA transfers
       repeat (3) begin
           // ================================================================
           // STEP 1: CREATE TRANSACTION
           // ================================================================
           t = DmaTxn::type_id::create("t");
           // Method: type_id::create(string name) -> object handle
           // Parameters: "t" = instance name
           // Purpose: Factory-based transaction creation
           // Behavior: Creates new transaction object
           // Factory Benefits: Enables type/instance overrides
           
           // ================================================================
           // STEP 2: RANDOMIZE TRANSACTION
           // ================================================================
           void'(t.randomize() with { len inside {[1:20]}; });
           // Method: randomize() -> bit (1 = success, 0 = failure)
           // Constraint: len must be between 1 and 20 bytes
           // Purpose: Generate random DMA transfer parameters
           // Behavior:
           //   - Randomizes all rand fields (src, dst, len, ch)
           //   - Applies constraint: len inside {[1:20]}
           //   - Returns 1 if successful, 0 if constraint fails
           // void'(): Suppresses return value warning (Verilator lint)
           // Note: Constraint ensures reasonable transfer lengths
           
           // ================================================================
           // STEP 3: START ITEM (SEND TO SEQUENCER)
           // ================================================================
           start_item(t);
           // Method: start_item(uvm_sequence_item item) -> void
           // Parameters: t = transaction to send
           // Purpose: Send transaction to sequencer
           // Behavior:
           //   - Sends transaction to sequencer
           //   - Waits for sequencer to grant access
           //   - Blocks until sequencer is ready
           //   - Sequencer may queue transaction if driver is busy
           
           // ================================================================
           // STEP 4: FINISH ITEM (WAIT FOR DRIVER COMPLETION)
           // ================================================================
           finish_item(t);
           // Method: finish_item(uvm_sequence_item item) -> void
           // Parameters: t = transaction (same as start_item)
           // Purpose: Wait for driver to complete transaction
           // Behavior:
           //   - Waits for driver to call item_done()
           //   - Blocks until DMA transfer completes
           //   - Driver processes transaction (drives signals, waits for done)
           //   - Returns when driver signals completion
           // Timing: May take many clock cycles (depends on DMA transfer time)
       end  // repeat loop continues
   endtask
   ```
   - **Method Signature**: `task body();` (no parameters, no return)
   - **Purpose**: Generate and send multiple DMA transfers to sequencer
   - **Execution Flow**: 
     1. Create transaction → 2. Randomize with constraints → 3. Start item → 4. Finish item → 5. Repeat
   - **Key**: `repeat` loop creates multiple transactions sequentially
   - **Blocking Behavior**: 
     - `start_item()` blocks until sequencer grants access
     - `finish_item()` blocks until driver completes transaction (may take many cycles)
   - **Transaction Lifetime**: 
     - Created in loop
     - Sent to sequencer via `start_item()`
     - Driver processes it (drives signals, waits for DMA done)
     - Driver signals completion via `item_done()`
     - `finish_item()` returns, loop continues
   - **Constraint**: `len inside {[1:20]}` ensures reasonable transfer lengths

**Key Concepts:**
- DMA transaction modeling captures transfer semantics
- DMA protocol implementation handles start/done handshake
- DMA sequence generation creates realistic transfer scenarios
- DMA result checking verifies transfer completion
- **DMA Protocol**: Start pulse → Wait for done → Completion
- **Transaction Flow**: Sequence → Sequencer → Driver → DUT
- **Completion Detection**: Wait for `dma_done` signal assertion

**Execution:**
```bash
# Using orchestrator script (recommended)
./scripts/module7.sh --dma

# Or compile directly with Verilator
cd module7/examples/dma
verilator -sv --cc --exe --timing --trace dma.sv dma.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" ../dut/dma/simple_dma.v --top-module dma
make -C obj_dir -f Vdma.mk
./obj_dir/Vdma
```

**Verified Output:**
- DMA transaction generation
- DMA protocol execution
- DMA transfer completion
- UVM report summary

### 2. Protocol Verification

- **UART Verification**
  - UART protocol modeling
  - Serial communication verification
  - Loopback testing
  - UART-specific patterns

- **SPI Verification**
  - SPI protocol verification patterns
  - UVM scaffold for SPI
  - Protocol-specific testbench structure

- **I2C Verification**
  - I2C protocol verification patterns
  - UVM scaffold for I2C
  - Protocol-specific testbench structure

#### Example 7.2: UART Verification (`module7/examples/protocols/uart_example.sv`)

**What it demonstrates:**
- **Interface (`uart_if`)**: UART interface with TX/RX signals and control
- **Transaction (`UartTxn`)**: UART transaction with data field
- **Sequence (`UartSeq`)**: UART sequence generating random UART transfers
- **Driver (`UartDriver`)**: UART driver implementing UART protocol
- **Environment (`UartEnv`)**: UART verification environment
- **Test (`UartTest`)**: UART verification test with UART DUT

**UART Verification Methods and Patterns:**

1. **UART Driver Protocol:**
   ```systemverilog
   task run_phase(uvm_phase phase);
       UartTxn t;  // Transaction variable (local to run_phase)
       
       // Step 1: Initialize UART start signal
       vif.tx_start <= 0;
       // Purpose: Ensure start signal is deasserted initially
       // Timing: Before entering forever loop
       
       // Step 2: Driver loop (runs continuously)
       forever begin
           // ================================================================
           // STEP 2.1: GET TRANSACTION FROM SEQUENCER
           // ================================================================
           seq_item_port.get_next_item(t);
           // Method: get_next_item(ref T item) -> void
           // Parameters: t = transaction variable (passed by reference)
           // Purpose: Get next transaction from sequencer
           // Behavior: Blocks until sequencer provides transaction
           
           // ================================================================
           // STEP 2.2: DRIVE UART TX DATA AND START
           // ================================================================
           @(posedge vif.clk);  // Wait for clock edge
           // Purpose: Synchronize with protocol clock
           
           vif.tx_data  <= t.data;   // Data to transmit (8-bit)
           // Purpose: Set data byte to transmit
           // Value: From transaction's data field
           
           vif.tx_start <= 1;        // Assert start signal
           // Purpose: Initiate UART transmission
           // Behavior: Start signal asserted for one clock cycle
           
           // ================================================================
           // STEP 2.3: DEASSERT START SIGNAL
           // ================================================================
           @(posedge vif.clk);  // Wait for next clock edge
           // Purpose: Allow start signal to be sampled by DUT
           // Timing: One clock cycle after asserting start
           
           vif.tx_start <= 0;        // Deassert start signal
           // Purpose: Complete start pulse (one clock cycle wide)
           // Behavior: Start signal is now low, DUT should have captured it
           
           // ================================================================
           // STEP 2.4: WAIT FOR TRANSMISSION TO COMPLETE
           // ================================================================
           do @(posedge vif.clk); while (vif.tx_busy);
           // Pattern: Wait for busy deassert
           // Purpose: Wait until UART finishes transmission
           // Behavior:
           //   - Blocks at each clock edge
           //   - Checks tx_busy signal
           //   - Continues while tx_busy is asserted (high)
           //   - Exits when tx_busy is deasserted (low)
           //   - UART transmission may take many clock cycles (serial bit transmission)
           // Note: This is a blocking wait - simulation will hang if busy never deasserts
           
           // ================================================================
           // STEP 2.5: SIGNAL TRANSACTION COMPLETION
           // ================================================================
           seq_item_port.item_done();
           // Method: item_done() -> void
           // Purpose: Signal transaction completion to sequencer
           // Behavior:
           //   - Unblocks sequencer to provide next transaction
           //   - Allows sequence to continue (finish_item() returns)
           //   - Required for proper transaction flow
           // Timing: Called after UART transmission completes
       end  // forever loop continues
   endtask
   ```
   - **Method Signature**: 
     - `task get_next_item(ref T item);` - Get transaction from sequencer
     - `task item_done();` - Signal transaction completion
   - **Purpose**: Implement UART TX protocol
   - **Protocol Flow**: 
     1. Initialize start signal → 2. Get transaction → 3. Drive data → 4. Assert start → 5. Deassert start → 6. Wait for busy deassert → 7. Signal completion → 8. Repeat
   - **Key**: Wait for `tx_busy` to deassert (transmission complete)
   - **Timing**: Start signal is one clock cycle pulse
   - **Blocking Behavior**: `get_next_item()` blocks until sequencer provides transaction, `item_done()` unblocks sequencer
   - **Completion Detection**: Wait for `tx_busy` signal deassertion (may take many clock cycles for serial transmission)
   - **UART Characteristics**: Serial transmission takes time (one bit per baud period)

2. **UART Loopback Pattern:**
   ```systemverilog
   module uart_example;
       uart_if vif(clk);
       assign vif.rx = vif.tx;  // Loopback (very simplified)
       // Purpose: Connect TX to RX for loopback testing
       // Behavior: TX output feeds directly to RX input
       // Use: Minimal smoke testing without external UART device
   endmodule
   ```
   - **Purpose**: Enable loopback testing
   - **Pattern**: `assign rx = tx` creates loopback path
   - **Use Case**: Minimal smoke testing without external device

**Key Concepts:**
- UART protocol modeling captures serial communication
- Serial communication verification tests TX/RX paths
- Loopback testing enables minimal smoke testing
- Protocol-specific patterns provide reusable verification components
- **UART Protocol**: Data → Start → Wait for busy → Completion
- **Loopback Pattern**: TX output connected to RX input
- **Busy Signal**: Wait for `tx_busy` deassertion

**Note**: The example uses a **loopback** (`rx = tx`) for minimal smoke testing.

**Execution:**
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

**Verified Output:**
- UART transaction generation
- UART protocol execution
- UART TX/RX operation
- Loopback verification

#### Example 7.3: SPI Verification (`module7/examples/protocols/spi_example.sv`)

**What it demonstrates:**
- **Test (`SpiExampleTest`)**: SPI verification test scaffold
- **UVM Pattern**: Demonstrates UVM structure for SPI verification

**Key Concepts:**
- SPI protocol verification patterns provide reusable structure
- UVM scaffold for protocol verification enables rapid development
- Protocol-specific testbench structure supports future DUT integration

**Note**: This is a **UVM scaffold only** - no SPI DUT is included in this repository yet. It demonstrates the "real-world patterns" intent without overbuilding.

#### Example 7.4: I2C Verification (`module7/examples/protocols/i2c_example.sv`)

**What it demonstrates:**
- **Test (`I2cExampleTest`)**: I2C verification test scaffold
- **UVM Pattern**: Demonstrates UVM structure for I2C verification

**Key Concepts:**
- I2C protocol verification patterns provide reusable structure
- UVM scaffold for protocol verification enables rapid development
- Protocol-specific testbench structure supports future DUT integration

**Note**: This is a **UVM scaffold only** - no I2C DUT is included in this repository yet. It demonstrates the "real-world patterns" intent without overbuilding.

### 3. VIP Development

- **VIP Architecture**
  - VIP component organization
  - VIP packaging patterns
  - VIP reuse strategies
  - VIP configuration

- **VIP Components**
  - Transaction classes
  - Sequence classes
  - Driver and monitor
  - Agent packaging

#### Example 7.5: VIP Development (`module7/examples/vip/vip.sv`)

**What it demonstrates:**
- **Transaction (`VipTxn`)**: VIP transaction with payload
- **Sequence (`VipSeq`)**: VIP sequence generating transactions
- **Driver (`VipDriver`)**: VIP driver
- **Agent (`VipAgent`)**: VIP agent containing sequencer and driver
- **Test (`VipTest`)**: VIP test demonstrating VIP usage

**VIP Development Methods and Patterns:**

1. **VIP Agent Packaging:**
   ```systemverilog
   class VipAgent extends uvm_agent;
       uvm_sequencer #(VipTxn) seqr;
       VipDriver drv;
       
       function void build_phase(uvm_phase phase);
           super.build_phase(phase);
           seqr = uvm_sequencer#(VipTxn)::type_id::create("seqr", this);
           drv  = VipDriver::type_id::create("drv", this);
       endfunction
       
       function void connect_phase(uvm_phase phase);
           super.connect_phase(phase);
           drv.seq_item_port.connect(seqr.seq_item_export);
       endfunction
   endclass
   ```
   - **Purpose**: Package VIP components (sequencer + driver) in agent
   - **Pattern**: Agent encapsulates all VIP components
   - **Key**: Standard UVM agent structure for reusability

2. **VIP Driver with Logging:**
   ```systemverilog
   task run_phase(uvm_phase phase);
       VipTxn t;
       forever begin
           seq_item_port.get_next_item(t);
           `uvm_info("VIP_DRV", $sformatf("drive payload=0x%02h", t.payload), UVM_MEDIUM)
           // Macro: `uvm_info(id, message, verbosity)
           // Function: $sformatf(format, args) -> string
           // Purpose: Log transaction with formatted message
           // Format: "drive payload=0x%02h" (2-digit hex)
           #10;
           seq_item_port.item_done();
       end
   endtask
   ```
   - **Purpose**: VIP driver with structured logging
   - **Logging**: Use `uvm_info` with formatted messages
   - **Key**: `$sformatf()` for formatted string generation

3. **VIP Usage Pattern:**
   ```systemverilog
   class VipTest extends uvm_test;
       VipAgent agent;  // VIP agent instance
       
       function void build_phase(uvm_phase phase);
           super.build_phase(phase);
           agent = VipAgent::type_id::create("agent", this);
           // Create VIP agent (reusable component)
       endfunction
       
       task run_phase(uvm_phase phase);
           VipSeq seq;
           phase.raise_objection(this);
           seq = VipSeq::type_id::create("seq");
           seq.start(agent.seqr);  // Use VIP agent's sequencer
           #200;
           phase.drop_objection(this);
       endtask
   endclass
   ```
   - **Purpose**: Demonstrate VIP usage in test
   - **Pattern**: Create VIP agent, use its sequencer
   - **Key**: VIP agent is reusable component

**Key Concepts:**
- VIP architecture enables reusable verification components
- VIP component organization provides clear structure
- VIP packaging patterns support easy integration
- VIP reuse strategies improve productivity
- **VIP Packaging**: Transaction + Sequence + Driver + Agent
- **Reusability**: VIP agent can be instantiated in any test
- **Structured Logging**: Use `uvm_info` with formatted messages

**Execution:**
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

**Verified Output:**
- VIP transaction generation
- VIP agent operation
- VIP packaging demonstration
- VIP reuse pattern

### 4. Best Practices

- **Code Organization**
  - Component organization
  - File structure
  - Module organization
  - Package organization

- **Naming Conventions**
  - Component naming
  - Variable naming
  - File naming
  - Test naming

- **Logging and Debugging**
  - Structured logging
  - Phase-based logging
  - Topology visualization
  - Debug techniques

#### Example 7.6: Best Practices (`module7/examples/best_practices/best_practices.sv`)

**What it demonstrates:**
- **Test (`BestPracticesTest`)**: Test demonstrating best practices
- **Phase Organization**: Proper phase usage and logging
- **Topology Printing**: Component hierarchy visualization
- **Logging Patterns**: Structured logging for maintainability

**Best Practices Methods and Patterns:**

1. **Phase-Based Logging:**
   ```systemverilog
   function void build_phase(uvm_phase phase);
       super.build_phase(phase);
       `uvm_info("BP", "build_phase: construct components/configure", UVM_MEDIUM)
       // Macro: `uvm_info(id, message, verbosity)
       // Purpose: Log phase execution
       // Pattern: Log at start of each phase
   endfunction
   
   task run_phase(uvm_phase phase);
       phase.raise_objection(this);
       `uvm_info("BP", "run_phase: execute stimulus", UVM_MEDIUM)
       #100;
       phase.drop_objection(this);
   endtask
   
   function void report_phase(uvm_phase phase);
       super.report_phase(phase);
       `uvm_info("BP", "report_phase: summarize results", UVM_MEDIUM)
   endfunction
   ```
   - **Purpose**: Log execution flow through phases
   - **Pattern**: Log at start of each phase
   - **Key**: Consistent logging improves debugging

2. **Topology Printing:**
   ```systemverilog
   function void end_of_elaboration_phase(uvm_phase phase);
       super.end_of_elaboration_phase(phase);
       // Method: super.end_of_elaboration_phase(uvm_phase phase) -> void
       // Purpose: Initialize parent component end_of_elaboration
       // Timing: Must be called first
       
       `uvm_info("BP", "end_of_elaboration: print topology", UVM_MEDIUM)
       // Macro: `uvm_info(id, message, verbosity)
       // Purpose: Log that topology printing is about to occur
       // Verbosity: UVM_MEDIUM (normal logging level)
       
       // ================================================================
       // GET UVM ROOT SINGLETON
       // ================================================================
       uvm_root::get();
       // Method: static function uvm_root get();
       // Return Type: uvm_root (singleton instance)
       // Purpose: Get the singleton UVM root instance
       // Behavior:
       //   - Returns the single instance of uvm_root
       //   - uvm_root is the top-level component in UVM hierarchy
       //   - All components are children of uvm_root
       //   - Singleton pattern ensures only one root exists
       // Usage: Access point to entire UVM component hierarchy
       
       // ================================================================
       // PRINT COMPONENT TOPOLOGY
       // ================================================================
       uvm_root::get().print_topology();
       // Method: function void print_topology();
       // Purpose: Print complete component hierarchy
       // Behavior:
       //   - Traverses entire component tree starting from root
       //   - Prints each component with its hierarchical path
       //   - Shows component type and instance name
       //   - Displays component relationships (parent-child)
       //   - Output format: "uvm_test_top.env.agent.seqr"
       //   - Useful for debugging component structure
       //   - Helps verify all components created correctly
       //   - Shows TLM connections (if enabled)
       // Timing: Must be called after all components created and connected
       // Usage: Debugging, verification, documentation
   endfunction
   ```
   - **Method Signature**: 
     - `static function uvm_root get();` → returns singleton root instance
     - `function void print_topology();` → prints hierarchy
   - **Purpose**: Visualize component hierarchy for debugging
   - **Timing**: Call in `end_of_elaboration_phase()` (after all connections)
   - **Output**: Prints complete component tree with hierarchical paths
   - **Output Format**: 
     ```
     uvm_test_top
       env
         agent
           seqr
           drv
           mon
     ```
   - **Key**: Helps debug component structure and connections
   - **When to Use**: 
     - After all components created
     - After all connections made
     - When debugging component hierarchy issues
     - To verify testbench structure
   - **Benefits**: 
     - Visual representation of testbench structure
     - Helps identify missing components
     - Verifies hierarchical naming
     - Aids in debugging connection issues

3. **end_of_elaboration_phase:**
   ```systemverilog
   function void end_of_elaboration_phase(uvm_phase phase);
       super.end_of_elaboration_phase(phase);
       // Phase: Executes after connect_phase, before start_of_simulation_phase
       // Purpose: Final checks, topology printing, configuration validation
       // Usage: Print topology, validate configuration, final setup
   endfunction
   ```
   - **Method Signature**: `function void end_of_elaboration_phase(uvm_phase phase);`
   - **Phase Type**: Build-time phase (function, executes bottom-up)
   - **Purpose**: Final elaboration tasks after all connections
   - **Common Uses**: Print topology, validate configuration, final checks
   - **Timing**: After `connect_phase()`, before `start_of_simulation_phase()`

**Key Concepts:**
- Code organization improves maintainability
- Naming conventions enhance readability
- Phase-based logging provides clear execution flow
- Topology visualization aids debugging
- **Phase Logging**: Log at start of each phase
- **Topology Printing**: Use `print_topology()` in `end_of_elaboration_phase()`
- **Structured Logging**: Use consistent message IDs and formats
- **end_of_elaboration_phase**: Use for final checks and topology printing

**Execution:**
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

**Verified Output:**
- Phase-based logging
- Component topology printing
- Best practices demonstration
- Structured logging output

### 5. System-Level Verification

- **Multi-DUT Verification**
  - Multiple DUT instantiation
  - Multi-DUT coordination
  - System integration
  - System-level testing

- **Real-World Patterns**
  - Practical verification scenarios
  - Production-quality testbenches
  - Maintainable verification environments
  - Scalable verification solutions

## Real-World Application Methods Reference

This section provides a comprehensive reference for all methods, functions, and patterns used in Module 7's real-world application examples.

### Complete Transaction Flow Diagrams

**DMA Verification Flow:**
```
Test.run_phase()
  ├─> raise_objection()
  ├─> Create sequence: DmaSeq::type_id::create("seq")
  ├─> Start sequence: seq.start(env.seqr)
  │     └─> Sequence.body()
  │           ├─> Create transaction: DmaTxn::type_id::create("t")
  │           ├─> Randomize: t.randomize() with { len inside {[1:20]}; }
  │           ├─> start_item(t) ──────────────┐
  │           │                                 │
  │           └─> finish_item(t) ───────────────┤
  │                                             │
  └─> Sequencer (env.seqr)                     │
        ├─> Receives transaction from sequence  │
        ├─> Provides to driver via TLM          │
        └─> Waits for item_done() ──────────────┘
              │
              └─> Driver.run_phase()
                    ├─> get_next_item(t) ──────┐
                    ├─> @(posedge clk)          │
                    ├─> Drive src_addr, dst_addr, length, channel
                    ├─> dma_start <= 1          │
                    ├─> @(posedge clk)          │
                    ├─> dma_start <= 0          │
                    ├─> do @(posedge clk); while (!dma_done) ──┐
                    │   (Wait for DMA transfer to complete)     │
                    │   (May take many clock cycles)             │
                    └─> item_done() ────────────────────────────┘
```

**UART Verification Flow:**
```
Test.run_phase()
  ├─> raise_objection()
  ├─> Create sequence: UartSeq::type_id::create("seq")
  ├─> Start sequence: seq.start(env.seqr)
  │     └─> Sequence.body()
  │           ├─> Create transaction: UartTxn::type_id::create("t")
  │           ├─> Randomize: t.randomize()
  │           ├─> start_item(t) ──────────────┐
  │           │                                 │
  │           └─> finish_item(t) ───────────────┤
  │                                             │
  └─> Sequencer (env.seqr)                     │
        ├─> Receives transaction from sequence  │
        ├─> Provides to driver via TLM          │
        └─> Waits for item_done() ──────────────┘
              │
              └─> Driver.run_phase()
                    ├─> get_next_item(t) ──────┐
                    ├─> @(posedge clk)        │
                    ├─> tx_data <= t.data       │
                    ├─> tx_start <= 1           │
                    ├─> @(posedge clk)          │
                    ├─> tx_start <= 0           │
                    ├─> do @(posedge clk); while (tx_busy) ───┐
                    │   (Wait for UART transmission to complete)│
                    │   (Serial transmission takes many cycles) │
                    └─> item_done() ───────────────────────────┘
                          │
                          └─> DUT (UART)
                                ├─> Receives tx_data, tx_start
                                ├─> Transmits serial data (tx)
                                ├─> Sets tx_busy during transmission
                                └─> Deasserts tx_busy when complete
                                    │
                                    └─> Loopback: rx = tx (for testing)
```

### DMA Verification Methods

#### DMA Transaction Randomization

**Method**: `function bit randomize();`
- **Method Signature**: `function bit randomize();`
- **Return Type**: `bit` (1 = success, 0 = failure)
- **Purpose**: Generate random DMA transfer parameters
- **Usage**: `void'(t.randomize() with { len inside {[1:20]}; });`
- **Parameters**: None (randomizes all `rand` fields in object)
- **Constraints**: Use `with { constraint_expression; }` to limit values
- **Example**: `len inside {[1:20]}` constrains transfer length to 1-20 bytes
- **Key**: `void'()` suppresses Verilator warning about ignored return value
- **Constraint Syntax**: 
  - `len inside {[1:20]}` - Range constraint
  - `len inside {1, 2, 4, 8, 16}` - Set constraint
  - `len > 0 && len < 100` - Boolean constraint
- **Randomization Order**: 
  1. All `rand` fields randomized
  2. Constraints applied
  3. Returns 1 if successful, 0 if constraints cannot be satisfied

#### DMA Protocol Implementation

**DMA Start/Done Handshake:**
```systemverilog
// Drive DMA signals
@(posedge vif.clk);
vif.dma_src_addr <= t.src;
vif.dma_dst_addr <= t.dst;
vif.dma_length   <= t.len;
vif.dma_channel  <= t.ch;
vif.dma_start    <= 1;  // Assert start

@(posedge vif.clk);
vif.dma_start    <= 0;  // Deassert start

// Wait for completion
do @(posedge vif.clk); while (!vif.dma_done);
```
- **Pattern**: Start pulse → Wait for done → Completion
- **Key**: `do-while` loop waits for `dma_done` pulse

### Protocol Verification Methods

#### UART Protocol Implementation

**UART TX Protocol:**
```systemverilog
// Drive UART TX
@(posedge vif.clk);  // Event control: wait for positive clock edge
// Operator: @(posedge signal) - event control
// Purpose: Synchronize with clock
// Behavior: Blocks until positive edge of signal occurs
// Usage: All protocol operations must be clock-synchronized

vif.tx_data  <= t.data;  // Non-blocking assignment
// Operator: <= - non-blocking assignment
// Purpose: Schedule assignment for next simulation time step
// Behavior: Assignment occurs after all blocking statements in current time step
// Usage: Use for clock-synchronized signal assignments

vif.tx_start <= 1;  // Assert start

@(posedge vif.clk);  // Wait for next clock edge
vif.tx_start <= 0;  // Deassert start (one cycle pulse)

// Wait for transmission complete
do @(posedge vif.clk); while (vif.tx_busy);
// Construct: do-while loop with event control
// Pattern: do @(posedge clk); while (condition);
// Purpose: Wait for condition to become false
// Behavior:
//   1. Wait for clock edge
//   2. Check condition (tx_busy)
//   3. If true, repeat from step 1
//   4. If false, exit loop
// Key: Blocks at each clock edge until condition is false
```
- **Pattern**: Data → Start → Wait for busy deassert → Completion
- **Key**: Wait for `tx_busy` to deassert
- **Event Control**: `@(posedge clk)` - wait for positive clock edge
- **Non-blocking Assignment**: `<=` - schedule assignment for next time step
- **Do-While Loop**: `do @(posedge clk); while (condition);` - wait for condition

**UART Loopback Pattern:**
```systemverilog
assign vif.rx = vif.tx;  // Loopback
```
- **Purpose**: Enable loopback testing
- **Use Case**: Minimal smoke testing without external device

### VIP Development Methods

#### VIP Agent Packaging

**Standard VIP Agent Structure:**
```systemverilog
class VipAgent extends uvm_agent;
    uvm_sequencer #(VipTxn) seqr;
    VipDriver drv;
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        seqr = uvm_sequencer#(VipTxn)::type_id::create("seqr", this);
        drv  = VipDriver::type_id::create("drv", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        drv.seq_item_port.connect(seqr.seq_item_export);
    endfunction
endclass
```
- **Purpose**: Package VIP components for reusability
- **Pattern**: Agent encapsulates sequencer + driver
- **Key**: Standard UVM agent structure

#### VIP Logging

**Structured Logging:**
```systemverilog
`uvm_info("VIP_DRV", $sformatf("drive payload=0x%02h", t.payload), UVM_MEDIUM)
// Macro: `uvm_info(id, message, verbosity)
// Parameters:
//   - "VIP_DRV": Message ID (string identifier)
//   - $sformatf(...): Formatted message string
//   - UVM_MEDIUM: Verbosity level (UVM_NONE, UVM_LOW, UVM_MEDIUM, UVM_HIGH, UVM_FULL)
// Purpose: Log transaction with formatted message
// Behavior: Prints message if verbosity level is enabled
// Usage: Use consistent message IDs for filtering

// Function: $sformatf(format_string, args...) -> string
// Parameters:
//   - format_string: Format string with format specifiers
//   - args: Variable number of arguments matching format specifiers
// Return Type: string
// Purpose: Format string with variable arguments
// Format Specifiers:
//   - %d, %0d: Decimal (integer)
//   - %h, %0h: Hexadecimal (lowercase)
//   - %H, %0H: Hexadecimal (uppercase)
//   - %x, %0x: Hexadecimal (lowercase, alternative)
//   - %X, %0X: Hexadecimal (uppercase, alternative)
//   - %b, %0b: Binary
//   - %s: String
//   - %0d, %02h: Width and padding (0 = no padding, 2 = 2 digits, h = hex)
// Examples:
//   - $sformatf("addr=0x%08h", addr) → "addr=0x00001000" (8-digit hex, zero-padded)
//   - $sformatf("data=0x%02h", data) → "data=0xa5" (2-digit hex, zero-padded)
//   - $sformatf("count=%0d", count) → "count=42" (decimal, no padding)
```
- **Macro**: `uvm_info(id, message, verbosity)`
- **Function**: `$sformatf(format, args)` → string
- **Purpose**: Log transaction with formatted message
- **Format Specifiers**: 
  - `%02h` - 2-digit hexadecimal, zero-padded
  - `%08h` - 8-digit hexadecimal, zero-padded
  - `%0d` - Decimal, no padding
  - `%s` - String
- **Verbosity Levels**: UVM_NONE, UVM_LOW, UVM_MEDIUM, UVM_HIGH, UVM_FULL
- **Message IDs**: Use consistent IDs for filtering and debugging

### Best Practices Methods

#### Phase-Based Logging

**Logging Pattern:**
```systemverilog
function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    `uvm_info("BP", "build_phase: construct components", UVM_MEDIUM)
endfunction

task run_phase(uvm_phase phase);
    `uvm_info("BP", "run_phase: execute stimulus", UVM_MEDIUM)
endtask

function void report_phase(uvm_phase phase);
    super.report_phase(phase);
    `uvm_info("BP", "report_phase: summarize results", UVM_MEDIUM)
endfunction
```
- **Purpose**: Log execution flow through phases
- **Pattern**: Log at start of each phase
- **Key**: Consistent logging improves debugging

#### Topology Printing

**Method**: `uvm_root::get().print_topology();`
- **Method Signature**: 
  - `static function uvm_root get();` → returns singleton root
  - `function void print_topology();` → prints hierarchy
- **Purpose**: Visualize component hierarchy
- **Timing**: Call in `end_of_elaboration_phase()` (after all connections)
- **Output**: Prints complete component tree with hierarchical paths
- **Usage**:
  ```systemverilog
  function void end_of_elaboration_phase(uvm_phase phase);
      super.end_of_elaboration_phase(phase);
      uvm_root::get().print_topology();
  endfunction
  ```

#### end_of_elaboration_phase

**Method Signature**: `function void end_of_elaboration_phase(uvm_phase phase);`
- **Phase Type**: Build-time phase (function, executes bottom-up)
- **Purpose**: Final elaboration tasks after all connections
- **Timing**: After `connect_phase()`, before `start_of_simulation_phase()`
- **Common Uses**: 
  - Print topology
  - Validate configuration
  - Final checks
  - Setup verification

### Quick Reference Cheat Sheet

| **Category** | **Method/Pattern** | **Usage** | **Purpose** | **Return Type** |
|--------------|-------------------|-----------|-------------|----------------|
| **DMA Protocol** | `do @(posedge clk); while (!dma_done);` | Wait for completion | Wait for DMA done pulse | void (blocking) |
| **UART Protocol** | `do @(posedge clk); while (tx_busy);` | Wait for TX complete | Wait for busy deassert | void (blocking) |
| **Loopback** | `assign rx = tx;` | Module level | Enable loopback testing | continuous assignment |
| **VIP Packaging** | Agent with sequencer + driver | VIP structure | Package reusable components | component hierarchy |
| **Logging** | `uvm_info(id, $sformatf(...), verbosity)` | Any phase | Structured logging | void |
| **Topology** | `uvm_root::get().print_topology()` | end_of_elaboration_phase | Print component hierarchy | void |
| **Randomization** | `randomize() with { constraint; }` | Transaction creation | Generate random values | bit (1=success) |
| **Event Control** | `@(posedge clk)` | Protocol operations | Wait for clock edge | void (blocking) |
| **Non-blocking** | `signal <= value;` | Clock-synchronized | Schedule assignment | void |
| **Repeat Loop** | `repeat(n) @(posedge clk);` | Reset sequences | Wait n clock cycles | void (blocking) |
| **Forever Loop** | `forever #period clk = ~clk;` | Clock generation | Generate continuous clock | infinite loop |
| **String Format** | `$sformatf(format, args)` | Logging | Format string with variables | string |
| **ConfigDB Set** | `uvm_config_db#(T)::set(null, "*", field, value)` | Module initial | Set global config | void |
| **Run Test** | `run_test("TestName")` | Module initial | Start UVM test | void |
| **Phase Logging** | Log at start of each phase | All phases | Track execution flow |

### Module-Level Patterns

**1. Clock Generation:**
```systemverilog
initial begin
    clk = 0;
    forever #5 clk = ~clk;
    // Statement: forever - infinite loop
    // Operator: #5 - delay operator (5 time units)
    // Operator: ~ - bitwise NOT (invert)
    // Purpose: Generate continuous clock signal
    // Behavior:
    //   1. Set clk = 0
    //   2. Wait 5 time units
    //   3. Invert clk (0 → 1 or 1 → 0)
    //   4. Repeat forever
    // Result: Clock with period = 10 time units (5 high + 5 low)
    // Timing: Clock edge every 5 time units
end
```
- **Pattern**: `forever #period clk = ~clk;`
- **Purpose**: Generate continuous clock signal
- **Period**: `#period` determines clock period (half period per edge)
- **Key**: `forever` loop runs indefinitely

**2. Reset Sequence:**
```systemverilog
initial begin
    vif.rst_n = 0;        // Assert reset (active low)
    vif.dma_start = 0;    // Initialize control signals
    repeat(5) @(posedge clk);  // Wait 5 clock cycles
    // Statement: repeat(n) - repeat loop
    // Pattern: repeat(n) @(posedge clk);
    // Purpose: Wait for n clock cycles
    // Behavior: Executes @(posedge clk) n times
    // Usage: Reset deassertion delay
    vif.rst_n = 1;        // Deassert reset
end
```
- **Pattern**: `repeat(n) @(posedge clk);`
- **Purpose**: Wait for n clock cycles
- **Usage**: Reset sequences, initialization delays
- **Key**: `repeat` loop with event control

**3. ConfigDB Setup:**
```systemverilog
initial begin
    uvm_config_db#(virtual dma_if)::set(null, "*", "vif", vif);
    // Method: uvm_config_db#(T)::set(cntxt, inst, field, value)
    // Parameters:
    //   - null: Context (null = root context)
    //   - "*": Instance path (wildcard = match all components)
    //   - "vif": Field name
    //   - vif: Value (virtual interface)
    // Purpose: Set virtual interface for all components
    // Timing: Must be called before run_test()
    // Behavior: Stores interface in ConfigDB with wildcard path
    
    run_test("DmaTest");
    // Function: run_test(string test_name) -> void
    // Purpose: Start UVM test execution
    // Behavior:
    //   1. Creates test instance via factory
    //   2. Executes all UVM phases
    //   3. Runs until completion
    // Note: Must be called after ConfigDB setup
end
```
- **Pattern**: Set ConfigDB before `run_test()`
- **Purpose**: Configure components before test starts
- **Key**: Use `null` context and `"*"` wildcard for global configuration

### Common Patterns

**1. DMA Transfer Pattern:**
```systemverilog
// Drive addresses and length
@(posedge vif.clk);  // Wait for clock edge
vif.dma_src_addr <= t.src;  // Non-blocking assignment
vif.dma_dst_addr <= t.dst;
vif.dma_length   <= t.len;
vif.dma_channel  <= t.ch;
vif.dma_start    <= 1;  // Assert start

@(posedge vif.clk);  // Wait for next clock edge
vif.dma_start    <= 0;  // Deassert start (one cycle pulse)

// Wait for completion
do @(posedge vif.clk); while (!vif.dma_done);
// Pattern: do-while with event control
// Purpose: Wait for completion signal
```

**2. UART TX Pattern:**
```systemverilog
// Drive data and start
@(posedge vif.clk);
vif.tx_data  <= t.data;
vif.tx_start <= 1;

@(posedge vif.clk);
vif.tx_start <= 0;

// Wait for completion
do @(posedge vif.clk); while (vif.tx_busy);
```

**3. VIP Agent Pattern:**
```systemverilog
class VipAgent extends uvm_agent;
    uvm_sequencer #(VipTxn) seqr;
    VipDriver drv;
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        seqr = uvm_sequencer#(VipTxn)::type_id::create("seqr", this);
        drv  = VipDriver::type_id::create("drv", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        drv.seq_item_port.connect(seqr.seq_item_export);
    endfunction
endclass
```

**4. Phase Logging Pattern:**
```systemverilog
function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    `uvm_info("ID", "build_phase: description", UVM_MEDIUM)
endfunction
```

**5. Topology Printing Pattern:**
```systemverilog
function void end_of_elaboration_phase(uvm_phase phase);
    super.end_of_elaboration_phase(phase);
    // Method: super.end_of_elaboration_phase(phase) -> void
    // Purpose: Initialize parent component end_of_elaboration
    // Timing: Must be called first
    
    uvm_root::get().print_topology();
    // Method: static function uvm_root get(); -> uvm_root
    // Method: function void print_topology(); -> void
    // Purpose: Print complete component hierarchy
    // Timing: After all components created and connected
    // Output: Prints hierarchical component tree
endfunction
```

**6. Clock Generation Pattern:**
```systemverilog
initial begin
    clk = 0;
    forever #5 clk = ~clk;
    // Pattern: forever #period signal = ~signal;
    // Purpose: Generate continuous clock
    // Period: #period determines clock frequency
    // Key: forever loop runs indefinitely
end
```

**7. Reset Sequence Pattern:**
```systemverilog
initial begin
    vif.rst_n = 0;  // Assert reset
    repeat(5) @(posedge clk);  // Wait 5 clock cycles
    vif.rst_n = 1;  // Deassert reset
    // Pattern: repeat(n) @(posedge clk);
    // Purpose: Wait for n clock cycles
    // Usage: Reset deassertion delay, initialization
end
```

**8. ConfigDB Setup Pattern:**
```systemverilog
initial begin
    uvm_config_db#(virtual if_type)::set(null, "*", "vif", vif);
    // Pattern: Set interface before run_test()
    // Purpose: Configure components before test starts
    // Key: Use null context and "*" wildcard for global config
    run_test("TestName");
end
```

### SystemVerilog Constructs Reference

**1. Event Control (`@`):**
```systemverilog
@(posedge clk);  // Wait for positive clock edge
@(negedge clk);  // Wait for negative clock edge
@(signal);       // Wait for any change in signal
```
- **Operator**: `@(event)` - event control
- **Purpose**: Wait for event to occur
- **Behavior**: Blocks until event occurs
- **Usage**: Clock synchronization, signal change detection

**2. Delay Operator (`#`):**
```systemverilog
#5;              // Wait 5 time units
#10 clk = ~clk;  // Wait 10 time units, then assign
```
- **Operator**: `#time` - delay operator
- **Purpose**: Wait for specified time
- **Behavior**: Blocks for specified time units
- **Usage**: Clock generation, timing delays

**3. Non-blocking Assignment (`<=`):**
```systemverilog
signal <= value;  // Non-blocking assignment
```
- **Operator**: `<=` - non-blocking assignment
- **Purpose**: Schedule assignment for next simulation time step
- **Behavior**: All non-blocking assignments in current time step execute together
- **Usage**: Clock-synchronized signal assignments

**4. Repeat Statement:**
```systemverilog
repeat(5) begin
    // Statements
end
repeat(5) @(posedge clk);  // Wait 5 clock cycles
```
- **Statement**: `repeat(n) statement;`
- **Purpose**: Execute statement n times
- **Behavior**: Loops n times
- **Usage**: Reset sequences, initialization delays

**5. Forever Loop:**
```systemverilog
forever begin
    // Statements
end
forever #5 clk = ~clk;  // Infinite clock generation
```
- **Statement**: `forever statement;`
- **Purpose**: Execute statement indefinitely
- **Behavior**: Infinite loop
- **Usage**: Clock generation, continuous monitoring

**6. String Formatting (`$sformatf`):**
```systemverilog
$sformatf("addr=0x%08h data=0x%02h", addr, data)
// Format specifiers:
//   %d, %0d: Decimal
//   %h, %02h: Hexadecimal (2-digit, zero-padded)
//   %08h: Hexadecimal (8-digit, zero-padded)
//   %b: Binary
//   %s: String
```
- **Function**: `$sformatf(format, args...)` → string
- **Purpose**: Format string with variables
- **Return**: Formatted string
- **Usage**: Logging, debugging, reporting

### Common Pitfalls and Solutions

1. **DMA Done Not Detected**
   - **Problem**: Simulation hangs waiting for `dma_done`
   - **Solution**: Check DUT implementation, add timeout
   - **Code**: 
     ```systemverilog
     int cycles = 0;
     do @(posedge clk); while (!dma_done && cycles < max_cycles);
     if (cycles >= max_cycles) `uvm_error("DMA", "Timeout waiting for done")
     ```
   - **Prevention**: Add bounded wait with timeout checking

2. **UART Busy Never Deasserts**
   - **Problem**: Simulation hangs waiting for `tx_busy` deassert
   - **Solution**: Check DUT implementation, verify clock
   - **Code**: 
     ```systemverilog
     int cycles = 0;
     do @(posedge clk); while (tx_busy && cycles < max_cycles);
     if (cycles >= max_cycles) `uvm_error("UART", "Timeout waiting for busy")
     ```
   - **Prevention**: Add bounded wait with timeout checking

3. **Topology Not Printed**
   - **Problem**: `print_topology()` shows nothing
   - **Solution**: Call in `end_of_elaboration_phase()`, not earlier
   - **Code**: Must be after `connect_phase()` completes
   - **Check**: Verify all components created in `build_phase()`

4. **VIP Agent Not Reusable**
   - **Problem**: VIP agent hardcoded for specific use
   - **Solution**: Use ConfigDB for configuration, avoid hardcoded values
   - **Code**: 
     ```systemverilog
     // In environment
     uvm_config_db#(int)::set(this, "agent", "config", value);
     // In agent
     if (!uvm_config_db#(int)::get(this, "", "config", value)) value = default;
     ```

5. **Phase Logging Too Verbose**
   - **Problem**: Too many log messages
   - **Solution**: Use appropriate verbosity levels
   - **Code**: `UVM_MEDIUM` for normal, `UVM_HIGH` for detailed
   - **Control**: Set verbosity via `+UVM_VERBOSITY=UVM_MEDIUM`

6. **Clock Not Running**
   - **Problem**: Simulation hangs, no progress
   - **Solution**: Verify clock generation in module
   - **Code**: 
     ```systemverilog
     initial begin
         clk = 0;
         forever #5 clk = ~clk;  // Must be in initial block
     end
     ```
   - **Check**: Clock must be in `initial` block, not `always` block

7. **ConfigDB Not Set**
   - **Problem**: `uvm_fatal("NO_VIF", ...)` error
   - **Solution**: Set interface before `run_test()`
   - **Code**: 
     ```systemverilog
     initial begin
         uvm_config_db#(virtual if)::set(null, "*", "vif", vif);
         run_test("TestName");  // Must be after ConfigDB set
     end
     ```
   - **Timing**: ConfigDB set → run_test() → component build_phase() retrieves

8. **Reset Not Deasserted**
   - **Problem**: DUT stuck in reset
   - **Solution**: Verify reset sequence completes
   - **Code**: 
     ```systemverilog
     initial begin
         rst_n = 0;
         repeat(5) @(posedge clk);  // Wait for reset
         rst_n = 1;  // Must deassert reset
     end
     ```

### Troubleshooting Guide

**Issue**: DMA transfer never completes
- **Check**: DUT `dma_done` signal implementation
- **Check**: Clock running correctly
- **Check**: Reset sequence completed
- **Check**: Address/length values valid

**Issue**: UART transmission hangs
- **Check**: DUT `tx_busy` signal implementation
- **Check**: Clock running correctly
- **Check**: Loopback connection (if used)
- **Check**: Data values valid

**Issue**: Topology print shows incomplete hierarchy
- **Check**: Called in `end_of_elaboration_phase()`
- **Check**: All components created in `build_phase()`
- **Check**: All connections made in `connect_phase()`

**Issue**: VIP agent not working in different test
- **Check**: Virtual interface set via ConfigDB
- **Check**: Agent configuration retrieved correctly
- **Check**: Sequencer/driver connections made

## Learning Outcomes

By the end of this module, you should be able to:

- Verify complex designs (DMA, protocols) using UVM patterns
- Develop reusable VIP with proper architecture
- Apply best practices for code organization and maintainability
- Perform system-level verification with multiple DUTs
- Create production-quality testbenches
- Understand protocol verification patterns
- Package verification components for reuse
- Use topology printing for debugging
- Implement phase-based logging
- Apply real-world verification patterns

## Exercises

1. **DMA Verification**
   - Create DMA transaction model
   - Implement DMA driver
   - Generate DMA sequences
   - Verify DMA transfers

2. **Protocol Verification**
   - Model UART protocol
   - Implement UART driver and monitor
   - Create UART sequences
   - Test UART loopback

3. **VIP Development**
   - Design VIP architecture
   - Package VIP components
   - Create reusable VIP agent
   - Test VIP integration

4. **Best Practices**
   - Organize code structure
   - Implement naming conventions
   - Add structured logging
   - Create maintainable testbenches

5. **System-Level Verification**
   - Integrate multiple DUTs
   - Coordinate multi-DUT verification
   - Create system-level tests
   - Verify system integration

## Execution Status

✅ **Module 7 has been successfully executed and verified.**

**Verification Date:** 2026-01-24  
**Status:** All examples and tests passing  
**Verilator Version:** 5.045  
**UVM Library:** UVM 2017 (1800.2-2017-1.0)  
**Test Results:**
- ✅ 6 SystemVerilog UVM examples executed successfully
- ✅ 1 UVM test compiled and passed
- ⏱️ Total execution time: ~55 minutes (UVM compilation takes significant time due to template instantiations)

**Examples Executed:**
1. ✅ DMA - DMA controller verification demonstrated
2. ✅ UART - UART protocol verification with loopback
3. ✅ SPI - SPI protocol verification scaffold (UVM pattern)
4. ✅ I2C - I2C protocol verification scaffold (UVM pattern)
5. ✅ VIP - VIP development and packaging demonstrated
6. ✅ Best Practices - UVM best practices demonstrated

**Note:** UVM builds under Verilator can be heavy; use `--jobs` and consider `--no-clean` for iteration. The protocol examples (SPI, I2C) are **UVM scaffolds only** - no DUTs are included yet. UART has a DUT and uses loopback for minimal smoke testing.

**Execution Logs:** Full execution logs are available in `module7/module7.log` and individual example logs in each example directory (`compile.log`, `run.log`).

## Assessment

- [x] Can verify complex designs (DMA, protocols)
- [x] Can develop reusable VIP
- [x] Can apply best practices
- [x] Can perform system-level verification
- [x] Can create production-quality testbenches
- [x] Understands protocol verification patterns
- [x] Can package verification components for reuse

## Next Steps

After completing this module, proceed to [Module 8: UVM Miscellaneous Utilities](MODULE8.md) for utility classes and advanced features.

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **UVM User's Guide**: Accellera Systems Initiative
- **DMA Controller Specifications**: Various vendor specifications
- **Protocol Specifications**: UART, SPI, I2C protocol standards
- **Verilator Documentation**: https://verilator.org/
- **Verification Academy**: https://verificationacademy.com/
