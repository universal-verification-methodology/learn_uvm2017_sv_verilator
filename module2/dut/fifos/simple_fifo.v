/**
 * Module 2: Simple FIFO (First-In-First-Out Buffer)
 * 
 * A basic FIFO with read/write pointers implementing a circular buffer.
 * This module demonstrates memory management and pointer arithmetic in hardware.
 * 
 * DESIGN PATTERNS DEMONSTRATED:
 *   - Circular buffer implementation
 *   - Read/write pointer management
 *   - Full/empty flag generation
 *   - Synchronous memory access
 *   - Concurrent read/write operations
 * 
 * VERIFICATION CONSIDERATIONS:
 *   - Full/empty flag accuracy
 *   - Concurrent read/write behavior
 *   - Pointer wrap-around handling
 *   - Overflow/underflow prevention
 *   - Data integrity across operations
 * 
 * HARDWARE IMPLEMENTATION:
 *   - Synthesizes to: 16-entry memory + pointer registers + control logic
 *   - Memory: 16 x 8-bit = 128 bits of storage
 *   - Pointers: 5-bit counters (4 bits for address, 1 extra for wrap detection)
 *   - Flags: Combinational logic from count value
 * 
 * FIFO OPERATION:
 *   - Write: Data stored at write_ptr, pointer increments, count increases
 *   - Read: Data read from read_ptr, pointer increments, count decreases
 *   - Full: When count == 16 (all entries used)
 *   - Empty: When count == 0 (no data available)
 *   - Concurrent: Can read and write simultaneously if not full/empty
 * 
 * Ports:
 *   clk:      Clock signal (positive edge triggered)
 *   rst_n:    Active-low reset (asynchronous reset, synchronous release)
 *   write_en: Write enable (assert to write data)
 *   read_en:  Read enable (assert to read data)
 *   data_in:  Write data (8-bit, stored in FIFO)
 *   data_out: Read data (8-bit, retrieved from FIFO)
 *   full:     FIFO full flag (1 when FIFO is full, prevents overflow)
 *   empty:    FIFO empty flag (1 when FIFO is empty, prevents underflow)
 * 
 * TIMING DIAGRAM:
 *   Clock:     _/‾\_/‾\_/‾\_/‾\_/‾\_
 *   write_en:  __/‾‾\__/‾‾\________
 *   read_en:   ________/‾‾\__/‾‾\__
 *   data_in:   __A__B________________
 *   data_out:  ________A__B__________
 *   count:     00 01 02 01 00 00
 *   full:      00 00 00 00 00 00
 *   empty:     11 00 00 00 11 11
 */

`timescale 1ns/1ps

// ============================================================================
// MODULE DECLARATION
// ============================================================================
module simple_fifo (
    // ========================================================================
    // PORT DECLARATIONS
    // ========================================================================
    input  wire       clk,      // Clock signal (1-bit), positive edge triggered
                              // All operations synchronized to clock edge
    
    input  wire       rst_n,    // Active-low reset (1-bit)
                              // Asynchronous reset: Immediate when low
                              // Synchronous release: Deasserted on clock edge
    
    input  wire       write_en, // Write enable (1-bit)
                              // Assert (1) to write data_in to FIFO
                              // Must be deasserted when full (no overflow)
    
    input  wire       read_en,  // Read enable (1-bit)
                              // Assert (1) to read data from FIFO
                              // Must be deasserted when empty (no underflow)
    
    input  wire [7:0] data_in,  // Write data (8-bit)
                              // Data to be stored in FIFO
                              // Valid when write_en is asserted
    
    output reg  [7:0] data_out, // Read data (8-bit)
                              // Data retrieved from FIFO
                              // Valid after read_en is asserted
    
    output reg        full,     // FIFO full flag (1-bit)
                              // 1 = FIFO is full (count == 16)
                              // Prevents write operations (overflow protection)
    
    output reg        empty     // FIFO empty flag (1-bit)
                              // 1 = FIFO is empty (count == 0)
                              // Prevents read operations (underflow protection)
);

    // ========================================================================
    // INTERNAL SIGNALS
    // ========================================================================
    // Memory array: 16 entries, each 8 bits wide
    // 'reg [7:0] mem [0:15]' means: array of 16 elements, each 8 bits
    // Index range: 0 to 15 (requires 4 address bits: [3:0])
    // Total storage: 16 x 8 = 128 bits
    reg [7:0] mem [0:15];  // 16-entry FIFO memory buffer
    
    // Write pointer: Points to next location to write
    // 'reg [4:0]' means 5-bit register (bits 4 down to 0)
    // Why 5 bits? 4 bits for address (0-15), 1 extra bit for wrap detection
    // Pointer wraps: 15 -> 16 -> 0 (16 mod 16 = 0)
    // Bits [3:0] used for memory address, bit [4] for wrap-around detection
    reg [4:0] write_ptr;  // Write pointer (5-bit for wrap detection)
    
    // Read pointer: Points to next location to read
    // Same structure as write_ptr
    // Pointer wraps: 15 -> 16 -> 0
    reg [4:0] read_ptr;   // Read pointer (5-bit for wrap detection)
    
    // Count: Number of valid entries in FIFO
    // 'reg [4:0]' means 5-bit register
    // Range: 0 to 16 (requires 5 bits: 0-16 = 17 values)
    // Used to generate full/empty flags
    reg [4:0] count;      // Entry count (0 to 16)

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
            // Asynchronous reset: Initialize all state to known values
            // Pointers reset to 0 (start of buffer)
            write_ptr <= 5'h0;  // Write pointer = 0
            read_ptr <= 5'h0;   // Read pointer = 0
            count <= 5'h0;      // Count = 0 (FIFO is empty)
            full <= 1'b0;       // Not full
            empty <= 1'b1;      // Empty (no data in FIFO)
        end else begin
            // ========================================================================
            // NORMAL OPERATION
            // ========================================================================
            // Write operation: Store data when enabled and not full
            // 
            // WRITE CONDITIONS:
            //   - write_en must be asserted (1)
            //   - FIFO must not be full (!full)
            //   - Both conditions must be true (logical AND)
            // 
            // WRITE PROCESS:
            //   1. Store data_in at write_ptr location
            //   2. Increment write_ptr (wrap around if needed)
            //   3. Increment count (one more entry in FIFO)
            // 
            // CONCURRENT OPERATIONS:
            //   - Write and read can occur simultaneously if conditions allow
            //   - Example: write_en=1, read_en=1, count=8 (not full, not empty)
            //   - Both operations execute in same clock cycle
            //   - Write increments count, read decrements count
            //   - Net effect: count remains same (8 -> 9 -> 8)
            // 
            // OVERFLOW PREVENTION:
            //   - !full check prevents writing when FIFO is full
            //   - If write_en=1 and full=1, write is ignored (no overflow)
            //   - Best practice: Testbench should not assert write_en when full=1
            //   - Hardware protection: This check prevents data corruption
            if (write_en && !full) begin
                // Store data in memory at write pointer location
                // 'write_ptr[3:0]' extracts bits 3-0 (4-bit address for 16-entry array)
                // Bit [4] is ignored for addressing (used only for wrap detection)
                // 
                // MEMORY INDEXING:
                //   - write_ptr = 0: mem[0] stores data
                //   - write_ptr = 15: mem[15] stores data
                //   - write_ptr = 16: mem[0] stores data (wraps: 16 mod 16 = 0)
                //   - write_ptr = 31: mem[15] stores data (wraps: 31 mod 16 = 15)
                // 
                // NON-BLOCKING ASSIGNMENT:
                //   - '<=' ensures all assignments happen simultaneously
                //   - Prevents race conditions in simulation
                //   - Models actual hardware register behavior
                mem[write_ptr[3:0]] <= data_in;  // Write data to memory
                
                // Increment write pointer (wraps: 15 -> 0)
                // 
                // POINTER WRAP-AROUND:
                //   - write_ptr increments: 0, 1, 2, ..., 15, 16, 17, ...
                //   - Memory address uses bits [3:0]: 0, 1, 2, ..., 15, 0, 1, ...
                //   - Bit [4] tracks wrap: 0->15 (bit[4]=0), 16->31 (bit[4]=1)
                //   - This allows distinguishing full vs empty when pointers equal
                // 
                // EXAMPLE SEQUENCE:
                //   Cycle 0: write_ptr=0, write data A -> mem[0]=A, write_ptr=1
                //   Cycle 1: write_ptr=1, write data B -> mem[1]=B, write_ptr=2
                //   ...
                //   Cycle 15: write_ptr=15, write data P -> mem[15]=P, write_ptr=16
                //   Cycle 16: write_ptr=16, write data Q -> mem[0]=Q, write_ptr=17 (wrapped!)
                write_ptr <= write_ptr + 1;      // Advance write pointer
                
                // Increment entry count
                // 
                // COUNT MANAGEMENT:
                //   - Count tracks number of valid entries
                //   - Increments on write, decrements on read
                //   - Range: 0 to 16
                //   - Used for full/empty flag generation
                // 
                // COUNT EDGE CASES:
                //   - count=0: FIFO empty (no data)
                //   - count=16: FIFO full (all entries used)
                //   - count=1: One entry (can read, can write if not full)
                //   - Concurrent read+write: count may stay same
                count <= count + 1;              // One more entry
            end
            
            // Read operation: Retrieve data when enabled and not empty
            // 
            // READ CONDITIONS:
            //   - read_en must be asserted (1)
            //   - FIFO must not be empty (!empty)
            //   - Both conditions must be true (logical AND)
            // 
            // READ PROCESS:
            //   1. Read data from read_ptr location
            //   2. Increment read_ptr (wrap around if needed)
            //   3. Decrement count (one less entry in FIFO)
            if (read_en && !empty) begin
                // Read data from memory at read pointer location
                // 'read_ptr[3:0]' extracts bits 3-0 (4-bit address)
                data_out <= mem[read_ptr[3:0]];   // Read data from memory
                // Increment read pointer (wraps: 15 -> 0)
                read_ptr <= read_ptr + 1;        // Advance read pointer
                // Decrement entry count
                count <= count - 1;              // One less entry
            end
            
            // ========================================================================
            // FLAG GENERATION
            // ========================================================================
            // Update full and empty flags based on count
            // 
            // FLAG TIMING:
            //   - Flags are registered (updated on clock edge)
            //   - They reflect FIFO state AFTER read/write operations
            //   - Updated every clock cycle (even if no read/write)
            //   - Used by external logic to prevent overflow/underflow
            // 
            // FULL FLAG:
            //   - Set when count == 16 (all entries used)
            //   - Prevents further writes (overflow protection)
            //   - Combinational logic: full = (count == 16)
            // 
            // FULL FLAG BEHAVIOR:
            //   - count=15, write -> count=16, full=1 (prevents next write)
            //   - count=16, read -> count=15, full=0 (allows next write)
            //   - Critical: Must check !full before writing
            // 
            // SYNTHESIS:
            //   - Synthesizes to: 5-bit comparator (count == 16)
            //   - Hardware: Comparator output registered in flip-flop
            //   - Timing: Flag available one cycle after count changes
            full <= (count == 16);   // Full when all 16 entries are used
                                    // Registered output (available next cycle)
            
            // EMPTY FLAG:
            //   - Set when count == 0 (no data available)
            //   - Prevents further reads (underflow protection)
            //   - Combinational logic: empty = (count == 0)
            // 
            // EMPTY FLAG BEHAVIOR:
            //   - count=1, read -> count=0, empty=1 (prevents next read)
            //   - count=0, write -> count=1, empty=0 (allows next read)
            //   - Critical: Must check !empty before reading
            // 
            // SYNTHESIS:
            //   - Synthesizes to: 5-bit comparator (count == 0)
            //   - Hardware: Comparator output registered in flip-flop
            //   - Timing: Flag available one cycle after count changes
            empty <= (count == 0);   // Empty when count is zero
                                    // Registered output (available next cycle)
            
            // NOTE: Flags are updated every clock cycle
            //       They reflect the state AFTER read/write operations
            // 
            // ALTERNATIVE IMPLEMENTATION (Combinational Flags):
            //   // Flags could be combinational for immediate response:
            //   assign full = (count == 16);   // Available immediately
            //   assign empty = (count == 0);    // Available immediately
            //   // Trade-off: Faster response vs more combinational logic
            // 
            // COMMON PITFALLS:
            //   1. Writing when full=1: Data lost, count incorrect
            //   2. Reading when empty=1: Invalid data, count incorrect
            //   3. Not checking flags: Can cause overflow/underflow
            //   4. Race conditions: Concurrent read+write need careful handling
            //   5. Pointer wrap: Must use modulo for address calculation
        end
    end

// ============================================================================
// END OF MODULE
// ============================================================================
// 
// SYNTHESIS NOTES:
//   - Memory: Synthesizes to block RAM or distributed RAM (tool-dependent)
//     * Block RAM: Used for larger FIFOs (typically > 64 entries)
//     * Distributed RAM: Used for smaller FIFOs (typically < 64 entries)
//     * This 16-entry FIFO likely uses distributed RAM (LUT-based)
//   - Pointers: Synthesize to 5-bit counters with wrap logic
//     * Hardware: 5-bit up counters with modulo-16 wrap
//     * Logic: Increment with automatic wrap (no explicit modulo needed)
//   - Flags: Synthesize to comparators (count == 16, count == 0)
//     * Hardware: 5-bit equality comparators + registers
//     * Timing: Flags available one cycle after count changes
//   - Clock domain: Single clock domain (clk)
//     * All operations synchronized to same clock
//     * No clock domain crossing (CDC) issues
//   - Reset domain: Asynchronous reset (rst_n)
//     * Reset assertion: Immediate (asynchronous)
//     * Reset deassertion: Synchronized to clock (synchronous release)
// 
// AREA ESTIMATE (typical FPGA):
//   - Memory: 16 x 8 = 128 bits (distributed RAM: ~128 LUTs)
//   - Pointers: 2 x 5-bit = 10 flip-flops
//   - Count: 5-bit = 5 flip-flops
//   - Flags: 2 x 1-bit = 2 flip-flops
//   - Comparators: 2 x 5-bit = ~20 LUTs
//   - Total: ~17 flip-flops + ~148 LUTs
// 
// TIMING ANALYSIS:
//   - Critical path: Memory read -> data_out (combinational)
//   - Setup time: write_en, read_en, data_in must be stable before clock edge
//   - Hold time: Signals must remain stable after clock edge
//   - Clock-to-output: data_out, full, empty available after clock edge
// 
// VERIFICATION CHECKLIST:
//   - [ ] Reset initializes FIFO to empty state
//     * All pointers = 0, count = 0, flags correct
//   - [ ] Write operation stores data correctly
//     * Data stored at correct address, pointer increments
//   - [ ] Read operation retrieves data in FIFO order
//     * First-in-first-out order maintained
//   - [ ] Full flag prevents overflow
//     * Write when full=1 is ignored, no data corruption
//   - [ ] Empty flag prevents underflow
//     * Read when empty=1 is ignored, no invalid data
//   - [ ] Concurrent read/write works correctly
//     * Both operations in same cycle, count updates correctly
//   - [ ] Pointer wrap-around handled correctly
//     * Pointers wrap from 15->0, addresses calculated correctly
//   - [ ] Count accuracy maintained
//     * Count always equals number of valid entries
//   - [ ] Data integrity preserved
//     * No data loss, no corruption, correct ordering
//   - [ ] Edge cases: Write when full, read when empty
//   - [ ] Stress test: Fill to full, empty completely, repeat
// 
// DEBUGGING TIPS:
//   1. Monitor count, write_ptr, read_ptr in waveforms
//   2. Check that count = (write_ptr - read_ptr) mod 16
//   3. Verify flags match count: full=(count==16), empty=(count==0)
//   4. Watch for pointer wrap: write_ptr/read_ptr transition 15->0
//   5. Check concurrent operations: read+write in same cycle
//   6. Verify data ordering: First written = first read
// 
// COMMON BUGS TO WATCH FOR:
//   1. Off-by-one errors in count calculation
//   2. Pointer wrap not handled correctly
//   3. Flags not updated correctly
//   4. Race conditions in concurrent read/write
//   5. Memory indexing errors (wrong bit range)
//   6. Reset not initializing all state
// 
// PERFORMANCE OPTIMIZATIONS:
//   - Use block RAM for larger FIFOs (better area efficiency)
//   - Pipeline flag generation for faster response
//   - Use Gray code for pointers (reduces power in comparison)
//   - Add almost-full/almost-empty flags for flow control
// 
// KNOWN LIMITATIONS:
//   - No almost-full/almost-empty flags (only full/empty)
//   - No programmable depth (fixed at 16 entries)
//   - Fixed 8-bit data width (not parameterized)
//   - No error reporting for overflow/underflow attempts
//   - No watermark levels for flow control
//   - Single clock domain only (no CDC support)
// 
// EXTENSIONS FOR PRODUCTION USE:
//   - Parameterize depth and data width
//   - Add almost-full/almost-empty flags
//   - Add overflow/underflow error flags
//   - Support different pointer schemes (Gray code, binary)
//   - Add synchronous/asynchronous read/write options
//   - Support multiple clock domains (CDC FIFO)
endmodule
