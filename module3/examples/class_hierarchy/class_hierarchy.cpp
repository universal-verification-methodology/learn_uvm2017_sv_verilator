/**
 * Module 3 Example 3.1: UVM Class Hierarchy - C++ Testbench
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
// Verilator-generated header for the top-level module
// Generated from class_hierarchy.sv during Verilator compilation
// Contains Vclass_hierarchy class definition
#include "Vclass_hierarchy.h"

// Verilator core library
// Provides Verilated class, command-line argument parsing, etc.
#include "verilated.h"

// Verilator VCD tracing library
// Provides VerilatedVcdC class for waveform generation
#include "verilated_vcd_c.h"

// ============================================================================
// GLOBAL SIMULATION TIME
// ============================================================================
// Global variable tracking simulation time
// 
// SIMULATION TIME:
//   - vluint64_t: Verilator's 64-bit unsigned integer type
//   - Tracks current simulation time in time units
//   - Incremented each simulation cycle
//   - Used by sc_time_stamp() for SystemVerilog $time
// 
// TIME MANAGEMENT:
//   - Starts at 0, increments each cycle
//   - Used for VCD waveform timestamps
//   - SystemVerilog $time returns this value
vluint64_t main_time = 0;

// ============================================================================
// SYSTEMC TIME STAMP FUNCTION
// ============================================================================
/**
 * SystemC time stamp callback function
 * 
 * PURPOSE:
 *   - Called by SystemVerilog $time system task
 *   - Returns current simulation time
 *   - Required for Verilator simulation
 * 
 * RETURN:
 *   - Current simulation time as double
 *   - Used by SystemVerilog for timing operations
 * 
 * USAGE:
 *   - SystemVerilog code: $display("Time: %0t", $time);
 *   - This function provides the time value
 */
double sc_time_stamp() {
    return main_time;  // Return current simulation time
}

// ============================================================================
// MAIN FUNCTION
// ============================================================================
/**
 * Main testbench entry point
 * 
 * TESTBENCH EXECUTION FLOW:
 *   1. Initialize Verilator and parse command-line arguments
 *   2. Enable VCD tracing
 *   3. Create top-level module instance
 *   4. Setup VCD waveform file
 *   5. Initial evaluation and dump
 *   6. Simulation loop (eval + dump until finish or timeout)
 *   7. Finalize module and close trace file
 *   8. Cleanup memory
 * 
 * @param argc Command-line argument count
 * @param argv Command-line argument array
 * @return Exit status (0 = success)
 */
int main(int argc, char** argv) {
    // ========================================================================
    // PHASE 1: VERILATOR INITIALIZATION
    // ========================================================================
    // Parse command-line arguments
    // 
    // COMMAND-LINE ARGUMENTS:
    //   - Verilator-specific: +verilator+debug, etc.
    //   - SystemVerilog: +UVM_TESTNAME=TestName, etc.
    //   - Custom: Any arguments passed to executable
    Verilated::commandArgs(argc, argv);
    
    // Enable VCD tracing globally
    // 
    // VCD TRACING:
    //   - VCD (Value Change Dump) format for waveforms
    //   - Can be viewed in GTKWave, Verdi, etc.
    //   - Must be enabled before creating trace object
    Verilated::traceEverOn(true);
    
    // ========================================================================
    // PHASE 2: MODULE INSTANTIATION
    // ========================================================================
    // Create top-level module instance
    // 
    // MODULE CREATION:
    //   - Vclass_hierarchy: Verilator-generated class from class_hierarchy.sv
    //   - Contains all module ports as public members
    //   - Provides eval() method for simulation
    //   - Must be allocated with new (heap allocation)
    Vclass_hierarchy* top = new Vclass_hierarchy;
    
    // ========================================================================
    // PHASE 3: VCD TRACING SETUP
    // ========================================================================
    // Create VCD trace file object
    // 
    // VCD TRACE OBJECT:
    //   - VerilatedVcdC: Verilator VCD tracing class
    //   - Manages waveform file generation
    //   - Must be allocated with new
    VerilatedVcdC* tfp = new VerilatedVcdC;
    
    // Register module with trace object
    // 
    // TRACE REGISTRATION:
    //   - top->trace(tfp, 99): Register all signals for tracing
    //   - 99: Trace depth (how many levels of hierarchy to trace)
    //   - All module signals will be included in VCD file
    top->trace(tfp, 99);
    
    // Open VCD file for writing
    // 
    // VCD FILE:
    //   - "class_hierarchy.vcd": Output waveform file name
    //   - Can be viewed with GTKWave: gtkwave class_hierarchy.vcd
    //   - Contains all signal value changes over time
    tfp->open("class_hierarchy.vcd");
    
    // ========================================================================
    // PHASE 4: INITIAL EVALUATION
    // ========================================================================
    // Evaluate module at time 0
    // 
    // INITIAL EVALUATION:
    //   - Evaluates all combinational logic
    //   - Initializes all registers
    //   - Captures initial state in waveform
    top->eval();
    
    // Dump initial state to VCD file
    // 
    // VCD DUMP:
    //   - Records all signal values at current time
    //   - Creates initial waveform entry
    //   - Time 0: Initial state of all signals
    tfp->dump(main_time);
    
    // ========================================================================
    // PHASE 5: SIMULATION LOOP
    // ========================================================================
    // Main simulation loop
    // 
    // LOOP CONDITIONS:
    //   - !Verilated::gotFinish(): Continue until SystemVerilog $finish
    //   - main_time < 1000: Timeout protection (max 1000 time units)
    //   - Loop continues until one condition fails
    while (!Verilated::gotFinish() && main_time < 1000) {
        // Increment simulation time
        // 
        // TIME INCREMENT:
        //   - Each iteration = one time unit
        //   - Time advances: 0, 1, 2, 3, ...
        //   - SystemVerilog $time reflects this value
        main_time++;
        
        // Evaluate module at new time
        // 
        // MODULE EVALUATION:
        //   - Evaluates all combinational logic
        //   - Updates sequential elements (registers)
        //   - Processes SystemVerilog code (UVM phases, etc.)
        //   - Must be called each simulation cycle
        top->eval();
        
        // Dump signal values to VCD file
        // 
        // WAVEFORM DUMP:
        //   - Records all signal value changes
        //   - Creates waveform entry for current time
        //   - Only changes are recorded (VCD format optimization)
        tfp->dump(main_time);
    }
    
    // ========================================================================
    // PHASE 6: FINALIZATION
    // ========================================================================
    // Finalize module
    // 
    // MODULE FINALIZATION:
    //   - Performs cleanup operations
    //   - Finalizes SystemVerilog code
    //   - Required before deletion
    top->final();
    
    // Close VCD trace file
    // 
    // VCD FILE CLOSE:
    //   - Flushes remaining data to file
    //   - Closes file handle
    //   - Must be closed before trace object deletion
    tfp->close();
    
    // ========================================================================
    // PHASE 7: CLEANUP
    // ========================================================================
    // Delete module instance
    // 
    // MEMORY CLEANUP:
    //   - Free module memory
    //   - Prevent memory leaks
    //   - Must delete after finalization
    delete top;
    
    // Delete trace object
    // 
    // TRACE CLEANUP:
    //   - Free trace object memory
    //   - Must delete after file close
    delete tfp;
    
    // Return success status
    return 0;
}
