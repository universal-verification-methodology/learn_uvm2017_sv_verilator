/**
 * Module 5 Example 5.1: Virtual Sequences
 * Demonstrates virtual sequencer and virtual sequence coordination.
 * 
 * This example shows:
 * - Virtual sequencer containing references to multiple sequencers
 * - Virtual sequence coordinating sequences on different sequencers
 * - Parallel sequence execution
 * - Sequential sequence execution
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Transaction for virtual sequence example
 */
class VirtualTransaction extends uvm_sequence_item;
    logic [7:0] data;
    int channel;
    
    `uvm_object_utils(VirtualTransaction)
    
    function new(string name = "VirtualTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, channel=%0d", data, channel);
    endfunction
endclass

/**
 * Sequence for a single channel
 */
class ChannelSequence extends uvm_sequence #(VirtualTransaction);
    int channel;
    int num_items = 5;
    
    `uvm_object_utils(ChannelSequence)
    
    function new(string name = "ChannelSequence");
        super.new(name);
    endfunction
    
    task body();
        VirtualTransaction item;
        
        `uvm_info("SEQUENCE", $sformatf("Starting channel %0d sequence with %0d items", 
                  channel, num_items), UVM_MEDIUM)
        
        for (int i = 0; i < num_items; i++) begin
            item = VirtualTransaction::type_id::create($sformatf("item_%0d", i));
            item.data = i * 8'h10;
            item.channel = channel;
            
            start_item(item);
            finish_item(item);
            
            `uvm_info("SEQUENCE", $sformatf("Generated transaction %0d for channel %0d: %s", 
                      i, channel, item.convert2string()), UVM_MEDIUM)
        end
    endtask
endclass

/**
 * Virtual sequence coordinating multiple sequencers
 */
class VirtualSequence extends uvm_sequence;
    uvm_sequencer #(VirtualTransaction) master_seqr;
    uvm_sequencer #(VirtualTransaction) slave_seqr;
    
    `uvm_object_utils(VirtualSequence)
    
    function new(string name = "VirtualSequence");
        super.new(name);
    endfunction
    
    task body();
        ChannelSequence master_seq, slave_seq, seq1, seq2;
        
        `uvm_info("VIRTUAL_SEQ", "Starting virtual sequence", UVM_MEDIUM)
        
        // Parallel execution example
        if (master_seqr != null && slave_seqr != null) begin
            `uvm_info("VIRTUAL_SEQ", "Starting parallel sequences", UVM_MEDIUM)
            
            fork
                begin
                    master_seq = ChannelSequence::type_id::create("master_seq");
                    master_seq.channel = 0;
                    master_seq.num_items = 3;
                    master_seq.start(master_seqr);
                end
                begin
                    slave_seq = ChannelSequence::type_id::create("slave_seq");
                    slave_seq.channel = 1;
                    slave_seq.num_items = 3;
                    slave_seq.start(slave_seqr);
                end
            join
            
            `uvm_info("VIRTUAL_SEQ", "Parallel sequences completed", UVM_MEDIUM)
        end
        
        // Sequential execution example
        `uvm_info("VIRTUAL_SEQ", "Starting sequential sequences", UVM_MEDIUM)
        
        if (master_seqr != null) begin
            seq1 = ChannelSequence::type_id::create("seq1");
            seq1.channel = 0;
            seq1.num_items = 2;
            seq1.start(master_seqr);
        end
        
        if (slave_seqr != null) begin
            seq2 = ChannelSequence::type_id::create("seq2");
            seq2.channel = 1;
            seq2.num_items = 2;
            seq2.start(slave_seqr);
        end
        
        `uvm_info("VIRTUAL_SEQ", "Sequential sequences completed", UVM_MEDIUM)
    endtask
endclass

/**
 * Virtual sequencer containing references to multiple sequencers
 */
class VirtualSequencer extends uvm_sequencer;
    uvm_sequencer #(VirtualTransaction) master_seqr;
    uvm_sequencer #(VirtualTransaction) slave_seqr;
    
    `uvm_component_utils(VirtualSequencer)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("VIRTUAL_SEQR", "Building virtual sequencer", UVM_MEDIUM)
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        `uvm_info("VIRTUAL_SEQR", "Connecting virtual sequencer", UVM_MEDIUM)
        // In real implementation, get sequencer references from environment
        // master_seqr = env.master_agent.sequencer;
        // slave_seqr = env.slave_agent.sequencer;
    endfunction
endclass

/**
 * Simple driver
 */
class VirtualDriver extends uvm_driver #(VirtualTransaction);
    `uvm_component_utils(VirtualDriver)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    task run_phase(uvm_phase phase);
        VirtualTransaction item;
        
        forever begin
            seq_item_port.get_next_item(item);
            `uvm_info("DRIVER", $sformatf("Driving: %s", item.convert2string()), UVM_MEDIUM)
            #10;
            seq_item_port.item_done();
        end
    endtask
endclass

/**
 * Test class demonstrating virtual sequences
 */
class VirtualSequencesTest extends uvm_test;
    VirtualSequencer vseqr;
    uvm_sequencer #(VirtualTransaction) master_seqr;
    uvm_sequencer #(VirtualTransaction) slave_seqr;
    VirtualDriver master_driver;
    VirtualDriver slave_driver;
    VirtualSequence vseq;
    
    `uvm_component_utils(VirtualSequencesTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("TEST", "Building virtual sequence test", UVM_MEDIUM)
        vseqr = VirtualSequencer::type_id::create("vseqr", this);
        master_seqr = uvm_sequencer#(VirtualTransaction)::type_id::create("master_seqr", this);
        slave_seqr = uvm_sequencer#(VirtualTransaction)::type_id::create("slave_seqr", this);
        master_driver = VirtualDriver::type_id::create("master_driver", this);
        slave_driver = VirtualDriver::type_id::create("slave_driver", this);
        vseq = VirtualSequence::type_id::create("vseq");
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        master_driver.seq_item_port.connect(master_seqr.seq_item_export);
        slave_driver.seq_item_port.connect(slave_seqr.seq_item_export);
        vseqr.master_seqr = master_seqr;
        vseqr.slave_seqr = slave_seqr;
        vseq.master_seqr = master_seqr;
        vseq.slave_seqr = slave_seqr;
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        `uvm_info("TEST", "Starting virtual sequence test", UVM_MEDIUM)
        vseq.start(vseqr);
        #200;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level testbench module
 */
module virtual_sequences;
    initial begin
        $display("============================================================");
        $display("UVM Virtual Sequences Example");
        $display("============================================================");
        $display();
        
        run_test("VirtualSequencesTest");
    end
endmodule
