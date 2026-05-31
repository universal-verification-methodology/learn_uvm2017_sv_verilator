# Module 8 — Hands-on labs

Generated from `docs/MODULE8.md` for slides, PDF, and video.
Run commands from the **course repository root** unless noted.

**Course topic:** UVM Miscellaneous Utilities

## 1. Command Line Processor (`clp/`)

**Source:** `module8/examples/clp/clp.sv`

**What you'll learn:**
- CLPTransaction: Transaction with data and address fields
- CLPSequence: Sequence using CLP configuration for number of transactions
- CLPDriver: Driver that processes transactions
- CLPAgent: Agent with driver, monitor, and sequencer
- CLPEnv: Environment that uses CLP for configuration

**Run:**

```bash
./scripts/module8.sh --clp
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE8.md` and explore `module8/examples/clp/`.

## 2. Comparators (`comparators/`)

**Source:** `module8/examples/comparators/comparators.sv`

**What you'll learn:**
- ComparatorTransaction: Transaction with data, address, and timestamp
- InOrderComparator: Sequential transaction comparison
- OutOfOrderComparator: Address-based transaction matching
- ComparatorTest: Test demonstrating both comparator types

**Run:**

```bash
./scripts/module8.sh --comparators
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE8.md` and explore `module8/examples/comparators/`.

## 3. Recorders (`recorders/`)

**Source:** `module8/examples/recorders/recorders.sv`

**What you'll learn:**
- RecorderTransaction: Transaction with recording capabilities
- TransactionRecorder: Recorder that stores transactions
- RecorderTest: Test demonstrating transaction recording

**Run:**

```bash
./scripts/module8.sh --recorders
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE8.md` and explore `module8/examples/recorders/`.

## 4. Pools (`pools/`)

**Source:** `module8/examples/pools/pools.sv`

**What you'll learn:**
- PoolTransaction: Transaction for pool example
- TransactionPool: Pool implementation with allocate/free
- PoolTest: Test demonstrating object pooling

**Run:**

```bash
./scripts/module8.sh --pools
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE8.md` and explore `module8/examples/pools/`.

## 5. Queues (`queues/`)

**Source:** `module8/examples/queues/queues.sv`

**What you'll learn:**
- QueueTransaction: Transaction for queue example
- QueueManager: Queue manager with FIFO and priority queues
- QueueTest: Test demonstrating queue operations

**Run:**

```bash
./scripts/module8.sh --queues
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE8.md` and explore `module8/examples/queues/`.

## 6. String Utilities (`string_utils/`)

**Source:** `module8/examples/string_utils/string_utils.sv`

**What you'll learn:**
- StringUtils: Utility class for string operations
- StringTest: Test demonstrating string utilities

**Run:**

```bash
./scripts/module8.sh --string-utils
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE8.md` and explore `module8/examples/string_utils/`.

## 7. Math Utilities (`math_utils/`)

**Source:** `module8/examples/math_utils/math_utils.sv`

**What you'll learn:**
- MathUtils: Utility class for mathematical operations
- MathTest: Test demonstrating math utilities

**Run:**

```bash
./scripts/module8.sh --math-utils
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE8.md` and explore `module8/examples/math_utils/`.

## 8. Random Utilities (`random_utils/`)

**Source:** `module8/examples/random_utils/random_utils.sv`

**What you'll learn:**
- RandomUtils: Utility class for random operations
- RandomTest: Test demonstrating random utilities

**Run:**

```bash
./scripts/module8.sh --random-utils
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE8.md` and explore `module8/examples/random_utils/`.

## 9. Integration (`integration/`)

**Source:** `module8/examples/integration/integration.sv`

**What you'll learn:**
- IntegrationTest: Test combining multiple utilities
- Combined utility usage
- Transaction recording and queuing
- Command-line configuration

**Run:**

```bash
./scripts/module8.sh --integration
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE8.md` and explore `module8/examples/integration/`.
