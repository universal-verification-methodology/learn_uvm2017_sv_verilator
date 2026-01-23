# Makefile for Module 6 UVM testbenches

SIM ?= verilator
TEST ?= test_complex_testbench_uvm
UVM_HOME ?= $(shell echo $$UVM_HOME)

ifeq ($(UVM_HOME),)
  $(error UVM_HOME is not set. Please set it (or run scripts/install_uvm.sh))
endif

UVM_SRC_DIR = $(if $(wildcard $(UVM_HOME)/src/uvm_pkg.sv),$(UVM_HOME)/src,$(UVM_HOME))
INCLUDES = -I$(UVM_SRC_DIR) +incdir+$(UVM_SRC_DIR) +define+UVM_NO_DPI
VERILATOR_FLAGS = -sv --timing --trace -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHTRUNC

DUT_SRC = ../../dut/protocols/*.v
TEST_SRC = $(TEST).sv

ifeq ($(SIM),verilator)
TOPLEVEL = $(TEST)

compile:
	verilator $(VERILATOR_FLAGS) $(INCLUDES) --binary \
		$(UVM_SRC_DIR)/uvm_pkg.sv \
		$(DUT_SRC) $(TEST_SRC) \
		--top-module $(TOPLEVEL)
	+$(MAKE) -j$(shell nproc 2>/dev/null || echo 8) -C obj_dir -f V$(TOPLEVEL).mk VM_PARALLEL_BUILDS=1

run: compile
	./obj_dir/V$(TOPLEVEL) +UVM_TESTNAME=$(TOPLEVEL)

clean:
	rm -rf obj_dir *.vcd *.log

.PHONY: compile run clean
endif

all: run
.PHONY: all

