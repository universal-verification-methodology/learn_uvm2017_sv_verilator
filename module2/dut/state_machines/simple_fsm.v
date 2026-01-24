/**
 * Module 2: Simple Finite State Machine (FSM)
 * 
 * A basic state machine with 4 states implementing a simple processing sequence.
 * This module demonstrates Mealy/Moore FSM implementation in SystemVerilog.
 * 
 * DESIGN PATTERNS DEMONSTRATED:
 *   - Finite State Machine (FSM) implementation
 *   - State encoding (binary encoding)
 *   - State transition logic
 *   - Output generation based on state
 *   - Default case for safe state machine
 * 
 * VERIFICATION CONSIDERATIONS:
 *   - All state transitions must be tested
 *   - State encoding verification
 *   - Illegal state handling (default case)
 *   - Reset state verification
 *   - Output correctness in each state
 * 
 * HARDWARE IMPLEMENTATION:
 *   - Synthesizes to: 2 flip-flops (state register) + combinational logic
 *   - State register: 2 bits (4 states: 00, 01, 10, 11)
 *   - Next state logic: Combinational (case statement)
 *   - Output logic: Combinational (done signal)
 * 
 * STATE MACHINE TYPE:
 *   - Moore FSM: Output depends only on current state
 *   - In this design: done signal depends on state (Moore)
 *   - State transitions: Synchronous (on clock edge)
 * 
 * STATE DIAGRAM:
 *   IDLE --[start]--> START --[auto]--> WORK --[auto]--> DONE --[auto]--> IDLE
 *     ^                                                                      |
 *     |                                                                      |
 *     +------------------------[reset]--------------------------------------+
 * 
 * STATE DESCRIPTIONS:
 *   - IDLE (00): Initial state, waiting for start signal
 *   - START (01): Processing started, first phase
 *   - WORK (10): Active processing, second phase
 *   - DONE (11): Processing complete, done signal asserted
 * 
 * Ports:
 *   clk:    Clock signal (positive edge triggered)
 *   rst_n:  Active-low reset (asynchronous reset, synchronous release)
 *   start:  Start signal (input, triggers state machine from IDLE)
 *   done:   Done signal (output, asserted in DONE state)
 *   state:  Current state output (2-bit, encoded state value)
 * 
 * TIMING DIAGRAM:
 *   Clock:     _/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_/‾\_
 *   rst_n:     ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 *   start:     ________/‾‾\____________________
 *   state:     00 00 00 01 10 11 00 00 00
 *   done:      00 00 00 00 00 00 11 00 00
 */

`timescale 1ns/1ps

// ============================================================================
// MODULE DECLARATION
// ============================================================================
module simple_fsm (
    // ========================================================================
    // PORT DECLARATIONS
    // ========================================================================
    input  wire       clk,    // Clock signal (1-bit), positive edge triggered
                              // All state transitions synchronized to clock
    
    input  wire       rst_n,  // Active-low reset (1-bit)
                              // Asynchronous reset: Immediate when low
                              // Synchronous release: Deasserted on clock edge
    
    input  wire       start,  // Start signal (1-bit)
                              // Triggers state machine from IDLE state
                              // Sampled in IDLE state on clock edge
    
    output reg        done,   // Done signal (1-bit)
                              // Asserted (1) when in DONE state
                              // Deasserted (0) in all other states
    
    output reg  [1:0] state   // Current state output (2-bit)
                              // Encoded state value (00=IDLE, 01=START, 10=WORK, 11=DONE)
                              // Useful for debugging and monitoring
);

    // ========================================================================
    // STATE ENCODING
    // ========================================================================
    // State encoding: Binary encoding (2 bits for 4 states)
    // 
    // ENCODING SCHEME:
    //   - Binary encoding: Each state has unique 2-bit code
    //   - Alternative: One-hot encoding (4 bits, only one bit set)
    //   - Alternative: Gray encoding (only one bit changes per transition)
    // 
    // 'localparam' defines compile-time constants (cannot be overridden)
    // Format: localparam <name> = <value>;
    // 
    // State values:
    localparam IDLE  = 2'b00;  // State 0: Idle state (waiting for start)
    localparam START = 2'b01;  // State 1: Start state (processing begins)
    localparam WORK  = 2'b10;  // State 2: Work state (active processing)
    localparam DONE  = 2'b11;  // State 3: Done state (processing complete)

    // ============================================================================
    // SEQUENTIAL LOGIC BLOCK
    // ============================================================================
    // Sequential logic: executes on clock edge or reset edge
    // '@(posedge clk or negedge rst_n)' sensitivity list:
    //   - 'posedge clk': Synchronous state transitions on clock edge
    //   - 'negedge rst_n': Asynchronous reset on reset edge
    always @(posedge clk or negedge rst_n) begin
        // ========================================================================
        // RESET CONDITION (HIGHEST PRIORITY)
        // ========================================================================
        if (!rst_n) begin
            // Asynchronous reset: Return to initial state
            state <= IDLE;     // Reset to IDLE state (initial state)
            done <= 1'b0;      // Deassert done signal
        end else begin
            // ========================================================================
            // STATE TRANSITION LOGIC
            // ========================================================================
            // Case statement: Implements state transition logic
            // 'case' statement: Multi-way branch based on state value
            // Each state has its own transition logic
            case (state)
                // ====================================================================
                // IDLE STATE: Waiting for start signal
                // ====================================================================
                IDLE: begin
                    // Conditional transition: Only if start signal is asserted
                    // 
                    // STATE BEHAVIOR:
                    //   - IDLE is the initial/reset state
                    //   - Waits indefinitely until start signal is asserted
                    //   - No timeout: Will wait forever if start never comes
                    //   - Self-loop: If start=0, remains in IDLE
                    // 
                    // START SIGNAL REQUIREMENTS:
                    //   - Must be asserted (1) to trigger transition
                    //   - Sampled on clock edge (synchronous input)
                    //   - Setup time: start must be stable before clock edge
                    //   - Hold time: start must remain stable after clock edge
                    //   - Pulse width: Must be asserted for at least one clock cycle
                    // 
                    // TRANSITION CONDITION:
                    //   - if (start): Checks if start signal is 1
                    //   - If true: Transition to START state
                    //   - If false: Remain in IDLE (implicit hold)
                    if (start) begin
                        // Transition to START state
                        // 
                        // STATE TRANSITION:
                        //   - Current state: IDLE (2'b00)
                        //   - Next state: START (2'b01)
                        //   - State change: Only bit[0] changes (0->1)
                        //   - This is a safe transition (only one bit changes)
                        state <= START;  // Move to START state
                        
                        // Output update: Done signal deasserted
                        // 
                        // OUTPUT BEHAVIOR:
                        //   - done=0 in all states except DONE
                        //   - Explicitly set here for clarity
                        //   - Could be omitted (would default to 0)
                        done <= 1'b0;   // Done not asserted
                    end
                    // If start not asserted: Remain in IDLE (implicit)
                    // 
                    // IMPLICIT HOLD BEHAVIOR:
                    //   - No assignment to 'state' when start=0
                    //   - Register automatically holds current value
                    //   - This creates the self-loop in state diagram
                    //   - FSM waits in IDLE until start is asserted
                    // 
                    // TIMING EXAMPLE:
                    //   Cycle 0: state=IDLE, start=0 -> state=IDLE (holds)
                    //   Cycle 1: state=IDLE, start=0 -> state=IDLE (holds)
                    //   Cycle 2: state=IDLE, start=1 -> state=START (transitions)
                end
                
                // ====================================================================
                // START STATE: First phase of processing
                // ====================================================================
                START: begin
                    // Unconditional transition: Always move to WORK state
                    // This state is transient (spends only one clock cycle here)
                    state <= WORK;   // Move to WORK state
                    done <= 1'b0;    // Done not asserted
                end
                
                // ====================================================================
                // WORK STATE: Active processing phase
                // ====================================================================
                WORK: begin
                    // Unconditional transition: Always move to DONE state
                    // This state is transient (spends only one clock cycle here)
                    state <= DONE;   // Move to DONE state
                    done <= 1'b0;    // Done not asserted yet
                end
                
                // ====================================================================
                // DONE STATE: Processing complete
                // ====================================================================
                DONE: begin
                    // Unconditional transition: Return to IDLE state
                    // Processing cycle complete, ready for next start
                    state <= IDLE;   // Return to IDLE state
                    done <= 1'b1;    // Assert done signal (processing complete)
                end
                
                // ====================================================================
                // DEFAULT CASE: Safety net for illegal states
                // ====================================================================
                // Default case: Handles any state value not explicitly listed
                // This provides safety for:
                //   - Simulation glitches
                //   - Synthesis tool optimizations
                //   - Power-up unknown states
                //   - Design errors
                // 
                // Best Practice: Always include default case in state machines
                default: begin
                    // Recovery: Return to safe state (IDLE)
                    state <= IDLE;   // Recover to IDLE state
                    done <= 1'b0;    // Deassert done signal
                end
            endcase  // End of case statement
        end
    end

// ============================================================================
// END OF MODULE
// ============================================================================
// 
// SYNTHESIS NOTES:
//   - This module synthesizes to: 2 flip-flops + combinational logic
//   - State register: 2 bits (stores current state)
//     * Hardware: 2 D-type flip-flops
//     * Encoding: Binary (00, 01, 10, 11)
//   - Next state logic: Combinational (case statement)
//     * Hardware: Multiplexer selecting next state based on current state
//     * Logic: ~20-30 LUTs (depends on synthesis tool)
//   - Output logic: Combinational (done signal generation)
//     * Hardware: Simple combinational logic (done = (state == DONE))
//     * Could be: done = (state[1] && state[0])  // state == 2'b11
//   - Clock domain: Single clock domain (clk)
//     * All state transitions synchronized to same clock
//   - Reset domain: Asynchronous reset (rst_n)
//     * Reset assertion: Immediate (asynchronous)
//     * Reset deassertion: Synchronized to clock (synchronous release)
// 
// AREA ESTIMATE (typical FPGA):
//   - State register: 2 flip-flops
//   - Next state logic: ~25 LUTs (case statement + conditions)
//   - Output logic: ~2 LUTs (done signal)
//   - Total: ~2 flip-flops + ~27 LUTs
// 
// TIMING ANALYSIS:
//   - Critical path: Current state -> Next state logic -> State register
//   - Setup time: start signal must be stable before clock edge
//   - Hold time: start signal must remain stable after clock edge
//   - Clock-to-output: done signal available after clock edge
//   - Maximum frequency: Limited by combinational logic delay
// 
// STATE ENCODING COMPARISON:
//   - Binary (current): 2 bits, 4 states
//     * Pros: Minimal flip-flops, simple encoding
//     * Cons: Multiple bits change per transition (glitch risk)
//   - One-hot: 4 bits, 4 states (only one bit = 1)
//     * Pros: Simple next-state logic, no glitches
//     * Cons: More flip-flops (4 vs 2), more area
//   - Gray code: 2 bits, only one bit changes
//     * Pros: Reduced glitches, power efficient
//     * Cons: More complex encoding logic
// 
// VERIFICATION CHECKLIST:
//   - [ ] Reset returns FSM to IDLE state
//     * All state bits = 0, done = 0
//   - [ ] IDLE -> START transition on start signal
//     * start=1 causes transition, start=0 holds in IDLE
//   - [ ] START -> WORK transition (automatic)
//     * Always transitions after one cycle
//   - [ ] WORK -> DONE transition (automatic)
//     * Always transitions after one cycle
//   - [ ] DONE -> IDLE transition (automatic)
//     * Always transitions after one cycle, done=1 asserted
//   - [ ] Done signal asserted only in DONE state
//     * done=1 only when state=DONE, done=0 otherwise
//   - [ ] Default case handles illegal states
//     * Any illegal state (e.g., from glitch) recovers to IDLE
//   - [ ] State encoding is correct
//     * IDLE=00, START=01, WORK=10, DONE=11
//   - [ ] No state machine lockup
//     * FSM always progresses or returns to IDLE
//   - [ ] Start signal timing
//     * Setup/hold time requirements met
//   - [ ] Complete cycle test
//     * IDLE -> START -> WORK -> DONE -> IDLE cycle works
//   - [ ] Multiple cycles
//     * FSM can complete multiple processing cycles
// 
// DEBUGGING TIPS:
//   1. Monitor state register in waveforms
//   2. Check state transitions match state diagram
//   3. Verify done signal timing (asserted in DONE state)
//   4. Watch for illegal states (should recover via default)
//   5. Check start signal timing (setup/hold)
//   6. Verify reset behavior (returns to IDLE)
//   7. Monitor state encoding (should be 00, 01, 10, 11)
// 
// COMMON BUGS TO WATCH FOR:
//   1. Missing default case (can cause lockup)
//   2. Incorrect state encoding values
//   3. Output not updated in all states
//   4. State transition conditions wrong
//   5. Reset not returning to initial state
//   6. Race conditions in state transitions
//   7. Glitches in state encoding
// 
// STATE MACHINE CHARACTERISTICS:
//   - Type: Moore FSM (output depends only on state)
//     * done = f(state) only, not f(state, inputs)
//     * Alternative: Mealy FSM would have done = f(state, inputs)
//   - Encoding: Binary (2 bits)
//     * 4 states encoded in 2 bits
//     * Minimum encoding for 4 states
//   - States: 4 states
//     * IDLE, START, WORK, DONE
//   - Transitions: Mostly automatic (except IDLE -> START)
//     * Only IDLE -> START requires input (start signal)
//     * All other transitions are automatic (unconditional)
//   - Cycle: IDLE -> START -> WORK -> DONE -> IDLE
//     * Processing cycle: 4 clock cycles
//     * Can repeat indefinitely
// 
// PERFORMANCE OPTIMIZATIONS:
//   - Use one-hot encoding for faster synthesis
//   - Pipeline state transitions for higher frequency
//   - Add state output encoding for debugging
//   - Use Gray code for reduced power consumption
// 
// EXTENSIONS FOR PRODUCTION USE:
//   - Add error states for fault handling
//   - Add timeout states for stuck detection
//   - Parameterize number of states
//   - Add state history for debugging
//   - Support state injection for testing
//   - Add state coverage collection
endmodule
