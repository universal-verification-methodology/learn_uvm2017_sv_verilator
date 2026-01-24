/**
 * Module 6 Example 6.4: Protocol Checkers
 * Demonstrates simple assertion-style checking for handshake behavior.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand protocol checking in UVM
 *   2. Learn handshake protocol checking
 *   3. Understand timeout-based checking
 *   4. Learn error reporting in checkers
 * 
 * PROTOCOL CHECKER PURPOSE:
 *   - Monitors protocol signals
 *   - Checks protocol compliance
 *   - Reports protocol violations
 *   - Ensures protocol rules are followed
 * 
 * CHECKER PATTERN:
 *   - Watch protocol signals continuously
 *   - Detect protocol events (valid asserted)
 *   - Check protocol rules (valid held until ready)
 *   - Report violations (timeout, protocol errors)
 */
`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================================
// INTERFACE DEFINITION
// ============================================================================
/**
 * chk_if: Simple handshake interface for checker example
 * 
 * INTERFACE SIGNALS:
 *   - clk: Clock signal
 *   - rst_n: Active-low reset
 *   - valid: Valid signal (source asserts when data valid)
 *   - ready: Ready signal (destination asserts when ready)
 */
interface chk_if(input logic clk);
    logic rst_n;   // Active-low reset
    logic valid;   // Valid signal
    logic ready;   // Ready signal
endinterface

// ============================================================================
// CHECKER COMPONENT
// ============================================================================
/**
 * CheckerComp: Protocol checker component
 * 
 * CHECKER PURPOSE:
 *   - Monitors handshake protocol
 *   - Checks protocol rules
 *   - Reports violations
 * 
 * PROTOCOL RULE:
 *   - When valid is asserted, it should remain asserted until ready
 *   - Valid should not be held without ready for too long (timeout)
 *   - This is a simplified checker (real checkers are more complex)
 */
class CheckerComp extends uvm_component;
    virtual chk_if vif;  // Virtual interface
    
    `uvm_component_utils(CheckerComp)
    
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // ====================================================================
        // GET VIRTUAL INTERFACE FROM CONFIGDB
        // ====================================================================
        if (!uvm_config_db#(virtual chk_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NO_VIF", "chk_if not set")
        end
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        
        // ====================================================================
        // CHECKER LOOP
        // ====================================================================
        // 
        // CHECKER BEHAVIOR:
        //   - Continuously monitors protocol signals
        //   - Detects protocol events
        //   - Checks protocol rules
        //   - Reports violations
        forever begin
            @(posedge vif.clk);  // Sample on clock edge
            
            // ================================================================
            // SKIP CHECKING DURING RESET
            // ================================================================
            // 
            // RESET HANDLING:
            //   - Skip checking during reset
            //   - Protocol rules don't apply during reset
            if (!vif.rst_n) continue;
            
            // ================================================================
            // CHECK PROTOCOL RULE: VALID HELD UNTIL READY
            // ================================================================
            // 
            // PROTOCOL RULE:
            //   - When valid is asserted, it should remain asserted until ready
            //   - Valid should not be held without ready for too long
            //   - This checker monitors for timeout violations
            if (vif.valid && !vif.ready) begin
                // ============================================================
                // DETECTED VALID WITHOUT READY
                // ============================================================
                // 
                // PROTOCOL STATE:
                //   - valid = 1, ready = 0
                //   - Valid is asserted but ready is not
                //   - This is allowed, but should not persist too long
                
                // ============================================================
                // TIMEOUT CHECKING
                // ============================================================
                // 
                // TIMEOUT LOGIC:
                //   - Count cycles while valid is held without ready
                //   - If timeout exceeds threshold, report error
                //   - This ensures protocol doesn't stall indefinitely
                // 
                // TIMEOUT PURPOSE:
                //   - Detect protocol stalls
                //   - Identify deadlock conditions
                //   - Ensure protocol responsiveness
                //   - Prevent infinite waiting
                int cycles = 0;  // Cycle counter
                
                // ============================================================
                // WAIT FOR READY WITH TIMEOUT
                // ============================================================
                // 
                // TIMEOUT LOOP:
                //   - Wait for ready signal
                //   - Count cycles
                //   - If timeout (10 cycles), report error
                //   - If ready asserted before timeout, continue
                // 
                // LOOP CONDITIONS:
                //   - vif.valid: Valid still asserted
                //   - !vif.ready: Ready not yet asserted
                //   - cycles < 10: Haven't exceeded timeout
                //   - All conditions must be true to continue
                // 
                // TIMEOUT SCENARIOS:
                //   - Scenario 1: Ready asserted quickly (cycles=1-2)
                //     * Loop exits early, no timeout
                //   - Scenario 2: Ready delayed (cycles=5-8)
                //     * Loop continues, ready eventually asserted
                //   - Scenario 3: Ready never asserted (cycles=10)
                //     * Loop exits at timeout, error reported
                // 
                // TIMING EXAMPLE:
                //   Cycle 0: valid=1, ready=0, cycles=0 (enter loop)
                //   Cycle 1: valid=1, ready=0, cycles=1 (continue)
                //   Cycle 2: valid=1, ready=0, cycles=2 (continue)
                //   ...
                //   Cycle 9: valid=1, ready=0, cycles=9 (continue)
                //   Cycle 10: valid=1, ready=0, cycles=10 (exit, timeout!)
                while (vif.valid && !vif.ready && cycles < 10) begin
                    cycles++;              // Increment cycle counter
                    @(posedge vif.clk);    // Wait for next clock edge
                end
                
                // ============================================================
                // CHECK TIMEOUT VIOLATION
                // ============================================================
                // 
                // TIMEOUT CHECK:
                //   - If valid still held without ready after timeout
                //   - Report protocol violation
                //   - This indicates protocol stall or error
                // 
                // VIOLATION CONDITIONS:
                //   - valid=1: Valid still asserted
                //   - ready=0: Ready still not asserted
                //   - cycles>=10: Timeout exceeded
                //   - All conditions indicate protocol violation
                // 
                // VIOLATION CAUSES:
                //   - Deadlock: Destination never asserts ready
                //   - Protocol error: Invalid protocol state
                //   - Design bug: Ready logic broken
                //   - Testbench issue: Stimulus problem
                // 
                // ERROR REPORTING:
                //   - Reports error with context
                //   - Indicates timeout threshold (10 cycles)
                //   - Helps identify protocol issues
                if (vif.valid && !vif.ready) begin
                    `uvm_error("CHK", "valid held without ready for >10 cycles (example rule)")
                    // 
                    // ERROR EXAMPLE:
                    //   [CHK] valid held without ready for >10 cycles (example rule)
                    //   Indicates: Protocol violation detected
                    //   Action: Investigate ready signal logic
                end
                // 
                // NORMAL CASE (no timeout):
                //   - ready asserted before timeout
                //   - Loop exits early
                //   - No error reported
                //   - Protocol working correctly
            end
        end
    endtask
endclass

// ============================================================================
// TEST CLASS
// ============================================================================
class ProtocolCheckersTest extends uvm_test;
    CheckerComp chk;  // Checker component
    
    `uvm_component_utils(ProtocolCheckersTest)
    
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        chk = CheckerComp::type_id::create("chk", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        #500;  // Run for 500 time units
        phase.drop_objection(this);
    endtask
endclass

// ============================================================================
// TOP-LEVEL MODULE
// ============================================================================
module protocol_checkers;
    logic clk;           // Clock signal
    chk_if vif(clk);     // Interface instance
    
    // ========================================================================
    // CLOCK GENERATION
    // ========================================================================
    initial begin
        clk = 0;
        forever #5 clk = ~clk;  // 10ns period (100MHz)
    end
    
    // ========================================================================
    // PROTOCOL STIMULUS GENERATION
    // ========================================================================
    // 
    // STIMULUS PURPOSE:
    //   - Generate handshake activity for checker to monitor
    //   - Demonstrates valid/ready handshake
    //   - Provides test stimulus
    initial begin
        // ====================================================================
        // INITIALIZE SIGNALS
        // ====================================================================
        vif.rst_n = 0;   // Assert reset
        vif.valid = 0;   // Clear valid
        vif.ready = 0;   // Clear ready
        
        // ====================================================================
        // RESET SEQUENCE
        // ====================================================================
        repeat (3) @(posedge clk);  // Hold reset for 3 cycles
        vif.rst_n = 1;              // Deassert reset
        
        // ====================================================================
        // GENERATE HANDSHAKE ACTIVITY
        // ====================================================================
        // 
        // HANDSHAKE PATTERN:
        //   - Assert valid
        //   - Wait for ready (or wait some cycles)
        //   - Assert ready
        //   - Deassert valid and ready
        //   - Repeat
        repeat (5) begin
            @(posedge clk);
            vif.valid = 1;          // Assert valid
            repeat (2) @(posedge clk);  // Wait 2 cycles
            vif.ready = 1;          // Assert ready (handshake completes)
            @(posedge clk);
            vif.valid = 0;          // Deassert valid
            vif.ready = 0;          // Deassert ready
        end
    end
    
    // ========================================================================
    // UVM TEST SETUP
    // ========================================================================
    initial begin
        // ====================================================================
        // SET VIRTUAL INTERFACE IN CONFIGDB
        // ====================================================================
        uvm_config_db#(virtual chk_if)::set(null, "*", "vif", vif);
        
        // ====================================================================
        // START UVM TEST
        // ====================================================================
        run_test("ProtocolCheckersTest");
    end
endmodule
