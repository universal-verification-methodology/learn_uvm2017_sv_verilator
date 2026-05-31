# Module 1 — Hands-on labs

Generated from `docs/MODULE1.md` for slides, PDF, and video.
Run commands from the **course repository root** unless noted.

**Course topic:** SystemVerilog and Verification Basics

## 1. Transaction Classes (`sv_basics/`)

**Source:** `module1/examples/sv_basics/transaction.sv`

**What you'll learn:**
- Base `Transaction` class with static variables (`id_counter`)
- Instance variables (`id`, `data`, `timestamp`)
- Special methods: `new()`, `copy()`, `compare()`, `convert2string()`
- Inheritance: `ReadTransaction` and `WriteTransaction` inherit from `Transaction`
- Method overriding: Child classes override `convert2string()` method

**Run:**

```bash
./scripts/module1.sh --sv-basics && cd module1/examples/sv_basics && verilator -sv --cc --exe transaction.sv -o transaction_example && make -C obj_dir -f Vtransaction_example.mk
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE1.md` and explore `module1/examples/sv_basics/`.

## 2. Interfaces and Modports (`interfaces/`)

**Source:** `module1/examples/interfaces/interface_example.sv`

**What you'll learn:**
- Interface Definition: `apb_if` interface with signals and clocking block
- Modports: `master_mp` and `slave_mp` modports with different signal directions
- Clocking Block: `cb` clocking block for synchronous access
- Interface Usage: Module using interface with modport
- Testbench Integration: Testbench connecting to interface

**Run:**

```bash
./scripts/module1.sh --interfaces
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE1.md` and explore `module1/examples/interfaces/`.

## 3. Packages (`packages/`)

**Source:** `module1/examples/packages/package_example.sv`

**What you'll learn:**
- Package Definition: `verification_pkg` with common types and functions
- Package Import: Using `import verification_pkg::*`
- Name Resolution: Handling name conflicts
- Package Organization: Structuring verification code
- Function Definitions: `is_valid_address()`, `calculate_checksum()` functions

**Run:**

```bash
./scripts/module1.sh --packages
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE1.md` and explore `module1/examples/packages/`.

## 4. Data Structures (`data_structures/`)

**Source:** `module1/examples/data_structures/data_structures_example.sv`

**What you'll learn:**
- Dynamic Arrays: Transaction arrays that grow dynamically
- Queues: FIFO queues for transaction management
- Associative Arrays: Indexed by transaction ID
- Structures: Complex data structures for verification
- Array Methods: Using built-in array methods

**Run:**

```bash
./scripts/module1.sh --data-structures
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE1.md` and explore `module1/examples/data_structures/`.

## 5. Error Handling (`error_handling/`)

**Source:** `module1/examples/error_handling/error_handling_example.sv`

**What you'll learn:**
- UVM Reporting: Using `uvm_report_info()`, `uvm_report_error()`, etc.
- Assertions: Immediate and concurrent assertions
- Error Handling: Try-catch blocks for exception handling
- Logging Patterns: Structured logging for verification
- Retry Logic: Task with retry mechanism using `retry_task()`

**Run:**

```bash
./scripts/module1.sh --error-handling
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE1.md` and explore `module1/examples/error_handling/`.
