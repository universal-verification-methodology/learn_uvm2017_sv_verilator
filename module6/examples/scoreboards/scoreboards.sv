/**
 * Module 6 Example 6.5: Multi-Channel Scoreboards
 * Demonstrates matching transactions from two streams.
 */
`include "uvm_macros.svh"
import uvm_pkg::*;

class SB_Txn extends uvm_sequence_item;
  int stream_id;
  int seq;
  bit [7:0] data;
  `uvm_object_utils(SB_Txn)
  function new(string n="SB_Txn"); super.new(n); endfunction
  function string convert2string();
    return $sformatf("stream=%0d seq=%0d data=0x%02h", stream_id, seq, data);
  endfunction
endclass

class StreamProducer extends uvm_component;
  uvm_analysis_port #(SB_Txn) ap;
  int stream_id;
  `uvm_component_utils(StreamProducer)
  function new(string n, uvm_component p);
    super.new(n,p);
    ap = new("ap", this);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(int)::get(this,"","stream_id",stream_id)) stream_id = 0;
  endfunction
  task run_phase(uvm_phase phase);
    SB_Txn t;
    phase.raise_objection(this);
    for (int i=0;i<10;i++) begin
      t = SB_Txn::type_id::create("t");
      t.stream_id = stream_id;
      t.seq = i;
      t.data = (stream_id==0) ? (8'hA0+i) : (8'hA0+i); // make matchable
      ap.write(t);
      #10;
    end
    phase.drop_objection(this);
  endtask
endclass

class MultiChannelScoreboard extends uvm_component;
  uvm_analysis_imp #(SB_Txn, MultiChannelScoreboard) imp;
  SB_Txn q0[int];
  SB_Txn q1[int];
  int pass=0, fail=0;
  `uvm_component_utils(MultiChannelScoreboard)
  function new(string n, uvm_component p);
    super.new(n,p);
    imp = new("imp", this);
  endfunction
  function void write(SB_Txn t);
    if (t.stream_id == 0) q0[t.seq] = t;
    else q1[t.seq] = t;
    if (q0.exists(t.seq) && q1.exists(t.seq)) begin
      if (q0[t.seq].data == q1[t.seq].data) begin
        pass++;
        `uvm_info("SB", $sformatf("MATCH seq=%0d data=0x%02h", t.seq, t.data), UVM_MEDIUM)
      end else begin
        fail++;
        `uvm_error("SB", $sformatf("MISMATCH seq=%0d s0=0x%02h s1=0x%02h",
                  t.seq, q0[t.seq].data, q1[t.seq].data))
      end
      q0.delete(t.seq);
      q1.delete(t.seq);
    end
  endfunction
  function void report_phase(uvm_phase phase);
    super.report_phase(phase);
    `uvm_info("SB", $sformatf("pass=%0d fail=%0d", pass, fail), UVM_MEDIUM)
  endfunction
endclass

class ScoreboardsTest extends uvm_test;
  StreamProducer p0, p1;
  MultiChannelScoreboard sb;
  `uvm_component_utils(ScoreboardsTest)
  function new(string n, uvm_component p); super.new(n,p); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    uvm_config_db#(int)::set(this,"p0","stream_id",0);
    uvm_config_db#(int)::set(this,"p1","stream_id",1);
    p0 = StreamProducer::type_id::create("p0", this);
    p1 = StreamProducer::type_id::create("p1", this);
    sb = MultiChannelScoreboard::type_id::create("sb", this);
  endfunction
  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    p0.ap.connect(sb.imp);
    p1.ap.connect(sb.imp);
  endfunction
endclass

module scoreboards;
  initial run_test("ScoreboardsTest");
endmodule

