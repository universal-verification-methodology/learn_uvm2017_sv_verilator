/**
 * Module 5: Multi-Channel Interface
 * 
 * A multi-channel interface for advanced UVM testing.
 * This module implements independent valid/ready handshake protocols
 * for master and slave channels.
 * 
 * DESIGN PATTERNS DEMONSTRATED:
 *   - Multi-channel architecture
 *   - Independent channel operation
 *   - Valid/ready handshake protocol (per channel)
 *   - Synchronous operation
 * 
 * VERIFICATION CONSIDERATIONS:
 *   - Independent channel testing
 *   - Concurrent channel operation
 *   - Channel arbitration (if needed)
 *   - Protocol compliance per channel
 *   - Reset behavior for all channels
 * 
 * HARDWARE IMPLEMENTATION:
 *   - Two independent channels (master and slave)
 *   - Each channel has its own valid/ready handshake
 *   - Channels operate independently
 *   - Can process transactions concurrently
 * 
 * CHANNEL OPERATION:
 *   - Master channel: master_valid/master_ready handshake
 *   - Slave channel: slave_valid/slave_ready handshake
 *   - Channels independent: Can operate simultaneously
 *   - No channel interaction: Channels don't affect each other
 * 
 * Ports:
 *   clk:           Clock signal (positive edge triggered)
 *   rst_n:         Active-low reset (asynchronous reset, synchronous release)
 *   master_valid:  Master channel valid (1 = data valid)
 *   master_ready:  Master channel ready (1 = ready to accept)
 *   master_data:   Master channel data (8-bit)
 *   slave_valid:   Slave channel valid (1 = data valid)
 *   slave_ready:   Slave channel ready (1 = ready to accept)
 *   slave_data:    Slave channel data (8-bit)
 * 
 * TIMING DIAGRAM (Master Channel):
 *   Clock:          _/‾\_/‾\_/‾\_/‾\_/‾\_
 *   master_valid:   __/‾‾\__/‾‾\________
 *   master_ready:   00 /‾‾\__/‾‾\__00
 *   master_data:    __A__B________________
 * 
 * TIMING DIAGRAM (Slave Channel):
 *   Clock:          _/‾\_/‾\_/‾\_/‾\_/‾\_
 *   slave_valid:    ________/‾‾\__/‾‾\__
 *   slave_ready:    00 00 /‾‾\__/‾‾\__
 *   slave_data:     ________C__D________
 */

`timescale 1ns/1ps

// ============================================================================
// MODULE DECLARATION
// ============================================================================
module multi_channel (
    // ========================================================================
    // PORT DECLARATIONS
    // ========================================================================
    input  wire       clk,            // Clock signal (1-bit), positive edge triggered
                                      // All operations synchronized to clock edge
    
    input  wire       rst_n,          // Active-low reset (1-bit)
                                      // Asynchronous reset: Immediate when low
                                      // Synchronous release: Deasserted on clock edge
    
    // ========================================================================
    // MASTER CHANNEL PORTS
    // ========================================================================
    input  wire       master_valid,   // Master channel valid (1-bit)
                                      // 1 = master_data is valid
                                      // 0 = master_data is invalid
                                      // Part of master channel handshake
    
    output reg        master_ready,   // Master channel ready (1-bit)
                                      // 1 = ready to accept master_data
                                      // 0 = not ready
                                      // Part of master channel handshake
    
    input  wire [7:0] master_data,    // Master channel data (8-bit)
                                      // Data from master channel
                                      // Valid when master_valid=1
                                      // Range: 0x00 to 0xFF (0-255)
    
    // ========================================================================
    // SLAVE CHANNEL PORTS
    // ========================================================================
    input  wire       slave_valid,    // Slave channel valid (1-bit)
                                      // 1 = slave_data is valid
                                      // 0 = slave_data is invalid
                                      // Part of slave channel handshake
    
    output reg        slave_ready,    // Slave channel ready (1-bit)
                                      // 1 = ready to accept slave_data
                                      // 0 = not ready
                                      // Part of slave channel handshake
    
    input  wire [7:0] slave_data      // Slave channel data (8-bit)
                                      // Data from slave channel
                                      // Valid when slave_valid=1
                                      // Range: 0x00 to 0xFF (0-255)
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
            // Asynchronous reset: Clear all channel ready signals
            // 
            // RESET BEHAVIOR:
            //   - All channels reset to not-ready state
            //   - Channels can accept new transactions after reset
            //   - Independent reset for each channel
            master_ready <= 1'b0;  // Reset master channel ready
            slave_ready <= 1'b0;   // Reset slave channel ready
        end 
        // ========================================================================
        // NORMAL OPERATION (WHEN RESET IS NOT ACTIVE)
        // ========================================================================
        else begin
            // ========================================================================
            // MASTER CHANNEL HANDshake
            // ========================================================================
            // 
            // MASTER CHANNEL PROTOCOL:
            //   - When master_valid=1: Assert master_ready=1 (accept data)
            //   - When master_valid=0: Deassert master_ready=0 (not accepting)
            //   - Simple handshake: ready follows valid
            // 
            // INDEPENDENT OPERATION:
            //   - Master channel operates independently
            //   - Not affected by slave channel state
            //   - Can process transactions concurrently with slave
            if (master_valid) begin
                // Master channel has valid data: Accept it
                // 
                // READY ASSERTION:
                //   - Assert ready to indicate acceptance
                //   - In this simple implementation, ready=1 when valid=1
                //   - In real implementations, ready may depend on internal state
                master_ready <= 1'b1;  // Assert ready (accept master_data)
            end else begin
                // Master channel has no valid data: Not accepting
                // 
                // IDLE STATE:
                //   - When valid=0, channel is idle
                //   - Ready deasserted (not accepting data)
                master_ready <= 1'b0;  // Deassert ready (not accepting)
            end
            
            // ========================================================================
            // SLAVE CHANNEL HANDshake
            // ========================================================================
            // 
            // SLAVE CHANNEL PROTOCOL:
            //   - When slave_valid=1: Assert slave_ready=1 (accept data)
            //   - When slave_valid=0: Deassert slave_ready=0 (not accepting)
            //   - Simple handshake: ready follows valid
            // 
            // INDEPENDENT OPERATION:
            //   - Slave channel operates independently
            //   - Not affected by master channel state
            //   - Can process transactions concurrently with master
            if (slave_valid) begin
                // Slave channel has valid data: Accept it
                // 
                // READY ASSERTION:
                //   - Assert ready to indicate acceptance
                //   - In this simple implementation, ready=1 when valid=1
                //   - In real implementations, ready may depend on internal state
                slave_ready <= 1'b1;   // Assert ready (accept slave_data)
            end else begin
                // Slave channel has no valid data: Not accepting
                // 
                // IDLE STATE:
                //   - When valid=0, channel is idle
                //   - Ready deasserted (not accepting data)
                slave_ready <= 1'b0;   // Deassert ready (not accepting)
            end
        end
    end

// ============================================================================
// END OF MODULE
// ============================================================================
// 
// SYNTHESIS NOTES:
//   - This module synthesizes to: 2 registers (master_ready, slave_ready)
//   - Logic: Simple combinational (valid -> ready)
//   - Clock domain: Single clock domain (clk)
//   - Reset domain: Asynchronous reset (rst_n)
//   - Channels: Independent (no shared logic)
// 
// AREA ESTIMATE (typical FPGA):
//   - Registers: 2 flip-flops (master_ready, slave_ready)
//   - Logic: ~4 LUTs (2 per channel: valid -> ready)
//   - Total: ~2 flip-flops + ~4 LUTs
// 
// TIMING ANALYSIS:
//   - Critical path: valid -> ready (combinational)
//   - Setup time: valid signals must be stable before clock edge
//   - Hold time: valid signals must remain stable after clock edge
//   - Clock-to-output: ready signals available after clock edge
// 
// VERIFICATION CHECKLIST:
//   - [ ] Reset initializes both channels to not-ready
//   - [ ] Master channel: valid=1 causes ready=1
//   - [ ] Master channel: valid=0 causes ready=0
//   - [ ] Slave channel: valid=1 causes ready=1
//   - [ ] Slave channel: valid=0 causes ready=0
//   - [ ] Channels operate independently
//   - [ ] Concurrent operation: Both channels can be active simultaneously
//   - [ ] No channel interference
//   - [ ] Setup/hold time requirements met
// 
// DEBUGGING TIPS:
//   1. Monitor both channels independently in waveforms
//   2. Verify each channel's handshake separately
//   3. Check concurrent operation (both channels active)
//   4. Verify reset clears both channels
//   5. Check for channel interference (should be none)
// 
// COMMON BUGS TO WATCH FOR:
//   1. Channels interfering with each other
//   2. Ready not asserted when valid=1
//   3. Reset not clearing all channels
//   4. Timing violations on valid signals
// 
// EXTENSIONS FOR PRODUCTION USE:
//   - Add channel arbitration (if shared resources)
//   - Add backpressure (ready depends on internal state)
//   - Add error handling per channel
//   - Add channel priority
//   - Add flow control between channels
endmodule
