# Module 0 — Hands-on labs

Structured labs for slides and video. Run commands from the **course repository root**.

## 1. Verify toolchain (`install/`)

**What you'll learn:** Confirm Verilator, UVM paths, and build tools before Module 1.

```bash
verilator --version
source scripts/setup_uvm_env.sh 2>/dev/null || true
test -f "${UVM_HOME:-tools/uvm-2017/1800.2-2017-1.0/src}/uvm_pkg.sv" && echo "UVM library OK"
make --version | head -1
```

**You should see:** A Verilator version line, `UVM library OK`, and a Make version.

## 2. Project layout (`project/`)

**What you'll learn:** Where examples, scripts, and tools live in this course.

```bash
ls -la docs/MODULE0.md module1/README.md scripts/installation.sh
```

**You should see:** Course docs, Module 1 README, and the installation orchestrator.

## 3. Optional full install (`install-full/`)

**What you'll learn:** One-shot setup when starting from a clean machine (may take several minutes).

```bash
./scripts/installation.sh --help | head -20
```

**You should see:** Installation script options (run without `--help` when ready to install).

## 4. First smoke test (`hello/`)

**What you'll learn:** After install, Module 1 examples prove the environment works.

```bash
./scripts/module1.sh --help | head -15
```

**You should see:** Module 1 orchestrator flags; run `./scripts/module1.sh --sv-basics` after setup.
