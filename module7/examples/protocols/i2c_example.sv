/**
 * Module 7 Example 7.4: I2C Verification (conceptual stub)
 *
 * No I2C DUT is included in the SV/Verilator track yet; this example is a UVM
 * pattern scaffold for protocol verification.
 */
`include "uvm_macros.svh"
import uvm_pkg::*;

class I2cExampleTest extends uvm_test;
  `uvm_component_utils(I2cExampleTest)
  function new(string n, uvm_component p); super.new(n,p); endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    `uvm_info("I2C", "I2C example scaffold (no DUT connected)", UVM_MEDIUM)
    #100;
    phase.drop_objection(this);
  endtask
endclass

module i2c_example;
  initial run_test("I2cExampleTest");
endmodule

