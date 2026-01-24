/**
 * Module 6 Example 6.3: Protocol Example - C++ Testbench
 * 
 * This C++ file serves as the testbench wrapper for the SystemVerilog
 * protocol example. It instantiates the Verilator-generated model,
 * manages simulation time, and generates VCD waveform files.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand Verilator C++ testbench structure
 *   2. Learn how to instantiate Verilator-compiled modules
 *   3. Master simulation time management
 *   4. Generate VCD waveforms for debugging
 *   5. Understand simulation lifecycle management
 * 
 * VERILATOR WORKFLOW:
 *   1. Compile: verilator --cc --exe --build protocol.sv protocol.cpp
 *   2. Run: ./obj_dir/Vprotocol
 *   3. View: gtkwave protocol.vcd
 * 
 * NOTE: Longer timeout (5000) for protocol transactions
 */

#include "Vprotocol.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    auto* top = new Vprotocol;
    auto* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("protocol.vcd");
    while (!Verilated::gotFinish() && main_time < 5000) {
        top->eval();
        tfp->dump(main_time);
        main_time++;
    }
    top->final();
    tfp->close();
    delete tfp;
    delete top;
    return 0;
}
