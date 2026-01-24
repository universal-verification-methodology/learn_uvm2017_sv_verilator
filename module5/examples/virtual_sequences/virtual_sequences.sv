/**
 * Module 5 Example 5.1: Virtual Sequences
 * Demonstrates virtual sequencer and virtual sequence coordination.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand virtual sequencer purpose and structure
 *   2. Learn virtual sequence coordination patterns
 *   3. Master parallel sequence execution (fork-join)
 *   4. Understand sequential sequence execution
 *   5. Apply virtual sequence patterns for multi-channel coordination
 * 
 * VIRTUAL SEQUENCER PURPOSE:
 *   - Contains references to multiple sequencers
 *   - Coordinates sequences across multiple agents
 *   - Enables multi-channel test scenarios
 *   - Provides centralized sequence control
 * 
 * VIRTUAL SEQUENCE PURPOSE:
 *   - Coordinates sequences on multiple sequencers
 *   - Implements complex test scenarios
 *   - Supports parallel and sequential execution
 *   - Reusable across different test configurations
 * 
 * EXECUTION PATTERNS:
 *   - Parallel: fork-join (sequences run simultaneously)
 *   - Sequential: One after another (sequences run in order)
 *   - Mixed: Combination of parallel and sequential
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
        
        // ========================================================================
        // PARALLEL SEQUENCE EXECUTION
        // ========================================================================
        // 
        // PARALLEL EXECUTION:
        //   - Multiple sequences run simultaneously
        //   - Uses fork-join construct
        //   - All sequences complete before continuing
        //   - Useful for multi-channel coordination
        // 
        // FORK-JOIN BEHAVIOR:
        //   - fork: Start all sequences in parallel
        //   - join: Wait for all sequences to complete
        //   - All sequences run concurrently
        // 
        // USE CASES:
        //   - Multi-channel testing (master + slave simultaneously)
        //   - Concurrent protocol operations
        //   - Stress testing (multiple streams)
        if (master_seqr != null && slave_seqr != null) begin
            `uvm_info("VIRTUAL_SEQ", "Starting parallel sequences", UVM_MEDIUM)
            
            // ========================================================================
            // FORK-JOIN CONSTRUCT
            // ========================================================================
            // 
            // FORK-JOIN SYNTAX:
            //   fork
            //       begin ... end  // Thread 1
            //       begin ... end  // Thread 2
            //   join
            // 
            // EXECUTION:
            //   - All begin-end blocks start simultaneously
            //   - join waits for all to complete
            //   - Continues after all sequences finish
            fork
                begin
                    // ========================================================================
                    // MASTER SEQUENCE EXECUTION
                    // ========================================================================
                    // 
                    // SEQUENCE CREATION:
                    //   - Create sequence instance
                    //   - Configure sequence parameters
                    //   - Start sequence on sequencer
                    // 
                    // SEQUENCE START:
                    //   - start(sequencer): Starts sequence on specified sequencer
                    //   - Sequence runs independently
                    //   - Blocks until sequence completes
                    master_seq = ChannelSequence::type_id::create("master_seq");
                    master_seq.channel = 0;      // Set channel parameter
                    master_seq.num_items = 3;     // Set number of items
                    master_seq.start(master_seqr);  // Start on master sequencer
                end
                begin
                    // ========================================================================
                    // SLAVE SEQUENCE EXECUTION
                    // ========================================================================
                    // 
                    // PARALLEL EXECUTION:
                    //   - Runs simultaneously with master sequence
                    //   - Independent execution
                    //   - Both sequences complete before join continues
                    slave_seq = ChannelSequence::type_id::create("slave_seq");
                    slave_seq.channel = 1;       // Different channel
                    slave_seq.num_items = 3;     // Same number of items
                    slave_seq.start(slave_seqr);  // Start on slave sequencer
                end
            join  // Wait for both sequences to complete
            
            `uvm_info("VIRTUAL_SEQ", "Parallel sequences completed", UVM_MEDIUM)
        end
        
        // ========================================================================
        // SEQUENTIAL SEQUENCE EXECUTION
        // ========================================================================
        // 
        // SEQUENTIAL EXECUTION:
        //   - Sequences run one after another
        //   - Second sequence starts after first completes
        //   - No fork-join (sequential code flow)
        //   - Useful for ordered operations
        `uvm_info("VIRTUAL_SEQ", "Starting sequential sequences", UVM_MEDIUM)
        
        // ========================================================================
        // FIRST SEQUENCE (MASTER)
        // ========================================================================
        // 
        // SEQUENTIAL BEHAVIOR:
        //   - Sequence starts and completes
        //   - Code waits for sequence to finish
        //   - Then continues to next sequence
        if (master_seqr != null) begin
            seq1 = ChannelSequence::type_id::create("seq1");
            seq1.channel = 0;
            seq1.num_items = 2;
            
            // START SEQUENCE:
            //   - start() blocks until sequence completes
            //   - Next code executes after sequence finishes
            //   - Sequential execution: seq1 completes, then seq2 starts
            seq1.start(master_seqr);
        end
        
        // ========================================================================
        // SECOND SEQUENCE (SLAVE)
        // ========================================================================
        // 
        // SEQUENTIAL BEHAVIOR:
        //   - Starts after master sequence completes
        //   - Runs independently but sequentially
        //   - Both sequences complete before virtual sequence ends
        if (slave_seqr != null) begin
            seq2 = ChannelSequence::type_id::create("seq2");
            seq2.channel = 1;
            seq2.num_items = 2;
            
            // START SEQUENCE:
            //   - Executes after seq1 completes
            //   - Sequential order: seq1 -> seq2
            seq2.start(slave_seqr);
        end
        
        `uvm_info("VIRTUAL_SEQ", "Sequential sequences completed", UVM_MEDIUM)
        
        // ========================================================================
        // EXECUTION PATTERN COMPARISON
        // ========================================================================
        // 
        // PARALLEL (fork-join):
        //   - Time: max(seq1_time, seq2_time)
        //   - Sequences run simultaneously
        //   - Faster execution
        //   - Use for: Independent operations
        // 
        // SEQUENTIAL:
        //   - Time: seq1_time + seq2_time
        //   - Sequences run one after another
        //   - Slower execution
        //   - Use for: Ordered operations, dependencies
        // 
        // MIXED PATTERNS:
        //   - Combine parallel and sequential
        //   - Example: Parallel setup, sequential test, parallel cleanup
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
        
        // ========================================================================
        // DRIVER-SEQUENCER CONNECTIONS
        // ========================================================================
        // 
        // TLM CONNECTIONS:
        //   - Driver requests transactions from sequencer
        //   - Sequencer provides transactions to driver
        //   - Standard UVM connection pattern
        master_driver.seq_item_port.connect(master_seqr.seq_item_export);
        slave_driver.seq_item_port.connect(slave_seqr.seq_item_export);
        
        // ========================================================================
        // VIRTUAL SEQUENCER CONFIGURATION
        // ========================================================================
        // 
        // VIRTUAL SEQUENCER SETUP:
        //   - Assign sequencer references to virtual sequencer
        //   - Virtual sequencer doesn't drive transactions directly
        //   - Contains references to actual sequencers
        //   - Virtual sequences use these references
        // 
        // SEQUENCER ASSIGNMENT:
        //   - vseqr.master_seqr: Virtual sequencer's master reference
        //   - master_seqr: Actual master sequencer instance
        //   - Virtual sequence accesses via vseqr.master_seqr
        vseqr.master_seqr = master_seqr;  // Assign master sequencer reference
        vseqr.slave_seqr = slave_seqr;    // Assign slave sequencer reference
        
        // ========================================================================
        // VIRTUAL SEQUENCE CONFIGURATION
        // ========================================================================
        // 
        // VIRTUAL SEQUENCE SETUP:
        //   - Assign sequencer references to virtual sequence
        //   - Virtual sequence uses these to start sequences
        //   - Can be assigned directly or via virtual sequencer
        // 
        // ASSIGNMENT PATTERN:
        //   - Direct assignment: vseq.master_seqr = master_seqr
        //   - Via virtual sequencer: vseq.master_seqr = vseqr.master_seqr
        //   - Both patterns work (direct is simpler for this example)
        vseq.master_seqr = master_seqr;  // Assign master sequencer to virtual sequence
        vseq.slave_seqr = slave_seqr;    // Assign slave sequencer to virtual sequence
        
        // ========================================================================
        // CONNECTION PATTERN ALTERNATIVES
        // ========================================================================
        // 
        // PATTERN 1 (Current): Direct assignment
        //   vseq.master_seqr = master_seqr;
        //   - Simple and direct
        //   - Virtual sequence has direct reference
        // 
        // PATTERN 2: Via virtual sequencer
        //   vseq.master_seqr = vseqr.master_seqr;
        //   - Virtual sequencer acts as central repository
        //   - More flexible (can change sequencers in one place)
        // 
        // PATTERN 3: In virtual sequence body
        //   - Assign in virtual sequence body() task
        //   - More dynamic (can change per test)
        //   - Useful for conditional sequencer assignment
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
