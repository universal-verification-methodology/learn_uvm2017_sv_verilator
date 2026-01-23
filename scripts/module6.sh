#!/bin/bash

# Module 6: Complex Testbenches Orchestrator
# Usage: ./module6.sh [OPTIONS]

set -euo pipefail

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
CYAN='\033[0;36m'
NC='\033[0m'

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
MODULE6_DIR="$PROJECT_ROOT/module6"

if [[ -z "${UVM_HOME:-}" ]]; then
  UVM_HOME="$PROJECT_ROOT/tools/uvm-2017/1800.2-2017-1.0/src"
  export UVM_HOME
fi

RUN_ARCH=true
RUN_MULTI_AGENT=true
RUN_PROTOCOL=true
RUN_PROTOCOL_CHECKERS=true
RUN_SCOREBOARDS=true
RUN_UVM_TESTS=true

SIMULATOR="verilator"
PARALLEL_JOBS=8
CLEAN_BUILDS=true

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

Module 6: Complex Testbenches

OPTIONS:
  Examples:
    --architecture
    --multi-agent
    --protocol
    --protocol-checkers
    --scoreboards
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

run_example() {
  local dir="$1" name="$2" sv="$3"
  print_header "Running: $name"
  cd "$MODULE6_DIR/examples/$dir"
  if [[ "$CLEAN_BUILDS" == true ]]; then rm -rf obj_dir *.log *.vcd 2>/dev/null || true; fi

  local top_module
  top_module=$(grep "^module" "$sv" | tail -1 | sed 's/module[[:space:]]*\([a-zA-Z0-9_]*\).*/\1/' | tr '[:upper:]' '[:lower:]')

  local cpp="${sv%.sv}.cpp"
  local uvm_src_dir="$UVM_HOME"
  [[ -f "$UVM_HOME/src/uvm_pkg.sv" ]] && uvm_src_dir="$UVM_HOME/src"

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
    -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHTRUNC \
    "$uvm_src_dir/uvm_pkg.sv" "$sv" "$cpp" --top-module "$top_module" 2>&1 | tee compile.log
  local rc=${PIPESTATUS[0]}
  set -e
  [[ $rc -eq 0 ]] || return 1

  make -j"$PARALLEL_JOBS" -C obj_dir -f "V${top_module}.mk" VM_PARALLEL_BUILDS=1 2>&1 | tee -a compile.log
  ./obj_dir/"$exe_name" 2>&1 | tee run.log
  cd "$PROJECT_ROOT"
}

run_uvm_tests() {
  print_header "Running UVM tests"
  cd "$MODULE6_DIR/tests/uvm_tests"
  make -j"$PARALLEL_JOBS" SIM="$SIMULATOR" TEST=test_complex_testbench_uvm 2>&1 | tee /tmp/uvm_module6.log
  cd "$PROJECT_ROOT"
}

parse_args() {
  while [[ $# -gt 0 ]]; do
    case "$1" in
      --architecture) RUN_ARCH=true; shift;;
      --multi-agent) RUN_MULTI_AGENT=true; shift;;
      --protocol) RUN_PROTOCOL=true; shift;;
      --protocol-checkers) RUN_PROTOCOL_CHECKERS=true; shift;;
      --scoreboards) RUN_SCOREBOARDS=true; shift;;
      --all-examples) RUN_ARCH=true; RUN_MULTI_AGENT=true; RUN_PROTOCOL=true; RUN_PROTOCOL_CHECKERS=true; RUN_SCOREBOARDS=true; shift;;
      --skip-examples) RUN_ARCH=false; RUN_MULTI_AGENT=false; RUN_PROTOCOL=false; RUN_PROTOCOL_CHECKERS=false; RUN_SCOREBOARDS=false; shift;;
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
  parse_args "$@"
  check_prereqs

  local errors=0
  if [[ "$RUN_ARCH" == true ]]; then run_example "architecture" "Architecture" "architecture.sv" || errors=$((errors+1)); fi
  if [[ "$RUN_MULTI_AGENT" == true ]]; then run_example "multi_agent" "MultiAgent" "multi_agent.sv" || errors=$((errors+1)); fi
  if [[ "$RUN_PROTOCOL" == true ]]; then run_example "protocol" "Protocol" "protocol.sv" || errors=$((errors+1)); fi
  if [[ "$RUN_PROTOCOL_CHECKERS" == true ]]; then run_example "protocol_checkers" "ProtocolCheckers" "protocol_checkers.sv" || errors=$((errors+1)); fi
  if [[ "$RUN_SCOREBOARDS" == true ]]; then run_example "scoreboards" "Scoreboards" "scoreboards.sv" || errors=$((errors+1)); fi

  if [[ "$RUN_UVM_TESTS" == true ]]; then run_uvm_tests || errors=$((errors+1)); fi

  print_header "Summary"
  if [[ $errors -eq 0 ]]; then
    print_status $GREEN "✓ Module 6 completed successfully"
  else
    print_status $RED "✗ Module 6 completed with $errors error(s)"
    exit 1
  fi
}

main "$@"

