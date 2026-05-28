# Module 3 — Hands-on labs

Generated from `docs/MODULE3.md` for slides, PDF, and video.
Run commands from the **course repository root** unless noted.

**Course topic:** UVM Basics

## 1. Class Hierarchy (`class_hierarchy/`)

**Source:** `module3/examples/class_hierarchy/class_hierarchy.sv`

**What you'll learn:**
- Transaction Class (`MyTransaction`): Extends `uvm_sequence_item` (uvm_object hierarchy)
- Driver Class (`MyDriver`): Extends `uvm_driver` (uvm_component hierarchy)
- Monitor Class (`MyMonitor`): Extends `uvm_monitor` (uvm_component hierarchy)
- Agent Class (`MyAgent`): Extends `uvm_agent`, demonstrates component composition
- Environment Class (`MyEnv`): Extends `uvm_env`, top-level verification environment

**Run:**

```bash
./scripts/module3.sh --class-hierarchy
```

**You should see:** Build/run success messages from the module script (look for "completed successfully").

**Go deeper:** Read the full walkthrough in `docs/MODULE3.md` and explore `module3/examples/class_hierarchy/`.

## 2. Phases (`phases/`)

**Source:** `module3/examples/phases/phases.sv`

**What you'll learn:**
- Build-Time Phases: Top-down execution (parent before child)
- Run-Time Phases: Bottom-up execution (child before parent)
- Cleanup Phases: Bottom-up execution (child before parent)
- Phase Execution Order: Demonstrates all UVM phases

**Run:**

```bash
./scripts/module3.sh --phases
```

**You should see:** Build/run success messages from the module script (look for "completed successfully").

**Go deeper:** Read the full walkthrough in `docs/MODULE3.md` and explore `module3/examples/phases/`.

## 3. Reporting (`reporting/`)

**Source:** `module3/examples/reporting/reporting.sv`

**What you'll learn:**
- Severity Levels: INFO, WARNING, ERROR, FATAL
- Verbosity Levels: UVM_LOW, UVM_MEDIUM, UVM_HIGH, UVM_FULL, UVM_DEBUG
- Message Formatting: Formatted messages with data values
- Hierarchical Reporting: Component context in messages

**Run:**

```bash
./scripts/module3.sh --reporting
```

**You should see:** Build/run success messages from the module script (look for "completed successfully").

**Go deeper:** Read the full walkthrough in `docs/MODULE3.md` and explore `module3/examples/reporting/`.

## 4. ConfigDB (`configdb/`)

**Source:** `module3/examples/configdb/configdb.sv`

**What you'll learn:**
- Setting Configuration: Global and component-specific
- Getting Configuration: Hierarchical lookup
- Configuration Objects: Complex configuration data
- Scalar Values: Simple configuration values

**Run:**

```bash
./scripts/module3.sh --configdb
```

**You should see:** Build/run success messages from the module script (look for "completed successfully").

**Go deeper:** Read the full walkthrough in `docs/MODULE3.md` and explore `module3/examples/configdb/`.

## 5. Factory (`factory/`)

**Source:** `module3/examples/factory/factory.sv`

**What you'll learn:**
- Factory Registration: Automatic registration via `uvm_object_utils`
- Factory Creation: Using `type_id::create()`
- Type Override: Substituting base class with extended class
- Instance Override: Overriding specific instances

**Run:**

```bash
./scripts/module3.sh --factory
```

**You should see:** Build/run success messages from the module script (look for "completed successfully").

**Go deeper:** Read the full walkthrough in `docs/MODULE3.md` and explore `module3/examples/factory/`.

## 6. Objections (`objections/`)

**Source:** `module3/examples/objections/objections.sv`

**What you'll learn:**
- Raising Objections: Keep simulation running
- Dropping Objections: Allow phase completion
- Multiple Objections: Per-component objection tracking
- Coordinated Completion: Phase completes when all objections dropped

**Run:**

```bash
./scripts/module3.sh --objections
```

**You should see:** Build/run success messages from the module script (look for "completed successfully").

**Go deeper:** Read the full walkthrough in `docs/MODULE3.md` and explore `module3/examples/objections/`.
