#!/bin/bash
# Environment setup script for Verilator with UVM 2017
# Source this file: source scripts/setup_uvm_env.sh

# Get script directory
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"

# Set UVM_HOME
export UVM_HOME="$PROJECT_ROOT/tools/uvm-2017/1800.2-2017-1.0/src"

# Add Verilator to PATH (if local install)
if [[ -d "$PROJECT_ROOT/tools/verilator-install/bin" ]]; then
    export PATH="$PROJECT_ROOT/tools/verilator-install/bin:$PATH"
fi

# Activate Python virtual environment (if it exists)
if [[ -f "$PROJECT_ROOT/.venv/bin/activate" ]]; then
    source "$PROJECT_ROOT/.venv/bin/activate"
    echo "Python virtual environment activated"
fi

# Verify setup
echo "UVM_HOME: $UVM_HOME"
if command -v verilator >/dev/null 2>&1; then
    echo "Verilator: $(verilator --version 2>&1 | head -1)"
else
    echo "Warning: Verilator not found in PATH"
fi

if [[ -f "$UVM_HOME/uvm_pkg.sv" ]]; then
    echo "UVM 2017-1.0: Found at $UVM_HOME"
else
    echo "Warning: UVM 2017-1.0 not found at $UVM_HOME"
fi

if command -v python3 >/dev/null 2>&1; then
    echo "Python: $(python3 --version 2>&1)"
fi
