/**
 * Module 6: AXI4-Lite Slave
 * 
 * A simplified AXI4-Lite slave for protocol verification.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand AXI4-Lite protocol basics
 *   2. Learn handshake protocol (VALID/READY)
 *   3. Understand write and read transaction flows
 *   4. Learn state machine implementation for protocol handling
 *   5. Understand address decoding and memory access
 * 
 * AXI4-LITE PROTOCOL OVERVIEW:
 *   - AXI4-Lite is a simplified version of AXI4
 *   - Supports single data transfers (no bursts)
 *   - 5 independent channels:
 *     1. Write Address (AW): Address for write transaction
 *     2. Write Data (W): Data to write
 *     3. Write Response (B): Write completion status
 *     4. Read Address (AR): Address for read transaction
 *     5. Read Data (R): Read data and status
 *   - All channels use VALID/READY handshake
 *   - VALID: Source asserts when data/address is valid
 *   - READY: Destination asserts when ready to accept
 *   - Transfer occurs when both VALID and READY are high
 * 
 * PROTOCOL RULES:
 *   1. VALID must not depend on READY
 *   2. READY can wait for VALID (can be asserted before VALID)
 *   3. Once VALID is asserted, it must remain until handshake
 *   4. Once READY is asserted, it can be deasserted
 *   5. Write transaction: AW -> W -> B (in order)
 *   6. Read transaction: AR -> R (in order)
 * 
 * Ports:
 *   ACLK:     Clock signal (positive edge triggered)
 *   ARESETn:  Active-low reset (asynchronous reset, synchronous release)
 *   
 *   Write Address Channel:
 *   AWVALID:  Write address valid (master asserts when address valid)
 *   AWREADY:  Write address ready (slave asserts when ready to accept)
 *   AWADDR:   Write address (32-bit, byte address)
 *   AWPROT:   Write protection type (3-bit, security/privilege info)
 *   
 *   Write Data Channel:
 *   WVALID:   Write data valid (master asserts when data valid)
 *   WREADY:   Write data ready (slave asserts when ready to accept)
 *   WDATA:    Write data (32-bit)
 *   WSTRB:    Write strobe (4-bit, one bit per byte, indicates valid bytes)
 *   
 *   Write Response Channel:
 *   BVALID:   Write response valid (slave asserts when response valid)
 *   BREADY:   Write response ready (master asserts when ready to accept)
 *   BRESP:    Write response (2-bit: 00=OKAY, 01=EXOKAY, 10=SLVERR, 11=DECERR)
 *   
 *   Read Address Channel:
 *   ARVALID:  Read address valid (master asserts when address valid)
 *   ARREADY:  Read address ready (slave asserts when ready to accept)
 *   ARADDR:   Read address (32-bit, byte address)
 *   ARPROT:   Read protection type (3-bit, security/privilege info)
 *   
 *   Read Data Channel:
 *   RVALID:   Read data valid (slave asserts when data valid)
 *   RREADY:   Read data ready (master asserts when ready to accept)
 *   RDATA:    Read data (32-bit)
 *   RRESP:    Read response (2-bit: 00=OKAY, 01=EXOKAY, 10=SLVERR, 11=DECERR)
 * 
 * MEMORY ORGANIZATION:
 *   - 1024 32-bit words (4KB total)
 *   - Address range: 0x0000_0000 to 0x0000_0FFC
 *   - Address decoding: AWADDR[11:2] or ARADDR[11:2] (word address)
 *   - Byte address to word address: divide by 4 (shift right by 2)
 * 
 * STATE MACHINES:
 *   Write State Machine:
 *     - WRITE_IDLE: Waiting for write address
 *     - WRITE_DATA: Received address, waiting for write data
 *   
 *   Read State Machine:
 *     - READ_IDLE: Waiting for read address
 *     - READ_DATA: Received address, providing read data
 * 
 * TIMING DIAGRAM (Write Transaction):
 *   Clock:     _/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_
 *   AWVALID:   __‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   AWREADY:   ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   WVALID:   ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   WREADY:    ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   BVALID:    ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   BREADY:    ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   Handshake: AW handshake -> W handshake -> B handshake
 * 
 * TIMING DIAGRAM (Read Transaction):
 *   Clock:     _/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_
 *   ARVALID:   __‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   ARREADY:   ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   RVALID:    ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   RREADY:    ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   Handshake: AR handshake -> R handshake
 * 
 * SYNTHESIS NOTES:
 *   - Memory array: 1024 x 32-bit = 32Kb (4KB)
 *   - State machines: Simple 2-state machines (minimal logic)
 *   - Handshake logic: Combinational + sequential
 *   - Area: Primarily memory array
 *   - Timing: Critical path through memory access
 * 
 * VERIFICATION CHECKLIST:
 *   - [ ] Test write transaction (AW -> W -> B)
 *   - [ ] Test read transaction (AR -> R)
 *   - [ ] Test VALID/READY handshake timing
 *   - [ ] Test address decoding (various addresses)
 *   - [ ] Test write/read data integrity
 *   - [ ] Test reset functionality
 *   - [ ] Test concurrent read/write (different addresses)
 *   - [ ] Test protocol violations (if checker present)
 * 
 * COMMON BUGS & DEBUGGING TIPS:
 *   - VALID not deasserted after handshake: Check state machine transitions
 *   - READY timing issues: Verify READY can be asserted before VALID
 *   - Address out of range: Check address decoding logic
 *   - Data corruption: Verify memory write/read operations
 *   - Protocol violations: Use protocol checker to detect
 *   - Debug: Use waveform viewer to observe handshake signals
 *     Step through clock cycles to see state transitions
 */

`timescale 1ns/1ps

// ============================================================================
// MODULE DECLARATION
// ============================================================================
module axi4_lite_slave (
    // ========================================================================
    // CLOCK AND RESET
    // ========================================================================
    input  wire        ACLK,      // Clock signal (1-bit)
                                    // Positive edge triggered
                                    // All operations synchronized to clock edge
    
    input  wire        ARESETn,   // Active-low reset (1-bit)
                                    // Asynchronous reset: Immediate when low
                                    // Synchronous release: Deasserted on clock edge
    
    // ========================================================================
    // WRITE ADDRESS CHANNEL
    // ========================================================================
    input  wire        AWVALID,   // Write address valid (1-bit)
                                    // Master asserts when address is valid
                                    // Must remain asserted until AWREADY is high
    
    output reg         AWREADY,   // Write address ready (1-bit)
                                    // Slave asserts when ready to accept address
                                    // Can be asserted before AWVALID
    
    input  wire [31:0] AWADDR,    // Write address (32-bit)
                                    // Byte address (can address 4GB)
                                    // Address decoding: AWADDR[11:2] for word address
    
    input  wire [2:0]  AWPROT,    // Write protection type (3-bit)
                                    // Bit 0: Privilege (0=normal, 1=privileged)
                                    // Bit 1: Non-secure (0=secure, 1=non-secure)
                                    // Bit 2: Instruction (0=data, 1=instruction)
                                    // Not used in this simplified implementation
    
    // ========================================================================
    // WRITE DATA CHANNEL
    // ========================================================================
    input  wire        WVALID,    // Write data valid (1-bit)
                                    // Master asserts when data is valid
                                    // Must remain asserted until WREADY is high
    
    output reg         WREADY,    // Write data ready (1-bit)
                                    // Slave asserts when ready to accept data
                                    // Can be asserted before WVALID
    
    input  wire [31:0] WDATA,      // Write data (32-bit)
                                    // Data to be written to memory
    
    input  wire [3:0]  WSTRB,      // Write strobe (4-bit)
                                    // One bit per byte: WSTRB[3]=byte3, WSTRB[0]=byte0
                                    // 1 = write byte, 0 = don't write byte
                                    // Not used in this simplified implementation (always write full word)
    
    // ========================================================================
    // WRITE RESPONSE CHANNEL
    // ========================================================================
    output reg         BVALID,    // Write response valid (1-bit)
                                    // Slave asserts when response is valid
                                    // Must remain asserted until BREADY is high
    
    input  wire        BREADY,    // Write response ready (1-bit)
                                    // Master asserts when ready to accept response
                                    // Can be asserted before BVALID
    
    output reg  [1:0] BRESP,      // Write response (2-bit)
                                    // 00 = OKAY (normal success)
                                    // 01 = EXOKAY (exclusive access success)
                                    // 10 = SLVERR (slave error)
                                    // 11 = DECERR (decode error)
    
    // ========================================================================
    // READ ADDRESS CHANNEL
    // ========================================================================
    input  wire        ARVALID,   // Read address valid (1-bit)
                                    // Master asserts when address is valid
                                    // Must remain asserted until ARREADY is high
    
    output reg         ARREADY,   // Read address ready (1-bit)
                                    // Slave asserts when ready to accept address
                                    // Can be asserted before ARVALID
    
    input  wire [31:0] ARADDR,    // Read address (32-bit)
                                    // Byte address (can address 4GB)
                                    // Address decoding: ARADDR[11:2] for word address
    
    input  wire [2:0]  ARPROT,    // Read protection type (3-bit)
                                    // Bit 0: Privilege (0=normal, 1=privileged)
                                    // Bit 1: Non-secure (0=secure, 1=non-secure)
                                    // Bit 2: Instruction (0=data, 1=instruction)
                                    // Not used in this simplified implementation
    
    // ========================================================================
    // READ DATA CHANNEL
    // ========================================================================
    output reg         RVALID,    // Read data valid (1-bit)
                                    // Slave asserts when data is valid
                                    // Must remain asserted until RREADY is high
    
    input  wire        RREADY,     // Read data ready (1-bit)
                                    // Master asserts when ready to accept data
                                    // Can be asserted before RVALID
    
    output reg  [31:0] RDATA,      // Read data (32-bit)
                                    // Data read from memory
    
    output reg  [1:0] RRESP       // Read response (2-bit)
                                    // 00 = OKAY (normal success)
                                    // 01 = EXOKAY (exclusive access success)
                                    // 10 = SLVERR (slave error)
                                    // 11 = DECERR (decode error)
);

    // ========================================================================
    // INTERNAL MEMORY
    // ========================================================================
    // 
    // MEMORY ARRAY:
    //   - 1024 words x 32 bits = 4KB total memory
    //   - Address range: 0x0000_0000 to 0x0000_0FFC (byte addresses)
    //   - Word addresses: 0 to 1023
    //   - Address decoding: AWADDR[11:2] or ARADDR[11:2]
    //     * Bits [11:2] = 10 bits = 1024 word addresses
    //     * Bits [1:0] = byte offset within word (not used, always full word)
    // 
    // MEMORY ACCESS:
    //   - Write: memory[AWADDR[11:2]] <= WDATA
    //   - Read: RDATA <= memory[ARADDR[11:2]]
    //   - Synchronous access (clocked)
    reg [31:0] memory [0:1023];
    
    // ========================================================================
    // WRITE STATE MACHINE
    // ========================================================================
    // 
    // STATE MACHINE STATES:
    //   - WRITE_IDLE (1'b0): Waiting for write address
    //   - WRITE_DATA (1'b1): Received address, waiting for write data
    // 
    // STATE TRANSITIONS:
    //   - IDLE -> DATA: When AWVALID && AWREADY (address handshake)
    //   - DATA -> IDLE: When BVALID && BREADY (response handshake)
    // 
    // STATE MACHINE PURPOSE:
    //   - Tracks write transaction progress
    //   - Ensures proper write transaction ordering (AW -> W -> B)
    reg write_state;
    localparam WRITE_IDLE = 1'b0;  // Waiting for write address
    localparam WRITE_DATA = 1'b1;  // Received address, waiting for write data
    
    // ========================================================================
    // READ STATE MACHINE
    // ========================================================================
    // 
    // STATE MACHINE STATES:
    //   - READ_IDLE (1'b0): Waiting for read address
    //   - READ_DATA (1'b1): Received address, providing read data
    // 
    // STATE TRANSITIONS:
    //   - IDLE -> DATA: When ARVALID && ARREADY (address handshake)
    //   - DATA -> IDLE: When RVALID && RREADY (data handshake)
    // 
    // STATE MACHINE PURPOSE:
    //   - Tracks read transaction progress
    //   - Ensures proper read transaction ordering (AR -> R)
    reg read_state;
    localparam READ_IDLE = 1'b0;   // Waiting for read address
    localparam READ_DATA = 1'b1;   // Received address, providing read data
    
    // ========================================================================
    // WRITE ADDRESS CHANNEL LOGIC
    // ========================================================================
    // 
    // HANDSHAKE PROTOCOL:
    //   - AWVALID: Master asserts when address is valid
    //   - AWREADY: Slave asserts when ready to accept
    //   - Handshake: When both AWVALID && AWREADY are high on clock edge
    // 
    // BEHAVIOR:
    //   - When AWVALID && !AWREADY: Assert AWREADY, transition to WRITE_DATA
    //   - After handshake: Deassert AWREADY (pulse behavior)
    //   - Reset: Clear AWREADY and state
    always @(posedge ACLK or negedge ARESETn) begin
        if (!ARESETn) begin
            // ================================================================
            // RESET CONDITION
            // ================================================================
            AWREADY <= 1'b0;        // Clear ready signal
            write_state <= WRITE_IDLE;  // Reset to idle state
        end else begin
            // ================================================================
            // NORMAL OPERATION
            // ================================================================
            if (AWVALID && !AWREADY) begin
                // ============================================================
                // ADDRESS HANDSHAKE
                // ============================================================
                // Master has valid address, slave is ready
                // Assert AWREADY to complete handshake
                // Transition to WRITE_DATA state (waiting for write data)
                // 
                // HANDSHAKE TIMING:
                //   - Cycle N: AWVALID=1, AWREADY=0 (master waiting)
                //   - Cycle N+1: AWVALID=1, AWREADY=1 (handshake completes)
                //   - Address captured: AWADDR latched on handshake
                //   - State transition: WRITE_IDLE -> WRITE_DATA
                // 
                // HANDSHAKE VARIATIONS:
                //   - Immediate ready: AWREADY=1 same cycle as AWVALID=1
                //   - Delayed ready: AWREADY=1 after 1+ cycles
                //   - Both valid: Handshake completes when both high
                // 
                // PROTOCOL RULE:
                //   - AWVALID must remain asserted until AWREADY=1
                //   - AWREADY can be asserted before or after AWVALID
                //   - Handshake occurs when both are high on clock edge
                AWREADY <= 1'b1;        // Assert ready (completes handshake)
                write_state <= WRITE_DATA;  // Move to data phase
                // 
                // STATE TRANSITION:
                //   - Before: write_state = WRITE_IDLE
                //   - After: write_state = WRITE_DATA
                //   - Purpose: Track write transaction progress
                //   - Next: Wait for write data (WVALID/WREADY)
            end else begin
                // ============================================================
                // NO HANDSHAKE
                // ============================================================
                // Deassert AWREADY (pulse behavior)
                // This allows AWREADY to be asserted only during handshake
                AWREADY <= 1'b0;
            end
        end
    end
    
    // ========================================================================
    // WRITE DATA CHANNEL LOGIC
    // ========================================================================
    // 
    // HANDSHAKE PROTOCOL:
    //   - WVALID: Master asserts when data is valid
    //   - WREADY: Slave asserts when ready to accept
    //   - Handshake: When both WVALID && WREADY are high on clock edge
    // 
    // BEHAVIOR:
    //   - When write_state == WRITE_DATA && WVALID && !WREADY:
    //     * Assert WREADY (complete handshake)
    //     * Write data to memory: memory[AWADDR[11:2]] <= WDATA
    //   - After data handshake: Assert BVALID, set BRESP=OKAY
    //   - After response handshake: Deassert BVALID, return to IDLE
    // 
    // ADDRESS DECODING:
    //   - AWADDR[11:2]: Word address (10 bits = 1024 words)
    //   - AWADDR[1:0]: Byte offset (not used, always full word write)
    always @(posedge ACLK or negedge ARESETn) begin
        if (!ARESETn) begin
            // ================================================================
            // RESET CONDITION
            // ================================================================
            WREADY <= 1'b0;         // Clear ready signal
            BVALID <= 1'b0;         // Clear response valid
            BRESP <= 2'b00;         // Clear response (OKAY)
        end else begin
            // ================================================================
            // WRITE DATA HANDLING
            // ================================================================
            if (write_state == WRITE_DATA && WVALID && !WREADY) begin
                // ============================================================
                // DATA HANDSHAKE
                // ============================================================
                // We're in WRITE_DATA state (address already received)
                // Master has valid data, slave is ready
                // Assert WREADY to complete handshake
                WREADY <= 1'b1;     // Assert ready (completes handshake)
                
                // ============================================================
                // MEMORY WRITE
                // ============================================================
                // Write data to memory at decoded address
                // Address decoding: AWADDR[11:2] = word address
                // 
                // ADDRESS DECODING:
                //   - AWADDR: Byte address (32-bit, can address 4GB)
                //   - AWADDR[11:2]: Word address (10-bit, 1024 words)
                //   - AWADDR[1:0]: Byte offset (not used, always full word)
                //   - Word address = byte address / 4 = byte address >> 2
                // 
                // DECODING EXAMPLES:
                //   Example 1: AWADDR = 0x0000_0010 (byte address 16)
                //     AWADDR[11:2] = 0x004 (word address 4)
                //     memory[4] <= WDATA
                //   Example 2: AWADDR = 0x0000_0020 (byte address 32)
                //     AWADDR[11:2] = 0x008 (word address 8)
                //     memory[8] <= WDATA
                //   Example 3: AWADDR = 0x0000_0FFC (byte address 4092)
                //     AWADDR[11:2] = 0x3FF (word address 1023, last word)
                //     memory[1023] <= WDATA
                // 
                // MEMORY BOUNDS:
                //   - Valid word addresses: 0 to 1023
                //   - Address range: 0x0000_0000 to 0x0000_0FFC (byte addresses)
                //   - Out of range: AWADDR[11:2] > 1023 (not handled, may cause error)
                // 
                // WRITE OPERATION:
                //   - Synchronous write (clocked)
                //   - Data written on clock edge after handshake
                //   - Full word write (all 32 bits)
                //   - WSTRB not used (simplified implementation)
                memory[AWADDR[11:2]] <= WDATA;
                // 
                // WRITE TIMING:
                //   - Cycle N: WVALID=1, WREADY=0 (waiting)
                //   - Cycle N+1: WVALID=1, WREADY=1 (handshake)
                //   - Data written: memory[AWADDR[11:2]] <= WDATA (on clock edge)
                //   - Write completes: Data stored in memory
            end else begin
                // ============================================================
                // NO DATA HANDSHAKE
                // ============================================================
                // Deassert WREADY (pulse behavior)
                WREADY <= 1'b0;
            end
            
            // ================================================================
            // WRITE RESPONSE HANDLING
            // ================================================================
            if (WREADY && WVALID) begin
                // ============================================================
                // DATA HANDSHAKE COMPLETE
                // ============================================================
                // Write data has been accepted
                // Assert write response (BVALID) with OKAY status
                // This signals write transaction completion
                BVALID <= 1'b1;     // Assert response valid
                BRESP <= 2'b00;     // OKAY response (normal success)
            end else if (BREADY && BVALID) begin
                // ============================================================
                // RESPONSE HANDSHAKE COMPLETE
                // ============================================================
                // Write response has been accepted by master
                // Deassert BVALID and return to IDLE state
                // Write transaction is complete
                BVALID <= 1'b0;     // Deassert response valid
                write_state <= WRITE_IDLE;  // Return to idle state
            end
        end
    end
    
    // ========================================================================
    // READ ADDRESS CHANNEL LOGIC
    // ========================================================================
    // 
    // HANDSHAKE PROTOCOL:
    //   - ARVALID: Master asserts when address is valid
    //   - ARREADY: Slave asserts when ready to accept
    //   - Handshake: When both ARVALID && ARREADY are high on clock edge
    // 
    // BEHAVIOR:
    //   - When ARVALID && !ARREADY: Assert ARREADY, transition to READ_DATA
    //   - After handshake: Deassert ARREADY (pulse behavior)
    //   - Reset: Clear ARREADY and state
    always @(posedge ACLK or negedge ARESETn) begin
        if (!ARESETn) begin
            // ================================================================
            // RESET CONDITION
            // ================================================================
            ARREADY <= 1'b0;        // Clear ready signal
            read_state <= READ_IDLE;    // Reset to idle state
        end else begin
            // ================================================================
            // NORMAL OPERATION
            // ================================================================
            if (ARVALID && !ARREADY) begin
                // ============================================================
                // ADDRESS HANDSHAKE
                // ============================================================
                // Master has valid address, slave is ready
                // Assert ARREADY to complete handshake
                // Transition to READ_DATA state (providing read data)
                ARREADY <= 1'b1;        // Assert ready (completes handshake)
                read_state <= READ_DATA;    // Move to data phase
            end else begin
                // ============================================================
                // NO HANDSHAKE
                // ============================================================
                // Deassert ARREADY (pulse behavior)
                // This allows ARREADY to be asserted only during handshake
                ARREADY <= 1'b0;
            end
        end
    end
    
    // ========================================================================
    // READ DATA CHANNEL LOGIC
    // ========================================================================
    // 
    // HANDSHAKE PROTOCOL:
    //   - RVALID: Slave asserts when data is valid
    //   - RREADY: Master asserts when ready to accept
    //   - Handshake: When both RVALID && RREADY are high on clock edge
    // 
    // BEHAVIOR:
    //   - When read_state == READ_DATA && !RVALID:
    //     * Assert RVALID
    //     * Read data from memory: RDATA <= memory[ARADDR[11:2]]]
    //     * Set RRESP=OKAY
    //   - After data handshake: Deassert RVALID, return to IDLE
    // 
    // ADDRESS DECODING:
    //   - ARADDR[11:2]: Word address (10 bits = 1024 words)
    //   - ARADDR[1:0]: Byte offset (not used, always full word read)
    always @(posedge ACLK or negedge ARESETn) begin
        if (!ARESETn) begin
            // ================================================================
            // RESET CONDITION
            // ================================================================
            RVALID <= 1'b0;         // Clear data valid
            RDATA <= 32'h0;         // Clear read data
            RRESP <= 2'b00;         // Clear response (OKAY)
        end else begin
            // ================================================================
            // READ DATA HANDLING
            // ================================================================
            if (read_state == READ_DATA && !RVALID) begin
                // ============================================================
                // PROVIDE READ DATA
                // ============================================================
                // We're in READ_DATA state (address already received)
                // Read data from memory and assert RVALID
                // 
                // MEMORY READ:
                //   - Read data from memory at decoded address
                //   - Address decoding: ARADDR[11:2] = word address
                //   - Example: ARADDR = 0x0000_0010 (byte address)
                //     ARADDR[11:2] = 0x004 (word address = 4)
                //     RDATA <= memory[4]
                RVALID <= 1'b1;     // Assert data valid
                RDATA <= memory[ARADDR[11:2]];  // Read from memory
                RRESP <= 2'b00;     // OKAY response (normal success)
            end else if (RREADY && RVALID) begin
                // ============================================================
                // DATA HANDSHAKE COMPLETE
                // ============================================================
                // Read data has been accepted by master
                // Deassert RVALID and return to IDLE state
                // Read transaction is complete
                RVALID <= 1'b0;    // Deassert data valid
                read_state <= READ_IDLE;    // Return to idle state
            end
        end
    end

endmodule
