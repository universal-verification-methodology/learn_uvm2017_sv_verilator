/**
 * Module 7 Example 7.2: UART Verification (skeleton)
 */
`include "uvm_macros.svh"
import uvm_pkg::*;
`timescale 1ns/1ps

interface uart_if(input logic clk);
  logic rst_n;
  logic tx;
  logic rx;
  logic [7:0] tx_data;
  logic tx_start;
  logic tx_busy;
  logic [7:0] rx_data;
  logic rx_ready;
endinterface

class UartTxn extends uvm_sequence_item;
  rand bit [7:0] data;
  `uvm_object_utils(UartTxn)
  function new(string n="UartTxn"); super.new(n); endfunction
endclass

class UartSeq extends uvm_sequence #(UartTxn);
  `uvm_object_utils(UartSeq)
  function new(string n="UartSeq"); super.new(n); endfunction
  task body();
    UartTxn t;
    repeat (3) begin
      t = UartTxn::type_id::create("t");
      void'(t.randomize());
      start_item(t); finish_item(t);
    end
  endtask
endclass

class UartDriver extends uvm_driver #(UartTxn);
  virtual uart_if vif;
  `uvm_component_utils(UartDriver)
  function new(string n, uvm_component p); super.new(n,p); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(virtual uart_if)::get(this,"","vif",vif))
      `uvm_fatal("NO_VIF","uart_if not set")
  endfunction
  task run_phase(uvm_phase phase);
    UartTxn t;
    vif.tx_start <= 0;
    forever begin
      seq_item_port.get_next_item(t);
      @(posedge vif.clk);
      vif.tx_data  <= t.data;
      vif.tx_start <= 1;
      @(posedge vif.clk);
      vif.tx_start <= 0;
      // wait busy deassert
      do @(posedge vif.clk); while (vif.tx_busy);
      seq_item_port.item_done();
    end
  endtask
endclass

class UartEnv extends uvm_env;
  uvm_sequencer #(UartTxn) seqr;
  UartDriver drv;
  `uvm_component_utils(UartEnv)
  function new(string n, uvm_component p); super.new(n,p); endfunction
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

class UartTest extends uvm_test;
  UartEnv env;
  `uvm_component_utils(UartTest)
  function new(string n, uvm_component p); super.new(n,p); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env = UartEnv::type_id::create("env", this);
  endfunction
  task run_phase(uvm_phase phase);
    UartSeq seq;
    phase.raise_objection(this);
    seq = UartSeq::type_id::create("seq");
    seq.start(env.seqr);
    #2000;
    phase.drop_objection(this);
  endtask
endclass

module uart_example;
  logic clk;
  uart_if vif(clk);
  assign vif.rx = vif.tx; // loopback (very simplified)

  uart dut (
    .clk(clk), .rst_n(vif.rst_n),
    .tx(vif.tx), .rx(vif.rx),
    .tx_data(vif.tx_data), .tx_start(vif.tx_start), .tx_busy(vif.tx_busy),
    .rx_data(vif.rx_data), .rx_ready(vif.rx_ready)
  );

  initial begin clk=0; forever #5 clk=~clk; end
  initial begin
    vif.rst_n=0; vif.tx_start=0; vif.tx_data=0;
    repeat(5) @(posedge clk);
    vif.rst_n=1;
  end
  initial begin
    uvm_config_db#(virtual uart_if)::set(null,"*","vif",vif);
    run_test("UartTest");
  end
endmodule

