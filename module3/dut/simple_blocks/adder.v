/**
 * Module 3: Simple Adder
 * 
 * A basic 8-bit adder for UVM testing.
 * This module implements a synchronous 8-bit adder with carry output.
 * 
 * DESIGN PATTERNS DEMONSTRATED:
 *   - Synchronous arithmetic operation
 *   - Concatenation for multi-bit result
 *   - Carry generation and propagation
 *   - Registered output for timing closure
 * 
 * VERIFICATION CONSIDERATIONS:
 *   - All input combinations (256 x 256 = 65,536 cases)
 *   - Overflow detection (carry output)
 *   - Reset behavior
 *   - Timing: Setup/hold for inputs
 *   - Edge cases: 0+0, max+max, overflow conditions
 * 
 * HARDWARE IMPLEMENTATION:
 *   - Synthesizes to: 8-bit adder + 1 carry flip-flop
 *   - Adder: Combinational logic (ripple-carry or carry-lookahead)
 *   - Output: Registered (pipelined for timing)
 *   - Area: ~100-200 LUTs (depends on adder implementation)
 * 
 * ARITHMETIC OPERATION:
 *   - Addition: sum = a + b (8-bit result)
 *   - Carry: carry = (a + b) > 255
 *   - Overflow: When result exceeds 8-bit range
 *   - Result: {carry, sum} = a + b (9-bit total)
 * 
 * Ports:
 *   clk:    Clock signal (positive edge triggered)
 *   rst_n:  Active-low reset (asynchronous reset, synchronous release)
 *   a:      Operand A (8-bit, range: 0-255)
 *   b:      Operand B (8-bit, range: 0-255)
 *   sum:    Sum output (8-bit, range: 0-255)
 *   carry:  Carry output (1-bit, 1 when sum > 255)
 * 
 * TIMING DIAGRAM:
 *   Clock:     _/‾\_/‾\_/‾\_/‾\_/‾\_
 *   rst_n:     ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   a:         __A__B__C__D__
 *   b:         __E__F__G__H__
 *   sum:       00 A+E B+F C+G D+H
 *   carry:     00  0   0   1   0
 * 
 * EXAMPLES:
 *   a=0x10, b=0x20 -> sum=0x30, carry=0 (16+32=48, no overflow)
 *   a=0xFF, b=0x01 -> sum=0x00, carry=1 (255+1=256, overflow!)
 *   a=0x80, b=0x80 -> sum=0x00, carry=1 (128+128=256, overflow!)
 */

`timescale 1ns/1ps

// ============================================================================
// MODULE DECLARATION
// ============================================================================
module adder (
    // ========================================================================
    // PORT DECLARATIONS
    // ========================================================================
    input  wire       clk,    // Clock signal (1-bit), positive edge triggered
                              // All operations synchronized to clock edge
    
    input  wire       rst_n,  // Active-low reset (1-bit)
                              // Asynchronous reset: Immediate when low
                              // Synchronous release: Deasserted on clock edge
    
    input  wire [7:0] a,      // Operand A (8-bit)
                              // First addend, range: 0x00 to 0xFF (0-255)
                              // Must be stable before clock edge (setup time)
    
    input  wire [7:0] b,      // Operand B (8-bit)
                              // Second addend, range: 0x00 to 0xFF (0-255)
                              // Must be stable before clock edge (setup time)
    
    output reg  [7:0] sum,    // Sum output (8-bit)
                              // Result of addition: sum = (a + b) mod 256
                              // Range: 0x00 to 0xFF (0-255)
                              // Updates on clock edge
    
    output reg        carry   // Carry output (1-bit)
                              // Overflow indicator: 1 when (a + b) > 255
                              // 0 = no overflow, 1 = overflow occurred
                              // Updates on clock edge
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
            // Asynchronous reset: Clear all outputs
            // '8'h00' is 8-bit hexadecimal literal (all bits = 0)
            sum <= 8'h00;     // Reset sum to 0
            // '1'b0' is 1-bit binary literal (value 0)
            carry <= 1'b0;     // Reset carry to 0
        end 
        // ========================================================================
        // ADDITION OPERATION (WHEN RESET IS NOT ACTIVE)
        // ========================================================================
        else begin
            // Addition operation with carry generation
            // 
            // CONCATENATION OPERATION: {carry, sum}
            //   - Concatenates carry (1 bit) and sum (8 bits) into 9-bit result
            //   - Result: 9-bit value representing a + b
            //   - Bit 8: carry (MSB)
            //   - Bits 7-0: sum (LSBs)
            // 
            // ARITHMETIC OPERATION: a + b
            //   - Performs 8-bit addition: a[7:0] + b[7:0]
            //   - Result is 9 bits: {carry, sum[7:0]}
            //   - Hardware: 8-bit adder with carry-out
            // 
            // ADDITION EXAMPLES:
            //   a=0x10 (16), b=0x20 (32) -> result=0x030 (48)
            //     carry=0, sum=0x30 (no overflow)
            //   a=0xFF (255), b=0x01 (1) -> result=0x100 (256)
            //     carry=1, sum=0x00 (overflow: 255+1=256 > 255)
            //   a=0x80 (128), b=0x80 (128) -> result=0x100 (256)
            //     carry=1, sum=0x00 (overflow: 128+128=256 > 255)
            //   a=0x7F (127), b=0x7F (127) -> result=0x0FE (254)
            //     carry=0, sum=0xFE (no overflow: 127+127=254 <= 255)
            // 
            // OVERFLOW DETECTION:
            //   - When a + b > 255, result exceeds 8-bit range
            //   - Carry bit indicates overflow (carry = 1)
            //   - Sum contains lower 8 bits of result (sum = (a + b) mod 256)
            // 
            // HARDWARE IMPLEMENTATION:
            //   - Adder: Ripple-carry adder (simple, slower) or
            //            Carry-lookahead adder (complex, faster)
            //   - Critical path: Through all 8 bit positions
            //   - Timing: Adder delay + register setup time
            // 
            // NON-BLOCKING ASSIGNMENT:
            //   - '<=' ensures both sum and carry update simultaneously
            //   - Prevents race conditions in simulation
            //   - Models actual hardware register behavior
            {carry, sum} <= a + b;  // 9-bit addition: {carry, sum} = a + b
                                    // carry = bit 8 of (a + b)
                                    // sum = bits 7-0 of (a + b)
        end
    end

// ============================================================================
// END OF MODULE
// ============================================================================
// 
// SYNTHESIS NOTES:
//   - This module synthesizes to: 8-bit adder + 9 flip-flops
//   - Adder: Combinational logic (ripple-carry or carry-lookahead)
//     * Ripple-carry: Simpler, slower (8 full-adders in series)
//     * Carry-lookahead: More complex, faster (parallel carry generation)
//   - Output registers: 9 flip-flops (8 for sum, 1 for carry)
//   - Clock domain: Single clock domain (clk)
//   - Reset domain: Asynchronous reset (rst_n)
// 
// AREA ESTIMATE (typical FPGA):
//   - Adder logic: ~80-150 LUTs (depends on implementation)
//   - Output registers: 9 flip-flops
//   - Total: ~9 flip-flops + ~100 LUTs
// 
// TIMING ANALYSIS:
//   - Critical path: a/b -> adder -> sum/carry registers
//   - Setup time: a and b must be stable before clock edge
//     * Typical: 1-2ns for modern FPGAs
//   - Hold time: a and b must remain stable after clock edge
//     * Typical: 0.5-1ns for modern FPGAs
//   - Clock-to-output: sum and carry available after clock edge
//     * Typical: 1-3ns for modern FPGAs
//   - Adder delay: Depends on implementation
//     * Ripple-carry: ~8 * full-adder delay (~8-16ns)
//     * Carry-lookahead: ~2-4 * full-adder delay (~4-8ns)
// 
// VERIFICATION CHECKLIST:
//   - [ ] Reset initializes sum=0, carry=0
//   - [ ] Addition: 0 + 0 = 0 (sum=0, carry=0)
//   - [ ] Addition: 1 + 1 = 2 (sum=2, carry=0)
//   - [ ] Addition: 255 + 1 = 0 with carry (sum=0, carry=1)
//   - [ ] Addition: 128 + 128 = 0 with carry (sum=0, carry=1)
//   - [ ] Addition: 127 + 127 = 254 (sum=254, carry=0)
//   - [ ] All 256 x 256 input combinations (exhaustive test)
//   - [ ] Edge cases: Max values, zero values, overflow conditions
//   - [ ] Timing: Setup/hold time requirements met
//   - [ ] No glitches on output
// 
// DEBUGGING TIPS:
//   1. Monitor a, b, sum, carry in waveforms
//   2. Verify sum = (a + b) mod 256
//   3. Verify carry = 1 when (a + b) > 255
//   4. Check for timing violations (sum may be X if setup/hold violated)
//   5. Verify reset behavior (sum=0, carry=0)
//   6. Test overflow cases: 0xFF+0x01, 0x80+0x80
// 
// COMMON BUGS TO WATCH FOR:
//   1. Wrong bit width in concatenation
//   2. Missing carry bit in result
//   3. Incorrect overflow detection
//   4. Timing violations on inputs
//   5. Reset not clearing all outputs
//   6. Race conditions in addition
// 
// PERFORMANCE OPTIMIZATIONS:
//   - Use carry-lookahead adder for higher frequency
//   - Pipeline adder for very high frequency (add extra register stage)
//   - Use DSP blocks if available (FPGA-specific)
//   - Add input registers for better timing
// 
// REAL-WORLD APPLICATIONS:
//   - ALU (Arithmetic Logic Unit) operations
//   - Address calculation
//   - Accumulator circuits
//   - Counter increments
//   - Checksum calculation
// 
// EXTENSIONS FOR PRODUCTION USE:
//   - Parameterize bit width
//   - Add subtract operation (a - b)
//   - Add overflow/underflow flags
//   - Support signed arithmetic
//   - Add saturation (clamp result to max/min)
//   - Support multiple addends (a + b + c)
endmodule
