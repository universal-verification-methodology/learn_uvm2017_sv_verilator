# Module 5 — Hands-on labs

Generated from `docs/MODULE5.md` for slides, PDF, and video.
Run commands from the **course repository root** unless noted.

**Course topic:** Advanced UVM Concepts

## 1. Virtual Sequences (`virtual_sequences/`)

**Source:** `module5/examples/virtual_sequences/virtual_sequences.sv`

**What you'll learn:**
- VirtualSequencer: Contains references to multiple sequencers (`master_seqr`, `slave_seqr`)
- VirtualSequence: Coordinates sequences on multiple sequencers
- ChannelSequence: Regular sequence for a single channel
- Parallel Execution: Using `fork-join` for concurrent sequences
- Sequential Execution: Sequential sequence coordination

**Run:**

```bash
./scripts/module5.sh --virtual-sequences
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE5.md` and explore `module5/examples/virtual_sequences/`.

## 2. Coverage (`coverage/`)

**Source:** `module5/examples/coverage/coverage.sv`

**What you'll learn:**
- CoverageModel: Extends `uvm_subscriber` for coverage collection
- Coverage Sampling: Via `write()` method from analysis port
- Coverage Types: Data, address range, command, and cross coverage
- Coverage Analysis: Coverage statistics and reporting

**Run:**

```bash
./scripts/module5.sh --coverage
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE5.md` and explore `module5/examples/coverage/`.

## 3. Advanced Configuration (`configuration/`)

**Source:** `module5/examples/configuration/configuration.sv`

**What you'll learn:**
- AgentConfig: Complex configuration object with multiple fields
- EnvConfig: Environment-level configuration containing agent configs
- Configuration Hierarchy: Multi-level configuration structure
- Configuration Usage: Setting and getting complex configuration

**Run:**

```bash
./scripts/module5.sh --configuration
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE5.md` and explore `module5/examples/configuration/`.

## 4. Callbacks (`callbacks/`)

**Source:** `module5/examples/callbacks/callbacks.sv`

**What you'll learn:**
- DriverCallbackBase: Base callback class for driver
- DriverCallback: Driver callback implementation
- MonitorCallbackBase: Base callback class for monitor
- MonitorCallback: Monitor callback implementation
- Callback Registration: Registering callbacks with components

**Run:**

```bash
./scripts/module5.sh --callbacks
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE5.md` and explore `module5/examples/callbacks/`.

## 5. Register Model (`register_model/`)

**Source:** `module5/examples/register_model/register_model.sv`

**What you'll learn:**
- RegisterField: Represents a register field with offset, width, and value
- Register: Represents a register with address and fields
- RegisterBlock: Represents a register block with multiple registers
- Register Operations: Read/write operations on registers

**Run:**

```bash
./scripts/module5.sh --register-model
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE5.md` and explore `module5/examples/register_model/`.
