/**
 * Module 1: Simple AND Gate
 * 
 * A basic 2-input AND gate for verification examples.
 * This module implements a combinational logic AND gate that performs
 * bitwise AND operation on two input signals.
 * 
 * DESIGN PATTERNS DEMONSTRATED:
 *   - Combinational logic implementation
 *   - Continuous assignment using always @(*)
 *   - Blocking assignments for combinational logic
 *   - Simple gate-level design
 * 
 * VERIFICATION CONSIDERATIONS:
 *   - All input combinations must be tested (4 test cases)
 *   - Output should update immediately when inputs change (no delay)
 *   - No clock dependency (pure combinational)
 *   - No state to reset (combinational logic)
 * 
 * HARDWARE IMPLEMENTATION:
 *   - Synthesizes to: Single AND gate (2-input)
 *   - Propagation delay: Typically < 1ns in modern processes
 *   - Power: Static power only (no clock, no switching when inputs stable)
 *   - Area: Minimal (single gate)
 * 
 * Ports:
 *   a, b: Input signals (1-bit each)
 *   y:    Output signal (1-bit, result of a AND b)
 * 
 * Truth Table:
 *   a | b | y
 *   --|---|--
 *   0 | 0 | 0
 *   0 | 1 | 0
 *   1 | 0 | 0
 *   1 | 1 | 1
 * 
 * TIMING DIAGRAM:
 *   a:     __/‾‾\__/‾‾\__/‾‾\__
 *   b:     __/‾‾\__/‾‾\__/‾‾\__
 *   y:     __/‾‾\__/‾‾\__/‾‾\__  (y = a & b, updates immediately)
 */

// ============================================================================
// TIMESCALE DIRECTIVE
// ============================================================================
// Timescale directive: specifies time unit and precision for simulation
// Format: `timescale <time_unit>/<time_precision>
//   - time_unit: Base unit for delays (1ns = 1 nanosecond)
//   - time_precision: Smallest time step simulator can resolve (1ps = 1 picosecond)
// 
// IMPORTANT: This affects all #delay values in the design
// Example: #5 means 5ns, #0.001 means 1ps (smallest step)
// 
// Best Practice: Use consistent timescale across entire design hierarchy
`timescale 1ns/1ps

// ============================================================================
// MODULE DECLARATION
// ============================================================================
// Module declaration: defines the interface and behavior of the AND gate
// 'and_gate' is the module name
// 
// NAMING CONVENTIONS:
//   - Module names: lowercase with underscores (and_gate, or_gate)
//   - Port names: Single letters for simple gates (a, b, y)
//   - For complex modules: Use descriptive names (data_in, data_out)
module and_gate (
    // ========================================================================
    // PORT DECLARATIONS
    // ========================================================================
    // Port declarations: define the module's input/output interface
    // 
    // NET TYPES:
    //   - 'wire': Net type for combinational connections (default for inputs)
    //   - 'reg': Variable type for procedural assignments (can be used for outputs)
    // 
    // INPUT PORTS:
    //   - 'input wire' declares an input port that can be driven from outside
    //   - 'wire' indicates it's a net type (can be driven by multiple sources)
    //   - Inputs are always nets (wire type) - they cannot be assigned inside module
    input  wire a,  // First input signal (1-bit)
                   // Logic level: 0 (low) or 1 (high)
                   // Driven by: External testbench or other modules
    
    input  wire b,  // Second input signal (1-bit)
                   // Logic level: 0 (low) or 1 (high)
                   // Driven by: External testbench or other modules
    
    // OUTPUT PORT:
    //   - 'output reg' declares an output port that must be assigned procedurally
    //   - 'reg' indicates it's a variable type (holds value until next assignment)
    //   - NOTE: In combinational logic, 'reg' doesn't create a register!
    //   - The 'reg' keyword is required because assignment is in an always block
    //   - Alternative: Could use 'output wire' with continuous assignment (assign y = a & b;)
    output reg  y   // Output signal (1-bit), result of AND operation
                    // Logic level: 0 (low) or 1 (high)
                    // Updates: Immediately when inputs change (combinational)
                    // Range: 0 or 1 (boolean result)
);

    // ============================================================================
    // COMBINATIONAL LOGIC BLOCK
    // ============================================================================
    // Combinational logic block: executes whenever any input changes
    // 
    // SENSITIVITY LIST: '@(*)'
    //   - '@(*)' is SystemVerilog's wildcard sensitivity list
    //   - Automatically includes ALL signals read in the block
    //   - Equivalent to: @(a or b) in Verilog-2001
    //   - Best Practice: Always use @(*) for combinational logic (prevents bugs)
    // 
    // COMBINATIONAL vs SEQUENTIAL:
    //   - Combinational: Output depends only on current inputs (no memory)
    //   - Sequential: Output depends on current inputs AND previous state (memory)
    //   - This is combinational: output y depends only on current a and b
    // 
    // This creates combinational logic (no clock dependency)
    // Best Practice: Use always @(*) for all combinational logic
    always @(*) begin
        // ========================================================================
        // BITWISE AND OPERATION
        // ========================================================================
        // Continuous assignment: performs bitwise AND operation
        // 
        // ASSIGNMENT TYPE: Blocking assignment (=)
        //   - Blocking: Assignment completes before next statement executes
        //   - Used for: Combinational logic (immediate update)
        //   - NOT used for: Sequential logic (use non-blocking <=)
        // 
        // OPERATOR: '&' (bitwise AND)
        //   - Bitwise: Operates on each bit independently
        //   - For 1-bit: Same as logical AND
        //   - For multi-bit: Performs AND on each bit position
        // 
        // LOGIC FUNCTION:
        //   - y = a & b
        //   - y = 1 only when BOTH a=1 AND b=1
        //   - y = 0 for all other combinations
        // 
        // TRUTH TABLE IMPLEMENTATION:
        //   a=0, b=0 -> y = 0 & 0 = 0
        //   a=0, b=1 -> y = 0 & 1 = 0
        //   a=1, b=0 -> y = 1 & 0 = 0
        //   a=1, b=1 -> y = 1 & 1 = 1
        // 
        // The output updates immediately when inputs change
        // No delay: Pure combinational logic (no propagation delay modeled)
        y = a & b;  // y = 1 only when both a AND b are 1
                    // Blocking assignment for combinational logic
                    // Updates immediately when a or b changes
    end  // End of always block

// ============================================================================
// END OF MODULE
// ============================================================================
// End of module definition
// 
// SYNTHESIS NOTES:
//   - This module synthesizes to: Single 2-input AND gate
//   - Hardware: One AND gate primitive
//   - No clock: Pure combinational logic
//   - No reset: No state to reset
//   - Timing: Output available immediately (combinational path)
// 
// VERIFICATION CHECKLIST:
//   - [ ] Test all 4 input combinations (00, 01, 10, 11)
//   - [ ] Verify output updates immediately when inputs change
//   - [ ] Verify no glitches on output
//   - [ ] Verify correct AND logic function
//   - [ ] Test with various input timing (setup/hold not applicable for combinational)
// 
// ALTERNATIVE IMPLEMENTATIONS:
//   - Continuous assignment: assign y = a & b; (outside always block)
//   - Both styles are equivalent for combinational logic
//   - This style (always @(*)) is preferred for complex combinational logic
endmodule
