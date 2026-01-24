# Module 3: UVM Basics

This directory contains all examples, exercises, and test cases for Module 3, focusing on UVM (Universal Verification Methodology) fundamentals including class hierarchy, phases, reporting, configuration database, factory pattern, and objection mechanism.

## Directory Structure

```
module3/
├── examples/              # SystemVerilog UVM examples
│   ├── class_hierarchy/   # UVM class hierarchy examples
│   │   ├── class_hierarchy.sv
│   │   └── class_hierarchy.cpp
│   ├── phases/           # UVM phases examples
│   │   ├── phases.sv
│   │   └── phases.cpp
│   ├── reporting/        # UVM reporting examples
│   │   ├── reporting.sv
│   │   └── reporting.cpp
│   ├── configdb/         # ConfigDB examples
│   │   ├── configdb.sv
│   │   └── configdb.cpp
│   ├── factory/          # Factory pattern examples
│   │   ├── factory.sv
│   │   └── factory.cpp
│   └── objections/       # Objection mechanism examples
│       ├── objections.sv
│       └── objections.cpp
├── dut/                   # Verilog/SystemVerilog Design Under Test modules
│   └── simple_blocks/     # Simple blocks for UVM testing
│       └── adder.v        # 8-bit adder
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
│       ├── test_adder_uvm.sv
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

## UVM Examples

### 1. Class Hierarchy (`examples/class_hierarchy/class_hierarchy.sv`)

Demonstrates UVM class hierarchy and component structure:

- **Transaction Class**: Extends `uvm_sequence_item` (uvm_object hierarchy)
- **Driver Class**: Extends `uvm_driver` (uvm_component hierarchy)
- **Monitor Class**: Extends `uvm_monitor` (uvm_component hierarchy)
- **Agent Class**: Extends `uvm_agent`, demonstrates component composition
- **Environment Class**: Extends `uvm_env`, top-level verification environment
- **Test Class**: Extends `uvm_test`, orchestrates test execution

**UVM Methods and Functions:**

1. **Factory Registration:**
   ```systemverilog
   `uvm_object_utils(MyTransaction)      // For uvm_object
   `uvm_component_utils(MyDriver)        // For uvm_component
   ```

2. **Factory Creation:**
   ```systemverilog
   driver = MyDriver::type_id::create("driver", this);
   txn = MyTransaction::type_id::create("txn");
   ```

3. **Phase Functions:**
   ```systemverilog
   function void build_phase(uvm_phase phase);
       super.build_phase(phase);
       `uvm_info("DRIVER", "Building", UVM_MEDIUM)
   endfunction
   ```

**Key Concepts:**
- `uvm_object` - Base class for all UVM objects (transactions, sequences)
- `uvm_component` - Base class for all UVM components (drivers, monitors, agents)
- Component hierarchy: Test → Environment → Agent → Driver/Monitor
- Component creation using factory pattern
- **Factory macros** enable registration and overrides
- **Phase functions/tasks** implement component behavior
- **Factory creation** enables centralized object creation

**Running the example:**

```bash
# Using orchestrator script
./scripts/module3.sh --class-hierarchy

# Or compile directly
cd module3/examples/class_hierarchy
verilator -sv --cc --exe --timing --trace -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI $UVM_HOME/src/uvm_pkg.sv class_hierarchy.sv class_hierarchy.cpp --binary --top-module class_hierarchy
make -C obj_dir -f Vclass_hierarchy.mk
./obj_dir/Vclass_hierarchy
```

### 2. Phases (`examples/phases/phases.sv`)

Demonstrates UVM phase execution and implementation:

**Build-Time Phases (Top-down):**
- `build_phase()` - Component construction
- `connect_phase()` - Component connections
- `end_of_elaboration_phase()` - Final setup
- `start_of_simulation_phase()` - Simulation start

**Run-Time Phases (Bottom-up):**
- `pre_reset_phase()`, `reset_phase()`, `post_reset_phase()`
- `pre_configure_phase()`, `configure_phase()`, `post_configure_phase()`
- `pre_main_phase()`, `main_phase()`, `post_main_phase()`
- `pre_shutdown_phase()`, `shutdown_phase()`, `post_shutdown_phase()`

**Cleanup Phases (Bottom-up):**
- `extract_phase()` - Extract results
- `check_phase()` - Final checks
- `report_phase()` - Generate reports
- `final_phase()` - Final cleanup

**Phase Implementation Patterns:**

1. **Build-Time Phase (Function):**
   ```systemverilog
   function void build_phase(uvm_phase phase);
       super.build_phase(phase);
       `uvm_info("PHASES", "Building component", UVM_MEDIUM)
   endfunction
   ```

2. **Run-Time Phase (Task):**
   ```systemverilog
   task main_phase(uvm_phase phase);
       phase.raise_objection(this);
       `uvm_info("PHASES", "Main phase", UVM_MEDIUM)
       #50;
       phase.drop_objection(this);
   endtask
   ```

3. **Component Name Methods:**
   ```systemverilog
   string name = get_name();
   string full_name = get_full_name();
   ```

**Key Concepts:**
- Build-time phases execute top-down (parent before child)
- Run-time phases execute bottom-up (child before parent)
- Cleanup phases execute bottom-up (child before parent)
- Phases enable structured testbench execution
- **Build-time phases are functions** (no delays)
- **Run-time phases are tasks** (can have delays)
- **Must call `super.phase_name(phase)`** to maintain hierarchy

**Running the example:**

```bash
./scripts/module3.sh --phases
```

### 3. Reporting (`examples/reporting/reporting.sv`)

Demonstrates UVM reporting system:

- **Severity Levels**: INFO, WARNING, ERROR, FATAL
- **Verbosity Levels**: UVM_LOW, UVM_MEDIUM, UVM_HIGH, UVM_FULL, UVM_DEBUG
- **Message Formatting**: Formatted messages with data values
- **Hierarchical Reporting**: Component context in messages

**UVM Reporting Macros:**

1. **Reporting Macros:**
   ```systemverilog
   `uvm_info("TAG", "Message", UVM_MEDIUM)
   `uvm_warning("TAG", "Warning")
   `uvm_error("TAG", "Error")
   `uvm_fatal("TAG", "Fatal")
   ```

2. **Formatted Messages:**
   ```systemverilog
   `uvm_info("REPORTING", $sformatf("data=0x%02h, addr=0x%04h", data, addr), UVM_MEDIUM)
   ```

3. **Verbosity Control:**
   ```systemverilog
   set_report_verbosity_level(UVM_HIGH);
   ```

**Key Concepts:**
- Severity indicates message importance
- Verbosity controls message visibility
- Messages include component hierarchy context
- Reporting enables debugging and monitoring
- **`uvm_info`** is most common (with verbosity)
- **Use `$sformatf()`** for formatted messages
- **Verbosity levels**: UVM_LOW < UVM_MEDIUM < UVM_HIGH < UVM_FULL < UVM_DEBUG

**Running the example:**

```bash
./scripts/module3.sh --reporting
```

### 4. ConfigDB (`examples/configdb/configdb.sv`)

Demonstrates UVM configuration database:

- **Setting Configuration**: Global and component-specific
- **Getting Configuration**: Hierarchical lookup
- **Configuration Objects**: Complex configuration data
- **Scalar Values**: Simple configuration values

**ConfigDB Methods:**

1. **Setting Configuration:**
   ```systemverilog
   // Global (all components)
   uvm_config_db#(AgentConfig)::set(this, "*", "agent_config", config_obj);
   
   // Component-specific
   uvm_config_db#(AgentConfig)::set(this, "child_comp", "agent_config", config_obj);
   
   // Scalar values
   uvm_config_db#(int)::set(this, "*", "timeout", 2000);
   ```

2. **Getting Configuration:**
   ```systemverilog
   if (!uvm_config_db#(AgentConfig)::get(this, "", "agent_config", config_obj)) begin
       config_obj = AgentConfig::type_id::create("config_obj");
   end
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

**Running the example:**

```bash
./scripts/module3.sh --configdb
```

### 5. Factory (`examples/factory/factory.sv`)

Demonstrates UVM factory pattern:

- **Factory Registration**: Automatic registration via `uvm_object_utils`
- **Factory Creation**: Using `type_id::create()`
- **Type Override**: Substituting base class with extended class
- **Instance Override**: Overriding specific instances

**Factory Methods:**

1. **Factory Registration:**
   ```systemverilog
   `uvm_object_utils(BaseTransaction)
   `uvm_component_utils(BaseDriver)
   ```

2. **Factory Creation:**
   ```systemverilog
   driver = BaseDriver::type_id::create("driver", this);
   ```

3. **Type Override:**
   ```systemverilog
   uvm_factory::get().set_type_override_by_type(
       BaseDriver::get_type(), 
       ExtendedDriver::get_type()
   );
   ```

**Key Concepts:**
- Factory enables centralized object creation
- Type override affects all instances
- Instance override affects specific instances
- Overrides enable test customization
- **Factory macros** register classes automatically
- **Factory creation** applies overrides automatically
- **Set overrides before create**: Overrides must be set before creating components

**Running the example:**

```bash
./scripts/module3.sh --factory
```

### 6. Objections (`examples/objections/objections.sv`)

Demonstrates UVM objection mechanism:

- **Raising Objections**: Keep simulation running
- **Dropping Objections**: Allow phase completion
- **Multiple Objections**: Per-component objection tracking
- **Coordinated Completion**: Phase completes when all objections dropped

**Objection Methods:**

1. **Raising Objections:**
   ```systemverilog
   phase.raise_objection(this);
   phase.raise_objection(this, "TaskName");  // Named objection
   ```

2. **Dropping Objections:**
   ```systemverilog
   phase.drop_objection(this);
   phase.drop_objection(this, "TaskName");  // Named objection
   ```

3. **Objection Pattern:**
   ```systemverilog
   task run_phase(uvm_phase phase);
       phase.raise_objection(this);
       // Work here
       phase.drop_objection(this);
   endtask
   ```

**Key Concepts:**
- Raise objection to keep phase running
- Drop objection when work completes
- Phase completes when all objections dropped
- Multiple objections per component supported
- **Raise at start**: Call `raise_objection()` at beginning of work
- **Drop when done**: Call `drop_objection()` when work completes
- **Must match**: Each `raise_objection()` must have matching `drop_objection()`

**Running the example:**

```bash
./scripts/module3.sh --objections
```

## Design Under Test (DUT)

### Adder (`dut/simple_blocks/adder.v`)

An 8-bit adder with carry output for UVM testing.

**Module Interface:**
```systemverilog
module adder (
    input  wire       clk,     // Clock signal
    input  wire       rst_n,   // Active-low reset
    input  wire [7:0] a,       // Operand A
    input  wire [7:0] b,       // Operand B
    output reg  [7:0] sum,     // Sum output (8-bit)
    output reg        carry    // Carry output
);
```

**Functionality:**
- Resets to all zeros when `rst_n` is low
- Computes `{carry, sum} = a + b` on positive clock edge
- Handles 8-bit addition with overflow detection
- Carry bit indicates overflow (sum > 255)

**Characteristics:**
- Synchronous operation with async reset
- 8-bit unsigned arithmetic
- Overflow detection via carry flag
- Simple design for UVM testbench demonstration

## Testbenches

### UVM Tests (`tests/uvm_tests/`)

#### Adder UVM Test (`test_adder_uvm.sv`)

Complete UVM testbench demonstrating all core concepts:

**UVM Components:**

1. **Transaction (`AdderTransaction`)**
   - Extends `uvm_sequence_item`
   - Contains operands (a, b) and expected results
   - **Methods**: `convert2string()`, `post_randomize()`

2. **Sequence (`AdderSequence`)**
   - Extends `uvm_sequence`
   - Generates test vectors for the adder
   - **Methods**: `body()`, `start_item()`, `finish_item()`
   - **Usage**: `seq.start(sequencer)` to start sequence

3. **Driver (`AdderDriver`)**
   - Extends `uvm_driver`
   - Drives transactions to DUT
   - **Methods**: `seq_item_port.get_next_item()`, `seq_item_port.item_done()`
   - **Virtual Interface**: Gets via ConfigDB, drives DUT signals

4. **Monitor (`AdderMonitor`)**
   - Extends `uvm_monitor`
   - Observes DUT outputs
   - **Methods**: `ap.write(txn)` - broadcasts transactions
   - **Virtual Interface**: Gets via ConfigDB, samples DUT signals

5. **Scoreboard (`AdderScoreboard`)**
   - Extends `uvm_scoreboard`
   - Checks DUT behavior
   - **Methods**: `write(txn)` - receives transactions, `add_expected()`, `report_phase()`
   - **Queue Methods**: `push_back()`, `pop_front()`, `size()`

6. **Agent (`AdderAgent`)**
   - Extends `uvm_agent`
   - Contains driver, monitor, and sequencer
   - **Connections**: `driver.seq_item_port.connect(sequencer.seq_item_export)`

7. **Environment (`AdderEnv`)**
   - Extends `uvm_env`
   - Contains agent and scoreboard
   - **Connections**: `monitor.ap.connect(scoreboard.imp)`

8. **Test (`AdderTest`)**
   - Extends `uvm_test`
   - Top-level test class
   - **Methods**: `run_test()`, `seq.start(sequencer)`
   - **ConfigDB**: Sets virtual interface before `run_test()`

**Key UVM Methods in Test:**

```systemverilog
// Sequence methods
task body();
    start_item(txn);      // Request transaction
    finish_item(txn);     // Send to driver
endtask
seq.start(sequencer);     // Start sequence

// Driver TLM port methods
seq_item_port.get_next_item(txn);  // Get transaction
seq_item_port.item_done();         // Signal complete

// Monitor analysis port
ap.write(txn);  // Broadcast transaction

// Scoreboard analysis export
function void write(txn);  // Receive transaction
endfunction

// Virtual interface
uvm_config_db#(virtual adder_if)::get(this, "", "vif", vif);
uvm_config_db#(virtual adder_if)::set(null, "*", "vif", vif_inst);

// Top-level
run_test("AdderTest");  // Start UVM test
```

**Running the test:**

```bash
# Via module script
./scripts/module3.sh --uvm-tests

# Directly from test directory
cd module3/tests/uvm_tests
make SIM=verilator TEST=test_adder_uvm
```

**Note**: Verilator has limited UVM support. For full UVM features, use commercial simulators (VCS, Questa, Xcelium).

## Running Examples and Tests

### Using the Module Script

The `module3.sh` script provides a convenient way to run all examples and tests:

```bash
# Run everything (all examples + all tests)
./scripts/module3.sh

# Run only examples
./scripts/module3.sh --all-examples

# Run only tests
./scripts/module3.sh --uvm-tests

# Run specific examples
./scripts/module3.sh --class-hierarchy
./scripts/module3.sh --phases
./scripts/module3.sh --reporting
./scripts/module3.sh --configdb
./scripts/module3.sh --factory
./scripts/module3.sh --objections

# Combine options
./scripts/module3.sh --phases --factory --uvm-tests
```

### Running Individual Examples

#### Direct SystemVerilog Execution

```bash
# Compile and run UVM examples
cd module3/examples/class_hierarchy
verilator -sv --cc --exe --timing --trace \
    -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI \
    --binary $UVM_HOME/src/uvm_pkg.sv class_hierarchy.sv class_hierarchy.cpp \
    --top-module class_hierarchy
make -C obj_dir -f Vclass_hierarchy.mk
./obj_dir/Vclass_hierarchy
```

#### Running UVM Tests

```bash
# Change to test directory
cd module3/tests/uvm_tests

# Run UVM adder test
make SIM=verilator TEST=test_adder_uvm

# For commercial simulators
make SIM=vcs TEST=test_adder_uvm
make SIM=questa TEST=test_adder_uvm

# Clean build artifacts
make clean
```

## Test Results

### Execution Status

✅ **All examples and tests have been successfully executed and verified.**

**Last Execution:** 2026-01-24 02:36:31  
**Verilator Version:** 5.045  
**UVM Library:** UVM 2017 (1800.2-2017-1.0)

**Execution Summary:**
- ✅ All 6 SystemVerilog UVM examples completed successfully
- ✅ UVM test compiled and passed
- ⏱️ Total execution time: ~30 minutes (UVM compilation takes significant time due to template instantiations)

**Examples Executed:**
1. ✅ Class Hierarchy - UVM class hierarchy and component structure demonstrated
2. ✅ Phases - All UVM phases demonstrated (42 phase messages)
3. ✅ Reporting - UVM reporting system demonstrated (7 reporting messages)
4. ✅ ConfigDB - Configuration database demonstrated (10 config messages)
5. ✅ Factory - Factory pattern demonstrated (5 factory messages)
6. ✅ Objections - Objection mechanism demonstrated

**Tests Executed:**
- ✅ UVM Adder test - 1 UVM test passing

### SystemVerilog Example Output

When tests complete successfully, you should see:

```
============================================================
UVM Report Summary
============================================================

[AGENT]     2
[DRIVER]     3
[ENV]     1
[MONITOR]     2
[OBJTN_CLEAR]     1
[RNTST]     1
[TEST]     5
[UVM/COMP/NAME]    22
[UVM/COMP/NAMECHECK]     1
[UVM/RELNOTES]     1
```

### Test Counts

- **Class Hierarchy example**: Demonstrates component creation ✅
- **Phases example**: Demonstrates all UVM phases ✅
- **Reporting example**: Demonstrates reporting system ✅
- **ConfigDB example**: Demonstrates configuration database ✅
- **Factory example**: Demonstrates factory pattern ✅
- **Objections example**: Demonstrates objection mechanism ✅
- **Adder UVM test**: 1 UVM test ✅

### Generated Files

After execution, each example directory contains:
- `*.cpp` - C++ wrapper files generated by Verilator
- `*.vcd` - Waveform dump files (can be viewed with GTKWave)
- `compile.log` - Compilation log
- `run.log` - Execution output log
- `obj_dir/` - Verilator build directory

Full execution log is saved to `module3/module3.log`.

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

#### 3. Phase Execution Errors

**Error:** Phases not executing in expected order

**Solution:** 
- Ensure phases are properly defined (function vs task)
- Check that objections are raised/dropped correctly
- Verify component hierarchy is correct

#### 4. Factory Override Not Working

**Error:** Override doesn't seem to take effect

**Solution:** 
- Ensure override is set in `build_phase()` before creating components
- Use `set_type_override()` for all instances
- Verify the base class is being used in `create()` calls

#### 5. Objections Not Working

**Error:** Simulation ends too early or hangs

**Solution:**
- Ensure `raise_objection()` is called at start of `run_phase()` if doing work
- Ensure `drop_objection()` is called when work completes
- Check that all components have dropped their objections

#### 6. ConfigDB Lookup Fails

**Error:** Configuration not found in ConfigDB

**Solution:**
- Verify configuration is set before components try to get it
- Check hierarchy path matches exactly
- Use `None` for global configuration, component for specific paths

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

3. **Enable Verbose Logging:**
   - Set UVM verbosity in test: `set_report_verbosity_level(UVM_DEBUG)`

4. **Check Phase Execution:**
   - Add logging in each phase to verify execution order
   - Use `report_phase()` to verify test completion

5. **Inspect Component Hierarchy:**
   - Use `print_topology()` to print component hierarchy

## UVM Functions and Methods in Module 3

### Quick Reference: UVM Methods

| Category | Method/Macro | Purpose |
|----------|--------------|---------|
| **Factory** | `` `uvm_object_utils(Class) `` | Register uvm_object |
| **Factory** | `` `uvm_component_utils(Class) `` | Register uvm_component |
| **Factory** | `Class::type_id::create("name", this)` | Create via factory |
| **Phase** | `function void build_phase(uvm_phase phase)` | Build phase |
| **Phase** | `task run_phase(uvm_phase phase)` | Run phase |
| **Reporting** | `` `uvm_info("TAG", "msg", verbosity) `` | Info message |
| **Reporting** | `` `uvm_warning("TAG", "msg") `` | Warning message |
| **ConfigDB** | `uvm_config_db#(Type)::set(...)` | Set configuration |
| **ConfigDB** | `uvm_config_db#(Type)::get(...)` | Get configuration |
| **Objection** | `phase.raise_objection(this)` | Raise objection |
| **Objection** | `phase.drop_objection(this)` | Drop objection |
| **Component** | `get_name()` | Get component name |
| **Component** | `get_full_name()` | Get full path |
| **Sequence** | `start_item(txn)` | Request transaction |
| **Sequence** | `finish_item(txn)` | Send transaction |
| **Sequence** | `seq.start(sequencer)` | Start sequence |
| **TLM** | `seq_item_port.get_next_item(txn)` | Get transaction (driver) |
| **TLM** | `seq_item_port.item_done()` | Signal complete (driver) |
| **Analysis** | `ap.write(txn)` | Broadcast transaction (monitor) |
| **Analysis** | `write(txn)` | Receive transaction (scoreboard) |
| **Virtual IF** | `uvm_config_db#(virtual if)::get(...)` | Get virtual interface |
| **Top-Level** | `run_test("TestName")` | Start UVM test |

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
    #100;
    phase.drop_objection(this);
endtask
```

### Best Practices

1. **Always call `super.build_phase(phase)`** etc.
2. **Set ConfigDB before creating components**
3. **Check ConfigDB return value**, provide defaults
4. **Raise objections in run-time phases** if doing work
5. **Drop objections when work completes**
6. **Use factory creation** (`type_id::create()`)
7. **Set factory overrides before creating components**

## Topics Covered

1. **UVM Introduction** - Understanding UVM methodology and benefits
2. **Class Hierarchy** - UVM base classes (uvm_object, uvm_component) and inheritance
3. **UVM Phases** - Build-time, run-time, and cleanup phases
4. **Reporting System** - Severity levels, verbosity, and message formatting
5. **ConfigDB** - Configuration database for flexible test configuration
6. **Factory Pattern** - Object creation and type/instance overrides
7. **Objection Mechanism** - Controlling test execution and phase completion
8. **UVM Functions and Methods** - Comprehensive reference for UVM methods
9. **Test Structure** - Creating and structuring UVM tests
10. **Environment Structure** - Building UVM environments with agents

## Next Steps

After completing Module 3, proceed to:

- **Module 4**: UVM Components - Detailed agent, driver, monitor, sequencer implementation
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
| `class_hierarchy.sv` | UVM class hierarchy and component structure |
| `phases.sv` | UVM phase implementation and execution |
| `reporting.sv` | UVM reporting system |
| `configdb.sv` | UVM configuration database |
| `factory.sv` | UVM factory pattern |
| `objections.sv` | UVM objection mechanism |

### DUT Modules

| File | Description | Ports |
|------|-------------|-------|
| `adder.v` | 8-bit adder with carry | `clk`, `rst_n`, `a[7:0]`, `b[7:0]`, `sum[7:0]`, `carry` |

### Testbenches

| File | Framework | Description | Tests |
|------|-----------|-------------|-------|
| `test_adder_uvm.sv` | UVM | Complete UVM testbench for adder | 1 UVM test |

---

For questions or issues, refer to the main project README or check the test logs for detailed error messages.
