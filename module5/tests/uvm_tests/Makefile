# Makefile for UVM testbenches
# Supports Verilator and commercial simulators

# Default simulator
SIM ?= verilator

# Test selection
TEST ?= test_advanced_uvm

# UVM home (set via environment or default)
UVM_HOME ?= $(shell echo $$UVM_HOME)

# Verify UVM_HOME is set
ifeq ($(UVM_HOME),)
    $(error UVM_HOME is not set. Please set it or use --uvm-home option)
endif

# Verilator flags
VERILATOR_FLAGS = -sv --timing --trace -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHTRUNC

# Include paths and defines
UVM_SRC_DIR = $(if $(wildcard $(UVM_HOME)/src/uvm_pkg.sv),$(UVM_HOME)/src,$(UVM_HOME))
INCLUDES = -I$(UVM_SRC_DIR) +incdir+$(UVM_SRC_DIR) +define+UVM_NO_DPI

# Source files
DUT_SRC = ../../dut/advanced/*.v
TEST_SRC = $(TEST).sv

# Verilator compilation
ifeq ($(SIM),verilator)
    TOPLEVEL = $(TEST)
    
    compile:
		@echo "Compiling with Verilator..."
		@echo "Note: Using Verilator with UVM 2017 support"
		verilator $(VERILATOR_FLAGS) $(INCLUDES) \
			--binary \
			$(UVM_SRC_DIR)/uvm_pkg.sv \
			$(DUT_SRC) $(TEST_SRC) \
			--top-module $(TOPLEVEL)
		@echo "Building with parallel jobs..."
		make -j$(shell nproc 2>/dev/null || echo 8) -C obj_dir -f V$(TOPLEVEL).mk VM_PARALLEL_BUILDS=1
		@echo "Compilation complete!"
    
    run: compile
		@echo "Running $(TEST)..."
		./obj_dir/V$(TOPLEVEL) +UVM_TESTNAME=$(TOPLEVEL)
    
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
