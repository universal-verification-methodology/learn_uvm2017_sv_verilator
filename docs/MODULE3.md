# Module 3: UVM Basics

**Duration**: 2 weeks  
**Complexity**: Beginner-Intermediate  
**Goal**: Master UVM class hierarchy and phases

## Overview

This module introduces the Universal Verification Methodology (UVM) using SystemVerilog. You'll learn the fundamental UVM concepts, class hierarchy, phases, and how to structure UVM testbenches. This module establishes the foundation for all advanced UVM concepts.

### Examples and Code Structure

This module includes comprehensive examples and testbenches located in the `module3/` directory:

```
module3/
├── examples/              # SystemVerilog UVM examples
│   ├── class_hierarchy/   # UVM class hierarchy examples
│   ├── phases/           # UVM phases examples
│   ├── reporting/        # UVM reporting examples
│   ├── configdb/         # ConfigDB examples
│   ├── factory/          # Factory pattern examples
│   └── objections/       # Objection mechanism examples
├── dut/                   # Verilog/SystemVerilog Design Under Test
│   └── simple_blocks/     # Simple blocks for UVM testing
│       └── adder.v        # 8-bit adder
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
│       └── test_adder_uvm.sv
└── README.md             # Module 3 documentation
```

### Quick Start

**Run all examples using the orchestrator script:**
```bash
# Run all UVM examples
./scripts/module3.sh

# Run specific examples
./scripts/module3.sh --class-hierarchy
./scripts/module3.sh --phases
./scripts/module3.sh --reporting
./scripts/module3.sh --configdb
./scripts/module3.sh --factory
./scripts/module3.sh --objections

# Run tests
./scripts/module3.sh --uvm-tests

# Run everything
./scripts/module3.sh --all-examples --uvm-tests
```

**Run examples individually:**
```bash
# Compile and run UVM examples
cd module3/examples/class_hierarchy
verilator -sv --cc --exe --timing --trace \
    -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI \
    --binary $UVM_HOME/src/uvm_pkg.sv class_hierarchy.sv class_hierarchy.cpp \
    --top-module class_hierarchy
make -C obj_dir -f Vclass_hierarchy.mk
./obj_dir/Vclass_hierarchy

# Run UVM tests
cd module3/tests/uvm_tests
make SIM=verilator TEST=test_adder_uvm
```

## Topics Covered

### 1. Introduction to UVM

- **Universal Verification Methodology**
  - UVM standard (IEEE 1800.2-2017)
  - UVM class library
  - Methodology benefits
  - Industry adoption

- **UVM Benefits**
  - Reusability
  - Standardization
  - Scalability
  - Maintainability

#### Example 3.1: Class Hierarchy (`module3/examples/class_hierarchy/class_hierarchy.sv`)

**What it demonstrates:**
- **Transaction Class (`MyTransaction`)**: Extends `uvm_sequence_item` (uvm_object hierarchy)
- **Driver Class (`MyDriver`)**: Extends `uvm_driver` (uvm_component hierarchy)
- **Monitor Class (`MyMonitor`)**: Extends `uvm_monitor` (uvm_component hierarchy)
- **Agent Class (`MyAgent`)**: Extends `uvm_agent`, demonstrates component composition
- **Environment Class (`MyEnv`)**: Extends `uvm_env`, top-level verification environment
- **Test Class (`ClassHierarchyTest`)**: Extends `uvm_test`, orchestrates test execution

**UVM Methods and Functions:**

1. **Factory Registration Macros:**
   ```systemverilog
   `uvm_object_utils(MyTransaction)      // For uvm_object classes
   `uvm_component_utils(MyDriver)        // For uvm_component classes
   ```
   - **Purpose**: Automatically register class with UVM factory
   - **Usage**: Must be inside class definition
   - **Key**: Enables factory-based object creation

2. **Constructor Functions:**
   ```systemverilog
   // For uvm_object (transactions)
   function new(string name = "MyTransaction");
       super.new(name);
   endfunction
   
   // For uvm_component (drivers, monitors, etc.)
   function new(string name, uvm_component parent);
       super.new(name, parent);
   endfunction
   ```
   - **Purpose**: Initialize UVM objects and components
   - **Parameters**: 
     - `name`: Component/object name
     - `parent`: Parent component (for hierarchy)
   - **Key**: Must call `super.new()` to initialize base class

3. **Phase Functions and Tasks:**
   ```systemverilog
   // Build-time phase (function, top-down)
   function void build_phase(uvm_phase phase);
       super.build_phase(phase);
       `uvm_info("DRIVER", "Building driver component", UVM_MEDIUM)
   endfunction
   
   // Connect phase (function, top-down)
   function void connect_phase(uvm_phase phase);
       super.connect_phase(phase);
       `uvm_info("DRIVER", "Connecting driver component", UVM_MEDIUM)
   endfunction
   
   // Run phase (task, bottom-up, async)
   task run_phase(uvm_phase phase);
       `uvm_info("DRIVER", "Driver run_phase executing", UVM_MEDIUM)
       phase.raise_objection(this);
       #100;
       phase.drop_objection(this);
   endtask
   ```
   - **Purpose**: Implement UVM phase behavior
   - **Key**: Must call `super.build_phase(phase)` etc. to maintain hierarchy
   - **Objections**: Use in `run_phase()` to control simulation

4. **Factory Creation Method:**
   ```systemverilog
   driver = MyDriver::type_id::create("driver", this);
   txn = MyTransaction::type_id::create("txn");
   ```
   - **Purpose**: Create objects/components using factory
   - **Syntax**: `ClassName::type_id::create(name, parent)`
   - **Key**: Factory enables overrides and centralized creation

5. **Component Connection:**
   ```systemverilog
   driver.seq_item_port.connect(sequencer.seq_item_export);
   ```
   - **Purpose**: Connect component ports in `connect_phase()`
   - **Usage**: Connect driver to sequencer, monitor to scoreboard, etc.

6. **String Conversion Function:**
   ```systemverilog
   function string convert2string();
       return $sformatf("data=0x%02h, address=0x%04h", data, address);
   endfunction
   ```
   - **Purpose**: Provide human-readable string representation
   - **Usage**: Debugging, logging, reporting

**Key Concepts:**
- `uvm_object` - Base class for all UVM objects (transactions, sequences)
- `uvm_component` - Base class for all UVM components (drivers, monitors, agents)
- Component hierarchy: Test → Environment → Agent → Driver/Monitor
- Component creation using factory pattern
- **Factory macros** (`uvm_object_utils`, `uvm_component_utils`) enable registration
- **Phase functions/tasks** implement component behavior
- **Factory creation** (`type_id::create()`) enables overrides

**Execution:**
```bash
# Using orchestrator script (recommended)
./scripts/module3.sh --class-hierarchy

# Or compile directly with Verilator
cd module3/examples/class_hierarchy
verilator -sv --cc --exe --timing --trace \
    -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI \
    --binary $UVM_HOME/src/uvm_pkg.sv class_hierarchy.sv class_hierarchy.cpp \
    --top-module class_hierarchy
make -C obj_dir -f Vclass_hierarchy.mk
./obj_dir/Vclass_hierarchy
```

**Verified Output:**
- Component hierarchy construction
- Phase execution demonstration
- Component creation and connection
- UVM report summary

### 2. UVM Class Hierarchy

- **Object vs Component**
  - `uvm_object` - Base for transactions, sequences
  - `uvm_component` - Base for testbench components
  - Lifetime differences
  - Hierarchy differences

- **Component Classes**
  - `uvm_test` - Top-level test class
  - `uvm_env` - Verification environment
  - `uvm_agent` - Agent containing driver, monitor, sequencer
  - `uvm_driver` - Drives transactions to DUT
  - `uvm_monitor` - Observes DUT behavior
  - `uvm_sequencer` - Manages sequence execution

- **Object Classes**
  - `uvm_sequence_item` - Base transaction class
  - `uvm_sequence` - Sequence of transactions
  - Class relationships and inheritance

### 3. UVM Phases

- **Build-Time Phases (Top-down)**
  - `build_phase()` - Component construction
  - `connect_phase()` - Component connections
  - `end_of_elaboration_phase()` - Final setup
  - `start_of_simulation_phase()` - Simulation start

- **Run-Time Phases (Bottom-up)**
  - `pre_reset_phase()`, `reset_phase()`, `post_reset_phase()`
  - `pre_configure_phase()`, `configure_phase()`, `post_configure_phase()`
  - `pre_main_phase()`, `main_phase()`, `post_main_phase()`
  - `pre_shutdown_phase()`, `shutdown_phase()`, `post_shutdown_phase()`

- **Cleanup Phases (Bottom-up)**
  - `extract_phase()` - Extract results
  - `check_phase()` - Final checks
  - `report_phase()` - Generate reports
  - `final_phase()` - Final cleanup

#### Example 3.2: Phases (`module3/examples/phases/phases.sv`)

**What it demonstrates:**
- **Build-Time Phases**: Top-down execution (parent before child)
- **Run-Time Phases**: Bottom-up execution (child before parent)
- **Cleanup Phases**: Bottom-up execution (child before parent)
- **Phase Execution Order**: Demonstrates all UVM phases

**UVM Phase Functions and Tasks:**

1. **Build-Time Phases (Functions, Top-Down):**
   ```systemverilog
   function void build_phase(uvm_phase phase);
       super.build_phase(phase);
       `uvm_info("PHASES", "Building component", UVM_MEDIUM)
   endfunction
   
   function void connect_phase(uvm_phase phase);
       super.connect_phase(phase);
       `uvm_info("PHASES", "Connecting component", UVM_MEDIUM)
   endfunction
   
   function void end_of_elaboration_phase(uvm_phase phase);
       super.end_of_elaboration_phase(phase);
       `uvm_info("PHASES", "Elaboration complete", UVM_MEDIUM)
   endfunction
   
   function void start_of_simulation_phase(uvm_phase phase);
       super.start_of_simulation_phase(phase);
       `uvm_info("PHASES", "Simulation starting", UVM_MEDIUM)
   endfunction
   ```
   - **Purpose**: Component construction and setup
   - **Execution**: Top-down (parent before child)
   - **Key**: Use `super.build_phase(phase)` to maintain hierarchy

2. **Run-Time Phases (Tasks, Bottom-Up):**
   ```systemverilog
   task pre_reset_phase(uvm_phase phase);
       `uvm_info("PHASES", "Pre-reset phase", UVM_MEDIUM)
       #10;
   endtask
   
   task reset_phase(uvm_phase phase);
       `uvm_info("PHASES", "Reset phase", UVM_MEDIUM)
       #20;
   endtask
   
   task main_phase(uvm_phase phase);
       phase.raise_objection(this);
       `uvm_info("PHASES", "Main phase", UVM_MEDIUM)
       #50;
       phase.drop_objection(this);
   endtask
   ```
   - **Purpose**: Test execution phases
   - **Execution**: Bottom-up (child before parent)
   - **Key**: Use objections in `main_phase()` to control simulation

3. **Cleanup Phases (Functions, Bottom-Up):**
   ```systemverilog
   function void extract_phase(uvm_phase phase);
       super.extract_phase(phase);
       `uvm_info("PHASES", "Extracting results", UVM_MEDIUM)
   endfunction
   
   function void check_phase(uvm_phase phase);
       super.check_phase(phase);
       `uvm_info("PHASES", "Checking results", UVM_MEDIUM)
   endfunction
   
   function void report_phase(uvm_phase phase);
       super.report_phase(phase);
       `uvm_info("PHASES", "Generating report", UVM_MEDIUM)
   endfunction
   ```
   - **Purpose**: Result extraction and reporting
   - **Execution**: Bottom-up (child before parent)
   - **Key**: Use for final verification and reporting

**Component Name Methods:**
```systemverilog
string name = get_name();              // Get component name
string full_name = get_full_name();    // Get full hierarchical name
```
- **Purpose**: Get component identification
- **Usage**: Logging, debugging, hierarchical paths

**Key Concepts:**
- Build-time phases execute top-down (parent before child)
- Run-time phases execute bottom-up (child before parent)
- Cleanup phases execute bottom-up (child before parent)
- Phases enable structured testbench execution
- **Build-time phases are functions** (no delays allowed)
- **Run-time phases are tasks** (can have delays)
- **Cleanup phases are functions** (no delays allowed)
- **Must call `super.phase_name(phase)`** to maintain hierarchy
- **Use `get_name()` and `get_full_name()`** for component identification

**Execution:**
```bash
./scripts/module3.sh --phases
```

**Verified Output:**
- All build-time phases executed in order
- All run-time phases executed in order
- All cleanup phases executed in order
- Phase execution logging

### 4. UVM Reporting

- **UVM Messaging System**
  - Severity levels: FATAL, ERROR, WARNING, INFO, DEBUG
  - Verbosity levels: UVM_LOW, UVM_MEDIUM, UVM_HIGH, UVM_FULL, UVM_DEBUG
  - Message formatting
  - Hierarchical reporting

#### Example 3.3: Reporting (`module3/examples/reporting/reporting.sv`)

**What it demonstrates:**
- **Severity Levels**: INFO, WARNING, ERROR, FATAL
- **Verbosity Levels**: UVM_LOW, UVM_MEDIUM, UVM_HIGH, UVM_FULL, UVM_DEBUG
- **Message Formatting**: Formatted messages with data values
- **Hierarchical Reporting**: Component context in messages

**UVM Reporting Macros and Methods:**

1. **Reporting Macros:**
   ```systemverilog
   `uvm_info("TAG", "Message text", UVM_MEDIUM)
   `uvm_warning("TAG", "Warning message")
   `uvm_error("TAG", "Error message")
   `uvm_fatal("TAG", "Fatal message")
   ```
   - **Purpose**: Print formatted messages with severity
   - **Parameters**:
     - `TAG`: Message category/tag
     - `Message`: Text to display
     - `Verbosity`: For `uvm_info` only (UVM_LOW, UVM_MEDIUM, etc.)
   - **Usage**: Standard UVM messaging

2. **Formatted Messages:**
   ```systemverilog
   `uvm_info("REPORTING", $sformatf("Formatted: data=0x%02h, addr=0x%04h, count=%0d", 
              8'hAA, 16'h1234, 42), UVM_MEDIUM)
   ```
   - **Purpose**: Include data values in messages
   - **Uses**: `$sformatf()` for string formatting
   - **Key**: Combine UVM macros with SystemVerilog formatting

3. **Verbosity Control Method:**
   ```systemverilog
   set_report_verbosity_level(UVM_HIGH);
   set_report_verbosity_level_hier(UVM_DEBUG);  // For entire hierarchy
   ```
   - **Purpose**: Control message visibility
   - **Usage**: Set in `build_phase()` or test
   - **Levels**: UVM_LOW < UVM_MEDIUM < UVM_HIGH < UVM_FULL < UVM_DEBUG

4. **Component Name in Messages:**
   ```systemverilog
   `uvm_info("CHILD", $sformatf("Reporting from: %s", get_full_name()), UVM_MEDIUM)
   ```
   - **Purpose**: Include component hierarchy in messages
   - **Uses**: `get_full_name()` for hierarchical path

**Severity Levels:**
- **INFO**: Informational messages (non-critical)
- **WARNING**: Potential issues (non-fatal)
- **ERROR**: Actual errors (may stop simulation)
- **FATAL**: Fatal errors (stops simulation immediately)

**Verbosity Levels:**
- **UVM_LOW**: Always displayed (default)
- **UVM_MEDIUM**: Medium detail (default for most messages)
- **UVM_HIGH**: High detail
- **UVM_FULL**: Full detail
- **UVM_DEBUG**: Debug-level detail

**Key Concepts:**
- Severity indicates message importance
- Verbosity controls message visibility
- Messages include component hierarchy context
- Reporting enables debugging and monitoring
- **`uvm_info`** is most common (with verbosity control)
- **`uvm_warning`** for non-critical issues
- **`uvm_error`** for errors (may stop simulation)
- **`uvm_fatal`** for fatal errors (stops simulation)
- **Use `$sformatf()`** for formatted messages with data

**Execution:**
```bash
./scripts/module3.sh --reporting
```

**Verified Output:**
- Different severity levels demonstrated
- Verbosity control demonstrated
- Formatted messages with data
- Hierarchical message context

### 5. ConfigDB

- **Configuration Database Basics**
  - Setting configuration
  - Getting configuration
  - Configuration hierarchy
  - Configuration objects

#### Example 3.4: ConfigDB (`module3/examples/configdb/configdb.sv`)

**What it demonstrates:**
- **Setting Configuration**: Global and component-specific
- **Getting Configuration**: Hierarchical lookup
- **Configuration Objects**: Complex configuration data
- **Scalar Values**: Simple configuration values

**ConfigDB Methods:**

1. **Setting Configuration (Static Method):**
   ```systemverilog
   // Set global configuration (wildcard path)
   uvm_config_db#(AgentConfig)::set(this, "*", "agent_config", global_config);
   
   // Set component-specific configuration
   uvm_config_db#(AgentConfig)::set(this, "child_comp", "agent_config", child_config);
   
   // Set scalar values
   uvm_config_db#(int)::set(this, "*", "timeout", 2000);
   uvm_config_db#(string)::set(this, "*", "mode", "test_mode");
   ```
   - **Purpose**: Store configuration in database
   - **Syntax**: `uvm_config_db#(type)::set(contxt, path, field, value)`
   - **Parameters**:
     - `contxt`: Context (usually `this` in test)
     - `path`: Component path (`"*"` for global, `"comp_name"` for specific)
     - `field`: Configuration field name (string)
     - `value`: Value to store
   - **Usage**: Set in test's `build_phase()` before creating components

2. **Getting Configuration (Static Method):**
   ```systemverilog
   // Get configuration object
   if (!uvm_config_db#(AgentConfig)::get(this, "", "agent_config", config_obj)) begin
       `uvm_warning("CONFIGDB", "Config not found, using defaults")
       config_obj = AgentConfig::type_id::create("config_obj");
   end
   
   // Get scalar value
   if (!uvm_config_db#(int)::get(this, "", "timeout", timeout_value)) begin
       timeout_value = 1000;  // Default value
   end
   ```
   - **Purpose**: Retrieve configuration from database
   - **Syntax**: `uvm_config_db#(type)::get(contxt, path, field, var)`
   - **Returns**: `1` if found, `0` if not found
   - **Usage**: Get in component's `build_phase()`
   - **Key**: Always check return value, provide defaults if not found

3. **Configuration Object Methods:**
   ```systemverilog
   function string convert2string();
       return $sformatf("active=%0b, addr_width=%0d, data_width=%0d",
                      active, address_width, data_width);
   endfunction
   ```
   - **Purpose**: String representation of configuration
   - **Usage**: Debugging, logging

**Hierarchical Path Examples:**
```systemverilog
// Global (all components)
uvm_config_db#(int)::set(this, "*", "timeout", 1000);

// Specific component
uvm_config_db#(int)::set(this, "env.agent.driver", "timeout", 500);

// Component and children
uvm_config_db#(int)::set(this, "env.agent*", "timeout", 750);
```

**Key Concepts:**
- ConfigDB enables flexible test configuration
- Configuration can be set globally or per-component
- Components look up configuration in `build_phase()`
- Hierarchical paths enable component-specific config
- **Set before create**: Configuration must be set before components are created
- **Get in build_phase**: Components get configuration in their `build_phase()`
- **Check return value**: Always check if `get()` succeeded
- **Provide defaults**: Use default values if configuration not found
- **Type safety**: ConfigDB is type-safe (uses template parameter)

**Execution:**
```bash
./scripts/module3.sh --configdb
```

**Verified Output:**
- Configuration setting and getting
- Hierarchical configuration lookup
- Component-specific configuration
- Configuration object usage

### 6. Factory Pattern

- **Factory Pattern Basics**
  - Factory registration
  - Factory creation
  - Type override
  - Instance override

#### Example 3.5: Factory (`module3/examples/factory/factory.sv`)

**What it demonstrates:**
- **Factory Registration**: Automatic registration via `uvm_object_utils`
- **Factory Creation**: Using `type_id::create()`
- **Type Override**: Substituting base class with extended class
- **Instance Override**: Overriding specific instances

**Factory Methods and Macros:**

1. **Factory Registration Macros:**
   ```systemverilog
   `uvm_object_utils(BaseTransaction)      // For uvm_object classes
   `uvm_component_utils(BaseDriver)       // For uvm_component classes
   ```
   - **Purpose**: Automatically register class with factory
   - **Usage**: Must be inside class definition
   - **Key**: Enables factory-based creation and overrides

2. **Factory Creation Method:**
   ```systemverilog
   // Create component using factory
   driver = BaseDriver::type_id::create("driver", this);
   
   // Create object using factory
   txn = BaseTransaction::type_id::create("txn");
   ```
   - **Purpose**: Create objects/components via factory
   - **Syntax**: `ClassName::type_id::create(name, parent)`
   - **Key**: Factory applies overrides automatically

3. **Type Override Method:**
   ```systemverilog
   // Set type override (affects ALL instances)
   uvm_factory::get().set_type_override_by_type(
       BaseDriver::get_type(), 
       ExtendedDriver::get_type()
   );
   ```
   - **Purpose**: Replace all instances of base class with extended class
   - **Usage**: Set in test's `build_phase()` before creating components
   - **Effect**: All `BaseDriver::type_id::create()` calls create `ExtendedDriver`

4. **Instance Override Method:**
   ```systemverilog
   // Set instance override (affects specific instance)
   uvm_factory::get().set_inst_override_by_type(
       "env.agent.driver1", 
       BaseDriver::get_type(), 
       ExtendedDriver::get_type()
   );
   ```
   - **Purpose**: Replace specific instance with extended class
   - **Usage**: Set in test's `build_phase()` before creating components
   - **Effect**: Only specified instance is overridden

5. **Type ID Methods:**
   ```systemverilog
   uvm_object_wrapper base_type = BaseDriver::get_type();
   uvm_object_wrapper extended_type = ExtendedDriver::get_type();
   ```
   - **Purpose**: Get type wrapper for override operations
   - **Usage**: Used in override methods

**Factory Override Patterns:**
```systemverilog
// Pattern 1: Type override (all instances)
uvm_factory::get().set_type_override_by_type(
    BaseDriver::get_type(), 
    ExtendedDriver::get_type()
);

// Pattern 2: Instance override (specific instance)
uvm_factory::get().set_inst_override_by_type(
    "env.agent.driver", 
    BaseDriver::get_type(), 
    ExtendedDriver::get_type()
);

// Pattern 3: String-based override
uvm_factory::get().set_type_override_by_name(
    "BaseDriver", 
    "ExtendedDriver"
);
```

**Key Concepts:**
- Factory enables centralized object creation
- Type override affects all instances
- Instance override affects specific instances
- Overrides enable test customization
- **Factory macros** (`uvm_object_utils`, `uvm_component_utils`) register classes
- **Factory creation** (`type_id::create()`) applies overrides automatically
- **Set overrides before create**: Overrides must be set before creating components
- **Type override**: Affects all instances of the base class
- **Instance override**: Affects only the specified instance

**Execution:**
```bash
./scripts/module3.sh --factory
```

**Verified Output:**
- Factory creation demonstrated
- Type override demonstrated
- Instance override demonstrated
- Override effects verified

### 7. Objections

- **Objection Mechanism**
  - Raising objections
  - Dropping objections
  - Phase completion
  - Simulation control

#### Example 3.6: Objections (`module3/examples/objections/objections.sv`)

**What it demonstrates:**
- **Raising Objections**: Keep simulation running
- **Dropping Objections**: Allow phase completion
- **Multiple Objections**: Per-component objection tracking
- **Coordinated Completion**: Phase completes when all objections dropped

**Objection Methods:**

1. **Raising Objections:**
   ```systemverilog
   // Raise objection (keeps phase running)
   phase.raise_objection(this);
   
   // Raise named objection (for multiple objections)
   phase.raise_objection(this, "Task 1");
   ```
   - **Purpose**: Keep phase running until objection is dropped
   - **Usage**: Call at start of `run_phase()` or other run-time phases
   - **Parameters**:
     - `this`: Component raising objection
     - `description`: Optional description for named objections
   - **Key**: Must raise objection if doing work in run-time phase

2. **Dropping Objections:**
   ```systemverilog
   // Drop objection (allows phase completion)
   phase.drop_objection(this);
   
   // Drop named objection
   phase.drop_objection(this, "Task 1");
   ```
   - **Purpose**: Signal that work is complete
   - **Usage**: Call when work in phase is finished
   - **Key**: Must drop objection when work completes

3. **Objection Pattern:**
   ```systemverilog
   task run_phase(uvm_phase phase);
       // Raise objection at start
       phase.raise_objection(this);
       `uvm_info("COMP", "Starting work", UVM_MEDIUM)
       
       // Do work
       #100;
       
       // Drop objection when done
       phase.drop_objection(this);
       `uvm_info("COMP", "Work complete", UVM_MEDIUM)
   endtask
   ```
   - **Pattern**: Raise at start, drop when complete
   - **Key**: Ensures phase doesn't end prematurely

4. **Multiple Objections:**
   ```systemverilog
   task run_phase(uvm_phase phase);
       // First task
       phase.raise_objection(this, "Task 1");
       #50;
       phase.drop_objection(this, "Task 1");
       
       // Second task
       phase.raise_objection(this, "Task 2");
       #50;
       phase.drop_objection(this, "Task 2");
   endtask
   ```
   - **Purpose**: Track multiple independent tasks
   - **Usage**: Use named objections for different tasks
   - **Key**: Each named objection is tracked separately

**Key Concepts:**
- Raise objection to keep phase running
- Drop objection when work completes
- Phase completes when all objections dropped
- Multiple objections per component supported
- **Raise at start**: Call `raise_objection()` at beginning of work
- **Drop when done**: Call `drop_objection()` when work completes
- **Phase completion**: Phase ends when all objections are dropped
- **Named objections**: Use for tracking multiple tasks
- **Must match**: Each `raise_objection()` must have matching `drop_objection()`

**Execution:**
```bash
./scripts/module3.sh --objections
```

**Verified Output:**
- Objection raising and dropping
- Phase completion control
- Multiple objection handling
- Coordinated phase completion

**Note**: Verilator has limited support for some UVM features. See [SYSTEMVERILOG_VERILATOR_INTERACTION.md](SYSTEMVERILOG_VERILATOR_INTERACTION.md) for details and workarounds.

### 8. UVM Functions and Methods Reference

Understanding UVM functions and methods is essential for building effective UVM testbenches. This section provides a comprehensive reference for all UVM-specific functions and methods used in Module 3.

#### UVM Factory Macros and Methods

**1. Factory Registration Macros:**
```systemverilog
`uvm_object_utils(ClassName)        // For uvm_object classes
`uvm_component_utils(ClassName)    // For uvm_component classes
```
- **Purpose**: Register class with UVM factory
- **Location**: Inside class definition
- **Enables**: Factory creation and overrides

**2. Factory Creation:**
```systemverilog
// Component creation
component = ComponentClass::type_id::create("name", this);

// Object creation
object = ObjectClass::type_id::create("name");
```
- **Syntax**: `ClassName::type_id::create(name, parent)`
- **Returns**: Handle to created object/component
- **Key**: Factory applies overrides automatically

**3. Factory Override Methods:**
```systemverilog
// Type override (all instances)
uvm_factory::get().set_type_override_by_type(
    BaseClass::get_type(), 
    ExtendedClass::get_type()
);

// Instance override (specific instance)
uvm_factory::get().set_inst_override_by_type(
    "env.agent.driver", 
    BaseClass::get_type(), 
    ExtendedClass::get_type()
);

// String-based override
uvm_factory::get().set_type_override_by_name("BaseDriver", "ExtendedDriver");
```

#### UVM Phase Functions and Tasks

**Phase Execution Order:**

| Phase Type | Execution Order | Function/Task | Can Use Delays? |
|------------|------------------|---------------|-----------------|
| **Build-Time** | Top-down | Function | ❌ No |
| **Run-Time** | Bottom-up | Task | ✅ Yes |
| **Cleanup** | Bottom-up | Function | ❌ No |

**Build-Time Phases (Functions):**
```systemverilog
function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    // Create child components
    // Get configuration from ConfigDB
endfunction

function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    // Connect component ports
endfunction

function void end_of_elaboration_phase(uvm_phase phase);
    super.end_of_elaboration_phase(phase);
    // Final setup before simulation
endfunction

function void start_of_simulation_phase(uvm_phase phase);
    super.start_of_simulation_phase(phase);
    // Simulation start activities
endfunction
```

**Run-Time Phases (Tasks):**
```systemverilog
task pre_reset_phase(uvm_phase phase);
    // Pre-reset activities
    #10;
endtask

task reset_phase(uvm_phase phase);
    // Reset sequence
    #20;
endtask

task main_phase(uvm_phase phase);
    phase.raise_objection(this);
    // Main test execution
    #100;
    phase.drop_objection(this);
endtask
```

**Cleanup Phases (Functions):**
```systemverilog
function void extract_phase(uvm_phase phase);
    super.extract_phase(phase);
    // Extract results
endfunction

function void check_phase(uvm_phase phase);
    super.check_phase(phase);
    // Final checks
endfunction

function void report_phase(uvm_phase phase);
    super.report_phase(phase);
    // Generate reports
endfunction
```

#### UVM Reporting Macros

**Reporting Macro Reference:**

| Macro | Syntax | Severity | Verbosity | Stops Simulation? |
|-------|--------|----------|-----------|-------------------|
| `uvm_info` | `` `uvm_info("TAG", "msg", verbosity) `` | INFO | Yes | ❌ No |
| `uvm_warning` | `` `uvm_warning("TAG", "msg") `` | WARNING | No | ❌ No |
| `uvm_error` | `` `uvm_error("TAG", "msg") `` | ERROR | No | ⚠️ May stop |
| `uvm_fatal` | `` `uvm_fatal("TAG", "msg") `` | FATAL | No | ✅ Yes |

**Verbosity Levels (for `uvm_info`):**
- `UVM_LOW` - Always displayed (default)
- `UVM_MEDIUM` - Medium detail (most common)
- `UVM_HIGH` - High detail
- `UVM_FULL` - Full detail
- `UVM_DEBUG` - Debug-level detail

**Verbosity Control Methods:**
```systemverilog
set_report_verbosity_level(UVM_HIGH);              // For this component
set_report_verbosity_level_hier(UVM_DEBUG);         // For entire hierarchy
set_report_id_verbosity("TAG", UVM_HIGH);          // For specific tag
```

#### ConfigDB Methods

**Setting Configuration:**
```systemverilog
// Global configuration (all components)
uvm_config_db#(Type)::set(this, "*", "field_name", value);

// Component-specific configuration
uvm_config_db#(Type)::set(this, "env.agent", "field_name", value);

// Scalar values
uvm_config_db#(int)::set(this, "*", "timeout", 1000);
uvm_config_db#(string)::set(this, "*", "mode", "test");

// Configuration objects
uvm_config_db#(ConfigClass)::set(this, "*", "config", config_obj);
```

**Getting Configuration:**
```systemverilog
// Get configuration (check return value)
if (!uvm_config_db#(Type)::get(this, "", "field_name", variable)) begin
    // Configuration not found, use default
    variable = default_value;
end

// Get with default pattern
if (!uvm_config_db#(int)::get(this, "", "timeout", timeout)) begin
    timeout = 1000;  // Default value
end
```

**ConfigDB Best Practices:**
- Set configuration in test's `build_phase()` before creating components
- Get configuration in component's `build_phase()`
- Always check return value of `get()`
- Provide default values if configuration not found
- Use hierarchical paths for component-specific configuration

#### Objection Methods

**Raising and Dropping Objections:**
```systemverilog
// Basic objection
phase.raise_objection(this);
// ... do work ...
phase.drop_objection(this);

// Named objection (for multiple tasks)
phase.raise_objection(this, "Task 1");
// ... do task 1 ...
phase.drop_objection(this, "Task 1");

phase.raise_objection(this, "Task 2");
// ... do task 2 ...
phase.drop_objection(this, "Task 2");
```

**Objection Pattern:**
```systemverilog
task run_phase(uvm_phase phase);
    phase.raise_objection(this);  // Raise at start
    
    // Do work
    #100;
    
    phase.drop_objection(this);   // Drop when done
endtask
```

**Key Rules:**
- Must raise objection if doing work in run-time phase
- Must drop objection when work completes
- Phase completes when all objections are dropped
- Each `raise_objection()` must have matching `drop_objection()`

#### Component Utility Methods

**Name Methods:**
```systemverilog
string name = get_name();           // Get component name
string full_name = get_full_name(); // Get full hierarchical path
```
- **Purpose**: Component identification
- **Usage**: Logging, debugging, hierarchical paths

**Hierarchy Methods:**
```systemverilog
uvm_component parent = get_parent();        // Get parent component
uvm_component child = get_child("name");    // Get child component
print_topology();                            // Print component hierarchy
```

#### Sequence Methods

**Sequence Execution:**
```systemverilog
// In sequence body()
task body();
    start_item(txn);      // Request transaction from sequencer
    // ... set transaction fields ...
    finish_item(txn);     // Send transaction to driver
endtask

// Start sequence on sequencer
seq.start(sequencer);     // Start sequence execution
```
- **Purpose**: Generate and send transactions to driver
- **Usage**: Sequences generate test vectors
- **Flow**: Sequence → Sequencer → Driver → DUT

**Sequence Item Methods:**
```systemverilog
function void post_randomize();
    // Called after randomization
    // Calculate derived fields, validate constraints
endfunction
```
- **Purpose**: Post-processing after randomization
- **Usage**: Calculate expected results, validate data

#### TLM Port Methods (Driver)

**Driver-Sequencer Communication:**
```systemverilog
// In driver run_phase
task run_phase(uvm_phase phase);
    forever begin
        seq_item_port.get_next_item(txn);  // Get transaction from sequencer
        // Drive transaction to DUT
        seq_item_port.item_done();         // Signal transaction complete
    end
endtask
```
- **Purpose**: Driver-sequencer communication
- **Methods**:
  - `get_next_item(txn)`: Get next transaction (blocking)
  - `item_done()`: Signal transaction processing complete
- **Flow**: Sequencer provides → Driver receives → DUT

#### Analysis Port Methods (Monitor/Scoreboard)

**Monitor Analysis Port:**
```systemverilog
// In monitor run_phase
ap.write(txn);  // Broadcast transaction to subscribers
```
- **Purpose**: Broadcast transactions to subscribers
- **Usage**: Monitor sends transactions to scoreboard, coverage, etc.

**Scoreboard Analysis Export:**
```systemverilog
// Scoreboard implements write() method
function void write(AdderTransaction txn);
    // Process transaction from monitor
    // Compare with expected results
endfunction
```
- **Purpose**: Receive transactions from monitor
- **Usage**: Scoreboard checks DUT behavior

**Analysis Port Connection:**
```systemverilog
// In connect_phase
monitor.ap.connect(scoreboard.imp);  // Connect monitor to scoreboard
```
- **Purpose**: Connect analysis port to analysis export
- **Usage**: Establish monitor → scoreboard communication

#### Virtual Interface Methods

**Getting Virtual Interface from ConfigDB:**
```systemverilog
// In build_phase
if (!uvm_config_db#(virtual adder_if)::get(this, "", "vif", vif)) begin
    `uvm_fatal("NO_VIF", "Virtual interface not found")
end
```
- **Purpose**: Get virtual interface handle
- **Usage**: Driver/monitor access DUT signals via virtual interface
- **Setting**: `uvm_config_db#(virtual interface_type)::set(null, "*", "vif", vif_inst)`

#### Top-Level UVM Functions

**run_test() Function:**
```systemverilog
// In top-level module
initial begin
    run_test("TestClassName");  // Start UVM test
end
```
- **Purpose**: Start UVM test execution
- **Parameters**: Test class name (string)
- **Behavior**: Creates test instance, executes all phases
- **Override**: `+UVM_TESTNAME=TestName` command line option

#### Common UVM Patterns

**1. Component Creation Pattern:**
```systemverilog
function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    child = ChildClass::type_id::create("child", this);
endfunction
```

**2. Configuration Pattern:**
```systemverilog
// In test's build_phase
function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    uvm_config_db#(int)::set(this, "*", "timeout", 1000);
    comp = ComponentClass::type_id::create("comp", this);
endfunction

// In component's build_phase
function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(int)::get(this, "", "timeout", timeout)) begin
        timeout = 500;  // Default
    end
endfunction
```

**3. Objection Pattern:**
```systemverilog
task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    // Work here
    phase.drop_objection(this);
endtask
```

**4. Reporting Pattern:**
```systemverilog
`uvm_info("TAG", $sformatf("Message with data: %0d", value), UVM_MEDIUM)
```

#### Common Pitfalls and Solutions

**1. Forgetting `super.build_phase(phase)`**
```systemverilog
// ❌ WRONG: Missing super call
function void build_phase(uvm_phase phase);
    child = ChildClass::type_id::create("child", this);
endfunction

// ✅ CORRECT: Include super call
function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    child = ChildClass::type_id::create("child", this);
endfunction
```

**2. Setting ConfigDB After Component Creation**
```systemverilog
// ❌ WRONG: Config set after creation
comp = ComponentClass::type_id::create("comp", this);
uvm_config_db#(int)::set(this, "*", "timeout", 1000);

// ✅ CORRECT: Config set before creation
uvm_config_db#(int)::set(this, "*", "timeout", 1000);
comp = ComponentClass::type_id::create("comp", this);
```

**3. Not Checking ConfigDB Return Value**
```systemverilog
// ❌ WRONG: No check for config
uvm_config_db#(int)::get(this, "", "timeout", timeout);

// ✅ CORRECT: Check return value
if (!uvm_config_db#(int)::get(this, "", "timeout", timeout)) begin
    timeout = 1000;  // Default
end
```

**4. Missing Objections in Run Phase**
```systemverilog
// ❌ WRONG: No objection, phase may end immediately
task run_phase(uvm_phase phase);
    #100;  // Work may not complete
endtask

// ✅ CORRECT: Raise and drop objections
task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    #100;
    phase.drop_objection(this);
endtask
```

**5. Factory Override After Creation**
```systemverilog
// ❌ WRONG: Override after creation
comp = BaseDriver::type_id::create("driver", this);
uvm_factory::get().set_type_override_by_type(...);

// ✅ CORRECT: Override before creation
uvm_factory::get().set_type_override_by_type(...);
comp = BaseDriver::type_id::create("driver", this);
```

## Learning Outcomes

By the end of this module, you should be able to:

- Understand UVM class hierarchy (uvm_object vs uvm_component)
- Master UVM phases (build-time, run-time, cleanup)
- Use UVM reporting effectively (severity, verbosity, formatting)
- Configure components using ConfigDB
- Understand factory pattern (registration, creation, overrides)
- Control simulation with objections
- Structure UVM testbenches properly

## Exercises

1. **Class Hierarchy**
   - Create transaction classes extending uvm_sequence_item
   - Create component classes extending uvm_component
   - Build component hierarchy
   - Test component creation

2. **Phases**
   - Implement all build-time phases
   - Implement run-time phases
   - Implement cleanup phases
   - Verify phase execution order

3. **Reporting**
   - Use different severity levels
   - Control verbosity
   - Format messages with data
   - Test hierarchical reporting

4. **ConfigDB**
   - Set global configuration
   - Set component-specific configuration
   - Get configuration in components
   - Use configuration objects

5. **Factory**
   - Register classes with factory
   - Create objects using factory
   - Implement type overrides
   - Implement instance overrides

6. **Objections**
   - Raise objections in run_phase
   - Drop objections when work completes
   - Test multiple objections
   - Verify phase completion

## Execution Status

✅ **Module 3 has been successfully executed and verified.**

**Verification Date:** 2026-01-24  
**Status:** All examples and tests passing  
**Verilator Version:** 5.045  
**UVM Library:** UVM 2017 (1800.2-2017-1.0)  
**Test Results:**
- ✅ 6 SystemVerilog UVM examples executed successfully
- ✅ 1 UVM test compiled and passed
- ⏱️ Total execution time: ~30 minutes (UVM compilation takes significant time due to template instantiations)

**Examples Executed:**
1. ✅ Class Hierarchy - UVM class hierarchy and component structure demonstrated
2. ✅ Phases - All UVM phases demonstrated (42 phase messages)
3. ✅ Reporting - UVM reporting system demonstrated (7 reporting messages)
4. ✅ ConfigDB - Configuration database demonstrated (10 config messages)
5. ✅ Factory - Factory pattern demonstrated (5 factory messages)
6. ✅ Objections - Objection mechanism demonstrated

**Note:** UVM compilation with Verilator takes approximately 20-30 minutes due to extensive template instantiations, but all tests execute successfully.

**Execution Logs:** Full execution logs are available in `module3/module3.log` and individual example logs in each example directory (`compile.log`, `run.log`).

## Assessment

- [x] Understands UVM class hierarchy
- [x] Masters UVM phases
- [x] Uses UVM reporting effectively
- [x] Configures components using ConfigDB
- [x] Understands factory pattern
- [x] Controls simulation with objections
- [x] Structures UVM testbenches properly

## Next Steps

After completing this module, proceed to [Module 4: UVM Components](MODULE4.md) to build complete UVM testbenches with detailed agent, driver, monitor, and sequencer implementation.

## Quick Reference: UVM Functions and Methods Cheat Sheet

### Factory Macros and Methods

| Macro/Method | Syntax | Purpose |
|--------------|--------|---------|
| **Registration** | `` `uvm_object_utils(Class) `` | Register uvm_object class |
| **Registration** | `` `uvm_component_utils(Class) `` | Register uvm_component class |
| **Creation** | `Class::type_id::create("name", this)` | Create via factory |
| **Type Override** | `uvm_factory::get().set_type_override_by_type(...)` | Override all instances |
| **Instance Override** | `uvm_factory::get().set_inst_override_by_type(...)` | Override specific instance |

### Phase Functions and Tasks

| Phase | Type | Execution | Key Points |
|-------|------|-----------|------------|
| `build_phase()` | Function | Top-down | Create components, get config |
| `connect_phase()` | Function | Top-down | Connect ports |
| `end_of_elaboration_phase()` | Function | Top-down | Final setup |
| `start_of_simulation_phase()` | Function | Top-down | Simulation start |
| `run_phase()` | Task | Bottom-up | Main execution (use objections) |
| `extract_phase()` | Function | Bottom-up | Extract results |
| `check_phase()` | Function | Bottom-up | Final checks |
| `report_phase()` | Function | Bottom-up | Generate reports |

### Reporting Macros

| Macro | Syntax | Severity | Verbosity |
|-------|--------|----------|-----------|
| `uvm_info` | `` `uvm_info("TAG", "msg", verbosity) `` | INFO | Yes |
| `uvm_warning` | `` `uvm_warning("TAG", "msg") `` | WARNING | No |
| `uvm_error` | `` `uvm_error("TAG", "msg") `` | ERROR | No |
| `uvm_fatal` | `` `uvm_fatal("TAG", "msg") `` | FATAL | No |

### ConfigDB Methods

```systemverilog
// Set configuration
uvm_config_db#(Type)::set(this, "*", "field", value);
uvm_config_db#(Type)::set(this, "path", "field", value);

// Get configuration
if (!uvm_config_db#(Type)::get(this, "", "field", var)) begin
    var = default_value;
end
```

### Objection Methods

```systemverilog
// Raise objection
phase.raise_objection(this);
phase.raise_objection(this, "TaskName");

// Drop objection
phase.drop_objection(this);
phase.drop_objection(this, "TaskName");
```

### Component Utility Methods

| Method | Returns | Purpose |
|--------|---------|---------|
| `get_name()` | string | Component name |
| `get_full_name()` | string | Full hierarchical path |
| `get_parent()` | uvm_component | Parent component |
| `get_child("name")` | uvm_component | Child component |
| `print_topology()` | void | Print component hierarchy |

### Common Patterns

**1. Component Creation:**
```systemverilog
function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    child = ChildClass::type_id::create("child", this);
endfunction
```

**2. Configuration:**
```systemverilog
// Set in test
uvm_config_db#(int)::set(this, "*", "timeout", 1000);

// Get in component
if (!uvm_config_db#(int)::get(this, "", "timeout", timeout)) begin
    timeout = 500;
end
```

**3. Objections:**
```systemverilog
task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    // Work
    phase.drop_objection(this);
endtask
```

**4. Reporting:**
```systemverilog
`uvm_info("TAG", $sformatf("Value: %0d", value), UVM_MEDIUM)
```

### Best Practices Checklist

- [ ] ✅ Always call `super.build_phase(phase)` etc.
- [ ] ✅ Set ConfigDB before creating components
- [ ] ✅ Check ConfigDB return value, provide defaults
- [ ] ✅ Raise objections in run-time phases if doing work
- [ ] ✅ Drop objections when work completes
- [ ] ✅ Use factory creation (`type_id::create()`)
- [ ] ✅ Set factory overrides before creating components
- [ ] ✅ Use appropriate verbosity levels
- [ ] ✅ Include component context in messages
- [ ] ✅ Use `get_full_name()` for hierarchical paths

### Code Location Reference

| Concept | Example File | Key Methods |
|---------|--------------|-------------|
| Class Hierarchy | `examples/class_hierarchy/class_hierarchy.sv` | `type_id::create()`, phase functions |
| Phases | `examples/phases/phases.sv` | All phase functions/tasks |
| Reporting | `examples/reporting/reporting.sv` | `uvm_info`, `uvm_warning`, verbosity |
| ConfigDB | `examples/configdb/configdb.sv` | `uvm_config_db::set()`, `uvm_config_db::get()` |
| Factory | `examples/factory/factory.sv` | `set_type_override_by_type()`, `type_id::create()` |
| Objections | `examples/objections/objections.sv` | `raise_objection()`, `drop_objection()` |
| Complete Testbench | `tests/uvm_tests/test_adder_uvm.sv` | Sequences, TLM ports, analysis ports, virtual interfaces |

### Additional UVM Methods Reference

**Sequence Methods:**
- `start_item(txn)` - Request transaction from sequencer
- `finish_item(txn)` - Send transaction to driver
- `seq.start(sequencer)` - Start sequence execution
- `body()` - Sequence body task (generates transactions)
- `post_randomize()` - Post-randomization processing

**TLM Port Methods:**
- `seq_item_port.get_next_item(txn)` - Get transaction (driver)
- `seq_item_port.item_done()` - Signal transaction complete (driver)
- `seq_item_port.connect(sequencer.seq_item_export)` - Connect driver to sequencer

**Analysis Port Methods:**
- `ap.write(txn)` - Broadcast transaction (monitor)
- `write(txn)` - Receive transaction (scoreboard)
- `ap.connect(imp)` - Connect analysis port to export

**Virtual Interface:**
- `uvm_config_db#(virtual if_type)::get(this, "", "vif", vif)` - Get virtual interface
- `uvm_config_db#(virtual if_type)::set(null, "*", "vif", vif_inst)` - Set virtual interface

**Top-Level Functions:**
- `run_test("TestName")` - Start UVM test execution

### Complete Testbench Flow Example

The following example shows how all UVM methods work together in a complete testbench (from `tests/uvm_tests/test_adder_uvm.sv`):

**1. Top-Level Module - Start Test:**
```systemverilog
module test_adder_uvm;
    initial begin
        // Set virtual interface in ConfigDB
        uvm_config_db#(virtual adder_if)::set(null, "*", "vif", adder_if_inst);
        
        // Start UVM test
        run_test("AdderTest");
    end
endmodule
```

**2. Test Class - Create Environment:**
```systemverilog
class AdderTest extends uvm_test;
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = AdderEnv::type_id::create("env", this);
        seq = AdderSequence::type_id::create("seq");
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        seq.start(env.agent.sequencer);  // Start sequence
        #1000;
        phase.drop_objection(this);
    endtask
endclass
```

**3. Sequence - Generate Transactions:**
```systemverilog
class AdderSequence extends uvm_sequence #(AdderTransaction);
    task body();
        txn = AdderTransaction::type_id::create("txn");
        txn.a = test_a[i];
        txn.b = test_b[i];
        txn.post_randomize();  // Calculate expected results
        
        start_item(txn);      // Request from sequencer
        finish_item(txn);      // Send to driver
    endtask
endclass
```

**4. Driver - Drive to DUT:**
```systemverilog
class AdderDriver extends uvm_driver #(AdderTransaction);
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        // Get virtual interface from ConfigDB
        if (!uvm_config_db#(virtual adder_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NO_VIF", "Virtual interface not found")
        end
    endfunction
    
    task run_phase(uvm_phase phase);
        forever begin
            seq_item_port.get_next_item(txn);  // Get from sequencer
            vif.a <= txn.a;                     // Drive DUT
            vif.b <= txn.b;
            @(posedge vif.clk);
            seq_item_port.item_done();         // Signal complete
        end
    endtask
endclass
```

**5. Monitor - Observe DUT:**
```systemverilog
class AdderMonitor extends uvm_monitor;
    task run_phase(uvm_phase phase);
        forever begin
            @(posedge vif.clk);
            txn = AdderTransaction::type_id::create("txn");
            txn.a = vif.a;
            txn.b = vif.b;
            txn.expected_sum = vif.sum;
            ap.write(txn);  // Broadcast to scoreboard
        end
    endtask
endclass
```

**6. Scoreboard - Check Results:**
```systemverilog
class AdderScoreboard extends uvm_scoreboard;
    function void write(AdderTransaction txn);
        // Receive from monitor, compare with expected
        if (txn.expected_sum == calculated_sum) begin
            match_count++;
            `uvm_info("SCOREBOARD", "PASS", UVM_MEDIUM)
        end else begin
            mismatch_count++;
            `uvm_error("SCOREBOARD", "FAIL")
        end
    endfunction
endclass
```

**7. Agent - Connect Components:**
```systemverilog
class AdderAgent extends uvm_agent;
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        // Connect driver to sequencer
        driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction
endclass
```

**8. Environment - Connect Monitor to Scoreboard:**
```systemverilog
class AdderEnv extends uvm_env;
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        // Connect monitor to scoreboard
        agent.monitor.ap.connect(scoreboard.imp);
    endfunction
endclass
```

**Complete Flow:**
1. **Top-level**: `run_test()` starts test
2. **Test**: Creates environment, starts sequence
3. **Sequence**: Generates transactions via `start_item()`/`finish_item()`
4. **Sequencer**: Provides transactions to driver
5. **Driver**: Gets via `get_next_item()`, drives DUT, signals `item_done()`
6. **Monitor**: Observes DUT, broadcasts via `ap.write()`
7. **Scoreboard**: Receives via `write()`, checks results
8. **All components**: Use objections to coordinate completion

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **UVM User's Guide**: Accellera Systems Initiative
- **Verilator Documentation**: https://verilator.org/
- **Verification Academy**: https://verificationacademy.com/
