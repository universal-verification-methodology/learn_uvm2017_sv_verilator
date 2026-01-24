/**
 * Module 4 Example 4.4: UVM Sequencer and Sequences - C++ Testbench
 */

#include "Vsequencers.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

vluint64_t main_time = 0;

double sc_time_stamp() {
    return main_time;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vsequencers* top = new Vsequencers;
    
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("sequencers.vcd");
    
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
