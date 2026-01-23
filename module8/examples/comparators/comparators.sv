/**
 * Module 8 Example 8.2: UVM Comparators
 * Demonstrates using comparators for transaction comparison in scoreboards.
 * 
 * This example shows:
 * - In-order transaction comparison
 * - Out-of-order transaction comparison
 * - Transaction matching algorithms
 * - Comparator statistics and reporting
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Transaction for comparator example
 */
class ComparatorTransaction extends uvm_sequence_item;
    rand logic [7:0] data;
    rand logic [15:0] address;
    int timestamp;
    
    `uvm_object_utils(ComparatorTransaction)
    
    function new(string name = "ComparatorTransaction");
        super.new(name);
        timestamp = 0;
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h, ts=%0d", data, address, timestamp);
    endfunction
    
    function bit compare(ComparatorTransaction rhs);
        return (data == rhs.data && address == rhs.address);
    endfunction
endclass

// Declare different analysis imp types for expected and actual
`uvm_analysis_imp_decl(_expected)
`uvm_analysis_imp_decl(_actual)

/**
 * In-order comparator for transactions
 */
class InOrderComparator extends uvm_component;
    uvm_analysis_imp_expected #(ComparatorTransaction, InOrderComparator) expected_imp;
    uvm_analysis_imp_actual #(ComparatorTransaction, InOrderComparator) actual_imp;
    
    ComparatorTransaction expected_queue[$];
    ComparatorTransaction actual_queue[$];
    int match_count;
    int mismatches;
    
    `uvm_component_utils(InOrderComparator)
    
    function new(string name = "InOrderComparator", uvm_component parent = null);
        super.new(name, parent);
        expected_imp = new("expected_imp", this);
        actual_imp = new("actual_imp", this);
        match_count = 0;
        mismatches = 0;
    endfunction
    
    function void write_expected(ComparatorTransaction txn);
        expected_queue.push_back(txn);
        `uvm_info("COMPARATOR", $sformatf("Expected: %s", txn.convert2string()), UVM_DEBUG)
        compare_transactions();
    endfunction
    
    function void write_actual(ComparatorTransaction txn);
        actual_queue.push_back(txn);
        `uvm_info("COMPARATOR", $sformatf("Actual: %s", txn.convert2string()), UVM_DEBUG)
        compare_transactions();
    endfunction
    
    function void compare_transactions();
        while (expected_queue.size() > 0 && actual_queue.size() > 0) begin
            ComparatorTransaction exp_txn = expected_queue.pop_front();
            ComparatorTransaction act_txn = actual_queue.pop_front();
            
            if (exp_txn.compare(act_txn)) begin
                match_count++;
                `uvm_info("COMPARATOR", $sformatf("MATCH: %s", exp_txn.convert2string()), UVM_MEDIUM)
            end else begin
                mismatches++;
                `uvm_error("COMPARATOR", $sformatf("MISMATCH: Expected %s, Got %s", 
                    exp_txn.convert2string(), act_txn.convert2string()))
            end
        end
    endfunction
    
    function void report_phase(uvm_phase phase);
        `uvm_info("COMPARATOR", $sformatf("Comparator Statistics:"), UVM_LOW)
        `uvm_info("COMPARATOR", $sformatf("  Matches: %0d", match_count), UVM_LOW)
        `uvm_info("COMPARATOR", $sformatf("  Mismatches: %0d", mismatches), UVM_LOW)
        `uvm_info("COMPARATOR", $sformatf("  Pending Expected: %0d", expected_queue.size()), UVM_LOW)
        `uvm_info("COMPARATOR", $sformatf("  Pending Actual: %0d", actual_queue.size()), UVM_LOW)
    endfunction
endclass

/**
 * Out-of-order comparator using address matching
 */
class OutOfOrderComparator extends uvm_component;
    uvm_analysis_imp_expected #(ComparatorTransaction, OutOfOrderComparator) expected_imp;
    uvm_analysis_imp_actual #(ComparatorTransaction, OutOfOrderComparator) actual_imp;
    
    ComparatorTransaction expected_map[logic [15:0]];
    ComparatorTransaction actual_map[logic [15:0]];
    int match_count;
    int mismatches;
    
    `uvm_component_utils(OutOfOrderComparator)
    
    function new(string name = "OutOfOrderComparator", uvm_component parent = null);
        super.new(name, parent);
        expected_imp = new("expected_imp", this);
        actual_imp = new("actual_imp", this);
        match_count = 0;
        mismatches = 0;
    endfunction
    
    function void write_expected(ComparatorTransaction txn);
        expected_map[txn.address] = txn;
        `uvm_info("COMPARATOR", $sformatf("Expected: %s", txn.convert2string()), UVM_DEBUG)
        compare_transactions();
    endfunction
    
    function void write_actual(ComparatorTransaction txn);
        actual_map[txn.address] = txn;
        `uvm_info("COMPARATOR", $sformatf("Actual: %s", txn.convert2string()), UVM_DEBUG)
        compare_transactions();
    endfunction
    
    function void compare_transactions();
        logic [15:0] addr;
        
        // Check for matches
        foreach (expected_map[addr]) begin
            if (actual_map.exists(addr)) begin
                ComparatorTransaction exp_txn = expected_map[addr];
                ComparatorTransaction act_txn = actual_map[addr];
                
                if (exp_txn.compare(act_txn)) begin
                    match_count++;
                    `uvm_info("COMPARATOR", $sformatf("MATCH (addr=0x%04h): %s", addr, exp_txn.convert2string()), UVM_MEDIUM)
                end else begin
                    mismatches++;
                    `uvm_error("COMPARATOR", $sformatf("MISMATCH (addr=0x%04h): Expected %s, Got %s", 
                        addr, exp_txn.convert2string(), act_txn.convert2string()))
                end
                
                expected_map.delete(addr);
                actual_map.delete(addr);
            end
        end
    endfunction
    
    function void report_phase(uvm_phase phase);
        `uvm_info("COMPARATOR", $sformatf("Out-of-Order Comparator Statistics:"), UVM_LOW)
        `uvm_info("COMPARATOR", $sformatf("  Matches: %0d", match_count), UVM_LOW)
        `uvm_info("COMPARATOR", $sformatf("  Mismatches: %0d", mismatches), UVM_LOW)
        `uvm_info("COMPARATOR", $sformatf("  Pending Expected: %0d", expected_map.size()), UVM_LOW)
        `uvm_info("COMPARATOR", $sformatf("  Pending Actual: %0d", actual_map.size()), UVM_LOW)
    endfunction
endclass

/**
 * Scoreboard using comparator
 */
class ComparatorScoreboard extends uvm_scoreboard;
    InOrderComparator in_order_comp;
    OutOfOrderComparator out_of_order_comp;
    uvm_analysis_port #(ComparatorTransaction) expected_port;
    uvm_analysis_port #(ComparatorTransaction) actual_port;
    
    `uvm_component_utils(ComparatorScoreboard)
    
    function new(string name = "ComparatorScoreboard", uvm_component parent = null);
        super.new(name, parent);
        expected_port = new("expected_port", this);
        actual_port = new("actual_port", this);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        in_order_comp = InOrderComparator::type_id::create("in_order_comp", this);
        out_of_order_comp = OutOfOrderComparator::type_id::create("out_of_order_comp", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        expected_port.connect(in_order_comp.expected_imp);
        actual_port.connect(in_order_comp.actual_imp);
        expected_port.connect(out_of_order_comp.expected_imp);
        actual_port.connect(out_of_order_comp.actual_imp);
    endfunction
endclass

/**
 * Test for comparator example
 */
class ComparatorTest extends uvm_test;
    ComparatorScoreboard scoreboard;
    
    `uvm_component_utils(ComparatorTest)
    
    function new(string name = "ComparatorTest", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        scoreboard = ComparatorScoreboard::type_id::create("scoreboard", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        ComparatorTransaction exp_txn, act_txn;
        phase.raise_objection(this);
        
        // Generate matching transactions
        for (int i = 0; i < 10; i++) begin
            exp_txn = ComparatorTransaction::type_id::create("exp_txn");
            act_txn = ComparatorTransaction::type_id::create("act_txn");
            
            void'(exp_txn.randomize());
            act_txn.data = exp_txn.data;
            act_txn.address = exp_txn.address;
            act_txn.timestamp = i;
            
            scoreboard.expected_port.write(exp_txn);
            #10;
            scoreboard.actual_port.write(act_txn);
            #10;
        end
        
        #100;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level module for comparator example
 */
module comparators_top;
    import uvm_pkg::*;
    
    initial begin
        run_test("ComparatorTest");
    end
endmodule
