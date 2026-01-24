# Module 4: UVM Components

This directory contains all examples, exercises, and test cases for Module 4, focusing on UVM component implementation including transactions, drivers, monitors, sequencers, TLM communication, scoreboards, and complete agents.

## Directory Structure

```
module4/
├── examples/              # SystemVerilog UVM examples
│   ├── transactions/     # Transaction modeling examples
│   │   ├── transactions.sv
│   │   └── transactions.cpp
│   ├── drivers/          # Driver implementation examples
│   │   ├── drivers.sv
│   │   └── drivers.cpp
│   ├── monitors/         # Monitor implementation examples
│   │   ├── monitors.sv
│   │   └── monitors.cpp
│   ├── sequencers/       # Sequencer and sequence examples
│   │   ├── sequencers.sv
│   │   └── sequencers.cpp
│   ├── tlm/              # TLM communication examples
│   │   ├── tlm.sv
│   │   └── tlm.cpp
│   ├── scoreboards/      # Scoreboard examples
│   │   ├── scoreboards.sv
│   │   └── scoreboards.cpp
│   └── agents/           # Complete agent examples
│       ├── agents.sv
│       └── agents.cpp
├── dut/                   # Verilog/SystemVerilog Design Under Test modules
│   └── interfaces/       # Interface modules for testing
│       └── simple_interface.v
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
│       ├── test_complete_agent_uvm.sv
│       └── Makefile
└── exercises/             # Exercise solutions (if any)
```

## Prerequisites

Before running the experiments, ensure you have:

- **SystemVerilog Simulator**: Verilator 5.036+ (open-source) or commercial simulator (VCS, Questa, Xcelium)
- **UVM Library**: Accellera UVM 1.2 installed
- **Make**: For building and running tests
- **C++ Compiler**: GCC or Clang (for Verilator)

To verify your environment:

```bash
verilator --version      # Should be 5.036+
echo $UVM_HOME          # Should point to UVM installation
make --version          # Should be available
```

## UVM Component Examples

### 1. Transactions (`examples/transactions/transactions.sv`)

Demonstrates transaction-level modeling and transaction operations:

**Transaction Methods:**

1. **String Conversion:**
   ```systemverilog
   function string convert2string();
       return $sformatf("data=0x%02h, addr=0x%04h", data, address);
   endfunction
   ```

2. **Deep Copy:**
   ```systemverilog
   function void do_copy(uvm_object rhs);
       BaseTransaction txn;
       if (!$cast(txn, rhs)) return;
       super.do_copy(rhs);
       data = txn.data;
       address = txn.address;
   endfunction
   ```

3. **Comparison:**
   ```systemverilog
   function bit do_compare(uvm_object rhs, uvm_comparer comparer);
       BaseTransaction txn;
       if (!$cast(txn, rhs)) return 0;
       return (data == txn.data) && (address == txn.address);
   endfunction
   ```

4. **Randomization:**
   ```systemverilog
   rand logic [7:0] data;
   constraint data_nonzero { data != 8'h00; }
   if (txn.randomize()) begin
       // Valid random values
   end
   ```

**Key Concepts:**
- Transaction class design extending `uvm_sequence_item`
- Transaction fields and data members
- Transaction copy and comparison operations
- Extended transactions with inheritance
- Constrained random transactions
- **`convert2string()`** - String representation
- **`do_copy()`** - Deep copy implementation
- **`do_compare()`** - Comparison implementation
- **`randomize()`** - Constrained random generation

**Running the example:**

```bash
# Using orchestrator script
./scripts/module4.sh --transactions

# Or compile directly
cd module4/examples/transactions
verilator -sv --cc --exe --timing --trace \
    -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI \
    --binary $UVM_HOME/src/uvm_pkg.sv transactions.sv transactions.cpp \
    --top-module transactions
make -C obj_dir -f Vtransactions.mk
./obj_dir/Vtransactions
```

**Expected Output:**
- Transaction creation and initialization
- Transaction copy operations
- Transaction comparison operations
- Extended transaction inheritance
- Constrained random transaction generation

### 2. Drivers (`examples/drivers/drivers.sv`)

Demonstrates UVM driver implementation:

**Driver Methods:**

1. **Get Transaction:**
   ```systemverilog
   seq_item_port.get_next_item(txn);  // Blocking call
   ```

2. **Signal Completion:**
   ```systemverilog
   seq_item_port.item_done();
   ```

3. **Drive Transaction:**
   ```systemverilog
   task drive_transaction(Transaction txn);
       vif.data <= txn.data;
       vif.address <= txn.address;
       @(posedge vif.clk);
   endtask
   ```

4. **Driver Loop:**
   ```systemverilog
   task run_phase(uvm_phase phase);
       forever begin
           seq_item_port.get_next_item(txn);
           drive_transaction(txn);
           seq_item_port.item_done();
       end
   endtask
   ```

**Key Concepts:**
- Driver class structure extending `uvm_driver`
- Transaction reception from sequencer via `seq_item_port`
- Signal driving to DUT
- Driver-sequencer communication
- Protocol-specific driving patterns
- **`get_next_item()`** - Get transaction (blocking)
- **`item_done()`** - Signal completion
- **`drive_transaction()`** - Drive to DUT
- **Forever loop** - Continuous transaction processing

**Running the example:**

```bash
./scripts/module4.sh --drivers
```

**Expected Output:**
- Driver creation and initialization
- Transaction reception from sequencer
- Signal driving to DUT
- Protocol-specific driving patterns
- Driver-sequencer communication

### 3. Monitors (`examples/monitors/monitors.sv`)

Demonstrates UVM monitor implementation:

**Monitor Methods:**

1. **Analysis Port Write:**
   ```systemverilog
   ap.write(txn);  // Broadcast to subscribers
   ```

2. **Signal Sampling:**
   ```systemverilog
   task run_phase(uvm_phase phase);
       forever begin
           @(posedge vif.clk);
           if (vif.valid && vif.ready) begin
               txn = Transaction::type_id::create("txn");
               txn.data = vif.data;
               ap.write(txn);
           end
       end
   endtask
   ```

3. **Subscriber Write:**
   ```systemverilog
   class Subscriber extends uvm_subscriber #(Transaction);
       function void write(Transaction t);
           // Process transaction
       endfunction
   endclass
   ```

**Key Concepts:**
- Monitor class structure extending `uvm_monitor`
- Signal sampling from DUT
- Transaction creation from sampled signals
- Analysis port usage
- Protocol-specific monitoring
- **`ap.write(txn)`** - Broadcast transaction
- **Analysis port creation** - In constructor
- **Signal sampling** - Wait for protocol events
- **Subscriber pattern** - Receive via `write()`

**Running the example:**

```bash
./scripts/module4.sh --monitors
```

**Expected Output:**
- Monitor creation and initialization
- Signal sampling from DUT
- Transaction creation from signals
- Analysis port forwarding
- Protocol-specific monitoring

### 4. Sequencers (`examples/sequencers/sequencers.sv`)

Demonstrates UVM sequencer and sequence implementation:

**Sequence Methods:**

1. **Sequence Body:**
   ```systemverilog
   task body();
       SeqItem item;
       for (int i = 0; i < 5; i++) begin
           item = SeqItem::type_id::create("item");
           item.randomize();
           start_item(item);
           finish_item(item);
       end
   endtask
   ```

2. **Start Item:**
   ```systemverilog
   start_item(item);  // Request from sequencer
   ```

3. **Finish Item:**
   ```systemverilog
   finish_item(item);  // Send to driver
   ```

4. **Start Sequence:**
   ```systemverilog
   seq.start(sequencer);  // Start execution
   ```

**Key Concepts:**
- Sequencer implementation
- Sequence items (`uvm_sequence_item`)
- Sequences (`uvm_sequence`)
- Sequence execution
- Sequence libraries
- **`body()`** - Main sequence logic
- **`start_item()`** - Request item
- **`finish_item()`** - Send item
- **`seq.start()`** - Start sequence

**Running the example:**

```bash
./scripts/module4.sh --sequencers
```

**Expected Output:**
- Sequencer creation and initialization
- Sequence item generation
- Sequence execution
- Sequencer-driver communication
- Sequence libraries

### 5. TLM (`examples/tlm/tlm.sv`)

Demonstrates TLM (Transaction-Level Modeling) communication:

**TLM Methods:**

1. **Put Port:**
   ```systemverilog
   put_port.put(txn);  // Blocking send
   ```

2. **Get Export:**
   ```systemverilog
   get_export.get(txn);  // Blocking receive
   ```

3. **Analysis Port:**
   ```systemverilog
   ap.write(txn);  // Non-blocking broadcast
   ```

4. **Subscriber Write:**
   ```systemverilog
   function void write(Transaction t);
       // Receive transaction
   endfunction
   ```

5. **TLM FIFO:**
   ```systemverilog
   producer.put_port.connect(fifo.put_export);
   consumer.get_export.connect(fifo.get_export);
   ```

**Key Concepts:**
- TLM interfaces (put, get, peek, transport)
- TLM ports and exports
- TLM FIFOs
- Analysis ports and exports
- TLM connections
- **`put_port.put()`** - Send (blocking)
- **`get_export.get()`** - Receive (blocking)
- **`ap.write()`** - Broadcast (non-blocking)
- **TLM FIFO** - Decouples producer/consumer

**Running the example:**

```bash
./scripts/module4.sh --tlm
```

**Expected Output:**
- TLM port/export creation
- TLM connection establishment
- Transaction flow via TLM
- Analysis port broadcasting
- TLM FIFO usage

### 6. Scoreboards (`examples/scoreboards/scoreboards.sv`)

Demonstrates UVM scoreboard implementation:

**Scoreboard Methods:**

1. **Write Method:**
   ```systemverilog
   function void write(Transaction txn);
       Transaction expected;
       if (expected_queue.size() > 0) begin
           expected = expected_queue.pop_front();
           if (txn.compare(expected)) begin
               pass_count++;
           end else begin
               fail_count++;
           end
       end
   endfunction
   ```

2. **Add Expected:**
   ```systemverilog
   function void add_expected(Transaction txn);
       expected_queue.push_back(txn);
   endfunction
   ```

3. **Queue Operations:**
   ```systemverilog
   queue.push_back(txn);      // Add
   queue.pop_front();          // Remove
   queue.size()                // Check size
   ```

**Key Concepts:**
- Scoreboard purpose and structure
- Transaction comparison
- Result checking
- Pass/fail tracking
- **`write(txn)`** - Receive transaction
- **`add_expected(txn)`** - Store expected
- **Queue operations** - FIFO management
- **Comparison logic** - Actual vs expected

**Running the example:**

```bash
./scripts/module4.sh --scoreboards
```

**Expected Output:**
- Scoreboard creation and initialization
- Transaction storage
- Transaction comparison
- Pass/fail tracking
- Result reporting

### 7. Complete Agents (`examples/agents/agents.sv`)

Demonstrates building complete UVM agents:

**Agent Methods:**

1. **Agent Build Phase:**
   ```systemverilog
   function void build_phase(uvm_phase phase);
       super.build_phase(phase);
       // Get configuration
       if (!uvm_config_db#(bit)::get(this, "", "is_active", is_active)) begin
           is_active = 1;  // Default active
       end
       // Monitor always created
       monitor = AgentMonitor::type_id::create("monitor", this);
       // Driver/sequencer only if active
       if (is_active) begin
           driver = AgentDriver::type_id::create("driver", this);
           sequencer = uvm_sequencer#(AgentTransaction)::type_id::create("sequencer", this);
       end
   endfunction
   ```

2. **Agent Connect Phase:**
   ```systemverilog
   function void connect_phase(uvm_phase phase);
       super.connect_phase(phase);
       if (is_active) begin
           driver.seq_item_port.connect(sequencer.seq_item_export);
       end
   endfunction
   ```

3. **Agent Configuration:**
   ```systemverilog
   // In test's build_phase
   uvm_config_db#(bit)::set(this, "env.agent", "is_active", 1);  // Active
   ```

**Key Concepts:**
- Agent structure
- Component integration
- Agent configuration
- Active vs passive agents
- **Active agent**: Driver + Sequencer + Monitor
- **Passive agent**: Monitor only
- **Configuration**: Via ConfigDB before creation
- **Conditional creation**: Based on is_active flag

**Running the example:**

```bash
./scripts/module4.sh --agents
```

**Expected Output:**
- Complete agent creation
- Component integration
- Agent configuration
- Active/passive agent modes
- Agent functionality

## Design Under Test (DUT)

### Simple Interface (`dut/interfaces/simple_interface.v`)

A simple interface for UVM component testing.

**Module Interface:**
```systemverilog
module simple_interface (
    input  wire       clk,
    input  wire       rst_n,
    input  wire       valid,
    output reg        ready,
    input  wire [7:0] data,
    input  wire [15:0] address,
    output reg  [7:0] result
);
```

**Functionality:**
- Resets to all zeros when `rst_n` is low
- When `valid` is asserted, computes `result = data + 1`
- Asserts `ready` when operation completes
- Simple design for UVM component demonstration

## Testbenches

### UVM Tests (`tests/uvm_tests/`)

#### Complete Agent UVM Test (`test_complete_agent_uvm.sv`)

Complete UVM testbench demonstrating all components:

**UVM Components:**

1. **Transaction (`InterfaceTransaction`)**
   - Extends `uvm_sequence_item`
   - Contains operands and expected results

2. **Sequence (`InterfaceSequence`)**
   - Extends `uvm_sequence`
   - Generates test vectors

3. **Driver (`InterfaceDriver`)**
   - Extends `uvm_driver`
   - Drives transactions to DUT

4. **Monitor (`InterfaceMonitor`)**
   - Extends `uvm_monitor`
   - Observes DUT outputs

5. **Scoreboard (`InterfaceScoreboard`)**
   - Extends `uvm_scoreboard`
   - Checks DUT behavior

6. **Agent (`InterfaceAgent`)**
   - Extends `uvm_agent`
   - Contains driver, monitor, and sequencer

7. **Environment (`InterfaceEnv`)**
   - Extends `uvm_env`
   - Contains agent and scoreboard

8. **Test (`CompleteAgentTest`)**
   - Extends `uvm_test`
   - Top-level test class

**Running the test:**

```bash
# Via module script
./scripts/module4.sh --uvm-tests

# Directly from test directory
cd module4/tests/uvm_tests
make SIM=verilator TEST=test_complete_agent_uvm
```

## Running Examples and Tests

### Using the Module Script

The `module4.sh` script provides a convenient way to run all examples and tests:

```bash
# Run everything (all examples + all tests)
./scripts/module4.sh

# Run only examples
./scripts/module4.sh --all-examples

# Run only tests
./scripts/module4.sh --uvm-tests

# Run specific examples
./scripts/module4.sh --transactions
./scripts/module4.sh --drivers
./scripts/module4.sh --monitors
./scripts/module4.sh --sequencers
./scripts/module4.sh --tlm
./scripts/module4.sh --scoreboards
./scripts/module4.sh --agents

# Combine options
./scripts/module4.sh --drivers --monitors --uvm-tests
```

### Running Individual Examples

#### Direct SystemVerilog Execution

```bash
# Compile and run UVM examples
cd module4/examples/transactions
verilator -sv --cc --exe --timing --trace \
    -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI \
    --binary $UVM_HOME/src/uvm_pkg.sv transactions.sv transactions.cpp \
    --top-module transactions
make -C obj_dir -f Vtransactions.mk
./obj_dir/Vtransactions
```

#### Running UVM Tests

```bash
# Change to test directory
cd module4/tests/uvm_tests

# Run UVM complete agent test
make SIM=verilator TEST=test_complete_agent_uvm

# For commercial simulators
make SIM=vcs TEST=test_complete_agent_uvm
make SIM=questa TEST=test_complete_agent_uvm

# Clean build artifacts
make clean
```

## Test Results

### Execution Status

✅ **All examples and tests have been successfully executed and verified.**

**Last Execution:** 2026-01-24 02:49:59  
**Verilator Version:** 5.045  
**UVM Library:** UVM 2017 (1800.2-2017-1.0)

**Execution Summary:**
- ✅ All 7 SystemVerilog UVM examples completed successfully
- ✅ UVM test compiled and passed
- ⏱️ Total execution time: ~26 minutes (UVM compilation takes significant time due to template instantiations)

**Examples Executed:**
1. ✅ Transactions - Transaction-level modeling and operations demonstrated (11 test messages)
2. ✅ Drivers - Driver implementation demonstrated (4 driver messages)
3. ✅ Monitors - Monitor implementation demonstrated (2 monitor messages, 1 subscriber message)
4. ✅ Sequencers - Sequencer and sequence implementation demonstrated (2 sequence messages, 1 driver message)
5. ✅ TLM - TLM communication demonstrated (7 producer, 8 consumer, 2 analysis producer, 4 subscriber messages)
6. ✅ Scoreboards - Scoreboard implementation demonstrated
7. ✅ Agents - Complete agent example demonstrated

**Tests Executed:**
- ✅ UVM Complete Agent test - 1 UVM test passing

### SystemVerilog Example Output

When tests complete successfully, you should see:

```
============================================================
UVM Report Summary
============================================================

[DRIVER]     4
[OBJTN_CLEAR]     1
[RNTST]     1
[SEQUENCE]     2
[TEST]     2
[UVM/COMP/NAME]    18
[UVM/COMP/NAMECHECK]     1
[UVM/RELNOTES]     1
```

### Test Counts

- **Transactions example**: Transaction-level modeling and operations demonstrated ✅
- **Drivers example**: Driver implementation demonstrated ✅
- **Monitors example**: Monitor implementation demonstrated ✅
- **Sequencers example**: Sequencer and sequence implementation demonstrated ✅
- **TLM example**: TLM communication demonstrated ✅
- **Scoreboards example**: Scoreboard implementation demonstrated ✅
- **Agents example**: Complete agent example demonstrated ✅
- **UVM Complete Agent test**: 1 UVM test ✅

### Generated Files

After execution, each example directory contains:
- `*.cpp` - C++ wrapper files generated by Verilator
- `*.vcd` - Waveform dump files (can be viewed with GTKWave)
- `compile.log` - Compilation log
- `run.log` - Execution output log
- `obj_dir/` - Verilator build directory

Full execution log is saved to `module4/module4.log`.

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

#### 3. TLM Connection Errors

**Error:** TLM connections not working

**Solution:** 
- Verify TLM port/export types match
- Check connection in `connect_phase()`
- Ensure TLM FIFO is created if needed

#### 4. Scoreboard Comparison Fails

**Error:** Scoreboard not comparing correctly

**Solution:**
- Ensure expected transactions are added before actual transactions arrive
- Check transaction comparison logic
- Verify transaction fields match

## UVM Component Methods in Module 4

### Quick Reference: Component Methods

| Component | Method | Purpose |
|-----------|--------|---------|
| **Transaction** | `convert2string()` | String representation |
| **Transaction** | `do_copy(rhs)` | Deep copy |
| **Transaction** | `do_compare(rhs, ...)` | Comparison |
| **Transaction** | `randomize()` | Random generation |
| **Driver** | `get_next_item(txn)` | Get transaction |
| **Driver** | `item_done()` | Signal complete |
| **Monitor** | `ap.write(txn)` | Broadcast |
| **Sequence** | `body()` | Main logic |
| **Sequence** | `start_item(item)` | Request item |
| **Sequence** | `finish_item(item)` | Send item |
| **TLM** | `put_port.put(txn)` | Send |
| **TLM** | `get_export.get(txn)` | Receive |
| **Scoreboard** | `write(txn)` | Receive |
| **Scoreboard** | `add_expected(txn)` | Store expected |

### Common Patterns

**1. Transaction Copy:**
```systemverilog
function void do_copy(uvm_object rhs);
    Transaction txn;
    if (!$cast(txn, rhs)) return;
    super.do_copy(rhs);
    data = txn.data;
endfunction
```

**2. Driver Loop:**
```systemverilog
task run_phase(uvm_phase phase);
    forever begin
        seq_item_port.get_next_item(txn);
        drive_transaction(txn);
        seq_item_port.item_done();
    end
endtask
```

**3. Monitor Loop:**
```systemverilog
task run_phase(uvm_phase phase);
    forever begin
        @(posedge vif.clk);
        txn = Transaction::type_id::create("txn");
        ap.write(txn);
    end
endtask
```

**4. Sequence Body:**
```systemverilog
task body();
    repeat(num_items) begin
        item = SeqItem::type_id::create("item");
        item.randomize();
        start_item(item);
        finish_item(item);
    end
endtask
```

## Topics Covered

1. **Transaction Modeling** - Designing and implementing transactions
2. **Driver Implementation** - Creating drivers for DUT stimulus
3. **Monitor Implementation** - Creating monitors for DUT observation
4. **Sequencer and Sequences** - Generating and managing test sequences
5. **TLM Communication** - Transaction-level modeling for component communication
6. **Scoreboards** - Result checking and verification
7. **Complete Agents** - Building integrated agent components
8. **UVM Component Methods** - Comprehensive reference for component methods

## Next Steps

After completing Module 4, proceed to:

- **Module 5**: Advanced UVM - Callbacks, coverage, register model, virtual sequences

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **UVM User's Guide**: Accellera Systems Initiative
- **Verilator Documentation**: https://verilator.org/
- **Verification Academy**: https://verificationacademy.com/

## File Descriptions

### Examples

| File | Description |
|------|-------------|
| `transactions.sv` | Transaction-level modeling and operations |
| `drivers.sv` | Driver implementation |
| `monitors.sv` | Monitor implementation |
| `sequencers.sv` | Sequencer and sequence implementation |
| `tlm.sv` | TLM communication |
| `scoreboards.sv` | Scoreboard implementation |
| `agents.sv` | Complete agent example |

### DUT Modules

| File | Description | Ports |
|------|-------------|-------|
| `simple_interface.v` | Simple interface for testing | `clk`, `rst_n`, `valid`, `ready`, `data[7:0]`, `address[15:0]`, `result[7:0]` |

### Testbenches

| File | Framework | Description | Tests |
|------|-----------|-------------|-------|
| `test_complete_agent_uvm.sv` | UVM | Complete agent testbench | 1 UVM test |

---

For questions or issues, refer to the main project README or check the test logs for detailed error messages.
