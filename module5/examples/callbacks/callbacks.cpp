/**
 * Module 5 Example 5.4: UVM Callbacks - C++ Testbench
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand Verilator C++ testbench structure
 *   2. Learn Verilator simulation workflow
 *   3. Master VCD waveform generation
 *   4. Understand simulation time management
 *   5. Apply testbench patterns for UVM examples
 */

#include "Vcallbacks.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

vluint64_t main_time = 0;

double sc_time_stamp() {
    return main_time;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vcallbacks* top = new Vcallbacks;
    
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("callbacks.vcd");
    
    top->eval();
    tfp->dump(main_time);
    
    while (!Verilated::gotFinish() && main_time < 1000) {
        main_time++;
        top->eval();
        tfp->dump(main_time);
    }
    
    top->final();
    tfp->close();
    delete top;
    delete tfp;
    
    return 0;
}
