#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vstring_utils_top.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    Vstring_utils_top* top = new Vstring_utils_top;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("string_utils.vcd");
    
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
