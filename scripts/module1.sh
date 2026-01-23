#!/bin/bash

# Module 1: SystemVerilog and Verification Basics Orchestrator
# This script runs examples and tests for Module 1
# Usage: ./module1.sh [OPTIONS]

set -euo pipefail

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
CYAN='\033[0;36m'
NC='\033[0m' # No Color

# Get script directory
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
MODULE1_DIR="$PROJECT_ROOT/module1"

# Set UVM_HOME if not already set
# Following Antmicro example: https://github.com/antmicro/verilator-uvm-example
# UVM_HOME should point to the src directory (as in their example)
if [[ -z "${UVM_HOME:-}" ]]; then
    UVM_HOME="$PROJECT_ROOT/tools/uvm-2017/1800.2-2017-1.0/src"
    export UVM_HOME
fi

# Options
RUN_SV_BASICS=true
RUN_INTERFACES=true
RUN_PACKAGES=true
RUN_DATA_STRUCTURES=true
RUN_ERROR_HANDLING=true
RUN_SV_TESTS=true
RUN_UVM_TESTS=true
SIMULATOR="verilator"

# Parallel build jobs (default: 8)
# Can be overridden with --jobs option
PARALLEL_JOBS=8

# Clean builds by default (set to false to skip cleaning for faster rebuilds)
CLEAN_BUILDS=true

# Log file setup - will be initialized in main()
LOG_FILE=""

# Function to print colored output
print_status() {
    local color=$1
    local message=$2
    echo -e "${color}[$(date '+%Y-%m-%d %H:%M:%S')] ${message}${NC}"
}

print_header() {
    local message=$1
    echo ""
    echo -e "${CYAN}========================================${NC}"
    echo -e "${CYAN}$message${NC}"
    echo -e "${CYAN}========================================${NC}"
    echo ""
}

# Function to show usage
show_usage() {
    cat << EOF
Usage: $0 [OPTIONS]

Module 1: SystemVerilog and Verification Basics
This script runs examples and tests for Module 1.

OPTIONS:
    SystemVerilog Examples:
        --sv-basics           Run SystemVerilog class basics examples
        --interfaces          Run interfaces and modports examples
        --packages            Run packages and namespaces examples
        --data-structures     Run data structures examples
        --error-handling      Run error handling and logging examples
        --all-sv              Run all SystemVerilog examples (default)
        --skip-sv             Skip all SystemVerilog examples
    
    Tests:
        --sv-tests            Run SystemVerilog testbenches
        --uvm-tests           Run UVM testbenches
        --all-tests           Run all tests
    
    Environment:
        --sim SIMULATOR       Simulator to use (default: verilator)
        --uvm-home DIR        UVM library directory (default: \$UVM_HOME)
        --jobs N              Number of parallel build jobs (default: 8)
        --no-clean            Skip cleaning before build (faster rebuilds)
    
    Other:
        --help, -h            Show this help message

EXAMPLES:
    # Run all SystemVerilog examples (with parallel builds)
    $0
    
    # Run only SystemVerilog basics
    $0 --sv-basics
    
    # Run SystemVerilog tests
    $0 --sv-tests
    
    # Run everything
    $0 --all-sv --all-tests
    
    # Faster rebuilds (skip cleaning, use parallel builds)
    $0 --no-clean --jobs 8
    
    # Use specific number of parallel jobs
    $0 --jobs 4

EOF
}

# Function to check prerequisites
check_prerequisites() {
    print_status $BLUE "Checking prerequisites..."
    
    # Check Verilator
    if ! command -v verilator &> /dev/null; then
        print_status $RED "Error: verilator not found. Please install it first."
        exit 1
    fi
    
    local verilator_version=$(verilator --version | head -1 | awk '{print $2}')
    print_status $GREEN "Found Verilator version: $verilator_version"
    
    # Check UVM library (if running UVM tests)
    if [[ "$RUN_UVM_TESTS" == true ]]; then
        local uvm_pkg_file=""
        if [[ -f "$UVM_HOME/uvm_pkg.sv" ]]; then
            uvm_pkg_file="$UVM_HOME/uvm_pkg.sv"
        elif [[ -f "$UVM_HOME/src/uvm_pkg.sv" ]]; then
            uvm_pkg_file="$UVM_HOME/src/uvm_pkg.sv"
        fi
        
        if [[ -z "$uvm_pkg_file" ]]; then
            print_status $YELLOW "Warning: UVM library not found"
            print_status $YELLOW "Expected file: $UVM_HOME/uvm_pkg.sv or $UVM_HOME/src/uvm_pkg.sv"
            print_status $YELLOW "Install UVM using: ./scripts/install_uvm.sh"
            print_status $YELLOW "Or set UVM_HOME to your UVM src directory (as in Antmicro example)"
        else
            print_status $GREEN "Found UVM library at: $uvm_pkg_file"
        fi
    fi
    
    # Check Make
    if ! command -v make &> /dev/null; then
        print_status $RED "Error: make not found. Please install it first."
        exit 1
    fi
    
    print_status $GREEN "Prerequisites check passed"
}

# Function to compile and run SystemVerilog example
run_sv_example() {
    local example_dir=$1
    local example_name=$2
    local example_file=$3
    
    print_header "Running: $example_name"
    
    cd "$MODULE1_DIR/examples/$example_dir" || {
        print_status $RED "Error: Failed to change to example directory: $example_dir"
        return 1
    }
    
    # Clean previous builds (unless --no-clean is specified)
    if [[ "$CLEAN_BUILDS" == true ]]; then
        rm -rf obj_dir *.log 2>/dev/null || true
    else
        print_status $YELLOW "Skipping clean (using existing build)"
    fi
    
    # Add --timing flag for examples that use delays/forks
    # Add --trace flag for examples that use VCD tracing in C++ files
    # Add warning suppressions for known Verilator limitations
    local verilator_flags="-sv --cc --exe"
    if [[ "$example_dir" == "sv_basics" ]] || [[ "$example_dir" == "interfaces" ]] || [[ "$example_dir" == "packages" ]] || [[ "$example_dir" == "data_structures" ]] || [[ "$example_dir" == "error_handling" ]]; then
        verilator_flags="$verilator_flags --timing"
    fi
    # All examples with C++ files use VCD tracing, so add --trace flag
    if [[ "$example_dir" == "sv_basics" ]] || [[ "$example_dir" == "interfaces" ]] || [[ "$example_dir" == "packages" ]] || [[ "$example_dir" == "data_structures" ]] || [[ "$example_dir" == "error_handling" ]]; then
        verilator_flags="$verilator_flags --trace"
    fi
    # Suppress width truncation warnings (common in SystemVerilog)
    # Suppress INITIALDLY warnings (non-blocking in initial blocks - acceptable in testbenches)
    verilator_flags="$verilator_flags -Wno-WIDTHTRUNC -Wno-INITIALDLY"
    
    # Extract top module name from file (Verilator uses lowercase)
    # Get the last module definition (usually the top-level testbench)
    local top_module
    top_module=$(grep "^module" "$example_file" | tail -1 | sed 's/module[[:space:]]*\([a-zA-Z0-9_]*\).*/\1/' | tr '[:upper:]' '[:lower:]')
    
    # Executable name is based on top module (lowercase)
    local exe_name="V${top_module}"

    # If we are not doing a clean build and an existing binary is up-to-date,
    # skip recompilation and just run it. This can significantly speed up reruns.
    if [[ "$CLEAN_BUILDS" == false && -x "obj_dir/$exe_name" ]]; then
        # If none of the local .sv/.cpp sources are newer than the binary, reuse it.
        if ! find . -maxdepth 1 -type f \( -name "*.sv" -o -name "*.cpp" \) -newer "obj_dir/$exe_name" | grep -q .; then
            print_status $YELLOW "Reusing existing build for $example_name (no source changes detected)"
            set +e
            ./obj_dir/"$exe_name" 2>&1 | tee run.log
            local cached_run_exit=${PIPESTATUS[0]}
            set -e

            cd "$PROJECT_ROOT"
            if [[ $cached_run_exit -eq 0 ]]; then
                print_status $GREEN "✓ $example_name completed successfully (cached build)"
                return 0
            else
                print_status $RED "✗ $example_name failed when using cached build (exit code: $cached_run_exit)"
                print_status $YELLOW "Re-run with --no-clean disabled or touch sources if you need a rebuild"
                return 1
            fi
        fi
    fi

    # Compile with Verilator
    print_status $BLUE "Compiling $example_name..."
    set +e  # Temporarily disable exit on error
    
    # Check if C++ main file exists (try multiple naming patterns)
    local cpp_file="${example_file%.sv}.cpp"
    local cpp_file_alt="${top_module}.cpp"
    local cpp_file_alt2="${example_file%.sv}_example.cpp"
    local found_cpp=""
    if [[ -f "$cpp_file" ]]; then
        found_cpp="$cpp_file"
    elif [[ -f "$cpp_file_alt" ]]; then
        found_cpp="$cpp_file_alt"
    elif [[ -f "$cpp_file_alt2" ]]; then
        found_cpp="$cpp_file_alt2"
    fi
    
    if [[ -n "$found_cpp" ]]; then
        verilator $verilator_flags "$example_file" "$found_cpp" --top-module "$top_module" 2>&1 | tee compile.log
    else
        verilator $verilator_flags "$example_file" --top-module "$top_module" 2>&1 | tee compile.log
    fi
    local compile_exit=${PIPESTATUS[0]}
    set -e
    
    if [[ $compile_exit -ne 0 ]]; then
        print_status $RED "✗ Compilation failed for $example_name"
        print_status $YELLOW "Check compile.log for details"
        cd "$PROJECT_ROOT"
        return 1
    fi
    
    # Build
    print_status $BLUE "Building $example_name (using $PARALLEL_JOBS parallel jobs)..."
    set +e
    # Verilator creates Makefile based on top module name (lowercase)
    local makefile_name="V${top_module}.mk"
    make -j"$PARALLEL_JOBS" -C obj_dir -f "$makefile_name" 2>&1 | tee -a compile.log
    local build_exit=${PIPESTATUS[0]}
    set -e
    
    if [[ $build_exit -ne 0 ]]; then
        print_status $RED "✗ Build failed for $example_name"
        print_status $YELLOW "Check compile.log for details"
        cd "$PROJECT_ROOT"
        return 1
    fi
    
    # Run
    print_status $BLUE "Running $example_name..."
    set +e
    ./obj_dir/"$exe_name" 2>&1 | tee run.log
    local run_exit=${PIPESTATUS[0]}
    set -e
    
    cd "$PROJECT_ROOT"
    
    if [[ $run_exit -eq 0 ]]; then
        print_status $GREEN "✓ $example_name completed successfully"
        return 0
    else
        print_status $RED "✗ $example_name failed (exit code: $run_exit)"
        print_status $YELLOW "Check $MODULE1_DIR/examples/$example_dir/run.log for details"
        return 1
    fi
}

# Function to run SystemVerilog tests
run_sv_tests() {
    print_header "Running SystemVerilog Tests"
    
    cd "$MODULE1_DIR/tests/sv_tests" || {
        print_status $RED "Error: Failed to change to SystemVerilog tests directory"
        return 1
    }
    
    local failed=0
    
    # Run AND gate tests
    print_status $BLUE "Running AND gate tests..."
    make clean >/dev/null 2>&1 || true
    set +e  # Temporarily disable exit on error to capture exit code
    make -j"$PARALLEL_JOBS" SIM="$SIMULATOR" TEST=test_and_gate 2>&1 | tee /tmp/sv_and_gate.log
    local exit_code=${PIPESTATUS[0]}
    set -e  # Re-enable exit on error
    if [[ $exit_code -eq 0 ]]; then
        print_status $GREEN "✓ AND gate tests passed"
    else
        print_status $RED "✗ AND gate tests failed (exit code: $exit_code)"
        print_status $YELLOW "Check /tmp/sv_and_gate.log for details"
        failed=$((failed + 1))
    fi
    
    # Run counter tests
    print_status $BLUE "Running counter tests..."
    make clean >/dev/null 2>&1 || true
    set +e  # Temporarily disable exit on error to capture exit code
    make -j"$PARALLEL_JOBS" SIM="$SIMULATOR" TEST=test_counter 2>&1 | tee /tmp/sv_counter.log
    local exit_code=${PIPESTATUS[0]}
    set -e  # Re-enable exit on error
    if [[ $exit_code -eq 0 ]]; then
        print_status $GREEN "✓ Counter tests passed"
    else
        print_status $RED "✗ Counter tests failed (exit code: $exit_code)"
        print_status $YELLOW "Check /tmp/sv_counter.log for details"
        failed=$((failed + 1))
    fi
    
    cd "$PROJECT_ROOT"
    
    if [[ $failed -eq 0 ]]; then
        print_status $GREEN "All SystemVerilog tests passed"
        return 0
    else
        print_status $RED "$failed SystemVerilog test(s) failed"
        return 1
    fi
}

# Function to run UVM tests
run_uvm_tests() {
    print_header "Running UVM Tests"
    
    # Check if UVM_HOME points to src directory or root directory (following Antmicro example)
    local uvm_pkg_file=""
    if [[ -f "$UVM_HOME/uvm_pkg.sv" ]]; then
        uvm_pkg_file="$UVM_HOME/uvm_pkg.sv"
    elif [[ -f "$UVM_HOME/src/uvm_pkg.sv" ]]; then
        uvm_pkg_file="$UVM_HOME/src/uvm_pkg.sv"
    else
        print_status $RED "Error: UVM library not found"
        print_status $RED "Expected file: $UVM_HOME/uvm_pkg.sv or $UVM_HOME/src/uvm_pkg.sv"
        print_status $YELLOW "Install UVM using: ./scripts/install_uvm.sh"
        print_status $YELLOW "Or set UVM_HOME to your UVM src directory (as in Antmicro example)"
        print_status $YELLOW "See: https://github.com/antmicro/verilator-uvm-example"
        return 1
    fi
    
    # Note about Verilator's UVM support
    if [[ "$SIMULATOR" == "verilator" ]]; then
        print_status $GREEN "ℹ️  Note: Verilator now supports UVM 2017-1.0 (as of Oct 2025)"
        print_status $GREEN "   See: https://antmicro.com/blog/2025/10/support-for-upstream-uvm-2017-in-verilator"
        print_status $GREEN "   Using recommended flags: --binary, +define+UVM_NO_DPI, -Wno-fatal"
        echo ""
    fi
    
    cd "$MODULE1_DIR/tests/uvm_tests" || {
        print_status $RED "Error: Failed to change to UVM tests directory"
        return 1
    }
    
    print_status $BLUE "Running UVM AND gate test..."
    print_status $YELLOW "Note: Verilator has limited UVM support. For full UVM features, use commercial simulators."
    print_status $YELLOW "Note: UVM compilation generates ~2000 C++ files due to template instantiations."
    print_status $YELLOW "      This is normal and may take 5-10 minutes even with parallel builds."
    
    make clean >/dev/null 2>&1 || true
    set +e  # Temporarily disable exit on error to capture exit code
    make -j"$PARALLEL_JOBS" SIM="$SIMULATOR" TEST=test_and_gate_uvm 2>&1 | tee /tmp/uvm_and_gate.log
    local exit_code=${PIPESTATUS[0]}
    set -e  # Re-enable exit on error
    if [[ $exit_code -eq 0 ]]; then
        print_status $GREEN "✓ UVM AND gate test passed"
        cd "$PROJECT_ROOT"
        return 0
    else
        print_status $RED "✗ UVM AND gate test failed (exit code: $exit_code)"
        print_status $YELLOW "Check /tmp/uvm_and_gate.log for details"
        if [[ "$SIMULATOR" == "verilator" ]]; then
            print_status $YELLOW ""
            print_status $YELLOW "⚠️  UVM test failed with Verilator."
            print_status $YELLOW ""
            print_status $YELLOW "   According to Antmicro (Oct 2025), Verilator supports UVM 2017-1.0,"
            print_status $YELLOW "   but this requires the latest Verilator with recent UVM fixes."
            print_status $YELLOW ""
            print_status $YELLOW "   Your Verilator version: $(verilator --version 2>/dev/null || echo 'unknown')"
            print_status $YELLOW ""
            print_status $YELLOW "   To get full UVM support, you may need to:"
            print_status $YELLOW "   1. Build Verilator from latest source:"
            print_status $YELLOW "      git clone https://github.com/verilator/verilator"
            print_status $YELLOW "      cd verilator && autoconf && ./configure && make"
            print_status $YELLOW ""
            print_status $YELLOW "   2. Or use a commercial simulator:"
            print_status $YELLOW "      cd module1/tests/uvm_tests"
            print_status $YELLOW "      make SIM=vcs TEST=test_and_gate_uvm      # For VCS"
            print_status $YELLOW "      make SIM=questa TEST=test_and_gate_uvm    # For QuestaSim"
            print_status $YELLOW "      make SIM=xcelium TEST=test_and_gate_uvm   # For Xcelium"
        else
            print_status $YELLOW "Note: Some UVM features may not work with Verilator"
            print_status $YELLOW "Consider using commercial simulators (VCS, Questa, Xcelium) for full UVM support"
        fi
        cd "$PROJECT_ROOT"
        return 1
    fi
}

# Function to parse command line arguments
parse_args() {
    while [[ $# -gt 0 ]]; do
        case $1 in
            --sv-basics)
                RUN_SV_BASICS=true
                shift
                ;;
            --interfaces)
                RUN_INTERFACES=true
                shift
                ;;
            --packages)
                RUN_PACKAGES=true
                shift
                ;;
            --data-structures)
                RUN_DATA_STRUCTURES=true
                shift
                ;;
            --error-handling)
                RUN_ERROR_HANDLING=true
                shift
                ;;
            --all-sv)
                RUN_SV_BASICS=true
                RUN_INTERFACES=true
                RUN_PACKAGES=true
                RUN_DATA_STRUCTURES=true
                RUN_ERROR_HANDLING=true
                shift
                ;;
            --skip-sv)
                RUN_SV_BASICS=false
                RUN_INTERFACES=false
                RUN_PACKAGES=false
                RUN_DATA_STRUCTURES=false
                RUN_ERROR_HANDLING=false
                shift
                ;;
            --sv-tests)
                RUN_SV_TESTS=true
                shift
                ;;
            --uvm-tests)
                RUN_UVM_TESTS=true
                shift
                ;;
            --all-tests)
                RUN_SV_TESTS=true
                RUN_UVM_TESTS=true
                shift
                ;;
            --sim)
                SIMULATOR="$2"
                shift 2
                ;;
            --uvm-home)
                UVM_HOME="$2"
                export UVM_HOME
                shift 2
                ;;
            --jobs)
                PARALLEL_JOBS="$2"
                shift 2
                ;;
            --no-clean)
                CLEAN_BUILDS=false
                shift
                ;;
            --help|-h)
                show_usage
                exit 0
                ;;
            *)
                print_status $RED "Unknown option: $1"
                show_usage
                exit 1
                ;;
        esac
    done
}

# Function to setup logging (redirects stdout and stderr to both console and log file)
setup_logging() {
    # Initialize log file path
    LOG_FILE="$MODULE1_DIR/module1.log"
    mkdir -p "$MODULE1_DIR"
    
    # Create log file with timestamp header
    {
        echo "=========================================="
        echo "Module 1 Execution Log"
        echo "Started: $(date '+%Y-%m-%d %H:%M:%S')"
        echo "Command: $0 $*"
        echo "Working directory: $(pwd)"
        echo "UVM_HOME: ${UVM_HOME:-not set}"
        echo "Simulator: $SIMULATOR"
        echo "Parallel jobs: $PARALLEL_JOBS"
        echo "=========================================="
        echo ""
    } > "$LOG_FILE"
    
    # Redirect stdout and stderr to both console and log file
    # Store the original stdout for the tee process
    exec 3>&1
    exec > >(tee -a "$LOG_FILE" >&3)
    exec 2>&1
    # Close the duplicate file descriptor on exit to avoid cleanup issues
    # Set trap globally to ensure it's active when script exits
    trap 'exec 3>&- 2>/dev/null || true' EXIT INT TERM
}

# Main function
main() {
    # Parse arguments first (so help can be shown without logging)
    parse_args "$@"
    
    # Setup logging after argument parsing (before actual work)
    setup_logging "$@"
    
    print_header "Module 1: SystemVerilog and Verification Basics"
    print_status $BLUE "Log file: $LOG_FILE"
    
    # Check prerequisites
    check_prerequisites
    
    local errors=0
    
    # Run SystemVerilog examples
    if [[ "$RUN_SV_BASICS" == true ]] || [[ "$RUN_INTERFACES" == true ]] || \
       [[ "$RUN_PACKAGES" == true ]] || [[ "$RUN_DATA_STRUCTURES" == true ]] || \
       [[ "$RUN_ERROR_HANDLING" == true ]]; then
        
        print_header "Running SystemVerilog Examples"
        
        if [[ "$RUN_SV_BASICS" == true ]]; then
            if ! run_sv_example "sv_basics" "Transaction" "transaction.sv"; then
                errors=$((errors + 1))
            fi
        fi
        
        if [[ "$RUN_INTERFACES" == true ]]; then
            if ! run_sv_example "interfaces" "Interface" "interface_example.sv"; then
                errors=$((errors + 1))
            fi
        fi
        
        if [[ "$RUN_PACKAGES" == true ]]; then
            if ! run_sv_example "packages" "Package" "package_example.sv"; then
                errors=$((errors + 1))
            fi
        fi
        
        if [[ "$RUN_DATA_STRUCTURES" == true ]]; then
            if ! run_sv_example "data_structures" "DataStructures" "data_structures_example.sv"; then
                errors=$((errors + 1))
            fi
        fi
        
        if [[ "$RUN_ERROR_HANDLING" == true ]]; then
            if ! run_sv_example "error_handling" "ErrorHandling" "error_handling_example.sv"; then
                errors=$((errors + 1))
            fi
        fi
    fi
    
    # Run tests
    if [[ "$RUN_SV_TESTS" == true ]]; then
        if ! run_sv_tests; then
            errors=$((errors + 1))
        fi
    fi
    
    if [[ "$RUN_UVM_TESTS" == true ]]; then
        if ! run_uvm_tests; then
            errors=$((errors + 1))
        fi
    fi
    
    # Summary
    print_header "Summary"
    
    if [[ $errors -eq 0 ]]; then
        print_status $GREEN "✓ All examples and tests completed successfully!"
        echo ""
        print_status $BLUE "Next steps:"
        echo "  1. Review the examples in module1/examples/"
        echo "  2. Try modifying the examples"
        echo "  3. Proceed to Module 2: SystemVerilog Testbench Fundamentals"
        echo ""
        print_status $BLUE "Full log saved to: $LOG_FILE"
    else
        print_status $RED "✗ Completed with $errors error(s)"
        echo ""
        print_status $YELLOW "Check log file for details: $LOG_FILE"
        exit 1
    fi
    
    # Add footer to log file
    {
        echo ""
        echo "=========================================="
        echo "Module 1 Execution Log - Completed"
        echo "Finished: $(date '+%Y-%m-%d %H:%M:%S')"
        echo "Exit code: $errors"
        echo "=========================================="
    } >> "$LOG_FILE"
}

# Run main function with all arguments
main "$@"
