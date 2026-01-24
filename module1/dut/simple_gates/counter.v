/**
 * Module 1: 8-bit Up Counter
 * 
 * An 8-bit up counter with active-low reset and enable.
 * This module implements a synchronous counter that increments on each
 * clock edge when enabled, and resets to zero when reset is asserted.
 * 
 * DESIGN PATTERNS DEMONSTRATED:
 *   - Synchronous sequential logic with asynchronous reset
 *   - Clock-gated enable functionality
 *   - Non-blocking assignments for sequential logic
 *   - Proper reset priority handling
 * 
 * VERIFICATION CONSIDERATIONS:
 *   - Reset assertion/deassertion timing
 *   - Enable signal behavior at clock edges
 *   - Counter wrap-around behavior (255 -> 0)
 *   - Metastability concerns with async reset
 * 
 * Ports:
 *   clk:    Clock signal (positive edge triggered)
 *   rst_n:  Active-low reset (asynchronous reset, active when low)
 *   enable: Counter enable (when high, counter increments)
 *   count:  8-bit counter output (range: 0 to 255)
 * 
 * Behavior:
 *   - When rst_n is low (0): count is reset to 0x00 (asynchronous)
 *   - When rst_n is high (1) and enable is high: count increments by 1
 *   - When rst_n is high (1) and enable is low: count holds its value
 *   - Counter wraps around: 255 + 1 = 0
 * 
 * TIMING DIAGRAM:
 *   Clock:     _/‾\_/‾\_/‾\_/‾\_/‾\_
 *   rst_n:     ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   enable:    __/‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   count:     00 00 01 02 03 03 03  (holds when enable=0)
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
// Module declaration: defines the interface and behavior of the counter
// 'counter' is the module name
// 
// NAMING CONVENTIONS:
//   - Module names: lowercase with underscores (counter, apb_slave)
//   - Port names: lowercase with underscores (clk, rst_n, enable)
//   - 'n' suffix: indicates active-low signal (rst_n = reset not)
module counter (
    // ========================================================================
    // PORT DECLARATIONS
    // ========================================================================
    // Port declarations: define the module's input/output interface
    // Format: <direction> <net_type> <bit_width> <port_name>
    // 
    // NET TYPES:
    //   - 'wire': Net type for combinational connections (default for inputs)
    //   - 'reg': Variable type for procedural assignments (required for outputs in always blocks)
    // 
    // Clock input: used to synchronize counter operations
    // Best Practice: Clock should be declared as 'wire' (driven externally)
    // Clock domain: All logic in this module belongs to the 'clk' clock domain
    input  wire       clk,    // Clock signal (1-bit), positive edge triggered
                              // Clock frequency: Determined by testbench (typically 100MHz = 10ns period)
    
    // Reset input: active-low asynchronous reset
    // RESET STRATEGY: Asynchronous reset, synchronous release
    //   - Async reset: Resets immediately when rst_n=0 (not clocked)
    //   - Sync release: Reset deassertion synchronized to clock edge (prevents metastability)
    // When rst_n = 0, counter resets immediately (asynchronous)
    // When rst_n = 1, counter operates normally
    // 
    // Best Practice: Use active-low reset for better noise immunity
    // 'n' suffix convention: indicates negative logic (active when low)
    input  wire       rst_n,  // Active-low reset (1-bit), 'n' suffix indicates negative logic
                              // Reset assertion: Asynchronous (immediate)
                              // Reset deassertion: Synchronous (on next clock edge)
    
    // Enable input: controls whether counter increments
    // ENABLE BEHAVIOR:
    //   - enable=1: Counter increments on each clock edge
    //   - enable=0: Counter holds current value (clock gating effect)
    // 
    // Best Practice: Enable should be stable before clock edge (setup time requirement)
    // When enable = 1, counter increments on clock edge
    // When enable = 0, counter holds current value
    input  wire       enable, // Counter enable signal (1-bit)
                              // Setup time: enable must be stable before clock edge
                              // Hold time: enable must remain stable after clock edge
    
    // Counter output: 8-bit value that increments from 0 to 255
    // OUTPUT TYPE: 'reg' is required because it's assigned procedurally in always block
    // 'reg [7:0]' declares an 8-bit register (bits 7 down to 0)
    //   - Bit 7: Most Significant Bit (MSB)
    //   - Bit 0: Least Significant Bit (LSB)
    //   - Range: 0x00 (0) to 0xFF (255)
    // 
    // IMPORTANT: 'reg' doesn't imply a physical register - it's a variable type
    // The actual hardware (register vs combinational) depends on the always block
    // Must be 'reg' type because it's assigned procedurally in always block
    output reg [7:0]  count   // 8-bit counter output (range: 0x00 to 0xFF)
                               // Output timing: Updates on clock edge (synchronous)
                               // Wrap-around: 0xFF + 1 = 0x00 (automatic in unsigned arithmetic)
);

    // ============================================================================
    // SEQUENTIAL LOGIC BLOCK
    // ============================================================================
    // Sequential logic block: executes on clock edge or reset edge
    // 
    // SENSITIVITY LIST: '@(posedge clk or negedge rst_n)'
    //   - 'posedge clk': triggers on rising edge of clock (0->1 transition)
    //     * Clock edge: The moment when clock transitions from 0 to 1
    //     * This creates synchronous (clocked) logic
    //   - 'negedge rst_n': triggers on falling edge of reset (1->0 transition)
    //     * Reset edge: The moment when reset transitions from 1 to 0 (active)
    //     * This creates asynchronous reset capability
    // 
    // RESET STRATEGY: Asynchronous reset, synchronous release
    //   - Reset assertion (rst_n: 1->0): Immediate, not clocked (asynchronous)
    //   - Reset deassertion (rst_n: 0->1): Synchronized to clock edge (synchronous)
    //   - This prevents metastability issues when reset is released
    // 
    // This creates synchronous logic with asynchronous reset
    // Best Practice: Always check reset first (highest priority)
    always @(posedge clk or negedge rst_n) begin
        // ========================================================================
        // RESET CONDITION (HIGHEST PRIORITY)
        // ========================================================================
        // Reset condition: check if reset is active (low)
        // '!' is the logical NOT operator
        // When rst_n is 0 (active), reset the counter
        // 
        // RESET BEHAVIOR:
        //   - Asynchronous: Takes effect immediately when rst_n goes low
        //   - Overrides: All other logic is ignored when reset is active
        //   - Priority: Reset has highest priority (checked first)
        if (!rst_n) begin
            // Asynchronous reset: set counter to zero
            // '8'h00' is an 8-bit hexadecimal literal (0x00 = 0 in decimal)
            //   - '8' = 8 bits wide
            //   - 'h' = hexadecimal base
            //   - '00' = value 0x00
            // 
            // NON-BLOCKING ASSIGNMENT: '<=' (used in sequential logic)
            //   - All non-blocking assignments in the same always block execute simultaneously
            //   - Values are evaluated at the start of the time step
            //   - Updates occur at the end of the time step
            //   - This models parallel hardware behavior correctly
            // 
            // Why non-blocking?
            //   - Prevents race conditions in simulation
            //   - Models actual hardware register behavior
            //   - Allows multiple registers to update simultaneously
            // 
            // Non-blocking ensures all assignments happen simultaneously
            count <= 8'h00;  // Reset counter to 0 when reset is active
                              // This assignment happens immediately (asynchronous reset)
        end 
        // ========================================================================
        // NORMAL OPERATION (WHEN RESET IS NOT ACTIVE)
        // ========================================================================
        // Normal operation: check if counter is enabled
        // 'else if' means this only executes when reset is not active
        // 
        // ENABLE BEHAVIOR:
        //   - enable=1: Counter increments on clock edge
        //   - enable=0: Counter holds current value (implicit latch behavior)
        else if (enable) begin
            // Increment counter: add 1 to current count value
            // 'count + 1' performs arithmetic addition
            // 
            // WRAP-AROUND BEHAVIOR:
            //   - When count reaches 255 (0xFF), next increment wraps to 0 (0x00)
            //   - This is automatic in unsigned arithmetic (no overflow error)
            //   - 0xFF + 1 = 0x100, but only 8 bits are stored, so result is 0x00
            // 
            // ARITHMETIC OPERATION:
            //   - Addition: count + 1
            //   - Result: Stored back into count register
            //   - Timing: Update occurs on next clock edge
            // 
            // '<=' is non-blocking assignment for sequential logic
            // This ensures the increment happens atomically at the clock edge
            count <= count + 1;  // Increment counter when enabled
                                  // Update occurs on positive clock edge
                                  // If enable=0, this branch doesn't execute, count holds value
        end
        // ========================================================================
        // IMPLICIT HOLD BEHAVIOR
        // ========================================================================
        // If neither reset nor enable is active, count holds its value
        // This is implicit - no assignment means value is preserved
        // 
        // LATCH BEHAVIOR:
        //   - When enable=0 and reset=1: No assignment to count
        //   - Register retains its previous value (automatic in sequential logic)
        //   - This is the desired behavior for a counter with enable
        // 
        // NOTE: In SystemVerilog, registers automatically hold their value
        //       if not explicitly assigned in an always block
    end  // End of always block

// ============================================================================
// END OF MODULE
// ============================================================================
// End of module definition
// 
// SYNTHESIS NOTES:
//   - This module synthesizes to: 8-bit register with async reset and enable
//   - Hardware: 8 flip-flops with reset and enable logic
//   - Clock domain: Single clock domain (clk)
//   - Reset domain: Asynchronous reset (rst_n)
// 
// VERIFICATION CHECKLIST:
//   - [ ] Reset assertion (rst_n=0) resets count to 0
//   - [ ] Reset deassertion (rst_n=1) allows normal operation
//   - [ ] Enable=1 causes counter to increment on clock edge
//   - [ ] Enable=0 causes counter to hold value
//   - [ ] Counter wraps from 255 to 0 correctly
//   - [ ] No glitches or metastability issues
//   - [ ] Setup/hold time requirements met for enable signal
endmodule
