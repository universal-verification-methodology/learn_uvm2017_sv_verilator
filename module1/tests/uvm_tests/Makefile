# Makefile for UVM testbenches
# Supports Verilator and commercial simulators

# Default simulator
SIM ?= verilator

# Test selection
TEST ?= test_and_gate_uvm

# UVM home (set via environment or default)
UVM_HOME ?= $(shell echo $$UVM_HOME)

# Verilator flags
VERILATOR_FLAGS = -sv --timing --trace

# Include paths
INCLUDES = -I$(UVM_HOME)/src

# Source files
DUT_SRC = ../../dut/simple_gates/*.v
TEST_SRC = $(TEST).sv

# Verilator compilation
ifeq ($(SIM),verilator)
    TOPLEVEL = $(TEST)
    
    compile:
		@echo "Compiling with Verilator..."
		@echo "Note: Verilator has limited UVM support"
		verilator $(VERILATOR_FLAGS) $(INCLUDES) \
			--cc --exe \
			$(DUT_SRC) $(TEST_SRC) \
			--top-module $(TOPLEVEL) \
			-o $(TOPLEVEL)
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
			-o $(TOPLEVEL) \
			+UVM_TESTNAME=$(TEST)
    
    run: compile
		@echo "Running $(TEST)..."
		./$(TOPLEVEL) +UVM_TESTNAME=$(TEST)
    
    clean:
		rm -rf csrc simv simv.daidir ucli.key vc_hdrs.h
		rm -f *.vpd *.log
    
    .PHONY: compile run clean
endif

# QuestaSim support
ifeq ($(SIM),questa)
    TOPLEVEL = $(TEST)
    
    compile:
		@echo "Compiling with QuestaSim..."
		vlog -sv +incdir+$(UVM_HOME)/src \
			$(UVM_HOME)/src/uvm_pkg.sv \
			$(DUT_SRC) $(TEST_SRC)
    
    run: compile
		@echo "Running $(TEST)..."
		vsim -c $(TOPLEVEL) -do "run -all; quit"
    
    clean:
		rm -rf work transcript vsim.wlf
		rm -f *.log
    
    .PHONY: compile run clean
endif

# Default target
all: run

.PHONY: all
