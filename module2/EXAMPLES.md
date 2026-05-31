# Module 2 — Hands-on labs

Generated from `docs/MODULE2.md` for slides, PDF, and video.
Run commands from the **course repository root** unless noted.

**Course topic:** SystemVerilog Testbench Fundamentals

## 1. Clock Generation (`clock_generation/`)

**Source:** `module2/examples/clock_generation/clock_gen.sv`

**What you'll learn:**
- Simple Clock: Basic clock generation with `always` block
- Parameterized Clock: Clock with configurable period and duty cycle
- Multiple Clocks: Generating multiple independent clocks
- Clock Gating: Conditional clock generation
- Clock Stopping: Controlled clock stopping

**Run:**

```bash
./scripts/module2.sh --clock-generation
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE2.md` and explore `module2/examples/clock_generation/`.

## 2. Reset Patterns (`reset_patterns/`)

**Source:** `module2/examples/reset_patterns/reset_patterns.sv`

**What you'll learn:**
- Synchronous Reset: Reset synchronized to clock
- Asynchronous Reset: Reset independent of clock
- Reset Sequence: Controlled reset assertion and de-assertion
- Reset Verification: Checking reset behavior

**Run:**

```bash
./scripts/module2.sh --reset-patterns
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE2.md` and explore `module2/examples/reset_patterns/`.

## 3. Signal Access (`signal_access/`)

**Source:** `module2/examples/signal_access/signal_access.sv`

**What you'll learn:**
- Signal Reading: Reading DUT signal values
- Signal Driving: Driving signals to DUT
- Signal Monitoring: Monitoring signal changes
- Signal Types: Handling different signal types

**Run:**

```bash
./scripts/module2.sh --signal-access
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE2.md` and explore `module2/examples/signal_access/`.

## 4. Triggers and Timing (`triggers/`)

**Source:** `module2/examples/triggers/triggers.sv`

**What you'll learn:**
- Event Control: Using `@` for event-based timing
- Delay Control: Using `#` for time-based delays
- Wait Statements: Using `wait` for condition-based waiting
- Fork-Join: Parallel execution with synchronization
- Named Events: Event-based synchronization

**Run:**

```bash
./scripts/module2.sh --triggers
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE2.md` and explore `module2/examples/triggers/`.

## 5. Common Patterns (`common_patterns/`)

**Source:** `module2/examples/common_patterns/common_patterns.sv`

**What you'll learn:**
- Testbench Structure: Organized testbench with phases
- Driver Pattern: Stimulus generation component
- Monitor Pattern: Response monitoring component
- Scoreboard Pattern: Response checking component
- Reusable Components: Component reuse patterns

**Run:**

```bash
./scripts/module2.sh --common-patterns
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE2.md` and explore `module2/examples/common_patterns/`.
