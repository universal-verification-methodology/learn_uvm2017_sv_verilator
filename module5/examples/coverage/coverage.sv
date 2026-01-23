/**
 * Module 5 Example 5.2: UVM Coverage Models
 * Demonstrates functional coverage implementation.
 * 
 * This example shows:
 * - Coverage model class structure
 * - Coverage sampling
 * - Coverage analysis
 * - Coverage reporting
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Transaction for coverage example
 */
class CoverageTransaction extends uvm_sequence_item;
    logic [7:0] data;
    logic [15:0] address;
    logic [7:0] command;
    
    `uvm_object_utils(CoverageTransaction)
    
    function new(string name = "CoverageTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h, cmd=0x%02h", 
                        data, address, command);
    endfunction
endclass

/**
 * Coverage model demonstrating functional coverage
 */
class CoverageModel extends uvm_subscriber #(CoverageTransaction);
    // Coverage data structures
    int data_coverage[logic [7:0]];  // Track unique data values
    int address_ranges[3];  // low, mid, high
    int command_coverage[logic [7:0]];  // Track unique command values
    int cross_coverage[logic [7:0]][logic [7:0]];  // (data, command) pairs
    
    `uvm_component_utils(CoverageModel)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        address_ranges[0] = 0;  // low
        address_ranges[1] = 0;  // mid
        address_ranges[2] = 0;  // high
    endfunction
    
    function void write(CoverageTransaction t);
        `uvm_info("COVERAGE", $sformatf("Sampling coverage for: %s", t.convert2string()), UVM_DEBUG)
        
        // Sample data coverage
        if (!data_coverage.exists(t.data)) begin
            data_coverage[t.data] = 0;
        end
        data_coverage[t.data]++;
        
        // Sample address range coverage
        if (t.address < 16'h4000) begin
            address_ranges[0]++;  // low
        end else if (t.address < 16'h8000) begin
            address_ranges[1]++;  // mid
        end else begin
            address_ranges[2]++;  // high
        end
        
        // Sample command coverage
        if (!command_coverage.exists(t.command)) begin
            command_coverage[t.command] = 0;
        end
        command_coverage[t.command]++;
        
        // Sample cross coverage
        if (!cross_coverage[t.data].exists(t.command)) begin
            cross_coverage[t.data][t.command] = 0;
        end
        cross_coverage[t.data][t.command]++;
    endfunction
    
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        int unique_data, unique_commands, unique_cross;
        
        unique_data = data_coverage.num();
        unique_commands = command_coverage.num();
        
        // Count unique cross coverage pairs
        unique_cross = 0;
        foreach (cross_coverage[data]) begin
            unique_cross += cross_coverage[data].num();
        end
        
        `uvm_info("COVERAGE", "============================================================", UVM_MEDIUM)
        `uvm_info("COVERAGE", "Coverage Report", UVM_MEDIUM)
        `uvm_info("COVERAGE", "============================================================", UVM_MEDIUM)
        `uvm_info("COVERAGE", $sformatf("Data Coverage: %0d unique values", unique_data), UVM_MEDIUM)
        `uvm_info("COVERAGE", $sformatf("Address Ranges - Low: %0d, Mid: %0d, High: %0d", 
                  address_ranges[0], address_ranges[1], address_ranges[2]), UVM_MEDIUM)
        `uvm_info("COVERAGE", $sformatf("Command Coverage: %0d unique values", unique_commands), UVM_MEDIUM)
        `uvm_info("COVERAGE", $sformatf("Cross Coverage: %0d unique pairs", unique_cross), UVM_MEDIUM)
    endfunction
endclass

/**
 * Producer to generate transactions for coverage
 */
class CoverageProducer extends uvm_component;
    uvm_analysis_port #(CoverageTransaction) ap;
    
    `uvm_component_utils(CoverageProducer)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        CoverageTransaction txn;
        
        phase.raise_objection(this);
        `uvm_info("PRODUCER", "Generating transactions for coverage", UVM_MEDIUM)
        
        // Generate various transactions
        for (int i = 0; i < 10; i++) begin
            txn = CoverageTransaction::type_id::create("txn");
            txn.data = $urandom_range(0, 255);
            txn.address = $urandom_range(0, 65535);
            txn.command = $urandom_range(0, 255);
            
            `uvm_info("PRODUCER", $sformatf("Generated: %s", txn.convert2string()), UVM_MEDIUM)
            ap.write(txn);
            #10;
        end
        
        phase.drop_objection(this);
    endtask
endclass

/**
 * Test class demonstrating coverage
 */
class CoverageTest extends uvm_test;
    CoverageModel coverage;
    CoverageProducer producer;
    
    `uvm_component_utils(CoverageTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("TEST", "Building coverage test", UVM_MEDIUM)
        coverage = CoverageModel::type_id::create("coverage", this);
        producer = CoverageProducer::type_id::create("producer", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        producer.ap.connect(coverage.analysis_export);
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        `uvm_info("TEST", "Starting coverage test", UVM_MEDIUM)
        #200;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level testbench module
 */
module coverage;
    initial begin
        $display("============================================================");
        $display("UVM Coverage Example");
        $display("============================================================");
        $display();
        
        run_test("CoverageTest");
    end
endmodule
