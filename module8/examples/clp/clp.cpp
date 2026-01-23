#include <verilated.h>
#include <verilated_vcd_c.h>
#include <cstdlib>
#include <cstring>
#include "Vclp_top.h"
#include "Vclp_top__Dpi.h"
#include "svdpi.h"

// DPI function for string-to-integer conversion (Verilator-compatible replacement for $atoi)
extern "C" int sv_atoi(const char* str) {
    if (str == nullptr || strlen(str) == 0) {
        return 0;
    }
    return std::atoi(str);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    Vclp_top* top = new Vclp_top;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("clp.vcd");
    
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
