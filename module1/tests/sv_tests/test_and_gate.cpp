#include "Vtest_and_gate.h"
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
    Vtest_and_gate* top = new Vtest_and_gate;
    
    // Create VCD trace
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("test_and_gate.vcd");
    
    // Initialize simulation
    top->eval();
    tfp->dump(main_time);
    
    // Run simulation until $finish
    while (!Verilated::gotFinish() && main_time < 10000) {
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
