#include "Vvip.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    auto* top = new Vvip;
    auto* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("vip.vcd");
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

