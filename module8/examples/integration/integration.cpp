#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vintegration_top.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    Vintegration_top* top = new Vintegration_top;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("integration.vcd");
    
    // Initialize simulation
    top->eval();
    
    // Run simulation
    for (int i = 0; i < 1000; i++) {
        top->eval();
        tfp->dump(i);
    }
    
    tfp->close();
    delete top;
    delete tfp;
    
    return 0;
}
