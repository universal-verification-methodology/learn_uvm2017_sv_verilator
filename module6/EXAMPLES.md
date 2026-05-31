# Module 6 — Hands-on labs

Generated from `docs/MODULE6.md` for slides, PDF, and video.
Run commands from the **course repository root** unless noted.

**Course topic:** Complex Testbenches

## 1. Testbench Architecture (`architecture/`)

**Source:** `module6/examples/architecture/architecture.sv`

**What you'll learn:**
- Transaction Class (`ArchTxn`): Base transaction with address, data, and write/read control
- Sequencer (`ArchSequencer`): UVM sequencer for transaction flow control
- Driver (`ArchDriver`): UVM driver that receives and drives transactions
- Monitor (`ArchMonitor`): UVM monitor that observes DUT behavior
- Agent (`ArchAgent`): UVM agent containing sequencer, driver, and monitor

**Run:**

```bash
./scripts/module6.sh --architecture
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE6.md` and explore `module6/examples/architecture/`.

## 2. Multi-Agent Environment (`multi_agent/`)

**Source:** `module6/examples/multi_agent/multi_agent.sv`

**What you'll learn:**
- Transaction (`MA_Txn`): Transaction with agent ID and data fields
- Agent (`MA_Agent`): Parameterized agent with configurable agent ID
- Virtual Sequence (`MA_VirtualSeq`): Coordinates sequences across multiple sequencers
- Environment (`MA_Env`): Contains two agent instances (a0 and a1)
- Test (`MultiAgentTest`): Orchestrates multi-agent verification

**Run:**

```bash
./scripts/module6.sh --multi-agent
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE6.md` and explore `module6/examples/multi_agent/`.

## 3. Protocol Verification (`protocol/`)

**Source:** `module6/examples/protocol/protocol.sv`

**What you'll learn:**
- Interface (`axi_lite_if`): AXI4-Lite interface with all required signals
- Transaction (`AxiTxn`): AXI transaction with read/write, address, and data
- Driver (`AxiDriver`): Protocol-aware driver implementing AXI4-Lite handshake protocol
- Monitor (`AxiMonitor`): Protocol monitor for observing AXI transactions
- Environment (`ProtocolEnv`): Protocol verification environment

**Run:**

```bash
./scripts/module6.sh --protocol
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE6.md` and explore `module6/examples/protocol/`.

## 4. Protocol Checkers (`protocol_checkers/`)

**Source:** `module6/examples/protocol_checkers/protocol_checkers.sv`

**What you'll learn:**
- Interface (`chk_if`): Simple handshake interface with valid/ready signals
- Checker Component (`CheckerComp`): UVM component that monitors protocol rules
- Protocol Rules: Valid must stay asserted until ready (bounded wait)
- Test (`ProtocolCheckersTest`): Test that exercises protocol checker

**Run:**

```bash
./scripts/module6.sh --protocol-checkers && cd module6/examples/protocol_checkers && verilator -sv --cc --exe --timing --trace protocol_checkers.sv protocol_checkers.cpp \ && -I"$UVM_HOME" +incdir+"$UVM_HOME" +define+UVM_NO_DPI \
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE6.md` and explore `module6/examples/protocol_checkers/`.

## 5. Multi-Channel Scoreboards (`scoreboards/`)

**Source:** `module6/examples/scoreboards/scoreboards.sv`

**What you'll learn:**
- Transaction (`SB_Txn`): Scoreboard transaction with stream ID, sequence number, and data
- Stream Producer (`StreamProducer`): Component that generates transactions for a stream
- Multi-Channel Scoreboard (`MultiChannelScoreboard`): Scoreboard that matches transactions from multiple streams
- Test (`ScoreboardsTest`): Test with two stream producers and a scoreboard

**Run:**

```bash
./scripts/module6.sh --scoreboards
```

**You should see:** Build/run success (check module script output).

**Go deeper:** Read the full walkthrough in `docs/MODULE6.md` and explore `module6/examples/scoreboards/`.
