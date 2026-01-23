/**
 * Module 4 Example 4.1: Transaction-Level Modeling
 * Demonstrates transaction design, operations, and methods.
 * 
 * This example shows:
 * - Transaction class design
 * - Transaction fields and data members
 * - Transaction copy and comparison operations
 * - Extended transactions with inheritance
 * - Constrained random transactions
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Base transaction class
 */
class BaseTransaction extends uvm_sequence_item;
    logic [7:0] data;
    logic [15:0] address;
    
    `uvm_object_utils(BaseTransaction)
    
    function new(string name = "BaseTransaction");
        super.new(name);
        data = 8'h00;
        address = 16'h0000;
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h", data, address);
    endfunction
    
    function void do_copy(uvm_object rhs);
        BaseTransaction txn;
        if (!$cast(txn, rhs)) begin
            `uvm_fatal("COPY", "Copy failed: wrong type")
            return;
        end
        super.do_copy(rhs);
        data = txn.data;
        address = txn.address;
    endfunction
    
    function bit do_compare(uvm_object rhs, uvm_comparer comparer);
        BaseTransaction txn;
        if (!$cast(txn, rhs)) return 0;
        return (data == txn.data) && (address == txn.address);
    endfunction
endclass

/**
 * Extended transaction with additional fields
 */
class ExtendedTransaction extends BaseTransaction;
    logic [7:0] control;
    logic [7:0] status;
    
    `uvm_object_utils(ExtendedTransaction)
    
    function new(string name = "ExtendedTransaction");
        super.new(name);
        control = 8'h00;
        status = 8'h00;
    endfunction
    
    function string convert2string();
        return $sformatf("%s, ctrl=0x%02h, status=0x%02h", 
                        super.convert2string(), control, status);
    endfunction
    
    function void do_copy(uvm_object rhs);
        ExtendedTransaction txn;
        super.do_copy(rhs);
        if (!$cast(txn, rhs)) return;
        control = txn.control;
        status = txn.status;
    endfunction
    
    function bit do_compare(uvm_object rhs, uvm_comparer comparer);
        ExtendedTransaction txn;
        if (!$cast(txn, rhs)) return 0;
        return super.do_compare(rhs, comparer) && 
               (control == txn.control) && (status == txn.status);
    endfunction
endclass

/**
 * Constrained transaction
 */
class ConstrainedTransaction extends uvm_sequence_item;
    rand logic [7:0] data;
    rand logic [15:0] address;
    
    `uvm_object_utils(ConstrainedTransaction)
    
    constraint address_aligned {
        address[1:0] == 2'b00;  // 4-byte aligned
    }
    
    constraint data_nonzero {
        data != 8'h00;
    }
    
    function new(string name = "ConstrainedTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h", data, address);
    endfunction
endclass

/**
 * Test class demonstrating transactions
 */
class TransactionsTest extends uvm_test;
    BaseTransaction base_txn1, base_txn2;
    ExtendedTransaction ext_txn;
    ConstrainedTransaction constr_txn;
    
    `uvm_component_utils(TransactionsTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("TEST", "Building transaction test", UVM_MEDIUM)
        
        base_txn1 = BaseTransaction::type_id::create("base_txn1");
        base_txn2 = BaseTransaction::type_id::create("base_txn2");
        ext_txn = ExtendedTransaction::type_id::create("ext_txn");
        constr_txn = ConstrainedTransaction::type_id::create("constr_txn");
    endfunction
    
    task run_phase(uvm_phase phase);
        BaseTransaction base_copy;
        
        phase.raise_objection(this);
        
        `uvm_info("TEST", "Demonstrating base transactions", UVM_MEDIUM)
        base_txn1.data = 8'hAA;
        base_txn1.address = 16'h1234;
        `uvm_info("TEST", $sformatf("Base transaction 1: %s", base_txn1.convert2string()), UVM_MEDIUM)
        
        base_txn2.data = 8'hAA;
        base_txn2.address = 16'h1234;
        `uvm_info("TEST", $sformatf("Base transaction 2: %s", base_txn2.convert2string()), UVM_MEDIUM)
        
        if (base_txn1.compare(base_txn2)) begin
            `uvm_info("TEST", "Transactions are equal", UVM_MEDIUM)
        end else begin
            `uvm_error("TEST", "Transactions should be equal")
        end
        
        // Demonstrate copy
        base_copy = BaseTransaction::type_id::create("base_copy");
        base_copy.copy(base_txn1);
        `uvm_info("TEST", $sformatf("Copied transaction: %s", base_copy.convert2string()), UVM_MEDIUM)
        
        // Extended transaction
        `uvm_info("TEST", "Demonstrating extended transactions", UVM_MEDIUM)
        ext_txn.data = 8'hBB;
        ext_txn.address = 16'h5678;
        ext_txn.control = 8'h11;
        ext_txn.status = 8'h22;
        `uvm_info("TEST", $sformatf("Extended transaction: %s", ext_txn.convert2string()), UVM_MEDIUM)
        
        // Constrained transaction
        `uvm_info("TEST", "Demonstrating constrained transactions", UVM_MEDIUM)
        if (constr_txn.randomize()) begin
            `uvm_info("TEST", $sformatf("Randomized transaction: %s", constr_txn.convert2string()), UVM_MEDIUM)
        end else begin
            `uvm_error("TEST", "Randomization failed")
        end
        
        #100;
        phase.drop_objection(this);
    endtask
    
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        `uvm_info("TEST", "Transaction demonstration complete", UVM_MEDIUM)
    endfunction
endclass

/**
 * Top-level testbench module
 */
module transactions;
    initial begin
        $display("============================================================");
        $display("UVM Transaction Example");
        $display("============================================================");
        $display();
        
        run_test("TransactionsTest");
    end
endmodule
