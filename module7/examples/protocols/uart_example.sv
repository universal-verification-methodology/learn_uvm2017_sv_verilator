/**
 * Module 7 Example 7.2: UART Verification (skeleton)
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand UART verification patterns
 *   2. Learn UART transaction modeling
 *   3. Understand UART driver implementation
 *   4. Learn UART sequence generation
 *   5. Understand UART testbench structure
 * 
 * UART VERIFICATION:
 *   - UART transmitter verification
 *   - UART receiver verification
 *   - Loopback testing
 *   - Serial data transmission/reception
 */
`include "uvm_macros.svh"
import uvm_pkg::*;
`timescale 1ns/1ps

// ============================================================================
// INTERFACE DEFINITION
// ============================================================================
interface uart_if(input logic clk);
    logic rst_n;        // Active-low reset
    logic tx;          // Transmit data line
    logic rx;          // Receive data line
    logic [7:0] tx_data;  // Data to transmit
    logic tx_start;    // Start transmission
    logic tx_busy;     // Transmission in progress
    logic [7:0] rx_data;  // Received data
    logic rx_ready;    // Received data ready
endinterface

// ============================================================================
// TRANSACTION CLASS
// ============================================================================
class UartTxn extends uvm_sequence_item;
    rand bit [7:0] data;  // Data to transmit/receive
    
    `uvm_object_utils(UartTxn)
    
    function new(string n="UartTxn");
        super.new(n);
    endfunction
endclass

// ============================================================================
// SEQUENCE CLASS
// ============================================================================
class UartSeq extends uvm_sequence #(UartTxn);
    `uvm_object_utils(UartSeq)
    
    function new(string n="UartSeq");
        super.new(n);
    endfunction
    
    task body();
        UartTxn t;
        repeat (3) begin
            t = UartTxn::type_id::create("t");
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
 * UartDriver: UART driver
 * 
 * DRIVER PURPOSE:
 *   - Drives UART transmit signals
 *   - Configures transmit data
 *   - Waits for transmission completion
 */
class UartDriver extends uvm_driver #(UartTxn);
    virtual uart_if vif;  // Virtual interface
    
    `uvm_component_utils(UartDriver)
    
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(virtual uart_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NO_VIF", "uart_if not set")
        end
    endfunction
    
    task run_phase(uvm_phase phase);
        UartTxn t;
        
        // ====================================================================
        // INITIALIZE SIGNALS
        // ====================================================================
        vif.tx_start <= 0;
        
        forever begin
            seq_item_port.get_next_item(t);
            
            // ================================================================
            // CONFIGURE TRANSMIT DATA
            // ================================================================
            @(posedge vif.clk);
            vif.tx_data  <= t.data;   // Set transmit data
            vif.tx_start <= 1;        // Assert start signal
            
            // ================================================================
            // DEASSERT START SIGNAL
            // ================================================================
            @(posedge vif.clk);
            vif.tx_start <= 0;        // Deassert start (pulse)
            
            // ================================================================
            // WAIT FOR TRANSMISSION COMPLETION
            // ================================================================
            // 
            // COMPLETION WAIT:
            //   - Wait for tx_busy to deassert
            //   - Transmission completes when tx_busy = 0
            //   - Loop until busy signal cleared
            // 
            // WAIT PATTERN:
            //   - do-while loop: Wait for clock edge, check busy signal
            //   - Continues until tx_busy = 0
            //   - Blocks until transmission completes
            // 
            // TIMING EXAMPLE:
            //   - UART frame: Start bit (1 cycle) + 8 data bits (8 cycles) + Stop bit (1 cycle) = 10 cycles
            //   - Cycle 0: tx_start=1, tx_busy=1 (transmission starts)
            //   - Cycle 1-9: tx_busy=1 (transmitting frame)
            //   - Cycle 10: tx_busy=0 (transmission complete)
            //   - Loop exits, driver continues
            // 
            // COMPLETION DETECTION:
            //   - tx_busy = 1: Transmission in progress
            //   - tx_busy = 0: Transmission complete or idle
            //   - Wait loop: Blocks until tx_busy = 0
            // 
            // UART FRAME TIMING:
            //   - Start bit: 1 cycle (tx = 0)
            //   - Data bits: 8 cycles (tx = data bits, LSB first)
            //   - Stop bit: 1 cycle (tx = 1)
            //   - Total: 10 cycles per byte
            //   - Example: Transmit 0x55
            //     * Cycle 0: Start bit (tx = 0)
            //     * Cycle 1-8: Data bits (tx = 1,0,1,0,1,0,1,0)
            //     * Cycle 9: Stop bit (tx = 1)
            //     * Cycle 10: tx_busy = 0 (complete)
            do @(posedge vif.clk); while (vif.tx_busy);
            // 
            // LOOP EXPLANATION:
            //   - do: Execute at least once (wait for clock edge)
            //   - @(posedge vif.clk): Wait for clock edge
            //   - while: Continue if condition true
            //   - Condition: vif.tx_busy (still busy)
            //   - Loop continues until tx_busy = 0
            //   - Exits when tx_busy = 0 (transmission complete)
            
            seq_item_port.item_done();
        end
    endtask
endclass

// ============================================================================
// ENVIRONMENT CLASS
// ============================================================================
class UartEnv extends uvm_env;
    uvm_sequencer #(UartTxn) seqr;  // Sequencer
    UartDriver drv;                 // Driver
    
    `uvm_component_utils(UartEnv)
    
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        seqr = uvm_sequencer#(UartTxn)::type_id::create("seqr", this);
        drv  = UartDriver::type_id::create("drv", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        drv.seq_item_port.connect(seqr.seq_item_export);
    endfunction
endclass

// ============================================================================
// TEST CLASS
// ============================================================================
class UartTest extends uvm_test;
    UartEnv env;
    
    `uvm_component_utils(UartTest)
    
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = UartEnv::type_id::create("env", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        UartSeq seq;
        phase.raise_objection(this);
        seq = UartSeq::type_id::create("seq");
        seq.start(env.seqr);
        #2000;  // Wait for transmissions to complete
        phase.drop_objection(this);
    endtask
endclass

// ============================================================================
// TOP-LEVEL MODULE
// ============================================================================
module uart_example;
    logic clk;           // Clock signal
    uart_if vif(clk);    // UART interface
    
    // ========================================================================
    // LOOPBACK CONNECTION
    // ========================================================================
    // 
    // LOOPBACK:
    //   - Connect tx to rx for loopback testing
    //   - Transmitted data is received back
    //   - Simplifies testbench (no external connection needed)
    assign vif.rx = vif.tx;  // loopback (very simplified)
    
    // ========================================================================
    // DUT INSTANTIATION
    // ========================================================================
    uart dut (
        .clk(clk), .rst_n(vif.rst_n),
        .tx(vif.tx), .rx(vif.rx),
        .tx_data(vif.tx_data), .tx_start(vif.tx_start), .tx_busy(vif.tx_busy),
        .rx_data(vif.rx_data), .rx_ready(vif.rx_ready)
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
        vif.tx_start = 0;   // Clear start signal
        vif.tx_data = 0;    // Clear data
        repeat(5) @(posedge clk);  // Hold reset for 5 cycles
        vif.rst_n = 1;      // Deassert reset
    end
    
    // ========================================================================
    // UVM TEST SETUP
    // ========================================================================
    initial begin
        uvm_config_db#(virtual uart_if)::set(null, "*", "vif", vif);
        run_test("UartTest");
    end
endmodule
