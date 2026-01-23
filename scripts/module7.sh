#!/bin/bash

# Module 7: Real-World Applications Orchestrator
# Usage: ./module7.sh [OPTIONS]

set -euo pipefail

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
CYAN='\033[0;36m'
NC='\033[0m'

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
MODULE7_DIR="$PROJECT_ROOT/module7"

if [[ -z "${UVM_HOME:-}" ]]; then
  UVM_HOME="$PROJECT_ROOT/tools/uvm-2017/1800.2-2017-1.0/src"
  export UVM_HOME
fi

RUN_DMA=true
RUN_PROTOCOLS=true
RUN_VIP=true
RUN_BEST_PRACTICES=true
RUN_UVM_TESTS=true

PARALLEL_JOBS=8
CLEAN_BUILDS=true

# Log file setup - will be initialized in main()
LOG_FILE=""

# Function to setup logging (redirects stdout and stderr to both console and log file)
setup_logging() {
    # Initialize log file path
    LOG_FILE="$MODULE7_DIR/module7.log"
    mkdir -p "$MODULE7_DIR"
    
    # Create log file with timestamp header
    {
        echo "=========================================="
        echo "Module 7 Execution Log"
        echo "Started: $(date '+%Y-%m-%d %H:%M:%S')"
        echo "Command: $0 $*"
        echo "Working directory: $(pwd)"
        echo "UVM_HOME: ${UVM_HOME:-not set}"
        echo "Simulator: verilator"
        echo "Parallel jobs: $PARALLEL_JOBS"
        echo "=========================================="
        echo ""
    } > "$LOG_FILE"
    
    # Redirect stdout and stderr to both console and log file
    exec > >(tee -a "$LOG_FILE")
    exec 2>&1
}

print_status() { echo -e "${1}[$(date '+%Y-%m-%d %H:%M:%S')] ${2}${NC}"; }
print_header() {
  echo ""
  echo -e "${CYAN}========================================${NC}"
  echo -e "${CYAN}$1${NC}"
  echo -e "${CYAN}========================================${NC}"
  echo ""
}

show_usage() {
  cat << EOF
Usage: $0 [OPTIONS]

OPTIONS:
  Examples:
    --dma
    --protocols
    --vip
    --best-practices
    --all-examples
    --skip-examples
  Tests:
    --uvm-tests
  Env:
    --uvm-home DIR
    --jobs N
    --no-clean
  Other:
    -h, --help
EOF
}

check_prereqs() {
  print_status $BLUE "Checking prerequisites..."
  command -v verilator >/dev/null || { print_status $RED "verilator not found"; exit 1; }
  command -v make >/dev/null || { print_status $RED "make not found"; exit 1; }
  if [[ ! -f "$UVM_HOME/uvm_pkg.sv" && ! -f "$UVM_HOME/src/uvm_pkg.sv" ]]; then
    print_status $RED "UVM not found at UVM_HOME=$UVM_HOME"
    exit 1
  fi
  print_status $GREEN "OK"
}

run_uvm_example() {
  local dir="$1" name="$2" sv="$3" extra_sv="${4:-}"
  print_header "Running: $name"
  cd "$MODULE7_DIR/examples/$dir"
  if [[ "$CLEAN_BUILDS" == true ]]; then rm -rf obj_dir *.log *.vcd 2>/dev/null || true; fi

  local top_module
  top_module=$(grep "^module" "$sv" | tail -1 | sed 's/module[[:space:]]*\([a-zA-Z0-9_]*\).*/\1/' | tr '[:upper:]' '[:lower:]')

  local cpp="${sv%.sv}.cpp"
  local uvm_src_dir="$UVM_HOME"
  [[ -f "$UVM_HOME/src/uvm_pkg.sv" ]] && uvm_src_dir="$UVM_HOME/src"

  local dut_src=""
  if [[ -n "$extra_sv" ]]; then
    dut_src="$MODULE7_DIR/$extra_sv"
  fi

  local exe_name="V${top_module}"

  # If we are not doing a clean build and an existing binary is up-to-date,
  # skip recompilation and just run it.
  if [[ "$CLEAN_BUILDS" == false && -x "obj_dir/$exe_name" ]]; then
    if ! find . -maxdepth 1 -type f \( -name "*.sv" -o -name "*.cpp" \) -newer "obj_dir/$exe_name" | grep -q .; then
      print_status $YELLOW "Reusing existing build for $name (no source changes detected)"
      set +e
      ./obj_dir/"$exe_name" 2>&1 | tee run.log
      local cached_run_exit=${PIPESTATUS[0]}
      set -e

      cd "$PROJECT_ROOT"
      if [[ $cached_run_exit -eq 0 ]]; then
        print_status $GREEN "✓ $name completed successfully (cached build)"
        return 0
      else
        print_status $RED "✗ $name failed when using cached build (exit code: $cached_run_exit)"
        print_status $YELLOW "Re-run without --no-clean if you need a full rebuild"
        return 1
      fi
    fi
  fi

  set +e
  verilator -sv --cc --exe --timing --trace --binary \
    -I"$uvm_src_dir" +incdir+"$uvm_src_dir" +define+UVM_NO_DPI \
    -I"$MODULE7_DIR/dut/dma" -I"$MODULE7_DIR/dut/protocols" \
    -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHTRUNC \
    "$uvm_src_dir/uvm_pkg.sv" \
    $dut_src \
    "$sv" "$cpp" --top-module "$top_module" 2>&1 | tee compile.log
  local rc=${PIPESTATUS[0]}
  set -e
  [[ $rc -eq 0 ]] || return 1

  make -j"$PARALLEL_JOBS" -C obj_dir -f "V${top_module}.mk" VM_PARALLEL_BUILDS=1 2>&1 | tee -a compile.log
  ./obj_dir/"$exe_name" 2>&1 | tee run.log
  cd "$PROJECT_ROOT"
}

run_uvm_tests() {
  print_header "Running UVM tests"
  cd "$MODULE7_DIR/tests/uvm_tests"
  make -j"$PARALLEL_JOBS" SIM=verilator TEST=test_real_world_uvm 2>&1 | tee /tmp/uvm_module7.log
  cd "$PROJECT_ROOT"
}

parse_args() {
  while [[ $# -gt 0 ]]; do
    case "$1" in
      --dma) RUN_DMA=true; shift;;
      --protocols) RUN_PROTOCOLS=true; shift;;
      --vip) RUN_VIP=true; shift;;
      --best-practices) RUN_BEST_PRACTICES=true; shift;;
      --all-examples) RUN_DMA=true; RUN_PROTOCOLS=true; RUN_VIP=true; RUN_BEST_PRACTICES=true; shift;;
      --skip-examples) RUN_DMA=false; RUN_PROTOCOLS=false; RUN_VIP=false; RUN_BEST_PRACTICES=false; shift;;
      --uvm-tests) RUN_UVM_TESTS=true; shift;;
      --uvm-home) UVM_HOME="$2"; export UVM_HOME; shift 2;;
      --jobs) PARALLEL_JOBS="$2"; shift 2;;
      --no-clean) CLEAN_BUILDS=false; shift;;
      -h|--help) show_usage; exit 0;;
      *) print_status $RED "Unknown option: $1"; show_usage; exit 1;;
    esac
  done
}

main() {
  # Parse arguments first (so help can be shown without logging)
  parse_args "$@"
  
  # Setup logging after argument parsing (before actual work)
  setup_logging "$@"
  
  print_header "Module 7: Real-World Applications"
  print_status $BLUE "Log file: $LOG_FILE"
  
  check_prereqs

  local errors=0

  if [[ "$RUN_DMA" == true ]]; then
    run_uvm_example "dma" "DMA" "dma.sv" "dut/dma/simple_dma.v" || errors=$((errors+1))
  fi

  if [[ "$RUN_PROTOCOLS" == true ]]; then
    run_uvm_example "protocols" "UART" "uart_example.sv" "dut/protocols/uart.v" || errors=$((errors+1))
    run_uvm_example "protocols" "SPI (stub)" "spi_example.sv" "" || errors=$((errors+1))
    run_uvm_example "protocols" "I2C (stub)" "i2c_example.sv" "" || errors=$((errors+1))
  fi

  if [[ "$RUN_VIP" == true ]]; then
    run_uvm_example "vip" "VIP" "vip.sv" "" || errors=$((errors+1))
  fi

  if [[ "$RUN_BEST_PRACTICES" == true ]]; then
    run_uvm_example "best_practices" "BestPractices" "best_practices.sv" "" || errors=$((errors+1))
  fi

  if [[ "$RUN_UVM_TESTS" == true ]]; then
    run_uvm_tests || errors=$((errors+1))
  fi

  print_header "Summary"
  if [[ $errors -eq 0 ]]; then
    print_status $GREEN "✓ Module 7 completed successfully"
    echo ""
    print_status $BLUE "Full log saved to: $LOG_FILE"
  else
    print_status $RED "✗ Module 7 completed with $errors error(s)"
    echo ""
    print_status $YELLOW "Check log file for details: $LOG_FILE"
    exit 1
  fi
  
  # Add footer to log file
  {
    echo ""
    echo "=========================================="
    echo "Module 7 Execution Log - Completed"
    echo "Finished: $(date '+%Y-%m-%d %H:%M:%S')"
    echo "Exit code: $errors"
    echo "=========================================="
  } >> "$LOG_FILE"
}

main "$@"

