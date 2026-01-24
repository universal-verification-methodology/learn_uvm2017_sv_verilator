/**
 * Module 6 Example 6.3: Protocol Verification (AXI4-Lite handshake demo)
 * Demonstrates a minimal driver/monitor skeleton for a protocol-like interface.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand protocol verification with virtual interfaces
 *   2. Learn AXI4-Lite protocol handshake implementation
 *   3. Understand driver protocol implementation (write/read transactions)
 *   4. Learn monitor protocol sampling (simplified)
 *   5. Understand interface-based testbench structure
 * 
 * PROTOCOL OVERVIEW:
 *   - AXI4-Lite protocol with 5 channels
 *   - Write transaction: AW -> W -> B
 *   - Read transaction: AR -> R
 *   - All channels use VALID/READY handshake
 * 
 * TESTBENCH STRUCTURE:
 *   ProtocolTest (uvm_test)
 *     └── ProtocolEnv (uvm_env)
 *           ├── Sequencer (uvm_sequencer)
 *           ├── AxiDriver (uvm_driver)
 *           └── AxiMonitor (uvm_monitor)
 * 
 * NOTE: This is not a full AXI4-Lite VIP. It's a teaching scaffold.
 */
`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================================
// INTERFACE DEFINITION
// ============================================================================
/**
 * axi_lite_if: AXI4-Lite interface
 * 
 * INTERFACE PURPOSE:
 *   - Groups all AXI4-Lite signals
 *   - Provides clock signal (ACLK)
 *   - Used by driver and monitor via virtual interface
 * 
 * INTERFACE SIGNALS:
 *   - Clock: ACLK (input, provided by testbench)
 *   - Reset: ARESETn (active-low reset)
 *   - Write Address: AWVALID, AWREADY, AWADDR
 *   - Write Data: WVALID, WREADY, WDATA
 *   - Write Response: BVALID, BREADY
 *   - Read Address: ARVALID, ARREADY, ARADDR
 *   - Read Data: RVALID, RREADY, RDATA
 */
interface axi_lite_if(input logic ACLK);
    logic        ARESETn;   // Active-low reset
    logic        AWVALID;   // Write address valid
    logic        AWREADY;   // Write address ready
    logic [31:0] AWADDR;    // Write address
    logic        WVALID;    // Write data valid
    logic        WREADY;    // Write data ready
    logic [31:0] WDATA;      // Write data
    logic        BVALID;    // Write response valid
    logic        BREADY;    // Write response ready
    logic        ARVALID;   // Read address valid
    logic        ARREADY;   // Read address ready
    logic [31:0] ARADDR;    // Read address
    logic        RVALID;    // Read data valid
    logic        RREADY;    // Read data ready
    logic [31:0] RDATA;      // Read data
endinterface

// ============================================================================
// TRANSACTION CLASS
// ============================================================================
/**
 * AxiTxn: AXI transaction class
 * 
 * TRANSACTION FIELDS:
 *   - is_write: Operation type (1=write, 0=read)
 *   - addr: 32-bit address
 *   - data: 32-bit data (write data or read data)
 */
class AxiTxn extends uvm_sequence_item;
    rand bit is_write;      // Operation type (1=write, 0=read)
    rand bit [31:0] addr;   // Address (32-bit)
    rand bit [31:0] data;   // Data (32-bit)
    
    `uvm_object_utils(AxiTxn)
    
    function new(string n="AxiTxn");
        super.new(n);
    endfunction
    
    function string convert2string();
        return $sformatf("%s addr=0x%08h data=0x%08h", is_write?"WR":"RD", addr, data);
    endfunction
endclass

// ============================================================================
// SEQUENCE CLASS
// ============================================================================
class AxiSeq extends uvm_sequence #(AxiTxn);
    `uvm_object_utils(AxiSeq)
    
    function new(string n="AxiSeq");
        super.new(n);
    endfunction
    
    task body();
        AxiTxn t;
        repeat (5) begin
            t = AxiTxn::type_id::create("t");
            /* verilator lint_off IGNOREDRETURN */
            void'(t.randomize() with { is_write inside {0,1}; addr[11:2] == addr[11:2]; });
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
 * AxiDriver: AXI4-Lite driver
 * 
 * DRIVER PURPOSE:
 *   - Receives transactions from sequencer
 *   - Drives AXI4-Lite protocol signals via virtual interface
 *   - Implements write and read transaction protocols
 * 
 * PROTOCOL IMPLEMENTATION:
 *   - Write: AW handshake -> W handshake -> B handshake
 *   - Read: AR handshake -> R handshake
 */
class AxiDriver extends uvm_driver #(AxiTxn);
    virtual axi_lite_if vif;  // Virtual interface
    
    `uvm_component_utils(AxiDriver)
    
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // ====================================================================
        // GET VIRTUAL INTERFACE FROM CONFIGDB
        // ====================================================================
        // 
        // VIRTUAL INTERFACE:
        //   - Retrieved from ConfigDB
        //   - Required for driving protocol signals
        //   - Fatal error if not found
        if (!uvm_config_db#(virtual axi_lite_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NO_VIF", "axi_lite_if not set")
        end
    endfunction
    
    task run_phase(uvm_phase phase);
        AxiTxn t;
        
        // ====================================================================
        // INITIALIZE SIGNALS (IDLE STATE)
        // ====================================================================
        // 
        // SIGNAL INITIALIZATION:
        //   - All VALID signals = 0 (idle)
        //   - All READY signals = 0 (idle)
        //   - Ensures clean starting state
        vif.AWVALID <= 0;  // Write address valid = 0
        vif.WVALID <= 0;   // Write data valid = 0
        vif.BREADY <= 0;   // Write response ready = 0
        vif.ARVALID <= 0;  // Read address valid = 0
        vif.RREADY <= 0;   // Read data ready = 0
        
        // ====================================================================
        // DRIVER LOOP
        // ====================================================================
        forever begin
            // ================================================================
            // GET TRANSACTION FROM SEQUENCER
            // ================================================================
            seq_item_port.get_next_item(t);
            
            // ================================================================
            // WRITE TRANSACTION
            // ================================================================
            if (t.is_write) begin
                // ============================================================
                // WRITE ADDRESS AND DATA PHASE
                // ============================================================
                // 
                // PROTOCOL STEP 1: Drive address and data
                //   - Wait for clock edge
                //   - Drive AWADDR and AWVALID
                //   - Drive WDATA and WVALID
                //   - Both channels can be driven simultaneously
                @(posedge vif.ACLK);
                vif.AWADDR  <= t.addr;   // Drive write address
                vif.AWVALID <= 1;        // Assert write address valid
                vif.WDATA   <= t.data;   // Drive write data
                vif.WVALID  <= 1;        // Assert write data valid
                
                // ============================================================
                // WAIT FOR WRITE HANDSHAKE
                // ============================================================
                // 
                // PROTOCOL STEP 2: Wait for slave ready
                //   - Wait until both AWREADY and WREADY are high
                //   - Handshake completes when both VALID and READY are high
                //   - do-while loop: Wait for clock edge, check ready signals
                // 
                // HANDSHAKE TIMING:
                //   - Cycle 1: AWVALID=1, WVALID=1, AWREADY=0, WREADY=0
                //   - Cycle 2: AWVALID=1, WREADY=1, AWREADY=0, WREADY=0 (still waiting)
                //   - Cycle 3: AWVALID=1, WVALID=1, AWREADY=1, WREADY=1 (handshake!)
                //   - Loop exits when both ready signals are high
                // 
                // HANDSHAKE VARIATIONS:
                //   - Both ready immediately: Handshake in same cycle
                //   - One ready delayed: Wait for both
                //   - Both ready delayed: Wait multiple cycles
                // 
                // PROTOCOL RULE:
                //   - VALID must remain asserted until handshake
                //   - READY can be asserted before or after VALID
                //   - Handshake occurs when both are high on clock edge
                do @(posedge vif.ACLK); while (!(vif.AWREADY && vif.WREADY));
                // 
                // LOOP EXPLANATION:
                //   - do: Execute at least once (wait for clock edge)
                //   - @(posedge vif.ACLK): Wait for clock edge
                //   - while: Continue if condition false
                //   - Condition: !(AWREADY && WREADY) = not (both ready)
                //   - Loop continues until both ready signals are high
                //   - Exits when AWREADY=1 AND WREADY=1
                
                // ============================================================
                // DEASSERT VALID SIGNALS
                // ============================================================
                // 
                // PROTOCOL STEP 3: Deassert after handshake
                //   - VALID must remain asserted until handshake
                //   - After handshake, can deassert VALID
                vif.AWVALID <= 0;  // Deassert write address valid
                vif.WVALID  <= 0;  // Deassert write data valid
                
                // ============================================================
                // WRITE RESPONSE PHASE
                // ============================================================
                // 
                // PROTOCOL STEP 4: Wait for write response
                //   - Assert BREADY (ready to accept response)
                //   - Wait for BVALID (slave has response)
                //   - Handshake completes write transaction
                vif.BREADY  <= 1;  // Assert write response ready
                do @(posedge vif.ACLK); while (!vif.BVALID);  // Wait for response valid
                vif.BREADY  <= 0;  // Deassert after handshake
                
            // ================================================================
            // READ TRANSACTION
            // ================================================================
            end else begin
                // ============================================================
                // READ ADDRESS PHASE
                // ============================================================
                // 
                // PROTOCOL STEP 1: Drive read address
                //   - Wait for clock edge
                //   - Drive ARADDR and ARVALID
                @(posedge vif.ACLK);
                vif.ARADDR  <= t.addr;   // Drive read address
                vif.ARVALID <= 1;        // Assert read address valid
                
                // ============================================================
                // WAIT FOR READ ADDRESS HANDSHAKE
                // ============================================================
                // 
                // PROTOCOL STEP 2: Wait for slave ready
                //   - Wait until ARREADY is high
                //   - Handshake completes when both ARVALID and ARREADY are high
                do @(posedge vif.ACLK); while (!vif.ARREADY);
                
                // ============================================================
                // DEASSERT ADDRESS VALID
                // ============================================================
                vif.ARVALID <= 0;  // Deassert read address valid
                
                // ============================================================
                // READ DATA PHASE
                // ============================================================
                // 
                // PROTOCOL STEP 3: Wait for read data
                //   - Assert RREADY (ready to accept data)
                //   - Wait for RVALID (slave has data)
                //   - Capture read data from RDATA
                //   - Handshake completes read transaction
                vif.RREADY  <= 1;  // Assert read data ready
                do @(posedge vif.ACLK); while (!vif.RVALID);  // Wait for data valid
                t.data = vif.RDATA;  // Capture read data
                vif.RREADY  <= 0;  // Deassert after handshake
            end
            
            // ================================================================
            // LOG TRANSACTION COMPLETION
            // ================================================================
            `uvm_info("AXI_DRV", {"done: ", t.convert2string()}, UVM_MEDIUM)
            
            // ================================================================
            // SIGNAL TRANSACTION COMPLETION
            // ================================================================
            seq_item_port.item_done();
        end
    endtask
endclass

// ============================================================================
// MONITOR CLASS
// ============================================================================
/**
 * AxiMonitor: AXI4-Lite monitor
 * 
 * MONITOR PURPOSE:
 *   - Samples AXI4-Lite protocol signals
 *   - Reconstructs transactions from signal values
 *   - Broadcasts transactions via analysis port
 * 
 * NOTE:
 *   - This is a simplified monitor (no actual monitoring implemented)
 *   - Real monitor would:
 *     * Watch handshake signals
 *     * Detect transactions
 *     * Create transaction objects
 *     * Write to analysis port
 */
class AxiMonitor extends uvm_monitor;
    virtual axi_lite_if vif;  // Virtual interface
    uvm_analysis_port #(AxiTxn) ap;  // Analysis port
    
    `uvm_component_utils(AxiMonitor)
    
    function new(string n, uvm_component p);
        super.new(n, p);
        ap = new("ap", this);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // ====================================================================
        // GET VIRTUAL INTERFACE FROM CONFIGDB
        // ====================================================================
        if (!uvm_config_db#(virtual axi_lite_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal("NO_VIF", "axi_lite_if not set")
        end
    endfunction
    
    task run_phase(uvm_phase phase);
        // ====================================================================
        // MONITOR LOOP
        // ====================================================================
        // 
        // MONITORING LOGIC:
        //   - Real monitor would:
        //     * Watch AWVALID/AWREADY handshake (write address)
        //     * Watch WVALID/WREADY handshake (write data)
        //     * Watch BVALID/BREADY handshake (write response)
        //     * Watch ARVALID/ARREADY handshake (read address)
        //     * Watch RVALID/RREADY handshake (read data)
        //     * Reconstruct transactions from handshakes
        //     * Create AxiTxn objects
        //     * Write to analysis port: ap.write(txn)
        // 
        // This example: Simplified (just waits)
        forever begin
            @(posedge vif.ACLK);
            // teach: monitors typically watch handshake and reconstruct transactions
        end
    endtask
endclass

// ============================================================================
// ENVIRONMENT CLASS
// ============================================================================
class ProtocolEnv extends uvm_env;
    uvm_sequencer #(AxiTxn) seqr;  // Sequencer
    AxiDriver drv;                 // Driver
    AxiMonitor mon;                // Monitor
    
    `uvm_component_utils(ProtocolEnv)
    
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        seqr = uvm_sequencer#(AxiTxn)::type_id::create("seqr", this);
        drv  = AxiDriver::type_id::create("drv", this);
        mon  = AxiMonitor::type_id::create("mon", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        drv.seq_item_port.connect(seqr.seq_item_export);
    endfunction
endclass

// ============================================================================
// TEST CLASS
// ============================================================================
class ProtocolTest extends uvm_test;
    ProtocolEnv env;
    
    `uvm_component_utils(ProtocolTest)
    
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = ProtocolEnv::type_id::create("env", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        AxiSeq seq;
        phase.raise_objection(this);
        seq = AxiSeq::type_id::create("seq");
        seq.start(env.seqr);
        #500;
        phase.drop_objection(this);
    endtask
endclass

// ============================================================================
// TOP-LEVEL MODULE
// ============================================================================
module protocol;
    logic ACLK;              // Clock signal
    axi_lite_if vif(ACLK);  // AXI4-Lite interface instance
    
    // ========================================================================
    // DUT INSTANTIATION
    // ========================================================================
    // 
    // DUT CONNECTION:
    //   - AXI4-Lite slave DUT
    //   - Connected to interface signals
    //   - Protocol signals driven by driver
    axi4_lite_slave dut (
        .ACLK(ACLK),
        .ARESETn(vif.ARESETn),
        .AWVALID(vif.AWVALID), .AWREADY(vif.AWREADY), .AWADDR(vif.AWADDR), .AWPROT(3'b0),
        .WVALID(vif.WVALID),   .WREADY(vif.WREADY),   .WDATA(vif.WDATA),   .WSTRB(4'hF),
        .BVALID(vif.BVALID),   .BREADY(vif.BREADY),   .BRESP(),
        .ARVALID(vif.ARVALID), .ARREADY(vif.ARREADY), .ARADDR(vif.ARADDR), .ARPROT(3'b0),
        .RVALID(vif.RVALID),   .RREADY(vif.RREADY),   .RDATA(vif.RDATA),   .RRESP()
    );
    
    // ========================================================================
    // CLOCK GENERATION
    // ========================================================================
    initial begin
        ACLK = 0;
        forever #5 ACLK = ~ACLK;  // 10ns period (100MHz)
    end
    
    // ========================================================================
    // RESET GENERATION
    // ========================================================================
    initial begin
        vif.ARESETn = 0;           // Assert reset (active-low)
        repeat (5) @(posedge ACLK); // Hold reset for 5 cycles
        vif.ARESETn = 1;           // Deassert reset
    end
    
    // ========================================================================
    // UVM TEST SETUP
    // ========================================================================
    initial begin
        // ====================================================================
        // SET VIRTUAL INTERFACE IN CONFIGDB
        // ====================================================================
        // 
        // CONFIGDB SET:
        //   - Sets virtual interface for all components
        //   - Path: "*" (all components)
        //   - Field: "vif"
        //   - Value: vif (interface instance)
        uvm_config_db#(virtual axi_lite_if)::set(null, "*", "vif", vif);
        
        // ====================================================================
        // START UVM TEST
        // ====================================================================
        run_test("ProtocolTest");
    end
endmodule
