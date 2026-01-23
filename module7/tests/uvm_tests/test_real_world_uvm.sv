/**
 * Module 7: Real-World UVM Test (DMA + UART smoke)
 * Instantiates both DUTs and runs minimal directed stimulus.
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

class RealWorldTest extends uvm_test;
  `uvm_component_utils(RealWorldTest)
  function new(string n, uvm_component p); super.new(n,p); endfunction

  virtual dma_if dma_vif;
  virtual uart_if uart_vif;

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    void'(uvm_config_db#(virtual dma_if)::get(this,"","dma_vif",dma_vif));
    void'(uvm_config_db#(virtual uart_if)::get(this,"","uart_vif",uart_vif));
  endfunction

  task run_phase(uvm_phase phase);
    phase.raise_objection(this);

    // DMA directed
    `uvm_info("RW", "Starting DMA transfer", UVM_MEDIUM)
    @(posedge dma_vif.clk);
    dma_vif.dma_src_addr <= 32'h1000_0000;
    dma_vif.dma_dst_addr <= 32'h2000_0000;
    dma_vif.dma_length   <= 16'd10;
    dma_vif.dma_channel  <= 3'd1;
    dma_vif.dma_start    <= 1;
    @(posedge dma_vif.clk);
    dma_vif.dma_start    <= 0;
    do @(posedge dma_vif.clk); while (!dma_vif.dma_done);
    `uvm_info("RW", "DMA done observed", UVM_MEDIUM)

    // UART directed
    `uvm_info("RW", "Starting UART TX", UVM_MEDIUM)
    @(posedge uart_vif.clk);
    uart_vif.tx_data  <= 8'hA5;
    uart_vif.tx_start <= 1;
    @(posedge uart_vif.clk);
    uart_vif.tx_start <= 0;
    do @(posedge uart_vif.clk); while (uart_vif.tx_busy);
    `uvm_info("RW", "UART tx complete", UVM_MEDIUM)

    #500;
    phase.drop_objection(this);
  endtask
endclass

module test_real_world_uvm;
  logic clk;
  dma_if  dma_vif(clk);
  uart_if uart_vif(clk);
  assign uart_vif.rx = uart_vif.tx; // loopback

  simple_dma dma_dut (
    .clk(clk), .rst_n(dma_vif.rst_n),
    .dma_start(dma_vif.dma_start), .dma_done(dma_vif.dma_done),
    .dma_src_addr(dma_vif.dma_src_addr), .dma_dst_addr(dma_vif.dma_dst_addr),
    .dma_length(dma_vif.dma_length), .dma_channel(dma_vif.dma_channel)
  );

  uart uart_dut (
    .clk(clk), .rst_n(uart_vif.rst_n),
    .tx(uart_vif.tx), .rx(uart_vif.rx),
    .tx_data(uart_vif.tx_data), .tx_start(uart_vif.tx_start), .tx_busy(uart_vif.tx_busy),
    .rx_data(uart_vif.rx_data), .rx_ready(uart_vif.rx_ready)
  );

  initial begin clk=0; forever #5 clk=~clk; end
  initial begin
    dma_vif.rst_n = 0; uart_vif.rst_n = 0;
    dma_vif.dma_start = 0;
    uart_vif.tx_start = 0; uart_vif.tx_data = 0;
    repeat(5) @(posedge clk);
    dma_vif.rst_n = 1; uart_vif.rst_n = 1;
  end

  initial begin
    uvm_config_db#(virtual dma_if)::set(null,"*","dma_vif",dma_vif);
    uvm_config_db#(virtual uart_if)::set(null,"*","uart_vif",uart_vif);
    run_test("RealWorldTest");
  end
endmodule

