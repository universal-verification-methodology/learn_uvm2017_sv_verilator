# Module 8: UVM Miscellaneous Utilities

**Duration**: 2 weeks  
**Complexity**: Intermediate-Advanced  
**Goal**: Master UVM utility classes

## Overview

This module covers UVM utility classes including Command Line Processor, comparators, recorders, pools, queues, and string/math/random utilities. These utilities provide essential functionality for building robust and flexible UVM testbenches.

### Examples and Code Structure

This module includes comprehensive examples and testbenches located in the `module8/` directory:

```
module8/
├── examples/              # SystemVerilog UVM examples
│   ├── clp/              # Command Line Processor examples
│   ├── comparators/      # Comparator examples
│   ├── recorders/        # Recorder examples
│   ├── pools/           # Pool examples
│   ├── queues/           # Queue examples
│   ├── string_utils/     # String utility examples
│   ├── math_utils/       # Math utility examples
│   ├── random_utils/     # Random utility examples
│   └── integration/      # Integration example
├── dut/                   # Verilog/SystemVerilog Design Under Test
│   └── dma/              # DMA modules for testing
│       └── simple_dma.v
├── tests/                 # Testbenches
│   └── uvm_tests/        # SystemVerilog UVM testbenches
│       └── test_utilities_uvm.sv
└── README.md             # Module 8 documentation
```

### Quick Start

**Run all examples using the orchestrator script:**
```bash
# Run all UVM examples
./scripts/module8.sh

# Run specific examples
./scripts/module8.sh --clp
./scripts/module8.sh --comparators
./scripts/module8.sh --recorders
./scripts/module8.sh --pools
./scripts/module8.sh --queues
./scripts/module8.sh --string-utils
./scripts/module8.sh --math-utils
./scripts/module8.sh --random-utils
./scripts/module8.sh --integration

# Run tests
./scripts/module8.sh --uvm-tests

# Run everything
./scripts/module8.sh --all-examples --uvm-tests
```

**Run examples individually:**
```bash
# CLP example
cd module8/examples/clp
make SIM=verilator TEST=clp_top

# Comparators example
cd module8/examples/comparators
make SIM=verilator TEST=comparators_top

# UVM testbench
cd module8/tests/uvm_tests
make SIM=verilator TEST=test_utilities_uvm
```

## Topics Covered

### 1. Command Line Processor (CLP)

- **CLP Basics**
  - Command-line argument parsing
  - Plusarg handling
  - Test configuration from command line
  - CLP usage patterns

- **CLP Features**
  - `uvm_cmdline_proc.get_arg_value()` for parsing command-line arguments
  - Configuration via plusargs
  - Test mode and parameter configuration
  - Dynamic test configuration

#### Example 8.1: Command Line Processor (`module8/examples/clp/clp.sv`)

**What it demonstrates:**
- **CLPTransaction**: Transaction with data and address fields
- **CLPSequence**: Sequence using CLP configuration for number of transactions
- **CLPDriver**: Driver that processes transactions
- **CLPAgent**: Agent with driver, monitor, and sequencer
- **CLPEnv**: Environment that uses CLP for configuration
- **CLPTest**: Test that parses command-line arguments

**CLP Methods and Patterns:**

1. **Command Line Argument Parsing:**
   ```systemverilog
   function void build_phase(uvm_phase phase);
       super.build_phase(phase);
       
       // Get string argument (with default)
       void'(uvm_cmdline_proc.get_arg_value("+test_mode", test_mode));
       // Method: static function bit get_arg_value(string plusarg, ref string value)
       // Parameters:
       //   - "+test_mode": Plusarg name (must start with +)
       //   - test_mode: Variable to store retrieved value (passed by reference)
       // Return: 1 = found, 0 = not found
       // Purpose: Parse command-line plusarg and store value
       // Behavior: Searches command line for +test_mode=<value>
       // Usage: Call in build_phase() to configure components
       // Note: void'() suppresses return value warning
       
       // Get integer argument (requires string conversion)
       if (uvm_cmdline_proc.get_arg_value("+debug_level", str_val)) begin
           debug_level = sv_atoi(str_val);
           // Function: sv_atoi(string str) -> int
           // Purpose: Convert string to integer (Verilator-compatible)
           // Behavior: Parses string and returns integer value
           // Usage: Convert CLP string values to integers
       end
       
       // Get integer with conversion
       if (uvm_cmdline_proc.get_arg_value("+num_transactions", str_val)) begin
           num_transactions = sv_atoi(str_val);
       end
       
       // Get seed value
       if (uvm_cmdline_proc.get_arg_value("+seed", str_val)) begin
           seed = sv_atoi(str_val);
       end
   endfunction
   ```
   - **Method Signature**: `static function bit get_arg_value(string plusarg, ref string value);`
   - **Return Type**: `bit` (1 = found, 0 = not found)
   - **Purpose**: Parse command-line plusargs and retrieve values
   - **Usage**: Call in `build_phase()` to configure components
   - **Plusarg Format**: `+name=value` (e.g., `+test_mode=stress`)
   - **String Conversion**: Use `sv_atoi()` or `$atoi()` to convert strings to integers
   - **Key**: Always check return value, provide defaults if not found

2. **CLP Configuration Pattern:**
   ```systemverilog
   // In environment build_phase
   void'(uvm_cmdline_proc.get_arg_value("+test_mode", test_mode));
   // Default: test_mode = "normal" (set in declaration)
   
   if (uvm_cmdline_proc.get_arg_value("+num_transactions", str_val)) begin
       num_transactions = sv_atoi(str_val);
   end
   // Default: num_transactions = 10 (set in declaration)
   
   // Pass to sequence
   seq.num_transactions = num_transactions;
   ```
   - **Pattern**: Parse in environment, pass to components
   - **Key**: Set defaults in variable declarations

3. **Sequence Using CLP Configuration:**
   ```systemverilog
   class CLPSequence extends uvm_sequence #(CLPTransaction);
       int num_transactions = 10;  // Default value
       
       task body();
           for (int i = 0; i < num_transactions; i++) begin
               CLPTransaction txn;
               txn = CLPTransaction::type_id::create("txn");
               void'(txn.randomize());
               `uvm_send(txn)  // Macro: sends transaction to sequencer
           end
       end
   endclass
   ```
   - **Purpose**: Use CLP-configured value for number of transactions
   - **Key**: Sequence receives configuration from environment

**Key Concepts:**
- Command-line argument parsing using `uvm_cmdline_proc`
- Plusarg handling (`+test_mode`, `+debug_level`, etc.)
- Test configuration from command line
- CLP usage patterns
- **CLP Method**: `get_arg_value(plusarg, value)` → bit (found/not found)
- **Plusarg Format**: `+name=value` (e.g., `+test_mode=stress`)
- **String Conversion**: Use `sv_atoi()` or `$atoi()` for integer conversion
- **Configuration Flow**: Parse in environment → Pass to components

**Execution:**
```bash
# Using orchestrator script (recommended)
./scripts/module8.sh --clp

# Or with command-line arguments
cd module8/examples/clp
make SIM=verilator TEST=clp_top EXTRA_ARGS="+test_mode=stress +num_transactions=20"
```

**Verified Output:**
- Command-line argument parsing
- Plusarg handling
- Test configuration from command line
- Dynamic test configuration

### 2. Comparators

- **Built-in Comparators**
  - In-order comparator
  - Out-of-order comparator
  - Algorithmic comparator
  - Custom comparators

- **Comparator Features**
  - Transaction comparison
  - Match/mismatch tracking
  - Statistics and reporting
  - Address-based matching

#### Example 8.2: Comparators (`module8/examples/comparators/comparators.sv`)

**What it demonstrates:**
- **ComparatorTransaction**: Transaction with data, address, and timestamp
- **InOrderComparator**: Sequential transaction comparison
- **OutOfOrderComparator**: Address-based transaction matching
- **ComparatorTest**: Test demonstrating both comparator types

**Comparator Methods and Patterns:**

1. **Analysis Imp Declaration:**
   ```systemverilog
   `uvm_analysis_imp_decl(_expected)
   `uvm_analysis_imp_decl(_actual)
   // Macro: `uvm_analysis_imp_decl(suffix)
   // Purpose: Declare typed analysis implementation ports
   // Behavior: Creates uvm_analysis_imp_expected and uvm_analysis_imp_actual types
   // Usage: Allows multiple analysis ports with different write() methods
   ```
   - **Purpose**: Create multiple typed analysis implementations
   - **Key**: Allows separate `write_expected()` and `write_actual()` methods

2. **In-Order Comparator:**
   ```systemverilog
   class InOrderComparator extends uvm_component;
       uvm_analysis_imp_expected #(ComparatorTransaction, InOrderComparator) expected_imp;
       uvm_analysis_imp_actual #(ComparatorTransaction, InOrderComparator) actual_imp;
       ComparatorTransaction expected_queue[$];
       ComparatorTransaction actual_queue[$];
       
       function void write_expected(ComparatorTransaction txn);
           expected_queue.push_back(txn);
           // Method: push_back(T item) -> void
           // Purpose: Add transaction to end of queue
           // Behavior: Appends transaction to queue
           // Usage: Store expected transactions
           compare_transactions();
       endfunction
       
       function void write_actual(ComparatorTransaction txn);
           actual_queue.push_back(txn);
           compare_transactions();
       endfunction
       
       function void compare_transactions();
           while (expected_queue.size() > 0 && actual_queue.size() > 0) begin
               // Method: size() -> int
               // Purpose: Get queue size
               // Return: Number of elements in queue
               // Usage: Check if queues have transactions
               
               ComparatorTransaction exp_txn = expected_queue.pop_front();
               // Method: pop_front() -> T
               // Purpose: Remove and return first element
               // Behavior: Removes first element, returns it
               // Usage: FIFO queue operations
               
               ComparatorTransaction act_txn = actual_queue.pop_front();
               
               if (exp_txn.compare(act_txn)) begin
                   // Method: compare(rhs) -> bit
                   // Purpose: Compare two transactions
                   // Return: 1 = match, 0 = mismatch
                   match_count++;
               end else begin
                   mismatches++;
               end
           end
       endfunction
   endclass
   ```
   - **Method Signatures**: 
     - `function void write_expected(T txn);` - Write expected transaction
     - `function void write_actual(T txn);` - Write actual transaction
     - `function void compare_transactions();` - Compare queued transactions
   - **Queue Operations**: 
     - `push_back(item)` - Add to end
     - `pop_front()` - Remove from front
     - `size()` - Get queue size
   - **Purpose**: Sequential transaction comparison (FIFO order)
   - **Pattern**: Queue both streams, compare when both have transactions

3. **Out-of-Order Comparator:**
   ```systemverilog
   class OutOfOrderComparator extends uvm_component;
       ComparatorTransaction expected_map[logic [15:0]];
       ComparatorTransaction actual_map[logic [15:0]];
       // Associative array indexed by address
       
       function void write_expected(ComparatorTransaction txn);
           expected_map[txn.address] = txn;
           // Associative array assignment
           // Purpose: Store transaction by address
           // Behavior: Indexed by transaction address
           compare_transactions();
       endfunction
       
       function void write_actual(ComparatorTransaction txn);
           actual_map[txn.address] = txn;
           compare_transactions();
       endfunction
       
       function void compare_transactions();
           logic [15:0] addr;
           
           foreach (expected_map[addr]) begin
               // Statement: foreach (array[index]) - iterate over array
               // Purpose: Iterate over all indices in associative array
               // Behavior: Loops through all existing indices
               // Usage: Process all stored transactions
               
               if (actual_map.exists(addr)) begin
                   // Method: exists(key) -> bit
                   // Purpose: Check if key exists in associative array
                   // Return: 1 = exists, 0 = not found
                   // Usage: Check if both maps have same address
                   
                   ComparatorTransaction exp_txn = expected_map[addr];
                   ComparatorTransaction act_txn = actual_map[addr];
                   
                   if (exp_txn.compare(act_txn)) begin
                       match_count++;
                   end else begin
                       mismatches++;
                   end
                   
                   expected_map.delete(addr);
                   // Method: delete(key) -> void
                   // Purpose: Remove key-value pair from associative array
                   // Behavior: Removes entry at specified key
                   // Usage: Clean up matched transactions
                   
                   actual_map.delete(addr);
               end
           end
       endfunction
   endclass
   ```
   - **Method Signatures**: 
     - `function void write_expected(T txn);` - Write expected transaction
     - `function void write_actual(T txn);` - Write actual transaction
     - `function void compare_transactions();` - Compare by address
   - **Associative Array Operations**: 
     - `map[key] = value` - Store by key
     - `exists(key)` - Check if key exists
     - `delete(key)` - Remove key-value pair
     - `foreach (map[index])` - Iterate over all keys
   - **Purpose**: Address-based transaction matching (out-of-order)
   - **Pattern**: Store by address, match when both have same address

**Key Concepts:**
- In-order transaction comparison
- Out-of-order transaction comparison using address matching
- Transaction matching algorithms
- Comparator statistics and reporting
- **Analysis Imp Declaration**: `uvm_analysis_imp_decl(suffix)` for multiple ports
- **Queue Operations**: `push_back()`, `pop_front()`, `size()`
- **Associative Array Operations**: `exists()`, `delete()`, `foreach`
- **Comparison Pattern**: Queue-based (in-order) vs. Map-based (out-of-order)

**Execution:**
```bash
./scripts/module8.sh --comparators
```

**Verified Output:**
- In-order transaction comparison
- Out-of-order transaction comparison
- Match/mismatch tracking
- Comparator statistics

### 3. Recorders

- **Transaction Recording**
  - Transaction recording with timestamps
  - Recorder implementation
  - Recording formats
  - Playback capabilities

#### Example 8.3: Recorders (`module8/examples/recorders/recorders.sv`)

**What it demonstrates:**
- **RecorderTransaction**: Transaction with recording capabilities
- **TransactionRecorder**: Recorder that stores transactions
- **RecorderTest**: Test demonstrating transaction recording

**Recorder Methods and Patterns:**

1. **Transaction Recording (do_record):**
   ```systemverilog
   class RecorderTransaction extends uvm_sequence_item;
       function void do_record(uvm_recorder recorder);
           super.do_record(recorder);
           // Method: super.do_record(recorder) -> void
           // Purpose: Call parent do_record to record base fields
           // Timing: Must be called first
           
           recorder.record_field("data", data, $bits(data), UVM_HEX);
           // Method: record_field(string name, T value, int size, uvm_radix_enum radix) -> void
           // Parameters:
           //   - "data": Field name (string identifier)
           //   - data: Field value (any type)
           //   - $bits(data): Field size in bits
           //   - UVM_HEX: Radix for display (UVM_HEX, UVM_DEC, UVM_BIN, UVM_OCT)
           // Purpose: Record transaction field with specified format
           // Behavior: Stores field in recorder for later playback/analysis
           // Usage: Record all transaction fields
           
           recorder.record_field("address", address, $bits(address), UVM_HEX);
           recorder.record_field("timestamp", timestamp, $bits(timestamp), UVM_DEC);
       endfunction
   endclass
   ```
   - **Method Signature**: `function void do_record(uvm_recorder recorder);`
   - **Purpose**: Record transaction fields for playback/analysis
   - **Radix Types**: UVM_HEX, UVM_DEC, UVM_BIN, UVM_OCT
   - **Key**: Call `super.do_record()` first, then record all fields

2. **Recorder Write Method:**
   ```systemverilog
   function void write(RecorderTransaction txn);
       RecorderTransaction recorded_txn;
       recorded_txn = RecorderTransaction::type_id::create("recorded_txn");
       // Create new transaction for recording
       
       recorded_txn.copy(txn);
       // Method: copy(uvm_object rhs) -> void
       // Purpose: Copy transaction data
       // Behavior: Deep copy of all fields
       // Usage: Store independent copy for recording
       
       recorded_txn.timestamp = $time;
       // Function: $time -> time
       // Purpose: Get current simulation time
       // Return: Current simulation time in time units
       // Usage: Add timestamp to recorded transactions
       
       recorded_transactions.push_back(recorded_txn);
       // Store in queue for playback
       transaction_count++;
   endfunction
   ```
   - **Method Signature**: `function void write(T txn);`
   - **Purpose**: Record transaction with timestamp
   - **Key Methods**: 
     - `copy(rhs)` - Deep copy transaction
     - `$time` - Get simulation time
     - `push_back(item)` - Add to queue

3. **Playback Method:**
   ```systemverilog
   function void playback_transactions();
       `uvm_info("RECORDER", $sformatf("Playing back %0d transactions", 
           recorded_transactions.size()), UVM_LOW)
       // Method: size() -> int
       // Purpose: Get queue size
       // Return: Number of elements
       
       foreach (recorded_transactions[i]) begin
           // Statement: foreach (queue[index]) - iterate over queue
           // Purpose: Iterate over all queue elements
           // Behavior: Loops through all indices
           // Usage: Process all recorded transactions
           
           `uvm_info("RECORDER", $sformatf("Playback #%0d: %s", 
               i, recorded_transactions[i].convert2string()), UVM_MEDIUM)
       end
   endfunction
   ```
   - **Method Signature**: `function void playback_transactions();`
   - **Purpose**: Playback all recorded transactions
   - **Queue Iteration**: Use `foreach (queue[i])` to iterate

**Key Concepts:**
- Transaction recording with timestamps
- Recorder implementation
- Recording formats
- Playback capabilities
- **do_record()**: Record transaction fields with radix
- **record_field()**: Record individual field with format
- **copy()**: Deep copy transaction for recording
- **$time**: Get current simulation time
- **Queue Operations**: `push_back()`, `size()`, `foreach`

**Execution:**
```bash
./scripts/module8.sh --recorders
```

**Verified Output:**
- Transaction recording
- Recorder storage
- Playback functionality
- Recording formats

### 4. Pools

- **Object Pooling**
  - Object pooling to reduce allocation overhead
  - Pool implementation with configurable size
  - Pool usage patterns
  - Memory management

#### Example 8.4: Pools (`module8/examples/pools/pools.sv`)

**What it demonstrates:**
- **PoolTransaction**: Transaction for pool example
- **TransactionPool**: Pool implementation with allocate/free
- **PoolTest**: Test demonstrating object pooling

**Pool Methods and Patterns:**

1. **Pool Initialization:**
   ```systemverilog
   function void initialize_pool();
       PoolTransaction txn;
       for (int i = 0; i < pool_size; i++) begin
           txn = PoolTransaction::type_id::create($sformatf("pool_txn_%0d", i));
           // Function: $sformatf(format, args) -> string
           // Purpose: Format string with variables
           // Usage: Create unique names for pool objects
           
           pool.push_back(txn);
           // Method: push_back(T item) -> void
           // Purpose: Add object to pool queue
           // Behavior: Appends object to end of queue
       end
   endfunction
   ```
   - **Purpose**: Pre-allocate pool objects
   - **Key**: Create objects once, reuse multiple times

2. **Pool Allocation:**
   ```systemverilog
   function PoolTransaction allocate();
       PoolTransaction txn;
       if (pool.size() > 0) begin
           // Method: size() -> int
           // Purpose: Get queue size
           // Return: Number of available objects
           
           txn = pool.pop_front();
           // Method: pop_front() -> T
           // Purpose: Remove and return first object
           // Behavior: Removes first element, returns it
           // Usage: FIFO allocation from pool
           
           allocated_count++;
       end else begin
           // Create new object if pool is empty
           txn = PoolTransaction::type_id::create("new_txn");
           allocated_count++;
       end
       return txn;
   endfunction
   ```
   - **Method Signature**: `function PoolTransaction allocate();`
   - **Purpose**: Allocate object from pool
   - **Behavior**: Returns pooled object if available, creates new if empty
   - **Key**: Reduces allocation overhead by reusing objects

3. **Pool Deallocation:**
   ```systemverilog
   function void free(PoolTransaction txn);
       if (pool.size() < pool_size) begin
           // Check if pool has room
           pool.push_back(txn);
           // Method: push_back(T item) -> void
           // Purpose: Return object to pool
           // Behavior: Appends object to end of queue
           // Usage: Return object for reuse
           
           freed_count++;
       end else begin
           // Pool full, discard object
           freed_count++;
       end
   endfunction
   ```
   - **Method Signature**: `function void free(PoolTransaction txn);`
   - **Purpose**: Return object to pool for reuse
   - **Behavior**: Adds to pool if space available, discards if full
   - **Key**: Reuse objects to reduce memory allocation

**Key Concepts:**
- Object pooling to reduce allocation overhead
- Pool implementation with configurable size
- Pool usage patterns
- Memory management
- **Pool Operations**: `allocate()` - Get object, `free()` - Return object
- **Queue Operations**: `push_back()`, `pop_front()`, `size()`
- **Memory Efficiency**: Reuse objects instead of creating new ones
- **Pool Size**: Configurable maximum pool size

**Execution:**
```bash
./scripts/module8.sh --pools
```

**Verified Output:**
- Object pool creation
- Object allocation
- Object deallocation
- Pool statistics

### 5. Queues

- **Queue Utilities**
  - FIFO queue operations
  - Priority queue implementation
  - Queue management
  - Queue statistics

#### Example 8.5: Queues (`module8/examples/queues/queues.sv`)

**What it demonstrates:**
- **QueueTransaction**: Transaction for queue example
- **QueueManager**: Queue manager with FIFO and priority queues
- **QueueTest**: Test demonstrating queue operations

**Queue Methods and Patterns:**

1. **FIFO Queue Operations:**
   ```systemverilog
   function void enqueue_fifo(QueueTransaction txn);
       fifo_queue.push_back(txn);
       // Method: push_back(T item) -> void
       // Purpose: Add transaction to end of queue
       // Behavior: Appends to end (FIFO order)
       // Usage: Enqueue transactions
       
       enqueue_count++;
       queue_size = fifo_queue.size();
       // Method: size() -> int
       // Purpose: Get queue size
       // Return: Number of elements
   endfunction
   
   function QueueTransaction dequeue_fifo();
       QueueTransaction txn;
       if (fifo_queue.size() > 0) begin
           txn = fifo_queue.pop_front();
           // Method: pop_front() -> T
           // Purpose: Remove and return first element
           // Behavior: Removes from front (FIFO order)
           // Usage: Dequeue transactions
           
           dequeue_count++;
           queue_size = fifo_queue.size();
       end else begin
           `uvm_warning("QUEUE", "Attempted to dequeue from empty FIFO")
       end
       return txn;
   endfunction
   ```
   - **Method Signatures**: 
     - `function void enqueue_fifo(T txn);` - Add to queue
     - `function T dequeue_fifo();` - Remove from queue
   - **FIFO Pattern**: `push_back()` to enqueue, `pop_front()` to dequeue
   - **Key**: First In, First Out order

2. **Priority Queue Operations:**
   ```systemverilog
   function void enqueue_priority(QueueTransaction txn);
       int insert_pos = 0;
       foreach (priority_queue[i]) begin
           // Statement: foreach (queue[index]) - iterate over queue
           // Purpose: Iterate over all queue elements
           // Behavior: Loops through all indices
           
           if (txn.compare(priority_queue[i]) > 0) begin
               // Method: compare(rhs) -> int
               // Purpose: Compare transactions by priority
               // Return: >0 if higher priority, <0 if lower, 0 if equal
               // Usage: Find insertion position
               
               insert_pos = i;
               break;
           end
           insert_pos = i + 1;
       end
       priority_queue.insert(insert_pos, txn);
       // Method: insert(int index, T item) -> void
       // Purpose: Insert element at specified position
       // Parameters:
       //   - insert_pos: Index to insert at
       //   - txn: Transaction to insert
       // Behavior: Inserts element, shifts others
       // Usage: Maintain priority order
       
       enqueue_count++;
       queue_size = priority_queue.size();
   endfunction
   
   function QueueTransaction dequeue_priority();
       QueueTransaction txn;
       if (priority_queue.size() > 0) begin
           txn = priority_queue.pop_front();
           // Remove highest priority (first element)
           dequeue_count++;
           queue_size = priority_queue.size();
       end
       return txn;
   endfunction
   ```
   - **Method Signatures**: 
     - `function void enqueue_priority(T txn);` - Add with priority
     - `function T dequeue_priority();` - Remove highest priority
   - **Priority Pattern**: Insert in priority order, dequeue from front
   - **Key Methods**: 
     - `compare()` - Compare by priority
     - `insert(index, item)` - Insert at position
     - `pop_front()` - Remove highest priority

3. **Transaction Comparison:**
   ```systemverilog
   function int compare(QueueTransaction rhs);
       if (prio > rhs.prio) return 1;   // Higher priority
       if (prio < rhs.prio) return -1;  // Lower priority
       return 0;  // Equal priority
   endfunction
   ```
   - **Method Signature**: `function int compare(T rhs);`
   - **Return**: >0 if higher priority, <0 if lower, 0 if equal
   - **Purpose**: Compare transactions for priority ordering

**Key Concepts:**
- FIFO queue operations
- Priority queue implementation
- Queue management
- Queue statistics
- **FIFO Operations**: `push_back()` to enqueue, `pop_front()` to dequeue
- **Priority Operations**: `insert()` to maintain order, `pop_front()` to dequeue
- **Queue Methods**: `size()`, `push_back()`, `pop_front()`, `insert()`, `foreach`
- **Comparison**: Use `compare()` method for priority ordering

**Execution:**
```bash
./scripts/module8.sh --queues
```

**Verified Output:**
- FIFO queue operations
- Priority queue operations
- Queue management
- Queue statistics

### 6. String Utilities

- **String Manipulation**
  - String conversion (hex, binary)
  - String padding
  - Transaction formatting
  - Field extraction

#### Example 8.6: String Utilities (`module8/examples/string_utils/string_utils.sv`)

**What it demonstrates:**
- **StringUtils**: Utility class for string operations
- **StringTest**: Test demonstrating string utilities

**String Utility Methods and Patterns:**

1. **Integer to Hex Conversion:**
   ```systemverilog
   function string int_to_hex(int value, int width = 8);
       return $sformatf("%0h", value);
       // Function: $sformatf(format, args) -> string
       // Format: "%0h" - hexadecimal, no padding
       // Purpose: Convert integer to hex string
       // Return: Hexadecimal string representation
   endfunction
   ```
   - **Method Signature**: `function string int_to_hex(int value, int width = 8);`
   - **Purpose**: Convert integer to hexadecimal string
   - **Format**: `%0h` - hex without padding, `%02h` - 2-digit hex

2. **Integer to Binary Conversion:**
   ```systemverilog
   function string int_to_bin(int value, int width = 8);
       return $sformatf("%0b", value);
       // Format: "%0b" - binary, no padding
       // Purpose: Convert integer to binary string
       // Return: Binary string representation
   endfunction
   ```
   - **Method Signature**: `function string int_to_bin(int value, int width = 8);`
   - **Purpose**: Convert integer to binary string
   - **Format**: `%0b` - binary without padding

3. **String Padding:**
   ```systemverilog
   function string pad_string(string str, int width, string pad_char = " ");
       string result = str;
       while (result.len() < width) begin
           // Method: len() -> int
           // Purpose: Get string length
           // Return: Number of characters
           // Usage: Check current length
           
           result = {pad_char, result};
           // Operator: {str1, str2} - string concatenation
           // Purpose: Concatenate strings
           // Behavior: Combines strings in order
           // Usage: Prepend padding character
       end
       return result;
   endfunction
   ```
   - **Method Signature**: `function string pad_string(string str, int width, string pad_char = " ");`
   - **Purpose**: Pad string to specified width
   - **String Methods**: 
     - `len()` - Get string length
     - `{str1, str2}` - String concatenation
   - **Pattern**: Prepend padding character until desired width

4. **Transaction Formatting:**
   ```systemverilog
   function string format_transaction(string name, logic [7:0] data, logic [15:0] addr);
       return $sformatf("%s: data=0x%02h, addr=0x%04h", name, data, addr);
       // Format: "%s" - string, "%02h" - 2-digit hex, "%04h" - 4-digit hex
       // Purpose: Format transaction as string
       // Return: Formatted transaction string
   endfunction
   ```
   - **Method Signature**: `function string format_transaction(string name, logic [7:0] data, logic [15:0] addr);`
   - **Purpose**: Format transaction fields as string
   - **Format Specifiers**: `%s` (string), `%02h` (2-digit hex), `%04h` (4-digit hex)

5. **Field Extraction:**
   ```systemverilog
   function string extract_field(string formatted_str, string field_name);
       int pos = find_substring(formatted_str, field_name);
       // Method: find_substring(str, substr) -> int
       // Purpose: Find substring position
       // Return: Index if found, -1 if not found
       
       if (pos >= 0) begin
           // Find "=" after field name
           for (int i = pos + field_name.len(); i < formatted_str.len(); i++) begin
               if (formatted_str.getc(i) == eq_char) begin
                   // Method: getc(int index) -> byte
                   // Purpose: Get character at index
                   // Return: Character at specified position
                   // Usage: Access individual characters
                   
                   eq_pos = i;
                   break;
               end
           end
           // Extract value between "=" and "," or end
           return formatted_str.substr(start, end_pos - 1);
           // Method: substr(int start, int end) -> string
           // Purpose: Extract substring
           // Return: Substring from start to end (inclusive)
           // Usage: Extract field value
       end
       return "";
   endfunction
   ```
   - **Method Signature**: `function string extract_field(string formatted_str, string field_name);`
   - **Purpose**: Extract field value from formatted string
   - **String Methods**: 
     - `find_substring(str, substr)` - Find substring
     - `getc(index)` - Get character at index
     - `substr(start, end)` - Extract substring
     - `len()` - Get string length

**Key Concepts:**
- String conversion (hex, binary)
- String padding
- Transaction formatting
- Field extraction
- **String Methods**: `len()`, `getc()`, `substr()`, `find_substring()`
- **String Concatenation**: `{str1, str2}` operator
- **Format Specifiers**: `%s` (string), `%h` (hex), `%b` (binary), `%d` (decimal)
- **String Manipulation**: Padding, extraction, formatting

**Execution:**
```bash
./scripts/module8.sh --string-utils
```

**Verified Output:**
- String conversion operations
- String padding
- Transaction formatting
- Field extraction

### 7. Math Utilities

- **Mathematical Operations**
  - Average calculation
  - Min/max operations
  - Standard deviation calculation
  - Value clamping

#### Example 8.7: Math Utilities (`module8/examples/math_utils/math_utils.sv`)

**What it demonstrates:**
- **MathUtils**: Utility class for mathematical operations
- **MathTest**: Test demonstrating math utilities

**Math Utility Methods and Patterns:**

1. **Average Calculation:**
   ```systemverilog
   function real calculate_average(int values[]);
       int sum = 0;
       foreach (values[i]) begin
           // Statement: foreach (array[index]) - iterate over array
           // Purpose: Iterate over all array elements
           // Behavior: Loops through all indices
           // Usage: Process all array elements
           
           sum += values[i];
           // Operator: += - addition assignment
           // Purpose: Add to sum
           // Behavior: sum = sum + values[i]
       end
       return sum / real'(values.size());
       // Cast: real'(int_value) - type cast
       // Purpose: Convert integer to real for division
       // Behavior: Ensures real division (not integer division)
       // Usage: Calculate average with decimal precision
   endfunction
   ```
   - **Method Signature**: `function real calculate_average(int values[]);`
   - **Return Type**: `real` (floating point)
   - **Purpose**: Calculate average of array values
   - **Key**: Use `real'()` cast for floating-point division

2. **Maximum Calculation:**
   ```systemverilog
   function int calculate_max(int values[]);
       int max_val = values[0];
       foreach (values[i]) begin
           if (values[i] > max_val) begin
               max_val = values[i];
           end
       end
       return max_val;
   endfunction
   ```
   - **Method Signature**: `function int calculate_max(int values[]);`
   - **Purpose**: Find maximum value in array
   - **Pattern**: Initialize with first element, compare with all

3. **Minimum Calculation:**
   ```systemverilog
   function int calculate_min(int values[]);
       int min_val = values[0];
       foreach (values[i]) begin
           if (values[i] < min_val) begin
               min_val = values[i];
           end
       end
       return min_val;
   endfunction
   ```
   - **Method Signature**: `function int calculate_min(int values[]);`
   - **Purpose**: Find minimum value in array
   - **Pattern**: Initialize with first element, compare with all

4. **Standard Deviation Calculation:**
   ```systemverilog
   function real calculate_std_dev(int values[]);
       real avg = calculate_average(values);
       real variance = 0;
       foreach (values[i]) begin
           real diff = values[i] - avg;
           variance += diff * diff;
           // Calculate sum of squared differences
       end
       variance = variance / real'(values.size());
       // Calculate average variance
       
       return $sqrt(variance);
       // Function: $sqrt(real value) -> real
       // Purpose: Calculate square root
       // Return: Square root of value
       // Usage: Calculate standard deviation
   endfunction
   ```
   - **Method Signature**: `function real calculate_std_dev(int values[]);`
   - **Purpose**: Calculate standard deviation
   - **Formula**: sqrt(sum((x - mean)^2) / n)
   - **Key Functions**: `$sqrt()` for square root

5. **Value Clamping:**
   ```systemverilog
   function int clamp(int value, int min_val, int max_val);
       if (value < min_val) return min_val;
       if (value > max_val) return max_val;
       return value;
   endfunction
   ```
   - **Method Signature**: `function int clamp(int value, int min_val, int max_val);`
   - **Purpose**: Clamp value to range [min_val, max_val]
   - **Behavior**: Returns value if in range, min if too low, max if too high

**Key Concepts:**
- Average calculation
- Min/max operations
- Standard deviation calculation
- Value clamping
- **Array Operations**: `foreach`, `size()`, array indexing
- **Type Casting**: `real'(int)` for floating-point operations
- **Math Functions**: `$sqrt()` for square root
- **Statistical Functions**: Average, min, max, standard deviation

**Execution:**
```bash
./scripts/module8.sh --math-utils
```

**Verified Output:**
- Average calculation
- Min/max operations
- Standard deviation calculation
- Value clamping

### 8. Random Utilities

- **Random Number Generation**
  - Random range generation
  - Random bit vector generation
  - Weighted random selection
  - Random delay generation

#### Example 8.8: Random Utilities (`module8/examples/random_utils/random_utils.sv`)

**What it demonstrates:**
- **RandomUtils**: Utility class for random operations
- **RandomTest**: Test demonstrating random utilities

**Random Utility Methods and Patterns:**

1. **Random Range Generation:**
   ```systemverilog
   function int random_range(int min_val, int max_val);
       return $urandom_range(max_val, min_val);
       // Function: $urandom_range(max, min) -> int
       // Purpose: Generate random integer in range [min, max]
       // Parameters:
       //   - max_val: Maximum value (inclusive)
       //   - min_val: Minimum value (inclusive)
       // Return: Random integer in specified range
       // Usage: Generate bounded random values
       // Note: Parameters are max, min (order matters)
   endfunction
   ```
   - **Method Signature**: `function int random_range(int min_val, int max_val);`
   - **Purpose**: Generate random integer in range
   - **Built-in Function**: `$urandom_range(max, min)` - random range
   - **Key**: Parameters are max, min (order matters)

2. **Random Bit Vector Generation:**
   ```systemverilog
   function logic [31:0] random_bits(int width = 32);
       return $urandom();
       // Function: $urandom() -> bit [31:0]
       // Purpose: Generate random 32-bit value
       // Return: Random 32-bit unsigned integer
       // Usage: Generate random bit vectors
   endfunction
   ```
   - **Method Signature**: `function logic [31:0] random_bits(int width = 32);`
   - **Purpose**: Generate random bit vector
   - **Built-in Function**: `$urandom()` - random 32-bit value

3. **Weighted Random Selection:**
   ```systemverilog
   function int weighted_random(int weights[]);
       int total_weight = 0;
       int random_val;
       int cumulative = 0;
       
       foreach (weights[i]) begin
           // Calculate total weight
           total_weight += weights[i];
       end
       
       random_val = $urandom_range(total_weight - 1, 0);
       // Generate random value in [0, total_weight-1]
       
       foreach (weights[i]) begin
           cumulative += weights[i];
           if (random_val < cumulative) begin
               return i;  // Return index when cumulative exceeds random
           end
       end
       return weights.size() - 1;  // Fallback
   endfunction
   ```
   - **Method Signature**: `function int weighted_random(int weights[]);`
   - **Purpose**: Select index based on weights (probability distribution)
   - **Algorithm**: 
     1. Calculate total weight
     2. Generate random value in [0, total_weight-1]
     3. Find index where cumulative weight exceeds random value
   - **Usage**: Probability-based selection

4. **Random Delay Generation:**
   ```systemverilog
   function int random_delay(int min_delay, int max_delay);
       return $urandom_range(max_delay, min_delay);
       // Generate random delay in range
   endfunction
   ```
   - **Method Signature**: `function int random_delay(int min_delay, int max_delay);`
   - **Purpose**: Generate random delay value
   - **Usage**: Variable timing delays

5. **Constrained Random Transactions:**
   ```systemverilog
   class RandomTransaction extends uvm_sequence_item;
       rand logic [7:0] data;
       rand logic [15:0] address;
       rand int delay;
       
       constraint valid_data {
           data inside {[8'h00:8'hFF]};
           // Constraint: data must be in range [0x00, 0xFF]
       }
       
       constraint valid_address {
           address inside {[16'h0000:16'hFFFF]};
           // Constraint: address must be in range [0x0000, 0xFFFF]
       }
       
       constraint valid_delay {
           delay inside {[1:100]};
           // Constraint: delay must be in range [1, 100]
       }
   endclass
   ```
   - **Purpose**: Constrain random values to valid ranges
   - **Constraint Syntax**: `field inside {[min:max]};`
   - **Usage**: Ensure random values are valid

**Key Concepts:**
- Random range generation
- Random bit vector generation
- Weighted random selection
- Constrained random transactions
- **Random Functions**: `$urandom()` - 32-bit random, `$urandom_range(max, min)` - range
- **Weighted Random**: Probability-based selection using cumulative weights
- **Constraints**: `inside {[min:max]}` for value ranges
- **Random Patterns**: Range generation, bit vectors, weighted selection

**Execution:**
```bash
./scripts/module8.sh --random-utils
```

**Verified Output:**
- Random range generation
- Random bit vector generation
- Weighted random selection
- Random delay generation

### 9. Integration

- **Utility Integration**
  - Combining CLP, recorders, and queues
  - Utility integration patterns
  - Real-world utility usage

#### Example 8.9: Integration (`module8/examples/integration/integration.sv`)

**What it demonstrates:**
- **IntegrationTest**: Test combining multiple utilities
- Combined utility usage
- Transaction recording and queuing
- Command-line configuration

**Integration Methods and Patterns:**

1. **CLP Configuration in Integration:**
   ```systemverilog
   function void configure_from_clp();
       void'(uvm_cmdline_proc.get_arg_value("+test_mode", test_mode));
       // Method: get_arg_value(plusarg, value) -> bit
       // Purpose: Parse command-line plusarg
       // Usage: Configure from command line
   endfunction
   ```
   - **Purpose**: Use CLP for configuration
   - **Pattern**: Parse plusargs in `build_phase()`

2. **Transaction Recording:**
   ```systemverilog
   function void record_transaction(IntegrationTransaction txn);
       IntegrationTransaction recorded_txn;
       recorded_txn = IntegrationTransaction::type_id::create("recorded_txn");
       recorded_txn.copy(txn);
       // Method: copy(rhs) -> void
       // Purpose: Deep copy transaction
       
       recorded_txn.timestamp = $time;
       // Function: $time -> time
       // Purpose: Get current simulation time
       
       recorded_transactions.push_back(recorded_txn);
       // Method: push_back(item) -> void
       // Purpose: Add to recording queue
   endfunction
   ```
   - **Purpose**: Record transactions with timestamps
   - **Key Methods**: `copy()`, `$time`, `push_back()`

3. **Queue Operations:**
   ```systemverilog
   function void enqueue_transaction(IntegrationTransaction txn);
       transaction_queue.push_back(txn);
       // Method: push_back(item) -> void
       // Purpose: Add to queue
   endfunction
   
   function IntegrationTransaction dequeue_transaction();
       IntegrationTransaction txn;
       if (transaction_queue.size() > 0) begin
           txn = transaction_queue.pop_front();
           // Method: pop_front() -> T
           // Purpose: Remove from queue
       end
       return txn;
   endfunction
   ```
   - **Purpose**: Queue management for transactions
   - **Queue Operations**: `push_back()`, `pop_front()`, `size()`

**Key Concepts:**
- Combining CLP, recorders, and queues
- Utility integration patterns
- Real-world utility usage
- **Integration Pattern**: CLP → Recording → Queuing → Processing
- **Utility Combination**: Multiple utilities in single component
- **Real-World Usage**: Command-line config, recording, queuing together

**Execution:**
```bash
./scripts/module8.sh --integration
```

**Verified Output:**
- Combined utility usage
- Transaction recording and queuing
- Command-line configuration
- Integration patterns

## UVM Utility Methods Reference

This section provides a comprehensive reference for all methods, functions, and patterns used in Module 8's utility examples.

### Command Line Processor (CLP) Methods

#### get_arg_value()

**Method Signature**: `static function bit get_arg_value(string plusarg, ref string value);`
- **Return Type**: `bit` (1 = found, 0 = not found)
- **Parameters**:
  - `plusarg`: Plusarg name (must start with `+`)
  - `value`: Variable to store value (passed by reference)
- **Purpose**: Parse command-line plusarg and retrieve value
- **Usage**: Call in `build_phase()` to configure components
- **Plusarg Format**: `+name=value` (e.g., `+test_mode=stress`)
- **Example**:
  ```systemverilog
  void'(uvm_cmdline_proc.get_arg_value("+test_mode", test_mode));
  if (uvm_cmdline_proc.get_arg_value("+num_transactions", str_val)) begin
      num_transactions = sv_atoi(str_val);
  end
  ```

### Comparator Methods

#### Analysis Imp Declaration

**Macro**: `uvm_analysis_imp_decl(suffix)`
- **Purpose**: Declare typed analysis implementation ports
- **Behavior**: Creates `uvm_analysis_imp_<suffix>` type
- **Usage**: Multiple analysis ports with different `write()` methods
- **Example**:
  ```systemverilog
  `uvm_analysis_imp_decl(_expected)
  `uvm_analysis_imp_decl(_actual)
  // Creates: uvm_analysis_imp_expected and uvm_analysis_imp_actual
  ```

#### write_expected() and write_actual()

**Method Signatures**: 
- `function void write_expected(T txn);`
- `function void write_actual(T txn);`
- **Purpose**: Write transactions to comparator
- **Usage**: Connect analysis ports to comparator implementations

#### compare_transactions()

**Method Signature**: `function void compare_transactions();`
- **Purpose**: Compare queued transactions
- **In-Order Pattern**: Compare from front of queues
- **Out-of-Order Pattern**: Match by address using associative arrays

### Recorder Methods

#### do_record()

**Method Signature**: `function void do_record(uvm_recorder recorder);`
- **Purpose**: Record transaction fields
- **Key**: Call `super.do_record()` first
- **Usage**: Override in transaction class

#### record_field()

**Method Signature**: `function void record_field(string name, T value, int size, uvm_radix_enum radix);`
- **Parameters**:
  - `name`: Field name (string)
  - `value`: Field value (any type)
  - `size`: Field size in bits
  - `radix`: Display format (UVM_HEX, UVM_DEC, UVM_BIN, UVM_OCT)
- **Purpose**: Record individual field with format
- **Usage**: Record all transaction fields

#### copy()

**Method Signature**: `function void copy(uvm_object rhs);`
- **Purpose**: Deep copy transaction
- **Behavior**: Copies all fields to new object
- **Usage**: Create independent copy for recording

### Pool Methods

#### allocate()

**Method Signature**: `function PoolTransaction allocate();`
- **Return Type**: Pool transaction object
- **Purpose**: Allocate object from pool
- **Behavior**: Returns pooled object if available, creates new if empty
- **Usage**: Get object from pool for reuse

#### free()

**Method Signature**: `function void free(PoolTransaction txn);`
- **Purpose**: Return object to pool
- **Behavior**: Adds to pool if space available, discards if full
- **Usage**: Return object for reuse

### Queue Methods

#### FIFO Queue Operations

**enqueue_fifo()**: `function void enqueue_fifo(T txn);`
- **Purpose**: Add transaction to FIFO queue
- **Method**: `push_back(txn)` - Add to end

**dequeue_fifo()**: `function T dequeue_fifo();`
- **Purpose**: Remove transaction from FIFO queue
- **Method**: `pop_front()` - Remove from front

#### Priority Queue Operations

**enqueue_priority()**: `function void enqueue_priority(T txn);`
- **Purpose**: Add transaction with priority ordering
- **Methods**: `compare()`, `insert(index, item)` - Maintain priority order

**dequeue_priority()**: `function T dequeue_priority();`
- **Purpose**: Remove highest priority transaction
- **Method**: `pop_front()` - Remove from front (highest priority)

### String Utility Methods

#### int_to_hex()

**Method Signature**: `function string int_to_hex(int value, int width = 8);`
- **Purpose**: Convert integer to hexadecimal string
- **Format**: `$sformatf("%0h", value)`
- **Return**: Hexadecimal string

#### int_to_bin()

**Method Signature**: `function string int_to_bin(int value, int width = 8);`
- **Purpose**: Convert integer to binary string
- **Format**: `$sformatf("%0b", value)`
- **Return**: Binary string

#### pad_string()

**Method Signature**: `function string pad_string(string str, int width, string pad_char = " ");`
- **Purpose**: Pad string to specified width
- **Methods**: `len()` - Get length, `{str1, str2}` - Concatenate
- **Return**: Padded string

#### format_transaction()

**Method Signature**: `function string format_transaction(string name, logic [7:0] data, logic [15:0] addr);`
- **Purpose**: Format transaction as string
- **Format**: `$sformatf("%s: data=0x%02h, addr=0x%04h", ...)`
- **Return**: Formatted transaction string

#### extract_field()

**Method Signature**: `function string extract_field(string formatted_str, string field_name);`
- **Purpose**: Extract field value from formatted string
- **Methods**: `find_substring()`, `getc()`, `substr()`, `len()`
- **Return**: Extracted field value

### Math Utility Methods

#### calculate_average()

**Method Signature**: `function real calculate_average(int values[]);`
- **Return Type**: `real` (floating point)
- **Purpose**: Calculate average of array
- **Formula**: sum / count
- **Key**: Use `real'()` cast for floating-point division

#### calculate_max()

**Method Signature**: `function int calculate_max(int values[]);`
- **Purpose**: Find maximum value
- **Pattern**: Initialize with first, compare with all

#### calculate_min()

**Method Signature**: `function int calculate_min(int values[]);`
- **Purpose**: Find minimum value
- **Pattern**: Initialize with first, compare with all

#### calculate_std_dev()

**Method Signature**: `function real calculate_std_dev(int values[]);`
- **Purpose**: Calculate standard deviation
- **Formula**: sqrt(sum((x - mean)^2) / n)
- **Function**: `$sqrt()` for square root

#### clamp()

**Method Signature**: `function int clamp(int value, int min_val, int max_val);`
- **Purpose**: Clamp value to range
- **Behavior**: Returns value if in range, min if too low, max if too high

### Random Utility Methods

#### random_range()

**Method Signature**: `function int random_range(int min_val, int max_val);`
- **Purpose**: Generate random integer in range
- **Built-in**: `$urandom_range(max, min)` - random range
- **Note**: Parameters are max, min (order matters)

#### random_bits()

**Method Signature**: `function logic [31:0] random_bits(int width = 32);`
- **Purpose**: Generate random bit vector
- **Built-in**: `$urandom()` - 32-bit random value

#### weighted_random()

**Method Signature**: `function int weighted_random(int weights[]);`
- **Purpose**: Select index based on weights
- **Algorithm**: Cumulative weight distribution
- **Usage**: Probability-based selection

#### random_delay()

**Method Signature**: `function int random_delay(int min_delay, int max_delay);`
- **Purpose**: Generate random delay value
- **Usage**: Variable timing delays

### SystemVerilog Built-in Functions

#### Queue Operations

- **`push_back(item)`**: Add to end of queue
- **`pop_front()`**: Remove and return first element
- **`size()`**: Get queue size
- **`insert(index, item)`**: Insert at position
- **`foreach (queue[i])`**: Iterate over queue

#### Associative Array Operations

- **`map[key] = value`**: Store by key
- **`exists(key)`**: Check if key exists
- **`delete(key)`**: Remove key-value pair
- **`foreach (map[index])`**: Iterate over all keys
- **`num()`**: Get number of entries

#### String Operations

- **`len()`**: Get string length
- **`getc(index)`**: Get character at index
- **`substr(start, end)`**: Extract substring
- **`{str1, str2}`**: String concatenation

#### Random Functions

- **`$urandom()`**: Generate random 32-bit value
- **`$urandom_range(max, min)`**: Generate random in range
- **`randomize()`**: Randomize object fields

#### Math Functions

- **`$sqrt(value)`**: Calculate square root
- **`$bits(expression)`**: Get bit width
- **`$time`**: Get current simulation time

#### Type Casting

- **`real'(int_value)`**: Convert integer to real
- **`int'(real_value)`**: Convert real to integer

### Complete Execution Flow Diagrams

**CLP Configuration Flow:**
```
Test.build_phase()
  ├─> CLPEnv.build_phase()
  │     ├─> uvm_cmdline_proc.get_arg_value("+test_mode", test_mode)
  │     │     └─> Searches command line for +test_mode=<value>
  │     │           └─> Returns 1 if found, 0 if not found
  │     │                 └─> Stores value in test_mode variable
  │     ├─> uvm_cmdline_proc.get_arg_value("+num_transactions", str_val)
  │     │     └─> If found: num_transactions = sv_atoi(str_val)
  │     │           └─> Converts string to integer
  │     └─> Configure sequence: seq.num_transactions = num_transactions
  │
  └─> Sequence.body()
        └─> Uses num_transactions from CLP configuration
              └─> Generates configured number of transactions
```

**In-Order Comparator Flow:**
```
Monitor.expected_port.write(txn)
  └─> InOrderComparator.write_expected(txn)
        ├─> expected_queue.push_back(txn)
        │     └─> Add transaction to end of queue
        └─> compare_transactions()
              ├─> Check: expected_queue.size() > 0 && actual_queue.size() > 0
              │     └─> If both queues have transactions:
              │           ├─> exp_txn = expected_queue.pop_front()
              │           ├─> act_txn = actual_queue.pop_front()
              │           ├─> if (exp_txn.compare(act_txn))
              │           │     └─> match_count++
              │           └─> else
              │                 └─> mismatches++
              └─> Repeat until one queue is empty
```

**Out-of-Order Comparator Flow:**
```
Monitor.expected_port.write(txn)
  └─> OutOfOrderComparator.write_expected(txn)
        ├─> expected_map[txn.address] = txn
        │     └─> Store transaction by address (associative array)
        └─> compare_transactions()
              ├─> foreach (expected_map[addr])
              │     └─> Iterate over all addresses in expected map
              │           ├─> if (actual_map.exists(addr))
              │           │     └─> Check if actual map has same address
              │           │           ├─> if (expected_map[addr].compare(actual_map[addr]))
              │           │           │     └─> match_count++
              │           │           └─> else
              │           │                 └─> mismatches++
              │           │           └─> expected_map.delete(addr)
              │           │           └─> actual_map.delete(addr)
              │           └─> Remove matched transactions
              └─> Continue until all matches found
```

**Recorder Flow:**
```
Monitor.ap.write(txn)
  └─> TransactionRecorder.write(txn)
        ├─> recorded_txn = RecorderTransaction::type_id::create("recorded_txn")
        ├─> recorded_txn.copy(txn)
        │     └─> Deep copy all fields
        ├─> recorded_txn.timestamp = $time
        │     └─> Add current simulation time
        ├─> recorded_transactions.push_back(recorded_txn)
        │     └─> Store in queue for playback
        └─> transaction_count++

Playback:
  └─> recorder.playback_transactions()
        ├─> foreach (recorded_transactions[i])
        │     └─> Iterate over all recorded transactions
        │           └─> Print: recorded_transactions[i].convert2string()
        └─> Display all recorded transactions
```

**Pool Flow:**
```
Test.run_phase()
  ├─> pool.allocate()
  │     ├─> if (pool.size() > 0)
  │     │     └─> return pool.pop_front()
  │     │           └─> Get object from pool (reuse)
  │     └─> else
  │           └─> return PoolTransaction::type_id::create("new_txn")
  │                 └─> Create new object if pool empty
  │
  ├─> Use allocated object
  │     └─> Modify object fields
  │
  └─> pool.free(txn)
        ├─> if (pool.size() < pool_size)
        │     └─> pool.push_back(txn)
        │           └─> Return object to pool (for reuse)
        └─> else
              └─> Discard object (pool full)
```

**Priority Queue Flow:**
```
Test.run_phase()
  ├─> queue_mgr.enqueue_priority(txn)
  │     ├─> int insert_pos = 0
  │     ├─> foreach (priority_queue[i])
  │     │     └─> Find insertion position
  │     │           ├─> if (txn.compare(priority_queue[i]) > 0)
  │     │           │     └─> Higher priority found
  │     │           │           └─> insert_pos = i; break;
  │     │           └─> else
  │     │                 └─> insert_pos = i + 1
  │     ├─> priority_queue.insert(insert_pos, txn)
  │     │     └─> Insert at calculated position
  │     └─> Maintain priority order (highest first)
  │
  └─> queue_mgr.dequeue_priority()
        ├─> if (priority_queue.size() > 0)
        │     └─> return priority_queue.pop_front()
        │           └─> Remove highest priority (first element)
        └─> else
              └─> Warning: empty queue
```

### Integration Flow Example

**Complete Utility Integration Flow:**
```
Test.build_phase()
  ├─> utility_mgr.configure_from_clp()
  │     └─> uvm_cmdline_proc.get_arg_value("+test_mode", test_mode)
  │           └─> Configure from command line
  │
  └─> Test.run_phase()
        ├─> Generate transaction
        │     └─> txn = IntegrationTransaction::type_id::create("txn")
        │
        ├─> utility_mgr.record_transaction(txn)
        │     ├─> recorded_txn = IntegrationTransaction::type_id::create("recorded_txn")
        │     ├─> recorded_txn.copy(txn)
        │     ├─> recorded_txn.timestamp = $time
        │     └─> recorded_transactions.push_back(recorded_txn)
        │           └─> Record for later analysis
        │
        ├─> utility_mgr.enqueue_transaction(txn)
        │     └─> transaction_queue.push_back(txn)
        │           └─> Queue for processing
        │
        └─> utility_mgr.dequeue_transaction()
              ├─> if (transaction_queue.size() > 0)
              │     └─> return transaction_queue.pop_front()
              │           └─> Process queued transactions
              └─> else
                    └─> No transactions to process
```

### Advanced Usage Patterns

**1. CLP with Default Values and Validation:**
```systemverilog
function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    
    // Set defaults
    test_mode = "normal";
    num_transactions = 10;
    debug_level = 0;
    
    // Parse with validation
    if (uvm_cmdline_proc.get_arg_value("+test_mode", test_mode)) begin
        if (test_mode != "normal" && test_mode != "stress" && test_mode != "debug") begin
            `uvm_error("CLP", $sformatf("Invalid test_mode: %s", test_mode))
            test_mode = "normal";  // Fallback to default
        end
    end
    
    if (uvm_cmdline_proc.get_arg_value("+num_transactions", str_val)) begin
        num_transactions = sv_atoi(str_val);
        if (num_transactions < 1 || num_transactions > 1000) begin
            `uvm_warning("CLP", "num_transactions out of range, using default")
            num_transactions = 10;
        end
    end
endfunction
```

**2. Comparator with Timeout:**
```systemverilog
class TimeoutComparator extends uvm_component;
    time timeout = 1000;
    time start_time;
    
    function void write_expected(T txn);
        expected_queue.push_back(txn);
        start_time = $time;
        compare_transactions();
    endfunction
    
    function void compare_transactions();
        while (expected_queue.size() > 0 && actual_queue.size() > 0) begin
            if (($time - start_time) > timeout) begin
                `uvm_error("COMP", "Comparator timeout")
                break;
            end
            // Normal comparison logic
        end
    endfunction
endclass
```

**3. Pool with Statistics:**
```systemverilog
class StatisticsPool extends TransactionPool;
    int max_pool_size;
    int peak_usage;
    int total_allocations;
    int total_frees;
    
    function T allocate();
        T txn = super.allocate();
        total_allocations++;
        if (pool.size() > peak_usage) peak_usage = pool.size();
        return txn;
    endfunction
    
    function void free(T txn);
        super.free(txn);
        total_frees++;
    endfunction
    
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        `uvm_info("POOL", $sformatf("Peak Usage: %0d", peak_usage), UVM_LOW)
        `uvm_info("POOL", $sformatf("Total Allocations: %0d", total_allocations), UVM_LOW)
        `uvm_info("POOL", $sformatf("Total Frees: %0d", total_frees), UVM_LOW)
        `uvm_info("POOL", $sformatf("Reuse Rate: %0.2f%%", 
            100.0 * (total_frees - (total_allocations - pool.size())) / total_allocations), UVM_LOW)
    endfunction
endclass
```

**4. Priority Queue with Multiple Priority Levels:**
```systemverilog
class MultiPriorityQueue extends QueueManager;
    function void enqueue_priority(QueueTransaction txn);
        int insert_pos = 0;
        foreach (priority_queue[i]) begin
            // Compare by priority, then by timestamp
            int cmp = txn.compare(priority_queue[i]);
            if (cmp > 0 || (cmp == 0 && txn.timestamp < priority_queue[i].timestamp)) begin
                insert_pos = i;
                break;
            end
            insert_pos = i + 1;
        end
        priority_queue.insert(insert_pos, txn);
    endfunction
endclass
```

**5. String Utility with Format Validation:**
```systemverilog
class ValidatedStringUtils extends StringUtils;
    function string extract_field(string formatted_str, string field_name);
        // Validate format first
        if (find_substring(formatted_str, field_name) < 0) begin
            `uvm_warning("STRING", $sformatf("Field '%s' not found", field_name))
            return "";
        end
        // Extract with validation
        string result = super.extract_field(formatted_str, field_name);
        if (result == "") begin
            `uvm_warning("STRING", $sformatf("Field '%s' has empty value", field_name))
        end
        return result;
    endfunction
endclass
```

**6. Math Utility with Error Handling:**
```systemverilog
class SafeMathUtils extends MathUtils;
    function real calculate_average(int values[]);
        if (values.size() == 0) begin
            `uvm_error("MATH", "Cannot calculate average of empty array")
            return 0.0;
        end
        return super.calculate_average(values);
    endfunction
    
    function real calculate_std_dev(int values[]);
        if (values.size() < 2) begin
            `uvm_warning("MATH", "Standard deviation requires at least 2 values")
            return 0.0;
        end
        return super.calculate_std_dev(values);
    endfunction
endclass
```

**7. Random Utility with Seed Control:**
```systemverilog
class SeededRandomUtils extends RandomUtils;
    int seed_value;
    
    function void set_seed(int seed);
        seed_value = seed;
        // Note: SystemVerilog seed setting varies by simulator
        // This is a placeholder for seed management
    endfunction
    
    function int random_range(int min_val, int max_val);
        // Use seeded random if available
        return super.random_range(min_val, max_val);
    endfunction
endclass
```

### Performance Considerations

**1. Pool Size Optimization:**
- **Too Small**: Frequent object creation/deletion overhead
- **Too Large**: Unnecessary memory usage
- **Optimal**: Match typical allocation pattern (e.g., 2x average concurrent objects)

**2. Queue Size Management:**
- **FIFO Queue**: Use `size()` check before `pop_front()` to avoid warnings
- **Priority Queue**: `insert()` has O(n) complexity - consider heap for large queues
- **Associative Arrays**: `foreach` iteration - cache results if frequently accessed

**3. String Operations:**
- **String Concatenation**: `{str1, str2}` creates new string - minimize in loops
- **Substring Extraction**: `substr()` creates new string - cache if reused
- **Character Access**: `getc()` is O(1) - prefer over substring for single characters

**4. Comparator Performance:**
- **In-Order**: O(1) per transaction if queues balanced
- **Out-of-Order**: O(n) per transaction for `foreach` iteration
- **Optimization**: Use `num()` to check map size before iteration

**5. Recorder Memory:**
- **Transaction Storage**: Each recorded transaction uses memory
- **Consideration**: Limit recording to relevant transactions or use sampling

### Quick Reference Cheat Sheet

| **Category** | **Method/Function** | **Usage** | **Return Type** | **Complexity** |
|--------------|-------------------|-----------|----------------|----------------|
| **CLP** | `get_arg_value(plusarg, value)` | Parse plusarg | bit (found/not found) | O(1) |
| **Comparator** | `write_expected(txn)`, `write_actual(txn)` | Write transactions | void | O(1) |
| **Comparator** | `compare_transactions()` | Compare queued | void | O(n) |
| **Recorder** | `do_record(recorder)`, `record_field(...)` | Record fields | void | O(1) |
| **Pool** | `allocate()`, `free(txn)` | Object management | object, void | O(1) |
| **Queue** | `push_back()`, `pop_front()`, `size()` | Queue operations | void, T, int | O(1) |
| **Queue** | `insert(index, item)` | Insert at position | void | O(n) |
| **String** | `int_to_hex()`, `pad_string()`, `extract_field()` | String operations | string | O(n) |
| **Math** | `calculate_average()`, `calculate_std_dev()` | Math operations | real | O(n) |
| **Random** | `random_range()`, `weighted_random()` | Random generation | int | O(1), O(n) |
| **Array** | `foreach`, `size()`, `exists()`, `delete()` | Array operations | various | O(n), O(1) |
| **String** | `len()`, `getc()`, `substr()`, `{str1,str2}` | String methods | int, byte, string | O(1), O(n) |

### Common Patterns

**1. CLP Configuration Pattern:**
```systemverilog
function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    void'(uvm_cmdline_proc.get_arg_value("+test_mode", test_mode));
    if (uvm_cmdline_proc.get_arg_value("+num_transactions", str_val)) begin
        num_transactions = sv_atoi(str_val);
    end
endfunction
```

**2. In-Order Comparator Pattern:**
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
        else mismatches++;
    end
endfunction
```

**3. Out-of-Order Comparator Pattern:**
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

**4. Recorder Pattern:**
```systemverilog
function void do_record(uvm_recorder recorder);
    super.do_record(recorder);
    recorder.record_field("data", data, $bits(data), UVM_HEX);
    recorder.record_field("address", address, $bits(address), UVM_HEX);
endfunction

function void write(T txn);
    recorded_txn = T::type_id::create("recorded_txn");
    recorded_txn.copy(txn);
    recorded_txn.timestamp = $time;
    recorded_transactions.push_back(recorded_txn);
endfunction
```

**5. Pool Pattern:**
```systemverilog
function T allocate();
    if (pool.size() > 0) begin
        return pool.pop_front();
    end else begin
        return T::type_id::create("new_txn");
    end
endfunction

function void free(T txn);
    if (pool.size() < pool_size) begin
        pool.push_back(txn);
    end
endfunction
```

**6. Priority Queue Pattern:**
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

### Common Pitfalls and Solutions

1. **CLP Plusarg Not Found**
   - **Problem**: Configuration uses default values
   - **Solution**: Check return value, provide defaults
   - **Code**: `if (uvm_cmdline_proc.get_arg_value("+arg", str_val)) value = sv_atoi(str_val);`

2. **Comparator Queues Never Match**
   - **Problem**: Transactions never arrive in both queues
   - **Solution**: Check analysis port connections
   - **Code**: Verify `expected_port.connect()` and `actual_port.connect()`

3. **Pool Exhaustion**
   - **Problem**: Pool runs out of objects
   - **Solution**: Increase pool size or check free() calls
   - **Code**: `pool_size = 20;` or ensure all objects are freed

4. **Priority Queue Wrong Order**
   - **Problem**: Transactions not in priority order
   - **Solution**: Check compare() method implementation
   - **Code**: `if (prio > rhs.prio) return 1;` (higher priority = higher value)

5. **String Extraction Fails**
   - **Problem**: Field not extracted correctly
   - **Solution**: Check string format and field name
   - **Code**: Verify format matches expected pattern

6. **Math Division Truncation**
   - **Problem**: Average calculation truncates
   - **Solution**: Use `real'()` cast for floating-point division
   - **Code**: `return sum / real'(values.size());`

7. **Random Range Wrong Order**
   - **Problem**: `$urandom_range()` returns wrong values
   - **Solution**: Parameters are max, min (not min, max)
   - **Code**: `$urandom_range(max_val, min_val)` not `$urandom_range(min_val, max_val)`

### Real-World Usage Scenarios

**Scenario 1: Configurable Test with CLP and Recording**
```systemverilog
class ProductionTest extends uvm_test;
    CLPEnv env;
    TransactionRecorder recorder;
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = CLPEnv::type_id::create("env", this);
        recorder = TransactionRecorder::type_id::create("recorder", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        env.agent.monitor.ap.connect(recorder.analysis_imp);
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        // Test runs with CLP configuration
        #1000;
        // Playback recorded transactions for analysis
        recorder.playback_transactions();
        phase.drop_objection(this);
    endtask
endclass
```

**Scenario 2: Multi-Stream Verification with Comparators**
```systemverilog
class MultiStreamTest extends uvm_test;
    InOrderComparator comp0, comp1;
    OutOfOrderComparator comp2;
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        comp0 = InOrderComparator::type_id::create("comp0", this);
        comp1 = InOrderComparator::type_id::create("comp1", this);
        comp2 = OutOfOrderComparator::type_id::create("comp2", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        // Connect multiple streams to comparators
        env.stream0_expected.connect(comp0.expected_imp);
        env.stream0_actual.connect(comp0.actual_imp);
        env.stream1_expected.connect(comp1.expected_imp);
        env.stream1_actual.connect(comp1.actual_imp);
        // Out-of-order stream
        env.stream2_expected.connect(comp2.expected_imp);
        env.stream2_actual.connect(comp2.actual_imp);
    endfunction
endclass
```

**Scenario 3: High-Performance Test with Pools**
```systemverilog
class HighPerfTest extends uvm_test;
    TransactionPool pool;
    
    task run_phase(uvm_phase phase);
        PoolTransaction txn[$];
        phase.raise_objection(this);
        
        // Pre-allocate pool
        pool = TransactionPool::type_id::create("pool");
        pool.pool_size = 100;
        pool.initialize_pool();
        
        // Generate many transactions using pool
        for (int i = 0; i < 1000; i++) begin
            PoolTransaction t = pool.allocate();
            void'(t.randomize());
            txn.push_back(t);
        end
        
        // Process transactions
        foreach (txn[i]) begin
            // Process transaction
            pool.free(txn[i]);  // Return to pool
        end
        
        phase.drop_objection(this);
    endtask
endclass
```

**Scenario 4: Priority-Based Transaction Processing**
```systemverilog
class PriorityProcessor extends uvm_component;
    QueueManager queue_mgr;
    uvm_analysis_imp #(QueueTransaction, PriorityProcessor) imp;
    
    function void write(QueueTransaction txn);
        queue_mgr.enqueue_priority(txn);
        process_next();
    endfunction
    
    task process_next();
        QueueTransaction txn;
        while (queue_mgr.priority_queue.size() > 0) begin
            txn = queue_mgr.dequeue_priority();
            // Process highest priority transaction
            process_transaction(txn);
        end
    endtask
endclass
```

**Scenario 5: Statistical Analysis with Math Utilities**
```systemverilog
class StatisticalAnalyzer extends uvm_component;
    MathUtils math;
    int latency_samples[$];
    
    function void record_latency(int latency);
        latency_samples.push_back(latency);
    endfunction
    
    function void report_phase(uvm_phase phase);
        int values[];
        real avg, std_dev;
        int min_val, max_val;
        
        // Convert queue to array
        values = new[latency_samples.size()];
        foreach (latency_samples[i]) begin
            values[i] = latency_samples[i];
        end
        
        // Calculate statistics
        avg = math.calculate_average(values);
        std_dev = math.calculate_std_dev(values);
        min_val = math.calculate_min(values);
        max_val = math.calculate_max(values);
        
        `uvm_info("STATS", $sformatf("Latency Statistics:"), UVM_LOW)
        `uvm_info("STATS", $sformatf("  Average: %0.2f", avg), UVM_LOW)
        `uvm_info("STATS", $sformatf("  Std Dev: %0.2f", std_dev), UVM_LOW)
        `uvm_info("STATS", $sformatf("  Min: %0d", min_val), UVM_LOW)
        `uvm_info("STATS", $sformatf("  Max: %0d", max_val), UVM_LOW)
    endfunction
endclass
```

### Debugging Tips

**1. CLP Debugging:**
```systemverilog
function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    
    // Debug: Print all plusargs
    string plusargs[$];
    uvm_cmdline_proc.get_plusargs(plusargs);
    foreach (plusargs[i]) begin
        `uvm_info("CLP_DEBUG", $sformatf("Plusarg: %s", plusargs[i]), UVM_DEBUG)
    end
    
    // Debug: Check if plusarg found
    bit found = uvm_cmdline_proc.get_arg_value("+test_mode", test_mode);
    `uvm_info("CLP_DEBUG", $sformatf("test_mode found: %0d, value: %s", found, test_mode), UVM_DEBUG)
endfunction
```

**2. Comparator Debugging:**
```systemverilog
function void compare_transactions();
    `uvm_info("COMP_DEBUG", $sformatf("Expected queue size: %0d", expected_queue.size()), UVM_DEBUG)
    `uvm_info("COMP_DEBUG", $sformatf("Actual queue size: %0d", actual_queue.size()), UVM_DEBUG)
    
    while (expected_queue.size() > 0 && actual_queue.size() > 0) begin
        ComparatorTransaction exp_txn = expected_queue.pop_front();
        ComparatorTransaction act_txn = actual_queue.pop_front();
        
        `uvm_info("COMP_DEBUG", $sformatf("Comparing: Expected %s vs Actual %s", 
            exp_txn.convert2string(), act_txn.convert2string()), UVM_DEBUG)
        
        if (exp_txn.compare(act_txn)) begin
            match_count++;
        end else begin
            `uvm_error("COMP_DEBUG", $sformatf("Mismatch details: exp.data=0x%02h, act.data=0x%02h",
                exp_txn.data, act_txn.data))
            mismatches++;
        end
    end
endfunction
```

**3. Pool Debugging:**
```systemverilog
function PoolTransaction allocate();
    `uvm_info("POOL_DEBUG", $sformatf("Pool size before allocate: %0d", pool.size()), UVM_DEBUG)
    
    PoolTransaction txn;
    if (pool.size() > 0) begin
        txn = pool.pop_front();
        `uvm_info("POOL_DEBUG", $sformatf("Allocated from pool: %s", txn.convert2string()), UVM_DEBUG)
    end else begin
        txn = PoolTransaction::type_id::create("new_txn");
        `uvm_info("POOL_DEBUG", "Pool empty, created new object", UVM_DEBUG)
    end
    
    `uvm_info("POOL_DEBUG", $sformatf("Pool size after allocate: %0d", pool.size()), UVM_DEBUG)
    allocated_count++;
    return txn;
endfunction
```

**4. Queue Debugging:**
```systemverilog
function void enqueue_priority(QueueTransaction txn);
    `uvm_info("QUEUE_DEBUG", $sformatf("Enqueuing: %s", txn.convert2string()), UVM_DEBUG)
    `uvm_info("QUEUE_DEBUG", $sformatf("Queue size before: %0d", priority_queue.size()), UVM_DEBUG)
    
    int insert_pos = 0;
    foreach (priority_queue[i]) begin
        int cmp = txn.compare(priority_queue[i]);
        `uvm_info("QUEUE_DEBUG", $sformatf("Comparing with queue[%0d]: cmp=%0d", i, cmp), UVM_DEBUG)
        if (cmp > 0) begin
            insert_pos = i;
            break;
        end
        insert_pos = i + 1;
    end
    
    priority_queue.insert(insert_pos, txn);
    `uvm_info("QUEUE_DEBUG", $sformatf("Inserted at position: %0d", insert_pos), UVM_DEBUG)
    `uvm_info("QUEUE_DEBUG", $sformatf("Queue size after: %0d", priority_queue.size()), UVM_DEBUG)
endfunction
```

### Troubleshooting Guide

**Issue**: CLP plusargs not parsed
- **Check**: Plusarg format (`+name=value`)
- **Check**: Call `get_arg_value()` in `build_phase()`
- **Check**: Check return value (1 = found, 0 = not found)
- **Debug**: Print all plusargs using `get_plusargs()`
- **Solution**: Verify plusargs passed correctly on command line

**Issue**: Comparator never matches
- **Check**: Analysis port connections
- **Check**: Both `write_expected()` and `write_actual()` called
- **Check**: Queue sizes (`expected_queue.size()`, `actual_queue.size()`)

**Issue**: Pool runs out of objects
- **Check**: Pool size configuration
- **Check**: All objects freed with `free()`
- **Check**: Pool initialization (`initialize_pool()`)

**Issue**: Priority queue wrong order
- **Check**: `compare()` method implementation
- **Check**: Priority values (higher = higher priority)
- **Check**: `insert()` position calculation

**Issue**: String operations fail
- **Check**: String length (`len()`)
- **Check**: Character access (`getc()`)
- **Check**: Substring bounds (`substr(start, end)`)

**Issue**: Math calculations incorrect
- **Check**: Type casting (`real'()` for division)
- **Check**: Array initialization
- **Check**: Function return types

## Learning Outcomes

By the end of this module, you should be able to:

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

## Exercises

1. **Command Line Processor**
   - Create CLP-based test configuration
   - Parse plusargs for test parameters
   - Implement dynamic test configuration
   - Test with various command-line arguments

2. **Comparators**
   - Implement in-order comparator
   - Implement out-of-order comparator
   - Add match/mismatch tracking
   - Generate comparator statistics

3. **Recorders**
   - Create transaction recorder
   - Implement recording with timestamps
   - Add playback functionality
   - Test recording formats

4. **Pools**
   - Create object pool
   - Implement allocate/free methods
   - Add pool size management
   - Track pool statistics

5. **Queues**
   - Implement FIFO queue
   - Implement priority queue
   - Add queue management
   - Track queue statistics

6. **String Utilities**
   - Create string conversion functions
   - Implement string padding
   - Add transaction formatting
   - Test field extraction

7. **Math Utilities**
   - Implement average calculation
   - Add min/max operations
   - Create standard deviation function
   - Test value clamping

8. **Random Utilities**
   - Implement random range generation
   - Add random bit vector generation
   - Create weighted random selection
   - Test random delay generation

9. **Integration**
   - Combine multiple utilities
   - Integrate CLP with recorders
   - Use queues with utilities
   - Test complete integration

## Execution Status

✅ **Module 8 has been successfully executed and verified.**

**Verification Date:** 2026-01-24  
**Status:** All examples and tests passing  
**Verilator Version:** 5.045  
**UVM Library:** UVM 2017 (1800.2-2017-1.0)  
**Test Results:**
- ✅ 9 SystemVerilog UVM examples executed successfully
- ✅ 1 UVM test compiled and passed
- ⏱️ Total execution time: ~16 minutes (UVM compilation takes significant time due to template instantiations)

**Examples Executed:**
1. ✅ CLP - Command Line Processor demonstrated (8 CLP messages)
2. ✅ Comparators - Transaction comparators demonstrated (10 COMPARATOR messages)
3. ✅ Recorders - Transaction recording demonstrated (3 RECORDER messages)
4. ✅ Pools - Object pooling demonstrated (3 POOL messages)
5. ✅ Queues - Queue utilities demonstrated (6 QUEUE messages)
6. ✅ String Utils - String utilities demonstrated (6 STRING messages)
7. ✅ Math Utils - Math utilities demonstrated (6 MATH messages)
8. ✅ Random Utils - Random utilities demonstrated (3 RANDOM messages)
9. ✅ Integration - Utility integration demonstrated

**Note:** UVM compilation with Verilator takes approximately 15-20 minutes due to extensive template instantiations, but all tests execute successfully.

**Execution Logs:** Full execution logs are available in `module8/module8.log` and individual example logs in each example directory (`compile.log`, `run.log`).

## Assessment

- [x] Can use UVM utility classes effectively
- [x] Can parse command-line arguments using CLP
- [x] Can compare transactions using comparators
- [x] Can record and playback transactions
- [x] Can use pools and queues for memory management
- [x] Can apply string, math, and random utilities
- [x] Can integrate multiple utilities in testbenches
- [x] Understands utility patterns and best practices

## Next Steps

Congratulations! You've completed the UVM learning path. Review the [IEEE 1800.2-2017 Coverage](IEEE_1800_2_2017_COVERAGE.md) to ensure complete understanding.

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **UVM User's Guide**: Accellera Systems Initiative
- **Verilator Documentation**: https://verilator.org/
- **Verification Academy**: https://verificationacademy.com/
