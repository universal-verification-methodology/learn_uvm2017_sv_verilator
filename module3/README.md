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

**Key Concepts:**
- `uvm_object` - Base class for all UVM objects (transactions, sequences)
- `uvm_component` - Base class for all UVM components (drivers, monitors, agents)
- Component hierarchy: Test → Environment → Agent → Driver/Monitor
- Component creation using factory pattern

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

**Key Concepts:**
- Build-time phases execute top-down (parent before child)
- Run-time phases execute bottom-up (child before parent)
- Cleanup phases execute bottom-up (child before parent)
- Phases enable structured testbench execution

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

**Key Concepts:**
- Severity indicates message importance
- Verbosity controls message visibility
- Messages include component hierarchy context
- Reporting enables debugging and monitoring

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

**Key Concepts:**
- ConfigDB enables flexible test configuration
- Configuration can be set globally or per-component
- Components look up configuration in `build_phase()`
- Hierarchical paths enable component-specific config

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

**Key Concepts:**
- Factory enables centralized object creation
- Type override affects all instances
- Instance override affects specific instances
- Overrides enable test customization

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

**Key Concepts:**
- Raise objection to keep phase running
- Drop objection when work completes
- Phase completes when all objections dropped
- Multiple objections per component supported

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

2. **Sequence (`AdderSequence`)**
   - Extends `uvm_sequence`
   - Generates test vectors for the adder

3. **Driver (`AdderDriver`)**
   - Extends `uvm_driver`
   - Drives transactions to DUT

4. **Monitor (`AdderMonitor`)**
   - Extends `uvm_monitor`
   - Observes DUT outputs

5. **Scoreboard (`AdderScoreboard`)**
   - Extends `uvm_scoreboard`
   - Checks DUT behavior

6. **Agent (`AdderAgent`)**
   - Extends `uvm_agent`
   - Contains driver, monitor, and sequencer

7. **Environment (`AdderEnv`)**
   - Extends `uvm_env`
   - Contains agent and scoreboard

8. **Test (`AdderTest`)**
   - Extends `uvm_test`
   - Top-level test class

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

When tests complete successfully, you should see:

### Expected Test Counts

- **Class Hierarchy example**: Demonstrates component creation
- **Phases example**: Demonstrates all UVM phases
- **Reporting example**: Demonstrates reporting system
- **ConfigDB example**: Demonstrates configuration database
- **Factory example**: Demonstrates factory pattern
- **Objections example**: Demonstrates objection mechanism
- **Adder UVM test**: 1 UVM test

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

## Topics Covered

1. **UVM Introduction** - Understanding UVM methodology and benefits
2. **Class Hierarchy** - UVM base classes (uvm_object, uvm_component) and inheritance
3. **UVM Phases** - Build-time, run-time, and cleanup phases
4. **Reporting System** - Severity levels, verbosity, and message formatting
5. **ConfigDB** - Configuration database for flexible test configuration
6. **Factory Pattern** - Object creation and type/instance overrides
7. **Objection Mechanism** - Controlling test execution and phase completion
8. **Test Structure** - Creating and structuring UVM tests
9. **Environment Structure** - Building UVM environments with agents

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
