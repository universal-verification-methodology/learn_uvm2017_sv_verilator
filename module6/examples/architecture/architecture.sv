/**
 * Module 6 Example 6.1: Testbench Architecture
 * Demonstrates a structured, hierarchical UVM environment skeleton.
 */
`include "uvm_macros.svh"
import uvm_pkg::*;

class ArchTxn extends uvm_sequence_item;
  rand bit [31:0] addr;
  rand bit [31:0] data;
  rand bit        is_write;
  `uvm_object_utils(ArchTxn)
  function new(string name="ArchTxn"); super.new(name); endfunction
  function string convert2string();
    return $sformatf("addr=0x%08h data=0x%08h is_write=%0b", addr, data, is_write);
  endfunction
endclass

class ArchSequencer extends uvm_sequencer #(ArchTxn);
  `uvm_component_utils(ArchSequencer)
  function new(string name, uvm_component parent); super.new(name,parent); endfunction
endclass

class ArchDriver extends uvm_driver #(ArchTxn);
  `uvm_component_utils(ArchDriver)
  function new(string name, uvm_component parent); super.new(name,parent); endfunction
  task run_phase(uvm_phase phase);
    ArchTxn t;
    forever begin
      seq_item_port.get_next_item(t);
      `uvm_info("ARCH_DRV", {"drive: ", t.convert2string()}, UVM_MEDIUM)
      #5;
      seq_item_port.item_done();
    end
  endtask
endclass

class ArchMonitor extends uvm_monitor;
  uvm_analysis_port #(ArchTxn) ap;
  `uvm_component_utils(ArchMonitor)
  function new(string name, uvm_component parent);
    super.new(name,parent);
    ap = new("ap", this);
  endfunction
  task run_phase(uvm_phase phase);
    forever begin
      #10;
      // In a real bench this would sample DUT signals and publish a txn
    end
  endtask
endclass

class ArchAgent extends uvm_agent;
  ArchSequencer seqr;
  ArchDriver    drv;
  ArchMonitor   mon;
  `uvm_component_utils(ArchAgent)
  function new(string name, uvm_component parent); super.new(name,parent); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    seqr = ArchSequencer::type_id::create("seqr", this);
    drv  = ArchDriver   ::type_id::create("drv",  this);
    mon  = ArchMonitor  ::type_id::create("mon",  this);
  endfunction
  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    drv.seq_item_port.connect(seqr.seq_item_export);
  endfunction
endclass

class ArchEnv extends uvm_env;
  ArchAgent agent;
  `uvm_component_utils(ArchEnv)
  function new(string name, uvm_component parent); super.new(name,parent); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    agent = ArchAgent::type_id::create("agent", this);
  endfunction
endclass

class ArchSmokeSeq extends uvm_sequence #(ArchTxn);
  `uvm_object_utils(ArchSmokeSeq)
  function new(string name="ArchSmokeSeq"); super.new(name); endfunction
  task body();
    ArchTxn t;
    repeat (5) begin
      t = ArchTxn::type_id::create("t");
      void'(t.randomize() with { is_write inside {0,1}; });
      start_item(t); finish_item(t);
    end
  endtask
endclass

class ArchitectureTest extends uvm_test;
  ArchEnv env;
  `uvm_component_utils(ArchitectureTest)
  function new(string name, uvm_component parent); super.new(name,parent); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env = ArchEnv::type_id::create("env", this);
  endfunction
  task run_phase(uvm_phase phase);
    ArchSmokeSeq seq;
    phase.raise_objection(this);
    seq = ArchSmokeSeq::type_id::create("seq");
    seq.start(env.agent.seqr);
    #100;
    phase.drop_objection(this);
  endtask
endclass

module architecture;
  initial run_test("ArchitectureTest");
endmodule

