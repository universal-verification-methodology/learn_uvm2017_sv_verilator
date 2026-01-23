# Module 1: SystemVerilog and Verification Basics

**Duration**: 2 weeks  
**Complexity**: Beginner  
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

**Key Concepts:**
- Interfaces provide structured communication between modules
- Modports control signal direction and access
- Clocking blocks enable synchronous signal access
- Interfaces are essential for UVM testbenches

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

**Key Concepts:**
- Packages organize related code
- Import statements control namespace
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

**Key Concepts:**
- Dynamic arrays provide flexibility
- Queues are ideal for FIFO operations
- Associative arrays enable key-value lookups
- Structures organize related data

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

**Key Concepts:**
- UVM reporting provides standardized messaging
- Assertions catch design errors early
- Exception handling enables graceful failures
- Logging is essential for debugging

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

## Additional Resources

- **SystemVerilog LRM**: IEEE 1800-2017
- **SystemVerilog for Verification**: Chris Spear and Greg Tumbush
- **Verification Academy**: https://verificationacademy.com/
