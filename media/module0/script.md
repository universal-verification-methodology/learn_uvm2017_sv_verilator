        # Narration script — Module 0: Installation and Setup

        **Target length:** ~36 minutes (75 slides; auto-generated — edit per slide as needed)

        ## Timing table

        | Slide | Section | Duration | Narration |
|-------|---------|----------|-----------|
| 1 | Module 0 | 0:25 | Welcome to module 0, Installation and Setup. In this module you will set up development environment and verify installation. |
| 2 | Learning objectives | 0:16 | Here is what you will learn in this module. Set up development environment and verify installation |
| 3 | Prerequisites | 0:16 | Before you start, make sure you have these prerequisites. See module README |
| 4 | Learning path | 0:22 | Learning path. Set up development environment and verify installation |
| 5 | Overview | 0:16 | Overview. This module covers the complete setup of your verification environment, including all required tools and dependencies. By the end of... |
| 6 | Design architecture | 0:08 | Next section: Design architecture. |
| 7 | 1. Course repository layout (1/3) | 0:38 | 1. Course repository layout (1/3). Project-local install (--local) keeps tools inside the repo for reproducibility WSL2/Linux is the primary target; macOS supported via Homebrew Environment variables: VERILATOR_ROOT, UVM_HOME must resolve before running labs tools/verilator/: Git submodule — SystemVerilog/Verilog simulator (build from source) Refer to the diagram on the right. |
| 8 | 1. Course repository layout (2/3) | 0:28 | 1. Course repository layout (2/3). tools/uvm-2017/: IEEE 1800.2-2017 UVM library sources (UVM_HOME) scripts/installation.sh: One-shot installer for Verilator + UVM + dependencies scripts/moduleN.sh: Per-module example orchestrator (modules 1–8) moduleN/examples/: Hands-on labs referenced by slides and EXAMPLES.md |
| 9 | 1. Course repository layout (3/3) | 0:16 | 1. Course repository layout (3/3). media/moduleN/: Generated slides, PDF, and narrated video per module |
| 10 | 2. Build and simulation artifact flow (1/2) | 0:38 | 2. Build and simulation artifact flow (1/2). Verilator compiles design + testbench into a single fast C++ binary UVM examples add -I$UVM_HOME/src and +define+UVM_NO_DPI for Verilator compatibility Self-check flow: install → verilator --version → ./scripts/module0.sh --check → run Module 1 lab 1: Source .v/.sv — RTL and testbench SystemVerilog Refer to the diagram on the right. |
| 11 | 2. Build and simulation artifact flow (2/2) | 0:28 | 2. Build and simulation artifact flow (2/2). Match each bullet to files in the repository. 2: verilator --cc — Emits C++ model under obj_dir/ 3: make -C obj_dir — Links Vtop (or V<module>) executable 4: ./obj_dir/V* — Runs simulation; prints PASS/FAIL or UVM report 5: *.vcd (optional) — Waveform when --trace enabled |
| 12 | Installation & execution | 0:08 | Next section: Installation & execution. |
| 13 | How to run this module | 0:32 | How to run this module. From repo root: ./scripts/module0.sh --check — validate environment ./scripts/module0.sh --demo — print demo commands to run locally ./scripts/module0.sh --scaffold — create ~/unix_practice/ exercise files Open module0/EXAMPLES.md — run each numbered lab in your terminal Track progress with module0/CHECKLIST.md before moving on From MODULE0 — execution and artifact layout. |
| 14 | Artifact flow (spec → sim) (1) | 0:28 | Artifact flow (spec → sim) (1). Match each bullet to files in the repository. 1: Source .v/.sv — RTL and testbench SystemVerilog 2: verilator --cc — Emits C++ model under obj_dir/ 3: make -C obj_dir — Links Vtop (or V<module>) executable 4: ./obj_dir/V* — Runs simulation; prints PASS/FAIL or UVM report From MODULE0 — execution and artifact layout. |
| 15 | Artifact flow (spec → sim) (2) | 0:16 | Artifact flow (spec → sim) (2). Match each bullet to files in the repository. 5: *.vcd (optional) — Waveform when --trace enabled From MODULE0 — execution and artifact layout. |
| 16 | Example directory layout (1) | 0:32 | Example directory layout (1). Match each bullet to files in the repository. tools/verilator/: Git submodule — SystemVerilog/Verilog simulator (build from source) tools/uvm-2017/: IEEE 1800.2-2017 UVM library sources (UVM_HOME) scripts/installation.sh: One-shot installer for Verilator + UVM + dependencies scripts/moduleN.sh: Per-module example orchestrator (modules 1–8) moduleN/examples/... |
| 17 | Example directory layout (2) | 0:16 | Example directory layout (2). Match each bullet to files in the repository. media/moduleN/: Generated slides, PDF, and narrated video per module Match each path to files under module/examples/. |
| 18 | Step-by-step execution sequence | 0:28 | Follow these steps in order when working through this module. install verilator --version ./scripts/module0.sh --check run Module 1 lab |
| 19 | Verification & testing methods | 0:08 | Next section: Verification & testing methods. |
| 20 | 1. Environment verification strategy (1/2) | 0:38 | 1. Environment verification strategy (1/2). Run ./scripts/installation.sh (or per-tool scripts) before any module labs Verify compiler toolchain: gcc --version, make --version, git --version Confirm Verilator: verilator --version and a minimal --lint-only compile Confirm UVM: echo $UVM_HOME points at tools/uvm-2017/1800.2-2017-1.0/src Refer to the diagram on the right. |
| 21 | 1. Environment verification strategy (2/2) | 0:16 | 1. Environment verification strategy (2/2). Use ./scripts/module0.sh --check for an automated PASS summary |
| 22 | 2. Smoke test and troubleshooting workflow (1/2) | 0:38 | 2. Smoke test and troubleshooting workflow (1/2). Smoke test: compile one trivial Verilog file with Verilator; expect clean exit UVM smoke: run module3/examples/class_hierarchy after Module 0 completes Common failures: missing UVM_HOME, wrong Verilator version, WSL path issues Logs: capture terminal output; search for Error, %Error, UVM_FATAL Refer to the diagram on the right. |
| 23 | 2. Smoke test and troubleshooting workflow (2/2) | 0:16 | 2. Smoke test and troubleshooting workflow (2/2). Escalation: re-run installer with --from-submodule for a clean Verilator build |
| 24 | Syllabus topics | 0:08 | Next section: Syllabus topics. |
| 25 | 1. System Requirements and Prerequisites (1/3) | 0:36 | Before you start, make sure you have these prerequisites. Operating System Support Linux (Ubuntu/Debian, CentOS/RHEL, Fedora) macOS (Intel and Apple Silicon) Windows (WSL2 recommended) Hardware Requirements |
| 26 | 1. System Requirements and Prerequisites (2/3) | 0:36 | Before you start, make sure you have these prerequisites. 10GB free disk space Multi-core processor recommended Software Prerequisites C/C++ compiler (GCC 7+, Clang 10+, or MSVC) Make or Ninja build system |
| 27 | 1. System Requirements and Prerequisites (3/3) | 0:16 | Before you start, make sure you have these prerequisites. Perl (for UVM library) |
| 28 | 2. Verilator Installation (1/6) | 0:36 | 2. Verilator Installation (1/6). What is Verilator? Open-source Verilog/SystemVerilog simulator Fast compilation and simulation Limited SystemVerilog support (see limitations section) Automated Installation (Recommended) |
| 29 | 2. Verilator Installation (2/6) | 0:36 | 2. Verilator Installation (2/6). The script automatically: Checks for existing installations Installs system dependencies (build tools, libraries) Sets up git submodule in tools/verilator/ Builds and installs Verilator |
| 30 | 2. Verilator Installation (3/6) | 0:36 | 2. Verilator Installation (3/6). Manual Installation Methods Linux Installation Ubuntu/Debian: sudo apt-get install verilator CentOS/RHEL: sudo yum install verilator or sudo dnf install verilator Fedora: sudo dnf install verilator |
| 31 | 2. Verilator Installation (4/6) | 0:36 | 2. Verilator Installation (4/6). macOS Installation Homebrew installation: brew install verilator MacPorts installation (alternative) Building from source Windows/WSL2 Installation |
| 32 | 2. Verilator Installation (5/6) | 0:36 | 2. Verilator Installation (5/6). Building from source in WSL2 Verifying installation Uninstallation Verification Steps Check Verilator version: verilator --version |
| 33 | 2. Verilator Installation (6/6) | 0:16 | 2. Verilator Installation (6/6). Verify compilation works |
| 34 | 3. UVM Library Installation (1/5) | 0:36 | 3. UVM Library Installation (1/5). What is UVM? Universal Verification Methodology IEEE 1800.2-2017 standard Industry-standard verification framework Automated Installation (Recommended) |
| 35 | 3. UVM Library Installation (2/5) | 0:36 | 3. UVM Library Installation (2/5). The script automatically: Downloads Accellera UVM 2017-1.0 tarball to tools/uvm-2017/ Extracts and sets up UVM library Creates environment setup script (scripts/setup_uvm_env.sh) Configures UVM library paths |
| 36 | 3. UVM Library Installation (3/5) | 0:36 | 3. UVM Library Installation (3/5). From Accellera Tarball: From System Package (if available): Some Linux distributions provide UVM packages Check your distribution's package manager Uninstallation |
| 37 | 3. UVM Library Installation (4/5) | 0:36 | 3. UVM Library Installation (4/5). UVM_HOME: Path to UVM library UVM_VERBOSITY: Default verbosity level Include paths for compilation Verification Steps Check UVM library exists: ls $UVM_HOME/uvm_pkg.sv (after sourcing scripts/setup_uvm_env.sh) |
| 38 | 3. UVM Library Installation (5/5) | 0:16 | 3. UVM Library Installation (5/5). Verify UVM classes available |
| 39 | 4. Commercial Simulator Setup (Optional) (1/2) | 0:36 | 4. Commercial Simulator Setup (Optional) (1/2). Synopsys VCS Installation from Synopsys License setup UVM library integration Mentor QuestaSim/ModelSim |
| 40 | 4. Commercial Simulator Setup (Optional) (2/2) | 0:36 | 4. Commercial Simulator Setup (Optional) (2/2). License setup UVM library integration Cadence Xcelium Installation from Cadence License setup |
| 41 | 5. Build System Configuration (1/3) | 0:36 | 5. Build System Configuration (1/3). Makefile Setup Basic Makefile for Verilator Compilation flags Include paths Test execution |
| 42 | 5. Build System Configuration (2/3) | 0:36 | 5. Build System Configuration (2/3). SystemVerilog flags: -sv, --timing Include paths: +incdir+$UVM_HOME (UVM_HOME already points to the src directory) Optimization flags Coverage options Commercial Simulator Setup |
| 43 | 5. Build System Configuration (3/3) | 0:20 | 5. Build System Configuration (3/3). Simulation scripts Waveform generation |
| 44 | 6. IDE Setup and Configuration (1/3) | 0:36 | 6. IDE Setup and Configuration (1/3). Recommended IDEs VS Code with SystemVerilog extension Verible (SystemVerilog linter/formatter) Sigasi Studio (commercial) Vim/Neovim with LSP |
| 45 | 6. IDE Setup and Configuration (2/3) | 0:36 | 6. IDE Setup and Configuration (2/3). SystemVerilog extension setup Verilator integration Debugging configuration Task runner setup for simulations Extension recommendations |
| 46 | 6. IDE Setup and Configuration (3/3) | 0:28 | 6. IDE Setup and Configuration (3/3). SystemVerilog formatting (Verible) Linting (Verilator, Verible) Code formatting on save Syntax highlighting |
| 47 | 7. Project Structure Setup (1/4) | 0:36 | 7. Project Structure Setup (1/4). Directory Structure Source code organization Test directory structure DUT (Design Under Test) organization Configuration files |
| 48 | 7. Project Structure Setup (2/4) | 0:36 | 7. Project Structure Setup (2/4). Git Submodules Management Verilator is managed as a git submodule in tools/verilator/ UVM is downloaded as a tarball to tools/uvm-2017/ (not a git submodule) Initialize submodules: ./scripts/init_submodules.sh or git submodule update --init --recursive Update submodules: ./scripts/update_submodules.sh or git submodule update --remote |
| 49 | 7. Project Structure Setup (3/4) | 0:36 | 7. Project Structure Setup (3/4). Remove submodule: ./scripts/remove_submodule.sh <path> Makefile/Configuration Simple Makefile for running tests Verilator configuration Environment variable management |
| 50 | 7. Project Structure Setup (4/4) | 0:28 | 7. Project Structure Setup (4/4). Git initialization .gitignore for SystemVerilog and simulation (include build artifacts, waveforms) Initial commit structure Git submodules in .gitmodules file (only Verilator, not UVM) |
| 51 | 8. First "Hello World" Verification Test (1/3) | 0:36 | 8. First "Hello World" Verification Test (1/3). Prerequisites Ensure all tools are installed: ./scripts/installation.sh Verify tools are accessible: verilator --version and ls $UVM_HOME/uvm_pkg.sv (after sourcing scripts/setup_uvm_env.sh) Simple DUT Creation Basic Verilog module (e.g., AND gate) |
| 52 | 8. First "Hello World" Verification Test (2/3) | 0:36 | 8. First "Hello World" Verification Test (2/3). SystemVerilog Test Basic SystemVerilog testbench structure Clock generation Signal driving and reading Running the test |
| 53 | 8. First "Hello World" Verification Test (3/3) | 0:28 | 8. First "Hello World" Verification Test (3/3). First UVM test class Basic UVM phases Running UVM test Understanding output |
| 54 | 9. Verilator Limitations and Workarounds (1/3) | 0:36 | 9. Verilator Limitations and Workarounds (1/3). Known Limitations Limited SystemVerilog support Some UVM classes may not work Complex TLM connections may fail Full assertion support limited |
| 55 | 9. Verilator Limitations and Workarounds (2/3) | 0:36 | 9. Verilator Limitations and Workarounds (2/3). Use simplified patterns where possible Document commercial alternatives Focus on concepts over tool features Commercial Simulator Alternatives When Verilator doesn't support a feature |
| 56 | 9. Verilator Limitations and Workarounds (3/3) | 0:16 | 9. Verilator Limitations and Workarounds (3/3). Compatibility notes |
| 57 | 10. Troubleshooting Common Issues (1/4) | 0:36 | 10. Troubleshooting Common Issues (1/4). Verilator Issues Compilation errors Missing dependencies Version compatibility Path issues |
| 58 | 10. Troubleshooting Common Issues (2/4) | 0:36 | 10. Troubleshooting Common Issues (2/4). UVM Library Issues Import errors Path configuration Version compatibility Compilation errors |
| 59 | 10. Troubleshooting Common Issues (3/4) | 0:36 | 10. Troubleshooting Common Issues (3/4). Makefile errors Include path problems Compilation flags IDE Issues SystemVerilog syntax highlighting |
| 60 | 10. Troubleshooting Common Issues (4/4) | 0:16 | 10. Troubleshooting Common Issues (4/4). Debugging not working |
| 61 | 11. Verification Checklist (1/3) | 0:36 | 11. Verification Checklist (1/3). C/C++ compiler installed and working Verilator installed and verified Using script: ./scripts/install_verilator.sh --from-submodule Verify: verilator --version UVM library installed and verified |
| 62 | 11. Verification Checklist (2/3) | 0:36 | 11. Verification Checklist (2/3). Verify: ls $UVM_HOME/uvm_pkg.sv (after sourcing scripts/setup_uvm_env.sh) All tools verified together: Run ./scripts/installation.sh and verify with verilator --version and ls $UVM_HOME/uvm_pkg.sv (after... IDE configured and working First test runs successfully Can create and run simple testbench |
| 63 | 11. Verification Checklist (3/3) | 0:20 | 11. Verification Checklist (3/3). Know how to get help when stuck Understand Verilator limitations |
| 64 | Hands-on examples | 0:08 | Next section: Hands-on examples. |
| 65 | Module 0 self-check | 0:45 | Module 0 self-check. Watch the terminal output and confirm you see the expected pass message. |
| 66 | Demo: Verify toolchain | 0:45 | Demo: Verify toolchain. Watch the terminal output and confirm you see the expected pass message. |
| 67 | Demo: Project layout | 0:45 | Demo: Project layout. Watch the terminal output and confirm you see the expected pass message. |
| 68 | Demo: Optional full install | 0:45 | Demo: Optional full install. Watch the terminal output and confirm you see the expected pass message. |
| 69 | Demo: First smoke test | 0:45 | Demo: First smoke test. Watch the terminal output and confirm you see the expected pass message. |
| 70 | Practice & assessment | 0:08 | Next section: Practice & assessment. |
| 71 | What you should know (1/2) | 0:36 | By now you should be able to explain the following. Install and configure all required tools Set up Verilator Install and verify UVM library Configure your IDE for verification work Create a basic project structure From MODULE0 Learning Outcomes. |
| 72 | What you should know (2/2) | 0:20 | By now you should be able to explain the following. Understand Verilator limitations Troubleshoot common installation issues From MODULE0 Learning Outcomes. |
| 73 | Exercises | 0:32 | Exercises. Installation Verification Environment Setup First Test IDE Configuration Project Structure |
| 74 | Assessment checklist | 0:36 | Assessment checklist. Can install all required tools independently Can set up Verilator Can verify Verilator installation Can verify UVM library installation Can configure IDE for verification work |
| 75 | Summary & next steps | 0:28 | In summary: Set up development environment and verify installation Next up: Next module in course. Set up development environment and verify installation Complete module0/CHECKLIST.md Review module0/EXAMPLES.md and run each lab Next: Next module in course |

        ## Section narration (edit for TTS)

        - **Design architecture (Course repository layout, Build and simulation artifact flow):** Walk through the block diagram, then relate each block to files under module0/examples/.
- **Execution:** Explain make run / UVM make steps, then walk the artifact table and directed-test sequence slide by slide.
- **Verification (Environment verification strategy, Smoke test and troubleshooting workflow):** Explain what stimulus is applied, what is checked, and what is intentionally out of scope.
- **Syllabus:** Cover 11 topic section(s) — pause on protocol timing and signals.
- **Before exercises:** Ask learners to recall the learning outcomes slide; they should explain each bullet in their own words.
- **Hands-on:** Run module0/EXAMPLES.md labs; narrate expected PASS lines.

        ## Notes

        - Slides from **Before You Start**, **Design Architecture**, **Verification & Testing Methods**, **Topics Covered**, **EXAMPLES.md**, and **Learning Outcomes**.
        - Full detail: `docs/MODULE0.md` and `module0/EXAMPLES.md`.
        - Regenerate: `regenerate_course_outlines.sh <course_root> --module 0`
