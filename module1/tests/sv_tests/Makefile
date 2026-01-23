# Makefile for SystemVerilog testbenches
# Supports Verilator and commercial simulators

# Default simulator
SIM ?= verilator

# Test selection
TEST ?= test_and_gate

# UVM home (set via environment or default)
UVM_HOME ?= $(shell echo $$UVM_HOME)

# Verilator flags
VERILATOR_FLAGS = -sv --timing --trace -Wno-TIMESCALEMOD -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND

# Include paths (only if UVM_HOME is set)
INCLUDES = $(if $(UVM_HOME),-I$(UVM_HOME)/src,)

# Source files
DUT_SRC = ../../dut/simple_gates/*.v
TEST_SRC = $(TEST).sv
TEST_CPP = $(TEST).cpp

# Verilator compilation
ifeq ($(SIM),verilator)
    TOPLEVEL = $(TEST)
    
    compile:
		@echo "Compiling with Verilator..."
		verilator $(VERILATOR_FLAGS) $(INCLUDES) \
			--cc --exe \
			$(DUT_SRC) $(TEST_SRC) $(TEST_CPP) \
			--top-module $(TOPLEVEL) \
			-o $(TOPLEVEL) || exit 1
		@echo "Building..."
		make -C obj_dir -f V$(TOPLEVEL).mk
		@echo "Compilation complete!"
    
    run: compile
		@echo "Running $(TEST)..."
		./obj_dir/V$(TOPLEVEL)
    
    clean:
		rm -rf obj_dir
		rm -f *.vcd *.log
    
    .PHONY: compile run clean
endif

# Commercial simulator support (VCS example)
ifeq ($(SIM),vcs)
    TOPLEVEL = $(TEST)
    
    compile:
		@echo "Compiling with VCS..."
		vcs -sverilog +incdir+$(UVM_HOME)/src \
			$(UVM_HOME)/src/uvm_pkg.sv \
			$(DUT_SRC) $(TEST_SRC) \
			-o $(TOPLEVEL)
    
    run: compile
		@echo "Running $(TEST)..."
		./$(TOPLEVEL)
    
    clean:
		rm -rf csrc simv simv.daidir ucli.key vc_hdrs.h
		rm -f *.vpd *.log
    
    .PHONY: compile run clean
endif

# Default target
all: run

.PHONY: all
