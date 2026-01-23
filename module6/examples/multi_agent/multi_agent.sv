/**
 * Module 6 Example 6.2: Multi-Agent Environment
 * Two independent agents coordinated from a single test.
 */
`include "uvm_macros.svh"
import uvm_pkg::*;

class MA_Txn extends uvm_sequence_item;
  rand bit [7:0] data;
  rand int       agent_id;
  `uvm_object_utils(MA_Txn)
  function new(string name="MA_Txn"); super.new(name); endfunction
  function string convert2string();
    return $sformatf("agent=%0d data=0x%02h", agent_id, data);
  endfunction
endclass

class MA_Sequencer extends uvm_sequencer #(MA_Txn);
  `uvm_component_utils(MA_Sequencer)
  function new(string n, uvm_component p); super.new(n,p); endfunction
endclass

class MA_Driver extends uvm_driver #(MA_Txn);
  `uvm_component_utils(MA_Driver)
  function new(string n, uvm_component p); super.new(n,p); endfunction
  task run_phase(uvm_phase phase);
    MA_Txn t;
    forever begin
      seq_item_port.get_next_item(t);
      `uvm_info("MA_DRV", {"drive: ", t.convert2string()}, UVM_MEDIUM)
      #5;
      seq_item_port.item_done();
    end
  endtask
endclass

class MA_Agent extends uvm_agent;
  int agent_id;
  MA_Sequencer seqr;
  MA_Driver    drv;
  `uvm_component_utils(MA_Agent)
  function new(string n, uvm_component p); super.new(n,p); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    seqr = MA_Sequencer::type_id::create("seqr", this);
    drv  = MA_Driver   ::type_id::create("drv",  this);
    if (!uvm_config_db#(int)::get(this,"","agent_id",agent_id)) agent_id = 0;
  endfunction
  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    drv.seq_item_port.connect(seqr.seq_item_export);
  endfunction
endclass

class MA_VirtualSeq extends uvm_sequence;
  MA_Sequencer seqr0;
  MA_Sequencer seqr1;
  `uvm_object_utils(MA_VirtualSeq)
  function new(string name="MA_VirtualSeq"); super.new(name); endfunction
  task body();
    MA_Txn t0, t1;
    fork
      begin
        repeat (5) begin
          t0 = MA_Txn::type_id::create("t0");
          /* verilator lint_off IGNOREDRETURN */
          void'(t0.randomize() with { agent_id == 0; });
          /* verilator lint_on IGNOREDRETURN */
          t0.agent_id = 0;
          seqr0.execute_item(t0);
        end
      end
      begin
        repeat (5) begin
          t1 = MA_Txn::type_id::create("t1");
          /* verilator lint_off IGNOREDRETURN */
          void'(t1.randomize() with { agent_id == 1; });
          /* verilator lint_on IGNOREDRETURN */
          t1.agent_id = 1;
          seqr1.execute_item(t1);
        end
      end
    join
  endtask
endclass

class MA_Env extends uvm_env;
  MA_Agent a0;
  MA_Agent a1;
  `uvm_component_utils(MA_Env)
  function new(string n, uvm_component p); super.new(n,p); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    uvm_config_db#(int)::set(this,"a0","agent_id",0);
    uvm_config_db#(int)::set(this,"a1","agent_id",1);
    a0 = MA_Agent::type_id::create("a0", this);
    a1 = MA_Agent::type_id::create("a1", this);
  endfunction
endclass

class MultiAgentTest extends uvm_test;
  MA_Env env;
  `uvm_component_utils(MultiAgentTest)
  function new(string n, uvm_component p); super.new(n,p); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env = MA_Env::type_id::create("env", this);
  endfunction
  task run_phase(uvm_phase phase);
    MA_VirtualSeq vseq;
    phase.raise_objection(this);
    vseq = MA_VirtualSeq::type_id::create("vseq");
    vseq.seqr0 = env.a0.seqr;
    vseq.seqr1 = env.a1.seqr;
    vseq.start(null);
    #200;
    phase.drop_objection(this);
  endtask
endclass

module multi_agent;
  initial run_test("MultiAgentTest");
endmodule

