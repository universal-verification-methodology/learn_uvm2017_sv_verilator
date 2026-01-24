# Module 6: Complex Testbenches

**Goal**: Build production-quality multi-agent testbenches

## Overview

This module covers building complex, production-quality testbenches with multiple agents, protocol verification, and system-level architecture. You'll learn how to coordinate multiple agents, verify protocols, implement protocol checkers, and build multi-channel scoreboards.

### Examples and Code Structure

This module includes comprehensive examples and testbenches located in the `module6/` directory:

```
module6/
├── examples/              # SystemVerilog UVM examples
│   ├── architecture/     # Testbench architecture examples
│   ├── multi_agent/      # Multi-agent environment examples
│   ├── protocol/         # Protocol verification examples
│   ├── protocol_checkers/# Protocol checker examples
│   └── scoreboards/      # Multi-channel scoreboard examples
├── dut/                   # Verilog/SystemVerilog Design Under Test
│   └── protocols/        # Protocol DUT modules
│       └── axi4_lite_slave.v
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
│       └── test_complex_testbench_uvm.sv
└── README.md             # Module 6 documentation
```

### Quick Start

**Run all examples using the orchestrator script:**
```bash
# Run all SystemVerilog UVM examples
./scripts/module6.sh

# Run specific examples
./scripts/module6.sh --architecture
./scripts/module6.sh --multi-agent
./scripts/module6.sh --protocol
./scripts/module6.sh --protocol-checkers
./scripts/module6.sh --scoreboards

# Run tests
./scripts/module6.sh --uvm-tests

# Run everything
./scripts/module6.sh --all-examples --uvm-tests

# Performance options
./scripts/module6.sh --jobs 12        # Use 12 parallel jobs
./scripts/module6.sh --no-clean       # Skip clean builds for faster iteration
```

**Run examples individually:**
```bash
# Compile and run SystemVerilog UVM examples
cd module6/examples/architecture
verilator -sv --cc --exe --timing --trace architecture.sv architecture.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" --top-module architecture
make -C obj_dir -f Varchitecture.mk
./obj_dir/Varchitecture

# Run UVM tests
cd module6/tests/uvm_tests
make SIM=verilator TEST=test_complex_testbench_uvm
```

## Topics Covered

### 1. Testbench Architecture

- **Hierarchical Component Organization**
  - Component hierarchy design
  - Separation of concerns
  - Component relationships
  - Environment structure

- **Component Integration**
  - Agent construction
  - Environment assembly
  - Component connections
  - Phase-based execution

- **Best Practices**
  - Clean component hierarchy
  - Reusable components
  - Configuration management
  - Maintainable testbench structure

#### Example 6.1: Testbench Architecture (`module6/examples/architecture/architecture.sv`)

**What it demonstrates:**
- **Transaction Class (`ArchTxn`)**: Base transaction with address, data, and write/read control
- **Sequencer (`ArchSequencer`)**: UVM sequencer for transaction flow control
- **Driver (`ArchDriver`)**: UVM driver that receives and drives transactions
- **Monitor (`ArchMonitor`)**: UVM monitor that observes DUT behavior
- **Agent (`ArchAgent`)**: UVM agent containing sequencer, driver, and monitor
- **Environment (`ArchEnv`)**: UVM environment containing agent instances
- **Sequence (`ArchSmokeSeq`)**: UVM sequence generating random transactions
- **Test (`ArchitectureTest`)**: Top-level UVM test orchestrating verification

**Architecture Methods and Patterns:**

1. **Transaction Randomization:**
   ```systemverilog
   class ArchTxn extends uvm_sequence_item;
       rand bit [31:0] addr;      // Randomizable address field
       rand bit [31:0] data;       // Randomizable data field
       rand bit is_write;          // Randomizable operation type
       
       // In sequence body()
       t = ArchTxn::type_id::create("t");
       void'(t.randomize() with { 
           is_write inside {0,1};  // Constraint: is_write must be 0 or 1
       });
   endclass
   ```
   - **Method Signature**: `function bit randomize();`
   - **Return Type**: `bit` (1 = success, 0 = failure)
   - **Purpose**: Generate random test vectors with constraints
   - **Usage**: Call after creating transaction, before sending to sequencer
   - **Key**: `void'()` suppresses Verilator warning about ignored return value
   - **Constraints**: Use `with { constraint_expression; }` for conditional randomization
   - **Example**: `void'(t.randomize() with { addr[31:16] == 16'h0000; });` constrains upper address bits

2. **Sequence Body with Repeat:**
   ```systemverilog
   task body();
       ArchTxn t;  // Transaction variable (local to body)
       
       // Generate 5 transactions
       repeat (5) begin
           // Step 1: Create transaction using factory
           t = ArchTxn::type_id::create("t");
           // Method: type_id::create(string name) -> returns object handle
           // Purpose: Factory-based creation enables overrides
           
           // Step 2: Randomize transaction
           void'(t.randomize() with { is_write inside {0,1}; });
           // Method: randomize() -> bit (success/failure)
           // Purpose: Generate random values for rand fields
           
           // Step 3: Start item (send to sequencer)
           start_item(t);
           // Method: start_item(uvm_sequence_item item) -> void
           // Purpose: Sends transaction to sequencer, waits for grant
           // Behavior: Blocks until sequencer grants access
           
           // Step 4: Finish item (wait for driver completion)
           finish_item(t);
           // Method: finish_item(uvm_sequence_item item) -> void
           // Purpose: Waits for driver to complete transaction
           // Behavior: Blocks until driver calls item_done()
       end
   endtask
   ```
   - **Method Signature**: `task body();` (no parameters, no return)
   - **Purpose**: Generate and send multiple transactions to sequencer
   - **Execution Flow**: 
     1. Create transaction → 2. Randomize → 3. Start item → 4. Finish item → 5. Repeat
   - **Key**: `repeat` loop generates multiple transactions sequentially
   - **Blocking Behavior**: `start_item()` and `finish_item()` both block
   - **Transaction Lifetime**: Transaction created in loop, sent to sequencer, then driver processes it

3. **Agent Component Creation:**
   ```systemverilog
   function void build_phase(uvm_phase phase);
       super.build_phase(phase);  // Call parent build_phase first
       // Method: super.build_phase(uvm_phase phase) -> void
       // Purpose: Initialize parent component hierarchy
       
       // Create sequencer
       seqr = ArchSequencer::type_id::create("seqr", this);
       // Method: type_id::create(string name, uvm_component parent) -> component handle
       // Parameters: "seqr" = instance name, this = parent component
       // Purpose: Factory-based creation with hierarchical naming
       // Note: Created first (driver needs sequencer reference)
       
       // Create driver
       drv = ArchDriver::type_id::create("drv", this);
       // Method: Same as above
       // Purpose: Create driver component
       // Note: Created second (after sequencer)
       
       // Create monitor
       mon = ArchMonitor::type_id::create("mon", this);
       // Method: Same as above
       // Purpose: Create monitor component
       // Note: Created third (independent of sequencer/driver)
   endfunction
   ```
   - **Method Signature**: `function void build_phase(uvm_phase phase);`
   - **Phase Type**: Build-time phase (function, executes top-down)
   - **Purpose**: Create all child components of the agent
   - **Execution Order**: 
     1. Call `super.build_phase()` (required)
     2. Create sequencer (first, driver needs it)
     3. Create driver (second, connects to sequencer)
     4. Create monitor (third, independent)
   - **Key**: All components created in agent's `build_phase()`, before `connect_phase()`
   - **Factory Benefits**: Enables type/instance overrides via factory
   - **Hierarchical Naming**: Full path = "test.env.agent.seqr" (automatic)

4. **Agent Connection:**
   ```systemverilog
   function void connect_phase(uvm_phase phase);
       super.connect_phase(phase);  // Call parent connect_phase first
       // Method: super.connect_phase(uvm_phase phase) -> void
       // Purpose: Initialize parent component connections
       
       // Connect driver to sequencer
       drv.seq_item_port.connect(seqr.seq_item_export);
       // Method: seq_item_port.connect(uvm_seq_item_prod_if export) -> void
       // Parameters: 
       //   - drv.seq_item_port: Driver's TLM port (requests transactions)
       //   - seqr.seq_item_export: Sequencer's TLM export (provides transactions)
       // Purpose: Establish TLM connection for transaction flow
       // Behavior: After connection, driver can call get_next_item() to get transactions
       // Note: Connection is one-way (driver gets from sequencer)
   endfunction
   ```
   - **Method Signature**: `function void connect_phase(uvm_phase phase);`
   - **Phase Type**: Connect-time phase (function, executes bottom-up)
   - **Purpose**: Connect TLM ports/exports between components
   - **Execution Order**: 
     1. Call `super.connect_phase()` (required)
     2. Connect driver port to sequencer export
   - **Key**: TLM connections made in `connect_phase()`, after all components created
   - **TLM Pattern**: Port (initiator) connects to Export (target)
   - **Transaction Flow**: Sequence → Sequencer (export) → Driver (port) → DUT
   - **Connection Timing**: Must happen after `build_phase()` (components must exist)

5. **Test Sequence Execution:**
   ```systemverilog
   task run_phase(uvm_phase phase);
       ArchSmokeSeq seq;  // Sequence variable
       
       // Step 1: Raise objection (prevent phase from ending)
       phase.raise_objection(this);
       // Method: raise_objection(uvm_object obj) -> void
       // Purpose: Prevent run_phase from ending prematurely
       // Behavior: Increments objection count, phase waits until count = 0
       // Key: Must call drop_objection() later to allow phase to end
       
       // Step 2: Create sequence
       seq = ArchSmokeSeq::type_id::create("seq");
       // Method: type_id::create(string name) -> object handle
       // Purpose: Factory-based sequence creation
       // Note: Sequence is object (not component), no parent needed
       
       // Step 3: Start sequence on sequencer
       seq.start(env.agent.seqr);
       // Method: start(uvm_sequencer_base sequencer) -> void
       // Parameters: env.agent.seqr = sequencer to execute on
       // Purpose: Start sequence execution on specified sequencer
       // Behavior: 
       //   - Calls sequence's body() task
       //   - Sequence generates transactions via start_item/finish_item
       //   - Blocks until sequence body() completes
       //   - Transactions flow: sequence → sequencer → driver
       
       // Step 4: Wait for completion
       #100;  // Additional delay to ensure all transactions complete
       // Purpose: Allow time for driver to process all transactions
       // Note: In real testbench, may use wait statements or events
       
       // Step 5: Drop objection (allow phase to end)
       phase.drop_objection(this);
       // Method: drop_objection(uvm_object obj) -> void
       // Purpose: Decrement objection count, allow phase to end
       // Behavior: When count reaches 0, phase can proceed to next phase
       // Key: Must match raise_objection() call
   endtask
   ```
   - **Method Signature**: `task run_phase(uvm_phase phase);`
   - **Phase Type**: Run-time phase (task, executes concurrently)
   - **Purpose**: Execute test stimulus (sequences, driving, monitoring)
   - **Execution Flow**:
     1. Raise objection → 2. Create sequence → 3. Start sequence → 4. Wait → 5. Drop objection
   - **Key**: Objection mechanism controls phase completion
   - **Sequence Execution**: `seq.start(sequencer)` blocks until `body()` completes
   - **Transaction Flow**: Test → Sequence → Sequencer → Driver → DUT
   - **Timing**: All run_phase tasks execute concurrently (forked)

**Key Concepts:**
- Hierarchical component organization enables maintainable testbenches
- Separation of concerns (driver, monitor, sequencer) improves reusability
- Component factory and configuration provide flexibility
- Phase-based execution model ensures proper initialization and execution
- Transaction-based communication decouples components
- **Component hierarchy**: Test → Env → Agent → Sequencer/Driver/Monitor
- **Factory creation**: `type_id::create()` for all components
- **Phase execution**: Build → Connect → Run → Report
- **Sequence execution**: `seq.start(sequencer)` in run_phase

**Execution:**
```bash
# Using orchestrator script (recommended)
./scripts/module6.sh --architecture

# Or compile directly with Verilator
cd module6/examples/architecture
verilator -sv --cc --exe --timing --trace architecture.sv architecture.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" --top-module architecture
make -C obj_dir -f Varchitecture.mk
./obj_dir/Varchitecture
```

**Verified Output:**
- UVM component hierarchy construction
- Transaction generation and driving
- Component phase execution
- UVM report summary with component counts

**Key Concepts:**
- **Component Hierarchy**: Agent → Sequencer/Driver/Monitor structure
- **Factory Pattern**: Using `type_id::create()` for component creation
- **Phase Execution**: Build, connect, run, check, report phases
- **Transaction Flow**: Sequence → Sequencer → Driver → DUT

### 2. Multi-Agent Environments

- **Multiple Agent Coordination**
  - Multiple agent instantiation
  - Agent configuration
  - Agent communication
  - Cross-agent stimulus

- **Virtual Sequences**
  - Virtual sequence definition
  - Multi-sequencer coordination
  - Parallel sequence execution
  - Sequence synchronization

- **Agent Reuse**
  - Parameterized agents
  - Agent configuration database
  - Reusable agent patterns
  - Agent instantiation patterns

#### Example 6.2: Multi-Agent Environment (`module6/examples/multi_agent/multi_agent.sv`)

**What it demonstrates:**
- **Transaction (`MA_Txn`)**: Transaction with agent ID and data fields
- **Agent (`MA_Agent`)**: Parameterized agent with configurable agent ID
- **Virtual Sequence (`MA_VirtualSeq`)**: Coordinates sequences across multiple sequencers
- **Environment (`MA_Env`)**: Contains two agent instances (a0 and a1)
- **Test (`MultiAgentTest`)**: Orchestrates multi-agent verification

**Multi-Agent Methods and Patterns:**

1. **Agent Configuration via ConfigDB:**
   ```systemverilog
   class MA_Agent extends uvm_agent;
       int agent_id;  // Agent identifier (0, 1, 2, etc.)
       
       function void build_phase(uvm_phase phase);
           super.build_phase(phase);
           
           // Get agent configuration from ConfigDB
           if (!uvm_config_db#(int)::get(this, "", "agent_id", agent_id)) begin
               // Method: uvm_config_db#(T)::get(component, instance, field, value) -> bit
               // Parameters:
               //   - this: Component to search from (current component)
               //   - "": Instance path (empty = current component)
               //   - "agent_id": Field name to retrieve
               //   - agent_id: Variable to store retrieved value
               // Return: 1 = found, 0 = not found
               // Purpose: Retrieve configuration value from ConfigDB
               // Behavior: Searches up component hierarchy for matching config
               
               agent_id = 0;  // Default value if not configured
               // Fallback: Use default if configuration not found
           end
       endfunction
   endclass
   ```
   - **Method Signature**: `static function bit get(uvm_component cntxt, string inst_name, string field_name, ref T value);`
   - **Template Parameter**: `T` = type of value (int, string, object, etc.)
   - **Purpose**: Retrieve configuration values from ConfigDB
   - **Search Behavior**: Searches up component hierarchy from `cntxt`
   - **Usage**: Call in `build_phase()` before using the value
   - **Key**: Always check return value, provide defaults
   - **Hierarchy Search**: Searches current component → parent → ... → top

2. **Setting Agent Configuration:**
   ```systemverilog
   function void build_phase(uvm_phase phase);
       super.build_phase(phase);
       
       // Set configuration for agent 0 (BEFORE creating agent)
       uvm_config_db#(int)::set(this, "a0", "agent_id", 0);
       // Method: uvm_config_db#(T)::set(component, instance, field, value) -> void
       // Parameters:
       //   - this: Component context (environment)
       //   - "a0": Instance path (agent instance name)
       //   - "agent_id": Field name
       //   - 0: Value to set
       // Purpose: Store configuration value in ConfigDB
       // Behavior: Stores value with hierarchical path "env.a0.agent_id"
       // Timing: MUST be set before creating component
       
       // Set configuration for agent 1
       uvm_config_db#(int)::set(this, "a1", "agent_id", 1);
       // Same method, different instance and value
       
       // Create agents (AFTER setting configuration)
       a0 = MA_Agent::type_id::create("a0", this);
       // Agent a0 will retrieve agent_id=0 in its build_phase
       
       a1 = MA_Agent::type_id::create("a1", this);
       // Agent a1 will retrieve agent_id=1 in its build_phase
   endfunction
   ```
   - **Method Signature**: `static function void set(uvm_component cntxt, string inst_name, string field_name, T value);`
   - **Template Parameter**: `T` = type of value
   - **Purpose**: Store configuration values in ConfigDB
   - **Timing**: MUST be called BEFORE creating the component
   - **Hierarchical Path**: Full path = "env.a0.agent_id" (automatic)
   - **Key**: Set config → Create component → Component retrieves config in its `build_phase()`
   - **Pattern**: Environment sets config, agents retrieve config

3. **Virtual Sequence with execute_item:**
   ```systemverilog
   class MA_VirtualSeq extends uvm_sequence;
       MA_Sequencer seqr0, seqr1;  // Sequencer references (assigned before start)
       
       task body();
           MA_Txn t0, t1;  // Transactions for each agent
           
           fork  // Start parallel execution
               begin  // Branch 0: Agent 0 sequences
                   repeat (5) begin
                       // Create transaction
                       t0 = MA_Txn::type_id::create("t0");
                       
                       // Randomize with constraint
                       void'(t0.randomize() with { agent_id == 0; });
                       t0.agent_id = 0;  // Explicit assignment
                       
                       // Execute transaction directly on sequencer
                       seqr0.execute_item(t0);
                       // Method: execute_item(uvm_sequence_item item) -> void
                       // Parameters: t0 = transaction to execute
                       // Purpose: Send transaction to sequencer and wait for completion
                       // Behavior:
                       //   1. Sends transaction to sequencer (like start_item)
                       //   2. Waits for driver to complete (like finish_item)
                       //   3. Blocks until transaction fully processed
                       // Alternative: Can use start_item(t0); finish_item(t0);
                   end
               end
               
               begin  // Branch 1: Agent 1 sequences
                   repeat (5) begin
                       t1 = MA_Txn::type_id::create("t1");
                       void'(t1.randomize() with { agent_id == 1; });
                       t1.agent_id = 1;
                       seqr1.execute_item(t1);  // Execute on sequencer 1
                   end
               end
           join  // Wait for both branches to complete
       endtask
   endclass
   ```
   - **Method Signature**: `task execute_item(uvm_sequence_item item);`
   - **Purpose**: Execute transaction directly on sequencer (combines start_item + finish_item)
   - **Behavior**: 
     - Sends transaction to sequencer
     - Waits for driver to complete
     - Blocks until transaction fully processed
   - **Usage**: Alternative to `start_item()` + `finish_item()` pair
   - **Key**: Useful in virtual sequences for direct execution on multiple sequencers
   - **Parallel Execution**: Fork-join enables concurrent execution on multiple sequencers
   - **Transaction Flow**: Virtual sequence → Multiple sequencers → Multiple drivers → DUT

4. **Setting Virtual Sequence References:**
   ```systemverilog
   task run_phase(uvm_phase phase);
       MA_VirtualSeq vseq;  // Virtual sequence variable
       
       phase.raise_objection(this);
       
       // Step 1: Create virtual sequence
       vseq = MA_VirtualSeq::type_id::create("vseq");
       // Method: type_id::create(string name) -> object handle
       // Purpose: Factory-based sequence creation
       
       // Step 2: Assign sequencer references (REQUIRED before start)
       vseq.seqr0 = env.a0.seqr;
       // Assignment: Set virtual sequence's sequencer reference
       // Purpose: Virtual sequence needs sequencer handles to execute
       // Note: Must be set before calling start()
       // Type: uvm_sequencer #(MA_Txn) handle
       
       vseq.seqr1 = env.a1.seqr;
       // Same for second sequencer
       
       // Step 3: Start virtual sequence
       vseq.start(null);
       // Method: start(uvm_sequencer_base sequencer) -> void
       // Parameters: null = virtual sequence doesn't need sequencer parameter
       // Purpose: Start virtual sequence execution
       // Behavior:
       //   - Calls virtual sequence's body() task
       //   - Virtual sequence uses assigned sequencer references (seqr0, seqr1)
       //   - Executes fork-join for parallel execution
       //   - Blocks until body() completes
       // Note: Virtual sequences use assigned references, not start() parameter
       
       #200;  // Wait for completion
       phase.drop_objection(this);
   endtask
   ```
   - **Method Signature**: `task start(uvm_sequencer_base sequencer);`
   - **Purpose**: Start virtual sequence execution
   - **Virtual Sequence Pattern**:
     1. Create virtual sequence
     2. Assign sequencer references (seqr0, seqr1, etc.)
     3. Call `start(null)` (virtual sequences don't use sequencer parameter)
   - **Key**: Sequencer references MUST be set before calling `start()`
   - **Difference**: Regular sequences use `start(sequencer)`, virtual sequences use assigned references
   - **Execution**: Virtual sequence body() uses assigned sequencers for parallel execution

5. **Parallel Agent Execution:**
   ```systemverilog
   fork
       begin
           // Agent 0 transactions
           repeat (5) seqr0.execute_item(t0);
       end
       begin
           // Agent 1 transactions
           repeat (5) seqr1.execute_item(t1);
       end
   join  // Wait for both
   ```
   - **Purpose**: Execute transactions on multiple agents concurrently
   - **Key**: Fork-join enables parallel execution

**Key Concepts:**
- Multiple agents enable complex verification scenarios
- Virtual sequences coordinate stimulus across agents
- Agent configuration via config database provides flexibility
- Parallel sequence execution using fork-join enables concurrent testing
- Agent reuse patterns improve productivity
- **Agent configuration** - Via ConfigDB before creation
- **Virtual sequence** - Coordinates multiple sequencers
- **`execute_item()`** - Direct transaction execution
- **Parallel execution** - Fork-join for concurrent agents
- **Agent reuse** - Same agent class, different instances

**Execution:**
```bash
./scripts/module6.sh --multi-agent
# or
cd module6/examples/multi_agent
verilator -sv --cc --exe --timing --trace multi_agent.sv multi_agent.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" --top-module multi_agent
make -C obj_dir -f Vmulti_agent.mk
./obj_dir/Vmulti_agent
```

**Verified Output:**
- Two agents running in parallel
- Virtual sequence coordinating both agents
- Agent-specific transaction generation
- Cross-agent stimulus coordination

**Key Concepts:**
- **Virtual Sequences**: Sequences that coordinate multiple sequencers
- **Agent Configuration**: Using `uvm_config_db` to configure agent parameters
- **Parallel Execution**: Fork-join for concurrent sequence execution
- **Agent Reuse**: Same agent class used for multiple instances

### 3. Protocol Verification

- **Protocol Modeling**
  - Interface definition
  - Protocol transaction modeling
  - Protocol signal mapping
  - Protocol timing

- **Protocol Sequences**
  - Protocol-aware sequences
  - Protocol transaction generation
  - Protocol sequence patterns
  - Protocol coverage

- **Protocol Drivers and Monitors**
  - Protocol driver implementation
  - Protocol monitor implementation
  - Handshake protocol handling
  - Protocol signal sampling

#### Example 6.3: Protocol Verification (`module6/examples/protocol/protocol.sv`)

**What it demonstrates:**
- **Interface (`axi_lite_if`)**: AXI4-Lite interface with all required signals
- **Transaction (`AxiTxn`)**: AXI transaction with read/write, address, and data
- **Driver (`AxiDriver`)**: Protocol-aware driver implementing AXI4-Lite handshake protocol
- **Monitor (`AxiMonitor`)**: Protocol monitor for observing AXI transactions
- **Environment (`ProtocolEnv`)**: Protocol verification environment
- **Test (`ProtocolTest`)**: Protocol verification test with AXI4-Lite slave DUT

**Protocol Driver Methods and Patterns:**

1. **Virtual Interface Access:**
   ```systemverilog
   class AxiDriver extends uvm_driver #(AxiTxn);
       virtual axi_lite_if vif;
       
       function void build_phase(uvm_phase phase);
           super.build_phase(phase);
           if (!uvm_config_db#(virtual axi_lite_if)::get(this, "", "vif", vif)) begin
               `uvm_fatal("NO_VIF", "axi_lite_if not set")
           end
       endfunction
   endclass
   ```
   - **Purpose**: Get virtual interface for protocol access
   - **Key**: Must be set before driver can access signals

2. **Protocol Write Transaction:**
   ```systemverilog
   task run_phase(uvm_phase phase);
       forever begin
           seq_item_port.get_next_item(t);
           if (t.is_write) begin
               // Write address channel
               @(posedge vif.ACLK);
               vif.AWADDR  <= t.addr;
               vif.AWVALID <= 1;
               vif.WDATA   <= t.data;
               vif.WVALID  <= 1;
               
               // Wait for handshake
               do @(posedge vif.ACLK); while (!(vif.AWREADY && vif.WREADY));
               vif.AWVALID <= 0;
               vif.WVALID  <= 0;
               
               // Write response channel
               vif.BREADY  <= 1;
               do @(posedge vif.ACLK); while (!vif.BVALID);
               vif.BREADY  <= 0;
           end
       end
   endtask
   ```
   - **Purpose**: Implement AXI write protocol
   - **Key**: Handshake pattern - assert VALID, wait for READY

3. **Protocol Read Transaction:**
   ```systemverilog
   else begin  // Read transaction
       @(posedge vif.ACLK);
       vif.ARADDR  <= t.addr;
       vif.ARVALID <= 1;
       do @(posedge vif.ACLK); while (!vif.ARREADY);
       vif.ARVALID <= 0;
       
       // Read data channel
       vif.RREADY  <= 1;
       do @(posedge vif.ACLK); while (!vif.RVALID);
       t.data = vif.RDATA;  // Capture read data
       vif.RREADY  <= 0;
   end
   ```
   - **Purpose**: Implement AXI read protocol
   - **Key**: Capture read data from interface

4. **Handshake Pattern:**
   ```systemverilog
   // Standard handshake pattern
   @(posedge vif.clk);
   vif.VALID <= 1;
   do @(posedge vif.clk); while (!vif.READY);
   vif.VALID <= 0;
   ```
   - **Purpose**: Generic handshake implementation
   - **Key**: Assert VALID, wait for READY, deassert VALID

5. **Clock-Synchronized Operations:**
   ```systemverilog
   @(posedge vif.ACLK);  // Wait for clock edge
   vif.AWADDR <= t.addr;  // Drive on clock edge
   ```
   - **Purpose**: Synchronize with protocol clock
   - **Key**: All protocol operations clock-synchronized

6. **Setting Virtual Interface:**
   ```systemverilog
   initial begin
       uvm_config_db#(virtual axi_lite_if)::set(null, "*", "vif", vif);
       run_test("ProtocolTest");
   end
   ```
   - **Purpose**: Set interface for all components
   - **Key**: Set before `run_test()`

**Key Concepts:**
- Protocol-shaped driver/monitor scaffolding enables protocol verification
- Handshake protocol implementation (VALID/READY) is fundamental
- Interface-based communication provides structured protocol access
- Protocol transaction modeling captures protocol semantics
- Clock-synchronized protocol operations ensure correct timing
- **Virtual interface** - Access protocol signals
- **Handshake pattern** - VALID/READY protocol
- **Clock synchronization** - `@(posedge clk)` for all operations
- **Write protocol** - Address + Data + Response channels
- **Read protocol** - Address + Data channels
- **`do-while` loop** - Wait for handshake completion

**Note**: This is a **teaching scaffold**, not a full AXI4-Lite compliance VIP.

**Execution:**
```bash
./scripts/module6.sh --protocol
# or
cd module6/examples/protocol
verilator -sv --cc --exe --timing --trace protocol.sv protocol.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" ../dut/protocols/axi4_lite_slave.v --top-module protocol
make -C obj_dir -f Vprotocol.mk
./obj_dir/Vprotocol
```

**Verified Output:**
- AXI4-Lite write and read transactions
- Handshake protocol demonstration
- Protocol driver and monitor operation
- DUT interaction with protocol interface

**Key Concepts:**
- **Protocol Interfaces**: Structured interface definition for protocol signals
- **Handshake Protocol**: VALID/READY handshake for flow control
- **Protocol Drivers**: Clock-synchronized protocol signal driving
- **Protocol Monitors**: Protocol signal observation and transaction reconstruction

### 4. Protocol Checkers

- **Protocol Rule Checking**
  - Protocol rule definition
  - Assertion-like checking
  - Bounded wait checking
  - Protocol compliance verification

- **Error Detection**
  - Protocol violation detection
  - Error reporting
  - Protocol timing checks
  - Protocol state checking

- **Checker Implementation**
  - UVM checker components
  - Interface monitoring
  - Rule enforcement
  - Compliance reporting

#### Example 6.4: Protocol Checkers (`module6/examples/protocol_checkers/protocol_checkers.sv`)

**What it demonstrates:**
- **Interface (`chk_if`)**: Simple handshake interface with valid/ready signals
- **Checker Component (`CheckerComp`)**: UVM component that monitors protocol rules
- **Protocol Rules**: Valid must stay asserted until ready (bounded wait)
- **Test (`ProtocolCheckersTest`)**: Test that exercises protocol checker

**Protocol Checker Methods and Patterns:**

1. **Protocol Rule Monitoring:**
   ```systemverilog
   task run_phase(uvm_phase phase);
       phase.raise_objection(this);
       forever begin
           @(posedge vif.clk);
           if (!vif.rst_n) continue;  // Skip during reset
           
           // Check protocol rule
           if (vif.valid && !vif.ready) begin
               // Bounded wait check
               int cycles = 0;
               while (vif.valid && !vif.ready && cycles < 10) begin
                   cycles++;
                   @(posedge vif.clk);
               end
               
               // Report violation if exceeded bound
               if (vif.valid && !vif.ready) begin
                   `uvm_error("CHK", "valid held without ready for >10 cycles")
               end
           end
       end
   endtask
   ```
   - **Purpose**: Monitor protocol compliance
   - **Key**: Bounded wait prevents infinite waits

2. **Bounded Wait Pattern:**
   ```systemverilog
   int cycles = 0;
   while (condition && cycles < max_cycles) begin
       cycles++;
       @(posedge vif.clk);
   end
   if (condition) begin
       `uvm_error("CHK", "Timeout violation")
   end
   ```
   - **Purpose**: Check that protocol doesn't wait indefinitely
   - **Key**: Count cycles, report if exceeded

3. **Reset Handling:**
   ```systemverilog
   @(posedge vif.clk);
   if (!vif.rst_n) continue;  // Skip checking during reset
   ```
   - **Purpose**: Ignore protocol during reset
   - **Key**: Use `continue` to skip reset cycles

4. **Protocol State Checking:**
   ```systemverilog
   // Check protocol state
   if (vif.valid && !vif.ready) begin
       // Protocol in handshake state
       // Monitor for bounded wait
   end
   ```
   - **Purpose**: Detect protocol states
   - **Key**: Check signal combinations

5. **Error Reporting:**
   ```systemverilog
   `uvm_error("CHK", "Protocol violation: valid held >10 cycles")
   ```
   - **Purpose**: Report protocol violations
   - **Key**: Use appropriate severity level

**Key Concepts:**
- Protocol rule checking ensures protocol compliance
- Assertion-like patterns in UVM provide structured checking
- Bounded wait checking prevents protocol violations
- Protocol compliance verification catches design errors
- Error detection and reporting enable debugging
- **Bounded wait** - Check timeout conditions
- **Reset handling** - Skip checking during reset
- **State monitoring** - Check protocol signal combinations
- **Error reporting** - Report violations with `uvm_error`
- **Forever loop** - Continuous monitoring

**Execution:**
```bash
./scripts/module6.sh --protocol-checkers
# or
cd module6/examples/protocol_checkers
verilator -sv --cc --exe --timing --trace protocol_checkers.sv protocol_checkers.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" --top-module protocol_checkers
make -C obj_dir -f Vprotocol_checkers.mk
./obj_dir/Vprotocol_checkers
```

**Verified Output:**
- Protocol handshake monitoring
- Rule violation detection (if any)
- Bounded wait checking
- Protocol compliance reporting

**Key Concepts:**
- **Protocol Checkers**: UVM components that monitor protocol rules
- **Bounded Wait**: Checking that protocol signals don't wait indefinitely
- **Rule Enforcement**: Detecting and reporting protocol violations
- **Compliance Verification**: Ensuring design follows protocol specification

### 5. Multi-Channel Scoreboards

- **Multi-Channel Scoreboarding**
  - Multiple stream handling
  - Transaction matching
  - Result aggregation
  - Scoreboard architecture

- **Transaction Matching**
  - Matching algorithms
  - Transaction comparison
  - Match criteria
  - Unmatched transaction handling

- **Result Aggregation**
  - Pass/fail counting
  - Result reporting
  - Statistics collection
  - Coverage tracking

#### Example 6.5: Multi-Channel Scoreboards (`module6/examples/scoreboards/scoreboards.sv`)

**What it demonstrates:**
- **Transaction (`SB_Txn`)**: Scoreboard transaction with stream ID, sequence number, and data
- **Stream Producer (`StreamProducer`)**: Component that generates transactions for a stream
- **Multi-Channel Scoreboard (`MultiChannelScoreboard`)**: Scoreboard that matches transactions from multiple streams
- **Test (`ScoreboardsTest`)**: Test with two stream producers and a scoreboard

**Multi-Channel Scoreboard Methods:**

1. **Scoreboard Write Method:**
   ```systemverilog
   class MultiChannelScoreboard extends uvm_component;
       SB_Txn q0[int];  // Associative array for stream 0
       SB_Txn q1[int];  // Associative array for stream 1
       int pass = 0, fail = 0;
       
       function void write(SB_Txn t);
           // Store transaction by stream
           if (t.stream_id == 0) begin
               q0[t.seq] = t;  // Store by sequence number
           end else begin
               q1[t.seq] = t;
           end
           
           // Check if both streams have same sequence number
           if (q0.exists(t.seq) && q1.exists(t.seq)) begin
               // Compare data
               if (q0[t.seq].data == q1[t.seq].data) begin
                   pass++;
               end else begin
                   fail++;
               end
               // Remove matched transactions
               q0.delete(t.seq);
               q1.delete(t.seq);
           end
       endfunction
   endclass
   ```
   - **Purpose**: Match transactions from multiple streams
   - **Key**: Use associative arrays indexed by sequence number

2. **Associative Array Operations:**
   ```systemverilog
   // Store transaction
   q0[t.seq] = t;
   
   // Check if key exists
   if (q0.exists(t.seq)) begin
       // Key exists
   end
   
   // Delete key
   q0.delete(t.seq);
   ```
   - **Purpose**: Manage transaction queues per stream
   - **Key**: Associative arrays enable efficient lookup

3. **Transaction Matching Logic:**
   ```systemverilog
   // Match when both streams have same sequence number
   if (q0.exists(t.seq) && q1.exists(t.seq)) begin
       if (q0[t.seq].data == q1[t.seq].data) begin
           pass++;
           `uvm_info("SB", "MATCH", UVM_MEDIUM)
       end else begin
           fail++;
           `uvm_error("SB", "MISMATCH")
       end
       // Clean up matched transactions
       q0.delete(t.seq);
       q1.delete(t.seq);
   end
   ```
   - **Purpose**: Match transactions by sequence number
   - **Key**: Compare data, track pass/fail, clean up

4. **Stream Producer:**
   ```systemverilog
   class StreamProducer extends uvm_component;
       uvm_analysis_port #(SB_Txn) ap;
       int stream_id;
       
       task run_phase(uvm_phase phase);
           for (int i = 0; i < 10; i++) begin
               t = SB_Txn::type_id::create("t");
               t.stream_id = stream_id;
               t.seq = i;  // Sequence number
               t.data = 32'hA0 + i;
               ap.write(t);  // Broadcast
               #10;
           end
       endtask
   endclass
   ```
   - **Purpose**: Generate transactions for a stream
   - **Key**: Assign sequence numbers for matching

5. **Multiple Stream Connection:**
   ```systemverilog
   function void connect_phase(uvm_phase phase);
       super.connect_phase(phase);
       p0.ap.connect(sb.imp);  // Connect stream 0
       p1.ap.connect(sb.imp);  // Connect stream 1
   endfunction
   ```
   - **Purpose**: Connect multiple streams to scoreboard
   - **Key**: One scoreboard can receive from multiple sources

6. **Scoreboard Report:**
   ```systemverilog
   function void report_phase(uvm_phase phase);
       super.report_phase(phase);
       `uvm_info("SB", $sformatf("pass=%0d fail=%0d", pass, fail), UVM_MEDIUM)
   endfunction
   ```
   - **Purpose**: Report final results
   - **Key**: Aggregate pass/fail counts

**Key Concepts:**
- Multi-channel scoreboarding enables complex verification scenarios
- Transaction matching across streams verifies data integrity
- Result aggregation provides overall test status
- Scoreboard architecture supports multiple verification paths
- Stream-based verification enables parallel checking
- **Associative arrays** - Store transactions by sequence number
- **`exists(key)`** - Check if both streams have transaction
- **`delete(key)`** - Remove matched transactions
- **Transaction matching** - Match by sequence number, compare data
- **Multiple streams** - One scoreboard, multiple producers
- **Result aggregation** - Track pass/fail across all matches

**Execution:**
```bash
./scripts/module6.sh --scoreboards
# or
cd module6/examples/scoreboards
verilator -sv --cc --exe --timing --trace scoreboards.sv scoreboards.cpp \
  -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
  "$UVM_HOME/uvm_pkg.sv" --top-module scoreboards
make -C obj_dir -f Vscoreboards.mk
./obj_dir/Vscoreboards
```

**Verified Output:**
- Two stream producers generating transactions
- Scoreboard matching transactions from both streams
- Pass/fail reporting
- Transaction matching results

**Key Concepts:**
- **Multi-Channel Scoreboards**: Scoreboards that handle multiple transaction streams
- **Transaction Matching**: Matching transactions based on sequence numbers or other criteria
- **Result Aggregation**: Collecting and reporting overall test results
- **Stream-Based Verification**: Verifying data integrity across multiple paths

## Complex Testbench Methods Reference

This section provides a comprehensive reference for all methods, functions, and patterns used in Module 6's complex testbench examples.

### Architecture Methods

#### Component Creation and Hierarchy

**Factory Creation:**
```systemverilog
// Create components using factory
seqr = ArchSequencer::type_id::create("seqr", this);
drv  = ArchDriver::type_id::create("drv", this);
mon  = ArchMonitor::type_id::create("mon", this);
```
- **Purpose**: Create components using UVM factory
- **Usage**: In `build_phase()` of parent component
- **Key**: Always provide name and parent

**Component Connection:**
```systemverilog
function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    drv.seq_item_port.connect(seqr.seq_item_export);
endfunction
```
- **Purpose**: Connect TLM ports/exports
- **Usage**: In `connect_phase()` after build
- **Key**: Connect driver to sequencer

**Sequence Execution:**
```systemverilog
seq = ArchSmokeSeq::type_id::create("seq");
seq.start(env.agent.seqr);  // Start on sequencer
```
- **Purpose**: Execute sequence on sequencer
- **Usage**: In test's `run_phase()`
- **Key**: Create sequence, then start on sequencer

### Multi-Agent Methods

#### Agent Configuration

**Setting Agent Configuration:**
```systemverilog
uvm_config_db#(int)::set(this, "a0", "agent_id", 0);
uvm_config_db#(int)::set(this, "a1", "agent_id", 1);
```
- **Purpose**: Configure agent parameters
- **Usage**: Before creating agent
- **Key**: Set config, then create component

**Getting Agent Configuration:**
```systemverilog
if (!uvm_config_db#(int)::get(this, "", "agent_id", agent_id)) begin
    agent_id = 0;  // Default value
end
```
- **Purpose**: Retrieve agent configuration
- **Usage**: In agent's `build_phase()`
- **Key**: Check return value, provide defaults

#### Virtual Sequence Methods

**execute_item() Method:**
```systemverilog
seqr0.execute_item(t0);  // Execute directly on sequencer
```
- **Purpose**: Execute transaction directly on sequencer
- **Usage**: Alternative to `start_item()`/`finish_item()`
- **Key**: Useful in virtual sequences for direct execution
- **Note**: Transaction must be created and randomized first

**Virtual Sequence Pattern:**
```systemverilog
class MA_VirtualSeq extends uvm_sequence;
    MA_Sequencer seqr0, seqr1;  // References to sequencers
    
    task body();
        fork
            begin
                // Agent 0 transactions
                seqr0.execute_item(t0);
            end
            begin
                // Agent 1 transactions
                seqr1.execute_item(t1);
            end
        join
    endtask
endclass
```
- **Purpose**: Coordinate multiple sequencers
- **Key**: Set sequencer references before starting

### Protocol Verification Methods

#### Virtual Interface Access

**Getting Virtual Interface:**
```systemverilog
function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(virtual axi_lite_if)::get(this, "", "vif", vif)) begin
        `uvm_fatal("NO_VIF", "Interface not set")
    end
endfunction
```
- **Purpose**: Get virtual interface for protocol access
- **Usage**: In driver/monitor `build_phase()`
- **Key**: Must be set before component can access signals

**Setting Virtual Interface:**
```systemverilog
uvm_config_db#(virtual axi_lite_if)::set(null, "*", "vif", vif);
```
- **Purpose**: Set interface for all components
- **Usage**: In module before `run_test()`
- **Key**: Use wildcard `"*"` to match all components

#### Protocol Handshake Patterns

**Standard Handshake:**
```systemverilog
@(posedge vif.clk);
vif.VALID <= 1;  // Assert valid
do @(posedge vif.clk); while (!vif.READY);  // Wait for ready
vif.VALID <= 0;  // Deassert valid
```
- **Purpose**: Implement VALID/READY handshake
- **Key**: Assert VALID, wait for READY, deassert VALID

**Write Transaction:**
```systemverilog
// Write address + data channels
@(posedge vif.ACLK);
vif.AWADDR  <= t.addr;
vif.AWVALID <= 1;
vif.WDATA   <= t.data;
vif.WVALID  <= 1;
// Wait for both ready
do @(posedge vif.ACLK); while (!(vif.AWREADY && vif.WREADY));
vif.AWVALID <= 0;
vif.WVALID  <= 0;
```
- **Purpose**: AXI write transaction
- **Key**: Drive address and data, wait for both ready

**Read Transaction:**
```systemverilog
// Read address channel
@(posedge vif.ACLK);
vif.ARADDR  <= t.addr;
vif.ARVALID <= 1;
do @(posedge vif.ACLK); while (!vif.ARREADY);
vif.ARVALID <= 0;
// Read data channel
vif.RREADY  <= 1;
do @(posedge vif.ACLK); while (!vif.RVALID);
t.data = vif.RDATA;  // Capture data
vif.RREADY  <= 0;
```
- **Purpose**: AXI read transaction
- **Key**: Drive address, wait for ready, capture data

### Protocol Checker Methods

#### Bounded Wait Checking

**Bounded Wait Pattern:**
```systemverilog
int cycles = 0;
while (vif.valid && !vif.ready && cycles < max_cycles) begin
    cycles++;
    @(posedge vif.clk);
end
if (vif.valid && !vif.ready) begin
    `uvm_error("CHK", "Timeout violation")
end
```
- **Purpose**: Check protocol doesn't wait indefinitely
- **Key**: Count cycles, report if exceeded bound

**Reset Handling:**
```systemverilog
@(posedge vif.clk);
if (!vif.rst_n) continue;  // Skip during reset
```
- **Purpose**: Ignore protocol during reset
- **Key**: Use `continue` to skip reset cycles

**Protocol State Monitoring:**
```systemverilog
forever begin
    @(posedge vif.clk);
    if (!vif.rst_n) continue;
    
    // Check protocol state
    if (vif.valid && !vif.ready) begin
        // Monitor for bounded wait
    end
end
```
- **Purpose**: Continuously monitor protocol
- **Key**: Forever loop with clock synchronization

### Multi-Channel Scoreboard Methods

#### Associative Array Operations

**Storing Transactions:**
```systemverilog
SB_Txn q0[int];  // Associative array indexed by sequence number
q0[t.seq] = t;   // Store transaction
```
- **Purpose**: Store transactions by sequence number
- **Key**: Use sequence number as index

**Checking Existence:**
```systemverilog
if (q0.exists(t.seq)) begin
    // Transaction exists
end
```
- **Purpose**: Check if transaction exists
- **Key**: Use `exists()` method

**Deleting Transactions:**
```systemverilog
q0.delete(t.seq);  // Remove transaction
```
- **Purpose**: Remove matched transactions
- **Key**: Use `delete()` method

#### Transaction Matching

**Multi-Stream Matching:**
```systemverilog
function void write(SB_Txn t);
    // Store by stream
    if (t.stream_id == 0) begin
        q0[t.seq] = t;
    end else begin
        q1[t.seq] = t;
    end
    
    // Match when both streams have same sequence number
    if (q0.exists(t.seq) && q1.exists(t.seq)) begin
        // Compare and match
        if (q0[t.seq].data == q1[t.seq].data) begin
            pass++;
        end else begin
            fail++;
        end
        // Clean up
        q0.delete(t.seq);
        q1.delete(t.seq);
    end
endfunction
```
- **Purpose**: Match transactions across streams
- **Key**: Check both streams, compare, clean up

**Multiple Stream Connection:**
```systemverilog
function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    p0.ap.connect(sb.imp);  // Connect stream 0
    p1.ap.connect(sb.imp);  // Connect stream 1
endfunction
```
- **Purpose**: Connect multiple streams to one scoreboard
- **Key**: One scoreboard can receive from multiple sources

### Complete Transaction Flow Diagrams

**Architecture Example - Single Agent Flow:**
```
Test.run_phase()
  ├─> raise_objection()
  ├─> Create sequence: ArchSmokeSeq::type_id::create("seq")
  ├─> Start sequence: seq.start(env.agent.seqr)
  │     └─> Sequence.body()
  │           ├─> Create transaction: ArchTxn::type_id::create("t")
  │           ├─> Randomize: t.randomize()
  │           ├─> start_item(t) ──────────────┐
  │           │                                 │
  │           └─> finish_item(t) ──────────────┤
  │                                             │
  └─> Sequencer (env.agent.seqr)              │
        ├─> Receives transaction from sequence  │
        ├─> Provides to driver via TLM          │
        └─> Waits for item_done() ─────────────┘
              │
              └─> Driver.run_phase()
                    ├─> get_next_item(t) ──────┐
                    ├─> Drive transaction       │
                    ├─> #5 delay                │
                    └─> item_done() ────────────┘
```

**Multi-Agent Example - Parallel Flow:**
```
Test.run_phase()
  ├─> Create virtual sequence: MA_VirtualSeq::type_id::create("vseq")
  ├─> Assign sequencers: vseq.seqr0 = env.a0.seqr; vseq.seqr1 = env.a1.seqr
  ├─> Start virtual sequence: vseq.start(null)
  │     └─> VirtualSequence.body()
  │           ├─> fork ──────────────────────────┐
  │           │                                   │
  │           ├─> Branch 0 (Agent 0)             │
  │           │     ├─> seqr0.execute_item(t0)   │
  │           │     │     └─> Agent 0 Driver    │
  │           │     └─> (repeat 5 times)        │
  │           │                                   │ Parallel
  │           ├─> Branch 1 (Agent 1)             │ Execution
  │           │     ├─> seqr1.execute_item(t1)   │
  │           │     │     └─> Agent 1 Driver    │
  │           │     └─> (repeat 5 times)        │
  │           │                                   │
  │           └─> join ──────────────────────────┘
  └─> Wait for both branches to complete
```

**Protocol Example - AXI Write Flow:**
```
Sequence.body()
  └─> start_item(t); finish_item(t)
        │
        └─> Driver.run_phase()
              ├─> get_next_item(t)
              ├─> if (t.is_write)
              │     ├─> @(posedge ACLK)
              │     ├─> Drive AWADDR, AWVALID, WDATA, WVALID
              │     ├─> Wait: do @(posedge ACLK); while (!(AWREADY && WREADY))
              │     ├─> Deassert AWVALID, WVALID
              │     ├─> Assert BREADY
              │     ├─> Wait: do @(posedge ACLK); while (!BVALID)
              │     └─> Deassert BREADY
              └─> item_done()
```

### Quick Reference Cheat Sheet

| **Component Creation** | **Method Signature** | **Usage** | **Return Type** |
|------------------------|---------------------|-----------|-----------------|
| Create component | `static function T type_id::create(string name, uvm_component parent)` | In `build_phase()` | Component handle |
| Create sequence | `static function T type_id::create(string name)` | In `run_phase()` | Sequence handle |
| Create transaction | `static function T type_id::create(string name)` | In sequence `body()` | Transaction handle |

| **Configuration** | **Method** | **Usage** |
|-------------------|------------|-----------|
| Set config | `uvm_config_db#(T)::set(...)` | Before creating component |
| Get config | `uvm_config_db#(T)::get(...)` | In `build_phase()` |
| Set interface | `uvm_config_db#(virtual if)::set(...)` | Before `run_test()` |

| **Sequence Execution** | **Method** | **Usage** |
|----------------------|------------|-----------|
| Start sequence | `seq.start(sequencer)` | In `run_phase()` |
| Execute item | `sequencer.execute_item(txn)` | In virtual sequence |
| Start item | `start_item(txn)` | In sequence `body()` |
| Finish item | `finish_item(txn)` | After `start_item()` |

| **Protocol Patterns** | **Pattern** | **Usage** |
|----------------------|-------------|-----------|
| Handshake | `VALID <= 1; wait READY; VALID <= 0` | All protocols |
| Clock sync | `@(posedge clk)` | All protocol operations |
| Bounded wait | `while (condition && cycles < max)` | Protocol checkers |

| **Scoreboard Operations** | **Method** | **Usage** |
|--------------------------|------------|-----------|
| Store transaction | `q[seq] = txn` | In `write()` method |
| Check exists | `q.exists(seq)` | Before matching |
| Delete transaction | `q.delete(seq)` | After matching |

### Common Pitfalls and Solutions

1. **Virtual Interface Not Set**
   - **Problem**: `uvm_fatal("NO_VIF", ...)` error
   - **Solution**: Set interface in module before `run_test()`
   - **Code**: `uvm_config_db#(virtual if)::set(null, "*", "vif", vif);`

2. **Agent Configuration Not Retrieved**
   - **Problem**: Agent uses default values
   - **Solution**: Check return value, provide defaults
   - **Code**: `if (!uvm_config_db#(int)::get(...)) agent_id = 0;`

3. **Virtual Sequence References Not Set**
   - **Problem**: Null pointer exception
   - **Solution**: Set sequencer references before starting
   - **Code**: `vseq.seqr0 = env.a0.seqr; vseq.start(null);`

4. **Protocol Handshake Deadlock**
   - **Problem**: Simulation hangs waiting for READY
   - **Solution**: Use bounded wait in protocol checker
   - **Code**: `while (condition && cycles < max_cycles)`

5. **Scoreboard Memory Leak**
   - **Problem**: Unmatched transactions accumulate
   - **Solution**: Delete matched transactions
   - **Code**: `q0.delete(t.seq); q1.delete(t.seq);`

### Troubleshooting Guide

**Issue**: Protocol driver not driving signals
- **Check**: Virtual interface retrieved in `build_phase()`
- **Check**: Interface set before `run_test()`
- **Check**: Clock running in module

**Issue**: Virtual sequence not executing
- **Check**: Sequencer references set before `start()`
- **Check**: Objection raised in test's `run_phase()`
- **Check**: Sequence created before starting

**Issue**: Scoreboard not matching transactions
- **Check**: Sequence numbers assigned correctly
- **Check**: Both streams connected to scoreboard
- **Check**: `write()` method called for both streams

**Issue**: Protocol checker false violations
- **Check**: Reset handling (skip during reset)
- **Check**: Bounded wait threshold appropriate
- **Check**: Protocol state detection correct

## Learning Outcomes

By the end of this module, you should be able to:

- Design complex testbench architectures with hierarchical component organization
- Coordinate multiple agents using virtual sequences
- Verify protocols using protocol-shaped drivers and monitors
- Implement protocol checkers for compliance verification
- Build multi-channel scoreboards for transaction matching
- Apply production-quality testbench patterns
- Create reusable verification components
- Structure testbenches for maintainability and scalability

## Exercises

1. **Testbench Architecture**
   - Design a hierarchical testbench with multiple agents
   - Implement component separation of concerns
   - Create reusable agent and environment patterns
   - Structure testbench for maintainability

2. **Multi-Agent Coordination**
   - Create multiple agent instances
   - Implement virtual sequences for cross-agent coordination
   - Configure agents using config database
   - Test parallel agent execution

3. **Protocol Verification**
   - Model a protocol interface
   - Implement protocol-aware driver
   - Implement protocol monitor
   - Create protocol sequences

4. **Protocol Checkers**
   - Implement protocol rule checking
   - Create bounded wait checkers
   - Detect protocol violations
   - Report compliance status

5. **Multi-Channel Scoreboards**
   - Implement multi-channel scoreboard
   - Create transaction matching logic
   - Aggregate results from multiple streams
   - Report overall test status

## Execution Status

✅ **Module 6 has been successfully executed and verified.**

**Verification Date:** 2026-01-24  
**Status:** All examples and tests passing  
**Verilator Version:** 5.045  
**UVM Library:** UVM 2017 (1800.2-2017-1.0)  
**Test Results:**
- ✅ 5 SystemVerilog UVM examples executed successfully
- ✅ 1 UVM test compiled and passed
- ⏱️ Total execution time: ~39 minutes (UVM compilation takes significant time due to template instantiations)

**Examples Executed:**
1. ✅ Architecture - Hierarchical UVM environment demonstrated
2. ✅ Multi-Agent - Two-agent coordination with virtual sequences
3. ✅ Protocol - AXI4-Lite protocol verification scaffold
4. ✅ Protocol Checkers - Handshake rule checking demonstrated
5. ✅ Scoreboards - Multi-channel scoreboarding with transaction matching

**Note:** UVM builds under Verilator can be heavy; use `--jobs` and consider `--no-clean` for iteration. The protocol examples are **teaching scaffolds**, not full compliance VIP.

**Execution Logs:** Full execution logs are available in `module6/module6.log` and individual example logs in each example directory (`compile.log`, `run.log`).

## Assessment

- [x] Can design complex testbench architectures
- [x] Can coordinate multiple agents
- [x] Can verify protocols
- [x] Can implement protocol checkers
- [x] Can build multi-channel scoreboards
- [x] Can apply production-quality testbench patterns
- [x] Can create reusable verification components
- [x] Understands testbench organization and maintainability

## Next Steps

After completing this module, proceed to [Module 7: Real-World Applications](MODULE7.md) for practical applications and case studies.

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **UVM User's Guide**: Accellera Systems Initiative
- **AXI4 Protocol Specification**: ARM AMBA 4 AXI4 Protocol Specification
- **Verilator Documentation**: https://verilator.org/
- **Verification Academy**: https://verificationacademy.com/
