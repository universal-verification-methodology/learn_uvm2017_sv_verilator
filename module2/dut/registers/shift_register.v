/**
 * Module 2: Shift Register
 * 
 * A simple 8-bit shift register with serial input/output and parallel output.
 * This module implements a serial-in, serial-out (SISO) and serial-in, parallel-out (SIPO) register.
 * 
 * DESIGN PATTERNS DEMONSTRATED:
 *   - Serial-to-parallel conversion
 *   - Bit shifting operations
 *   - Concatenation for shift operations
 *   - Synchronous shift register implementation
 * 
 * VERIFICATION CONSIDERATIONS:
 *   - Serial data shifting sequence
 *   - Parallel output correctness
 *   - Serial output (MSB) behavior
 *   - Shift enable timing
 *   - Reset initialization
 * 
 * HARDWARE IMPLEMENTATION:
 *   - Synthesizes to: 8 flip-flops in cascade (chain)
 *   - Each flip-flop stores one bit
 *   - Data flows: data_in -> q[0] -> q[1] -> ... -> q[7] -> data_out
 *   - Parallel output: All 8 bits available simultaneously
 * 
 * SHIFT REGISTER OPERATION:
 *   - Serial Input: data_in enters at bit 0 (LSB)
 *   - Shift Direction: Left shift (MSB direction)
 *   - Data Flow: q[0] <- data_in, q[1] <- q[0], ..., q[7] <- q[6]
 *   - Serial Output: data_out = q[7] (MSB, oldest bit)
 *   - Parallel Output: q[7:0] (all 8 bits)
 * 
 * SHIFT MECHANISM:
 *   - Concatenation: {q[6:0], data_in} creates new 8-bit value
 *   - q[6:0]: Bits 6 down to 0 (7 bits, shifted left)
 *   - data_in: New bit enters at position 0
 *   - Result: Old MSB (q[7]) is lost, new LSB (data_in) enters
 * 
 * Ports:
 *   clk:      Clock signal (positive edge triggered)
 *   rst_n:    Active-low reset (asynchronous reset, synchronous release)
 *   shift:    Shift enable (when high, register shifts on clock edge)
 *   data_in:  Serial data input (1-bit, enters at LSB position)
 *   data_out: Serial data output (1-bit, MSB exits here)
 *   q:        Parallel output (8-bit, all bits available simultaneously)
 * 
 * TIMING DIAGRAM (shifting in 0xA5 = 10100101):
 *   Clock:     _/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_
 *   shift:     __/‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   data_in:   __1__0__1__0__0__1__0__1__
 *   q[7:0]:    00 01 10 101 0101 00101 100101 0100101 10100101
 *   data_out:  __0__0__0__1__0__1__0__1__
 */

`timescale 1ns/1ps

// ============================================================================
// MODULE DECLARATION
// ============================================================================
module shift_register (
    // ========================================================================
    // PORT DECLARATIONS
    // ========================================================================
    input  wire       clk,      // Clock signal (1-bit), positive edge triggered
                                // All shift operations synchronized to clock
    
    input  wire       rst_n,    // Active-low reset (1-bit)
                                // Asynchronous reset: Immediate when low
                                // Synchronous release: Deasserted on clock edge
    
    input  wire       shift,    // Shift enable (1-bit)
                                // 1 = Shift register on clock edge
                                // 0 = Hold current value (no shift)
    
    input  wire       data_in,  // Serial data input (1-bit)
                                // New bit to be shifted into register
                                // Enters at LSB position (q[0])
                                // Sampled on clock edge when shift=1
    
    output reg        data_out, // Serial data output (1-bit)
                                // MSB exits here (q[7])
                                // Oldest bit in register
    
    output reg  [7:0] q         // Parallel output (8-bit)
                                // All 8 bits available simultaneously
                                // q[7] = MSB (oldest), q[0] = LSB (newest)
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
            // Asynchronous reset: Clear all bits
            // '8'h00' is 8-bit hexadecimal literal (all bits = 0)
            q <= 8'h00;        // Reset all 8 bits to 0
            // '1'b0' is 1-bit binary literal (value 0)
            data_out <= 1'b0;   // Reset serial output to 0
        end 
        // ========================================================================
        // SHIFT OPERATION (WHEN RESET IS NOT ACTIVE)
        // ========================================================================
        else if (shift) begin
            // Shift operation: Left shift with new bit entering at LSB
            // 
            // CONCATENATION OPERATION: {q[6:0], data_in}
            //   - q[6:0]: Bits 6 down to 0 (7 bits, shifted left by 1)
            //   - data_in: New bit enters at position 0 (LSB)
            //   - Result: 8-bit value with new bit at LSB, old bits shifted left
            // 
            // SHIFT MECHANISM:
            //   - Old: q[7] q[6] q[5] q[4] q[3] q[2] q[1] q[0]
            //   - New: q[6] q[5] q[4] q[3] q[2] q[1] q[0] data_in
            //   - q[7] (old MSB) is lost/shifted out
            // 
            // EXAMPLE: Shifting in bit sequence 1, 0, 1
            //   Initial: q = 00000000
            //   Shift 1: q = 00000001 (data_in=1 enters at q[0])
            //   Shift 0: q = 00000010 (old q[0]=1 moves to q[1], data_in=0 enters)
            //   Shift 1: q = 00000101 (bits shift left, data_in=1 enters)
            q <= {q[6:0], data_in};  // Left shift: new bit enters at LSB
            
            // Serial output: MSB exits (oldest bit in register)
            // 'q[7]' is the most significant bit (oldest bit)
            // This bit is being shifted out (will be lost on next shift)
            data_out <= q[7];   // Output MSB (bit being shifted out)
        end
        // ========================================================================
        // IMPLICIT HOLD BEHAVIOR
        // ========================================================================
        // If shift=0 and reset=1: No assignment to q or data_out
        // Register automatically holds its previous value
        // This is implicit in sequential logic
    end

// ============================================================================
// END OF MODULE
// ============================================================================
// 
// SYNTHESIS NOTES:
//   - This module synthesizes to: 8 flip-flops in cascade (chain)
//   - Hardware: 8 D-type flip-flops connected in series
//     * Each flip-flop: D input from previous stage, Q output to next stage
//     * FF0: D=data_in, Q=q[0]
//     * FF1: D=q[0], Q=q[1]
//     * ...
//     * FF7: D=q[6], Q=q[7]
//   - Data path: data_in -> FF0 -> FF1 -> ... -> FF7 -> data_out
//     * Serial input: data_in enters at FF0
//     * Serial output: data_out = q[7] (MSB exits)
//     * Parallel output: q[7:0] (all bits available)
//   - Clock domain: Single clock domain (clk)
//     * All flip-flops share same clock
//   - Reset domain: Asynchronous reset (rst_n)
//     * Reset clears all flip-flops simultaneously
//   - Parallel output: All flip-flop outputs available simultaneously
//     * q[7:0] provides all 8 bits in parallel
// 
// AREA ESTIMATE (typical FPGA):
//   - Flip-flops: 8 D-type flip-flops
//   - Shift logic: 8 2:1 multiplexers (shift vs hold) (~16 LUTs)
//   - Reset logic: 8 AND gates (shared reset)
//   - Total: 8 flip-flops + ~16 LUTs
// 
// TIMING ANALYSIS:
//   - Critical path: data_in -> FF0 -> FF1 -> ... -> FF7 -> data_out
//     * Long combinational path through all flip-flops
//     * Each stage adds flip-flop delay
//   - Setup time: data_in and shift must be stable before clock edge
//   - Hold time: data_in and shift must remain stable after clock edge
//   - Clock-to-output: q and data_out available after clock edge
//   - Shift delay: Data takes 8 clock cycles to propagate through
// 
// VERIFICATION CHECKLIST:
//   - [ ] Reset initializes all bits to 0
//     * q[7:0] = 0x00, data_out = 0
//   - [ ] Shift operation shifts bits left correctly
//     * Bits move: q[7] <- q[6] <- ... <- q[0] <- data_in
//   - [ ] New bit enters at LSB (q[0])
//     * data_in becomes q[0] on shift
//   - [ ] MSB (q[7]) exits at data_out
//     * data_out = q[7] (oldest bit)
//   - [ ] Parallel output (q) matches serial sequence
//     * q contains last 8 bits shifted in
//   - [ ] Hold behavior when shift=0
//     * All bits hold their values when shift=0
//   - [ ] Complete 8-bit sequence can be shifted in/out
//     * 8 bits in -> 8 bits out (serial-to-serial)
//   - [ ] Edge cases: Shift when empty, shift when full
//   - [ ] Stress test: Rapid shifting, long sequences
// 
// DEBUGGING TIPS:
//   1. Monitor data_in, shift, q[7:0], data_out in waveforms
//   2. Track bit propagation: data_in -> q[0] -> q[1] -> ... -> q[7] -> data_out
//   3. Verify shift timing: Bits move on clock edge when shift=1
//   4. Check hold behavior: Bits unchanged when shift=0
//   5. Verify serial sequence: First bit in = last bit out (after 8 cycles)
//   6. Monitor parallel output: q should contain last 8 bits
// 
// COMMON BUGS TO WATCH FOR:
//   1. Wrong shift direction (right vs left)
//   2. Incorrect bit ordering in concatenation
//   3. Missing shift enable check
//   4. Incorrect data_out assignment (should be q[7], not q[0])
//   5. Reset not clearing all bits
//   6. Timing violations in shift path
// 
// SHIFT REGISTER OPERATION EXAMPLE:
//   Initial: q = 00000000, data_out = 0
//   Shift in 1: q = 00000001, data_out = 0 (q[7]=0)
//   Shift in 0: q = 00000010, data_out = 0
//   Shift in 1: q = 00000101, data_out = 0
//   Shift in 0: q = 00001010, data_out = 0
//   Shift in 1: q = 00010101, data_out = 0
//   Shift in 0: q = 00101010, data_out = 0
//   Shift in 1: q = 01010101, data_out = 0
//   Shift in 0: q = 10101010, data_out = 0
//   Shift in 1: q = 01010101, data_out = 1 (first bit exits!)
// 
// USE CASES:
//   - Serial-to-parallel conversion
//     * Convert serial data stream to parallel word
//     * Example: UART receiver, SPI interface
//   - Parallel-to-serial conversion (with different logic)
//     * Convert parallel word to serial stream
//     * Example: UART transmitter, SPI interface
//   - Delay line (8 clock cycles of delay)
//     * Delay signal by fixed number of cycles
//     * Example: Pipeline stages, synchronization
//   - Pattern matching (compare q with pattern)
//     * Detect specific bit patterns in data stream
//     * Example: Protocol detection, error detection
//   - Data scrambling/descrambling
//     * Shift register used in scrambler circuits
//   - CRC calculation
//     * Linear feedback shift register (LFSR) for CRC
// 
// PERFORMANCE OPTIMIZATIONS:
//   - Pipeline shift operations for higher frequency
//   - Use block RAM for very long shift registers
//   - Add parallel load capability for faster initialization
//   - Use Gray code for reduced power consumption
// 
// EXTENSIONS FOR PRODUCTION USE:
//   - Parameterize register width
//   - Add parallel load (load all bits at once)
//   - Add shift direction control (left/right)
//   - Add circular shift mode
//   - Add enable for each stage (selective shifting)
//   - Support different reset values
endmodule
