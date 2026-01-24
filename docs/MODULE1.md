# Module 1: SystemVerilog and Verification Basics

**Goal**: Understand SystemVerilog for verification and verification fundamentals

## Overview

This module establishes the foundation for verification work. You'll learn essential SystemVerilog concepts used in verification and understand the fundamental principles of hardware verification.

### Examples and Code Structure

This module includes comprehensive examples and testbenches located in the `module1/` directory:

```
module1/
├── examples/              # SystemVerilog examples for each topic
│   ├── sv_basics/         # Classes, inheritance, OOP
│   ├── interfaces/        # Interfaces and modports
│   ├── packages/          # Packages and namespaces
│   ├── data_structures/  # Data structures for verification
│   └── error_handling/   # Exception handling and logging
├── dut/                   # Verilog/SystemVerilog Design Under Test modules
│   └── simple_gates/      # Basic gates (AND gate, Counter)
├── tests/                 # Testbenches
│   ├── sv_tests/         # SystemVerilog testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
└── README.md             # Module 1 documentation
```

### Quick Start

**Run all examples using the orchestrator script:**
```bash
# Run all SystemVerilog examples
./scripts/module1.sh

# Run specific examples
./scripts/module1.sh --sv-basics
./scripts/module1.sh --interfaces
./scripts/module1.sh --packages
./scripts/module1.sh --data-structures
./scripts/module1.sh --error-handling

# Run tests
./scripts/module1.sh --sv-tests      # SystemVerilog testbenches
./scripts/module1.sh --uvm-tests     # UVM testbenches

# Run everything
./scripts/module1.sh --all-sv --all-tests
```

**Run examples individually:**
```bash
# Compile and run SystemVerilog examples
cd module1/examples/sv_basics
# Note: Examples may need manual compilation with Verilator or commercial simulator
# See individual example directories for compilation instructions

# Run SystemVerilog tests
cd module1/tests/sv_tests
make SIM=verilator TEST=test_and_gate

# Run UVM tests
cd module1/tests/uvm_tests
make SIM=verilator TEST=test_and_gate_uvm
```

## Topics Covered

### 1. SystemVerilog Classes and Inheritance for Verification

- **Object-Oriented Programming Basics**
  - Classes and objects
  - Instance variables and methods
  - Static variables and methods
  - Encapsulation concepts
  - Access modifiers (public, protected, local)

- **Inheritance in SystemVerilog**
  - Single inheritance
  - Method overriding
  - `super` keyword usage
  - Virtual methods and polymorphism
  - Abstract classes

- **Special Methods**
  - `new()` constructor
  - `copy()` and `clone()` methods
  - `compare()` and `convert2string()` methods
  - `print()` and `sprint()` methods

- **Class Design Patterns for Verification**
  - Factory pattern basics
  - Singleton pattern
  - Builder pattern
  - Strategy pattern

#### Example 1.1: Transaction Classes (`module1/examples/sv_basics/transaction.sv`)

**What it demonstrates:**
- Base `Transaction` class with static variables (`id_counter`)
- Instance variables (`id`, `data`, `timestamp`)
- Special methods: `new()`, `copy()`, `compare()`, `convert2string()`
- Inheritance: `ReadTransaction` and `WriteTransaction` inherit from `Transaction`
- Method overriding: Child classes override `convert2string()` method
- Using `super` to call parent class methods

**Function and Method Details:**

1. **Constructor Function: `new()`**
   ```systemverilog
   function new(string name = "Transaction");
       id_counter++;      // Increment shared static counter
       id = id_counter;    // Assign unique ID to instance
       data = 0;           // Initialize data field
       timestamp = 0;      // Initialize timestamp
   endfunction
   ```
   - **Purpose**: Initialize object when created
   - **Called**: Automatically via `Transaction txn = new();`
   - **Default Parameters**: `name` parameter has default value

2. **Copy Function: `copy()`**
   ```systemverilog
   function void copy(Transaction rhs);
       if (rhs == null) begin
           $error("Copy failed: null pointer");
           return;
       end
       id = rhs.id;
       data = rhs.data;
       timestamp = rhs.timestamp;
   endfunction
   ```
   - **Purpose**: Deep copy of transaction object
   - **Null Check**: Always validates input before accessing
   - **Usage**: `txn_copy.copy(txn1);` copies all fields

3. **Compare Function: `compare()`**
   ```systemverilog
   function bit compare(Transaction rhs);
       if (rhs == null) return 0;
       return (id == rhs.id) && (data == rhs.data);
   endfunction
   ```
   - **Returns**: `1` if equal, `0` if not equal
   - **Usage**: `if (txn1.compare(txn2)) $display("Match!");`

4. **String Conversion Function: `convert2string()`**
   ```systemverilog
   function string convert2string();
       return $sformatf("Transaction(id=%0d, data=0x%0h, timestamp=%0d)", 
                       id, data, timestamp);
   endfunction
   ```
   - **Uses**: `$sformatf()` built-in function for formatting
   - **Format Specifiers**: `%0d` (decimal), `%0h` (hexadecimal)
   - **Usage**: `$display("%s", txn.convert2string());`

5. **Accessor Functions: `get_id()`, `get_address()`**
   ```systemverilog
   function int get_id();
       return id;
   endfunction
   ```
   - **Purpose**: Encapsulated access to private fields
   - **Usage**: `int id_val = txn.get_id();`

6. **Method Overriding Example**:
   ```systemverilog
   // Base class
   function string convert2string();
       return $sformatf("Transaction(id=%0d, data=0x%0h)", id, data);
   endfunction
   
   // Derived class overrides
   function string convert2string();
       return $sformatf("ReadTransaction(id=%0d, address=0x%0h, data=0x%0h)", 
                       id, address, data);
   endfunction
   ```
   - **Polymorphism**: Derived class method called when using base class handle

**Execution:**
```bash
# Using orchestrator script (recommended)
./scripts/module1.sh --sv-basics

# Or compile directly with Verilator
cd module1/examples/sv_basics
verilator -sv --cc --exe transaction.sv -o transaction_example
make -C obj_dir -f Vtransaction_example.mk
./obj_dir/Vtransaction_example
```

**Verified Output:**
- Base transaction creation and manipulation
- Derived transaction examples showing inheritance
- Copy and compare operations working correctly
- String conversion examples

**Key Concepts:**
- **Static Variables**: `id_counter` is shared across all instances
- **Instance Variables**: Each transaction has its own `id`, `data`, `timestamp`
- **Special Methods**: Enable UVM-compatible behavior (copy, compare, string conversion)
- **Inheritance**: `ReadTransaction` and `WriteTransaction` extend base functionality
- **Method Overriding**: Child classes customize string representation
- **Function Syntax**: `function <return_type> <name>(<args>); ... endfunction`
- **Null Safety**: Always check for null before accessing object fields
- **Built-in Functions**: `$sformatf()`, `$error()`, `$display()` used throughout

### 2. Interfaces and Modports

- **SystemVerilog Interfaces**
  - Interface definition
  - Interface signals
  - Interface methods
  - Interface instantiation

- **Modports**
  - Modport definition
  - Direction specification (input, output, inout)
  - Modport usage in modules
  - Multiple modports per interface

- **Clocking Blocks**
  - Clocking block definition
  - Clocking block signals
  - Synchronous signal access
  - Clocking block in interfaces

- **Verification-Specific Interfaces**
  - Driver interfaces
  - Monitor interfaces
  - Scoreboard interfaces
  - Agent interfaces

#### Example 1.2: Interfaces and Modports (`module1/examples/interfaces/interface_example.sv`)

**What it demonstrates:**
- **Interface Definition**: `apb_if` interface with signals and clocking block
- **Modports**: `master_mp` and `slave_mp` modports with different signal directions
- **Clocking Block**: `cb` clocking block for synchronous access
- **Interface Usage**: Module using interface with modport
- **Testbench Integration**: Testbench connecting to interface
- **Task Usage**: Clock generation task, APB transaction tasks

**Function and Task Usage Examples:**

1. **Clock Generation Task**:
   ```systemverilog
   initial begin
       clk = 0;
       forever #5 clk = ~clk;  // Toggle every 5 time units
   end
   ```
   - **Purpose**: Generate free-running clock signal
   - **Built-in Features**: `forever` loop, delay operator `#`, bitwise NOT `~`
   - **Result**: Clock with 10 time unit period (50% duty cycle)

2. **APB Write Transaction (Task-like sequence)**:
   ```systemverilog
   @(posedge bus.clk);              // Wait for clock edge
   bus.psel <= 1;                  // Setup phase
   bus.pwrite <= 1;
   bus.paddr <= 16'h0100;
   bus.pwdata <= 32'hDEADBEEF;
   @(posedge bus.clk);             // Enable phase
   bus.penable <= 1;
   while (!bus.pready) @(posedge bus.clk);  // Wait for ready
   ```
   - **Event Control**: `@(posedge clk)` waits for clock edge
   - **Non-blocking Assignment**: `<=` for sequential logic
   - **Wait Loop**: `while (!condition) @(posedge clk)` pattern

3. **Signal Access Functions**:
   - **Blocking Assignment**: `=` for initialization (combinational)
   - **Non-blocking Assignment**: `<=` for sequential logic (clocked)
   - **Interface Signal Access**: `bus.signal_name` accesses interface signals

**Key Concepts:**
- Interfaces provide structured communication between modules
- Modports control signal direction and access
- Clocking blocks enable synchronous signal access
- Interfaces are essential for UVM testbenches
- **Event Control**: `@(posedge clk)` synchronizes to clock edges
- **Assignment Types**: `=` (blocking) vs `<=` (non-blocking)
- **Wait Patterns**: `while (!condition) @(posedge clk)` for handshaking
- **Built-in Operators**: `~` (NOT), `&&` (AND), `!` (logical NOT)

### 3. Packages and Namespaces

- **SystemVerilog Packages**
  - Package definition
  - Package items (classes, functions, types)
  - Package import
  - Package compilation order

- **Namespaces**
  - Package namespaces
  - Resolving name conflicts
  - Wildcard imports
  - Explicit imports

- **Verification Packages**
  - Common verification types
  - Utility functions
  - Shared classes
  - Configuration types

#### Example 1.3: Packages (`module1/examples/packages/package_example.sv`)

**What it demonstrates:**
- **Package Definition**: `verification_pkg` with common types and functions
- **Package Import**: Using `import verification_pkg::*`
- **Name Resolution**: Handling name conflicts
- **Package Organization**: Structuring verification code
- **Function Definitions**: `is_valid_address()`, `calculate_checksum()` functions
- **Task Definitions**: `wait_for_condition()` task with timeout

**Function Usage Examples:**

1. **`is_valid_address()` Function**:
   ```systemverilog
   function automatic bit is_valid_address(logic [15:0] addr);
       return (addr < 16'h1000);
   endfunction
   ```
   - **Purpose**: Validates address range (returns 1 if valid, 0 if invalid)
   - **Usage**: `if (is_valid_address(addr)) ...`
   - **Key Feature**: `automatic` keyword makes function re-entrant

2. **`calculate_checksum()` Function**:
   ```systemverilog
   function automatic logic [7:0] calculate_checksum(logic [31:0] data);
       return data[7:0] ^ data[15:8] ^ data[23:16] ^ data[31:24];
   endfunction
   ```
   - **Purpose**: Calculates XOR checksum of 32-bit data
   - **Returns**: 8-bit checksum value
   - **Usage**: `logic [7:0] checksum = calculate_checksum(data);`

3. **`wait_for_condition()` Task**:
   ```systemverilog
   task automatic wait_for_condition(ref bit condition, int timeout);
       int count = 0;
       while (!condition && count < timeout) begin
           #1;
           count++;
       end
   endtask
   ```
   - **Purpose**: Wait for condition with timeout
   - **Key Features**: 
     - `ref` parameter passes by reference
     - Contains delays (`#1`)
     - Demonstrates task with timing control

**Key Concepts:**
- Packages organize related code (types, functions, tasks, constants)
- Import statements control namespace
- Functions in packages are reusable across modules
- `automatic` keyword enables re-entrant functions/tasks
- Tasks can contain delays, functions cannot
- Packages improve code reusability
- Essential for UVM library organization

### 4. Data Structures for Verification

- **SystemVerilog Data Types**
  - `bit` and `logic` types
  - `int`, `longint`, `shortint`
  - `real` and `realtime`
  - `string` type
  - `enum` types

- **Arrays**
  - Fixed-size arrays
  - Dynamic arrays
  - Associative arrays
  - Queues
  - Array methods

- **Structures and Unions**
  - `struct` definition
  - Packed and unpacked structures
  - `union` types
  - Structure methods

- **Verification-Specific Data Structures**
  - Transaction queues
  - Coverage bins
  - Scoreboard structures
  - Configuration structures

#### Example 1.4: Data Structures (`module1/examples/data_structures/data_structures_example.sv`)

**What it demonstrates:**
- **Dynamic Arrays**: Transaction arrays that grow dynamically
- **Queues**: FIFO queues for transaction management
- **Associative Arrays**: Indexed by transaction ID
- **Structures**: Complex data structures for verification
- **Array Methods**: Using built-in array methods
- **Class Methods**: Queue and scoreboard methods (`push()`, `pop()`, `check()`)

**Function and Method Usage Examples:**

1. **Queue Class Methods**:
   ```systemverilog
   class TransactionQueue;
       function void push(SimpleTransaction txn);
           queue.push_back(txn);  // Uses built-in push_back() method
       endfunction
       
       function SimpleTransaction pop();
           if (queue.size() > 0)  // Uses built-in size() method
               return queue.pop_front();  // Uses built-in pop_front() method
       endfunction
       
       function int size();
           return queue.size();  // Wrapper around built-in size()
       endfunction
   endclass
   ```
   - **`push()`**: Wraps `push_back()` for FIFO enqueue
   - **`pop()`**: Wraps `pop_front()` for FIFO dequeue
   - **`size()`**: Returns queue element count
   - **Usage**: `queue.push(txn); txn = queue.pop();`

2. **Scoreboard Methods**:
   ```systemverilog
   class Scoreboard;
       function void add_expected(int id, bit [31:0] data);
           expected_data[id] = data;  // Associative array assignment
       endfunction
       
       function bit check(int id);
           if (expected_data.exists(id) == 0 || actual_data.exists(id) == 0)
               return 0;  // Uses built-in exists() method
           return (expected_data[id] == actual_data[id]);
       endfunction
   endclass
   ```
   - **`add_expected()`**: Stores expected values
   - **`check()`**: Compares expected vs actual using `exists()` method
   - **Usage**: `scoreboard.add_expected(1, data); scoreboard.check(1);`

3. **Coverage Collector Methods**:
   ```systemverilog
   function void sample_address(int addr);
       if (address_count.exists(addr) != 0)
           address_count[addr]++;  // Increment existing count
       else
           address_count[addr] = 1;  // Initialize new entry
   endfunction
   
   function real get_coverage(int max_address);
       int covered = 0;
       foreach (address_count[i]) begin  // Built-in foreach loop
           if (i < max_address) covered++;
       end
       return (real'(covered) / real'(max_address)) * 100.0;
   endfunction
   ```
   - **`sample_address()`**: Records address access
   - **`get_coverage()`**: Calculates coverage percentage
   - **Built-in Features**: `foreach` loop, `exists()` method, type casting

**Key Concepts:**
- Dynamic arrays provide flexibility
- Queues are ideal for FIFO operations
- Associative arrays enable key-value lookups
- Structures organize related data
- Array methods (`push_back()`, `pop_front()`, `size()`, `exists()`) are essential
- Wrapper methods provide clean interfaces to built-in array operations
- `foreach` loops iterate over associative arrays efficiently

### 5. Error Handling and Logging

- **SystemVerilog Assertions**
  - Immediate assertions
  - Concurrent assertions
  - Assertion severity
  - Assertion coverage

- **UVM Reporting**
  - UVM messaging system
  - Severity levels (FATAL, ERROR, WARNING, INFO, DEBUG)
  - Verbosity levels
  - Message formatting

- **Exception Handling**
  - Try-catch blocks (SystemVerilog 2017+)
  - Error propagation
  - Graceful error handling

- **Logging Patterns**
  - Structured logging
  - Log file management
  - Debug logging
  - Production logging

#### Example 1.5: Error Handling (`module1/examples/error_handling/error_handling_example.sv`)

**What it demonstrates:**
- **UVM Reporting**: Using `uvm_report_info()`, `uvm_report_error()`, etc.
- **Assertions**: Immediate and concurrent assertions
- **Error Handling**: Try-catch blocks for exception handling
- **Logging Patterns**: Structured logging for verification
- **Retry Logic**: Task with retry mechanism using `retry_task()`
- **Exception Objects**: Custom exception class with `convert2string()` method

**Function and Task Usage Examples:**

1. **Exception Class Methods**:
   ```systemverilog
   class VerificationException;
       function new(string msg = "", int code = 0);
           message = msg;
           error_code = code;
       endfunction
       
       function string convert2string();
           return $sformatf("VerificationException: %s (code=%0d)", message, error_code);
       endfunction
   endclass
   ```
   - **Constructor**: Initializes exception with message and code
   - **`convert2string()`**: Formats exception for display
   - **Usage**: `$display("%s", exc.convert2string());`

2. **Retry Task with Built-in Functions**:
   ```systemverilog
   task retry_task(int attempts = 3);
       bit success = 0;
       int attempt = 0;
       while (!success && attempt < attempts) begin
           attempt++;
           $display("[RETRY] Attempt %0d of %0d", attempt, attempts);
           #10;
           if ($urandom_range(0, 1) != 0) begin
               success = 1;
               $display("[RETRY] Operation succeeded");
           end
       end
   endtask
   ```
   - **Purpose**: Retry operation with configurable attempts
   - **Built-in Functions Used**:
     - `$display()`: Print formatted messages
     - `$urandom_range()`: Generate random numbers for simulation
   - **Usage**: `comp.retry_task(3);` retries up to 3 times

3. **Reporting Task**:
   ```systemverilog
   task demonstrate_reporting();
       $display("[DEMO] INFO: This is an INFO message");
       $display("[DEMO] WARNING: This is a WARNING message");
       $display("[DEMO] ERROR: This is an ERROR message");
   endtask
   ```
   - **Purpose**: Demonstrate different message severity levels
   - **Usage**: Shows structured logging patterns

**Key Concepts:**
- UVM reporting provides standardized messaging
- Assertions catch design errors early
- Exception handling enables graceful failures
- Logging is essential for debugging
- Tasks can implement retry logic with delays
- Built-in functions like `$urandom_range()` are useful for simulation
- Custom exception classes provide structured error information

### 6. SystemVerilog Functions and Tasks

Understanding functions and tasks is crucial for writing effective SystemVerilog testbenches. This section explains how to use functions and tasks in verification code, with detailed examples from the module's codebase.

#### Functions vs Tasks

**Quick Reference Table:**

| Feature | Function | Task |
|---------|----------|------|
| **Return Value** | Required (must declare type) | None (implicitly void) |
| **Timing Control** | ❌ No delays (`#`, `@`, `wait`) | ✅ Can use delays |
| **Execution Time** | Zero simulation time | May consume time |
| **Use Case** | Calculations, transformations | Test sequences, stimulus |
| **Syntax** | `function <type> name(); ... endfunction` | `task name(); ... endtask` |
| **Call Syntax** | `result = func_name();` | `task_name();` |
| **Can Call** | Other functions, tasks | Other tasks, functions |
| **Re-entrant** | Use `automatic` keyword | Use `automatic` keyword |
| **Performance** | Faster (no timing overhead) | Slower (timing simulation) |

**Functions:**
- **Purpose**: Compute and return a single value
- **Return Type**: Must declare a return type (`void`, `int`, `string`, `bit`, etc.)
- **Timing**: Execute in zero simulation time (no delays allowed)
- **Usage**: For calculations, data transformations, comparisons
- **Syntax**: `function <return_type> <name>(<arguments>); ... endfunction`
- **When to Use**: 
  - ✅ Data validation (`is_valid_address()`)
  - ✅ Calculations (`calculate_checksum()`)
  - ✅ Comparisons (`compare()`)
  - ✅ String formatting (`convert2string()`)
  - ✅ Accessor methods (`get_id()`)
  - ❌ Operations requiring delays
  - ❌ Test sequences

**Tasks:**
- **Purpose**: Perform operations that may consume time
- **Return Type**: No return value (implicitly `void`)
- **Timing**: Can contain delays (`#`, `@`, `wait`)
- **Usage**: For test sequences, stimulus generation, complex operations
- **Syntax**: `task <name>(<arguments>); ... endtask`
- **When to Use**:
  - ✅ Test sequences (`test_basic()`, `test_reset()`)
  - ✅ Reset/initialization sequences (`reset()`)
  - ✅ Clock generation
  - ✅ Protocol transactions (APB write/read)
  - ✅ Retry logic with delays
  - ❌ Simple calculations (use function instead)
  - ❌ Data transformations (use function instead)

**Decision Guide:**
```
Need to return a value?
├─ YES → Use FUNCTION
│   └─ Need delays?
│       └─ YES → ERROR: Functions can't have delays!
│       └─ NO → Use function
│
└─ NO → Need delays or timing control?
    ├─ YES → Use TASK
    └─ NO → Still use TASK (for consistency with test sequences)
```

#### Built-in SystemVerilog Functions

The examples use several built-in SystemVerilog functions for output, formatting, and simulation control. Here's a comprehensive reference:

**Essential Built-in Functions Reference:**

| Function | Purpose | Returns | Example |
|----------|---------|---------|---------|
| `$display()` | Print formatted text | void | `$display("Value: %0d", x);` |
| `$sformatf()` | Format string | string | `string s = $sformatf("id=%0d", id);` |
| `$finish` | Terminate simulation | void | `$finish;` |
| `$error()` | Report error | void | `$error("Failed: %0d", code);` |
| `$warning()` | Report warning | void | `$warning("Check: %s", msg);` |
| `$info()` | Report info | void | `$info("Status: %0d", status);` |
| `$time` | Current simulation time | time | `time t = $time;` |
| `$urandom()` | Random unsigned integer | int unsigned | `int r = $urandom();` |
| `$urandom_range()` | Random in range | int | `int r = $urandom_range(0, 100);` |
| `$cast()` | Type casting | bit (success) | `$cast(obj, handle);` |

**1. `$display()` - Formatted Output**
```systemverilog
$display("Text message");                    // Simple text output
$display("Value: %0d", variable);            // Format specifiers
$display("Hex: 0x%0h", data);                 // Hexadecimal format
$display("Time: %0t, Value: %0d", $time, x); // Multiple arguments
```
- **Purpose**: Print formatted text to console (like `printf` in C)
- **Format Specifiers**:
  - `%0d` - Decimal integer (no leading zeros)
  - `%0h` or `%0x` - Hexadecimal (no leading zeros)
  - `%0b` - Binary
  - `%0s` - String
  - `%0t` - Time
  - `%0f` - Real (floating point)
  - `%0e` - Scientific notation
- **Variants**:
  - `$display()` - Standard output
  - `$displayb()` - Binary format
  - `$displayh()` - Hexadecimal format
  - `$displayo()` - Octal format
- **Example from code**: Used extensively in all examples for test output
- **Real Example** (from `test_counter.sv`):
  ```systemverilog
  $display("  Count = %0d (PASS)", count);
  $display("Test 2 passed!");
  ```

**2. `$sformatf()` - String Formatting**
```systemverilog
string result = $sformatf("id=%0d, data=0x%0h", id, data);
string msg = $sformatf("Transaction %0d at time %0t", id, $time);
```
- **Purpose**: Format string with placeholders (like `sprintf` in C)
- **Returns**: Formatted string (doesn't print to console)
- **Usage**: Create string representations of objects
- **Example from code**: Used in `convert2string()` methods to format transaction data
- **Real Example** (from `transaction.sv`):
  ```systemverilog
  function string convert2string();
      return $sformatf("Transaction(id=%0d, data=0x%0h, timestamp=%0d)", 
                     id, data, timestamp);
  endfunction
  ```

**3. `$finish` - Simulation Termination**
```systemverilog
$finish;        // Terminates simulation immediately
$finish(0);     // Same as $finish (exit code 0)
$finish(1);     // Terminates with exit code 1 (error)
$finish(2);     // Terminates with exit code 2 (fatal)
```
- **Purpose**: Stop simulation and exit
- **Usage**: End testbench execution after tests complete
- **Exit Codes**: 0 = success, 1 = error, 2 = fatal
- **Example from code**: Called at end of all test programs
- **Real Example** (from `test_and_gate.sv`):
  ```systemverilog
  $display("All tests passed!");
  #100;
  $finish;
  ```

**4. `$error()` - Error Reporting**
```systemverilog
$error("Error message: %0d", value);
$error("Test failed: %b & %b should be %b, got %b", a, b, expected, y);
```
- **Purpose**: Report errors with formatted messages
- **Usage**: In assertions and error handling
- **Severity**: ERROR level (stops simulation if severity is high enough)
- **Example from code**: Used in test assertions when checks fail
- **Real Example** (from `test_and_gate.sv`):
  ```systemverilog
  assert (y == 0) else $error("Test failed: 0 & 0 should be 0, got %b", y);
  ```

**5. Additional Reporting Functions**
```systemverilog
$warning("Warning message: %s", msg);  // WARNING level
$info("Info message: %0d", value);     // INFO level
$fatal("Fatal error: %s", msg);        // FATAL level (stops simulation)
```
- **Purpose**: Different severity levels for reporting
- **Usage**: Use appropriate level for the situation
- **Severity Order**: FATAL > ERROR > WARNING > INFO

**6. Time Functions**
```systemverilog
time current_time = $time;           // Current simulation time
realtime real_time = $realtime;      // Real time (with fractions)
$display("Current time: %0t", $time); // Display time
```
- **Purpose**: Get current simulation time
- **Usage**: Timing verification, logging with timestamps

**7. Random Number Functions**
```systemverilog
int unsigned r1 = $urandom();              // Random unsigned integer
int r2 = $urandom_range(0, 100);          // Random in range [0, 100]
int r3 = $urandom_range(10, 20);           // Random in range [10, 20]
bit [7:0] r4 = $urandom_range(0, 255);    // Random 8-bit value
```
- **Purpose**: Generate random numbers for test stimulus
- **Usage**: Random test generation, constrained random verification
- **Example from code**: Used in `error_handling_example.sv` for retry simulation

**8. Type Casting Function**
```systemverilog
Transaction txn;
BaseTransaction base;
bit success = $cast(txn, base);  // Try to cast base to txn
if (success) begin
    // Cast succeeded, txn now points to base
end
```
- **Purpose**: Safe type casting between compatible types
- **Returns**: `1` if cast succeeds, `0` if fails
- **Usage**: Polymorphic object handling, type checking

#### Class Methods (Functions in Classes)

Class methods are functions defined within classes. The transaction example demonstrates several important method patterns:

**1. Constructor Method: `new()`**
```systemverilog
function new(string name = "Transaction");
    id_counter++;
    id = id_counter;
    data = 0;
    timestamp = 0;
endfunction
```
- **Purpose**: Initialize object when created
- **Called**: Automatically when using `new()` operator
- **Parameters**: Can have default values
- **Example**: `Transaction txn = new();` creates object and calls `new()`

**2. Copy Method: `copy()`**
```systemverilog
function void copy(Transaction rhs);
    if (rhs == null) begin
        $error("Copy failed: null pointer");
        return;
    end
    id = rhs.id;
    data = rhs.data;
    timestamp = rhs.timestamp;
endfunction
```
- **Purpose**: Create deep copy of object
- **Usage**: Duplicate transactions for scoreboards, queues
- **Null Check**: Always check for null before accessing object fields
- **Example**: `txn_copy.copy(txn1);` copies all fields from `txn1` to `txn_copy`

**3. Compare Method: `compare()`**
```systemverilog
function bit compare(Transaction rhs);
    if (rhs == null) return 0;
    return (id == rhs.id) && (data == rhs.data);
endfunction
```
- **Purpose**: Compare two objects for equality
- **Returns**: `1` if equal, `0` if not equal
- **Usage**: Scoreboard checking, test verification
- **Example**: `if (txn1.compare(txn2)) $display("Match!");`

**4. String Conversion: `convert2string()`**
```systemverilog
function string convert2string();
    return $sformatf("Transaction(id=%0d, data=0x%0h, timestamp=%0d)", 
                     id, data, timestamp);
endfunction
```
- **Purpose**: Create human-readable string representation
- **Returns**: Formatted string with object fields
- **Usage**: Debugging, logging, test output
- **Example**: `$display("%s", txn.convert2string());`

**5. Accessor Methods: `get_id()`, `get_address()`**
```systemverilog
function int get_id();
    return id;
endfunction
```
- **Purpose**: Provide controlled access to private fields
- **Usage**: Encapsulation, data access
- **Example**: `int id_val = txn.get_id();`

#### Tasks in Testbenches

Tasks are essential for organizing testbench code. The test examples demonstrate task usage:

**1. Test Tasks: `test_basic()`, `test_reset()`, etc.**
```systemverilog
task test_basic();
    $display("Test 1: Basic truth table test");
    a = 0; b = 0;
    #10;  // Delay allowed in tasks
    assert (y == 0) else $error("Test failed");
    $display("Test 1 passed!");
endtask
```
- **Purpose**: Organize test code into reusable units
- **Timing**: Can contain delays (`#10`) and event waits (`@(posedge clk)`)
- **Usage**: Each test case is a separate task
- **Calling**: `test_basic();` executes the task

**2. Helper Tasks: `reset()`**
```systemverilog
task reset();
    rst_n = 0;
    enable = 0;
    #20;      // Wait 20 time units
    rst_n = 1;
    #10;      // Wait 10 more time units
endtask
```
- **Purpose**: Encapsulate common sequences (reset, initialization)
- **Reusability**: Can be called from multiple test tasks
- **Usage**: `reset();` applies reset sequence before each test

**3. Task Parameters**
```systemverilog
task write_transaction(bit [15:0] addr, bit [31:0] data);
    bus.paddr <= addr;
    bus.pwdata <= data;
    // ... transaction sequence
endtask
```
- **Purpose**: Pass data to tasks
- **Usage**: Make tasks flexible and reusable
- **Calling**: `write_transaction(16'h1000, 32'hDEADBEEF);`

#### Array Methods

The data structures example demonstrates SystemVerilog array methods:

**1. Queue Methods**
```systemverilog
queue.push_back(txn);      // Add to end of queue
txn = queue.pop_front();    // Remove from front of queue
int size = queue.size();    // Get number of elements
bit empty = (queue.size() == 0);  // Check if empty
```
- **`push_back()`**: Add element to end (FIFO enqueue)
- **`pop_front()`**: Remove element from front (FIFO dequeue)
- **`size()`**: Return number of elements
- **Usage**: Transaction queues, scoreboards

**2. Associative Array Methods**
```systemverilog
expected_data[id] = data;                    // Store value
bit exists = expected_data.exists(id);      // Check if key exists
bit [31:0] value = expected_data[id];        // Retrieve value
```
- **`exists()`**: Check if key exists in associative array
- **Indexing**: Use any integral type as key
- **Usage**: Scoreboards, coverage collectors

#### Function and Task Best Practices

**1. Use Functions for Calculations**
- Functions execute in zero time
- Perfect for data transformations, comparisons
- Must return a value (or `void`)

**2. Use Tasks for Sequences**
- Tasks can contain delays
- Perfect for test sequences, stimulus generation
- No return value

**3. Null Pointer Checks**
```systemverilog
function void copy(Transaction rhs);
    if (rhs == null) begin
        $error("Copy failed: null pointer");
        return;
    end
    // ... copy logic
endfunction
```
- Always check for null before accessing object fields
- Prevents simulation crashes

**4. Method Overriding**
```systemverilog
// Base class
function string convert2string();
    return $sformatf("Transaction(id=%0d)", id);
endfunction

// Derived class
function string convert2string();
    return $sformatf("ReadTransaction(id=%0d, addr=0x%0h)", id, address);
endfunction
```
- Derived classes can override base class methods
- Provides polymorphic behavior

**5. Task Organization**
```systemverilog
// Organize tests as separate tasks
task test_reset();
    // Reset test code
endtask

task test_increment();
    // Increment test code
endtask

// Call tasks from main initial block
initial begin
    test_reset();
    test_increment();
end
```
- Each test case as separate task
- Main `initial` block orchestrates test execution
- Improves code readability and maintainability

#### Code Examples from Module 1

**Example 1: Class Method Usage** (`transaction.sv`)
```systemverilog
// Creating and using objects
Transaction txn1 = new();
txn1.data = 32'h1234;
$display("%s", txn1.convert2string());  // Calls convert2string() method
int id = txn1.get_id();                  // Calls get_id() method

// Copy operation
Transaction txn_copy = new();
txn_copy.copy(txn1);                      // Calls copy() method

// Compare operation
if (txn1.compare(txn2))                  // Calls compare() method
    $display("Transactions match");
```

**Example 2: Task Usage** (`test_counter.sv`)
```systemverilog
// Helper task
task reset();
    rst_n = 0;
    enable = 0;
    #20;
    rst_n = 1;
    #10;
endtask

// Test task
task test_increment();
    reset();                              // Call helper task
    enable = 1;
    for (int i = 0; i < 10; i++) begin
        @(posedge clk);                   // Wait for clock edge
        #1;
        assert (count == 8'(i));
    end
endtask

// Main execution
initial begin
    test_increment();                     // Call test task
end
```

**Example 3: Array Methods** (`data_structures_example.sv`)
```systemverilog
// Queue operations
TransactionQueue queue = new();
queue.push(txn);                          // Calls push() which uses push_back()
txn = queue.pop();                        // Calls pop() which uses pop_front()
int size = queue.size();                 // Calls size() method

// Associative array operations
if (expected_data.exists(id))             // Check if key exists
    data = expected_data[id];            // Retrieve value
```

#### Common Pitfalls and How to Avoid Them

**1. Using Delays in Functions**
```systemverilog
// ❌ WRONG: Functions cannot have delays
function int calculate_sum(int a, int b);
    #10;  // ERROR: Functions execute in zero time
    return a + b;
endfunction

// ✅ CORRECT: Use task if delays are needed
task calculate_sum_with_delay(int a, int b, output int result);
    #10;  // OK: Tasks can have delays
    result = a + b;
endtask

// ✅ CORRECT: Or use function without delays
function int calculate_sum(int a, int b);
    return a + b;  // OK: No delays
endfunction
```

**2. Forgetting Null Checks**
```systemverilog
// ❌ WRONG: May crash if rhs is null
function void copy(Transaction rhs);
    id = rhs.id;  // ERROR: Null pointer dereference if rhs is null
endfunction

// ✅ CORRECT: Always check for null
function void copy(Transaction rhs);
    if (rhs == null) begin
        $error("Copy failed: null pointer");
        return;
    end
    id = rhs.id;  // Safe: rhs is guaranteed non-null
endfunction
```

**3. Missing `automatic` Keyword**
```systemverilog
// ❌ WRONG: May cause issues with recursion or parallel calls
function bit check_condition(int count);
    if (count > 0) begin
        return check_condition(count - 1);  // May not work correctly
    end
    return 1;
endfunction

// ✅ CORRECT: Use automatic for re-entrant functions
function automatic bit check_condition(int count);
    if (count > 0) begin
        return check_condition(count - 1);  // Works correctly
    end
    return 1;
endfunction
```

**4. Confusing Blocking vs Non-blocking Assignment**
```systemverilog
// ❌ WRONG: Blocking assignment in sequential logic
always @(posedge clk) begin
    a = b;      // Blocking: may cause race conditions
    c = a;      // Uses new value of a
end

// ✅ CORRECT: Non-blocking for sequential logic
always @(posedge clk) begin
    a <= b;     // Non-blocking: all assignments happen simultaneously
    c <= a;     // Uses old value of a
end

// ✅ CORRECT: Blocking for combinational logic
always_comb begin
    a = b;      // Blocking: OK for combinational
    c = a;      // Uses new value immediately
end
```

**5. Incorrect Return Type**
```systemverilog
// ❌ WRONG: Function doesn't return value
function void get_id();
    return id;  // ERROR: void function can't return value
endfunction

// ✅ CORRECT: Declare proper return type
function int get_id();
    return id;  // OK: Returns integer
endfunction
```

**6. Task Called as Function**
```systemverilog
// ❌ WRONG: Trying to use task return value
int result = reset_task();  // ERROR: Tasks don't return values

// ✅ CORRECT: Use output argument
task reset_task(output int status);
    // ... reset logic ...
    status = 1;  // Set output parameter
endtask

// Call it:
int status;
reset_task(status);
```

#### Real-World Testbench Examples

**Example 1: Test Task with Assertions** (from `test_and_gate.sv`)
```systemverilog
task test_basic();
    $display("Test 1: Basic truth table test");
    
    // Test all combinations
    a = 0; b = 0;
    #10;  // Delay for signal propagation
    assert (y == 0) else $error("Test failed: 0 & 0 should be 0, got %b", y);
    
    a = 0; b = 1;
    #10;
    assert (y == 0) else $error("Test failed: 0 & 1 should be 0, got %b", y);
    
    // ... more test cases ...
    
    $display("Test 1 passed!");
endtask
```
**Key Points:**
- Uses delays (`#10`) for signal propagation
- Uses `assert` with `$error()` for verification
- Uses `$display()` for test output
- Organized as separate task for reusability

**Example 2: Helper Task with Clock Synchronization** (from `test_counter.sv`)
```systemverilog
task reset();
    rst_n = 0;
    enable = 0;
    #20;      // Wait for reset to propagate
    rst_n = 1;
    #10;      // Wait after reset release
endtask

task test_increment();
    reset();  // Call helper task
    enable = 1;
    
    for (int i = 0; i < 10; i++) begin
        @(posedge clk);  // Wait for clock edge
        #1;              // Small delay for signal stability
        assert (count == 8'(i)) else 
            $error("Test failed: Expected count=%0d, got %0d", i, count);
        $display("  Count = %0d (PASS)", count);
    end
endtask
```
**Key Points:**
- Helper task (`reset()`) encapsulates common sequence
- Uses `@(posedge clk)` for clock synchronization
- Combines delays and event control
- Uses type casting (`8'(i)`) for bit width matching

**Example 3: Function in Assertion** (from `test_truth_table()`)
```systemverilog
task test_truth_table();
    for (int i = 0; i < 2; i++) begin
        for (int j = 0; j < 2; j++) begin
            a = bit'(i);  // Type casting
            b = bit'(j);
            #10;
            // Function-like expression in assertion
            assert (y == (a & b)) else 
                $error("Test failed: %b & %b should be %b, got %b", 
                       a, b, (a & b), y);
            $display("  %b & %b = %b (PASS)", a, b, y);
        end
    end
endtask
```
**Key Points:**
- Uses nested loops for exhaustive testing
- Type casting with `bit'(i)`
- Expression evaluation in assertion
- Multiple format specifiers in `$error()`

#### Performance Considerations

**1. Function vs Task Performance**
- **Functions**: Execute in zero time, no simulation overhead
- **Tasks**: Consume simulation time, have scheduling overhead
- **Recommendation**: Use functions for calculations, tasks only when timing is needed

**2. Automatic vs Static**
```systemverilog
// Automatic: Each call has own stack (re-entrant, slower)
function automatic int recursive(int n);
    if (n <= 1) return 1;
    return n * recursive(n - 1);
endfunction

// Static: Shared storage (faster, but not re-entrant)
function int simple_calc(int a, int b);
    return a + b;  // No recursion needed, static is fine
endfunction
```

**3. Array Method Performance**
- `push_back()` / `pop_front()`: O(1) for queues
- `size()`: O(1) for queues and arrays
- `exists()`: O(1) average for associative arrays
- `foreach`: O(n) where n is number of elements

#### Troubleshooting Guide

**Problem: "Function cannot contain timing control statements"**
- **Cause**: Trying to use `#`, `@`, or `wait` in a function
- **Solution**: Convert to task or remove timing control

**Problem: "Null pointer dereference"**
- **Cause**: Accessing object fields without null check
- **Solution**: Always check `if (obj == null)` before accessing

**Problem: "Task called as function"**
- **Cause**: Trying to use task return value: `int x = task_name();`
- **Solution**: Use output parameter: `task_name(output int x);`

**Problem: "Function doesn't return value"**
- **Cause**: Function declared with return type but no return statement
- **Solution**: Add `return` statement or change to `void` function

**Problem: "Incorrect format specifier"**
- **Cause**: Using wrong format in `$display()` or `$sformatf()`
- **Solution**: Use `%0d` for decimal, `%0h` for hex, `%0b` for binary, `%0s` for string

#### Summary

- **Functions**: Zero-time operations that return values; use for calculations
- **Tasks**: Time-consuming operations; use for test sequences
- **Class Methods**: Functions within classes; enable object-oriented programming
- **Built-in Functions**: `$display()`, `$sformatf()`, `$finish()`, `$error()`
- **Array Methods**: `push_back()`, `pop_front()`, `size()`, `exists()`
- **Best Practices**: Null checks, method overriding, task organization
- **Common Pitfalls**: Delays in functions, missing null checks, wrong assignment types
- **Performance**: Functions are faster; use tasks only when timing is needed

**Quick Decision Checklist:**
1. Need to return a value? → Use **function**
2. Need delays or timing? → Use **task**
3. Need to check something? → Use **function** with return type `bit`
4. Need to generate stimulus? → Use **task**
5. Need to format string? → Use **function** with `$sformatf()`

Understanding these concepts is essential for writing effective SystemVerilog testbenches and UVM verification environments.

## Learning Outcomes

By the end of this module, you should be able to:

- Understand SystemVerilog OOP concepts
- Create and use SystemVerilog classes
- Design interfaces with modports
- Organize code using packages
- Use appropriate data structures for verification
- Implement error handling and logging
- Write basic SystemVerilog testbenches
- Understand UVM class structure basics

## Exercises

1. **Transaction Class Design**
   - Create a base transaction class
   - Implement copy, compare, and string conversion methods
   - Create derived transaction classes
   - Test inheritance and polymorphism

2. **Interface Design**
   - Design an interface for a simple bus protocol
   - Create modports for master and slave
   - Implement a clocking block
   - Connect interface to a module

3. **Package Organization**
   - Create a verification package
   - Define common types and functions
   - Import and use package in testbench
   - Resolve name conflicts

4. **Data Structure Usage**
   - Use dynamic arrays for transaction storage
   - Implement a queue-based scoreboard
   - Use associative arrays for coverage tracking
   - Create structures for configuration

5. **Error Handling**
   - Implement UVM reporting in testbench
   - Add assertions to verify design behavior
   - Handle exceptions gracefully
   - Create structured logging

## Execution Status

✅ **Module 1 has been successfully executed and verified.**

**Verification Date:** 2026-01-23  
**Status:** All examples and tests passing  
**Verilator Version:** 5.045  
**Test Results:**
- ✅ 5 SystemVerilog examples executed successfully
- ✅ 7 SystemVerilog test cases passed
- ✅ 1 UVM test compiled and passed

**Note:** UVM compilation with Verilator takes approximately 20-30 minutes due to extensive template instantiations, but all tests execute successfully.

**Execution Logs:** Full execution logs are available in `module1/module1.log` and individual example logs in each example directory (`compile.log`, `run.log`).

## Assessment

- [x] Can create SystemVerilog classes with inheritance
- [x] Can design and use interfaces with modports
- [x] Can organize code using packages
- [x] Can use appropriate data structures
- [x] Can implement error handling and logging
- [x] Can write basic SystemVerilog testbenches
- [x] Understands UVM class structure basics

## Next Steps

After completing this module, proceed to [Module 2: SystemVerilog Testbench Fundamentals](MODULE2.md) to learn how to build testbenches.

## Quick Reference: Functions and Tasks Cheat Sheet

### Function vs Task Decision Matrix

| Scenario | Use Function | Use Task | Notes |
|----------|--------------|----------|-------|
| Calculate checksum | ✅ | ❌ | Zero-time operation |
| Validate address | ✅ | ❌ | Returns pass/fail |
| Format string | ✅ | ❌ | Returns formatted string |
| Compare objects | ✅ | ❌ | Returns match/no-match |
| Generate test stimulus | ❌ | ✅ | Needs delays |
| Reset sequence | ❌ | ✅ | Needs timing control |
| Clock generation | ❌ | ✅ | Needs `forever` loop |
| Wait for condition | ❌ | ✅ | Needs `@` or `wait` |
| Protocol transaction | ❌ | ✅ | Needs multiple clock cycles |

### Function Template

```systemverilog
// Basic function
function <return_type> <name>(<parameters>);
    // Local variables
    <type> local_var;
    
    // Function body
    // ... calculations ...
    
    // Return value
    return <value>;
endfunction

// Automatic (re-entrant) function
function automatic <return_type> <name>(<parameters>);
    // ... function body ...
endfunction

// Void function (no return)
function void <name>(<parameters>);
    // ... function body ...
    // No return statement
endfunction
```

### Task Template

```systemverilog
// Basic task
task <name>(<parameters>);
    // Local variables
    <type> local_var;
    
    // Task body
    // Can include delays: #10, @(posedge clk), wait(condition)
    #10;
    @(posedge clk);
    
    // No return statement
endtask

// Task with output parameters
task <name>(input <type> in_param, output <type> out_param);
    // ... task body ...
    out_param = <value>;  // Set output parameter
endtask

// Automatic (re-entrant) task
task automatic <name>(<parameters>);
    // ... task body ...
endtask
```

### Common Function Patterns

**1. Constructor**
```systemverilog
function new(string name = "Default");
    // Initialize object
endfunction
```

**2. Copy Method**
```systemverilog
function void copy(Transaction rhs);
    if (rhs == null) return;
    // Copy fields
endfunction
```

**3. Compare Method**
```systemverilog
function bit compare(Transaction rhs);
    if (rhs == null) return 0;
    return (field1 == rhs.field1) && (field2 == rhs.field2);
endfunction
```

**4. String Conversion**
```systemverilog
function string convert2string();
    return $sformatf("Object(field1=%0d, field2=0x%0h)", field1, field2);
endfunction
```

**5. Accessor Methods**
```systemverilog
function <type> get_field();
    return field;
endfunction

function void set_field(<type> value);
    field = value;
endfunction
```

### Common Task Patterns

**1. Test Task**
```systemverilog
task test_feature();
    $display("Testing feature...");
    // Setup
    #10;
    // Stimulus
    // Check
    assert (condition) else $error("Test failed");
    $display("Test passed!");
endtask
```

**2. Reset Task**
```systemverilog
task reset();
    rst_n = 0;
    #20;
    rst_n = 1;
    #10;
endtask
```

**3. Clock Generation**
```systemverilog
initial begin
    clk = 0;
    forever #5 clk = ~clk;
end
```

**4. Wait for Condition**
```systemverilog
task wait_for_ready();
    while (!ready) @(posedge clk);
endtask
```

### Built-in Functions Quick Reference

| Function | Syntax | Purpose |
|----------|--------|---------|
| `$display()` | `$display("format", args);` | Print formatted text |
| `$sformatf()` | `string s = $sformatf("format", args);` | Format string |
| `$finish` | `$finish;` | Terminate simulation |
| `$error()` | `$error("msg", args);` | Report error |
| `$warning()` | `$warning("msg", args);` | Report warning |
| `$info()` | `$info("msg", args);` | Report info |
| `$time` | `time t = $time;` | Get simulation time |
| `$urandom()` | `int r = $urandom();` | Random unsigned int |
| `$urandom_range()` | `int r = $urandom_range(min, max);` | Random in range |

### Format Specifiers

| Specifier | Meaning | Example Output |
|-----------|---------|----------------|
| `%0d` | Decimal | `42` |
| `%0h` or `%0x` | Hexadecimal | `2a` |
| `%0b` | Binary | `101010` |
| `%0s` | String | `hello` |
| `%0t` | Time | `1000` |
| `%0f` | Real | `3.14` |
| `%0e` | Scientific | `1.23e+02` |

### Array Methods Quick Reference

**Queue Methods:**
- `queue.push_back(item)` - Add to end
- `item = queue.pop_front()` - Remove from front
- `int size = queue.size()` - Get size
- `queue.delete()` - Clear queue

**Associative Array Methods:**
- `array[key] = value` - Store value
- `value = array[key]` - Retrieve value
- `bit exists = array.exists(key)` - Check if key exists
- `array.delete(key)` - Remove key
- `array.delete()` - Clear all

**Dynamic Array Methods:**
- `array = new[size]` - Allocate
- `array.size()` - Get size
- `array.delete()` - Clear

### Common Pitfalls Checklist

- [ ] ❌ Using delays (`#`, `@`, `wait`) in functions
- [ ] ❌ Forgetting null checks before accessing object fields
- [ ] ❌ Missing `automatic` keyword for recursive functions
- [ ] ❌ Using blocking assignment (`=`) in sequential logic
- [ ] ❌ Trying to return value from `void` function
- [ ] ❌ Trying to use task return value
- [ ] ❌ Wrong format specifier in `$display()` or `$sformatf()`
- [ ] ❌ Not checking `exists()` before accessing associative array

### Best Practices Checklist

- [ ] ✅ Use functions for calculations and data transformations
- [ ] ✅ Use tasks for test sequences and stimulus generation
- [ ] ✅ Always check for null before accessing object fields
- [ ] ✅ Use `automatic` keyword for re-entrant functions/tasks
- [ ] ✅ Use non-blocking assignment (`<=`) in sequential logic
- [ ] ✅ Use blocking assignment (`=`) in combinational logic
- [ ] ✅ Organize tests as separate tasks
- [ ] ✅ Use helper tasks for common sequences (reset, init)
- [ ] ✅ Use descriptive function/task names
- [ ] ✅ Document function/task purpose with comments

### Code Location Reference

| Concept | Example File | Key Functions/Tasks |
|---------|--------------|---------------------|
| Class Methods | `examples/sv_basics/transaction.sv` | `new()`, `copy()`, `compare()`, `convert2string()` |
| Package Functions | `examples/packages/package_example.sv` | `is_valid_address()`, `calculate_checksum()` |
| Queue Methods | `examples/data_structures/data_structures_example.sv` | `push()`, `pop()`, `size()` |
| Test Tasks | `tests/sv_tests/test_and_gate.sv` | `test_basic()`, `test_truth_table()` |
| Helper Tasks | `tests/sv_tests/test_counter.sv` | `reset()`, `test_increment()` |
| Retry Logic | `examples/error_handling/error_handling_example.sv` | `retry_task()` |

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **SystemVerilog for Verification**: Chris Spear and Greg Tumbush
- **Verification Academy**: https://verificationacademy.com/
