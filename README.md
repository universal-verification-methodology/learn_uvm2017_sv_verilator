# Learn UVM with SystemVerilog and Verilator

[![License: CC BY 4.0](https://img.shields.io/badge/License-CC%20BY%204.0-lightgrey.svg)](https://creativecommons.org/licenses/by/4.0/)
[![SystemVerilog](https://img.shields.io/badge/SystemVerilog-2017-blue.svg)](https://ieeexplore.ieee.org/document/8299595)
[![UVM](https://img.shields.io/badge/UVM-2017--1.0-orange.svg)](https://www.accellera.org/)
[![Verilator](https://img.shields.io/badge/Verilator-5.042+-red.svg)](https://www.veripool.org/verilator/)

A comprehensive, modular learning path for mastering **UVM (Universal Verification Methodology)** using **SystemVerilog** (IEEE 1800.2-2017) with progressive complexity levels. This project provides a complete educational resource with examples, testbenches, and documentation covering all aspects of UVM verification using SystemVerilog.

## 📋 Table of Contents
\
- [Overview](#overview)
- [Features](#features)
- [Prerequisites](#prerequisites)
- [Quick Start](#quick-start)
- [Project Structure](#project-structure)
- [Documentation](#documentation)
- [Modules](#modules)
- [Installation](#installation)
- [Usage](#usage)
- [Verilator Limitations and Workarounds](#verilator-limitations-and-workarounds)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgments](#acknowledgments)

## 🎯 Overview

This project is a complete educational resource for learning UVM verification methodology using SystemVerilog, following the IEEE 1800.2-2017 standard. It provides:

- **8 Progressive Modules**: From SystemVerilog basics to real-world applications
- **Comprehensive Examples**: Over 50+ working examples with detailed explanations
- **Complete Testbenches**: SystemVerilog UVM testbenches for each module
- **Automated Scripts**: Installation and orchestration scripts for easy setup
- **Full Documentation**: Detailed guides covering all concepts and usage
- **IEEE 1800.2-2017 Coverage**: Complete coverage of the UVM standard
- **Verilator Integration**: Examples and workarounds for Verilator's SystemVerilog support

> **📚 Companion Project**: This project has a companion pyuvm learning path that covers the same UVM methodology using Python. Both projects share the same module structure and learning outcomes. The pyuvm path may be easier for those with Python backgrounds. See [COMPARISON_WITH_PYUVM.md](docs/COMPARISON_WITH_PYUVM.md) for details on choosing the right path for you.

### Why SystemVerilog UVM?

- **Industry Standard**: The most widely used verification methodology in the industry
- **IEEE Standard**: Officially standardized as IEEE 1800.2-2017
- **Full Feature Set**: Complete implementation of all UVM features
- **Commercial Support**: Works with all major commercial simulators
- **Open Source Options**: Can be used with Verilator (with some limitations)
- **Career Relevance**: Essential skill for verification engineers

### Verilator and SystemVerilog UVM

**Important Note**: Verilator 5.042+ now supports UVM 2017-1.0! (See [Antmicro blog post](https://antmicro.com/blog/2025/10/support-for-upstream-uvm-2017-in-verilator)). This project:

- ✅ Uses Verilator 5.042+ as the default (with full UVM 2017-1.0 support)
- ✅ Covers complete UVM methodology and concepts
- ✅ Provides examples that work with Verilator
- ✅ Documents Verilator-specific flags and configurations
- ✅ Includes notes for commercial simulator compatibility
- ✅ Prepares you for both open-source and commercial tool environments

## ✨ Features

- ✅ **Complete UVM Coverage**: All 12 sections of IEEE 1800.2-2017 standard
- ✅ **Progressive Learning**: 8 modules from beginner to advanced
- ✅ **Practical Examples**: Real-world verification scenarios
- ✅ **Automated Setup**: One-command installation scripts
- ✅ **Verilator Integration**: Examples and workarounds for Verilator
- ✅ **Commercial Simulator Notes**: Compatibility notes for VCS, Questa, Xcelium
- ✅ **Git Submodules**: Easy tool management
- ✅ **Comprehensive Documentation**: Detailed guides for every concept
- ✅ **Production Quality**: Best practices and industry patterns
- ✅ **Exercises**: Hands-on practice for each module

## 📚 Prerequisites

### Required Knowledge

- **Hardware Description Languages**: Solid understanding of Verilog/SystemVerilog
- **SystemVerilog Programming**: Intermediate level (classes, interfaces, packages)
- **Digital Design Concepts**: Flip-flops, state machines, buses, protocols
- **Verification Basics**: Testbenches, assertions, coverage (helpful but not required)
- **Object-Oriented Programming**: Understanding of OOP concepts (classes, inheritance, polymorphism)

### System Requirements

- **Operating System**: Linux, macOS, or Windows (WSL2 recommended)
- **SystemVerilog Simulator**: Verilator 5.042+ (default, with UVM 2017-1.0 support) or commercial simulator (VCS, Questa, Xcelium)
- **UVM Library**: Accellera UVM 2017-1.0 (IEEE 1800.2-2017)
- **Memory**: Minimum 8GB RAM (16GB+ recommended for complex testbenches)
- **Disk Space**: ~3GB for tools and dependencies
- **Build Tools**: C++ compiler (GCC, Clang), Make or Ninja

## 🚀 Quick Start

### 1. Clone the Repository

```bash
git clone <repository-url>
cd learn_uvm_sv
```

### 2. Install All Tools (Automated)

```bash
# Make scripts executable (Linux/Mac/WSL)
chmod +x scripts/*.sh

# Install all tools with default settings
./scripts/module0.sh
```

### 3. Run Your First Example

```bash
# Run Module 1 examples
./scripts/module1.sh

# Or run specific examples
./scripts/module1.sh --sv-basics
./scripts/module1.sh --uvm-tests
```

### 4. Start Learning

Begin with [Module 0: Installation and Setup](docs/MODULE0.md) and follow the modules sequentially.

## 📁 Project Structure

```
learn_uvm_sv/
├── docs/                      # Comprehensive documentation
│   ├── MODULE0.md            # Installation and setup guide
│   ├── MODULE1.md            # SystemVerilog and verification basics
│   ├── MODULE2.md            # SystemVerilog testbench fundamentals
│   ├── MODULE3.md            # UVM basics
│   ├── MODULE4.md            # UVM components
│   ├── MODULE5.md            # Advanced UVM concepts
│   ├── MODULE6.md            # Complex testbenches
│   ├── MODULE7.md            # Real-world applications
│   ├── MODULE8.md            # UVM miscellaneous utilities
│   ├── STUDY.md              # Complete study plan
│   ├── SYSTEMVERILOG_VERILATOR_INTERACTION.md  # SystemVerilog-Verilator guide
│   ├── COVERAGE_CHECKLIST.md # Coverage verification
│   ├── IEEE_1800_2_2017_COVERAGE.md # IEEE standard coverage
│   └── GLOSSARY.md           # UVM terminology
│
├── module0/                   # Installation scripts and tools
├── module1/                   # SystemVerilog basics and verification fundamentals
│   ├── examples/             # SystemVerilog examples
│   ├── dut/                   # Design Under Test (Verilog/SystemVerilog)
│   └── tests/                 # Testbenches (SystemVerilog UVM)
├── module2/                   # SystemVerilog testbench fundamentals
├── module3/                   # UVM basics
├── module4/                   # UVM components
├── module5/                   # Advanced UVM concepts
├── module6/                   # Complex testbenches
├── module7/                   # Real-world applications
├── module8/                   # UVM utilities
│
├── scripts/                   # Automation scripts
│   ├── module0.sh            # Install all tools
│   ├── module1.sh            # Run Module 1 examples
│   ├── ...                    # Module orchestrators
│   ├── install_*.sh          # Individual tool installers
│   └── uninstall_*.sh        # Tool uninstallers
│
├── tools/                     # Git submodules for tools
│   ├── verilator/            # Verilator simulator (default: 5.042)
│   └── uvm-2017/             # UVM library (Accellera UVM 2017-1.0)
│
└── README.md                  # This file
```

## 📖 Documentation

The `docs/` directory contains comprehensive documentation for the entire learning path:

### Core Documentation

- **[STUDY.md](docs/STUDY.md)**: Complete study plan with learning path, schedule, and resources
- **[SYSTEMVERILOG_VERILATOR_INTERACTION.md](docs/SYSTEMVERILOG_VERILATOR_INTERACTION.md)**: Detailed guide on SystemVerilog-Verilator interaction and limitations

### Module Documentation

Each module has a dedicated guide with examples, exercises, and detailed explanations:

- **[MODULE0.md](docs/MODULE0.md)**: Installation and Setup
  - System requirements, tool installation, environment setup
  - Automated installation scripts usage
  - Verification checklist

- **[MODULE1.md](docs/MODULE1.md)**: SystemVerilog and Verification Basics
  - SystemVerilog OOP, classes, interfaces, packages
  - Data structures for verification
  - Error handling and logging
  - Basic testbenches

- **[MODULE2.md](docs/MODULE2.md)**: SystemVerilog Testbench Fundamentals
  - Clock generation, reset patterns
  - Signal access and manipulation
  - Common verification patterns
  - SystemVerilog testbenches for registers, FIFOs, state machines

- **[MODULE3.md](docs/MODULE3.md)**: UVM Basics
  - UVM class hierarchy, phases, reporting
  - ConfigDB, factory pattern, objections
  - Basic UVM testbenches

- **[MODULE4.md](docs/MODULE4.md)**: UVM Components
  - Drivers, monitors, sequencers, sequences
  - TLM (Transaction-Level Modeling)
  - Scoreboards, agents, complete testbenches

- **[MODULE5.md](docs/MODULE5.md)**: Advanced UVM Concepts
  - Virtual sequences, coverage models
  - Configuration, callbacks, register models
  - Advanced testbench patterns

- **[MODULE6.md](docs/MODULE6.md)**: Complex Testbenches
  - Multi-agent environments, protocol verification
  - Protocol checkers, multi-channel scoreboards
  - System-level testbench architecture

- **[MODULE7.md](docs/MODULE7.md)**: Real-World Applications
  - DMA verification, protocol verification (UART, SPI, I2C)
  - VIP development, best practices
  - System-level verification

- **[MODULE8.md](docs/MODULE8.md)**: UVM Miscellaneous Utilities
  - Command Line Processor, comparators, recorders
  - Pools, queues, string/math/random utilities
  - Utility integration patterns

### Reference Documentation

- **[COVERAGE_CHECKLIST.md](docs/COVERAGE_CHECKLIST.md)**: Verification checklist for all IEEE 1800.2-2017 sections
- **[IEEE_1800_2_2017_COVERAGE.md](docs/IEEE_1800_2_2017_COVERAGE.md)**: Detailed mapping of IEEE standard to modules
- **[GLOSSARY.md](docs/GLOSSARY.md)**: Comprehensive glossary of UVM terms and concepts

## 🎓 Modules

### Module 0: Installation and Setup
**Complexity**: Beginner

Set up your verification environment with all required tools:
- Verilator 5.042+ (simulator with UVM 2017-1.0 support) or commercial simulator setup
- UVM library (Accellera UVM 2017-1.0, IEEE 1800.2-2017)
- Build system configuration

**Quick Start**: `./scripts/module0.sh`

### Module 1: SystemVerilog and Verification Basics
**Complexity**: Beginner

Learn SystemVerilog concepts essential for verification:
- SystemVerilog OOP (classes, inheritance, polymorphism)
- Interfaces and modports
- Packages and namespaces
- Data structures for verification
- Error handling and logging

**Quick Start**: `./scripts/module1.sh`

### Module 2: SystemVerilog Testbench Fundamentals
**Complexity**: Intermediate

Master SystemVerilog testbench construction:
- Clock generation and synchronization
- Reset patterns and sequences
- Signal access and manipulation
- Common verification patterns
- Testbenches for registers, FIFOs, state machines

**Quick Start**: `./scripts/module2.sh`

### Module 3: UVM Basics
**Complexity**: Intermediate

Introduction to UVM methodology:
- UVM class hierarchy
- Phases (build, connect, run, check, report)
- Reporting and logging
- ConfigDB for configuration
- Factory pattern
- Objections

**Quick Start**: `./scripts/module3.sh`

### Module 4: UVM Components
**Complexity**: Intermediate-Advanced

Build complete UVM testbenches:
- Drivers, monitors, sequencers
- Sequences and sequence items
- TLM (Transaction-Level Modeling)
- Scoreboards
- Agents and environments

**Quick Start**: `./scripts/module4.sh`

### Module 5: Advanced UVM Concepts
**Complexity**: Advanced

Advanced UVM features:
- Virtual sequences and sequencers
- Coverage models
- Configuration and callbacks
- Register models
- Multi-channel environments

**Quick Start**: `./scripts/module5.sh`

### Module 6: Complex Testbenches
**Complexity**: Advanced

Build production-quality testbenches:
- Multi-agent environments
- Protocol verification
- Protocol checkers
- Multi-channel scoreboards
- System-level architecture

**Quick Start**: `./scripts/module6.sh`

### Module 7: Real-World Applications
**Complexity**: Advanced

Apply UVM to real-world scenarios:
- DMA verification
- Protocol verification (UART, SPI, I2C)
- VIP development
- Best practices and patterns
- System-level verification

**Quick Start**: `./scripts/module7.sh`

### Module 8: UVM Miscellaneous Utilities
**Complexity**: Intermediate-Advanced

Master UVM utility classes:
- Command Line Processor
- Comparators
- Recorders
- Pools and queues
- String, math, and random utilities

**Quick Start**: `./scripts/module8.sh`

## 🔧 Installation

### Automated Installation (Recommended)

```bash
# Install all tools
./scripts/module0.sh

# Or install with custom options
./scripts/module0.sh --verilator-mode submodule --uvm-mode submodule
```

### Individual Tool Installation

```bash
# Verilator (default: version 5.042)
./scripts/install_verilator.sh --source
# Or install specific version
./scripts/install_verilator.sh --version 5.044 --source
# Or install locally (no sudo required)
./scripts/install_verilator.sh --source --local

# UVM Library (Accellera UVM 2017-1.0)
./scripts/install_uvm.sh [--from-submodule|--system]
```

### Manual Installation

See [MODULE0.md](docs/MODULE0.md) for detailed manual installation instructions.

## 💻 Usage

### Running Examples

Each module has an orchestrator script to run examples and tests:

```bash
# Run all examples for a module
./scripts/module1.sh
./scripts/module2.sh
# ... etc

# Run specific examples
./scripts/module1.sh --sv-basics --interfaces
./scripts/module2.sh --clock-generation --reset-patterns

# Run tests
./scripts/module1.sh --uvm-tests
```

### Running Individual Examples

```bash
# Compile and run SystemVerilog example
cd module1/examples/sv_basics
make

# Run UVM test
cd module1/tests/uvm_tests
make SIM=verilator TEST=test_and_gate_uvm
```

### Using Commercial Simulators

```bash
# VCS
make SIM=vcs TEST=test_and_gate_uvm

# QuestaSim
make SIM=questa TEST=test_and_gate_uvm

# Xcelium
make SIM=xcelium TEST=test_and_gate_uvm
```

## ⚠️ Verilator and UVM 2017 Support

**Great News**: Verilator 5.042+ supports UVM 2017-1.0! This project uses Verilator 5.042 as the default version, which includes full UVM 2017-1.0 support (see [Antmicro blog post](https://antmicro.com/blog/2025/10/support-for-upstream-uvm-2017-in-verilator)).

### Supported Features (Verilator 5.042+)
- ✅ UVM 2017-1.0 library (upstream, no patches required)
- ✅ Basic SystemVerilog syntax
- ✅ Classes and inheritance
- ✅ Interfaces (with some limitations)
- ✅ Packages
- ✅ UVM class hierarchy
- ✅ UVM phases, reporting, ConfigDB
- ✅ TLM connections
- ✅ Sequences and sequencers

### Recommended Configuration
- **Verilator Version**: 5.042 or later (default: 5.042)
- **UVM Library**: Accellera UVM 2017-1.0
- **Compilation Flags**: `--binary`, `+define+UVM_NO_DPI`, `-Wno-fatal`
- **UVM_HOME**: Should point to UVM `src` directory

### Known Limitations
- Some advanced UVM features may have limited support
- Full SystemVerilog assertion support is limited
- Complex interface features may require workarounds

### Installation
The installation script automatically installs Verilator 5.042 by default:
```bash
./scripts/install_verilator.sh --source
```

See [SYSTEMVERILOG_VERILATOR_INTERACTION.md](docs/SYSTEMVERILOG_VERILATOR_INTERACTION.md) for detailed information.

## 🤝 Contributing

Contributions are welcome! This project follows best practices for educational resources:

1. **Code Quality**: All code follows SystemVerilog best practices with comprehensive comments
2. **Documentation**: Comprehensive docstrings and comments
3. **Testing**: Examples are tested and verified
4. **Consistency**: Follow existing patterns and structure

### Contribution Guidelines

- Follow the existing code style and structure
- Add comprehensive comments to all code
- Update relevant documentation
- Test your changes thoroughly
- Follow the module structure for new examples
- Document Verilator limitations and commercial alternatives

## 📄 License

This work is licensed under a [Creative Commons Attribution 4.0 International License](https://creativecommons.org/licenses/by/4.0/).

[![CC BY 4.0](https://i.creativecommons.org/l/by/4.0/88x31.png)](https://creativecommons.org/licenses/by/4.0/)

### What this means:

- ✅ **You are free to:**
  - Share — copy and redistribute the material in any medium or format
  - Adapt — remix, transform, and build upon the material for any purpose, even commercially

- 📝 **Under the following terms:**
  - **Attribution** — You must give appropriate credit, provide a link to the license, and indicate if changes were made. You may do so in any reasonable manner, but not in any way that suggests the licensor endorses you or your use.

### Attribution

When using this material, please include:

```
Based on "Learn UVM with SystemVerilog and Verilator" by Yongfu Li
Licensed under CC BY 4.0
https://creativecommons.org/licenses/by/4.0/
```

## 🙏 Acknowledgments

This project is built on the excellent work of:

- **UVM**: Universal Verification Methodology
  - Standard: IEEE 1800.2-2017
  - Version: Accellera UVM 2017-1.0
  - Accellera Systems Initiative
  - Website: https://www.accellera.org/

- **Verilator**: Fast Verilog/SystemVerilog simulator
  - Website: https://www.veripool.org/verilator/
  - GitHub: https://github.com/verilator/verilator
  - UVM 2017 Support: https://antmicro.com/blog/2025/10/support-for-upstream-uvm-2017-in-verilator
  - Default Version: 5.042+ (with UVM 2017-1.0 support)

- **SystemVerilog**: IEEE 1800-2017 Standard
  - Standard: IEEE 1800-2017

### Educational Resources

- UVM 2017-1.0 User's Guide (Accellera Systems Initiative)
- Verification Academy: https://verificationacademy.com/
- IEEE Design & Test publications
- DVCon proceedings

## 📞 Support

For questions, issues, or contributions:

1. Check the [documentation](docs/) first
2. Review the [GLOSSARY.md](docs/GLOSSARY.md) for terminology
3. Check [COVERAGE_CHECKLIST.md](docs/COVERAGE_CHECKLIST.md) for module coverage
4. Review [SYSTEMVERILOG_VERILATOR_INTERACTION.md](docs/SYSTEMVERILOG_VERILATOR_INTERACTION.md) for Verilator-specific information
5. Open an issue for bugs or feature requests

## 📊 Project Statistics

- **8 Modules**: Complete learning path
- **50+ Examples**: Working code examples
- **20+ Testbenches**: SystemVerilog UVM testbenches
- **15+ Scripts**: Automation and orchestration
- **13 Documentation Files**: Comprehensive guides
- **100% IEEE 1800.2-2017 Coverage**: All standard sections covered

---

**Happy Learning! 🚀**

Start your UVM journey today with Module 0: [Installation and Setup](docs/MODULE0.md)
