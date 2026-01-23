/**
 * Module 4 Example 4.4: UVM Sequencer and Sequences
 * Demonstrates sequencer implementation and sequence execution.
 * 
 * This example shows:
 * - Sequencer implementation
 * - Sequence items
 * - Sequences
 * - Sequence execution
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Sequence item for sequencer example
 */
class SeqItem extends uvm_sequence_item;
    rand logic [7:0] data;
    rand logic [15:0] address;
    
    `uvm_object_utils(SeqItem)
    
    constraint valid_address {
        address[1:0] == 2'b00;  // 4-byte aligned
    }
    
    function new(string name = "SeqItem");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h", data, address);
    endfunction
endclass

/**
 * Simple sequence
 */
class SimpleSequence extends uvm_sequence #(SeqItem);
    `uvm_object_utils(SimpleSequence)
    
    function new(string name = "SimpleSequence");
        super.new(name);
    endfunction
    
    task body();
        SeqItem item;
        
        `uvm_info("SEQUENCE", "Starting simple sequence", UVM_MEDIUM)
        
        for (int i = 0; i < 5; i++) begin
            item = SeqItem::type_id::create("item");
            if (!item.randomize()) begin
                `uvm_error("SEQUENCE", "Randomization failed")
            end
            
            `uvm_info("SEQUENCE", $sformatf("Sending item %0d: %s", 
                      i, item.convert2string()), UVM_MEDIUM)
            
            start_item(item);
            finish_item(item);
        end
        
        `uvm_info("SEQUENCE", "Simple sequence complete", UVM_MEDIUM)
    endtask
endclass

/**
 * Extended sequence with multiple items
 */
class ExtendedSequence extends uvm_sequence #(SeqItem);
    int num_items = 10;
    
    `uvm_object_utils(ExtendedSequence)
    
    function new(string name = "ExtendedSequence");
        super.new(name);
    endfunction
    
    task body();
        SeqItem item;
        
        `uvm_info("SEQUENCE", $sformatf("Starting extended sequence with %0d items", 
                  num_items), UVM_MEDIUM)
        
        for (int i = 0; i < num_items; i++) begin
            item = SeqItem::type_id::create($sformatf("item_%0d", i));
            if (!item.randomize()) begin
                `uvm_error("SEQUENCE", "Randomization failed")
            end
            
            start_item(item);
            finish_item(item);
        end
        
        `uvm_info("SEQUENCE", "Extended sequence complete", UVM_MEDIUM)
    endtask
endclass

/**
 * Driver for sequencer example
 */
class SeqDriver extends uvm_driver #(SeqItem);
    `uvm_component_utils(SeqDriver)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    task run_phase(uvm_phase phase);
        SeqItem item;
        
        forever begin
            seq_item_port.get_next_item(item);
            `uvm_info("DRIVER", $sformatf("Received: %s", item.convert2string()), UVM_MEDIUM)
            #10;
            seq_item_port.item_done();
        end
    endtask
endclass

/**
 * Test class demonstrating sequencers
 */
class SequencersTest extends uvm_test;
    SeqDriver driver;
    uvm_sequencer #(SeqItem) sequencer;
    SimpleSequence seq;
    
    `uvm_component_utils(SequencersTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("TEST", "Building sequencer test", UVM_MEDIUM)
        driver = SeqDriver::type_id::create("driver", this);
        sequencer = uvm_sequencer#(SeqItem)::type_id::create("sequencer", this);
        seq = SimpleSequence::type_id::create("seq");
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        
        `uvm_info("TEST", "Starting sequencer test", UVM_MEDIUM)
        
        // Start sequence
        seq.start(sequencer);
        
        #100;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level testbench module
 */
module sequencers;
    initial begin
        $display("============================================================");
        $display("UVM Sequencer and Sequence Example");
        $display("============================================================");
        $display();
        
        run_test("SequencersTest");
    end
endmodule
