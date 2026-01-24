/**
 * Module 8 Example 8.2: UVM Comparators - C++ Testbench
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand Verilator C++ testbench structure
 *   2. Understand VCD waveform generation
 *   3. Learn simulation time management
 *   4. Understand Verilator workflow
 * 
 * VERILATOR WORKFLOW:
 *   1. Compile SystemVerilog to C++ model
 *   2. Link with this C++ testbench
 *   3. Execute testbench
 *   4. Generate VCD waveforms
 * 
 * This C++ file serves as the testbench wrapper for the SystemVerilog
 * comparators example. It instantiates the Verilator-generated model,
 * manages simulation time, and generates VCD waveform files.
 */

#include "Vcomparators_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char** argv) {
    // ========================================================================
    // PHASE 1: INITIALIZE VERILATOR
    // ========================================================================
    // 
    // COMMAND ARGS:
    //   - Parse command-line arguments
    //   - Pass to Verilator for processing
    //   - Handles Verilator-specific options
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    // ========================================================================
    // PHASE 2: CREATE TOP-LEVEL MODULE INSTANCE
    // ========================================================================
    // 
    // MODULE INSTANTIATION:
    //   - Vcomparators_top: Verilator-generated class
    //   - Represents top-level SystemVerilog module
    //   - All module signals accessible via this object
    auto* top = new Vcomparators_top;
    
    // ========================================================================
    // PHASE 3: SETUP VCD TRACING
    // ========================================================================
    // 
    // VCD TRACING:
    //   - Create VCD file object
    //   - Trace all signals (level 99)
    //   - Open VCD file for writing
    auto* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("comparators.vcd");
    
    // ========================================================================
    // PHASE 4: RUN SIMULATION
    // ========================================================================
    // 
    // SIMULATION LOOP:
    //   - Run until finish or timeout
    //   - Each iteration: Evaluate, dump waveforms
    //   - Continues until timeout or finish
    while (!Verilated::gotFinish() && main_time < 2000) {
        // ====================================================================
        // EVALUATE MODULE
        // ====================================================================
        // 
        // EVALUATION:
        //   - top->eval(): Evaluate module for one time step
        //   - Updates all combinational logic
        //   - Advances simulation by one time unit
        top->eval();
        
        // ====================================================================
        // DUMP WAVEFORMS
        // ====================================================================
        // 
        // WAVEFORM DUMPING:
        //   - tfp->dump(main_time): Dump signal values at current time
        //   - Records all signal values
        //   - Writes to VCD file
        tfp->dump(main_time);
        main_time++;
    }
    
    // ========================================================================
    // PHASE 5: CLEANUP
    // ========================================================================
    // 
    // CLEANUP:
    //   - Finalize module
    //   - Close VCD file
    //   - Delete module instance
    //   - Delete VCD file object
    top->final();
    tfp->close();
    delete tfp;
    delete top;
    return 0;
}
