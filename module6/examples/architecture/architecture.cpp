/**
 * Module 6 Example 6.1: Architecture Example - C++ Testbench
 * 
 * This C++ file serves as the testbench wrapper for the SystemVerilog
 * architecture example. It instantiates the Verilator-generated model,
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
 *   1. Compile: verilator --cc --exe --build architecture.sv architecture.cpp
 *   2. Run: ./obj_dir/Varchitecture
 *   3. View: gtkwave architecture.vcd
 * 
 * TESTBENCH PATTERNS:
 *   - Module instantiation: Create Verilator-generated class instance
 *   - Time management: Track simulation time with main_time
 *   - Waveform generation: VCD file creation and dumping
 *   - Simulation loop: Evaluate design at each time step
 *   - Resource cleanup: Proper memory management
 * 
 * Purpose:
 *   - Instantiate the Verilator-compiled SystemVerilog module
 *   - Drive the simulation clock and control signals
 *   - Generate VCD waveform files for debugging
 *   - Manage simulation lifecycle (initialization, execution, cleanup)
 */

// ============================================================================
// HEADER INCLUDES
// ============================================================================
// Include the Verilator-generated header for the top-level module
// 
// VERILATOR GENERATION:
//   - Verilator compiles SystemVerilog to C++ classes
//   - Class name: V<module_name> (V prefix + module name)
//   - This header is auto-generated during Verilator compilation
//   - Contains: Class definition, signal accessors, evaluation methods
#include "Varchitecture.h"

// Verilator core library: Provides simulation control and utilities
// 
// VERILATED.H INCLUDES:
//   - Verilated class: Core simulation control
//   - Verilated::commandArgs(): Parse command-line arguments
//   - Verilated::traceEverOn(): Enable tracing support
//   - Verilated::gotFinish(): Check for $finish() call
//   - Verilated::final(): Finalize simulation
#include "verilated.h"

// Verilator VCD tracing: Waveform generation support
// 
// VERILATED_VCD_C.H INCLUDES:
//   - VerilatedVcdC class: VCD file generation
//   - tfp->open(): Open VCD file
//   - tfp->dump(): Write signal values at current time
//   - tfp->close(): Close VCD file
#include "verilated_vcd_c.h"

// ============================================================================
// SIMULATION TIME TRACKING
// ============================================================================
// 
// MAIN_TIME:
//   - Global variable tracking simulation time
//   - Incremented each simulation cycle
//   - Used for VCD waveform timing
//   - Returned by sc_time_stamp() for Verilator
// 
// TIME UNITS:
//   - Time is in simulation time units (typically nanoseconds)
//   - Incremented by 1 each evaluation cycle
//   - Used for waveform timing and debugging
vluint64_t main_time = 0;

// ============================================================================
// TIME STAMP FUNCTION
// ============================================================================
// 
// SC_TIME_STAMP:
//   - Required by Verilator for time tracking
//   - Returns current simulation time
//   - Used internally by Verilator for timing
//   - Must return double (seconds) or vluint64_t (time units)
// 
// RETURN VALUE:
//   - Returns main_time as double (seconds)
//   - Verilator uses this for timing calculations
double sc_time_stamp() {
    return main_time;
}

// ============================================================================
// MAIN FUNCTION
// ============================================================================
// 
// MAIN FUNCTION:
//   - Entry point for Verilator simulation
//   - Initializes Verilator environment
//   - Creates module instance
//   - Runs simulation loop
//   - Generates waveforms
//   - Cleans up resources
int main(int argc, char** argv) {
    // ========================================================================
    // PHASE 1: VERILATOR INITIALIZATION
    // ========================================================================
    // 
    // COMMAND ARGUMENTS:
    //   - Parse command-line arguments
    //   - Supports Verilator options (e.g., --trace, --trace-max-array)
    //   - Allows runtime configuration
    Verilated::commandArgs(argc, argv);
    
    // ========================================================================
    // PHASE 2: TRACING SETUP
    // ========================================================================
    // 
    // TRACE EVER ON:
    //   - Enable tracing support globally
    //   - Required before creating VerilatedVcdC object
    //   - Allows VCD/FST waveform generation
    //   - Must be called before trace object creation
    Verilated::traceEverOn(true);
    
    // ========================================================================
    // PHASE 3: MODULE INSTANTIATION
    // ========================================================================
    // 
    // MODULE CREATION:
    //   - Create instance of Verilator-generated class
    //   - Class name: V<module_name> (V prefix + module name)
    //   - Example: Varchitecture for module "architecture"
    //   - Allocates memory for module instance
    //   - Initializes all signals to default values
    auto* top = new Varchitecture;
    
    // ========================================================================
    // PHASE 4: WAVEFORM SETUP
    // ========================================================================
    // 
    // VCD TRACE OBJECT:
    //   - Create VCD trace file object
    //   - Used for waveform generation
    //   - Supports VCD format (Value Change Dump)
    auto* tfp = new VerilatedVcdC;
    
    // TRACE CONNECTION:
    //   - Connect module to trace object
    //   - Depth: 99 (trace all hierarchy levels)
    //   - Registers all signals for tracing
    //   - Must be called before opening trace file
    top->trace(tfp, 99);
    
    // TRACE FILE OPEN:
    //   - Open VCD file for writing
    //   - Filename: "architecture.vcd"
    //   - Creates file and writes header
    //   - Must be called after trace() connection
    tfp->open("architecture.vcd");
    
    // ========================================================================
    // PHASE 5: SIMULATION LOOP
    // ========================================================================
    // 
    // SIMULATION LOOP:
    //   - Continues until $finish() called or timeout
    //   - Evaluates design at each time step
    //   - Dumps signal values to VCD file
    //   - Increments simulation time
    // 
    // LOOP CONDITIONS:
    //   - !Verilated::gotFinish(): Continue until $finish() called
    //   - main_time < 2000: Safety timeout (2000 time units)
    //   - Both conditions must be true to continue
    while (!Verilated::gotFinish() && main_time < 2000) {
        // ====================================================================
        // EVALUATE DESIGN
        // ====================================================================
        // 
        // EVAL:
        //   - Evaluate all combinational logic
        //   - Update signal values based on current inputs
        //   - Propagates signal changes through design
        //   - Called once per simulation cycle
        top->eval();
        
        // ====================================================================
        // DUMP WAVEFORM DATA
        // ====================================================================
        // 
        // DUMP:
        //   - Write signal values to VCD file at current time
        //   - Records all signal changes for this time step
        //   - Used for waveform viewing (gtkwave, etc.)
        //   - Must be called after eval() for accurate waveforms
        tfp->dump(main_time);
        
        // ====================================================================
        // INCREMENT SIMULATION TIME
        // ====================================================================
        // 
        // TIME INCREMENT:
        //   - Advance simulation time by 1 unit
        //   - Used for next evaluation cycle
        //   - Tracks simulation progress
        main_time++;
    }
    
    // ========================================================================
    // PHASE 6: SIMULATION CLEANUP
    // ========================================================================
    // 
    // FINALIZE:
    //   - Perform final simulation cleanup
    //   - Flush any pending operations
    //   - Required before deleting module instance
    top->final();
    
    // ========================================================================
    // PHASE 7: RESOURCE CLEANUP
    // ========================================================================
    // 
    // CLOSE TRACE FILE:
    //   - Close VCD file
    //   - Write final data and close file handle
    //   - Must be called before deleting trace object
    tfp->close();
    
    // DELETE TRACE OBJECT:
    //   - Free memory allocated for trace object
    //   - Must be deleted after closing file
    delete tfp;
    
    // DELETE MODULE INSTANCE:
    //   - Free memory allocated for module instance
    //   - Must be deleted after finalization
    delete top;
    
    // ========================================================================
    // PHASE 8: EXIT
    // ========================================================================
    // 
    // RETURN:
    //   - Return 0 on successful completion
    //   - Non-zero indicates error
    return 0;
}
