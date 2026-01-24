/**
 * Module 8 Example 8.1: Command Line Processor (CLP) - C++ Testbench
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand Verilator C++ testbench structure
 *   2. Learn DPI function implementation
 *   3. Understand VCD waveform generation
 *   4. Learn simulation time management
 *   5. Understand Verilator workflow
 * 
 * VERILATOR WORKFLOW:
 *   1. Compile SystemVerilog to C++ model
 *   2. Link with this C++ testbench
 *   3. Execute testbench
 *   4. Generate VCD waveforms
 * 
 * DPI FUNCTION:
 *   - sv_atoi(): String-to-integer conversion
 *   - Used by SystemVerilog code
 *   - Verilator-compatible replacement for $atoi
 * 
 * This C++ file serves as the testbench wrapper for the SystemVerilog
 * CLP example. It instantiates the Verilator-generated model,
 * manages simulation time, and generates VCD waveform files.
 */

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <cstdlib>
#include <cstring>
#include "Vclp_top.h"
#include "Vclp_top__Dpi.h"
#include "svdpi.h"

// ============================================================================
// DPI FUNCTION IMPLEMENTATION
// ============================================================================
/**
 * sv_atoi: String-to-integer conversion (DPI function)
 * 
 * DPI FUNCTION:
 *   - Called from SystemVerilog code
 *   - Converts string to integer
 *   - Verilator-compatible replacement for $atoi
 * 
 * PARAMETERS:
 *   - str: Input string (null-terminated)
 * 
 * RETURNS:
 *   - Integer value of string
 *   - 0 if string is null or empty
 * 
 * USAGE:
 *   - SystemVerilog: sv_atoi("123") -> 123
 *   - Used for parsing command-line arguments
 */
extern "C" int sv_atoi(const char* str) {
    // ========================================================================
    // NULL/EMPTY STRING CHECK
    // ========================================================================
    // 
    // VALIDATION:
    //   - Check if string is null
    //   - Check if string is empty
    //   - Return 0 for invalid input
    if (str == nullptr || strlen(str) == 0) {
        return 0;
    }
    // 
    // NULL CHECK EXAMPLE:
    //   str = nullptr -> return 0
    //   str = "" -> return 0
    
    // ========================================================================
    // CONVERT STRING TO INTEGER
    // ========================================================================
    // 
    // CONVERSION:
    //   - std::atoi(): Standard C++ function
    //   - Converts string to integer
    //   - Handles negative numbers
    //   - Stops at first non-digit character
    return std::atoi(str);
    // 
    // CONVERSION EXAMPLE:
    //   str = "123" -> 123
    //   str = "-456" -> -456
    //   str = "789abc" -> 789 (stops at 'a')
    //   str = "abc" -> 0 (no digits)
}

// ============================================================================
// MAIN FUNCTION
// ============================================================================
/**
 * Main function: Testbench entry point
 * 
 * TESTBENCH FLOW:
 *   1. Initialize Verilator
 *   2. Create top-level module instance
 *   3. Setup VCD tracing
 *   4. Run simulation
 *   5. Cleanup
 */
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
    // 
    // COMMAND ARGS EXAMPLE:
    //   ./clp +test_mode=normal +debug_level=2
    //   Verilator processes arguments
    
    // ========================================================================
    // PHASE 2: CREATE TOP-LEVEL MODULE INSTANCE
    // ========================================================================
    // 
    // MODULE INSTANTIATION:
    //   - Vclp_top: Verilator-generated class
    //   - Represents top-level SystemVerilog module
    //   - All module signals accessible via this object
    Vclp_top* top = new Vclp_top;
    // 
    // INSTANTIATION NOTES:
    //   - Created on heap (new)
    //   - Must be deleted before exit
    //   - Contains all module state
    
    // ========================================================================
    // PHASE 3: SETUP VCD TRACING
    // ========================================================================
    // 
    // VCD TRACING:
    //   - traceEverOn(true): Enable tracing
    //   - Create VCD file object
    //   - Trace all signals (level 99)
    //   - Open VCD file for writing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);  // Trace all signals (level 99)
    tfp->open("clp.vcd");  // Open VCD file
    // 
    // VCD FILE:
    //   - clp.vcd: Waveform file
    //   - Can be viewed in GTKWave or similar
    //   - Contains all signal values over time
    
    // ========================================================================
    // PHASE 4: INITIALIZE SIMULATION
    // ========================================================================
    // 
    // INITIALIZATION:
    //   - top->eval(): Evaluate initial state
    //   - Sets initial signal values
    //   - Prepares for simulation
    top->eval();
    // 
    // INITIALIZATION NOTES:
    //   - First eval() sets initial state
    //   - All signals have initial values
    //   - Ready for simulation
    
    // ========================================================================
    // PHASE 5: RUN SIMULATION
    // ========================================================================
    // 
    // SIMULATION LOOP:
    //   - Run for fixed number of cycles
    //   - Each iteration: Evaluate, dump waveforms
    //   - Continues until timeout or finish
    for (int i = 0; i < 1000; i++) {
        // ====================================================================
        // EVALUATE MODULE
        // ====================================================================
        // 
        // EVALUATION:
        //   - top->eval(): Evaluate module for one time step
        //   - Updates all combinational logic
        //   - Advances simulation by one time unit
        top->eval();
        // 
        // EVALUATION NOTES:
        //   - Called each cycle
        //   - Updates all signals
        //   - Advances simulation state
        
        // ====================================================================
        // DUMP WAVEFORMS
        // ====================================================================
        // 
        // WAVEFORM DUMPING:
        //   - tfp->dump(i): Dump signal values at time i
        //   - Records all signal values
        //   - Writes to VCD file
        tfp->dump(i);
        // 
        // DUMP NOTES:
        //   - Called each cycle
        //   - Records signal values
        //   - Time = i (simulation time)
    }
    // 
    // SIMULATION NOTES:
    //   - Runs for 1000 cycles
    //   - Each cycle: eval() + dump()
    //   - Generates complete waveform file
    
    // ========================================================================
    // PHASE 6: CLEANUP
    // ========================================================================
    // 
    // CLEANUP:
    //   - Close VCD file
    //   - Delete module instance
    //   - Delete VCD file object
    tfp->close();
    delete top;
    delete tfp;
    // 
    // CLEANUP NOTES:
    //   - Must close file before delete
    //   - Delete in reverse order of creation
    //   - Prevents memory leaks
    
    return 0;
}
