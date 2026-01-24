/**
 * Module 3 Example 3.3: UVM Reporting - C++ Testbench
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand Verilator C++ testbench structure
 *   2. Learn Verilator simulation workflow
 *   3. Master VCD waveform generation
 *   4. Understand simulation time management
 *   5. Apply testbench patterns for UVM examples
 * 
 * VERILATOR WORKFLOW:
 *   1. Include generated Verilator header
 *   2. Initialize Verilator and tracing
 *   3. Create top-level module instance
 *   4. Setup VCD tracing
 *   5. Simulation loop (eval + dump)
 *   6. Cleanup and finalization
 * 
 * TESTBENCH PATTERNS:
 *   - Global simulation time tracking
 *   - VCD waveform generation
 *   - Simulation loop with timeout
 *   - Proper cleanup and memory management
 * 
 * PHASE-BY-PHASE EXPLANATION:
 *   - Initialization: Setup Verilator, create module, enable tracing
 *   - Simulation: Loop evaluating module and dumping waveforms
 *   - Cleanup: Finalize module, close trace file, free memory
 * 
 * MEMORY MANAGEMENT:
 *   - Allocate module and trace objects with new
 *   - Must delete objects before exit
 *   - VCD file must be closed before deletion
 * 
 * ERROR HANDLING:
 *   - Check for Verilated::gotFinish() (SystemVerilog $finish)
 *   - Timeout protection (main_time < limit)
 *   - Proper cleanup on exit
 */

// ============================================================================
// INCLUDES
// ============================================================================
#include "Vreporting.h"     // Verilator-generated header for reporting module
#include "verilated.h"      // Verilator core library
#include "verilated_vcd_c.h" // Verilator VCD tracing library

// ============================================================================
// GLOBAL SIMULATION TIME
// ============================================================================
vluint64_t main_time = 0;   // Global simulation time tracker

// ============================================================================
// SYSTEMC TIME STAMP FUNCTION
// ============================================================================
double sc_time_stamp() {
    return main_time;  // Return current simulation time for SystemVerilog $time
}

// ============================================================================
// MAIN FUNCTION
// ============================================================================
int main(int argc, char** argv) {
    // Initialize Verilator and parse command-line arguments
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);  // Enable VCD tracing
    
    // Create top-level module instance
    Vreporting* top = new Vreporting;
    
    // Setup VCD tracing
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);  // Register all signals for tracing (depth=99)
    tfp->open("reporting.vcd");  // Open VCD file for waveform output
    
    // Initial evaluation and dump
    top->eval();  // Evaluate module at time 0
    tfp->dump(main_time);  // Dump initial state to VCD
    
    // Simulation loop: Continue until $finish or timeout
    while (!Verilated::gotFinish() && main_time < 1000) {
        main_time++;  // Increment simulation time
        top->eval();  // Evaluate module (processes UVM phases, etc.)
        tfp->dump(main_time);  // Dump signal values to VCD
    }
    
    // Finalization and cleanup
    top->final();  // Finalize module
    tfp->close();  // Close VCD file
    delete top;     // Free module memory
    delete tfp;     // Free trace object memory
    
    return 0;
}
