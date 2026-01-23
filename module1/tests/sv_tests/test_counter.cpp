#include "Vtest_counter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

vluint64_t main_time = 0;

double sc_time_stamp() {
    return main_time;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    // Create instance
    Vtest_counter* top = new Vtest_counter;
    
    // Create VCD trace
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("test_counter.vcd");
    
    // Initialize simulation
    top->eval();
    tfp->dump(main_time);
    
    // Run simulation until $finish
    while (!Verilated::gotFinish() && main_time < 100000) {
        main_time++;
        top->eval();
        tfp->dump(main_time);
    }
    
    // Final evaluation
    top->final();
    
    // Cleanup
    tfp->close();
    delete top;
    delete tfp;
    
    return 0;
}
