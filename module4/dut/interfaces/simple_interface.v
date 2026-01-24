/**
 * Module 4: Simple Interface
 * 
 * A simple interface for UVM component testing.
 * This module implements a handshake protocol with valid/ready signals.
 * 
 * PROTOCOL:
 *   - Valid/Ready handshake protocol
 *   - Master asserts valid when data is available
 *   - Slave asserts ready when it can accept data
 *   - Transaction completes when both valid and ready are high
 *   - Simple operation: result = data + 1
 * 
 * DESIGN PATTERNS DEMONSTRATED:
 *   - Handshake protocol (valid/ready)
 *   - Synchronous operation
 *   - Registered outputs
 *   - Simple arithmetic operation
 * 
 * VERIFICATION CONSIDERATIONS:
 *   - Valid/ready handshake timing
 *   - Setup/hold time for data and address
 *   - Reset behavior
 *   - Result calculation correctness
 *   - Protocol compliance
 * 
 * HARDWARE IMPLEMENTATION:
 *   - Synthesizes to: 8-bit adder + registers
 *   - Ready signal generation
 *   - Result register
 * 
 * PROTOCOL OPERATION:
 *   - When valid=1: Slave processes data, asserts ready=1, calculates result
 *   - When valid=0: Slave deasserts ready=0
 *   - Result: result = data + 1 (registered output)
 * 
 * Ports:
 *   clk:     Clock signal (positive edge triggered)
 *   rst_n:   Active-low reset (asynchronous reset, synchronous release)
 *   valid:   Valid signal (1 = data valid, 0 = data invalid)
 *   ready:   Ready signal (1 = ready to accept, 0 = not ready)
 *   data:    Data bus (8-bit, range: 0-255)
 *   address: Address bus (16-bit, range: 0-65535)
 *   result:  Result output (8-bit, result = data + 1)
 * 
 * TIMING DIAGRAM:
 *   Clock:     _/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_
 *   rst_n:     ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   valid:     __/‾‾\__/‾‾\________
 *   ready:     00 /‾‾\__/‾‾\__00
 *   data:      __A__B________________
 *   result:    00 A+1 B+1 00 00
 * 
 * EXAMPLES:
 *   data=0x10, valid=1 -> ready=1, result=0x11 (16+1=17)
 *   data=0xFF, valid=1 -> ready=1, result=0x00 (255+1=256, wraps to 0)
 *   data=0x00, valid=0 -> ready=0, result=0x00 (no operation)
 */

`timescale 1ns/1ps

// ============================================================================
// MODULE DECLARATION
// ============================================================================
module simple_interface (
    // ========================================================================
    // PORT DECLARATIONS
    // ========================================================================
    input  wire       clk,      // Clock signal (1-bit), positive edge triggered
                              // All operations synchronized to clock edge
    
    input  wire       rst_n,    // Active-low reset (1-bit)
                              // Asynchronous reset: Immediate when low
                              // Synchronous release: Deasserted on clock edge
    
    input  wire       valid,  // Valid signal (1-bit)
                              // 1 = data and address are valid
                              // 0 = data and address are invalid
                              // Part of handshake protocol
    
    output reg        ready,   // Ready signal (1-bit)
                              // 1 = interface ready to accept data
                              // 0 = interface not ready
                              // Part of handshake protocol
    
    input  wire [7:0] data,    // Data bus (8-bit)
                              // Data to be processed
                              // Valid when valid=1
                              // Range: 0x00 to 0xFF (0-255)
    
    input  wire [15:0] address, // Address bus (16-bit)
                              // Address for operation
                              // Valid when valid=1
                              // Range: 0x0000 to 0xFFFF (0-65535)
                              // Note: Currently unused in operation
    
    output reg  [7:0] result   // Result output (8-bit)
                              // Result of operation: result = data + 1
                              // Valid when ready=1
                              // Range: 0x00 to 0xFF (0-255)
                              // Wraps: 0xFF + 1 = 0x00 (overflow)
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
            ready <= 1'b0;     // Deassert ready signal
            result <= 8'h00;   // Clear result
        end 
        // ========================================================================
        // NORMAL OPERATION (WHEN RESET IS NOT ACTIVE)
        // ========================================================================
        else begin
            // ========================================================================
            // VALID/READY HANDSHAKE PROTOCOL
            // ========================================================================
            // 
            // PROTOCOL BEHAVIOR:
            //   - When valid=1: Process data, assert ready, calculate result
            //   - When valid=0: Deassert ready, hold result
            // 
            // HANDSHAKE TIMING:
            //   - Valid and data must be stable before clock edge (setup time)
            //   - Ready and result available after clock edge (clock-to-output)
            //   - Transaction completes when both valid=1 and ready=1
            // 
            // OPERATION:
            //   - Simple arithmetic: result = data + 1
            //   - Result wraps: 0xFF + 1 = 0x00 (8-bit overflow)
            if (valid) begin
                // Valid data received: Process transaction
                // 
                // READY SIGNAL:
                //   - Assert ready to indicate transaction accepted
                //   - In this simple implementation, ready=1 when valid=1
                //   - In real protocols, ready may depend on internal state
                ready <= 1'b1;  // Assert ready (transaction accepted)
                
                // RESULT CALCULATION:
                //   - Simple operation: result = data + 1
                //   - Performed on every valid transaction
                //   - Result registered (available next cycle)
                // 
                // EXAMPLES:
                //   data=0x10 (16) -> result=0x11 (17)
                //   data=0xFF (255) -> result=0x00 (256 wraps to 0)
                //   data=0x7F (127) -> result=0x80 (128)
                // 
                // OVERFLOW HANDLING:
                //   - 8-bit addition: result wraps on overflow
                //   - 0xFF + 1 = 0x100 -> truncated to 0x00
                //   - No error indication (simple implementation)
                result <= data + 1;  // Calculate result: data + 1
            end else begin
                // No valid data: Deassert ready
                // 
                // IDLE STATE:
                //   - When valid=0, interface is idle
                //   - Ready deasserted (not accepting data)
                //   - Result holds previous value
                ready <= 1'b0;  // Deassert ready (not accepting data)
                // Note: result not assigned, so it holds previous value
            end
        end
    end

// ============================================================================
// END OF MODULE
// ============================================================================
// 
// SYNTHESIS NOTES:
//   - This module synthesizes to: 8-bit adder + 2 registers
//   - Adder: Combinational logic (data + 1)
//   - Registers: ready (1-bit), result (8-bit)
//   - Clock domain: Single clock domain (clk)
//   - Reset domain: Asynchronous reset (rst_n)
// 
// AREA ESTIMATE (typical FPGA):
//   - Adder: ~10 LUTs (8-bit increment)
//   - Registers: 9 flip-flops (1 for ready, 8 for result)
//   - Total: ~9 flip-flops + ~10 LUTs
// 
// TIMING ANALYSIS:
//   - Critical path: data -> adder -> result register
//   - Setup time: valid, data, address must be stable before clock edge
//   - Hold time: valid, data, address must remain stable after clock edge
//   - Clock-to-output: ready and result available after clock edge
// 
// VERIFICATION CHECKLIST:
//   - [ ] Reset initializes ready=0, result=0
//   - [ ] Valid=1 causes ready=1 and result=data+1
//   - [ ] Valid=0 causes ready=0
//   - [ ] Result calculation: data+1 (all values 0-255)
//   - [ ] Overflow handling: 0xFF+1=0x00
//   - [ ] Handshake timing: valid/ready protocol
//   - [ ] Setup/hold time requirements met
//   - [ ] No glitches on outputs
// 
// DEBUGGING TIPS:
//   1. Monitor valid, ready, data, result in waveforms
//   2. Verify ready=1 when valid=1
//   3. Verify result = data + 1
//   4. Check overflow: data=0xFF -> result=0x00
//   5. Verify reset behavior (ready=0, result=0)
//   6. Check handshake timing
// 
// COMMON BUGS TO WATCH FOR:
//   1. Ready not asserted when valid=1
//   2. Result calculation incorrect
//   3. Overflow not handled
//   4. Timing violations on inputs
//   5. Reset not clearing all outputs
// 
// PROTOCOL EXTENSIONS:
//   - Add backpressure (ready depends on internal state)
//   - Add error handling
//   - Add address-based operations
//   - Add multiple operation types
//   - Add pipeline stages
endmodule
