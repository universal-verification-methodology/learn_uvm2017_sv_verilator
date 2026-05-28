# Module 4 — Hands-on labs

Generated from `docs/MODULE4.md` for slides, PDF, and video.
Run commands from the **course repository root** unless noted.

**Course topic:** UVM Components

## 1. Transactions (`transactions/`)

**Source:** `module4/examples/transactions/transactions.sv`

**What you'll learn:**
- BaseTransaction: Basic transaction with `data` and `address` fields
- ExtendedTransaction: Extended transaction with `control` and `status` fields
- ConstrainedTransaction: Transaction with randomization constraints
- Transaction Operations: Copy, comparison, and string conversion

**Run:**

```bash
./scripts/module4.sh --transactions
```

**You should see:** Build/run success messages from the module script (look for "completed successfully").

**Go deeper:** Read the full walkthrough in `docs/MODULE4.md` and explore `module4/examples/transactions/`.

## 2. Drivers (`drivers/`)

**Source:** `module4/examples/drivers/drivers.sv`

**What you'll learn:**
- SimpleDriver: Basic driver implementation with transaction reception
- ProtocolDriver: Protocol-aware driver with handshaking
- Driver-Sequencer Communication: Using `seq_item_port` for transaction flow
- Signal Driving: Converting transactions to DUT signals

**Run:**

```bash
./scripts/module4.sh --drivers
```

**You should see:** Build/run success messages from the module script (look for "completed successfully").

**Go deeper:** Read the full walkthrough in `docs/MODULE4.md` and explore `module4/examples/drivers/`.

## 3. Monitors (`monitors/`)

**Source:** `module4/examples/monitors/monitors.sv`

**What you'll learn:**
- SimpleMonitor: Basic monitor implementation with signal sampling
- ProtocolMonitor: Protocol-aware monitor with handshake monitoring
- Transaction Creation: Creating transactions from sampled signals
- Analysis Port: Forwarding transactions via analysis port

**Run:**

```bash
./scripts/module4.sh --monitors
```

**You should see:** Build/run success messages from the module script (look for "completed successfully").

**Go deeper:** Read the full walkthrough in `docs/MODULE4.md` and explore `module4/examples/monitors/`.

## 4. Sequencers (`sequencers/`)

**Source:** `module4/examples/sequencers/sequencers.sv`

**What you'll learn:**
- SimpleSequence: Basic sequence implementation
- ExtendedSequence: Extended sequence with configurable item count
- Sequence Execution: Starting sequences on sequencers
- Sequence Item Generation: Creating and sending sequence items

**Run:**

```bash
./scripts/module4.sh --sequencers
```

**You should see:** Build/run success messages from the module script (look for "completed successfully").

**Go deeper:** Read the full walkthrough in `docs/MODULE4.md` and explore `module4/examples/sequencers/`.

## 5. TLM (`tlm/`)

**Source:** `module4/examples/tlm/tlm.sv`

**What you'll learn:**
- TlmProducer: Uses `uvm_blocking_put_port` to produce transactions
- TlmConsumer: Uses `uvm_blocking_get_export` to consume transactions
- AnalysisProducer: Uses `uvm_analysis_port` to broadcast transactions
- AnalysisSubscriber: Uses `uvm_subscriber` to receive transactions

**Run:**

```bash
./scripts/module4.sh --tlm
```

**You should see:** Build/run success messages from the module script (look for "completed successfully").

**Go deeper:** Read the full walkthrough in `docs/MODULE4.md` and explore `module4/examples/tlm/`.

## 6. Scoreboards (`scoreboards/`)

**Source:** `module4/examples/scoreboards/scoreboards.sv`

**What you'll learn:**
- SimpleScoreboard: Basic scoreboard with transaction comparison
- Transaction Storage: Storing expected and actual transactions
- Comparison Logic: Comparing transactions for verification
- Result Reporting: Reporting pass/fail counts

**Run:**

```bash
./scripts/module4.sh --scoreboards
```

**You should see:** Build/run success messages from the module script (look for "completed successfully").

**Go deeper:** Read the full walkthrough in `docs/MODULE4.md` and explore `module4/examples/scoreboards/`.

## 7. Complete Agents (`agents/`)

**Source:** `module4/examples/agents/agents.sv`

**What you'll learn:**
- CompleteAgent: Contains driver, monitor, and sequencer
- Agent Configuration: Configurable as active or passive
- Component Integration: Integrating all agent components
- Agent Testing: Testing complete agent functionality

**Run:**

```bash
./scripts/module4.sh --agents
```

**You should see:** Build/run success messages from the module script (look for "completed successfully").

**Go deeper:** Read the full walkthrough in `docs/MODULE4.md` and explore `module4/examples/agents/`.
