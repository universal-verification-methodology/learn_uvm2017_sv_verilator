/**
 * Module 7 Example 7.1: DMA Verification (skeleton)
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand DMA verification patterns
 *   2. Learn DMA transaction modeling
 *   3. Understand DMA driver implementation
 *   4. Learn DMA sequence generation
 *   5. Understand DMA testbench structure
 * 
 * DMA VERIFICATION:
 *   - DMA (Direct Memory Access) controller verification
 *   - Transfer initiation and completion
 *   - Address and length configuration
 *   - Channel selection
 *   - Transfer counting and completion detection
 */
`include "uvm_macros.svh"
import uvm_pkg::*;
`timescale 1ns/1ps

// ============================================================================
// INTERFACE DEFINITION
// ============================================================================
/**
 * dma_if: DMA interface
 * 
 * INTERFACE SIGNALS:
 *   - clk: Clock signal
 *   - rst_n: Active-low reset
 *   - dma_start: Start DMA transfer
 *   - dma_done: DMA transfer complete
 *   - dma_src_addr: Source address
 *   - dma_dst_addr: Destination address
 *   - dma_length: Transfer length
 *   - dma_channel: DMA channel select
 */
interface dma_if(input logic clk);
    logic rst_n;                // Active-low reset
    logic dma_start;            // Start DMA transfer
    logic dma_done;             // DMA transfer complete
    logic [31:0] dma_src_addr;  // Source address
    logic [31:0] dma_dst_addr;  // Destination address
    logic [15:0] dma_length;    // Transfer length
    logic [2:0]  dma_channel;   // DMA channel select
endinterface

// ============================================================================
// TRANSACTION CLASS
// ============================================================================
/**
 * DmaTxn: DMA transaction class
 * 
 * TRANSACTION FIELDS:
 *   - src: Source address (32-bit)
 *   - dst: Destination address (32-bit)
 *   - len: Transfer length (16-bit)
 *   - ch: Channel (3-bit)
 */
class DmaTxn extends uvm_sequence_item;
    rand bit [31:0] src;  // Source address
    rand bit [31:0] dst;  // Destination address
    rand bit [15:0] len;  // Transfer length
    rand bit [2:0]  ch;   // Channel
    
    `uvm_object_utils(DmaTxn)
    
    function new(string n="DmaTxn");
        super.new(n);
    endfunction
endclass

// ============================================================================
// SEQUENCE CLASS
// ============================================================================
class DmaSeq extends uvm_sequence #(DmaTxn);
    `uvm_object_utils(DmaSeq)
    
    function new(string n="DmaSeq");
        super.new(n);
    endfunction
    
    task body();
        DmaTxn t;
        repeat (3) begin
            t = DmaTxn::type_id::create("t");
            /* verilator lint_off IGNOREDRETURN */
            void'(t.randomize() with { len inside {[1:20]}; });
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
 * DmaDriver: DMA driver
 * 
 * DRIVER PURPOSE:
 *   - Drives DMA transfer signals
 *   - Configures DMA parameters
 *   - Waits for transfer completion
 */
class DmaDriver extends uvm_driver #(DmaTxn);
    virtual dma_if vif;  // Virtual interface
    
    `uvm_component_utils(DmaDriver)
    
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(virtual dma_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NO_VIF", "dma_if not set")
        end
    endfunction
    
    task run_phase(uvm_phase phase);
        DmaTxn t;
        
        // ====================================================================
        // INITIALIZE SIGNALS
        // ====================================================================
        vif.dma_start <= 0;
        
        forever begin
            seq_item_port.get_next_item(t);
            
            // ================================================================
            // CONFIGURE DMA PARAMETERS
            // ================================================================
            @(posedge vif.clk);
            vif.dma_src_addr <= t.src;    // Set source address
            vif.dma_dst_addr <= t.dst;    // Set destination address
            vif.dma_length   <= t.len;    // Set transfer length
            vif.dma_channel  <= t.ch;     // Set channel
            
            // ================================================================
            // START DMA TRANSFER
            // ================================================================
            vif.dma_start    <= 1;        // Assert start signal
            
            // ================================================================
            // DEASSERT START SIGNAL
            // ================================================================
            @(posedge vif.clk);
            vif.dma_start    <= 0;        // Deassert start (pulse)
            
            // ================================================================
            // WAIT FOR TRANSFER COMPLETION
            // ================================================================
            // 
            // COMPLETION WAIT:
            //   - Wait for dma_done signal
            //   - Transfer completes when dma_done asserted
            //   - Loop until done signal received
            // 
            // WAIT PATTERN:
            //   - do-while loop: Wait for clock edge, check done signal
            //   - Continues until dma_done = 1
            //   - Blocks until transfer completes
            // 
            // TIMING EXAMPLE:
            //   - Transfer length = 100
            //   - Cycle 0: dma_start=1, dma_done=0 (transfer starts)
            //   - Cycle 1-100: dma_done=0, count incrementing
            //   - Cycle 101: dma_done=1 (transfer complete)
            //   - Loop exits, driver continues
            // 
            // COMPLETION DETECTION:
            //   - dma_done asserted: Transfer complete
            //   - dma_done deasserted: Transfer in progress or idle
            //   - Wait loop: Blocks until dma_done = 1
            // 
            // EDGE CASES:
            //   - Length = 0: dma_done asserted immediately (count=0 >= length=0)
            //   - Length = 1: dma_done asserted after 1 cycle (count: 0->1)
            //   - Length = 65535: dma_done asserted after 65535 cycles
            //   - Timeout: Not implemented (could add timeout check)
            do @(posedge vif.clk); while (!vif.dma_done);
            // 
            // LOOP EXPLANATION:
            //   - do: Execute at least once (wait for clock edge)
            //   - @(posedge vif.clk): Wait for clock edge
            //   - while: Continue if condition true
            //   - Condition: !vif.dma_done (not done yet)
            //   - Loop continues until dma_done = 1
            //   - Exits when dma_done = 1 (transfer complete)
            
            seq_item_port.item_done();
        end
    endtask
endclass

// ============================================================================
// ENVIRONMENT CLASS
// ============================================================================
class DmaEnv extends uvm_env;
    uvm_sequencer #(DmaTxn) seqr;  // Sequencer
    DmaDriver drv;                 // Driver
    
    `uvm_component_utils(DmaEnv)
    
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        seqr = uvm_sequencer#(DmaTxn)::type_id::create("seqr", this);
        drv  = DmaDriver::type_id::create("drv", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        drv.seq_item_port.connect(seqr.seq_item_export);
    endfunction
endclass

// ============================================================================
// TEST CLASS
// ============================================================================
class DmaTest extends uvm_test;
    DmaEnv env;
    
    `uvm_component_utils(DmaTest)
    
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = DmaEnv::type_id::create("env", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        DmaSeq seq;
        phase.raise_objection(this);
        seq = DmaSeq::type_id::create("seq");
        seq.start(env.seqr);
        #2000;  // Wait for transfers to complete
        phase.drop_objection(this);
    endtask
endclass

// ============================================================================
// TOP-LEVEL MODULE
// ============================================================================
module dma;
    logic clk;           // Clock signal
    dma_if vif(clk);     // DMA interface
    
    // ========================================================================
    // DUT INSTANTIATION
    // ========================================================================
    simple_dma dut (
        .clk(clk), .rst_n(vif.rst_n),
        .dma_start(vif.dma_start), .dma_done(vif.dma_done),
        .dma_src_addr(vif.dma_src_addr), .dma_dst_addr(vif.dma_dst_addr),
        .dma_length(vif.dma_length), .dma_channel(vif.dma_channel)
    );
    
    // ========================================================================
    // CLOCK GENERATION
    // ========================================================================
    initial begin
        clk = 0;
        forever #5 clk = ~clk;  // 10ns period (100MHz)
    end
    
    // ========================================================================
    // RESET GENERATION
    // ========================================================================
    initial begin
        vif.rst_n = 0;      // Assert reset
        vif.dma_start = 0;  // Clear start signal
        repeat(5) @(posedge clk);  // Hold reset for 5 cycles
        vif.rst_n = 1;      // Deassert reset
    end
    
    // ========================================================================
    // UVM TEST SETUP
    // ========================================================================
    initial begin
        uvm_config_db#(virtual dma_if)::set(null, "*", "vif", vif);
        run_test("DmaTest");
    end
endmodule
