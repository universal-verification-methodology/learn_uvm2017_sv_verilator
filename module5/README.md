# Module 5: Advanced UVM Concepts

This directory contains all examples, exercises, and test cases for Module 5, focusing on advanced UVM concepts including virtual sequences, coverage models, complex configuration, callbacks, and register models.


## Hands-on labs

- **Step-by-step commands:** [EXAMPLES.md](EXAMPLES.md)
- **Slides / PDF / video:** [media/module5](../media/module5/)
- **Full syllabus:** [docs/MODULE5.md](../docs/MODULE5.md)


## Directory Structure

```
module5/
├── examples/              # SystemVerilog UVM examples
│   ├── virtual_sequences/ # Virtual sequence examples
│   │   ├── virtual_sequences.sv
│   │   └── virtual_sequences.cpp
│   ├── coverage/          # Coverage model examples
│   │   ├── coverage.sv
│   │   └── coverage.cpp
│   ├── configuration/     # Advanced configuration examples
│   │   ├── configuration.sv
│   │   └── configuration.cpp
│   ├── callbacks/         # Callback examples
│   │   ├── callbacks.sv
│   │   └── callbacks.cpp
│   └── register_model/    # Register model examples
│       ├── register_model.sv
│       └── register_model.cpp
├── dut/                   # Verilog/SystemVerilog Design Under Test modules
│   └── advanced/          # Advanced modules for testing
│       └── multi_channel.v
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
│       ├── test_advanced_uvm.sv
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

## Advanced UVM Examples

### 1. Virtual Sequences (`examples/virtual_sequences/virtual_sequences.sv`)

Demonstrates virtual sequencer and virtual sequence coordination:

**Virtual Sequence Methods:**

1. **Virtual Sequencer:**
   ```systemverilog
   class VirtualSequencer extends uvm_sequencer;
       uvm_sequencer #(Transaction) master_seqr;
       uvm_sequencer #(Transaction) slave_seqr;
       
       function void connect_phase(uvm_phase phase);
           master_seqr = env.master_agent.sequencer;
           slave_seqr = env.slave_agent.sequencer;
       endfunction
   endclass
   ```

2. **Virtual Sequence:**
   ```systemverilog
   class VirtualSequence extends uvm_sequence;
       uvm_sequencer #(Transaction) master_seqr, slave_seqr;
       
       task body();
           fork
               seq1.start(master_seqr);  // Parallel
               seq2.start(slave_seqr);
           join
           seq3.start(master_seqr);      // Sequential
       endtask
   endclass
   ```

3. **Setting References:**
   ```systemverilog
   function void connect_phase(uvm_phase phase);
       vseqr.master_seqr = master_seqr;
       vseq.master_seqr = master_seqr;
   endfunction
   ```

**Key Concepts:**
- Virtual sequencer containing references to multiple sequencers
- Virtual sequence coordinating sequences on different sequencers
- Parallel sequence execution using `fork-join`
- Sequential sequence execution
- Cross-agent stimulus coordination
- **Virtual sequencer** - Holds references, doesn't create sequencers
- **Virtual sequence** - Coordinates sequences on multiple sequencers
- **Parallel execution** - `fork-join` for concurrent sequences
- **Sequential execution** - Sequential `start()` calls

**Running the example:**

```bash
# Using orchestrator script
./scripts/module5.sh --virtual-sequences

# Or compile directly
cd module5/examples/virtual_sequences
verilator -sv --cc --exe --timing --trace \
    -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI \
    --binary $UVM_HOME/src/uvm_pkg.sv virtual_sequences.sv virtual_sequences.cpp \
    --top-module virtual_sequences
make -C obj_dir -f Vvirtual_sequences.mk
./obj_dir/Vvirtual_sequences
```

**Expected Output:**
- Virtual sequencer creation and connection
- Virtual sequence coordination
- Parallel sequence execution
- Sequential sequence execution
- Cross-channel transaction generation

### 2. Coverage (`examples/coverage/coverage.sv`)

Demonstrates functional coverage implementation:

**Coverage Methods:**

1. **Write Method:**
   ```systemverilog
   function void write(Transaction t);
       if (!data_coverage.exists(t.data)) begin
           data_coverage[t.data] = 0;
       end
       data_coverage[t.data]++;
   endfunction
   ```

2. **Associative Array Methods:**
   ```systemverilog
   array.exists(key)      // Check if key exists
   array.num()            // Count unique keys
   foreach (array[key])   // Iterate over keys
   ```

3. **Report Phase:**
   ```systemverilog
   function void report_phase(uvm_phase phase);
       int count = data_coverage.num();
       `uvm_info("COVERAGE", $sformatf("Unique values: %0d", count), UVM_MEDIUM)
   endfunction
   ```

**Key Concepts:**
- Coverage model class extending `uvm_subscriber`
- Coverage sampling via `write()` method
- Coverpoints and bins
- Cross coverage between multiple fields
- Coverage analysis and reporting
- **`write(t)`** - Sample coverage from transaction
- **Associative arrays** - Track unique values
- **`exists(key)`** - Check key exists
- **`num()`** - Count unique keys
- **`foreach`** - Iterate over keys

**Running the example:**

```bash
./scripts/module5.sh --coverage
```

**Expected Output:**
- Coverage sampling demonstrated
- Data coverage tracking
- Address range coverage
- Command coverage tracking
- Cross coverage analysis
- Coverage statistics reporting

### 3. Advanced Configuration (`examples/configuration/configuration.sv`)

Demonstrates complex configuration objects:

**Configuration Methods:**

1. **Do Copy:**
   ```systemverilog
   function void do_copy(uvm_object rhs);
       AgentConfig cfg;
       if (!$cast(cfg, rhs)) return;
       super.do_copy(rhs);
       active = cfg.active;
       timeout = cfg.timeout;
   endfunction
   ```

2. **Nested Configuration:**
   ```systemverilog
   class EnvConfig extends uvm_object;
       AgentConfig master_config;
       AgentConfig slave_config;
   endclass
   ```

3. **Component-Specific Config:**
   ```systemverilog
   uvm_config_db#(AgentConfig)::set(this, "master_comp", "agent_config", config);
   ```

**Key Concepts:**
- Complex configuration objects
- Configuration hierarchy
- Resource database usage
- Configuration inheritance
- **`do_copy()`** - Copy configuration fields
- **Nested configs** - Config objects containing other configs
- **Component-specific paths** - Set config for specific components

**Running the example:**

```bash
./scripts/module5.sh --configuration
```

**Expected Output:**
- Complex configuration object creation
- Configuration hierarchy demonstrated
- Configuration setting and getting
- Configuration object usage
- Configuration inheritance demonstrated

### 4. Callbacks (`examples/callbacks/callbacks.sv`)

Demonstrates callback implementation:

**Callback Methods:**

1. **Callback Registration:**
   ```systemverilog
   class Callback extends CallbackBase;
       `uvm_register_cb(Component, Callback)  // Register type
   endclass
   ```

2. **Callback Execution:**
   ```systemverilog
   `uvm_do_callbacks(Component, Callback, pre_drive(this, txn))
   ```

3. **Callback Registration:**
   ```systemverilog
   uvm_callbacks#(Component, Callback)::add(component, callback);
   ```

**Key Concepts:**
- Callback mechanism
- Pre/post callbacks
- Callback registration
- Callback usage patterns
- **`uvm_register_cb`** - Register callback type
- **`uvm_do_callbacks`** - Execute callbacks
- **Callback registration** - Add callback to component
- **Pre/post callbacks** - Hooks before/after operations

**Running the example:**

```bash
./scripts/module5.sh --callbacks
```

**Expected Output:**
- Callback registration demonstrated
- Pre-drive callbacks executed
- Post-drive callbacks executed
- Monitor callbacks executed
- Callback mechanism working correctly

### 5. Register Model (`examples/register_model/register_model.sv`)

Demonstrates register model basics:

**Register Methods:**

1. **Register Add Field:**
   ```systemverilog
   function void add_field(RegisterField field);
       fields.push_back(field);
   endfunction
   ```

2. **Register Write/Read:**
   ```systemverilog
   function void write(logic [31:0] data);
       value = data;
       // Update field values
   endfunction
   
   function logic [31:0] read();
       return value;
   endfunction
   ```

3. **Register Block Methods:**
   ```systemverilog
   block.add_register(reg);
   reg = block.get_register("name");
   block.write_register("name", data);
   data = block.read_register("name");
   ```

**Key Concepts:**
- Register model structure
- Register blocks, registers, fields
- Register read/write operations
- Simplified register model (full implementation requires uvm_reg)
- **`add_field()`** - Add field to register
- **`write()`** - Write register value
- **`read()`** - Read register value
- **`add_register()`** - Add register to block
- **`get_register()`** - Look up register
- **`write_register()`** - Write by name
- **`read_register()`** - Read by name

**Note:** This is a simplified register model. Full UVM register model requires the `uvm_reg` package.

**Running the example:**

```bash
./scripts/module5.sh --register-model
```

**Expected Output:**
- Register model structure demonstrated
- Register field operations
- Register read/write operations
- Register block management
- Register addressing demonstrated

## Design Under Test (DUT)

### Multi-Channel Interface (`dut/advanced/multi_channel.v`)

A multi-channel interface for advanced UVM testing.

**Module Interface:**
```systemverilog
module multi_channel (
    input  wire       clk,
    input  wire       rst_n,
    input  wire       master_valid,
    output reg        master_ready,
    input  wire [7:0] master_data,
    input  wire       slave_valid,
    output reg        slave_ready,
    input  wire [7:0] slave_data
);
```

**Functionality:**
- Resets to all zeros when `rst_n` is low
- Handles master and slave channels independently
- Simple handshaking protocol
- Designed for virtual sequence testing

## Testbenches

### UVM Tests (`tests/uvm_tests/`)

#### Advanced UVM Test (`test_advanced_uvm.sv`)

Complete UVM testbench demonstrating advanced concepts:

**UVM Components:**

1. **Transaction (`AdvancedTransaction`)**
   - Extends `uvm_sequence_item`
   - Contains data and channel information

2. **Coverage (`AdvancedCoverage`)**
   - Extends `uvm_subscriber`
   - Tracks data and channel coverage

3. **Sequence (`AdvancedSequence`)**
   - Extends `uvm_sequence`
   - Generates test vectors

4. **Driver (`AdvancedDriver`)**
   - Extends `uvm_driver`
   - Drives transactions to DUT

5. **Monitor (`AdvancedMonitor`)**
   - Extends `uvm_monitor`
   - Observes DUT outputs

6. **Agent (`AdvancedAgent`)**
   - Extends `uvm_agent`
   - Contains driver, monitor, and sequencer

7. **Environment (`AdvancedEnv`)**
   - Extends `uvm_env`
   - Contains agent and coverage

8. **Test (`AdvancedTest`)**
   - Extends `uvm_test`
   - Top-level test class

**Running the test:**

```bash
# Via module script
./scripts/module5.sh --uvm-tests

# Directly from test directory
cd module5/tests/uvm_tests
make SIM=verilator TEST=test_advanced_uvm
```

## Running Examples and Tests

### Using the Module Script

The `module5.sh` script provides a convenient way to run all examples and tests:

```bash
# Run everything (all examples + all tests)
./scripts/module5.sh

# Run only examples
./scripts/module5.sh --all-examples

# Run only tests
./scripts/module5.sh --uvm-tests

# Run specific examples
./scripts/module5.sh --virtual-sequences
./scripts/module5.sh --coverage
./scripts/module5.sh --configuration
./scripts/module5.sh --callbacks
./scripts/module5.sh --register-model

# Combine options
./scripts/module5.sh --coverage --callbacks --uvm-tests
```

### Running Individual Examples

#### Direct SystemVerilog Execution

```bash
# Compile and run UVM examples
cd module5/examples/virtual_sequences
verilator -sv --cc --exe --timing --trace \
    -I$UVM_HOME/src +incdir+$UVM_HOME/src +define+UVM_NO_DPI \
    --binary $UVM_HOME/src/uvm_pkg.sv virtual_sequences.sv virtual_sequences.cpp \
    --top-module virtual_sequences
make -C obj_dir -f Vvirtual_sequences.mk
./obj_dir/Vvirtual_sequences
```

#### Running UVM Tests

```bash
# Change to test directory
cd module5/tests/uvm_tests

# Run UVM advanced test
make SIM=verilator TEST=test_advanced_uvm

# For commercial simulators
make SIM=vcs TEST=test_advanced_uvm
make SIM=questa TEST=test_advanced_uvm

# Clean build artifacts
make clean
```

## Test Results

### Execution Status

✅ **All examples and tests have been successfully executed and verified.**

**Last Execution:** 2026-01-24 02:44:25  
**Verilator Version:** 5.045  
**UVM Library:** UVM 2017 (1800.2-2017-1.0)

**Execution Summary:**
- ✅ All 5 SystemVerilog UVM examples completed successfully
- ✅ UVM test compiled and passed
- ⏱️ Total execution time: ~27 minutes (UVM compilation takes significant time due to template instantiations)

**Examples Executed:**
1. ✅ Virtual Sequences - Virtual sequencer and sequence coordination demonstrated
2. ✅ Coverage - Functional coverage implementation demonstrated (7 coverage messages)
3. ✅ Configuration - Advanced configuration objects demonstrated (2 config messages)
4. ✅ Callbacks - Callback mechanism demonstrated (1 callback message)
5. ✅ Register Model - Register model basics demonstrated (4 register messages)

**Tests Executed:**
- ✅ UVM Advanced test - 1 UVM test passing

### SystemVerilog Example Output

When tests complete successfully, you should see:

```
============================================================
UVM Report Summary
============================================================

[DRIVER]     2
[OBJTN_CLEAR]     1
[RNTST]     1
[SEQUENCE]     2
[TEST]     2
[UVM/COMP/NAME]    49
[UVM/COMP/NAMECHECK]     1
[UVM/RELNOTES]     1
[VIRTUAL_SEQ]     2
[VIRTUAL_SEQR]     2
```

### Test Counts

- **Virtual Sequences example**: Virtual sequencer and sequence coordination demonstrated ✅
- **Coverage example**: Functional coverage implementation demonstrated ✅
- **Configuration example**: Advanced configuration objects demonstrated ✅
- **Callbacks example**: Callback mechanism demonstrated ✅
- **Register Model example**: Register model basics demonstrated ✅
- **UVM Advanced test**: 1 UVM test ✅

### Generated Files

After execution, each example directory contains:
- `*.cpp` - C++ wrapper files generated by Verilator
- `*.vcd` - Waveform dump files (can be viewed with GTKWave)
- `compile.log` - Compilation log
- `run.log` - Execution output log
- `obj_dir/` - Verilator build directory

Full execution log is saved to `module5/module5.log`.

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

#### 3. Callback Registration Errors

**Error:** Callbacks not working

**Solution:** 
- Verify callback registration in `connect_phase()`
- Check callback base class and derived class definitions
- Ensure `uvm_register_cb` macro is used correctly

#### 4. Virtual Sequence Coordination Issues

**Error:** Virtual sequence not coordinating correctly

**Solution:**
- Verify sequencer references are set in `connect_phase()`
- Check that virtual sequencer references point to actual sequencers
- Ensure sequences are started on correct sequencers

## Advanced UVM Methods in Module 5

### Quick Reference: Advanced Methods

| Category | Method/Macro | Purpose |
|----------|--------------|---------|
| **Virtual Seq** | `vseqr.seqr = sequencer` | Set sequencer reference |
| **Virtual Seq** | `seq.start(sequencer)` | Start sequence |
| **Coverage** | `write(Transaction t)` | Sample coverage |
| **Coverage** | `array.exists(key)` | Check key exists |
| **Coverage** | `array.num()` | Count unique keys |
| **Config** | `do_copy(rhs)` | Copy config |
| **Callback** | `` `uvm_register_cb(Comp, Cb) `` | Register type |
| **Callback** | `` `uvm_do_callbacks(...) `` | Execute callbacks |
| **Register** | `reg.add_field(field)` | Add field |
| **Register** | `reg.write(data)` | Write register |
| **Register** | `reg.read()` | Read register |
| **Register** | `block.get_register(name)` | Look up register |

### Common Patterns

**1. Virtual Sequence - Parallel:**
```systemverilog
task body();
    fork
        seq1.start(seqr1);
        seq2.start(seqr2);
    join  // Wait for both
endtask
```

**2. Virtual Sequence - Sequential:**
```systemverilog
task body();
    seq1.start(seqr1);  // First
    seq2.start(seqr2);  // Then
endtask
```

**3. Coverage - Basic:**
```systemverilog
function void write(Transaction t);
    if (!coverage.exists(t.data)) coverage[t.data] = 0;
    coverage[t.data]++;
endfunction
```

**4. Coverage - Cross Coverage:**
```systemverilog
function void write(Transaction t);
    if (!cross_coverage[t.data].exists(t.command)) begin
        cross_coverage[t.data][t.command] = 0;
    end
    cross_coverage[t.data][t.command]++;
endfunction
```

**5. Callbacks:**
```systemverilog
// Register callback type
`uvm_register_cb(Component, Callback)

// Register callback instance
uvm_callbacks#(Component, Callback)::add(component, callback);

// Execute callbacks
`uvm_do_callbacks(Component, Callback, method(this, txn))
```

**6. Configuration:**
```systemverilog
function void do_copy(uvm_object rhs);
    Config cfg;
    if (!$cast(cfg, rhs)) return;
    super.do_copy(rhs);
    active = cfg.active;
endfunction
```

**7. Register:**
```systemverilog
// Build register
reg.add_field(field);
reg_block.add_register(reg);

// Access register
reg_block.write_register("reg", data);
data = reg_block.read_register("reg");
```

### Common Pitfalls

**1. Virtual Sequence:**
- ❌ Not checking sequencer references for null
- ❌ Not setting sequencer references before starting
- ✅ Always check `if (seqr != null)` before use

**2. Coverage:**
- ❌ Not checking `exists()` before accessing associative array
- ❌ Not initializing fixed arrays
- ✅ Always check `exists()` first

**3. Callbacks:**
- ❌ Missing `uvm_register_cb` macro
- ❌ Registering in wrong phase (should be `connect_phase`)
- ✅ Use macro and register in `connect_phase()`

**4. Register:**
- ❌ Not checking null from `get_register()`
- ❌ Not updating field values in `write()`
- ✅ Always check null, update fields

## Topics Covered

1. **Virtual Sequences** - Coordinating multiple sequencers
2. **Coverage Models** - Functional coverage implementation
3. **Advanced Configuration** - Complex configuration objects
4. **Callbacks** - Callback mechanism and usage
5. **Register Model** - Register model basics (simplified)
6. **Advanced UVM Methods** - Comprehensive reference for advanced methods

## Next Steps

After completing Module 5, proceed to:

- **Module 6**: Complex Testbenches - System-level verification

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **UVM User's Guide**: Accellera Systems Initiative
- **Verilator Documentation**: https://verilator.org/
- **Verification Academy**: https://verificationacademy.com/

## File Descriptions

### Examples

| File | Description |
|------|-------------|
| `virtual_sequences.sv` | Virtual sequencer and sequence coordination |
| `coverage.sv` | Functional coverage implementation |
| `configuration.sv` | Advanced configuration objects |
| `callbacks.sv` | Callback mechanism |
| `register_model.sv` | Register model basics (simplified) |

### DUT Modules

| File | Description | Ports |
|------|-------------|-------|
| `multi_channel.v` | Multi-channel interface | `clk`, `rst_n`, `master_valid`, `master_ready`, `master_data[7:0]`, `slave_valid`, `slave_ready`, `slave_data[7:0]` |

### Testbenches

| File | Framework | Description | Tests |
|------|-----------|-------------|-------|
| `test_advanced_uvm.sv` | UVM | Advanced UVM testbench | 1 UVM test |

---

For questions or issues, refer to the main project README or check the test logs for detailed error messages.
