# Module 5: Advanced UVM Concepts

**Duration**: 3 weeks  
**Complexity**: Advanced  
**Goal**: Master advanced UVM features and patterns

## Overview

This module covers advanced UVM concepts including virtual sequences, coverage models, advanced configuration, callbacks, and register models. You'll learn how to coordinate multiple sequencers, implement functional coverage, use complex configuration objects, implement callbacks, and work with register models.

### Examples and Code Structure

This module includes comprehensive examples and testbenches located in the `module5/` directory:

```
module5/
├── examples/              # SystemVerilog UVM examples
│   ├── virtual_sequences/ # Virtual sequence examples
│   ├── coverage/         # Coverage model examples
│   ├── configuration/     # Advanced configuration
│   ├── callbacks/        # Callback examples
│   └── register_model/   # Register model examples
├── dut/                   # Verilog/SystemVerilog Design Under Test
│   └── advanced/         # Advanced DUT modules
│       └── multi_channel.v
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
│       └── test_advanced_uvm.sv
└── README.md             # Module 5 documentation
```

### Quick Start

**Run all examples using the orchestrator script:**
```bash
# Run all UVM examples
./scripts/module5.sh

# Run specific examples
./scripts/module5.sh --virtual-sequences
./scripts/module5.sh --coverage
./scripts/module5.sh --configuration
./scripts/module5.sh --callbacks
./scripts/module5.sh --register-model

# Run tests
./scripts/module5.sh --uvm-tests

# Run everything
./scripts/module5.sh --all-examples --uvm-tests
```

**Run examples individually:**
```bash
# Compile and run UVM examples
cd module5/examples/virtual_sequences
verilator -sv --cc --exe --timing --trace \
    -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI \
    --binary $UVM_HOME/src/uvm_pkg.sv virtual_sequences.sv virtual_sequences.cpp \
    --top-module virtual_sequences
make -C obj_dir -f Vvirtual_sequences.mk
./obj_dir/Vvirtual_sequences

# Run UVM tests
cd module5/tests/uvm_tests
make SIM=verilator TEST=test_advanced_uvm
```

## Topics Covered

### 1. Virtual Sequences and Sequencers

- **Virtual Sequence Purpose**
  - Coordinating multiple sequencers
  - Cross-agent stimulus generation
  - System-level sequence coordination
  - Sequence libraries

- **Virtual Sequencer Implementation**
  - Virtual sequencer structure
  - Sequencer references
  - Connection in connect_phase
  - Virtual sequencer usage

#### Example 5.1: Virtual Sequences (`module5/examples/virtual_sequences/virtual_sequences.sv`)

**What it demonstrates:**
- **VirtualSequencer**: Contains references to multiple sequencers (`master_seqr`, `slave_seqr`)
- **VirtualSequence**: Coordinates sequences on multiple sequencers
- **ChannelSequence**: Regular sequence for a single channel
- **Parallel Execution**: Using `fork-join` for concurrent sequences
- **Sequential Execution**: Sequential sequence coordination

**Virtual Sequence Methods and Patterns:**

1. **Virtual Sequencer Structure:**
   ```systemverilog
   class VirtualSequencer extends uvm_sequencer;
       uvm_sequencer #(VirtualTransaction) master_seqr;
       uvm_sequencer #(VirtualTransaction) slave_seqr;
       
       function void connect_phase(uvm_phase phase);
           super.connect_phase(phase);
           // Get sequencer references from environment
           master_seqr = env.master_agent.sequencer;
           slave_seqr = env.slave_agent.sequencer;
       endfunction
   endclass
   ```
   - **Purpose**: Hold references to multiple sequencers
   - **Key**: References are set in `connect_phase()` from environment
   - **Note**: Virtual sequencer doesn't create sequencers, only references them

2. **Virtual Sequence Body:**
   ```systemverilog
   class VirtualSequence extends uvm_sequence;
       uvm_sequencer #(VirtualTransaction) master_seqr;
       uvm_sequencer #(VirtualTransaction) slave_seqr;
       
       task body();
           ChannelSequence master_seq, slave_seq;
           
           // Parallel execution
           fork
               begin
                   master_seq = ChannelSequence::type_id::create("master_seq");
                   master_seq.channel = 0;
                   master_seq.start(master_seqr);  // Start on master sequencer
               end
               begin
                   slave_seq = ChannelSequence::type_id::create("slave_seq");
                   slave_seq.channel = 1;
                   slave_seq.start(slave_seqr);    // Start on slave sequencer
               end
           join
           
           // Sequential execution
           seq1.start(master_seqr);
           seq2.start(slave_seqr);
       endtask
   endclass
   ```
   - **Purpose**: Coordinate sequences on multiple sequencers
   - **Key**: Virtual sequence doesn't extend `uvm_sequence #(transaction_type)`
   - **Parallel**: Use `fork-join` for concurrent execution
   - **Sequential**: Call `start()` sequentially for ordered execution

3. **Setting Sequencer References:**
   ```systemverilog
   function void connect_phase(uvm_phase phase);
       super.connect_phase(phase);
       // Set virtual sequencer references
       vseqr.master_seqr = master_seqr;
       vseqr.slave_seqr = slave_seqr;
       // Set virtual sequence references
       vseq.master_seqr = master_seqr;
       vseq.slave_seqr = slave_seqr;
   endfunction
   ```
   - **Purpose**: Connect virtual sequencer/sequence to actual sequencers
   - **Usage**: In test's `connect_phase()`
   - **Key**: Must be set before starting virtual sequence

4. **Starting Virtual Sequence:**
   ```systemverilog
   task run_phase(uvm_phase phase);
       vseq = VirtualSequence::type_id::create("vseq");
       vseq.master_seqr = master_seqr;  // Set references
       vseq.slave_seqr = slave_seqr;
       vseq.start(vseqr);  // Start on virtual sequencer
   endtask
   ```
   - **Purpose**: Start virtual sequence execution
   - **Key**: Virtual sequence can start on virtual sequencer or null

5. **Parallel Sequence Execution Pattern:**
   ```systemverilog
   fork
       begin
           seq1.start(sequencer1);  // Concurrent execution
       end
       begin
           seq2.start(sequencer2);  // Concurrent execution
       end
   join  // Wait for both to complete
   ```
   - **Purpose**: Execute sequences concurrently
   - **Key**: Both sequences run in parallel, `join` waits for both
   - **Timing**: Total time = max(seq1_time, seq2_time)
   - **Use case**: Independent operations, concurrent testing

6. **Fork-Join Variants:**
   ```systemverilog
   // fork-join: Wait for all to complete
   fork
       seq1.start(seqr1);
       seq2.start(seqr2);
   join
   
   // fork-join_any: Wait for any one to complete
   fork
       seq1.start(seqr1);
       seq2.start(seqr2);
   join_any
   // Continues after first completes
   
   // fork-join_none: Don't wait, continue immediately
   fork
       seq1.start(seqr1);
       seq2.start(seqr2);
   join_none
   // Continues immediately, sequences run in background
   ```
   - **fork-join**: Wait for all sequences (most common)
   - **fork-join_any**: Wait for first to complete
   - **fork-join_none**: Fire and forget

7. **Sequential Sequence Execution Pattern:**
   ```systemverilog
   seq1.start(sequencer1);  // Execute first
   seq2.start(sequencer2);  // Execute after seq1 completes
   ```
   - **Purpose**: Execute sequences in order
   - **Key**: Second sequence starts after first completes
   - **Timing**: Total time = seq1_time + seq2_time
   - **Use case**: Ordered operations, dependencies

8. **Null Check Pattern:**
   ```systemverilog
   if (master_seqr != null && slave_seqr != null) begin
       // Both sequencers available
       fork
           seq1.start(master_seqr);
           seq2.start(slave_seqr);
       join
   end
   ```
   - **Purpose**: Check sequencer availability
   - **Key**: Always check for null before using sequencer references

**Key Concepts:**
- Virtual sequencer contains references to multiple sequencers
- Virtual sequence coordinates sequences on different sequencers
- Parallel sequence execution using fork-join enables concurrent testing
- Sequential sequence execution enables ordered coordination
- **Virtual sequencer** - Holds references, doesn't create sequencers
- **Virtual sequence** - Coordinates sequences on multiple sequencers
- **Sequencer references** - Set in `connect_phase()` from environment
- **Parallel execution** - `fork-join` for concurrent sequences
- **Sequential execution** - Sequential `start()` calls for ordered execution

**Execution:**
```bash
# Using orchestrator script (recommended)
./scripts/module5.sh --virtual-sequences

# Or compile directly with Verilator
cd module5/examples/virtual_sequences
verilator -sv --cc --exe --timing --trace \
    -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI \
    --binary $UVM_HOME/src/uvm_pkg.sv virtual_sequences.sv virtual_sequences.cpp \
    --top-module virtual_sequences
make -C obj_dir -f Vvirtual_sequences.mk
./obj_dir/Vvirtual_sequences
```

**Verified Output:**
- Virtual sequencer creation and connection
- Virtual sequence coordination
- Parallel sequence execution
- Sequential sequence execution

### 2. Coverage Models

- **Functional Coverage**
  - Coverage model structure
  - Coverage sampling
  - Coverage analysis
  - Coverage reporting

- **Coverage Types**
  - Data coverage
  - Address range coverage
  - Command coverage
  - Cross coverage

#### Example 5.2: Coverage (`module5/examples/coverage/coverage.sv`)

**What it demonstrates:**
- **CoverageModel**: Extends `uvm_subscriber` for coverage collection
- **Coverage Sampling**: Via `write()` method from analysis port
- **Coverage Types**: Data, address range, command, and cross coverage
- **Coverage Analysis**: Coverage statistics and reporting

**Coverage Methods and Functions:**

1. **Coverage Write Method:**
   ```systemverilog
   class CoverageModel extends uvm_subscriber #(CoverageTransaction);
       int data_coverage[logic [7:0]];  // Associative array
       int address_ranges[3];
       int command_coverage[logic [7:0]];
       int cross_coverage[logic [7:0]][logic [7:0]];  // 2D associative array
       
       function void write(CoverageTransaction t);
           // Sample data coverage
           if (!data_coverage.exists(t.data)) begin
               data_coverage[t.data] = 0;
           end
           data_coverage[t.data]++;
           
           // Sample address range
           if (t.address < 16'h4000) begin
               address_ranges[0]++;  // low
           end else if (t.address < 16'h8000) begin
               address_ranges[1]++;  // mid
           end else begin
               address_ranges[2]++;  // high
           end
           
           // Sample cross coverage
           if (!cross_coverage[t.data].exists(t.command)) begin
               cross_coverage[t.data][t.command] = 0;
           end
           cross_coverage[t.data][t.command]++;
       endfunction
   endclass
   ```
   - **Purpose**: Sample coverage data from transactions
   - **Usage**: Called automatically when monitor writes to analysis port
   - **Key**: Uses associative arrays to track unique values

2. **Associative Array Methods:**
   ```systemverilog
   // Check if key exists
   if (!data_coverage.exists(t.data)) begin
       data_coverage[t.data] = 0;
   end
   
   // Increment count
   data_coverage[t.data]++;
   
   // Get number of unique keys
   int count = data_coverage.num();
   
   // Iterate over keys
   foreach (data_coverage[key]) begin
       // Process each key
   end
   ```
   - **Purpose**: Track unique values and counts
   - **Key**: Associative arrays enable efficient coverage tracking

3. **Coverage Report Method:**
   ```systemverilog
   function void report_phase(uvm_phase phase);
       super.report_phase(phase);
       
       // Get unique value counts
       report_data_count = data_coverage.num();
       report_cmd_count = command_coverage.num();
       
       // Count cross coverage pairs
       report_cross_count = 0;
       foreach (cross_coverage[data]) begin
           report_cross_count += cross_coverage[data].num();
       end
       
       `uvm_info("COVERAGE", $sformatf("Data Coverage: %0d unique values", 
                 report_data_count), UVM_MEDIUM)
   endfunction
   ```
   - **Purpose**: Report coverage statistics
   - **Usage**: Called in cleanup phase
   - **Key**: Uses `num()` to count unique keys

4. **Coverage Connection:**
   ```systemverilog
   function void connect_phase(uvm_phase phase);
       super.connect_phase(phase);
       producer.ap.connect(coverage.analysis_export);
   endfunction
   ```
   - **Purpose**: Connect producer to coverage model
   - **Key**: Coverage automatically receives via `write()` method

5. **2D Associative Array for Cross Coverage:**
   ```systemverilog
   int cross_coverage[logic [7:0]][logic [7:0]];  // 2D associative array
   
   // Check if first dimension exists
   if (!cross_coverage.exists(data)) begin
       // First dimension doesn't exist
   end
   
   // Check if second dimension exists
   if (!cross_coverage[data].exists(command)) begin
       cross_coverage[data][command] = 0;
   end
   cross_coverage[data][command]++;
   ```
   - **Purpose**: Track combinations of multiple fields
   - **Key**: 2D associative arrays for cross coverage
   - **Usage**: Track (data, command) pairs, (address, data) pairs, etc.

6. **Coverage Initialization Pattern:**
   ```systemverilog
   function new(string name, uvm_component parent);
       super.new(name, parent);
       // Initialize fixed arrays
       address_ranges[0] = 0;  // low
       address_ranges[1] = 0;  // mid
       address_ranges[2] = 0;  // high
   endfunction
   ```
   - **Purpose**: Initialize coverage data structures
   - **Key**: Fixed arrays initialized in constructor

**Key Concepts:**
- Coverage model class extending `uvm_subscriber` enables automatic sampling
- Coverage sampling via `write()` method receives transactions
- Coverpoints and bins track unique values and ranges
- Cross coverage between multiple fields tracks combinations
- **`write(t)`** - Receive transaction for coverage sampling
- **Associative arrays** - Track unique values efficiently
- **`exists(key)`** - Check if key exists in associative array
- **`num()`** - Count number of unique keys
- **`foreach`** - Iterate over associative array keys
- **2D associative arrays** - Track cross coverage pairs

**Execution:**
```bash
./scripts/module5.sh --coverage
```

**Verified Output:**
- Coverage sampling demonstrated
- Data coverage tracking
- Address range coverage
- Command coverage tracking
- Cross coverage analysis

### 3. Advanced Configuration

- **Complex Configuration Objects**
  - Configuration object design
  - Configuration fields
  - Configuration methods
  - Configuration copying

- **Configuration Hierarchy**
  - Environment-level configuration
  - Agent-level configuration
  - Component-specific configuration
  - Configuration inheritance

#### Example 5.3: Advanced Configuration (`module5/examples/configuration/configuration.sv`)

**What it demonstrates:**
- **AgentConfig**: Complex configuration object with multiple fields
- **EnvConfig**: Environment-level configuration containing agent configs
- **Configuration Hierarchy**: Multi-level configuration structure
- **Configuration Usage**: Setting and getting complex configuration

**Advanced Configuration Methods:**

1. **Configuration Object with do_copy():**
   ```systemverilog
   class AgentConfig extends uvm_object;
       bit active;
       int address_width;
       int data_width;
       int timeout;
       string mode;
       
       function void do_copy(uvm_object rhs);
           AgentConfig cfg;
           if (!$cast(cfg, rhs)) return;
           super.do_copy(rhs);  // Copy base class fields
           active = cfg.active;
           address_width = cfg.address_width;
           data_width = cfg.data_width;
           timeout = cfg.timeout;
           mode = cfg.mode;
       endfunction
   endclass
   ```
   - **Purpose**: Enable configuration copying
   - **Usage**: Allows configuration inheritance and copying
   - **Key**: Must copy all configuration fields

2. **Nested Configuration Objects:**
   ```systemverilog
   class EnvConfig extends uvm_object;
       AgentConfig master_config;
       AgentConfig slave_config;
       
       function new(string name = "EnvConfig");
           super.new(name);
           master_config = AgentConfig::type_id::create("master_config");
           slave_config = AgentConfig::type_id::create("slave_config");
       endfunction
   endclass
   ```
   - **Purpose**: Multi-level configuration hierarchy
   - **Key**: Configuration objects can contain other configuration objects

3. **Setting Component-Specific Configuration:**
   ```systemverilog
   function void build_phase(uvm_phase phase);
       super.build_phase(phase);
       
       // Create and configure
       env_config = EnvConfig::type_id::create("env_config");
       env_config.master_config.active = 1;
       env_config.master_config.address_width = 16;
       
       // Set component-specific configuration
       uvm_config_db#(AgentConfig)::set(this, "master_comp", "agent_config", 
                                        env_config.master_config);
       uvm_config_db#(AgentConfig)::set(this, "slave_comp", "agent_config", 
                                        env_config.slave_config);
       
       // Create components (they get config in build_phase)
       master_comp = ConfigurableComponent::type_id::create("master_comp", this);
   endfunction
   ```
   - **Purpose**: Set configuration for specific components
   - **Key**: Use component path in `set()` call

4. **Getting Configuration in Component:**
   ```systemverilog
   function void build_phase(uvm_phase phase);
       super.build_phase(phase);
       
       // Get configuration from ConfigDB
       if (!uvm_config_db#(AgentConfig)::get(this, "", "agent_config", cfg)) begin
           `uvm_warning("CONFIG", "Config not found, using defaults")
           cfg = AgentConfig::type_id::create("cfg");
       end else begin
           `uvm_info("CONFIG", $sformatf("Got config: %s", cfg.convert2string()), UVM_MEDIUM)
       end
   endfunction
   ```
   - **Purpose**: Retrieve configuration in component
   - **Key**: Always check return value, provide defaults

5. **Configuration String Representation:**
   ```systemverilog
   function string convert2string();
       return $sformatf("active=%0b, addr_w=%0d, data_w=%0d, timeout=%0d, mode=%s",
                        active, address_width, data_width, timeout, mode);
   endfunction
   ```
   - **Purpose**: Debug configuration values
   - **Usage**: Logging, debugging

**Key Concepts:**
- Complex configuration objects enable rich configuration data
- Configuration hierarchy supports multi-level configuration
- Resource database usage provides flexible configuration access
- Configuration inheritance enables configuration reuse
- **`do_copy()`** - Enable configuration copying
- **Nested configs** - Configuration objects containing other configs
- **Component-specific paths** - Set config for specific components
- **Config hierarchy** - Multi-level configuration structure
- **`convert2string()`** - Debug configuration values

**Execution:**
```bash
./scripts/module5.sh --configuration
```

**Verified Output:**
- Complex configuration object creation
- Configuration hierarchy demonstrated
- Configuration setting and getting
- Configuration object usage

### 4. Callbacks

- **Callback Mechanism**
  - Callback base classes
  - Callback registration
  - Pre/post callbacks
  - Callback execution

- **Callback Usage Patterns**
  - Driver callbacks
  - Monitor callbacks
  - Transaction modification
  - Side-effect actions

#### Example 5.4: Callbacks (`module5/examples/callbacks/callbacks.sv`)

**What it demonstrates:**
- **DriverCallbackBase**: Base callback class for driver
- **DriverCallback**: Driver callback implementation
- **MonitorCallbackBase**: Base callback class for monitor
- **MonitorCallback**: Monitor callback implementation
- **Callback Registration**: Registering callbacks with components

**Callback Methods and Macros:**

1. **Callback Base Class:**
   ```systemverilog
   class DriverCallbackBase extends uvm_callback;
       `uvm_object_utils(DriverCallbackBase)
       
       virtual function void pre_drive(uvm_driver #(Transaction) driver, 
                                       Transaction txn);
           // Override in derived classes
       endfunction
       
       virtual function void post_drive(uvm_driver #(Transaction) driver, 
                                        Transaction txn);
           // Override in derived classes
       endfunction
   endclass
   ```
   - **Purpose**: Define callback interface
   - **Key**: Virtual functions to be overridden in derived classes

2. **Callback Implementation:**
   ```systemverilog
   class DriverCallback extends DriverCallbackBase;
       `uvm_object_utils(DriverCallback)
       `uvm_register_cb(DriverWithCallbacks, DriverCallback)  // Register callback
       
       function void pre_drive(uvm_driver #(Transaction) driver, Transaction txn);
           `uvm_info("CALLBACK", "Pre-drive callback", UVM_MEDIUM)
           txn.data = txn.data ^ 8'hFF;  // Modify transaction
       endfunction
       
       function void post_drive(uvm_driver #(Transaction) driver, Transaction txn);
           `uvm_info("CALLBACK", "Post-drive callback", UVM_MEDIUM)
       endfunction
   endclass
   ```
   - **Purpose**: Implement callback behavior
   - **Key**: `uvm_register_cb` macro registers callback type

3. **Callback Registration Macro:**
   ```systemverilog
   `uvm_register_cb(ComponentClass, CallbackClass)
   ```
   - **Purpose**: Register callback type with component type
   - **Usage**: Must be in callback class definition
   - **Key**: Enables type-safe callback registration

4. **Callback Execution Macro:**
   ```systemverilog
   task run_phase(uvm_phase phase);
       forever begin
           seq_item_port.get_next_item(item);
           
           // Execute pre-drive callbacks
           `uvm_do_callbacks(DriverWithCallbacks, DriverCallback, 
                             pre_drive(this, item))
           
           // Drive transaction
           drive_transaction(item);
           
           // Execute post-drive callbacks
           `uvm_do_callbacks(DriverWithCallbacks, DriverCallback, 
                             post_drive(this, item))
           
           seq_item_port.item_done();
       end
   endtask
   ```
   - **Purpose**: Execute all registered callbacks
   - **Usage**: Call at appropriate points in component code
   - **Key**: Executes all callbacks registered for this component instance

5. **Callback Registration:**
   ```systemverilog
   function void connect_phase(uvm_phase phase);
       super.connect_phase(phase);
       
       // Create callback instance
       driver_cb = DriverCallback::type_id::create("driver_cb");
       
       // Register callback with component
       uvm_callbacks#(DriverWithCallbacks, DriverCallback)::add(driver, driver_cb);
   endfunction
   ```
   - **Purpose**: Connect callback to component instance
   - **Usage**: In test's `connect_phase()`
   - **Key**: Callback must be registered before it can be executed

6. **Callback Static Methods:**
   ```systemverilog
   // Add callback
   uvm_callbacks#(ComponentClass, CallbackClass)::add(component, callback);
   
   // Remove callback
   uvm_callbacks#(ComponentClass, CallbackClass)::delete(component, callback);
   
   // Check if callback exists
   if (uvm_callbacks#(ComponentClass, CallbackClass)::get_size(component) > 0) begin
       // Callbacks registered
   end
   
   // Get all callbacks
   uvm_queue#(CallbackClass) callbacks;
   uvm_callbacks#(ComponentClass, CallbackClass)::get(component, callbacks);
   ```
   - **Purpose**: Manage callbacks
   - **Key**: Static methods operate on callback registry

7. **Multiple Callbacks Pattern:**
   ```systemverilog
   // Register multiple callbacks
   callback1 = Callback::type_id::create("cb1");
   callback2 = Callback::type_id::create("cb2");
   uvm_callbacks#(Component, Callback)::add(component, callback1);
   uvm_callbacks#(Component, Callback)::add(component, callback2);
   
   // All callbacks execute in order
   `uvm_do_callbacks(Component, Callback, method(this, txn))
   // Executes: callback1.method(), then callback2.method()
   ```
   - **Purpose**: Multiple callbacks for same component
   - **Key**: All registered callbacks execute in registration order

8. **Callback Execution Order:**
   ```systemverilog
   // Callbacks execute in registration order
   // 1. Pre-drive callbacks (all registered)
   `uvm_do_callbacks(Driver, Callback, pre_drive(this, txn))
   
   // 2. Drive transaction
   drive_transaction(txn);
   
   // 3. Post-drive callbacks (all registered)
   `uvm_do_callbacks(Driver, Callback, post_drive(this, txn))
   ```
   - **Purpose**: Control callback execution order
   - **Key**: Pre-callbacks → operation → post-callbacks

**Key Concepts:**
- Callback mechanism enables non-intrusive extension
- Pre/post callbacks provide hooks for customization
- Callback registration connects callbacks to components
- Callback usage patterns enable flexible test customization
- **`uvm_register_cb`** - Register callback type
- **`uvm_do_callbacks`** - Execute all registered callbacks
- **Callback base class** - Define callback interface
- **Callback registration** - Connect callback to component
- **Pre/post callbacks** - Hooks before/after operations

**Execution:**
```bash
./scripts/module5.sh --callbacks
```

**Verified Output:**
- Callback registration demonstrated
- Pre-drive callbacks executed
- Post-drive callbacks executed
- Monitor callbacks executed

### 5. Register Model

- **Register Model Basics**
  - Register model structure
  - Register blocks, registers, fields
  - Register read/write operations
  - Register predictor

- **Register Model Components**
  - RegisterField: Individual register fields
  - Register: Complete registers
  - RegisterBlock: Register address spaces
  - Register operations

#### Example 5.5: Register Model (`module5/examples/register_model/register_model.sv`)

**What it demonstrates:**
- **RegisterField**: Represents a register field with offset, width, and value
- **Register**: Represents a register with address and fields
- **RegisterBlock**: Represents a register block with multiple registers
- **Register Operations**: Read/write operations on registers

**Register Model Methods:**

1. **Register Field Methods:**
   ```systemverilog
   class RegisterField extends uvm_object;
       string name;
       int unsigned offset;
       int unsigned width;
       logic [31:0] value;
       
       function string convert2string();
           return $sformatf("%s[%0d:%0d]=0x%08h", name, offset+width-1, offset, value);
       endfunction
   endclass
   ```
   - **Purpose**: Represent individual register fields
   - **Key**: Fields have offset, width, and value

2. **Register Add Field Method:**
   ```systemverilog
   class Register extends uvm_object;
       RegisterField fields[$];
       
       function void add_field(RegisterField field);
           fields.push_back(field);
       endfunction
   endclass
   ```
   - **Purpose**: Add field to register
   - **Usage**: Build register structure
   - **Key**: Fields stored in queue

3. **Register Write Method:**
   ```systemverilog
   function void write(logic [31:0] data);
       value = data;
       `uvm_info("REGISTER", $sformatf("Write %s: 0x%08h", name, value), UVM_MEDIUM)
       
       // Update field values from register value
       foreach (fields[i]) begin
           fields[i].value = (data >> fields[i].offset) & ((1 << fields[i].width) - 1);
       end
   endfunction
   ```
   - **Purpose**: Write value to register
   - **Key**: Updates register value and all field values
   - **Field extraction**: Uses bit shifting and masking

4. **Register Read Method:**
   ```systemverilog
   function logic [31:0] read();
       `uvm_info("REGISTER", $sformatf("Read %s: 0x%08h", name, value), UVM_MEDIUM)
       return value;
   endfunction
   ```
   - **Purpose**: Read register value
   - **Returns**: Register value

5. **Register Block Add Register:**
   ```systemverilog
   class RegisterBlock extends uvm_object;
       Register registers[string];  // Associative array by name
       
       function void add_register(Register reg_item);
           registers[reg_item.name] = reg_item;
           reg_item.address = base_address + (registers.num() * 4);
       endfunction
   endclass
   ```
   - **Purpose**: Add register to block
   - **Key**: Automatically assigns address based on position

6. **Register Block Get Register:**
   ```systemverilog
   function Register get_register(string name);
       if (registers.exists(name)) begin
           return registers[name];
       end else begin
           `uvm_warning("REG_BLOCK", $sformatf("Register %s not found", name))
           return null;
       end
   endfunction
   ```
   - **Purpose**: Look up register by name
   - **Key**: Returns null if register not found

7. **Register Block Write/Read:**
   ```systemverilog
   function void write_register(string name, logic [31:0] data);
       Register reg_item;
       reg_item = get_register(name);
       if (reg_item != null) begin
           reg_item.write(data);
       end
   endfunction
   
   function logic [31:0] read_register(string name);
       Register reg_item;
       reg_item = get_register(name);
       if (reg_item != null) begin
           return reg_item.read();
       end else begin
           return 32'h0;
       end
   endfunction
   ```
   - **Purpose**: High-level register access
   - **Usage**: Access registers by name
   - **Key**: Handles null checks

8. **Register Model Construction:**
   ```systemverilog
   // Create register block
   reg_block = RegisterBlock::type_id::create("reg_block");
   reg_block.base_address = 32'h1000_0000;
   
   // Create register with fields
   control_reg = Register::type_id::create("control_reg");
   field1 = RegisterField::type_id::create("enable");
   field1.offset = 0;
   field1.width = 1;
   control_reg.add_field(field1);
   reg_block.add_register(control_reg);
   ```

9. **Register Field Extraction:**
   ```systemverilog
   function void write(logic [31:0] data);
       value = data;
       // Extract field value from register value
       foreach (fields[i]) begin
           // Shift right by offset, mask to field width
           fields[i].value = (data >> fields[i].offset) & ((1 << fields[i].width) - 1);
       end
   endfunction
   ```
   - **Purpose**: Extract field values from register value
   - **Key**: Bit shifting and masking for field extraction
   - **Example**: Field at offset 4, width 3: `(data >> 4) & 7`

10. **Register Field Composition:**
    ```systemverilog
    // Build register value from fields
    logic [31:0] reg_value = 0;
    foreach (fields[i]) begin
        reg_value |= (fields[i].value << fields[i].offset);
    end
    ```
    - **Purpose**: Compose register value from field values
    - **Key**: Shift and OR field values into register

11. **Register Block Address Management:**
    ```systemverilog
    function void add_register(Register reg_item);
        registers[reg_item.name] = reg_item;
        // Auto-assign address based on position
        reg_item.address = base_address + (registers.num() * 4);
    endfunction
    ```
    - **Purpose**: Automatically assign register addresses
    - **Key**: Address = base_address + (index * 4) for 32-bit registers

**Key Concepts:**
- Register model structure provides abstraction for register access
- Register blocks, registers, fields organize register hierarchy
- Register read/write operations enable register verification
- Simplified register model demonstrates concepts (full implementation requires uvm_reg)
- **`add_field()`** - Add field to register
- **`write(data)`** - Write value to register
- **`read()`** - Read value from register
- **`add_register()`** - Add register to block
- **`get_register(name)`** - Look up register by name
- **`write_register()`** - High-level write by name
- **`read_register()`** - High-level read by name
- **Field extraction** - Bit shifting and masking for field values

**Note:** This is a simplified register model. Full UVM register model requires the `uvm_reg` package.

**Execution:**
```bash
./scripts/module5.sh --register-model
```

**Verified Output:**
- Register model structure demonstrated
- Register field operations
- Register read/write operations
- Register block management

### 6. Advanced UVM Methods Reference

This section provides a comprehensive reference for all advanced UVM methods used in Module 5.

#### Virtual Sequence Methods

**Virtual Sequencer:**
- **Sequencer References**: Hold references to multiple sequencers
- **Connect Phase**: Set references from environment
- **No Transaction Type**: Virtual sequencer doesn't extend `uvm_sequencer #(type)`

**Virtual Sequence:**
- **Body Task**: Coordinates sequences on multiple sequencers
- **Sequencer References**: Set before starting sequence
- **Parallel Execution**: `fork-join` for concurrent sequences
- **Sequential Execution**: Sequential `start()` calls

**Pattern:**
```systemverilog
// Virtual sequencer
class VirtualSequencer extends uvm_sequencer;
    uvm_sequencer #(Txn) seqr1, seqr2;
endclass

// Virtual sequence
class VirtualSequence extends uvm_sequence;
    uvm_sequencer #(Txn) seqr1, seqr2;
    
    task body();
        fork
            seq1.start(seqr1);
            seq2.start(seqr2);
        join
    endtask
endclass
```

#### Coverage Methods

**Coverage Model:**
- **`write(t)`** - Receive transaction for sampling
- **Associative Arrays** - Track unique values
- **`exists(key)`** - Check if key exists
- **`num()`** - Count unique keys
- **`foreach`** - Iterate over keys

**Coverage Pattern:**
```systemverilog
class CoverageModel extends uvm_subscriber #(Transaction);
    int coverage[logic [7:0]];
    
    function void write(Transaction t);
        if (!coverage.exists(t.data)) begin
            coverage[t.data] = 0;
        end
        coverage[t.data]++;
    endfunction
    
    function void report_phase(uvm_phase phase);
        int count = coverage.num();
    endfunction
endclass
```

#### Advanced Configuration Methods

**Configuration Object:**
- **`do_copy(rhs)`** - Copy configuration fields
- **`convert2string()`** - String representation
- **Nested Configs** - Config objects containing other configs

**Configuration Pattern:**
```systemverilog
class AgentConfig extends uvm_object;
    bit active;
    int timeout;
    
    function void do_copy(uvm_object rhs);
        AgentConfig cfg;
        if (!$cast(cfg, rhs)) return;
        super.do_copy(rhs);
        active = cfg.active;
        timeout = cfg.timeout;
    endfunction
endclass
```

#### Callback Methods

**Callback Macros:**
- **`uvm_register_cb(Component, Callback)`** - Register callback type
- **`uvm_do_callbacks(Component, Callback, method(args))`** - Execute callbacks

**Callback Registration:**
- **`uvm_callbacks#(Component, Callback)::add(component, callback)`** - Add callback
- **`uvm_callbacks#(Component, Callback)::delete(component, callback)`** - Remove callback

**Callback Pattern:**
```systemverilog
// Callback base
class CallbackBase extends uvm_callback;
    virtual function void pre_op(Component comp, Transaction txn);
    endfunction
endclass

// Callback implementation
class Callback extends CallbackBase;
    `uvm_register_cb(Component, Callback)
    
    function void pre_op(Component comp, Transaction txn);
        // Callback logic
    endfunction
endclass

// In component
`uvm_do_callbacks(Component, Callback, pre_op(this, txn))

// Registration
uvm_callbacks#(Component, Callback)::add(component, callback);
```

#### Register Model Methods

**Register Field:**
- **`convert2string()`** - String representation

**Register:**
- **`add_field(field)`** - Add field to register
- **`write(data)`** - Write value to register
- **`read()`** - Read value from register

**Register Block:**
- **`add_register(reg)`** - Add register to block
- **`get_register(name)`** - Look up register by name
- **`write_register(name, data)`** - Write register by name
- **`read_register(name)`** - Read register by name

**Register Pattern:**
```systemverilog
// Create register block
reg_block = RegisterBlock::type_id::create("reg_block");

// Create register with fields
reg = Register::type_id::create("reg");
field = RegisterField::type_id::create("field");
reg.add_field(field);
reg_block.add_register(reg);

// Access registers
reg_block.write_register("reg", 32'h1234_5678);
data = reg_block.read_register("reg");
```

#### Common Patterns and Best Practices

**1. Virtual Sequence Pattern:**
```systemverilog
task body();
    ChannelSequence seq1, seq2;
    
    // Parallel
    fork
        seq1.start(seqr1);
        seq2.start(seqr2);
    join
    
    // Sequential
    seq1.start(seqr1);
    seq2.start(seqr2);
endtask
```

**2. Coverage Pattern:**
```systemverilog
function void write(Transaction t);
    if (!coverage.exists(t.data)) begin
        coverage[t.data] = 0;
    end
    coverage[t.data]++;
endfunction
```

**3. Configuration Pattern:**
```systemverilog
function void do_copy(uvm_object rhs);
    Config cfg;
    if (!$cast(cfg, rhs)) return;
    super.do_copy(rhs);
    // Copy all fields
endfunction
```

**4. Callback Pattern:**
```systemverilog
// Register callback type
`uvm_register_cb(Component, Callback)

// Execute callbacks
`uvm_do_callbacks(Component, Callback, method(this, txn))

// Register callback
uvm_callbacks#(Component, Callback)::add(component, callback);
```

**5. Register Pattern:**
```systemverilog
reg_block.add_register(reg);
reg_block.write_register("reg", data);
data = reg_block.read_register("reg");
```

## Learning Outcomes

By the end of this module, you should be able to:

- Implement virtual sequences to coordinate multiple sequencers
- Create coverage models for functional verification
- Use advanced configuration with complex objects
- Implement callbacks for component extension
- Use register models for register verification
- Apply advanced UVM patterns in testbenches

## Exercises

1. **Virtual Sequences**
   - Create virtual sequencer with multiple sequencer references
   - Implement virtual sequence coordinating multiple channels
   - Test parallel sequence execution
   - Test sequential sequence coordination

2. **Coverage Models**
   - Create coverage model extending uvm_subscriber
   - Implement coverage sampling
   - Define coverage bins and ranges
   - Implement cross coverage

3. **Advanced Configuration**
   - Design complex configuration objects
   - Implement configuration hierarchy
   - Set and get configuration at multiple levels
   - Test configuration inheritance

4. **Callbacks**
   - Create callback base classes
   - Implement callback classes
   - Register callbacks with components
   - Test callback execution

5. **Register Model**
   - Design register model structure
   - Implement register fields and registers
   - Create register blocks
   - Test register read/write operations

## Execution Status

✅ **Module 5 has been successfully executed and verified.**

**Verification Date:** 2026-01-24  
**Status:** All examples and tests passing  
**Verilator Version:** 5.045  
**UVM Library:** UVM 2017 (1800.2-2017-1.0)  
**Test Results:**
- ✅ 5 SystemVerilog UVM examples executed successfully
- ✅ 1 UVM test compiled and passed
- ⏱️ Total execution time: ~27 minutes (UVM compilation takes significant time due to template instantiations)

**Examples Executed:**
1. ✅ Virtual Sequences - Virtual sequencer and sequence coordination demonstrated
2. ✅ Coverage - Functional coverage implementation demonstrated
3. ✅ Configuration - Advanced configuration objects demonstrated
4. ✅ Callbacks - Callback mechanism demonstrated
5. ✅ Register Model - Register model basics demonstrated

**Note:** UVM compilation with Verilator takes approximately 20-30 minutes due to extensive template instantiations, but all tests execute successfully.

**Execution Logs:** Full execution logs are available in `module5/module5.log` and individual example logs in each example directory (`compile.log`, `run.log`).

## Assessment

- [x] Can implement virtual sequences
- [x] Can create coverage models
- [x] Can use advanced configuration
- [x] Can implement callbacks
- [x] Can use register models
- [x] Understands advanced UVM patterns
- [x] Can apply advanced concepts in testbenches

## Next Steps

After completing this module, proceed to [Module 6: Complex Testbenches](MODULE6.md) for system-level verification with multi-agent environments, protocol verification, and multi-channel scoreboards.

## Quick Reference: Advanced UVM Methods Cheat Sheet

### Virtual Sequence Methods

| Method | Syntax | Purpose |
|--------|--------|---------|
| **Set Reference** | `vseqr.seqr = sequencer` | Set sequencer reference |
| **Start Sequence** | `seq.start(sequencer)` | Start sequence on sequencer |
| **Parallel** | `fork ... join` | Concurrent execution |
| **Sequential** | `seq1.start(); seq2.start()` | Ordered execution |

### Coverage Methods

| Method | Syntax | Purpose |
|--------|--------|---------|
| **Write** | `write(Transaction t)` | Sample coverage |
| **Exists** | `array.exists(key)` | Check key exists |
| **Num** | `array.num()` | Count unique keys |
| **Foreach** | `foreach (array[key])` | Iterate over keys |

### Configuration Methods

| Method | Syntax | Purpose |
|--------|--------|---------|
| **Do Copy** | `do_copy(uvm_object rhs)` | Copy config fields |
| **Convert** | `convert2string()` | String representation |
| **Set** | `uvm_config_db#(Type)::set(...)` | Set configuration |
| **Get** | `uvm_config_db#(Type)::get(...)` | Get configuration |

### Callback Methods

| Macro/Method | Syntax | Purpose |
|--------------|--------|---------|
| **Register** | `` `uvm_register_cb(Comp, Cb) `` | Register callback type |
| **Execute** | `` `uvm_do_callbacks(Comp, Cb, method(...)) `` | Execute callbacks |
| **Add** | `uvm_callbacks#(Comp, Cb)::add(comp, cb)` | Add callback |
| **Delete** | `uvm_callbacks#(Comp, Cb)::delete(comp, cb)` | Remove callback |

### Register Model Methods

| Method | Syntax | Purpose |
|--------|--------|---------|
| **Add Field** | `reg.add_field(field)` | Add field to register |
| **Write** | `reg.write(data)` | Write register |
| **Read** | `reg.read()` | Read register |
| **Add Register** | `block.add_register(reg)` | Add to block |
| **Get Register** | `block.get_register(name)` | Look up register |
| **Write Register** | `block.write_register(name, data)` | Write by name |
| **Read Register** | `block.read_register(name)` | Read by name |

### Common Patterns

**Virtual Sequence - Parallel:**
```systemverilog
task body();
    fork
        seq1.start(seqr1);
        seq2.start(seqr2);
    join  // Wait for both
endtask
```

**Virtual Sequence - Sequential:**
```systemverilog
task body();
    seq1.start(seqr1);  // First
    seq2.start(seqr2);  // Then
endtask
```

**Virtual Sequence - Wait for Any:**
```systemverilog
task body();
    fork
        seq1.start(seqr1);
        seq2.start(seqr2);
    join_any  // Continue after first completes
    // Additional code here
endtask
```

**Coverage - Basic:**
```systemverilog
function void write(Transaction t);
    if (!coverage.exists(t.data)) coverage[t.data] = 0;
    coverage[t.data]++;
endfunction
```

**Coverage - Cross Coverage:**
```systemverilog
function void write(Transaction t);
    if (!cross_coverage[t.data].exists(t.command)) begin
        cross_coverage[t.data][t.command] = 0;
    end
    cross_coverage[t.data][t.command]++;
endfunction
```

**Callbacks - Registration:**
```systemverilog
// In callback class
`uvm_register_cb(Component, Callback)

// In connect_phase
uvm_callbacks#(Component, Callback)::add(component, callback);

// In component
`uvm_do_callbacks(Component, Callback, method(this, txn))
```

**Configuration - Copy:**
```systemverilog
function void do_copy(uvm_object rhs);
    Config cfg;
    if (!$cast(cfg, rhs)) return;
    super.do_copy(rhs);
    active = cfg.active;
    timeout = cfg.timeout;
endfunction
```

**Register - Field Extraction:**
```systemverilog
function void write(logic [31:0] data);
    value = data;
    foreach (fields[i]) begin
        fields[i].value = (data >> fields[i].offset) & ((1 << fields[i].width) - 1);
    end
endfunction
```

**Register - Access:**
```systemverilog
reg_block.add_register(reg);
reg_block.write_register("reg", data);
data = reg_block.read_register("reg");
```

### Common Pitfalls and Solutions

**1. Virtual Sequence: Null Sequencer References:**
```systemverilog
// ❌ WRONG: No null check
task body();
    seq1.start(master_seqr);  // May crash if null
endtask

// ✅ CORRECT: Check for null
task body();
    if (master_seqr != null) begin
        seq1.start(master_seqr);
    end
endtask
```

**2. Coverage: Not Checking exists() Before Access:**
```systemverilog
// ❌ WRONG: Direct access
function void write(Transaction t);
    data_coverage[t.data]++;  // May fail if key doesn't exist
endfunction

// ✅ CORRECT: Check exists first
function void write(Transaction t);
    if (!data_coverage.exists(t.data)) begin
        data_coverage[t.data] = 0;
    end
    data_coverage[t.data]++;
endfunction
```

**3. Callbacks: Missing uvm_register_cb Macro:**
```systemverilog
// ❌ WRONG: Missing registration
class Callback extends CallbackBase;
    `uvm_object_utils(Callback)
    // Missing: `uvm_register_cb
endclass

// ✅ CORRECT: Register callback type
class Callback extends CallbackBase;
    `uvm_object_utils(Callback)
    `uvm_register_cb(Component, Callback)  // Required!
endclass
```

**4. Callbacks: Registering in Wrong Phase:**
```systemverilog
// ❌ WRONG: Registering in build_phase
function void build_phase(uvm_phase phase);
    uvm_callbacks#(Component, Callback)::add(component, callback);
endfunction

// ✅ CORRECT: Register in connect_phase
function void connect_phase(uvm_phase phase);
    uvm_callbacks#(Component, Callback)::add(component, callback);
endfunction
```

**5. Register: Not Checking Null from get_register():**
```systemverilog
// ❌ WRONG: No null check
function void write_register(string name, logic [31:0] data);
    reg = get_register(name);
    reg.write(data);  // May crash if null
endfunction

// ✅ CORRECT: Check null
function void write_register(string name, logic [31:0] data);
    reg = get_register(name);
    if (reg != null) begin
        reg.write(data);
    end
endfunction
```

**6. Virtual Sequence: Not Setting References:**
```systemverilog
// ❌ WRONG: References not set
task run_phase(uvm_phase phase);
    vseq.start(vseqr);  // vseq.master_seqr is null!
endtask

// ✅ CORRECT: Set references first
function void connect_phase(uvm_phase phase);
    vseq.master_seqr = master_seqr;  // Set references
    vseq.slave_seqr = slave_seqr;
endfunction
```

### Best Practices Checklist

- [ ] ✅ Set virtual sequencer references in `connect_phase()`
- [ ] ✅ Set virtual sequence references before starting
- [ ] ✅ Check sequencer references for null before use
- [ ] ✅ Use `fork-join` for parallel sequences
- [ ] ✅ Use `fork-join_any` for "wait for any" scenarios
- [ ] ✅ Use `fork-join_none` for fire-and-forget
- [ ] ✅ Check `exists()` before accessing associative array
- [ ] ✅ Initialize fixed arrays in constructor
- [ ] ✅ Use `num()` to count unique coverage values
- [ ] ✅ Handle 2D associative arrays for cross coverage
- [ ] ✅ Implement `do_copy()` in configuration objects
- [ ] ✅ Use `uvm_register_cb` macro in callback class
- [ ] ✅ Register callbacks in `connect_phase()`
- [ ] ✅ Check null return from `get_register()`
- [ ] ✅ Update field values in register `write()`
- [ ] ✅ Use bit shifting/masking for field extraction

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **UVM User's Guide**: Accellera Systems Initiative
- **Verilator Documentation**: https://verilator.org/
- **Verification Academy**: https://verificationacademy.com/
