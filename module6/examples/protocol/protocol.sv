/**
 * Module 6 Example 6.3: Protocol Verification (AXI4-Lite-lite handshake demo)
 * Demonstrates a minimal driver/monitor skeleton for a protocol-like interface.
 *
 * Note: This is not a full AXI4-Lite VIP. It's a teaching scaffold.
 */
`include "uvm_macros.svh"
import uvm_pkg::*;

interface axi_lite_if(input logic ACLK);
  logic        ARESETn;
  logic        AWVALID;
  logic        AWREADY;
  logic [31:0] AWADDR;
  logic        WVALID;
  logic        WREADY;
  logic [31:0] WDATA;
  logic        BVALID;
  logic        BREADY;
  logic        ARVALID;
  logic        ARREADY;
  logic [31:0] ARADDR;
  logic        RVALID;
  logic        RREADY;
  logic [31:0] RDATA;
endinterface

class AxiTxn extends uvm_sequence_item;
  rand bit is_write;
  rand bit [31:0] addr;
  rand bit [31:0] data;
  `uvm_object_utils(AxiTxn)
  function new(string n="AxiTxn"); super.new(n); endfunction
  function string convert2string();
    return $sformatf("%s addr=0x%08h data=0x%08h", is_write?"WR":"RD", addr, data);
  endfunction
endclass

class AxiSeq extends uvm_sequence #(AxiTxn);
  `uvm_object_utils(AxiSeq)
  function new(string n="AxiSeq"); super.new(n); endfunction
  task body();
    AxiTxn t;
    repeat (5) begin
      t = AxiTxn::type_id::create("t");
      void'(t.randomize() with { is_write inside {0,1}; addr[11:2] == addr[11:2]; });
      start_item(t); finish_item(t);
    end
  endtask
endclass

class AxiDriver extends uvm_driver #(AxiTxn);
  virtual axi_lite_if vif;
  `uvm_component_utils(AxiDriver)
  function new(string n, uvm_component p); super.new(n,p); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(virtual axi_lite_if)::get(this,"","vif",vif))
      `uvm_fatal("NO_VIF","axi_lite_if not set")
  endfunction
  task run_phase(uvm_phase phase);
    AxiTxn t;
    // idle
    vif.AWVALID <= 0; vif.WVALID <= 0; vif.BREADY <= 0;
    vif.ARVALID <= 0; vif.RREADY <= 0;
    forever begin
      seq_item_port.get_next_item(t);
      if (t.is_write) begin
        // write address + data (very simplified)
        @(posedge vif.ACLK);
        vif.AWADDR  <= t.addr;
        vif.AWVALID <= 1;
        vif.WDATA   <= t.data;
        vif.WVALID  <= 1;
        // wait ready
        do @(posedge vif.ACLK); while (!(vif.AWREADY && vif.WREADY));
        vif.AWVALID <= 0;
        vif.WVALID  <= 0;
        vif.BREADY  <= 1;
        do @(posedge vif.ACLK); while (!vif.BVALID);
        vif.BREADY  <= 0;
      end else begin
        @(posedge vif.ACLK);
        vif.ARADDR  <= t.addr;
        vif.ARVALID <= 1;
        do @(posedge vif.ACLK); while (!vif.ARREADY);
        vif.ARVALID <= 0;
        vif.RREADY  <= 1;
        do @(posedge vif.ACLK); while (!vif.RVALID);
        t.data = vif.RDATA;
        vif.RREADY  <= 0;
      end
      `uvm_info("AXI_DRV", {"done: ", t.convert2string()}, UVM_MEDIUM)
      seq_item_port.item_done();
    end
  endtask
endclass

class AxiMonitor extends uvm_monitor;
  virtual axi_lite_if vif;
  uvm_analysis_port #(AxiTxn) ap;
  `uvm_component_utils(AxiMonitor)
  function new(string n, uvm_component p);
    super.new(n,p);
    ap = new("ap", this);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(virtual axi_lite_if)::get(this,"","vif",vif))
      `uvm_fatal("NO_VIF","axi_lite_if not set")
  endfunction
  task run_phase(uvm_phase phase);
    forever begin
      @(posedge vif.ACLK);
      // teach: monitors typically watch handshake and reconstruct transactions
    end
  endtask
endclass

class ProtocolEnv extends uvm_env;
  uvm_sequencer #(AxiTxn) seqr;
  AxiDriver drv;
  AxiMonitor mon;
  `uvm_component_utils(ProtocolEnv)
  function new(string n, uvm_component p); super.new(n,p); endfunction
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

class ProtocolTest extends uvm_test;
  ProtocolEnv env;
  `uvm_component_utils(ProtocolTest)
  function new(string n, uvm_component p); super.new(n,p); endfunction
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

module protocol;
  logic ACLK;
  axi_lite_if vif(ACLK);

  // DUT
  axi4_lite_slave dut (
    .ACLK(ACLK),
    .ARESETn(vif.ARESETn),
    .AWVALID(vif.AWVALID), .AWREADY(vif.AWREADY), .AWADDR(vif.AWADDR), .AWPROT(3'b0),
    .WVALID(vif.WVALID),   .WREADY(vif.WREADY),   .WDATA(vif.WDATA),   .WSTRB(4'hF),
    .BVALID(vif.BVALID),   .BREADY(vif.BREADY),   .BRESP(),
    .ARVALID(vif.ARVALID), .ARREADY(vif.ARREADY), .ARADDR(vif.ARADDR), .ARPROT(3'b0),
    .RVALID(vif.RVALID),   .RREADY(vif.RREADY),   .RDATA(vif.RDATA),   .RRESP()
  );

  initial begin
    ACLK = 0;
    forever #5 ACLK = ~ACLK;
  end

  initial begin
    vif.ARESETn = 0;
    repeat (5) @(posedge ACLK);
    vif.ARESETn = 1;
  end

  initial begin
    uvm_config_db#(virtual axi_lite_if)::set(null, "*", "vif", vif);
    run_test("ProtocolTest");
  end
endmodule

