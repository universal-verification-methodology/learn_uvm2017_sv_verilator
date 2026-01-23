/**
 * Module 7 Example 7.3: SPI Verification (conceptual stub)
 *
 * No SPI DUT is included in the SV/Verilator track yet; this example is a UVM
 * pattern scaffold for protocol verification.
 */
`include "uvm_macros.svh"
import uvm_pkg::*;

class SpiExampleTest extends uvm_test;
  `uvm_component_utils(SpiExampleTest)
  function new(string n, uvm_component p); super.new(n,p); endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    `uvm_info("SPI", "SPI example scaffold (no DUT connected)", UVM_MEDIUM)
    #100;
    phase.drop_objection(this);
  endtask
endclass

module spi_example;
  initial run_test("SpiExampleTest");
endmodule

