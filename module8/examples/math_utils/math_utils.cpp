/**
 * Module 8 Example 8.7: Math Utilities - C++ Testbench
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand Verilator C++ testbench structure
 *   2. Understand VCD waveform generation
 *   3. Learn simulation time management
 *   4. Understand Verilator workflow
 * 
 * VERILATOR WORKFLOW:
 *   1. Compile SystemVerilog to C++ model
 *   2. Link with this C++ testbench
 *   3. Execute testbench
 *   4. Generate VCD waveforms
 * 
 * This C++ file serves as the testbench wrapper for the SystemVerilog
 * math utilities example. It instantiates the Verilator-generated model,
 * manages simulation time, and generates VCD waveform files.
 */

#include "Vmath_utils_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    auto* top = new Vmath_utils_top;
    auto* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("math_utils.vcd");
    while (!Verilated::gotFinish() && main_time < 2000) {
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
