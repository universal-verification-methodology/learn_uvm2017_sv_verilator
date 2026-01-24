# Module 8: UVM Miscellaneous Utilities

This module covers UVM utility classes including Command Line Processor, comparators, recorders, pools, queues, and string/math/random utilities.

## Directory Structure

```
module8/
├── examples/
│   ├── clp/
│   │   ├── clp.sv
│   │   └── clp.cpp
│   ├── comparators/
│   │   ├── comparators.sv
│   │   └── comparators.cpp
│   ├── recorders/
│   │   ├── recorders.sv
│   │   └── recorders.cpp
│   ├── pools/
│   │   ├── pools.sv
│   │   └── pools.cpp
│   ├── queues/
│   │   ├── queues.sv
│   │   └── queues.cpp
│   ├── string_utils/
│   │   ├── string_utils.sv
│   │   └── string_utils.cpp
│   ├── math_utils/
│   │   ├── math_utils.sv
│   │   └── math_utils.cpp
│   ├── random_utils/
│   │   ├── random_utils.sv
│   │   └── random_utils.cpp
│   └── integration/
│       ├── integration.sv
│       └── integration.cpp
├── dut/
│   └── dma/
│       └── simple_dma.v
└── tests/
    └── uvm_tests/
        ├── test_utilities_uvm.sv
        └── Makefile
```

## Examples Overview

### 1. Command Line Processor (CLP) (`examples/clp/`)

Demonstrates using UVM Command Line Processor for test configuration:

- Command-line argument parsing using `uvm_cmdline_proc`
- Plusarg handling (`+test_mode`, `+debug_level`, etc.)
- Test configuration from command line
- CLP usage patterns

**CLP Methods:**

1. **Command Line Argument Parsing:**
   ```systemverilog
   void'(uvm_cmdline_proc.get_arg_value("+test_mode", test_mode));
   // Method: static function bit get_arg_value(string plusarg, ref string value)
   // Return: 1 = found, 0 = not found
   // Purpose: Parse command-line plusarg
   // Plusarg Format: +name=value (e.g., +test_mode=stress)
   
   if (uvm_cmdline_proc.get_arg_value("+num_transactions", str_val)) begin
       num_transactions = sv_atoi(str_val);
       // Function: sv_atoi(string) -> int
       // Purpose: Convert string to integer
   end
   ```
   - **Method**: `get_arg_value(plusarg, value)` → bit
   - **Purpose**: Parse command-line plusargs
   - **Key**: Check return value, use `sv_atoi()` for integers

**Key Features:**
- `uvm_cmdline_proc.get_arg_value()` for parsing command-line arguments
- Configuration via plusargs
- Test mode and parameter configuration
- **CLP Method**: `get_arg_value(plusarg, value)` → bit (found/not found)
- **Plusarg Format**: `+name=value` (e.g., `+test_mode=stress`)
- **String Conversion**: Use `sv_atoi()` or `$atoi()` for integer conversion

**Expected Output:**
- Command-line argument parsing
- Plusarg handling
- Test configuration from command line
- Dynamic test configuration

### 2. Comparators (`examples/comparators/`)

Demonstrates using comparators for transaction comparison:

- In-order transaction comparison
- Out-of-order transaction comparison using address matching
- Transaction matching algorithms
- Comparator statistics and reporting

**Comparator Methods:**

1. **Analysis Imp Declaration:**
   ```systemverilog
   `uvm_analysis_imp_decl(_expected)
   `uvm_analysis_imp_decl(_actual)
   // Macro: Creates typed analysis implementations
   // Purpose: Multiple analysis ports with different write() methods
   ```

2. **In-Order Comparator:**
   ```systemverilog
   function void write_expected(T txn);
       expected_queue.push_back(txn);  // Add to queue
       compare_transactions();
   endfunction
   
   function void compare_transactions();
       while (expected_queue.size() > 0 && actual_queue.size() > 0) begin
           exp_txn = expected_queue.pop_front();  // Remove from front
           act_txn = actual_queue.pop_front();
           if (exp_txn.compare(act_txn)) match_count++;
           else mismatches++;
       end
   endfunction
   ```
   - **Queue Operations**: `push_back()`, `pop_front()`, `size()`
   - **Pattern**: FIFO comparison

3. **Out-of-Order Comparator:**
   ```systemverilog
   function void write_expected(T txn);
       expected_map[txn.address] = txn;  // Store by address
       compare_transactions();
   endfunction
   
   function void compare_transactions();
       foreach (expected_map[addr]) begin
           if (actual_map.exists(addr)) begin  // Check if exists
               // Compare and match
               expected_map.delete(addr);  // Remove after match
               actual_map.delete(addr);
           end
       end
   endfunction
   ```
   - **Associative Array Operations**: `map[key] = value`, `exists(key)`, `delete(key)`, `foreach`
   - **Pattern**: Address-based matching

**Key Features:**
- `InOrderComparator` for sequential comparison
- `OutOfOrderComparator` for address-based matching
- Match/mismatch tracking and reporting
- **Analysis Imp**: `uvm_analysis_imp_decl(suffix)` for multiple ports
- **Queue Operations**: `push_back()`, `pop_front()`, `size()`
- **Associative Arrays**: `exists()`, `delete()`, `foreach`

**Expected Output:**
- In-order transaction comparison
- Out-of-order transaction comparison
- Match/mismatch tracking
- Comparator statistics

### 3. Recorders (`examples/recorders/`)

Demonstrates transaction recording and playback:

- Transaction recording with timestamps
- Recorder implementation
- Recording formats
- Playback capabilities

**Recorder Methods:**

1. **Transaction Recording:**
   ```systemverilog
   function void do_record(uvm_recorder recorder);
       super.do_record(recorder);
       recorder.record_field("data", data, $bits(data), UVM_HEX);
       // Method: record_field(name, value, size, radix)
       // Radix: UVM_HEX, UVM_DEC, UVM_BIN, UVM_OCT
   endfunction
   ```

2. **Recorder Write:**
   ```systemverilog
   function void write(T txn);
       recorded_txn = T::type_id::create("recorded_txn");
       recorded_txn.copy(txn);  // Deep copy
       recorded_txn.timestamp = $time;  // Add timestamp
       recorded_transactions.push_back(recorded_txn);
   endfunction
   ```
   - **Methods**: `copy()`, `$time`, `push_back()`

**Key Features:**
- `do_record()` for transaction recording
- Transaction storage and retrieval
- Playback functionality
- **do_record()**: Record fields with radix
- **record_field()**: Record individual field
- **copy()**: Deep copy for recording
- **$time**: Get simulation time

**Expected Output:**
- Transaction recording
- Recorder storage
- Playback functionality
- Recording formats

### 4. Pools (`examples/pools/`)

Demonstrates object pooling for memory management:

- Object pooling to reduce allocation overhead
- Pool implementation with configurable size
- Pool usage patterns
- Memory management

**Pool Methods:**

1. **Pool Allocation:**
   ```systemverilog
   function T allocate();
       if (pool.size() > 0) begin
           return pool.pop_front();  // Get from pool
       end else begin
           return T::type_id::create("new_txn");  // Create new
       end
   endfunction
   ```
   - **Method**: `allocate()` → object
   - **Purpose**: Get object from pool

2. **Pool Deallocation:**
   ```systemverilog
   function void free(T txn);
       if (pool.size() < pool_size) begin
           pool.push_back(txn);  // Return to pool
       end
   endfunction
   ```
   - **Method**: `free(txn)` → void
   - **Purpose**: Return object to pool

**Key Features:**
- `allocate()` and `free()` methods
- Pool size management
- Statistics tracking
- **Pool Operations**: `allocate()` - Get object, `free()` - Return object
- **Queue Operations**: `push_back()`, `pop_front()`, `size()`
- **Memory Efficiency**: Reuse objects instead of creating new

**Expected Output:**
- Object pool creation
- Object allocation
- Object deallocation
- Pool statistics

### 5. Queues (`examples/queues/`)

Demonstrates queue utilities and operations:

- FIFO queue operations
- Priority queue implementation
- Queue management
- Queue statistics

**Queue Methods:**

1. **FIFO Queue:**
   ```systemverilog
   function void enqueue_fifo(T txn);
       fifo_queue.push_back(txn);  // Add to end
   endfunction
   
   function T dequeue_fifo();
       return fifo_queue.pop_front();  // Remove from front
   endfunction
   ```
   - **FIFO Pattern**: `push_back()` to enqueue, `pop_front()` to dequeue

2. **Priority Queue:**
   ```systemverilog
   function void enqueue_priority(T txn);
       // Find insertion position based on priority
       foreach (priority_queue[i]) begin
           if (txn.compare(priority_queue[i]) > 0) begin
               insert_pos = i;
               break;
           end
       end
       priority_queue.insert(insert_pos, txn);  // Insert at position
   endfunction
   ```
   - **Priority Pattern**: `insert()` to maintain order, `pop_front()` to dequeue
   - **Methods**: `compare()`, `insert()`, `pop_front()`

**Key Features:**
- `enqueue_fifo()` and `dequeue_fifo()` for FIFO operations
- `enqueue_priority()` and `dequeue_priority()` for priority queues
- Queue size tracking
- **FIFO Operations**: `push_back()`, `pop_front()`
- **Priority Operations**: `compare()`, `insert()`, `pop_front()`
- **Queue Methods**: `size()`, `push_back()`, `pop_front()`, `insert()`

**Expected Output:**
- FIFO queue operations
- Priority queue operations
- Queue management
- Queue statistics

### 6. String Utilities (`examples/string_utils/`)

Demonstrates string manipulation and formatting:

- String conversion (hex, binary)
- String padding
- Transaction formatting
- Field extraction

**String Methods:**

1. **String Conversion:**
   ```systemverilog
   function string int_to_hex(int value);
       return $sformatf("%0h", value);  // Hex format
   endfunction
   
   function string int_to_bin(int value);
       return $sformatf("%0b", value);  // Binary format
   endfunction
   ```
   - **Format Specifiers**: `%h` (hex), `%b` (binary), `%d` (decimal)

2. **String Padding:**
   ```systemverilog
   function string pad_string(string str, int width, string pad_char);
       while (result.len() < width) begin
           result = {pad_char, result};  // Concatenate
       end
   endfunction
   ```
   - **String Methods**: `len()`, `{str1, str2}` (concatenation)

3. **Field Extraction:**
   ```systemverilog
   function string extract_field(string str, string field_name);
       pos = find_substring(str, field_name);
       // Methods: find_substring(), getc(), substr()
   endfunction
   ```
   - **String Methods**: `find_substring()`, `getc()`, `substr()`, `len()`

**Key Features:**
- `int_to_hex()` and `int_to_bin()` conversions
- `pad_string()` for formatting
- `format_transaction()` for transaction strings
- `extract_field()` for parsing
- **String Methods**: `len()`, `getc()`, `substr()`, `find_substring()`
- **String Concatenation**: `{str1, str2}` operator
- **Format Specifiers**: `%s`, `%h`, `%b`, `%d`

**Expected Output:**
- String conversion operations
- String padding
- Transaction formatting
- Field extraction

### 7. Math Utilities (`examples/math_utils/`)

Demonstrates mathematical operations and utilities:

- Average calculation
- Min/max operations
- Standard deviation calculation
- Value clamping

**Math Methods:**

1. **Average Calculation:**
   ```systemverilog
   function real calculate_average(int values[]);
       foreach (values[i]) sum += values[i];
       return sum / real'(values.size());  // Type cast for real division
   endfunction
   ```
   - **Key**: Use `real'()` cast for floating-point division

2. **Standard Deviation:**
   ```systemverilog
   function real calculate_std_dev(int values[]);
       real avg = calculate_average(values);
       foreach (values[i]) variance += (values[i] - avg) * (values[i] - avg);
       return $sqrt(variance / real'(values.size()));
       // Function: $sqrt(real) -> real
   endfunction
   ```
   - **Function**: `$sqrt()` for square root

3. **Clamp:**
   ```systemverilog
   function int clamp(int value, int min_val, int max_val);
       if (value < min_val) return min_val;
       if (value > max_val) return max_val;
       return value;
   endfunction
   ```
   - **Purpose**: Clamp value to range

**Key Features:**
- `calculate_average()`, `calculate_max()`, `calculate_min()`
- `calculate_std_dev()` for statistical analysis
- `clamp()` for value range limiting
- **Array Operations**: `foreach`, `size()`
- **Type Casting**: `real'(int)` for floating-point operations
- **Math Functions**: `$sqrt()` for square root

**Expected Output:**
- Average calculation
- Min/max operations
- Standard deviation calculation
- Value clamping

### 8. Random Utilities (`examples/random_utils/`)

Demonstrates random number generation:

- Random range generation
- Random bit vector generation
- Weighted random selection
- Random delay generation

**Random Methods:**

1. **Random Range:**
   ```systemverilog
   function int random_range(int min_val, int max_val);
       return $urandom_range(max_val, min_val);
       // Function: $urandom_range(max, min) -> int
       // Note: Parameters are max, min (order matters)
   endfunction
   ```
   - **Built-in**: `$urandom_range(max, min)` - random in range

2. **Random Bits:**
   ```systemverilog
   function logic [31:0] random_bits(int width);
       return $urandom();
       // Function: $urandom() -> bit [31:0]
   endfunction
   ```
   - **Built-in**: `$urandom()` - 32-bit random

3. **Weighted Random:**
   ```systemverilog
   function int weighted_random(int weights[]);
       // Calculate cumulative weights
       // Select index based on probability distribution
   endfunction
   ```
   - **Purpose**: Probability-based selection

**Key Features:**
- `random_range()` for bounded random values
- `random_bits()` for bit vector generation
- `weighted_random()` for probability-based selection
- Constrained random transactions
- **Random Functions**: `$urandom()`, `$urandom_range(max, min)`
- **Weighted Random**: Cumulative weight distribution
- **Constraints**: `inside {[min:max]}` for value ranges

**Expected Output:**
- Random range generation
- Random bit vector generation
- Weighted random selection
- Random delay generation

### 9. Integration (`examples/integration/`)

Demonstrates integration of multiple utilities:

- Combining CLP, recorders, and queues
- Utility integration patterns
- Real-world utility usage

**Key Features:**
- Combined utility usage
- Transaction recording and queuing
- Command-line configuration

**Expected Output:**
- Combined utility usage
- Transaction recording and queuing
- Command-line configuration
- Integration patterns

## Running Examples

### Via Module Script

```bash
./scripts/module8.sh
./scripts/module8.sh --clp
./scripts/module8.sh --comparators
./scripts/module8.sh --recorders
./scripts/module8.sh --pools
./scripts/module8.sh --queues
./scripts/module8.sh --string-utils
./scripts/module8.sh --math-utils
./scripts/module8.sh --random-utils
./scripts/module8.sh --integration
./scripts/module8.sh --uvm-tests
```

### Direct Execution

```bash
# CLP example
cd module8/examples/clp
make SIM=verilator TEST=clp_top

# Comparators example
cd module8/examples/comparators
make SIM=verilator TEST=comparators_top

# Recorders example
cd module8/examples/recorders
make SIM=verilator TEST=recorders_top

# Pools example
cd module8/examples/pools
make SIM=verilator TEST=pools_top

# Queues example
cd module8/examples/queues
make SIM=verilator TEST=queues_top

# String utilities example
cd module8/examples/string_utils
make SIM=verilator TEST=string_utils_top

# Math utilities example
cd module8/examples/math_utils
make SIM=verilator TEST=math_utils_top

# Random utilities example
cd module8/examples/random_utils
make SIM=verilator TEST=random_utils_top

# Integration example
cd module8/examples/integration
make SIM=verilator TEST=integration_top

# UVM testbench
cd module8/tests/uvm_tests
make SIM=verilator TEST=test_utilities_uvm
```

## Command-Line Arguments

The CLP example supports the following plusargs:

```bash
+test_mode=<mode>          # Test mode (e.g., "normal", "stress")
+debug_level=<level>       # Debug verbosity level
+num_transactions=<count>   # Number of transactions
+seed=<value>              # Random seed
```

Example:

```bash
cd module8/examples/clp
make SIM=verilator TEST=clp_top EXTRA_ARGS="+test_mode=stress +num_transactions=20"
```

## Test Results

### Execution Status

✅ **All examples and tests have been successfully executed and verified.**

**Last Execution:** 2026-01-24 04:18:58  
**Verilator Version:** 5.045  
**UVM Library:** UVM 2017 (1800.2-2017-1.0)

**Execution Summary:**
- ✅ All 9 SystemVerilog UVM examples completed successfully
- ✅ UVM test compiled and passed
- ⏱️ Total execution time: ~16 minutes (UVM compilation takes significant time due to template instantiations)

**Examples Executed:**
1. ✅ CLP - Command Line Processor demonstrated (8 CLP messages, 1 driver message)
2. ✅ Comparators - Transaction comparators demonstrated (10 COMPARATOR messages)
3. ✅ Recorders - Transaction recording demonstrated (3 RECORDER messages)
4. ✅ Pools - Object pooling demonstrated (3 POOL messages)
5. ✅ Queues - Queue utilities demonstrated (6 QUEUE messages)
6. ✅ String Utils - String utilities demonstrated (6 STRING messages)
7. ✅ Math Utils - Math utilities demonstrated (6 MATH messages)
8. ✅ Random Utils - Random utilities demonstrated (3 RANDOM messages)
9. ✅ Integration - Utility integration demonstrated

**Tests Executed:**
- ✅ UVM Utilities test - 1 UVM test passing

### SystemVerilog Example Output

When tests complete successfully, you should see:

```
============================================================
UVM Report Summary
============================================================

[CLP]     8
[DRIVER]     1
[OBJTN_CLEAR]     1
[RNTST]     1
[UVM/COMP/NAME]    20
[UVM/COMP/NAMECHECK]     1
[UVM/RELNOTES]     1
```

### Test Counts

- **CLP example**: Command Line Processor demonstrated ✅
- **Comparators example**: Transaction comparators demonstrated ✅
- **Recorders example**: Transaction recording demonstrated ✅
- **Pools example**: Object pooling demonstrated ✅
- **Queues example**: Queue utilities demonstrated ✅
- **String Utils example**: String utilities demonstrated ✅
- **Math Utils example**: Math utilities demonstrated ✅
- **Random Utils example**: Random utilities demonstrated ✅
- **Integration example**: Utility integration demonstrated ✅
- **UVM Utilities test**: 1 UVM test ✅

### Generated Files

After execution, each example directory contains:
- `*.cpp` - C++ wrapper files generated by Verilator
- `*.vcd` - Waveform dump files (can be viewed with GTKWave)
- `compile.log` - Compilation log
- `run.log` - Execution output log
- `obj_dir/` - Verilator build directory

Full execution log is saved to `module8/module8.log`.

## UVM Utility Methods in Module 8

### Quick Reference Table

| **Category** | **Method/Function** | **Usage** | **Return Type** |
|--------------|-------------------|-----------|----------------|
| **CLP** | `get_arg_value(plusarg, value)` | Parse plusarg | bit (found/not found) |
| **Comparator** | `write_expected(txn)`, `write_actual(txn)` | Write transactions | void |
| **Recorder** | `do_record(recorder)`, `record_field(...)` | Record fields | void |
| **Pool** | `allocate()`, `free(txn)` | Object management | object, void |
| **Queue** | `push_back()`, `pop_front()`, `size()` | Queue operations | void, T, int |
| **String** | `int_to_hex()`, `pad_string()`, `extract_field()` | String operations | string |
| **Math** | `calculate_average()`, `calculate_std_dev()` | Math operations | real |
| **Random** | `random_range()`, `weighted_random()` | Random generation | int |
| **Array** | `foreach`, `size()`, `exists()`, `delete()` | Array operations | various |
| **String** | `len()`, `getc()`, `substr()`, `{str1,str2}` | String methods | int, byte, string |

### SystemVerilog Built-in Functions

**Queue Operations:**
- `push_back(item)` - Add to end
- `pop_front()` - Remove from front
- `size()` - Get queue size
- `insert(index, item)` - Insert at position
- `foreach (queue[i])` - Iterate over queue

**Associative Array Operations:**
- `map[key] = value` - Store by key
- `exists(key)` - Check if key exists
- `delete(key)` - Remove key-value pair
- `foreach (map[index])` - Iterate over all keys
- `num()` - Get number of entries

**String Operations:**
- `len()` - Get string length
- `getc(index)` - Get character at index
- `substr(start, end)` - Extract substring
- `{str1, str2}` - String concatenation

**Random Functions:**
- `$urandom()` - Generate random 32-bit value
- `$urandom_range(max, min)` - Generate random in range
- `randomize()` - Randomize object fields

**Math Functions:**
- `$sqrt(value)` - Calculate square root
- `$bits(expression)` - Get bit width
- `$time` - Get current simulation time

**Type Casting:**
- `real'(int_value)` - Convert integer to real
- `int'(real_value)` - Convert real to integer

### Common Patterns

**1. CLP Configuration:**
```systemverilog
function void build_phase(uvm_phase phase);
    void'(uvm_cmdline_proc.get_arg_value("+test_mode", test_mode));
    if (uvm_cmdline_proc.get_arg_value("+num_transactions", str_val)) begin
        num_transactions = sv_atoi(str_val);
    end
endfunction
```

**2. In-Order Comparator:**
```systemverilog
function void write_expected(T txn);
    expected_queue.push_back(txn);
    compare_transactions();
endfunction

function void compare_transactions();
    while (expected_queue.size() > 0 && actual_queue.size() > 0) begin
        exp_txn = expected_queue.pop_front();
        act_txn = actual_queue.pop_front();
        if (exp_txn.compare(act_txn)) match_count++;
    end
endfunction
```

**3. Out-of-Order Comparator:**
```systemverilog
function void write_expected(T txn);
    expected_map[txn.address] = txn;
    compare_transactions();
endfunction

function void compare_transactions();
    foreach (expected_map[addr]) begin
        if (actual_map.exists(addr)) begin
            // Compare and match
            expected_map.delete(addr);
            actual_map.delete(addr);
        end
    end
endfunction
```

**4. Pool Pattern:**
```systemverilog
function T allocate();
    if (pool.size() > 0) return pool.pop_front();
    else return T::type_id::create("new_txn");
endfunction

function void free(T txn);
    if (pool.size() < pool_size) pool.push_back(txn);
endfunction
```

**5. Priority Queue:**
```systemverilog
function void enqueue_priority(T txn);
    int insert_pos = 0;
    foreach (priority_queue[i]) begin
        if (txn.compare(priority_queue[i]) > 0) begin
            insert_pos = i;
            break;
        end
        insert_pos = i + 1;
    end
    priority_queue.insert(insert_pos, txn);
endfunction
```

### Best Practices

1. **CLP**: Always check return value, provide defaults
2. **Comparators**: Verify analysis port connections
3. **Recorders**: Call `super.do_record()` first
4. **Pools**: Ensure all objects are freed
5. **Queues**: Check `size()` before `pop_front()`
6. **String**: Verify string bounds before operations
7. **Math**: Use `real'()` cast for floating-point division
8. **Random**: Note `$urandom_range(max, min)` parameter order

## Learning Outcomes

After completing this module, you should be able to:

- Use UVM utility classes effectively
- Parse command-line arguments using CLP
- Compare transactions using comparators
- Record and playback transactions
- Use pools and queues for memory management
- Apply string, math, and random utilities
- Integrate multiple utilities in testbenches
- Build flexible and configurable testbenches
- Understand utility method signatures and usage patterns
- Apply utility patterns in real-world testbenches

## Next Steps

Congratulations! You've completed the UVM learning path. Review the [IEEE 1800.2-2017 Coverage](docs/IEEE_1800_2_2017_COVERAGE.md) to ensure complete understanding.
