/**
 * Module 2: Simple Register
 * 
 * A basic register with clock, reset, and enable.
 * This module implements a synchronous register that stores data on clock edges.
 * 
 * DESIGN PATTERNS DEMONSTRATED:
 *   - Synchronous register with enable
 *   - Clock-gated data storage
 *   - Asynchronous reset, synchronous release
 *   - Non-blocking assignments for sequential logic
 * 
 * VERIFICATION CONSIDERATIONS:
 *   - Reset assertion/deassertion timing
 *   - Enable signal behavior at clock edges
 *   - Data hold when enable is low
 *   - Setup/hold time requirements for data input
 * 
 * HARDWARE IMPLEMENTATION:
 *   - Synthesizes to: 8 flip-flops with enable and reset
 *   - Clock domain: Single clock domain (clk)
 *   - Reset domain: Asynchronous reset (rst_n)
 *   - Enable: Clock gating or mux-based enable
 * 
 * REGISTER OPERATION:
 *   - When reset (rst_n=0): Output q = 0x00 (asynchronous)
 *   - When enable=1: Output q = input d (on clock edge)
 *   - When enable=0: Output q holds previous value (no change)
 * 
 * Ports:
 *   clk:    Clock signal (positive edge triggered)
 *   rst_n:  Active-low reset (asynchronous reset, synchronous release)
 *   enable: Register enable (when high, register updates; when low, holds value)
 *   d:      Data input (8-bit, sampled on clock edge when enable=1)
 *   q:      Data output (8-bit, registered output)
 * 
 * TIMING DIAGRAM:
 *   Clock:     _/‾\_/‾\_/‾\_/‾\_/‾\_
 *   rst_n:     ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   enable:    __/‾‾‾‾‾‾\__/‾‾\__
 *   d:         __A__B__C__D__E__
 *   q:         00 00 A  A  C  C  (holds when enable=0)
 */

`timescale 1ns/1ps

// ============================================================================
// MODULE DECLARATION
// ============================================================================
module simple_register (
    // ========================================================================
    // PORT DECLARATIONS
    // ========================================================================
    input  wire       clk,    // Clock signal (1-bit), positive edge triggered
                              // All register operations synchronized to clock
    
    input  wire       rst_n,  // Active-low reset (1-bit)
                              // Asynchronous reset: Immediate when low
                              // Synchronous release: Deasserted on clock edge
    
    input  wire       enable, // Register enable (1-bit)
                              // 1 = Update register with input d
                              // 0 = Hold current value (no update)
    
    input  wire [7:0] d,      // Data input (8-bit)
                              // New data to be stored in register
                              // Sampled on clock edge when enable=1
                              // Must be stable before clock edge (setup time)
    
    output reg  [7:0] q       // Data output (8-bit)
                              // Registered output (stored value)
                              // Updates on clock edge when enable=1
                              // Holds value when enable=0
);

    // ============================================================================
    // SEQUENTIAL LOGIC BLOCK
    // ============================================================================
    // Sequential logic: executes on clock edge or reset edge
    // '@(posedge clk or negedge rst_n)' sensitivity list:
    //   - 'posedge clk': Synchronous operations on clock edge
    //   - 'negedge rst_n': Asynchronous reset on reset edge
    always @(posedge clk or negedge rst_n) begin
        // ========================================================================
        // RESET CONDITION (HIGHEST PRIORITY)
        // ========================================================================
        if (!rst_n) begin
            // Asynchronous reset: Set output to zero
            // '8'h00' is 8-bit hexadecimal literal (0x00 = 0 in decimal)
            // Reset value: All bits set to 0
            q <= 8'h00;  // Reset register to 0 when reset is active
        end 
        // ========================================================================
        // NORMAL OPERATION (WHEN RESET IS NOT ACTIVE)
        // ========================================================================
        // Enable condition: Update register when enabled
        else if (enable) begin
            // Register update: Store input data in output register
            // 'd' is the input data, 'q' is the output register
            // Update occurs on positive clock edge when enable=1
            q <= d;  // Update register with input data when enabled
        end
        // ========================================================================
        // IMPLICIT HOLD BEHAVIOR
        // ========================================================================
        // If enable=0 and reset=1: No assignment to q
        // Register automatically holds its previous value
        // This is implicit in sequential logic (no explicit assignment needed)
    end

// ============================================================================
// END OF MODULE
// ============================================================================
// 
// SYNTHESIS NOTES:
//   - This module synthesizes to: 8 flip-flops with enable and reset
//   - Hardware: 8 D-type flip-flops with enable logic
//     * Each flip-flop: D input, Q output, enable, reset
//     * Enable logic: Mux selects between d[i] and q[i]
//   - Clock domain: Single clock domain (clk)
//     * All 8 flip-flops share same clock
//   - Reset domain: Asynchronous reset (rst_n)
//     * Reset affects all flip-flops simultaneously
//   - Enable implementation: Mux-based (enable selects d or q) or clock gating
//     * Mux-based: enable=1 -> q=d, enable=0 -> q=q (hold)
//     * Clock gating: enable gates clock signal (power saving)
//     * Tool chooses based on synthesis settings
// 
// AREA ESTIMATE (typical FPGA):
//   - Flip-flops: 8 D-type flip-flops
//   - Enable logic: 8 2:1 multiplexers (~16 LUTs)
//   - Reset logic: 8 AND gates (shared reset signal)
//   - Total: 8 flip-flops + ~16 LUTs
// 
// TIMING ANALYSIS:
//   - Critical path: d -> mux -> flip-flop D input
//   - Setup time: d and enable must be stable before clock edge
//     * Typical: 1-2ns for modern FPGAs
//   - Hold time: d and enable must remain stable after clock edge
//     * Typical: 0.5-1ns for modern FPGAs
//   - Clock-to-output: q available after clock edge
//     * Typical: 1-3ns for modern FPGAs
//   - Enable timing: enable must be stable before clock edge
//     * Enable is part of data path, affects setup time
// 
// VERIFICATION CHECKLIST:
//   - [ ] Reset assertion (rst_n=0) resets q to 0x00
//     * All 8 bits reset to 0, regardless of previous value
//   - [ ] Reset deassertion (rst_n=1) allows normal operation
//     * Reset release synchronized to clock edge
//   - [ ] Enable=1 causes q to update with d on clock edge
//     * q takes value of d when enable=1
//   - [ ] Enable=0 causes q to hold its value
//     * q remains unchanged when enable=0
//   - [ ] Setup time: d must be stable before clock edge
//     * Violation causes metastability or incorrect data
//   - [ ] Hold time: d must remain stable after clock edge
//     * Violation causes incorrect data capture
//   - [ ] No glitches on output q
//     * Output should be stable between clock edges
//   - [ ] Edge cases: enable toggles, d changes during enable
//   - [ ] Stress test: Rapid enable toggling, data changes
// 
// DEBUGGING TIPS:
//   1. Monitor d, enable, q in waveforms
//   2. Check q updates only when enable=1 on clock edge
//   3. Verify q holds value when enable=0
//   4. Watch for setup/hold violations (q may be X or incorrect)
//   5. Check reset behavior (q=0x00 when rst_n=0)
//   6. Verify timing: d stable before/after clock edge
// 
// COMMON BUGS TO WATCH FOR:
//   1. Enable not checked before assignment
//   2. Reset not highest priority
//   3. Setup/hold time violations
//   4. Glitches on enable signal
//   5. Incorrect reset value
//   6. Race conditions between enable and data
// 
// PERFORMANCE OPTIMIZATIONS:
//   - Use clock gating for power savings (enable gates clock)
//   - Pipeline enable signal if timing critical
//   - Use synchronous reset if area constrained
//   - Add output enable for tri-state capability
// 
// REAL-WORLD APPLICATIONS:
//   - Data pipeline stages
//   - Configuration registers
//   - Status registers
//   - Buffer registers
//   - Delay lines
// 
// EXTENSIONS FOR PRODUCTION USE:
//   - Parameterize data width
//   - Add byte enables (write only specific bytes)
//   - Add read enable (separate from write enable)
//   - Add output enable (tri-state output)
//   - Support different reset values
//   - Add parity/ECC for error detection
endmodule
