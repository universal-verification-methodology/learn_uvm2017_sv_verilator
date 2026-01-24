/**
 * Module 4 Example 4.5: TLM (Transaction-Level Modeling) - C++ Testbench
 */

#include "Vtlm.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

vluint64_t main_time = 0;

double sc_time_stamp() {
    return main_time;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vtlm* top = new Vtlm;
    
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("tlm.vcd");
    
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
