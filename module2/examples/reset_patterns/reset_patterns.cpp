#include "Vreset_patterns.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

vluint64_t main_time = 0;

double sc_time_stamp() {
    return main_time;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vreset_patterns* top = new Vreset_patterns;
    
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("reset_patterns.vcd");
    
    top->eval();
    tfp->dump(main_time);
    
    while (!Verilated::gotFinish() && main_time < 500) {
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
