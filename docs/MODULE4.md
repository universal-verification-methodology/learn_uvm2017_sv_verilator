# Module 4: UVM Components

**Goal**: Build complete UVM agents with driver, monitor, and sequencer

## Overview

This module covers the core UVM components used to build verification environments. You'll learn how to create agents, drivers, monitors, sequencers, and sequences to build complete verification environments. The module progresses from individual component implementation to complete agent integration.

### Examples and Code Structure

This module includes comprehensive examples and testbenches located in the `module4/` directory:

```
module4/
├── examples/              # SystemVerilog UVM examples
│   ├── transactions/     # Transaction modeling examples
│   ├── drivers/          # Driver implementation examples
│   ├── monitors/         # Monitor implementation examples
│   ├── sequencers/       # Sequencer and sequence examples
│   ├── tlm/              # TLM communication examples
│   ├── scoreboards/      # Scoreboard examples
│   └── agents/           # Complete agent examples
├── dut/                   # Verilog/SystemVerilog Design Under Test
│   └── interfaces/       # Interface modules for testing
│       └── simple_interface.v
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
│       └── test_complete_agent_uvm.sv
└── README.md             # Module 4 documentation
```

### Quick Start

**Run all examples using the orchestrator script:**
```bash
# Run all UVM examples
./scripts/module4.sh

# Run specific examples
./scripts/module4.sh --transactions
./scripts/module4.sh --drivers
./scripts/module4.sh --monitors
./scripts/module4.sh --sequencers
./scripts/module4.sh --tlm
./scripts/module4.sh --scoreboards
./scripts/module4.sh --agents

# Run tests
./scripts/module4.sh --uvm-tests

# Run everything
./scripts/module4.sh --all-examples --uvm-tests
```

**Run examples individually:**
```bash
# Compile and run UVM examples
cd module4/examples/transactions
verilator -sv --cc --exe --timing --trace \
    -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI \
    --binary $UVM_HOME/src/uvm_pkg.sv transactions.sv transactions.cpp \
    --top-module transactions
make -C obj_dir -f Vtransactions.mk
./obj_dir/Vtransactions

# Run UVM tests
cd module4/tests/uvm_tests
make SIM=verilator TEST=test_complete_agent_uvm
```

## Design Architecture

### 1. UVM agent internal architecture

| Component | Role |
|-----------|------|
| `uvm_sequencer` | Arbitrates sequences; exports `seq_item_export` |
| `uvm_driver` | `seq_item_port` pulls items; drives virtual interface |
| `uvm_monitor` | Passive observation; broadcasts via analysis port |
| `uvm_agent` | Configures active/passive; builds child components |
| `uvm_sequence` | Produces randomized/constrained transactions |

- **Active agent**: sequencer + driver + monitor (generates and observes stimulus)
- **Passive agent**: monitor only (observation/checking on monitored bus)
- Agent `is_active` config selects build-time component set
- Sequencer-driver TLM: `driver.seq_item_port.connect(sequencer.seq_item_export)`

### 2. Transaction-level data path

| Step | Artifact | Description |
|------|----------|-------------|
| 1 | Sequence | `randomize()` transaction fields |
| 2 | Sequencer | Sends item to driver via TLM port |
| 3 | Driver | Drives interface signals from item |
| 4 | DUT | Responds on bus/interface |
| 5 | Monitor | Captures pin activity → transaction |
| 6 | Scoreboard | Compares expected vs observed (Module 4 examples) |

- **TLM ports**: `uvm_analysis_port` / `uvm_analysis_export` for monitor → scoreboard
- Transactions implement `do_copy`, `do_compare`, `convert2string` for debug and checking
- **Execution sequence**: build agent → connect TLM → start sequence in `run_phase`

### 3. Module 4 example progression

- `examples/transactions/` → data modeling fundamentals
- `examples/drivers/`, `monitors/`, `sequencers/` → individual components
- `examples/tlm/`, `scoreboards/` → communication and checking
- `examples/agents/` → integrated active agent
- `tests/uvm_tests/test_complete_agent_uvm.sv` — full agent on interface DUT

## Verification & Testing Methods

### 1. Component-level verification strategy

- Verify each component **in isolation** before agent integration
- Driver: loopback or simple slave model confirms pin wiggles match items
- Monitor: drive known patterns; confirm reconstructed transactions
- Sequencer: run single sequence; count items completed vs requested

### 2. Agent integration and closure

- Connect monitor analysis port to scoreboard export in `connect_phase`
- Use `uvm_config_db` to pass virtual interface to driver and monitor
- **Regression**: `./scripts/module4.sh --all-examples` then `--uvm-tests`
- **Pass criteria**: scoreboard match count equals transaction count; no UVM_ERROR
- Waveform optional — rely on transaction logs and scoreboard summary first

## Topics Covered

### 1. UVM Agent Architecture

- **Agent Overview and Structure**
  - Agent purpose and responsibilities
  - Agent components (driver, monitor, sequencer)
  - Agent configuration
  - Active vs passive agents

- **Agent Components**
  - Driver for stimulus generation
  - Monitor for observation
  - Sequencer for sequence management
  - Agent integration

#### Example 4.1: Transactions (`module4/examples/transactions/transactions.sv`)

**What it demonstrates:**
- **BaseTransaction**: Basic transaction with `data` and `address` fields
- **ExtendedTransaction**: Extended transaction with `control` and `status` fields
- **ConstrainedTransaction**: Transaction with randomization constraints
- **Transaction Operations**: Copy, comparison, and string conversion

**Transaction Methods and Functions:**

1. **String Conversion Method:**
   ```systemverilog
   function string convert2string();
       return $sformatf("data=0x%02h, addr=0x%04h", data, address);
   endfunction
   ```
   - **Purpose**: Provide human-readable string representation
   - **Usage**: Debugging, logging, reporting
   - **Key**: Override from `uvm_object` base class

2. **Deep Copy Method:**
   ```systemverilog
   function void do_copy(uvm_object rhs);
       BaseTransaction txn;
       if (!$cast(txn, rhs)) begin
           `uvm_fatal("COPY", "Copy failed: wrong type")
           return;
       end
       super.do_copy(rhs);  // Copy base class fields
       data = txn.data;      // Copy transaction fields
       address = txn.address;
   endfunction
   ```
   - **Purpose**: Create independent copy of transaction
   - **Usage**: `txn2.copy(txn1)` - creates deep copy
   - **Key**: Must call `super.do_copy(rhs)` first, then copy all fields

3. **Comparison Method:**
   ```systemverilog
   function bit do_compare(uvm_object rhs, uvm_comparer comparer);
       BaseTransaction txn;
       if (!$cast(txn, rhs)) return 0;
       return (data == txn.data) && (address == txn.address);
   endfunction
   ```
   - **Purpose**: Compare two transactions for equality
   - **Usage**: `if (txn1.compare(txn2))` - returns 1 if equal
   - **Key**: Returns 1 if all fields match, 0 otherwise

4. **Randomization Method:**
   ```systemverilog
   // In ConstrainedTransaction
   rand logic [7:0] data;
   rand logic [15:0] address;
   
   constraint address_aligned {
       address[1:0] == 2'b00;  // 4-byte aligned
   }
   
   constraint data_nonzero {
       data != 8'h00;
   }
   
   // Usage
   if (txn.randomize()) begin
       // txn.data and txn.address now have valid random values
   end
   ```
   - **Purpose**: Generate random values satisfying constraints
   - **Usage**: `txn.randomize()` - returns 1 if successful
   - **Key**: Constraints ensure protocol compliance

5. **Post-Randomize Method:**
   ```systemverilog
   function void post_randomize();
       // Called automatically after randomize() succeeds
       // Calculate derived fields based on randomized values
       expected_result = data + 1;
       checksum = calculate_checksum(data, address);
   endfunction
   ```
   - **Purpose**: Post-process after randomization
   - **Usage**: Calculate derived fields, validate constraints
   - **Key**: Called automatically after `randomize()` succeeds
   - **Example**: Calculate expected results, checksums, derived values

6. **Type Casting in Copy/Compare:**
   ```systemverilog
   // $cast() usage in do_copy and do_compare
   function void do_copy(uvm_object rhs);
       BaseTransaction txn;
       // $cast returns 1 if successful, 0 if type mismatch
       if (!$cast(txn, rhs)) begin
           `uvm_fatal("COPY", "Copy failed: wrong type")
           return;
       end
       // Now safe to use txn as BaseTransaction
       data = txn.data;
   endfunction
   ```
   - **Purpose**: Type-safe conversion from `uvm_object` to specific type
   - **Usage**: Required in `do_copy()` and `do_compare()`
   - **Key**: Always check return value, handle type mismatch

5. **Extended Transaction Methods:**
   ```systemverilog
   // Override convert2string to include extended fields
   function string convert2string();
       return $sformatf("%s, ctrl=0x%02h, status=0x%02h", 
                       super.convert2string(), control, status);
   endfunction
   
   // Override do_copy to include extended fields
   function void do_copy(uvm_object rhs);
       ExtendedTransaction txn;
       super.do_copy(rhs);  // Copy base fields
       if (!$cast(txn, rhs)) return;
       control = txn.control;  // Copy extended fields
       status = txn.status;
   endfunction
   
   // Override do_compare to include extended fields
   function bit do_compare(uvm_object rhs, uvm_comparer comparer);
       ExtendedTransaction txn;
       if (!$cast(txn, rhs)) return 0;
       return super.do_compare(rhs, comparer) && 
              (control == txn.control) && (status == txn.status);
   endfunction
   ```
   - **Purpose**: Extend base transaction with additional fields
   - **Key**: Must call `super` methods to handle base class fields

**Key Concepts:**
- Transaction class design extending `uvm_sequence_item`
- Transaction fields and data members
- Transaction copy and comparison operations
- Extended transactions with inheritance
- Constrained random transactions
- **`convert2string()`** for debugging and logging
- **`do_copy()`** for deep copying transactions
- **`do_compare()`** for transaction comparison
- **`randomize()`** for constrained random generation
- **Constraints** ensure protocol compliance

**Execution:**
```bash
# Using orchestrator script (recommended)
./scripts/module4.sh --transactions

# Or compile directly with Verilator
cd module4/examples/transactions
verilator -sv --cc --exe --timing --trace \
    -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI \
    --binary $UVM_HOME/src/uvm_pkg.sv transactions.sv transactions.cpp \
    --top-module transactions
make -C obj_dir -f Vtransactions.mk
./obj_dir/Vtransactions
```

**Verified Output:**
- Transaction creation and initialization
- Transaction copy operations
- Transaction comparison operations
- Extended transaction inheritance
- Constrained random transaction generation

### 2. UVM Driver Implementation

- **Driver Purpose and Responsibilities**
  - Stimulus generation
  - Protocol implementation
  - Signal driving
  - Transaction-to-signal conversion

- **Driver Implementation**
  - Driver class structure
  - Sequencer communication
  - Transaction reception
  - Signal driving patterns

#### Example 4.2: Drivers (`module4/examples/drivers/drivers.sv`)

**What it demonstrates:**
- **SimpleDriver**: Basic driver implementation with transaction reception
- **ProtocolDriver**: Protocol-aware driver with handshaking
- **Driver-Sequencer Communication**: Using `seq_item_port` for transaction flow
- **Signal Driving**: Converting transactions to DUT signals

**Driver Methods and Tasks:**

1. **Get Next Transaction (TLM Port Method):**
   ```systemverilog
   task run_phase(uvm_phase phase);
       forever begin
           seq_item_port.get_next_item(txn);  // Blocking call
           // Process transaction
           seq_item_port.item_done();
       end
   endtask
   ```
   - **Purpose**: Get transaction from sequencer (blocking)
   - **Usage**: Called in driver's `run_phase()` forever loop
   - **Key**: Blocks until sequencer provides transaction

2. **Signal Transaction Completion:**
   ```systemverilog
   seq_item_port.item_done();  // Signal completion to sequencer
   ```
   - **Purpose**: Signal that transaction processing is complete
   - **Usage**: Called after driving transaction to DUT
   - **Key**: Allows sequencer to provide next transaction

3. **Drive Transaction Task:**
   ```systemverilog
   task drive_transaction(SimpleTransaction txn);
       // Drive DUT signals via virtual interface
       vif.data <= txn.data;
       vif.address <= txn.address;
       vif.valid <= 1'b1;
       @(posedge vif.clk);
       #1;
       vif.valid <= 1'b0;
   endtask
   ```
   - **Purpose**: Convert transaction to DUT signals
   - **Usage**: Called after `get_next_item()`
   - **Key**: Implements protocol-specific driving logic

4. **Protocol Driver Pattern:**
   ```systemverilog
   task run_phase(uvm_phase phase);
       forever begin
           seq_item_port.get_next_item(txn);
           
           // Protocol handshake
           vif.request <= 1'b1;
           wait(vif.grant);  // Wait for grant
           
           // Drive transaction
           vif.data <= txn.data;
           @(posedge vif.clk);
           
           // Complete
           vif.request <= 1'b0;
           seq_item_port.item_done();
       end
   endtask
   ```
   - **Purpose**: Implement protocol-specific handshaking
   - **Key**: Handles request/grant, timing, protocol compliance

5. **Driver-Sequencer Connection:**
   ```systemverilog
   function void connect_phase(uvm_phase phase);
       super.connect_phase(phase);
       driver.seq_item_port.connect(sequencer.seq_item_export);
   endfunction
   ```
   - **Purpose**: Connect driver to sequencer
   - **Usage**: In agent's `connect_phase()`
   - **Key**: Establishes TLM communication channel

**Key Concepts:**
- Driver class structure extending `uvm_driver`
- Transaction reception from sequencer via `seq_item_port`
- Signal driving to DUT
- Driver-sequencer communication
- Protocol-specific driving patterns
- **`get_next_item()`** - Get transaction from sequencer (blocking)
- **`item_done()`** - Signal transaction completion
- **`drive_transaction()`** - Convert transaction to signals
- **TLM connection** - `seq_item_port.connect(sequencer.seq_item_export)`
- **Forever loop** - Driver continuously processes transactions

**Execution:**
```bash
./scripts/module4.sh --drivers
```

**Verified Output:**
- Driver creation and initialization
- Transaction reception from sequencer
- Signal driving to DUT
- Protocol-specific driving patterns
- Driver-sequencer communication

### 3. UVM Monitor Implementation

- **Monitor Purpose and Responsibilities**
  - DUT observation
  - Signal sampling
  - Transaction creation
  - Analysis port usage

- **Monitor Implementation**
  - Monitor class structure
  - Signal sampling
  - Transaction creation
  - Analysis port forwarding

#### Example 4.3: Monitors (`module4/examples/monitors/monitors.sv`)

**What it demonstrates:**
- **SimpleMonitor**: Basic monitor implementation with signal sampling
- **ProtocolMonitor**: Protocol-aware monitor with handshake monitoring
- **Transaction Creation**: Creating transactions from sampled signals
- **Analysis Port**: Forwarding transactions via analysis port

**Monitor Methods and Tasks:**

1. **Analysis Port Write Method:**
   ```systemverilog
   task run_phase(uvm_phase phase);
       forever begin
           @(posedge vif.clk);
           if (vif.valid && vif.ready) begin
               txn = MonitorTransaction::type_id::create("txn");
               txn.data = vif.data;
               txn.address = vif.address;
               txn.result = vif.result;
               ap.write(txn);  // Broadcast to subscribers
           end
       end
   endtask
   ```
   - **Purpose**: Broadcast transaction to all subscribers
   - **Usage**: Called after creating transaction from sampled signals
   - **Key**: Non-blocking, broadcasts to all connected subscribers

2. **Analysis Port Creation:**
   ```systemverilog
   function new(string name, uvm_component parent);
       super.new(name, parent);
       ap = new("ap", this);  // Create analysis port
   endfunction
   ```
   - **Purpose**: Create analysis port in constructor
   - **Key**: Analysis ports created in constructor, not build_phase

3. **Signal Sampling Pattern:**
   ```systemverilog
   task run_phase(uvm_phase phase);
       forever begin
           // Wait for protocol event
           @(posedge vif.clk);
           wait(vif.valid && vif.ready);
           
           // Sample signals
           txn = MonitorTransaction::type_id::create("txn");
           txn.data = vif.data;
           txn.address = vif.address;
           txn.result = vif.result;
           
           // Broadcast
           ap.write(txn);
       end
   endtask
   ```
   - **Purpose**: Sample DUT signals and create transactions
   - **Key**: Monitor is passive (doesn't drive DUT)

4. **Analysis Port Connection:**
   ```systemverilog
   function void connect_phase(uvm_phase phase);
       super.connect_phase(phase);
       monitor.ap.connect(scoreboard.imp);  // Connect to scoreboard
   endfunction
   ```
   - **Purpose**: Connect monitor to subscribers (scoreboard, coverage, etc.)
   - **Key**: One monitor can connect to multiple subscribers

5. **Subscriber Write Method:**
   ```systemverilog
   class MonitorSubscriber extends uvm_subscriber #(MonitorTransaction);
       function void write(MonitorTransaction t);
           transaction_count++;
           `uvm_info("SUBSCRIBER", $sformatf("Received: %s", t.convert2string()), UVM_MEDIUM)
       endfunction
   endclass
   ```
   - **Purpose**: Receive transactions from analysis port
   - **Usage**: Scoreboard, coverage collector, logger
   - **Key**: Automatically called when monitor writes to analysis port

**Key Concepts:**
- Monitor class structure extending `uvm_monitor`
- Signal sampling from DUT
- Transaction creation from sampled signals
- Analysis port usage
- Protocol-specific monitoring
- **`ap.write(txn)`** - Broadcast transaction to subscribers
- **Analysis port creation** - In constructor, not build_phase
- **Signal sampling** - Wait for protocol events, sample signals
- **Transaction creation** - Create from sampled signals
- **Subscriber pattern** - Components receive via `write()` method

**Execution:**
```bash
./scripts/module4.sh --monitors
```

**Verified Output:**
- Monitor creation and initialization
- Signal sampling from DUT
- Transaction creation from signals
- Analysis port forwarding
- Protocol-specific monitoring

### 4. UVM Sequencer and Sequences

- **Sequencer Implementation**
  - Sequencer purpose
  - Sequence item management
  - Sequence execution
  - Sequencer-driver communication

- **Sequence Implementation**
  - Sequence items (`uvm_sequence_item`)
  - Sequences (`uvm_sequence`)
  - Sequence execution
  - Sequence libraries

#### Example 4.4: Sequencers (`module4/examples/sequencers/sequencers.sv`)

**What it demonstrates:**
- **SimpleSequence**: Basic sequence implementation
- **ExtendedSequence**: Extended sequence with configurable item count
- **Sequence Execution**: Starting sequences on sequencers
- **Sequence Item Generation**: Creating and sending sequence items

**Sequence Methods and Tasks:**

1. **Sequence Body Task:**
   ```systemverilog
   class SimpleSequence extends uvm_sequence #(SeqItem);
       task body();
           SeqItem item;
           for (int i = 0; i < 5; i++) begin
               item = SeqItem::type_id::create("item");
               if (!item.randomize()) begin
                   `uvm_error("SEQUENCE", "Randomization failed")
               end
               start_item(item);
               finish_item(item);
           end
       endtask
   endclass
   ```
   - **Purpose**: Generate and send sequence items
   - **Usage**: Main sequence logic
   - **Key**: Called when sequence is started

2. **Start Item Method:**
   ```systemverilog
   start_item(item);  // Request item from sequencer
   ```
   - **Purpose**: Request sequence item from sequencer
   - **Usage**: Called before setting item fields
   - **Key**: Blocking call, waits for sequencer availability

3. **Finish Item Method:**
   ```systemverilog
   finish_item(item);  // Send item to driver
   ```
   - **Purpose**: Send sequence item to driver
   - **Usage**: Called after setting item fields
   - **Key**: Item flows: Sequence → Sequencer → Driver

4. **Start Sequence Method:**
   ```systemverilog
   task run_phase(uvm_phase phase);
       seq = SimpleSequence::type_id::create("seq");
       seq.start(sequencer);  // Start sequence on sequencer
   endtask
   ```
   - **Purpose**: Start sequence execution on sequencer
   - **Usage**: In test's `run_phase()`
   - **Key**: Sequence executes `body()` task

5. **Sequence Item Randomization:**
   ```systemverilog
   class SeqItem extends uvm_sequence_item;
       rand logic [7:0] data;
       rand logic [15:0] address;
       
       constraint valid_address {
           address[1:0] == 2'b00;  // 4-byte aligned
       }
   endclass
   
   // In sequence body
   item = SeqItem::type_id::create("item");
   if (!item.randomize()) begin
       `uvm_error("SEQUENCE", "Randomization failed")
   end
   ```
   - **Purpose**: Generate random test vectors
   - **Key**: Constraints ensure valid values

6. **Extended Sequence Pattern:**
   ```systemverilog
   class ExtendedSequence extends uvm_sequence #(SeqItem);
       int num_items = 10;  // Configurable item count
       
       task body();
           for (int i = 0; i < num_items; i++) begin
               item = SeqItem::type_id::create($sformatf("item_%0d", i));
               item.randomize();
               start_item(item);
               finish_item(item);
           end
       endtask
   endclass
   ```
   - **Purpose**: Configurable sequence with parameters
   - **Key**: Can be configured via ConfigDB or constructor

**Key Concepts:**
- Sequencer implementation
- Sequence items (`uvm_sequence_item`)
- Sequences (`uvm_sequence`)
- Sequence execution
- Sequence libraries
- **`body()`** - Main sequence logic (generates items)
- **`start_item(item)`** - Request item from sequencer
- **`finish_item(item)`** - Send item to driver
- **`seq.start(sequencer)`** - Start sequence execution
- **Item flow**: Sequence → Sequencer → Driver

**Execution:**
```bash
./scripts/module4.sh --sequencers
```

**Verified Output:**
- Sequencer creation and initialization
- Sequence item generation
- Sequence execution
- Sequencer-driver communication
- Sequence libraries

### 5. TLM (Transaction-Level Modeling)

- **TLM Interfaces**
  - Put/get interfaces
  - Peek interfaces
  - Transport interfaces
  - Analysis interfaces

- **TLM Components**
  - TLM ports and exports
  - TLM FIFOs
  - Analysis ports and exports
  - TLM connections

#### Example 4.5: TLM (`module4/examples/tlm/tlm.sv`)

**What it demonstrates:**
- **TlmProducer**: Uses `uvm_blocking_put_port` to produce transactions
- **TlmConsumer**: Uses `uvm_blocking_get_export` to consume transactions
- **AnalysisProducer**: Uses `uvm_analysis_port` to broadcast transactions
- **AnalysisSubscriber**: Uses `uvm_subscriber` to receive transactions

**TLM Methods and Patterns:**

1. **TLM Put Port Method:**
   ```systemverilog
   class TlmProducer extends uvm_component;
       uvm_blocking_put_port #(TlmTransaction) put_port;
       
       function new(string name, uvm_component parent);
           super.new(name, parent);
           put_port = new("put_port", this);
       endfunction
       
       task run_phase(uvm_phase phase);
           txn = TlmTransaction::type_id::create("txn");
           put_port.put(txn);  // Blocking put
       endtask
   endclass
   ```
   - **Purpose**: Send transaction to consumer (blocking)
   - **Usage**: Producer sends transactions
   - **Key**: Blocks until consumer receives

2. **TLM Get Export Method:**
   ```systemverilog
   class TlmConsumer extends uvm_component;
       uvm_blocking_get_export #(TlmTransaction) get_export;
       
       function new(string name, uvm_component parent);
           super.new(name, parent);
           get_export = new("get_export", this);
       endfunction
       
       task run_phase(uvm_phase phase);
           get_export.get(txn);  // Blocking get
       endtask
   endclass
   ```
   - **Purpose**: Receive transaction from producer (blocking)
   - **Usage**: Consumer receives transactions
   - **Key**: Blocks until producer sends

3. **TLM FIFO Usage:**
   ```systemverilog
   uvm_tlm_fifo #(TlmTransaction) fifo;
   
   function void build_phase(uvm_phase phase);
       fifo = uvm_tlm_fifo#(TlmTransaction)::type_id::create("fifo", this);
   endfunction
   
   function void connect_phase(uvm_phase phase);
       producer.put_port.connect(fifo.put_export);
       consumer.get_export.connect(fifo.get_export);
   endfunction
   ```
   - **Purpose**: Buffer between producer and consumer
   - **Usage**: Decouples producer and consumer timing
   - **Key**: FIFO stores transactions temporarily

4. **Analysis Port Write:**
   ```systemverilog
   class AnalysisProducer extends uvm_component;
       uvm_analysis_port #(TlmTransaction) ap;
       
       task run_phase(uvm_phase phase);
           txn = TlmTransaction::type_id::create("txn");
           ap.write(txn);  // Non-blocking broadcast
       endtask
   endclass
   ```
   - **Purpose**: Broadcast transaction to multiple subscribers
   - **Usage**: One-to-many communication
   - **Key**: Non-blocking, broadcasts to all subscribers

5. **Analysis Subscriber Write:**
   ```systemverilog
   class AnalysisSubscriber extends uvm_subscriber #(TlmTransaction);
       function void write(TlmTransaction t);
           received_count++;
           `uvm_info("SUBSCRIBER", $sformatf("Received: %s", t.convert2string()), UVM_MEDIUM)
       endfunction
   endclass
   ```
   - **Purpose**: Receive transactions from analysis port
   - **Usage**: Scoreboard, coverage, logger
   - **Key**: Automatically called when producer writes

6. **TLM Connection Patterns:**
   ```systemverilog
   // Direct connection: Producer -> Consumer
   producer.put_port.connect(consumer.put_export);
   
   // Via FIFO: Producer -> FIFO -> Consumer
   producer.put_port.connect(fifo.put_export);
   consumer.get_export.connect(fifo.get_export);
   
   // Analysis: Producer -> Multiple Subscribers
   producer.ap.connect(subscriber1.analysis_export);
   producer.ap.connect(subscriber2.analysis_export);
   ```

**Key Concepts:**
- TLM interfaces (put, get, peek, transport)
- TLM ports and exports
- TLM FIFOs
- Analysis ports and exports
- TLM connections
- **`put_port.put(txn)`** - Send transaction (blocking)
- **`get_export.get(txn)`** - Receive transaction (blocking)
- **`ap.write(txn)`** - Broadcast transaction (non-blocking)
- **`write(t)`** - Receive in subscriber (automatic)
- **TLM FIFO** - Decouples producer and consumer
- **Analysis port** - One-to-many communication

**Note**: Some TLM features may have limited Verilator support. See documentation for workarounds.

**Execution:**
```bash
./scripts/module4.sh --tlm
```

**Verified Output:**
- TLM port/export creation
- TLM connection establishment
- Transaction flow via TLM
- Analysis port broadcasting
- TLM FIFO usage

### 6. Scoreboards

- **Scoreboard Purpose**
  - Result checking
  - Transaction comparison
  - Pass/fail tracking
  - Verification closure

- **Scoreboard Implementation**
  - Scoreboard structure
  - Transaction storage
  - Comparison logic
  - Result reporting

#### Example 4.6: Scoreboards (`module4/examples/scoreboards/scoreboards.sv`)

**What it demonstrates:**
- **SimpleScoreboard**: Basic scoreboard with transaction comparison
- **Transaction Storage**: Storing expected and actual transactions
- **Comparison Logic**: Comparing transactions for verification
- **Result Reporting**: Reporting pass/fail counts

**Scoreboard Methods and Functions:**

1. **Write Method (Analysis Export):**
   ```systemverilog
   class SimpleScoreboard extends uvm_scoreboard;
       uvm_analysis_imp #(ScoreboardTransaction, SimpleScoreboard) imp;
       ScoreboardTransaction expected_queue[$];
       
       function void write(ScoreboardTransaction txn);
           ScoreboardTransaction expected;
           if (expected_queue.size() > 0) begin
               expected = expected_queue.pop_front();
               if (txn.actual_result == expected.expected_result) begin
                   pass_count++;
                   `uvm_info("SCOREBOARD", "PASS", UVM_MEDIUM)
               end else begin
                   fail_count++;
                   `uvm_error("SCOREBOARD", "FAIL")
               end
           end
       endfunction
   endclass
   ```
   - **Purpose**: Receive transactions from monitor
   - **Usage**: Called automatically when monitor writes to analysis port
   - **Key**: Compares actual vs expected results

2. **Add Expected Method:**
   ```systemverilog
   function void add_expected(ScoreboardTransaction txn);
       expected_queue.push_back(txn);
   endfunction
   ```
   - **Purpose**: Store expected transaction for later comparison
   - **Usage**: Called before actual transaction arrives
   - **Key**: Queue stores expected transactions in order

3. **Queue Operations:**
   ```systemverilog
   expected_queue.push_back(txn);      // Add to end of queue
   expected = expected_queue.pop_front();  // Remove from front
   if (expected_queue.size() > 0) begin  // Check if queue not empty
   ```
   - **Purpose**: Manage expected transaction queue
   - **Key**: FIFO queue ensures order matching

4. **Comparison Logic:**
   ```systemverilog
   if (txn.actual_result == expected.expected_result) begin
       pass_count++;
       `uvm_info("SCOREBOARD", "PASS", UVM_MEDIUM)
   end else begin
       fail_count++;
       `uvm_error("SCOREBOARD", $sformatf("FAIL: expected=0x%02h, got=0x%02h",
                 expected.expected_result, txn.actual_result))
   end
   ```
   - **Purpose**: Compare actual vs expected results
   - **Key**: Reports pass/fail, tracks counts

5. **Report Phase:**
   ```systemverilog
   function void report_phase(uvm_phase phase);
       super.report_phase(phase);
       `uvm_info("SCOREBOARD", $sformatf("Results: Pass=%0d, Fail=%0d",
                 pass_count, fail_count), UVM_MEDIUM)
       if (fail_count > 0) begin
           `uvm_error("SCOREBOARD", "Test FAILED")
       end else begin
           `uvm_info("SCOREBOARD", "Test PASSED", UVM_MEDIUM)
       end
   endfunction
   ```
   - **Purpose**: Report final test results
   - **Usage**: Called in cleanup phase
   - **Key**: Provides test pass/fail summary

6. **Scoreboard Connection:**
   ```systemverilog
   function void connect_phase(uvm_phase phase);
       super.connect_phase(phase);
       monitor.ap.connect(scoreboard.imp);  // Connect monitor to scoreboard
   endfunction
   ```
   - **Purpose**: Connect monitor to scoreboard
   - **Key**: Monitor writes → Scoreboard receives

**Key Concepts:**
- Scoreboard purpose and structure
- Transaction comparison
- Result checking
- Pass/fail tracking
- **`write(txn)`** - Receive transaction from monitor
- **`add_expected(txn)`** - Store expected transaction
- **Queue operations** - `push_back()`, `pop_front()`, `size()`
- **Comparison logic** - Compare actual vs expected
- **Report phase** - Final test results
- **Analysis export** - `uvm_analysis_imp` receives transactions

**Execution:**
```bash
./scripts/module4.sh --scoreboards
```

**Verified Output:**
- Scoreboard creation and initialization
- Transaction storage
- Transaction comparison
- Pass/fail tracking
- Result reporting

### 7. Complete Agent Example

- **Building Complete Agents**
  - Agent structure
  - Component integration
  - Agent configuration
  - Active vs passive agents

#### Example 4.7: Complete Agents (`module4/examples/agents/agents.sv`)

**What it demonstrates:**
- **CompleteAgent**: Contains driver, monitor, and sequencer
- **Agent Configuration**: Configurable as active or passive
- **Component Integration**: Integrating all agent components
- **Agent Testing**: Testing complete agent functionality

**Agent Methods and Patterns:**

1. **Agent Build Phase:**
   ```systemverilog
   class CompleteAgent extends uvm_agent;
       MyDriver driver;
       MyMonitor monitor;
       uvm_sequencer #(MyTransaction) sequencer;
       bit is_active = 1;  // Active by default
       
       function void build_phase(uvm_phase phase);
           super.build_phase(phase);
           
           // Get agent configuration from ConfigDB
           if (!uvm_config_db#(bit)::get(this, "", "is_active", is_active)) begin
               is_active = 1;  // Default to active
           end
           
           // Create monitor (always created in both modes)
           monitor = MyMonitor::type_id::create("monitor", this);
           
           // Create driver and sequencer only if active
           if (is_active) begin
               driver = MyDriver::type_id::create("driver", this);
               sequencer = uvm_sequencer#(MyTransaction)::type_id::create("sequencer", this);
           end
       endfunction
   endclass
   ```
   - **Purpose**: Create agent components based on configuration
   - **Key**: Active agent has driver+sequencer, passive has monitor only
   - **Monitor**: Always created (both active and passive modes)
   - **Driver/Sequencer**: Only created in active mode

2. **Agent Connect Phase:**
   ```systemverilog
   function void connect_phase(uvm_phase phase);
       super.connect_phase(phase);
       
       // Connect driver to sequencer (only if active)
       if (is_active) begin
           driver.seq_item_port.connect(sequencer.seq_item_export);
       end
   endfunction
   ```
   - **Purpose**: Connect agent components
   - **Key**: Driver-sequencer connection only for active agents
   - **Note**: Monitor analysis port connected in environment's connect_phase

3. **Agent Configuration:**
   ```systemverilog
   // In test's build_phase (before creating agent)
   uvm_config_db#(bit)::set(this, "env.agent", "is_active", 1);  // Active
   uvm_config_db#(bit)::set(this, "env.agent", "is_active", 0);  // Passive
   
   // Or use UVM constants
   uvm_config_db#(bit)::set(this, "env.agent", "is_active", UVM_ACTIVE);
   uvm_config_db#(bit)::set(this, "env.agent", "is_active", UVM_PASSIVE);
   ```
   - **Purpose**: Configure agent as active or passive
   - **Usage**: Set before creating agent
   - **Key**: Active = driver+sequencer+monitor, Passive = monitor only
   - **Timing**: Must be set in test's build_phase before agent creation

4. **Agent Usage in Test:**
   ```systemverilog
   task run_phase(uvm_phase phase);
       phase.raise_objection(this);
       
       // Start sequence only if agent is active
       if (env.agent.is_active) begin
           seq.start(env.agent.sequencer);
       end
       
       #200;
       phase.drop_objection(this);
   endtask
   ```
   - **Purpose**: Use agent based on mode
   - **Key**: Check `is_active` before using driver/sequencer

**Key Concepts:**
- Agent structure
- Component integration
- Agent configuration
- Active vs passive agents
- **Active agent** - Driver + Sequencer + Monitor
- **Passive agent** - Monitor only
- **Configuration** - Via ConfigDB before creation
- **Component creation** - Based on active/passive mode
- **Connection** - Driver-sequencer only for active agents

**Execution:**
```bash
./scripts/module4.sh --agents
```

**Verified Output:**
- Complete agent creation
- Component integration
- Agent configuration
- Active/passive agent modes
- Agent functionality

## Learning Outcomes

By the end of this module, you should be able to:

- Design and implement transaction classes
- Create drivers for DUT stimulus generation
- Implement monitors for DUT observation
- Build sequencers and sequences for test generation
- Use TLM for component communication
- Create scoreboards for result checking
- Build complete agents with all components integrated
- Apply UVM component patterns in testbenches

## Exercises

1. **Transaction Modeling**
   - Create base transaction class
   - Implement transaction copy and comparison
   - Create extended transaction classes
   - Add constrained random transactions

2. **Driver Implementation**
   - Create driver class extending uvm_driver
   - Implement sequencer communication
   - Add signal driving logic
   - Test driver with sequences

3. **Monitor Implementation**
   - Create monitor class extending uvm_monitor
   - Implement signal sampling
   - Create transactions from signals
   - Forward transactions via analysis port

4. **Sequencer and Sequences**
   - Create sequencer class
   - Implement sequence classes
   - Generate sequence items
   - Test sequence execution

5. **TLM Communication**
   - Create TLM producer and consumer
   - Connect TLM ports and exports
   - Test transaction flow via TLM
   - Implement analysis ports

6. **Scoreboards**
   - Create scoreboard class
   - Implement transaction storage
   - Add comparison logic
   - Test result checking

7. **Complete Agents**
   - Build complete agent with all components
   - Configure agent as active or passive
   - Integrate agent into environment
   - Test complete agent functionality

## Execution Status

✅ **Module 4 has been successfully executed and verified.**

**Verification Date:** 2026-01-24  
**Status:** All examples and tests passing  
**Verilator Version:** 5.045  
**UVM Library:** UVM 2017 (1800.2-2017-1.0)  
**Test Results:**
- ✅ 7 SystemVerilog UVM examples executed successfully
- ✅ 1 UVM test compiled and passed
- ⏱️ Total execution time: ~26 minutes (UVM compilation takes significant time due to template instantiations)

**Examples Executed:**
1. ✅ Transactions - Transaction-level modeling and operations demonstrated
2. ✅ Drivers - Driver implementation demonstrated (4 driver messages)
3. ✅ Monitors - Monitor implementation demonstrated (2 monitor messages)
4. ✅ Sequencers - Sequencer and sequence implementation demonstrated (2 sequence messages)
5. ✅ TLM - TLM communication demonstrated (7 producer, 8 consumer, 4 subscriber messages)
6. ✅ Scoreboards - Scoreboard implementation demonstrated
7. ✅ Agents - Complete agent example demonstrated

**Note:** UVM compilation with Verilator takes approximately 20-30 minutes due to extensive template instantiations, but all tests execute successfully.

**Execution Logs:** Full execution logs are available in `module4/module4.log` and individual example logs in each example directory (`compile.log`, `run.log`).

## Assessment

- [x] Can design and implement transaction classes
- [x] Can create drivers for DUT stimulus
- [x] Can implement monitors for DUT observation
- [x] Can build sequencers and sequences
- [x] Can use TLM for component communication
- [x] Can create scoreboards for result checking
- [x] Can build complete agents
- [x] Understands UVM component patterns

## Next Steps

After completing this module, proceed to [Module 5: Advanced UVM Concepts](MODULE5.md) for advanced UVM features including virtual sequences, coverage models, advanced configuration, callbacks, and register models.

## Quick Reference: UVM Component Methods Cheat Sheet

### Transaction Methods

| Method | Syntax | Purpose |
|--------|--------|---------|
| **String** | `convert2string()` | String representation |
| **Copy** | `do_copy(uvm_object rhs)` | Deep copy implementation |
| **Compare** | `do_compare(uvm_object rhs, ...)` | Comparison implementation |
| **Randomize** | `randomize()` | Constrained random generation |
| **Public Copy** | `copy(uvm_object rhs)` | Public copy (calls do_copy) |
| **Public Compare** | `compare(uvm_object rhs)` | Public compare (calls do_compare) |

### Driver Methods

| Method | Syntax | Purpose |
|--------|--------|---------|
| **Get Item** | `seq_item_port.get_next_item(txn)` | Get transaction (blocking) |
| **Item Done** | `seq_item_port.item_done()` | Signal completion |
| **Drive** | `drive_transaction(txn)` | Drive to DUT (user-defined) |

### Monitor Methods

| Method | Syntax | Purpose |
|--------|--------|---------|
| **Write** | `ap.write(txn)` | Broadcast transaction |
| **Create Port** | `ap = new("ap", this)` | Create analysis port |

### Sequence Methods

| Method | Syntax | Purpose |
|--------|--------|---------|
| **Body** | `task body()` | Main sequence logic |
| **Start Item** | `start_item(item)` | Request item |
| **Finish Item** | `finish_item(item)` | Send item |
| **Start** | `seq.start(sequencer)` | Start sequence |

### TLM Methods

| Method | Syntax | Purpose |
|--------|--------|---------|
| **Put** | `put_port.put(txn)` | Send (blocking) |
| **Get** | `get_export.get(txn)` | Receive (blocking) |
| **Write** | `ap.write(txn)` | Broadcast (non-blocking) |
| **Subscriber Write** | `write(t)` | Receive (automatic) |

### Scoreboard Methods

| Method | Syntax | Purpose |
|--------|--------|---------|
| **Write** | `write(txn)` | Receive transaction |
| **Add Expected** | `add_expected(txn)` | Store expected |
| **Queue Push** | `queue.push_back(txn)` | Add to queue |
| **Queue Pop** | `queue.pop_front()` | Remove from queue |
| **Queue Size** | `queue.size()` | Get queue size |

### Connection Patterns

```systemverilog
// Driver-Sequencer
driver.seq_item_port.connect(sequencer.seq_item_export);

// Monitor-Scoreboard
monitor.ap.connect(scoreboard.imp);

// TLM Producer-Consumer
producer.put_port.connect(fifo.put_export);
consumer.get_export.connect(fifo.get_export);

// Analysis One-to-Many
producer.ap.connect(subscriber1.analysis_export);
producer.ap.connect(subscriber2.analysis_export);
```

### Common Patterns

**Transaction Copy:**
```systemverilog
function void do_copy(uvm_object rhs);
    Transaction txn;
    if (!$cast(txn, rhs)) return;
    super.do_copy(rhs);
    data = txn.data;
endfunction
```

**Driver Loop:**
```systemverilog
task run_phase(uvm_phase phase);
    forever begin
        seq_item_port.get_next_item(txn);
        drive_transaction(txn);
        seq_item_port.item_done();
    end
endtask
```

**Monitor Loop:**
```systemverilog
task run_phase(uvm_phase phase);
    forever begin
        @(posedge vif.clk);
        txn = Transaction::type_id::create("txn");
        ap.write(txn);
    end
endtask
```

**Sequence Body:**
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

### Complete Component Flow Example

**End-to-End Transaction Flow:**
```systemverilog
// 1. Test creates sequence
seq = MySequence::type_id::create("seq");

// 2. Test starts sequence
seq.start(sequencer);  // Sequence body() executes

// 3. Sequence generates items
task body();
    item = SeqItem::type_id::create("item");
    item.randomize();           // Randomize fields
    item.post_randomize();      // Calculate derived fields
    start_item(item);           // Request from sequencer
    finish_item(item);          // Send to driver
endtask

// 4. Driver receives transaction
task run_phase(uvm_phase phase);
    seq_item_port.get_next_item(txn);  // Get from sequencer
    drive_transaction(txn);             // Drive to DUT
    seq_item_port.item_done();         // Signal complete
endtask

// 5. Monitor observes DUT
task run_phase(uvm_phase phase);
    @(posedge vif.clk);
    txn = Transaction::type_id::create("txn");
    txn.data = vif.data;
    ap.write(txn);  // Broadcast to scoreboard
endtask

// 6. Scoreboard checks results
function void write(Transaction txn);
    expected = expected_queue.pop_front();
    if (txn.compare(expected)) begin  // Uses do_compare()
        pass_count++;
    end
endfunction
```

### Common Pitfalls and Solutions

**1. Forgetting super.do_copy() in Extended Classes:**
```systemverilog
// ❌ WRONG: Missing super call
function void do_copy(uvm_object rhs);
    ExtendedTransaction txn;
    if (!$cast(txn, rhs)) return;
    control = txn.control;  // Base fields not copied!
endfunction

// ✅ CORRECT: Call super first
function void do_copy(uvm_object rhs);
    ExtendedTransaction txn;
    super.do_copy(rhs);  // Copy base fields first
    if (!$cast(txn, rhs)) return;
    control = txn.control;  // Copy extended fields
endfunction
```

**2. Not Checking $cast() Return Value:**
```systemverilog
// ❌ WRONG: No check
function void do_copy(uvm_object rhs);
    BaseTransaction txn;
    $cast(txn, rhs);  // May fail silently
    data = txn.data;  // Crash if cast failed
endfunction

// ✅ CORRECT: Check return value
function void do_copy(uvm_object rhs);
    BaseTransaction txn;
    if (!$cast(txn, rhs)) begin
        `uvm_fatal("COPY", "Type mismatch")
        return;
    end
    data = txn.data;
endfunction
```

**3. Missing item_done() in Driver:**
```systemverilog
// ❌ WRONG: Missing item_done()
task run_phase(uvm_phase phase);
    forever begin
        seq_item_port.get_next_item(txn);
        drive_transaction(txn);
        // Missing item_done() - sequencer blocked!
    end
endtask

// ✅ CORRECT: Always call item_done()
task run_phase(uvm_phase phase);
    forever begin
        seq_item_port.get_next_item(txn);
        drive_transaction(txn);
        seq_item_port.item_done();  // Required!
    end
endtask
```

**4. Creating Analysis Port in build_phase:**
```systemverilog
// ❌ WRONG: Creating in build_phase
function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    ap = new("ap", this);  // Wrong phase
endfunction

// ✅ CORRECT: Create in constructor
function new(string name, uvm_component parent);
    super.new(name, parent);
    ap = new("ap", this);  // Correct phase
endfunction
```

**5. Not Checking Queue Size in Scoreboard:**
```systemverilog
// ❌ WRONG: No size check
function void write(Transaction txn);
    expected = expected_queue.pop_front();  // May fail if empty
endfunction

// ✅ CORRECT: Check size first
function void write(Transaction txn);
    if (expected_queue.size() > 0) begin
        expected = expected_queue.pop_front();
    end else begin
        `uvm_warning("SCOREBOARD", "No expected transaction")
    end
endfunction
```

### Best Practices Checklist

- [ ] ✅ Always call `super.do_copy(rhs)` in `do_copy()`
- [ ] ✅ Always call `super.do_compare()` in `do_compare()` for extended classes
- [ ] ✅ Use `$cast()` to verify type in `do_copy()` and `do_compare()`
- [ ] ✅ Check `$cast()` return value, handle type mismatch
- [ ] ✅ Create analysis ports in constructor, not build_phase
- [ ] ✅ Use `forever` loop in driver and monitor `run_phase()`
- [ ] ✅ Always call `item_done()` after processing transaction
- [ ] ✅ Store expected transactions before actual arrive
- [ ] ✅ Check queue size before `pop_front()` in scoreboard
- [ ] ✅ Use constraints for protocol-compliant randomization
- [ ] ✅ Override `convert2string()` for better debugging
- [ ] ✅ Use `post_randomize()` for derived field calculation
- [ ] ✅ Check `is_active` before using driver/sequencer in agents
- [ ] ✅ Set agent configuration before creating agent

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **UVM User's Guide**: Accellera Systems Initiative
- **Verilator Documentation**: https://verilator.org/
- **Verification Academy**: https://verificationacademy.com/
