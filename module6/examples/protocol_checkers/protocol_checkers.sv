/**
 * Module 6 Example 6.4: Protocol Checkers
 * Demonstrates simple assertion-style checking for handshake behavior.
 */
`include "uvm_macros.svh"
import uvm_pkg::*;

interface chk_if(input logic clk);
  logic rst_n;
  logic valid;
  logic ready;
endinterface

class CheckerComp extends uvm_component;
  virtual chk_if vif;
  `uvm_component_utils(CheckerComp)
  function new(string n, uvm_component p); super.new(n,p); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(virtual chk_if)::get(this,"","vif",vif))
      `uvm_fatal("NO_VIF","chk_if not set")
  endfunction

  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    forever begin
      @(posedge vif.clk);
      if (!vif.rst_n) continue;
      // Simple checker: valid should stay asserted until ready
      if (vif.valid && !vif.ready) begin
        // observe a bounded wait for ready
        int cycles = 0;
        while (vif.valid && !vif.ready && cycles < 10) begin
          cycles++;
          @(posedge vif.clk);
        end
        if (vif.valid && !vif.ready)
          `uvm_error("CHK", "valid held without ready for >10 cycles (example rule)")
      end
    end
    phase.drop_objection(this);
  endtask
endclass

class ProtocolCheckersTest extends uvm_test;
  CheckerComp chk;
  `uvm_component_utils(ProtocolCheckersTest)
  function new(string n, uvm_component p); super.new(n,p); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    chk = CheckerComp::type_id::create("chk", this);
  endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    #500;
    phase.drop_objection(this);
  endtask
endclass

module protocol_checkers;
  logic clk;
  chk_if vif(clk);

  initial begin
    clk = 0;
    forever #5 clk = ~clk;
  end

  initial begin
    vif.rst_n = 0;
    vif.valid = 0;
    vif.ready = 0;
    repeat (3) @(posedge clk);
    vif.rst_n = 1;

    // generate some handshake activity
    repeat (5) begin
      @(posedge clk);
      vif.valid = 1;
      repeat (2) @(posedge clk);
      vif.ready = 1;
      @(posedge clk);
      vif.valid = 0;
      vif.ready = 0;
    end
  end

  initial begin
    uvm_config_db#(virtual chk_if)::set(null,"*","vif",vif);
    run_test("ProtocolCheckersTest");
  end
endmodule

