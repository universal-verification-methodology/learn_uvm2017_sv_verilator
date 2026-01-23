/**
 * Module 7 Example 7.5: VIP Development (skeleton)
 * Demonstrates how a protocol VIP might be packaged: txn + seq + agent.
 */
`include "uvm_macros.svh"
import uvm_pkg::*;

class VipTxn extends uvm_sequence_item;
  rand bit [7:0] payload;
  `uvm_object_utils(VipTxn)
  function new(string n="VipTxn"); super.new(n); endfunction
endclass

class VipSeq extends uvm_sequence #(VipTxn);
  `uvm_object_utils(VipSeq)
  function new(string n="VipSeq"); super.new(n); endfunction
  task body();
    VipTxn t;
    repeat (5) begin
      t = VipTxn::type_id::create("t");
      /* verilator lint_off IGNOREDRETURN */
      void'(t.randomize());
      /* verilator lint_on IGNOREDRETURN */
      start_item(t); finish_item(t);
    end
  endtask
endclass

class VipDriver extends uvm_driver #(VipTxn);
  `uvm_component_utils(VipDriver)
  function new(string n, uvm_component p); super.new(n,p); endfunction
  task run_phase(uvm_phase phase);
    VipTxn t;
    forever begin
      seq_item_port.get_next_item(t);
      `uvm_info("VIP_DRV", $sformatf("drive payload=0x%02h", t.payload), UVM_MEDIUM)
      #10;
      seq_item_port.item_done();
    end
  endtask
endclass

class VipAgent extends uvm_agent;
  uvm_sequencer #(VipTxn) seqr;
  VipDriver drv;
  `uvm_component_utils(VipAgent)
  function new(string n, uvm_component p); super.new(n,p); endfunction
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

class VipTest extends uvm_test;
  VipAgent agent;
  `uvm_component_utils(VipTest)
  function new(string n, uvm_component p); super.new(n,p); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    agent = VipAgent::type_id::create("agent", this);
  endfunction
  task run_phase(uvm_phase phase);
    VipSeq seq;
    phase.raise_objection(this);
    seq = VipSeq::type_id::create("seq");
    seq.start(agent.seqr);
    #200;
    phase.drop_objection(this);
  endtask
endclass

module vip;
  initial run_test("VipTest");
endmodule

