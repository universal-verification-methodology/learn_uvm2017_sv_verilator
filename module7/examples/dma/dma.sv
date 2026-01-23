/**
 * Module 7 Example 7.1: DMA Verification (skeleton)
 */
`include "uvm_macros.svh"
import uvm_pkg::*;
`timescale 1ns/1ps

interface dma_if(input logic clk);
  logic rst_n;
  logic dma_start;
  logic dma_done;
  logic [31:0] dma_src_addr;
  logic [31:0] dma_dst_addr;
  logic [15:0] dma_length;
  logic [2:0]  dma_channel;
endinterface

class DmaTxn extends uvm_sequence_item;
  rand bit [31:0] src;
  rand bit [31:0] dst;
  rand bit [15:0] len;
  rand bit [2:0]  ch;
  `uvm_object_utils(DmaTxn)
  function new(string n="DmaTxn"); super.new(n); endfunction
endclass

class DmaSeq extends uvm_sequence #(DmaTxn);
  `uvm_object_utils(DmaSeq)
  function new(string n="DmaSeq"); super.new(n); endfunction
  task body();
    DmaTxn t;
    repeat (3) begin
      t = DmaTxn::type_id::create("t");
      void'(t.randomize() with { len inside {[1:20]}; });
      start_item(t); finish_item(t);
    end
  endtask
endclass

class DmaDriver extends uvm_driver #(DmaTxn);
  virtual dma_if vif;
  `uvm_component_utils(DmaDriver)
  function new(string n, uvm_component p); super.new(n,p); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(virtual dma_if)::get(this,"","vif",vif))
      `uvm_fatal("NO_VIF","dma_if not set")
  endfunction
  task run_phase(uvm_phase phase);
    DmaTxn t;
    vif.dma_start <= 0;
    forever begin
      seq_item_port.get_next_item(t);
      @(posedge vif.clk);
      vif.dma_src_addr <= t.src;
      vif.dma_dst_addr <= t.dst;
      vif.dma_length   <= t.len;
      vif.dma_channel  <= t.ch;
      vif.dma_start    <= 1;
      @(posedge vif.clk);
      vif.dma_start    <= 0;
      // wait for done pulse
      do @(posedge vif.clk); while (!vif.dma_done);
      seq_item_port.item_done();
    end
  endtask
endclass

class DmaEnv extends uvm_env;
  uvm_sequencer #(DmaTxn) seqr;
  DmaDriver drv;
  `uvm_component_utils(DmaEnv)
  function new(string n, uvm_component p); super.new(n,p); endfunction
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

class DmaTest extends uvm_test;
  DmaEnv env;
  `uvm_component_utils(DmaTest)
  function new(string n, uvm_component p); super.new(n,p); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env = DmaEnv::type_id::create("env", this);
  endfunction
  task run_phase(uvm_phase phase);
    DmaSeq seq;
    phase.raise_objection(this);
    seq = DmaSeq::type_id::create("seq");
    seq.start(env.seqr);
    #2000;
    phase.drop_objection(this);
  endtask
endclass

module dma;
  logic clk;
  dma_if vif(clk);
  simple_dma dut (
    .clk(clk), .rst_n(vif.rst_n),
    .dma_start(vif.dma_start), .dma_done(vif.dma_done),
    .dma_src_addr(vif.dma_src_addr), .dma_dst_addr(vif.dma_dst_addr),
    .dma_length(vif.dma_length), .dma_channel(vif.dma_channel)
  );

  initial begin clk=0; forever #5 clk=~clk; end
  initial begin
    vif.rst_n=0;
    vif.dma_start=0;
    repeat(5) @(posedge clk);
    vif.rst_n=1;
  end
  initial begin
    uvm_config_db#(virtual dma_if)::set(null,"*","vif",vif);
    run_test("DmaTest");
  end
endmodule

