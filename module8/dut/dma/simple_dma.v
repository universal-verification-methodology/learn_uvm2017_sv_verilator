/**
 * Module 8: Simple DMA Controller
 * 
 * A simple DMA controller for verification utilities examples.
 * This is a minimal DUT used for demonstrating UVM utilities.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand DMA controller operation
 *   2. Learn DMA transfer initiation and completion
 *   3. Understand address and length register handling
 *   4. Learn DMA channel selection
 *   5. Understand transfer counting and completion detection
 * 
 * DMA OPERATION:
 *   - DMA (Direct Memory Access): Transfers data without CPU intervention
 *   - Source address: Where data is read from
 *   - Destination address: Where data is written to
 *   - Transfer length: Number of bytes/words to transfer
 *   - Channel: DMA channel identifier (multiple channels supported)
 * 
 * TRANSFER FLOW:
 *   1. Configure: Set source address, destination address, length, channel
 *   2. Start: Assert dma_start signal
 *   3. Transfer: DMA controller performs transfer (counts down)
 *   4. Complete: Assert dma_done signal when transfer complete
 * 
 * Ports:
 *   clk:        Clock signal (positive edge triggered)
 *   rst_n:      Active-low reset (asynchronous reset, synchronous release)
 *   dma_start:  Start DMA transfer (1-bit, pulse signal)
 *   dma_done:   DMA transfer complete (1-bit, pulse signal)
 *   dma_src_addr: Source address (32-bit, byte address)
 *   dma_dst_addr: Destination address (32-bit, byte address)
 *   dma_length:  Transfer length (16-bit, number of transfers)
 *   dma_channel: DMA channel select (3-bit, 0-7 channels)
 * 
 * STATE MACHINE:
 *   - IDLE: Waiting for dma_start
 *   - TRANSFER: Transferring data (counting down)
 *   - DONE: Transfer complete (dma_done asserted)
 * 
 * TIMING DIAGRAM:
 *   Clock:        _/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_
 *   dma_start:    __‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   dma_done:     ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   count:        00  01  02  03  04  05  ...  length-1  length
 *   State:        IDLE -> TRANSFER -> TRANSFER -> ... -> DONE -> IDLE
 * 
 * SYNTHESIS NOTES:
 *   - State machine: Simple state tracking (dma_done flag)
 *   - Counters: 16-bit counter for transfer length
 *   - Registers: Source/destination address, length, channel
 *   - Area: Primarily registers and counters
 *   - Timing: Critical path through counter increment
 * 
 * VERIFICATION CHECKLIST:
 *   - [ ] Test DMA transfer initiation (dma_start)
 *   - [ ] Test transfer completion (dma_done)
 *   - [ ] Test various transfer lengths (1, 10, 100, 1000)
 *   - [ ] Test different channels (0-7)
 *   - [ ] Test reset functionality
 *   - [ ] Test back-to-back transfers
 *   - [ ] Test address register updates
 */

`timescale 1ns/1ps

// ============================================================================
// MODULE DECLARATION
// ============================================================================
module simple_dma (
    // ========================================================================
    // CLOCK AND RESET
    // ========================================================================
    input  wire        clk,            // Clock signal (1-bit)
                                        // Positive edge triggered
                                        // All operations synchronized to clock edge
    
    input  wire        rst_n,           // Active-low reset (1-bit)
                                        // Asynchronous reset: Immediate when low
                                        // Synchronous release: Deasserted on clock edge
    
    // ========================================================================
    // DMA CONTROL SIGNALS
    // ========================================================================
    input  wire        dma_start,       // Start DMA transfer (1-bit)
                                        // Pulse signal: Assert to start transfer
                                        // Should be deasserted after one cycle
    
    output reg         dma_done,        // DMA transfer complete (1-bit)
                                        // Pulse signal: Asserted when transfer complete
                                        // Automatically deasserted after one cycle
    
    // ========================================================================
    // DMA TRANSFER PARAMETERS
    // ========================================================================
    input  wire [31:0] dma_src_addr,    // Source address (32-bit)
                                        // Byte address: Where data is read from
                                        // Can address 4GB address space
    
    input  wire [31:0] dma_dst_addr,    // Destination address (32-bit)
                                        // Byte address: Where data is written to
                                        // Can address 4GB address space
    
    input  wire [15:0] dma_length,      // Transfer length (16-bit)
                                        // Number of transfers to perform
                                        // Range: 0 to 65535 transfers
    
    input  wire [2:0]  dma_channel      // DMA channel select (3-bit)
                                        // Channel identifier: 0-7
                                        // Allows multiple DMA channels
);

    // ========================================================================
    // INTERNAL REGISTERS
    // ========================================================================
    // 
    // REGISTER PURPOSE:
    //   - Store DMA transfer parameters
    //   - Latch values when dma_start is asserted
    //   - Used during transfer operation
    reg [31:0] src_addr_reg;    // Source address register
                                // Latched from dma_src_addr on start
    
    reg [31:0] dst_addr_reg;    // Destination address register
                                // Latched from dma_dst_addr on start
    
    reg [15:0] length_reg;      // Transfer length register
                                // Latched from dma_length on start
    
    reg [2:0]  channel_reg;     // Channel register
                                // Latched from dma_channel on start
    
    // ========================================================================
    // TRANSFER COUNTER
    // ========================================================================
    // 
    // COUNTER PURPOSE:
    //   - Counts number of transfers completed
    //   - Increments each cycle during transfer
    //   - Compares with length_reg to detect completion
    // 
    // COUNTER OPERATION:
    //   - Starts at 0 when transfer begins
    //   - Increments each cycle: count <= count + 1
    //   - Transfer complete when: count >= length_reg
    reg [15:0] count;           // Transfer counter (16-bit)
                                // Counts from 0 to length_reg
    
    // ========================================================================
    // SEQUENTIAL LOGIC BLOCK
    // ========================================================================
    // 
    // STATE MACHINE:
    //   - IDLE: dma_done=0, count=0 (waiting for start)
    //   - TRANSFER: dma_done=0, count < length_reg (transferring)
    //   - DONE: dma_done=1, count >= length_reg (complete)
    // 
    // STATE TRANSITIONS:
    //   - IDLE -> TRANSFER: When dma_start && !dma_done
    //   - TRANSFER -> DONE: When count >= length_reg
    //   - DONE -> IDLE: Automatically (dma_done deasserted)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // ================================================================
            // RESET CONDITION
            // ================================================================
            // 
            // RESET VALUES:
            //   - All registers cleared to 0
            //   - DMA transfer stopped
            //   - Counter reset to 0
            dma_done <= 1'b0;        // Clear done signal
            src_addr_reg <= 32'h0;   // Clear source address
            dst_addr_reg <= 32'h0;   // Clear destination address
            length_reg <= 16'h0;     // Clear length
            channel_reg <= 3'h0;      // Clear channel
            count <= 16'h0;          // Clear counter
        end else begin
            // ================================================================
            // NORMAL OPERATION
            // ================================================================
            
            // ================================================================
            // DMA START: LATCH PARAMETERS
            // ================================================================
            // 
            // START CONDITION:
            //   - dma_start asserted: New transfer requested
            //   - !dma_done: Previous transfer not in progress
            //   - Latch all transfer parameters
            //   - Reset counter to 0
            // 
            // PARAMETER LATCHING:
            //   - Source address: src_addr_reg <= dma_src_addr
            //   - Destination address: dst_addr_reg <= dma_dst_addr
            //   - Length: length_reg <= dma_length
            //   - Channel: channel_reg <= dma_channel
            //   - Counter: count <= 0 (start counting)
            // 
            // PARAMETER VALIDATION:
            //   - Source address: Should be valid memory address
            //   - Destination address: Should be valid memory address
            //   - Length: Should be > 0 (transfer at least 1 byte)
            //   - Channel: Should be 0-7 (3-bit range)
            // 
            // EDGE CASES:
            //   - Length = 0: Transfer completes immediately (count=0 >= length=0)
            //   - Length = 1: Single transfer (count: 0->1, complete)
            //   - Length = 65535: Maximum transfer (count: 0->65535, complete)
            //   - Address overflow: Not handled (simplified implementation)
            if (dma_start && !dma_done) begin
                // ============================================================
                // LATCH TRANSFER PARAMETERS
                // ============================================================
                src_addr_reg <= dma_src_addr;   // Latch source address
                dst_addr_reg <= dma_dst_addr;   // Latch destination address
                length_reg <= dma_length;       // Latch transfer length
                channel_reg <= dma_channel;      // Latch channel
                count <= 16'h0;                 // Reset counter
                // 
                // LATCH EXAMPLE:
                //   dma_src_addr = 0x1000_0000
                //   dma_dst_addr = 0x2000_0000
                //   dma_length = 100
                //   dma_channel = 2
                //   After latch:
                //     src_addr_reg = 0x1000_0000
                //     dst_addr_reg = 0x2000_0000
                //     length_reg = 100
                //     channel_reg = 2
                //     count = 0
                // 
                // TRANSFER INITIATION:
                //   - Cycle N: dma_start=1, parameters latched
                //   - Cycle N+1: Transfer begins (count starts incrementing)
                //   - Transfer continues until count >= length_reg
            end else if (!dma_done) begin
                // ============================================================
                // TRANSFER IN PROGRESS: INCREMENT COUNTER
                // ============================================================
                // 
                // TRANSFER STATE:
                //   - !dma_done: Transfer in progress
                //   - count < length_reg: Not yet complete
                //   - Increment counter each cycle
                // 
                // COUNTER INCREMENT:
                //   - count <= count + 1
                //   - Continues until count >= length_reg
                // 
                // TRANSFER EXAMPLE:
                //   length_reg = 100
                //   Cycle 1: count = 0, count < 100 (continue)
                //   Cycle 2: count = 1, count < 100 (continue)
                //   ...
                //   Cycle 100: count = 99, count < 100 (continue)
                //   Cycle 101: count = 100, count >= 100 (complete!)
                if (count < length_reg) begin
                    // ========================================================
                    // INCREMENT COUNTER
                    // ========================================================
                    count <= count + 1;
                    // 
                    // COUNTER PROGRESSION:
                    //   count: 0 -> 1 -> 2 -> ... -> length_reg-1 -> length_reg
                    //   When count == length_reg: Transfer complete
                end else begin
                    // ========================================================
                    // TRANSFER COMPLETE: ASSERT DONE
                    // ========================================================
                    // 
                    // COMPLETION CONDITION:
                    //   - count >= length_reg: All transfers completed
                    //   - Assert dma_done signal
                    //   - Indicates transfer completion
                    dma_done <= 1'b1;
                    // 
                    // COMPLETION EXAMPLE:
                    //   length_reg = 100
                    //   count = 100 (after increment)
                    //   count >= 100: Transfer complete
                    //   dma_done = 1 (asserted)
                end
            end else if (dma_done) begin
                // ============================================================
                // DONE SIGNAL: DEASSERT AFTER ONE CYCLE
                // ============================================================
                // 
                // DONE DEASSERTION:
                //   - dma_done asserted: Transfer complete
                //   - Deassert after one cycle
                //   - Allows new transfer to start
                //   - Pulse signal behavior
                dma_done <= 1'b0;
                // 
                // DEASSERTION EXAMPLE:
                //   Cycle N: dma_done = 1 (complete)
                //   Cycle N+1: dma_done = 0 (deasserted)
                //   Ready for next transfer
            end
        end
    end

endmodule
