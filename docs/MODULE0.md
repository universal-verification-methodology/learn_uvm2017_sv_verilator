# Module 0: Installation and Setup

**Goal**: Set up development environment and verify installation

## Overview

This module covers the complete setup of your verification environment, including all required tools and dependencies. By the end of this module, you should have a working environment capable of running SystemVerilog UVM testbenches.

### Automated Installation Scripts

This project includes automated installation scripts to simplify the setup process. You can use these scripts to install all tools automatically, or install them manually using the instructions in each section.

**Quick Start (All-in-One Installation)**:
```bash
# Make scripts executable (Linux/Mac/WSL)
chmod +x scripts/*.sh

# Install all tools with default settings
./scripts/installation.sh

# Or install with custom options
./scripts/installation.sh --local  # Install to project-local directory
./scripts/installation.sh --skip-uvm  # Install only Verilator
```

**Individual Tool Installation**:
- Verilator: `./scripts/install_verilator.sh [--from-submodule|--system|--source]`
- UVM Library: Installed automatically with `./scripts/installation.sh` (use `--skip-uvm` to skip)

**Uninstallation**:
- Uninstall all: Use individual uninstall scripts or remove tools manually
- Verilator: `./scripts/uninstall_verilator.sh [--system] [--keep-submodule]`
- UVM: Remove manually from `tools/uvm-2017/` directory

For detailed usage of each script, see the corresponding installation sections below.

## Topics Covered

### 1. System Requirements and Prerequisites

- **Operating System Support**
  - Linux (Ubuntu/Debian, CentOS/RHEL, Fedora)
  - macOS (Intel and Apple Silicon)
  - Windows (WSL2 recommended)
  
- **Hardware Requirements**
  - Minimum 8GB RAM (16GB+ recommended)
  - 10GB free disk space
  - Multi-core processor recommended

- **Software Prerequisites**
  - C/C++ compiler (GCC 7+, Clang 10+, or MSVC)
  - Make or Ninja build system
  - Git
  - Perl (for UVM library)

### 2. Verilator Installation

- **What is Verilator?**
  - Open-source Verilog/SystemVerilog simulator
  - Fast compilation and simulation
  - Limited SystemVerilog support (see limitations section)

- **Automated Installation (Recommended)**
  - **Using the installation script**:
    ```bash
    # Install from git submodule (default - builds from source)
    ./scripts/install_verilator.sh --from-submodule
    
    # Install from system package manager
    ./scripts/install_verilator.sh --system
    
    # Build from source (clones if submodule doesn't exist)
    ./scripts/install_verilator.sh --source
    ```
  - The script automatically:
    - Checks for existing installations
    - Installs system dependencies (build tools, libraries)
    - Sets up git submodule in `tools/verilator/`
    - Builds and installs Verilator
    - Verifies the installation

- **Manual Installation Methods**
  - **Linux Installation**
    - Ubuntu/Debian: `sudo apt-get install verilator`
    - CentOS/RHEL: `sudo yum install verilator` or `sudo dnf install verilator`
    - Fedora: `sudo dnf install verilator`
    - Building from source (latest features)
  
  - **macOS Installation**
    - Homebrew installation: `brew install verilator`
    - MacPorts installation (alternative)
    - Building from source
  
  - **Windows/WSL2 Installation**
    - Installing in WSL2 Ubuntu: `sudo apt-get install verilator`
    - Building from source in WSL2
    - Verifying installation

- **Uninstallation**
  ```bash
  # Uninstall and remove submodule
  ./scripts/uninstall_verilator.sh
  
  # Uninstall but keep git submodule
  ./scripts/uninstall_verilator.sh --keep-submodule
  
  # Also uninstall system package (if installed via package manager)
  ./scripts/uninstall_verilator.sh --system
  ```

- **Verification Steps**
  - Check Verilator version: `verilator --version`
  - Run simple Verilator test
  - Verify compilation works

### 3. UVM Library Installation

- **What is UVM?**
  - Universal Verification Methodology
  - IEEE 1800.2-2017 standard
  - Industry-standard verification framework

- **Automated Installation (Recommended)**
  - **Using the installation script**:
    ```bash
    # UVM is installed automatically with the main installation script
    ./scripts/installation.sh  # Installs both Verilator and UVM 2017-1.0
    
    # To skip UVM installation
    ./scripts/installation.sh --skip-uvm
    ```
  - The script automatically:
    - Downloads Accellera UVM 2017-1.0 tarball to `tools/uvm-2017/`
    - Extracts and sets up UVM library
    - Creates environment setup script (`scripts/setup_uvm_env.sh`)
    - Configures UVM library paths

- **Manual Installation Methods**
  - **From Accellera Tarball**:
    ```bash
    # Download Accellera UVM 2017-1.0 tarball
    mkdir -p tools/uvm-2017
    cd tools/uvm-2017
    wget https://www.accellera.org/images/downloads/standards/uvm/Accellera-1800.2-2017-1.0.tar.gz
    tar -xzf Accellera-1800.2-2017-1.0.tar.gz
    # UVM will be extracted to 1800.2-2017-1.0/
    ```
  - **From System Package** (if available):
    - Some Linux distributions provide UVM packages
    - Check your distribution's package manager

- **Uninstallation**
  ```bash
  # Remove UVM manually
  rm -rf tools/uvm-2017/
  
  # Or remove just the extracted directory, keeping the tarball
  rm -rf tools/uvm-2017/1800.2-2017-1.0/
  ```

- **Environment Variables**
  - `UVM_HOME`: Path to UVM library
  - `UVM_VERBOSITY`: Default verbosity level
  - Include paths for compilation

- **Verification Steps**
  - Check UVM library exists: `ls $UVM_HOME/uvm_pkg.sv` (after sourcing `scripts/setup_uvm_env.sh`)
  - Compile simple UVM test
  - Verify UVM classes available

### 4. Commercial Simulator Setup (Optional)

While this project focuses on Verilator, you may want to use commercial simulators for full UVM support:

- **Synopsys VCS**
  - Installation from Synopsys
  - License setup
  - UVM library integration

- **Mentor QuestaSim/ModelSim**
  - Installation from Siemens
  - License setup
  - UVM library integration

- **Cadence Xcelium**
  - Installation from Cadence
  - License setup
  - UVM library integration

**Note**: Commercial simulators provide full UVM support, while Verilator has limitations. See [SYSTEMVERILOG_VERILATOR_INTERACTION.md](SYSTEMVERILOG_VERILATOR_INTERACTION.md) for details.

### 5. Build System Configuration

- **Makefile Setup**
  - Basic Makefile for Verilator
  - Compilation flags
  - Include paths
  - Test execution

- **Verilator Compilation**
  - SystemVerilog flags: `-sv`, `--timing`
  - Include paths: `+incdir+$UVM_HOME` (UVM_HOME already points to the src directory)
  - Optimization flags
  - Coverage options

- **Commercial Simulator Setup**
  - Compilation scripts
  - Simulation scripts
  - Waveform generation

### 6. IDE Setup and Configuration

- **Recommended IDEs**
  - VS Code with SystemVerilog extension
  - Verible (SystemVerilog linter/formatter)
  - Sigasi Studio (commercial)
  - Vim/Neovim with LSP

- **VS Code Configuration**
  - SystemVerilog extension setup
  - Verilator integration
  - Debugging configuration
  - Task runner setup for simulations
  - Extension recommendations

- **Editor Configuration**
  - SystemVerilog formatting (Verible)
  - Linting (Verilator, Verible)
  - Code formatting on save
  - Syntax highlighting

### 7. Project Structure Setup

- **Directory Structure**
  - Source code organization
  - Test directory structure
  - DUT (Design Under Test) organization
  - Configuration files
  - `tools/` directory for tools (Verilator as git submodule, UVM as tarball)

- **Git Submodules Management**
  - Verilator is managed as a git submodule in `tools/verilator/`
  - UVM is downloaded as a tarball to `tools/uvm-2017/` (not a git submodule)
  - Initialize submodules: `./scripts/init_submodules.sh` or `git submodule update --init --recursive`
  - Update submodules: `./scripts/update_submodules.sh` or `git submodule update --remote`
  - Add new submodule: `./scripts/add_submodule.sh <repo_url> <path>`
  - Remove submodule: `./scripts/remove_submodule.sh <path>`

- **Makefile/Configuration**
  - Simple Makefile for running tests
  - Verilator configuration
  - Environment variable management

- **Version Control**
  - Git initialization
  - .gitignore for SystemVerilog and simulation (include build artifacts, waveforms)
  - Initial commit structure
  - Git submodules in `.gitmodules` file (only Verilator, not UVM)

### 8. First "Hello World" Verification Test

- **Prerequisites**
  - Ensure all tools are installed: `./scripts/installation.sh`
  - Verify tools are accessible: `verilator --version` and `ls $UVM_HOME/uvm_pkg.sv` (after sourcing `scripts/setup_uvm_env.sh`)

- **Simple DUT Creation**
  - Basic Verilog module (e.g., AND gate)
  - Simple testbench structure

- **SystemVerilog Test**
  - Basic SystemVerilog testbench structure
  - Clock generation
  - Signal driving and reading
  - Running the test

- **UVM Test**
  - First UVM test class
  - Basic UVM phases
  - Running UVM test
  - Understanding output

### 9. Verilator Limitations and Workarounds

- **Known Limitations**
  - Limited SystemVerilog support
  - Some UVM classes may not work
  - Complex TLM connections may fail
  - Full assertion support limited

- **Workarounds**
  - Use simplified patterns where possible
  - Document commercial alternatives
  - Focus on concepts over tool features

- **Commercial Simulator Alternatives**
  - When Verilator doesn't support a feature
  - How to adapt examples for commercial tools
  - Compatibility notes

### 10. Troubleshooting Common Issues

- **Verilator Issues**
  - Compilation errors
  - Missing dependencies
  - Version compatibility
  - Path issues
  - SystemVerilog syntax errors

- **UVM Library Issues**
  - Import errors
  - Path configuration
  - Version compatibility
  - Compilation errors

- **Build System Issues**
  - Makefile errors
  - Include path problems
  - Compilation flags

- **IDE Issues**
  - SystemVerilog syntax highlighting
  - Import resolution problems
  - Debugging not working

### 11. Verification Checklist

- [ ] C/C++ compiler installed and working
- [ ] Verilator installed and verified
  - Using script: `./scripts/install_verilator.sh --from-submodule`
  - Verify: `verilator --version`
- [ ] UVM library installed and verified
  - Using script: `./scripts/installation.sh` (UVM is installed automatically)
  - Verify: `ls $UVM_HOME/uvm_pkg.sv` (after sourcing `scripts/setup_uvm_env.sh`)
- [ ] All tools verified together: Run `./scripts/installation.sh` and verify with `verilator --version` and `ls $UVM_HOME/uvm_pkg.sv` (after sourcing `scripts/setup_uvm_env.sh`)
- [ ] IDE configured and working
- [ ] First test runs successfully
- [ ] Can create and run simple testbench
- [ ] Understand basic project structure
- [ ] Know how to get help when stuck
- [ ] Understand Verilator limitations

## Learning Outcomes

By the end of this module, you should be able to:

- Install and configure all required tools
- Set up Verilator
- Install and verify UVM library
- Configure your IDE for verification work
- Create a basic project structure
- Run a simple verification test
- Understand Verilator limitations
- Troubleshoot common installation issues

## Exercises

1. **Installation Verification**
   - Verify each tool independently:
     - Verilator: `verilator --version`
     - UVM: `ls $UVM_HOME/uvm_pkg.sv` (after sourcing `scripts/setup_uvm_env.sh`)
   - Document any issues encountered

2. **Environment Setup**
   - Option A (Automated): Run `./scripts/installation.sh` to install everything
   - Option B (Manual):
     - Install tools individually using the scripts or manually
   - Set up environment variables by sourcing: `source scripts/setup_uvm_env.sh`

3. **First Test**
   - Create a simple Verilog module
   - Write a SystemVerilog testbench for it
   - Run the test successfully

4. **IDE Configuration**
   - Set up your preferred IDE
   - Configure SystemVerilog syntax highlighting
   - Test debugging functionality

5. **Project Structure**
   - Create a well-organized project structure
   - Set up version control (Verilator is a git submodule, UVM is a tarball)
   - Create initial documentation
   - Understand the `tools/` directory structure (Verilator submodule, UVM tarball)

## Assessment

- [ ] Can install all required tools independently
- [ ] Can set up Verilator
- [ ] Can verify Verilator installation
- [ ] Can verify UVM library installation
- [ ] Can configure IDE for verification work
- [ ] Can create and run a simple test
- [ ] Can troubleshoot common issues
- [ ] Understands project structure best practices
- [ ] Understands Verilator limitations

## Next Steps

After completing this module, proceed to [Module 1: SystemVerilog and Verification Basics](MODULE1.md) to learn the fundamental concepts needed for verification.

## Additional Resources

- **Installation Scripts**:
  - All scripts are located in the `scripts/` directory
  - Run `./scripts/installation.sh --help` for detailed usage
  - Individual script help: `./scripts/install_<tool>.sh --help`
  
- **Verilator Documentation**: https://verilator.org/
- **UVM Documentation**: https://www.accellera.org/downloads/standards/uvm
- **IEEE 1800.2-2017 Standard**: IEEE 1800.2-2017
- **Git Submodules**: https://git-scm.com/book/en/v2/Git-Tools-Submodules
