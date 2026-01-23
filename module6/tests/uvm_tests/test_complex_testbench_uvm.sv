/**
 * Module 6: Complex Testbench UVM Test
 * Single end-to-end test that instantiates AXI4-Lite slave DUT and runs basic read/write.
 *
 * Note: This is a teaching scaffold, not a full AXI4-Lite compliance suite.
 */
`include "uvm_macros.svh"
import uvm_pkg::*;
`timescale 1ns/1ps

interface axi_lite_if(input logic ACLK);
  logic        ARESETn;
  logic        AWVALID;
  logic        AWREADY;
  logic [31:0] AWADDR;
  logic [2:0]  AWPROT;
  logic        WVALID;
  logic        WREADY;
  logic [31:0] WDATA;
  logic [3:0]  WSTRB;
  logic        BVALID;
  logic        BREADY;
  logic [1:0]  BRESP;
  logic        ARVALID;
  logic        ARREADY;
  logic [31:0] ARADDR;
  logic [2:0]  ARPROT;
  logic        RVALID;
  logic        RREADY;
  logic [31:0] RDATA;
  logic [1:0]  RRESP;
endinterface

class AxiTxn extends uvm_sequence_item;
  rand bit is_write;
  rand bit [31:0] addr;
  rand bit [31:0] data;
  `uvm_object_utils(AxiTxn)
  function new(string n="AxiTxn"); super.new(n); endfunction
endclass

class AxiSeq extends uvm_sequence #(AxiTxn);
  `uvm_object_utils(AxiSeq)
  function new(string n="AxiSeq"); super.new(n); endfunction
  task body();
    AxiTxn t;
    // deterministic directed sequence
    t = AxiTxn::type_id::create("wr");
    t.is_write = 1; t.addr = 32'h0000_0010; t.data = 32'hDEAD_BEEF;
    start_item(t); finish_item(t);
    t = AxiTxn::type_id::create("rd");
    t.is_write = 0; t.addr = 32'h0000_0010; t.data = 32'h0;
    start_item(t); finish_item(t);
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
    vif.AWVALID<=0; vif.WVALID<=0; vif.BREADY<=0;
    vif.ARVALID<=0; vif.RREADY<=0;
    forever begin
      seq_item_port.get_next_item(t);
      if (t.is_write) begin
        @(posedge vif.ACLK);
        vif.AWADDR<=t.addr; vif.AWPROT<=3'b0; vif.AWVALID<=1;
        vif.WDATA<=t.data;  vif.WSTRB<=4'hF; vif.WVALID<=1;
        do @(posedge vif.ACLK); while (!(vif.AWREADY && vif.WREADY));
        vif.AWVALID<=0; vif.WVALID<=0;
        vif.BREADY<=1;
        do @(posedge vif.ACLK); while (!vif.BVALID);
        vif.BREADY<=0;
      end else begin
        @(posedge vif.ACLK);
        vif.ARADDR<=t.addr; vif.ARPROT<=3'b0; vif.ARVALID<=1;
        do @(posedge vif.ACLK); while (!vif.ARREADY);
        vif.ARVALID<=0;
        vif.RREADY<=1;
        do @(posedge vif.ACLK); while (!vif.RVALID);
        t.data = vif.RDATA;
        vif.RREADY<=0;
        `uvm_info("AXI_RD", $sformatf("read data=0x%08h", t.data), UVM_MEDIUM)
      end
      seq_item_port.item_done();
    end
  endtask
endclass

class AxiEnv extends uvm_env;
  uvm_sequencer #(AxiTxn) seqr;
  AxiDriver drv;
  `uvm_component_utils(AxiEnv)
  function new(string n, uvm_component p); super.new(n,p); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    seqr = uvm_sequencer#(AxiTxn)::type_id::create("seqr", this);
    drv  = AxiDriver::type_id::create("drv", this);
  endfunction
  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    drv.seq_item_port.connect(seqr.seq_item_export);
  endfunction
endclass

class ComplexTestbenchTest extends uvm_test;
  AxiEnv env;
  `uvm_component_utils(ComplexTestbenchTest)
  function new(string n, uvm_component p); super.new(n,p); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env = AxiEnv::type_id::create("env", this);
  endfunction
  task run_phase(uvm_phase phase);
    AxiSeq seq;
    phase.raise_objection(this);
    seq = AxiSeq::type_id::create("seq");
    seq.start(env.seqr);
    #1000;
    phase.drop_objection(this);
  endtask
endclass

module test_complex_testbench_uvm;
  logic ACLK;
  axi_lite_if vif(ACLK);

  axi4_lite_slave dut (
    .ACLK(ACLK),
    .ARESETn(vif.ARESETn),
    .AWVALID(vif.AWVALID), .AWREADY(vif.AWREADY), .AWADDR(vif.AWADDR), .AWPROT(vif.AWPROT),
    .WVALID(vif.WVALID),   .WREADY(vif.WREADY),   .WDATA(vif.WDATA),   .WSTRB(vif.WSTRB),
    .BVALID(vif.BVALID),   .BREADY(vif.BREADY),   .BRESP(vif.BRESP),
    .ARVALID(vif.ARVALID), .ARREADY(vif.ARREADY), .ARADDR(vif.ARADDR), .ARPROT(vif.ARPROT),
    .RVALID(vif.RVALID),   .RREADY(vif.RREADY),   .RDATA(vif.RDATA),   .RRESP(vif.RRESP)
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
    uvm_config_db#(virtual axi_lite_if)::set(null,"*","vif",vif);
    run_test("ComplexTestbenchTest");
  end
endmodule

