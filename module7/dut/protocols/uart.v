/**
 * Module 7: UART Transmitter/Receiver
 * 
 * A simple UART for protocol verification.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand UART protocol basics
 *   2. Learn UART frame structure (start bit, data bits, stop bit)
 *   3. Understand serial data transmission
 *   4. Learn state machine implementation for UART
 *   5. Understand bit shifting for serial communication
 * 
 * UART PROTOCOL OVERVIEW:
 *   - UART (Universal Asynchronous Receiver/Transmitter)
 *   - Serial communication protocol
 *   - Asynchronous: No clock signal shared between transmitter and receiver
 *   - Frame structure: Start bit (0) + 8 data bits + Stop bit (1)
 *   - Idle state: Line high (1)
 * 
 * UART FRAME STRUCTURE:
 *   - Start bit: 1 bit (0, low)
 *   - Data bits: 8 bits (LSB first)
 *   - Stop bit: 1 bit (1, high)
 *   - Total: 10 bits per byte
 * 
 * TRANSMITTER OPERATION:
 *   1. IDLE: Wait for tx_start
 *   2. START: Transmit start bit (0)
 *   3. DATA: Transmit 8 data bits (LSB first)
 *   4. STOP: Transmit stop bit (1)
 *   5. Return to IDLE
 * 
 * RECEIVER OPERATION:
 *   1. IDLE: Wait for start bit (rx goes low)
 *   2. START: Detect start bit
 *   3. DATA: Sample 8 data bits (LSB first)
 *   4. STOP: Detect stop bit
 *   5. Return to IDLE, assert rx_ready
 * 
 * Ports:
 *   clk:      Clock signal (positive edge triggered)
 *   rst_n:    Active-low reset (asynchronous reset, synchronous release)
 *   tx:       Transmit data line (1-bit, serial output)
 *   rx:       Receive data line (1-bit, serial input)
 *   tx_data:  Data to transmit (8-bit, parallel input)
 *   tx_start: Start transmission (1-bit, pulse signal)
 *   tx_busy:  Transmission in progress (1-bit, status signal)
 *   rx_data:  Received data (8-bit, parallel output)
 *   rx_ready: Received data ready (1-bit, pulse signal)
 * 
 * TIMING DIAGRAM (Transmit):
 *   Clock:     _/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_
 *   tx_start:  __‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   tx_busy:   __‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   tx:        1  0  D0 D1 D2 D3 D4 D5 D6 D7  1  1
 *              Idle Start Data bits (LSB first) Stop Idle
 * 
 * SYNTHESIS NOTES:
 *   - State machines: 4-state machines for TX and RX
 *   - Shift registers: 8-bit shift registers for data
 *   - Bit counters: 4-bit counters (0-7 for 8 data bits)
 *   - Area: Primarily state machines and shift registers
 *   - Timing: Critical path through state machine logic
 * 
 * VERIFICATION CHECKLIST:
 *   - [ ] Test transmitter (tx_start -> tx_busy -> tx data)
 *   - [ ] Test receiver (rx start bit -> rx_data -> rx_ready)
 *   - [ ] Test various data values (0x00, 0xFF, 0x55, 0xAA)
 *   - [ ] Test reset functionality
 *   - [ ] Test back-to-back transmissions
 *   - [ ] Test loopback (tx -> rx)
 */

`timescale 1ns/1ps

// ============================================================================
// MODULE DECLARATION
// ============================================================================
module uart (
    // ========================================================================
    // CLOCK AND RESET
    // ========================================================================
    input  wire       clk,          // Clock signal (1-bit)
                                    // Positive edge triggered
                                    // All operations synchronized to clock edge
    
    input  wire       rst_n,        // Active-low reset (1-bit)
                                    // Asynchronous reset: Immediate when low
                                    // Synchronous release: Deasserted on clock edge
    
    // ========================================================================
    // TRANSMITTER SIGNALS
    // ========================================================================
    output reg        tx,           // Transmit data line (1-bit)
                                    // Serial output: Transmits data bit by bit
                                    // Idle: High (1), Start: Low (0)
    
    input  wire [7:0] tx_data,       // Data to transmit (8-bit)
                                    // Parallel input: Byte to transmit
                                    // Latched when tx_start asserted
    
    input  wire       tx_start,     // Start transmission (1-bit)
                                    // Pulse signal: Assert to start transmission
                                    // Should be deasserted after one cycle
    
    output reg        tx_busy,      // Transmission in progress (1-bit)
                                    // Status signal: High during transmission
                                    // Low when idle or complete
    
    // ========================================================================
    // RECEIVER SIGNALS
    // ========================================================================
    input  wire       rx,           // Receive data line (1-bit)
                                    // Serial input: Receives data bit by bit
                                    // Idle: High (1), Start: Low (0)
    
    output reg  [7:0] rx_data,      // Received data (8-bit)
                                    // Parallel output: Byte received
                                    // Valid when rx_ready asserted
    
    output reg        rx_ready      // Received data ready (1-bit)
                                    // Pulse signal: Asserted when data received
                                    // Automatically deasserted after one cycle
);

    // ========================================================================
    // TRANSMITTER STATE MACHINE
    // ========================================================================
    // 
    // STATE MACHINE STATES:
    //   - TX_IDLE: Waiting for tx_start
    //   - TX_START: Transmitting start bit
    //   - TX_DATA: Transmitting data bits
    //   - TX_STOP: Transmitting stop bit
    // 
    // STATE TRANSITIONS:
    //   - IDLE -> START: When tx_start asserted
    //   - START -> DATA: After start bit transmitted
    //   - DATA -> STOP: After 8 data bits transmitted
    //   - STOP -> IDLE: After stop bit transmitted
    reg [3:0] tx_state;         // Transmitter state (4-bit)
    reg [7:0] tx_shift;         // Transmitter shift register (8-bit)
                                // Stores data being transmitted
    reg [3:0] tx_bit_count;     // Transmitter bit counter (4-bit)
                                // Counts bits transmitted (0-7)
    
    localparam TX_IDLE = 4'h0;  // Idle state: Waiting for start
    localparam TX_START = 4'h1; // Start state: Transmitting start bit
    localparam TX_DATA = 4'h2;  // Data state: Transmitting data bits
    localparam TX_STOP = 4'h3;  // Stop state: Transmitting stop bit
    
    // ========================================================================
    // RECEIVER STATE MACHINE
    // ========================================================================
    // 
    // STATE MACHINE STATES:
    //   - RX_IDLE: Waiting for start bit
    //   - RX_START: Detected start bit
    //   - RX_DATA: Receiving data bits
    //   - RX_STOP: Detected stop bit
    // 
    // STATE TRANSITIONS:
    //   - IDLE -> START: When rx goes low (start bit detected)
    //   - START -> DATA: After start bit detected
    //   - DATA -> STOP: After 8 data bits received
    //   - STOP -> IDLE: After stop bit detected
    reg [3:0] rx_state;         // Receiver state (4-bit)
    reg [7:0] rx_shift;         // Receiver shift register (8-bit)
                                // Stores data being received
    reg [3:0] rx_bit_count;     // Receiver bit counter (4-bit)
                                // Counts bits received (0-7)
    
    localparam RX_IDLE = 4'h0;  // Idle state: Waiting for start bit
    localparam RX_START = 4'h1; // Start state: Detected start bit
    localparam RX_DATA = 4'h2;  // Data state: Receiving data bits
    localparam RX_STOP = 4'h3;  // Stop state: Detected stop bit
    
    // ========================================================================
    // TRANSMITTER LOGIC
    // ========================================================================
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // ================================================================
            // RESET CONDITION
            // ================================================================
            tx <= 1'b1;             // Idle state: Line high
            tx_busy <= 1'b0;        // Not busy
            tx_state <= TX_IDLE;    // Reset to idle state
            tx_shift <= 8'h0;       // Clear shift register
            tx_bit_count <= 4'h0;   // Clear bit counter
        end else begin
            // ================================================================
            // NORMAL OPERATION
            // ================================================================
            case (tx_state)
                TX_IDLE: begin
                    // ========================================================
                    // IDLE STATE: WAIT FOR START
                    // ========================================================
                    // 
                    // IDLE BEHAVIOR:
                    //   - Wait for tx_start signal
                    //   - Line high (idle state)
                    //   - tx_busy = 0 (not transmitting)
                    // 
                    // START CONDITION:
                    //   - tx_start asserted: Start transmission
                    //   - Latch tx_data into shift register
                    //   - Assert tx_busy
                    //   - Transition to TX_START state
                    if (tx_start) begin
                        tx_state <= TX_START;   // Move to start state
                        tx_shift <= tx_data;    // Latch data to transmit
                        tx_busy <= 1'b1;       // Assert busy signal
                        // 
                        // LATCH EXAMPLE:
                        //   tx_data = 0x55 (0b0101_0101)
                        //   tx_shift = 0x55 (latched)
                        //   tx_busy = 1 (transmission started)
                    end
                end
                
                TX_START: begin
                    // ========================================================
                    // START STATE: TRANSMIT START BIT
                    // ========================================================
                    // 
                    // START BIT:
                    //   - Transmit low (0) for start bit
                    //   - Indicates start of frame
                    //   - Transition to TX_DATA state
                    //   - Reset bit counter to 0
                    tx <= 1'b0;                 // Start bit (low)
                    tx_state <= TX_DATA;        // Move to data state
                    tx_bit_count <= 4'h0;       // Reset bit counter
                    // 
                    // START BIT EXAMPLE:
                    //   tx = 0 (start bit transmitted)
                    //   tx_state = TX_DATA (ready for data)
                    //   tx_bit_count = 0 (first bit)
                end
                
                TX_DATA: begin
                    // ========================================================
                    // DATA STATE: TRANSMIT DATA BITS
                    // ========================================================
                    // 
                    // DATA TRANSMISSION:
                    //   - Transmit LSB first (tx_shift[0])
                    //   - Shift register right: {1'b0, tx_shift[7:1]}
                    //   - Increment bit counter
                    //   - After 8 bits: Transition to TX_STOP
                    // 
                    // BIT TRANSMISSION:
                    //   - Bit 0: tx_shift[0] (LSB)
                    //   - Bit 1: tx_shift[1]
                    //   - ...
                    //   - Bit 7: tx_shift[7] (MSB)
                    // 
                    // SERIAL TRANSMISSION ORDER:
                    //   - UART transmits LSB first (little-endian)
                    //   - Data: 0x55 = 0b0101_0101
                    //   - Transmission order: 1, 0, 1, 0, 1, 0, 1, 0
                    //   - Receiver reconstructs: 0b0101_0101 = 0x55
                    tx <= tx_shift[0];          // Transmit LSB
                    tx_shift <= {1'b0, tx_shift[7:1]};  // Shift right
                    // 
                    // SHIFT EXAMPLE (Detailed):
                    //   Initial: tx_shift = 0x55 (0b0101_0101)
                    //   
                    //   Bit 0: tx = tx_shift[0] = 1
                    //          tx_shift = {1'b0, 0b0101_010} = 0x2A (0b0010_1010)
                    //   
                    //   Bit 1: tx = tx_shift[0] = 0
                    //          tx_shift = {1'b0, 0b0010_101} = 0x15 (0b0001_0101)
                    //   
                    //   Bit 2: tx = tx_shift[0] = 1
                    //          tx_shift = {1'b0, 0b0001_010} = 0x0A (0b0000_1010)
                    //   
                    //   Bit 3: tx = tx_shift[0] = 0
                    //          tx_shift = {1'b0, 0b0000_101} = 0x05 (0b0000_0101)
                    //   
                    //   Bit 4: tx = tx_shift[0] = 1
                    //          tx_shift = {1'b0, 0b0000_010} = 0x02 (0b0000_0010)
                    //   
                    //   Bit 5: tx = tx_shift[0] = 0
                    //          tx_shift = {1'b0, 0b0000_001} = 0x01 (0b0000_0001)
                    //   
                    //   Bit 6: tx = tx_shift[0] = 0
                    //          tx_shift = {1'b0, 0b0000_000} = 0x00 (0b0000_0000)
                    //   
                    //   Bit 7: tx = tx_shift[0] = 0
                    //          tx_shift = {1'b0, 0b0000_000} = 0x00 (0b0000_0000)
                    //   
                    //   Transmission sequence: 1, 0, 1, 0, 1, 0, 0, 0
                    //   Receiver reconstructs: 0b0101_0101 = 0x55
                    // 
                    // SHIFT OPERATION DETAILS:
                    //   - {1'b0, tx_shift[7:1]}: Right shift with zero fill
                    //   - tx_shift[7:1]: Bits 7 down to 1 (7 bits)
                    //   - 1'b0: Zero inserted at MSB position
                    //   - Result: 8-bit value with right shift
                    // 
                    // BIT COUNTER PROGRESSION:
                    //   - tx_bit_count: 0 -> 1 -> 2 -> ... -> 7
                    //   - When tx_bit_count == 7: All 8 bits transmitted
                    //   - Transition to TX_STOP state
                    if (tx_bit_count == 4'h7) begin
                        // ====================================================
                        // ALL DATA BITS TRANSMITTED
                        // ====================================================
                        tx_state <= TX_STOP;    // Move to stop state
                    end else begin
                        // ====================================================
                        // MORE BITS TO TRANSMIT
                        // ====================================================
                        tx_bit_count <= tx_bit_count + 1;  // Increment counter
                    end
                end
                
                TX_STOP: begin
                    // ========================================================
                    // STOP STATE: TRANSMIT STOP BIT
                    // ========================================================
                    // 
                    // STOP BIT:
                    //   - Transmit high (1) for stop bit
                    //   - Indicates end of frame
                    //   - Return to IDLE state
                    //   - Deassert tx_busy
                    tx <= 1'b1;                 // Stop bit (high)
                    tx_state <= TX_IDLE;        // Return to idle
                    tx_busy <= 1'b0;           // Deassert busy
                    // 
                    // STOP BIT EXAMPLE:
                    //   tx = 1 (stop bit transmitted)
                    //   tx_state = TX_IDLE (ready for next transmission)
                    //   tx_busy = 0 (transmission complete)
                end
                
                default: begin
                    // ========================================================
                    // DEFAULT CASE: SAFETY
                    // ========================================================
                    tx_state <= TX_IDLE;        // Return to idle
                    tx_busy <= 1'b0;           // Deassert busy
                end
            endcase
        end
    end
    
    // ========================================================================
    // RECEIVER LOGIC
    // ========================================================================
    // 
    // NOTE: This is a simplified receiver implementation
    // Real UART receiver would need proper bit sampling (middle of bit period)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // ================================================================
            // RESET CONDITION
            // ================================================================
            rx_data <= 8'h0;        // Clear received data
            rx_ready <= 1'b0;       // Clear ready signal
            rx_state <= RX_IDLE;    // Reset to idle state
            rx_shift <= 8'h0;       // Clear shift register
            rx_bit_count <= 4'h0;   // Clear bit counter
        end else begin
            // ================================================================
            // NORMAL OPERATION
            // ================================================================
            case (rx_state)
                RX_IDLE: begin
                    // ========================================================
                    // IDLE STATE: WAIT FOR START BIT
                    // ========================================================
                    // 
                    // START BIT DETECTION:
                    //   - rx goes low (0): Start bit detected
                    //   - Transition to RX_START state
                    //   - Clear rx_ready (data not ready yet)
                    if (!rx) begin  // Start bit detected (low)
                        rx_state <= RX_START;   // Move to start state
                        rx_ready <= 1'b0;       // Clear ready signal
                        // 
                        // START DETECTION EXAMPLE:
                        //   rx = 0 (start bit detected)
                        //   rx_state = RX_START (receiving frame)
                        //   rx_ready = 0 (data not ready)
                    end
                end
                
                RX_START: begin
                    // ========================================================
                    // START STATE: DETECTED START BIT
                    // ========================================================
                    // 
                    // START PROCESSING:
                    //   - Start bit detected
                    //   - Transition to RX_DATA state
                    //   - Reset bit counter to 0
                    rx_state <= RX_DATA;        // Move to data state
                    rx_bit_count <= 4'h0;       // Reset bit counter
                end
                
                RX_DATA: begin
                    // ========================================================
                    // DATA STATE: RECEIVE DATA BITS
                    // ========================================================
                    // 
                    // DATA RECEPTION:
                    //   - Receive LSB first (rx)
                    //   - Shift register left: {rx, rx_shift[7:1]}
                    //   - Increment bit counter
                    //   - After 8 bits: Transition to RX_STOP
                    // 
                    // BIT RECEPTION:
                    //   - Bit 0: rx (LSB)
                    //   - Bit 1: rx
                    //   - ...
                    //   - Bit 7: rx (MSB)
                    rx_shift <= {rx, rx_shift[7:1]};  // Shift left, insert rx
                    // 
                    // SHIFT EXAMPLE:
                    //   Initial: rx_shift = 0x00
                    //   Bit 0: rx = 1, rx_shift = 0x01
                    //   Bit 1: rx = 0, rx_shift = 0x02
                    //   ...
                    //   Bit 7: rx = 0, rx_shift = 0x55
                    if (rx_bit_count == 4'h7) begin
                        // ====================================================
                        // ALL DATA BITS RECEIVED
                        // ====================================================
                        rx_state <= RX_STOP;    // Move to stop state
                    end else begin
                        // ====================================================
                        // MORE BITS TO RECEIVE
                        // ====================================================
                        rx_bit_count <= rx_bit_count + 1;  // Increment counter
                    end
                end
                
                RX_STOP: begin
                    // ========================================================
                    // STOP STATE: DETECTED STOP BIT
                    // ========================================================
                    // 
                    // STOP PROCESSING:
                    //   - Stop bit detected (rx should be high)
                    //   - Latch received data: rx_data <= rx_shift
                    //   - Assert rx_ready signal
                    //   - Return to IDLE state
                    rx_data <= rx_shift;        // Latch received data
                    rx_ready <= 1'b1;          // Assert ready signal
                    rx_state <= RX_IDLE;       // Return to idle
                    // 
                    // STOP EXAMPLE:
                    //   rx_shift = 0x55 (received data)
                    //   rx_data = 0x55 (latched)
                    //   rx_ready = 1 (data ready)
                    //   rx_state = RX_IDLE (ready for next frame)
                end
                
                default: begin
                    // ========================================================
                    // DEFAULT CASE: SAFETY
                    // ========================================================
                    rx_state <= RX_IDLE;        // Return to idle
                    rx_ready <= 1'b0;          // Clear ready
                end
            endcase
        end
    end

endmodule
