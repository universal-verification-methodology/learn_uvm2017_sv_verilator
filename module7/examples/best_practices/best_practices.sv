/**
 * Module 7 Example 7.6: Best Practices (small demo)
 * Highlights logging, naming, and short phases for maintainability.
 */
`include "uvm_macros.svh"
import uvm_pkg::*;

class BestPracticesTest extends uvm_test;
  `uvm_component_utils(BestPracticesTest)
  function new(string n, uvm_component p); super.new(n,p); endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    `uvm_info("BP", "build_phase: construct components/configure", UVM_MEDIUM)
  endfunction

  function void end_of_elaboration_phase(uvm_phase phase);
    super.end_of_elaboration_phase(phase);
    `uvm_info("BP", "end_of_elaboration: print topology", UVM_MEDIUM)
    uvm_root::get().print_topology();
  endfunction

  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    `uvm_info("BP", "run_phase: execute stimulus", UVM_MEDIUM)
    #100;
    phase.drop_objection(this);
  endtask

  function void report_phase(uvm_phase phase);
    super.report_phase(phase);
    `uvm_info("BP", "report_phase: summarize results", UVM_MEDIUM)
  endfunction
endclass

module best_practices;
  initial run_test("BestPracticesTest");
endmodule

