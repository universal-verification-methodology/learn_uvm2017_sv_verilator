/**
 * Module 7 Example 7.5: VIP Development (skeleton)
 * Demonstrates how a protocol VIP might be packaged: txn + seq + agent.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand VIP (Verification IP) structure
 *   2. Learn VIP packaging patterns
 *   3. Understand reusable VIP components
 *   4. Learn VIP agent structure
 *   5. Understand VIP transaction modeling
 * 
 * VIP STRUCTURE:
 *   - Transaction: VipTxn (protocol-specific data)
 *   - Sequence: VipSeq (transaction generation)
 *   - Driver: VipDriver (protocol driving)
 *   - Agent: VipAgent (complete VIP component)
 * 
 * VIP PACKAGING:
 *   - Self-contained verification component
 *   - Reusable across multiple projects
 *   - Standard UVM structure
 *   - Protocol-specific implementation
 */
`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================================
// TRANSACTION CLASS
// ============================================================================
/**
 * VipTxn: VIP transaction class
 * 
 * TRANSACTION PURPOSE:
 *   - Represents protocol-specific transaction
 *   - Contains payload data
 *   - Can be extended for specific protocols
 */
class VipTxn extends uvm_sequence_item;
    rand bit [7:0] payload;  // Payload data (8-bit)
                              // Protocol-specific data
    
    `uvm_object_utils(VipTxn)
    
    function new(string n="VipTxn");
        super.new(n);
    endfunction
endclass

// ============================================================================
// SEQUENCE CLASS
// ============================================================================
/**
 * VipSeq: VIP sequence class
 * 
 * SEQUENCE PURPOSE:
 *   - Generates VIP transactions
 *   - Can be extended for specific test scenarios
 *   - Standard sequence pattern
 */
class VipSeq extends uvm_sequence #(VipTxn);
    `uvm_object_utils(VipSeq)
    
    function new(string n="VipSeq");
        super.new(n);
    endfunction
    
    task body();
        VipTxn t;
        repeat (5) begin
            t = VipTxn::type_id::create("t");
            /* verilator lint_off IGNOREDRETURN */
            void'(t.randomize());
            /* verilator lint_on IGNOREDRETURN */
            start_item(t);
            finish_item(t);
        end
    endtask
endclass

// ============================================================================
// DRIVER CLASS
// ============================================================================
/**
 * VipDriver: VIP driver class
 * 
 * DRIVER PURPOSE:
 *   - Drives protocol-specific signals
 *   - Implements protocol timing
 *   - Can be extended for specific protocols
 */
class VipDriver extends uvm_driver #(VipTxn);
    `uvm_component_utils(VipDriver)
    
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    task run_phase(uvm_phase phase);
        VipTxn t;
        forever begin
            seq_item_port.get_next_item(t);
            
            // ====================================================================
            // DRIVE PROTOCOL SIGNALS
            // ====================================================================
            // 
            // DRIVING LOGIC:
            //   - In real VIP: Drive protocol-specific signals
            //   - This example: Simplified (just log)
            //   - Real implementation: Protocol-specific driving
            `uvm_info("VIP_DRV", $sformatf("drive payload=0x%02h", t.payload), UVM_MEDIUM)
            
            // ====================================================================
            // PROTOCOL TIMING
            // ====================================================================
            // 
            // TIMING DELAY:
            //   - In real VIP: Wait for protocol timing
            //   - This example: Simple delay
            //   - Real implementation: Protocol-specific timing
            #10;  // Simulate protocol timing
            
            seq_item_port.item_done();
        end
    endtask
endclass

// ============================================================================
// AGENT CLASS
// ============================================================================
/**
 * VipAgent: VIP agent class
 * 
 * AGENT PURPOSE:
 *   - Complete VIP component
 *   - Contains sequencer and driver
 *   - Can be extended with monitor, coverage, etc.
 *   - Reusable verification component
 */
class VipAgent extends uvm_agent;
    uvm_sequencer #(VipTxn) seqr;  // Sequencer
    VipDriver drv;                 // Driver
    
    `uvm_component_utils(VipAgent)
    
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        seqr = uvm_sequencer#(VipTxn)::type_id::create("seqr", this);
        drv  = VipDriver::type_id::create("drv", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        drv.seq_item_port.connect(seqr.seq_item_export);
    endfunction
endclass

// ============================================================================
// TEST CLASS
// ============================================================================
class VipTest extends uvm_test;
    VipAgent agent;  // VIP agent
    
    `uvm_component_utils(VipTest)
    
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        agent = VipAgent::type_id::create("agent", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        VipSeq seq;
        phase.raise_objection(this);
        seq = VipSeq::type_id::create("seq");
        seq.start(agent.seqr);
        #200;  // Wait for transactions to complete
        phase.drop_objection(this);
    endtask
endclass

// ============================================================================
// TOP-LEVEL MODULE
// ============================================================================
module vip;
    initial run_test("VipTest");
endmodule
