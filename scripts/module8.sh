#!/bin/bash

# Module 8: UVM Miscellaneous Utilities Orchestrator
# Usage: ./module8.sh [OPTIONS]

set -euo pipefail

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
CYAN='\033[0;36m'
NC='\033[0m'

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
MODULE8_DIR="$PROJECT_ROOT/module8"

if [[ -z "${UVM_HOME:-}" ]]; then
  UVM_HOME="$PROJECT_ROOT/tools/uvm-2017/1800.2-2017-1.0/src"
  export UVM_HOME
fi

RUN_CLP=true
RUN_COMPARATORS=true
RUN_RECORDERS=true
RUN_POOLS=true
RUN_QUEUES=true
RUN_STRING_UTILS=true
RUN_MATH_UTILS=true
RUN_RANDOM_UTILS=true
RUN_INTEGRATION=true
RUN_UVM_TESTS=true

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

OPTIONS:
  Examples:
    --clp
    --comparators
    --recorders
    --pools
    --queues
    --string-utils
    --math-utils
    --random-utils
    --integration
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
  cd "$MODULE8_DIR/examples/$dir"
  if [[ "$CLEAN_BUILDS" == true ]]; then rm -rf obj_dir *.log *.vcd 2>/dev/null || true; fi

  local top_module
  top_module=$(grep "^module" "$sv" | tail -1 | sed 's/module[[:space:]]*\([a-zA-Z0-9_]*\).*/\1/' | tr '[:upper:]' '[:lower:]')

  local cpp="${sv%.sv}.cpp"
  local uvm_src_dir="$UVM_HOME"
  [[ -f "$UVM_HOME/src/uvm_pkg.sv" ]] && uvm_src_dir="$UVM_HOME/src"

  local dut_src=""
  if [[ -n "$extra_sv" ]]; then
    dut_src="$MODULE8_DIR/$extra_sv"
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
    -I"$MODULE8_DIR/dut/dma" \
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
  cd "$MODULE8_DIR/tests/uvm_tests"
  make -j"$PARALLEL_JOBS" SIM=verilator TEST=test_utilities_uvm 2>&1 | tee /tmp/uvm_module8.log
  cd "$PROJECT_ROOT"
}

parse_args() {
  while [[ $# -gt 0 ]]; do
    case "$1" in
      --clp) RUN_CLP=true; shift;;
      --comparators) RUN_COMPARATORS=true; shift;;
      --recorders) RUN_RECORDERS=true; shift;;
      --pools) RUN_POOLS=true; shift;;
      --queues) RUN_QUEUES=true; shift;;
      --string-utils) RUN_STRING_UTILS=true; shift;;
      --math-utils) RUN_MATH_UTILS=true; shift;;
      --random-utils) RUN_RANDOM_UTILS=true; shift;;
      --integration) RUN_INTEGRATION=true; shift;;
      --all-examples) RUN_CLP=true; RUN_COMPARATORS=true; RUN_RECORDERS=true; RUN_POOLS=true; RUN_QUEUES=true; RUN_STRING_UTILS=true; RUN_MATH_UTILS=true; RUN_RANDOM_UTILS=true; RUN_INTEGRATION=true; shift;;
      --skip-examples) RUN_CLP=false; RUN_COMPARATORS=false; RUN_RECORDERS=false; RUN_POOLS=false; RUN_QUEUES=false; RUN_STRING_UTILS=false; RUN_MATH_UTILS=false; RUN_RANDOM_UTILS=false; RUN_INTEGRATION=false; shift;;
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

  if [[ "$RUN_CLP" == true ]]; then
    run_uvm_example "clp" "CLP" "clp.sv" "" || errors=$((errors+1))
  fi

  if [[ "$RUN_COMPARATORS" == true ]]; then
    run_uvm_example "comparators" "Comparators" "comparators.sv" "" || errors=$((errors+1))
  fi

  if [[ "$RUN_RECORDERS" == true ]]; then
    run_uvm_example "recorders" "Recorders" "recorders.sv" "" || errors=$((errors+1))
  fi

  if [[ "$RUN_POOLS" == true ]]; then
    run_uvm_example "pools" "Pools" "pools.sv" "" || errors=$((errors+1))
  fi

  if [[ "$RUN_QUEUES" == true ]]; then
    run_uvm_example "queues" "Queues" "queues.sv" "" || errors=$((errors+1))
  fi

  if [[ "$RUN_STRING_UTILS" == true ]]; then
    run_uvm_example "string_utils" "StringUtils" "string_utils.sv" "" || errors=$((errors+1))
  fi

  if [[ "$RUN_MATH_UTILS" == true ]]; then
    run_uvm_example "math_utils" "MathUtils" "math_utils.sv" "" || errors=$((errors+1))
  fi

  if [[ "$RUN_RANDOM_UTILS" == true ]]; then
    run_uvm_example "random_utils" "RandomUtils" "random_utils.sv" "" || errors=$((errors+1))
  fi

  if [[ "$RUN_INTEGRATION" == true ]]; then
    run_uvm_example "integration" "Integration" "integration.sv" "" || errors=$((errors+1))
  fi

  if [[ "$RUN_UVM_TESTS" == true ]]; then
    run_uvm_tests || errors=$((errors+1))
  fi

  print_header "Summary"
  if [[ $errors -eq 0 ]]; then
    print_status $GREEN "✓ Module 8 completed successfully"
  else
    print_status $RED "✗ Module 8 completed with $errors error(s)"
    exit 1
  fi
}

main "$@"
