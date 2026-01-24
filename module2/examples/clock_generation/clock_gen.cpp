/**
 * Module 2 Example: Clock Generation - C++ Testbench
 * 
 * This C++ file serves as the testbench wrapper for the SystemVerilog
 * clock generation example. It demonstrates how to use Verilator to
 * simulate clock generation patterns in SystemVerilog.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand Verilator C++ testbench structure
 *   2. Learn clock generation simulation patterns
 *   3. Master simulation time management
 *   4. Generate VCD waveforms for clock analysis
 * 
 * CLOCK GENERATION FOCUS:
 *   - This example demonstrates various clock generation techniques
 *   - Clock domains and clock gating
 *   - Clock frequency and duty cycle control
 *   - Multiple clock domains interaction
 * 
 * VERILATOR WORKFLOW:
 *   1. Compile: verilator --cc --exe --build clock_gen.sv clock_gen.cpp
 *   2. Run: ./obj_dir/Vclock_gen
 *   3. View: gtkwave clock_gen.vcd (analyze clock waveforms)
 */

// ============================================================================
// HEADER INCLUDES
// ============================================================================
// Include the Verilator-generated header for the top-level module
// Class name: Vclock_gen (V prefix + module name)
#include "Vclock_gen.h"

// Include Verilator core header: provides core simulation functionality
#include "verilated.h"

// Include Verilator VCD tracing header: enables waveform generation
#include "verilated_vcd_c.h"

// ============================================================================
// GLOBAL SIMULATION TIME
// ============================================================================
/**
 * Global simulation time variable
 * 
 * Tracks current simulation time in time units (from timescale directive).
 * Used by SystemVerilog $time and for VCD timestamping.
 */
vluint64_t main_time = 0;

// ============================================================================
// SYSTEMC TIME STAMP CALLBACK
// ============================================================================
/**
 * SystemC time stamp callback function
 * 
 * Called by Verilator to get current simulation time.
 * Required for proper time tracking in simulation.
 * 
 * @return Current simulation time as double
 */
double sc_time_stamp() {
    return main_time;
}

// ============================================================================
// MAIN FUNCTION - SIMULATION ENTRY POINT
// ============================================================================
/**
 * Main function: Entry point of the C++ testbench
 * 
 * SIMULATION LIFECYCLE:
 *   1. Initialize Verilator simulation environment
 *   2. Create and configure the top-level module instance
 *   3. Set up VCD waveform tracing
 *   4. Run the simulation loop (evaluate design at each time step)
 *   5. Clean up resources
 * 
 * @param argc Number of command-line arguments
 * @param argv Array of command-line argument strings
 * @return Exit status (0 = success)
 */
int main(int argc, char** argv) {
    // Initialize Verilator with command-line arguments
    Verilated::commandArgs(argc, argv);
    
    // Enable tracing globally for all Verilator modules
    Verilated::traceEverOn(true);
    
    // Create an instance of the top-level SystemVerilog module
    Vclock_gen* top = new Vclock_gen;
    
    // Create a VCD trace file object for waveform generation
    VerilatedVcdC* tfp = new VerilatedVcdC;
    
    // Connect the module to the trace file object
    top->trace(tfp, 99);  // Trace depth 99 (all hierarchy levels)
    
    // Open the VCD file for writing
    tfp->open("clock_gen.vcd");
    
    // Perform initial evaluation of the design
    top->eval();
    
    // Dump initial state to VCD file at time 0
    tfp->dump(main_time);
    
    // Main simulation loop: run until finish or timeout
    // Timeout: 500 time units (sufficient for clock generation examples)
    while (!Verilated::gotFinish() && main_time < 500) {
        // Increment simulation time by one time unit
        main_time++;
        
        // Evaluate the design at the new time step
        top->eval();
        
        // Dump current signal values to VCD file
        tfp->dump(main_time);
    }
    
    // Finalize the simulation
    top->final();
    
    // Close the VCD trace file
    tfp->close();
    
    // Deallocate the top-level module instance
    delete top;
    
    // Deallocate the VCD trace file object
    delete tfp;
    
    // Return success status
    return 0;
}
