/**
 * Module 6 Example 6.2: Multi-Agent Example - C++ Testbench
 * 
 * This C++ file serves as the testbench wrapper for the SystemVerilog
 * multi-agent example. It instantiates the Verilator-generated model,
 * manages simulation time, and generates VCD waveform files.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand Verilator C++ testbench structure
 *   2. Learn how to instantiate Verilator-compiled modules
 *   3. Master simulation time management
 *   4. Generate VCD waveforms for debugging
 *   5. Understand simulation lifecycle management
 * 
 * VERILATOR WORKFLOW:
 *   1. Compile: verilator --cc --exe --build multi_agent.sv multi_agent.cpp
 *   2. Run: ./obj_dir/Vmulti_agent
 *   3. View: gtkwave multi_agent.vcd
 * 
 * TESTBENCH PATTERNS:
 *   - Module instantiation: Create Verilator-generated class instance
 *   - Time management: Track simulation time with main_time
 *   - Waveform generation: VCD file creation and dumping
 *   - Simulation loop: Evaluate design at each time step
 *   - Resource cleanup: Proper memory management
 */

#include "Vmulti_agent.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    auto* top = new Vmulti_agent;
    auto* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("multi_agent.vcd");
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
