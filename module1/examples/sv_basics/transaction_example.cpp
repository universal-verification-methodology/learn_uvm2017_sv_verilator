/**
 * Module 1 Example 1.1: Transaction Example - C++ Testbench
 * 
 * This C++ file serves as the testbench wrapper for the SystemVerilog
 * transaction class example. It instantiates the Verilator-generated model,
 * manages simulation time, and generates VCD waveform files.
 * 
 * Purpose:
 *   - Instantiate the Verilator-compiled SystemVerilog module
 *   - Drive the simulation clock and control signals
 *   - Generate VCD waveform files for debugging
 *   - Manage simulation lifecycle (initialization, execution, cleanup)
 * 
 * Note: This example demonstrates SystemVerilog classes, which are the
 * foundation for UVM transaction modeling and object-oriented verification.
 */

// Include the Verilator-generated header for the top-level module
// This header contains the class definition for the compiled SystemVerilog module
// The class name is 'Vtransaction_example' (V prefix + module name)
#include "Vtransaction_example.h"

// Include Verilator core header: provides core simulation functionality
// Contains Verilated class with static methods for simulation control
#include "verilated.h"

// Include Verilator VCD tracing header: enables waveform generation
// VCD (Value Change Dump) files can be viewed in waveform viewers like GTKWave
#include "verilated_vcd_c.h"

/**
 * Global simulation time variable
 * 
 * This variable tracks the current simulation time in time units.
 * It's used by the SystemVerilog $time system task and for VCD dumping.
 * 'vluint64_t' is a Verilator-defined 64-bit unsigned integer type.
 */
vluint64_t main_time = 0;

/**
 * SystemC time stamp callback function
 * 
 * This function is called by Verilator to get the current simulation time.
 * It's required for proper time tracking in the simulation.
 * 
 * @return Current simulation time as a double (for SystemC compatibility)
 */
double sc_time_stamp() {
    // Return the current simulation time
    // Casting to double allows fractional time units if needed
    return main_time;
}

/**
 * Main function: Entry point of the C++ testbench
 * 
 * This function orchestrates the entire simulation:
 * 1. Initialize Verilator simulation environment
 * 2. Create and configure the top-level module instance
 * 3. Set up VCD waveform tracing
 * 4. Run the simulation loop
 * 5. Clean up resources
 * 
 * @param argc Number of command-line arguments
 * @param argv Array of command-line argument strings
 * @return Exit status (0 = success)
 */
int main(int argc, char** argv) {
    // Initialize Verilator with command-line arguments
    // This processes any Verilator-specific flags (e.g., --trace, --trace-depth)
    // Arguments are passed from the command line when running the executable
    Verilated::commandArgs(argc, argv);
    
    // Enable tracing globally for all Verilator modules
    // This must be called before creating any module instances
    // 'true' enables VCD tracing capability
    Verilated::traceEverOn(true);
    
    // Create an instance of the top-level SystemVerilog module
    // 'new' allocates memory on the heap for the module instance
    // The module was compiled by Verilator from transaction.sv
    // This instance represents the entire SystemVerilog design
    // Transaction classes are instantiated and used within this module
    Vtransaction_example* top = new Vtransaction_example;
    
    // Create a VCD trace file object for waveform generation
    // VCD files record signal value changes over time for debugging
    VerilatedVcdC* tfp = new VerilatedVcdC;
    
    // Connect the module to the trace file object
    // 'trace()' method registers all signals in the module for tracing
    // Second parameter (99) is the trace depth (how many hierarchy levels to trace)
    // Depth 99 traces all levels of the design hierarchy
    top->trace(tfp, 99);
    
    // Open the VCD file for writing
    // "transaction_example.vcd" is the output filename
    // This file will contain all signal transitions during simulation
    tfp->open("transaction_example.vcd");
    
    // Perform initial evaluation of the design
    // 'eval()' evaluates all combinational and sequential logic
    // This initializes all signals to their reset/default values
    // Transaction objects are created and initialized at this point
    top->eval();
    
    // Dump initial state to VCD file at time 0
    // This captures the initial values of all traced signals
    tfp->dump(main_time);
    
    // Main simulation loop: run until finish or timeout
    // 'Verilated::gotFinish()' returns true when SystemVerilog $finish is called
    // 'main_time < 1000' prevents infinite loops (timeout after 1000 time units)
    while (!Verilated::gotFinish() && main_time < 1000) {
        // Increment simulation time by one time unit
        // Each iteration represents one time step in the simulation
        main_time++;
        
        // Evaluate the design at the new time step
        // This updates all signals based on current inputs and state
        // Combinational logic is evaluated, sequential logic updates on clock edges
        // Transaction class methods are called during evaluation
        top->eval();
        
        // Dump current signal values to VCD file
        // This records the state of all traced signals at this time point
        tfp->dump(main_time);
    }
    
    // Finalize the simulation
    // 'final()' performs cleanup operations and final evaluations
    // This ensures all final states are properly recorded
    // Transaction objects are finalized at this point
    top->final();
    
    // Close the VCD trace file
    // This flushes any remaining data and finalizes the file format
    // The file can now be opened in waveform viewers
    tfp->close();
    
    // Deallocate the top-level module instance
    // 'delete' frees the memory allocated by 'new'
    // This prevents memory leaks
    delete top;
    
    // Deallocate the VCD trace file object
    // Clean up the trace file handler
    delete tfp;
    
    // Return success status to the operating system
    // Exit code 0 indicates successful completion
    return 0;
}
