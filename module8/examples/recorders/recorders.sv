/**
 * Module 8 Example 8.3: UVM Recorders
 * Demonstrates transaction recording and playback capabilities.
 * 
 * This example shows:
 * - Transaction recording
 * - Recorder implementation
 * - Recording formats
 * - Playback capabilities
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Transaction for recorder example
 */
class RecorderTransaction extends uvm_sequence_item;
    rand logic [7:0] data;
    rand logic [15:0] address;
    int timestamp;
    
    `uvm_object_utils(RecorderTransaction)
    
    function new(string name = "RecorderTransaction");
        super.new(name);
        timestamp = 0;
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h, ts=%0d", data, address, timestamp);
    endfunction
    
    function void do_record(uvm_recorder recorder);
        super.do_record(recorder);
        // Suppress Verilator's WIDTHEXPAND warnings - UVM record_field accepts variable bit widths
        /* verilator lint_off WIDTHEXPAND */
        recorder.record_field("data", data, $bits(data), UVM_HEX);
        recorder.record_field("address", address, $bits(address), UVM_HEX);
        recorder.record_field("timestamp", timestamp, $bits(timestamp), UVM_DEC);
        /* verilator lint_on WIDTHEXPAND */
    endfunction
endclass

/**
 * Simple transaction recorder
 */
class TransactionRecorder extends uvm_component;
    uvm_analysis_imp #(RecorderTransaction, TransactionRecorder) analysis_imp;
    RecorderTransaction recorded_transactions[$];
    int transaction_count;
    
    `uvm_component_utils(TransactionRecorder)
    
    function new(string name = "TransactionRecorder", uvm_component parent = null);
        super.new(name, parent);
        analysis_imp = new("analysis_imp", this);
        transaction_count = 0;
    endfunction
    
    function void write(RecorderTransaction txn);
        RecorderTransaction recorded_txn;
        recorded_txn = RecorderTransaction::type_id::create("recorded_txn");
        recorded_txn.copy(txn);
        recorded_txn.timestamp = $time;
        recorded_transactions.push_back(recorded_txn);
        transaction_count++;
        
        `uvm_info("RECORDER", $sformatf("Recorded transaction #%0d: %s", 
            transaction_count, recorded_txn.convert2string()), UVM_MEDIUM)
    endfunction
    
    function void playback_transactions();
        `uvm_info("RECORDER", $sformatf("Playing back %0d transactions", 
            recorded_transactions.size()), UVM_LOW)
        
        foreach (recorded_transactions[i]) begin
            `uvm_info("RECORDER", $sformatf("Playback #%0d: %s", 
                i, recorded_transactions[i].convert2string()), UVM_MEDIUM)
        end
    endfunction
    
    function void report_phase(uvm_phase phase);
        `uvm_info("RECORDER", $sformatf("Recorder Statistics:"), UVM_LOW)
        `uvm_info("RECORDER", $sformatf("  Total Transactions Recorded: %0d", transaction_count), UVM_LOW)
    endfunction
endclass

/**
 * Test for recorder example
 */
class RecorderTest extends uvm_test;
    TransactionRecorder recorder;
    uvm_analysis_port #(RecorderTransaction) transaction_port;
    
    `uvm_component_utils(RecorderTest)
    
    function new(string name = "RecorderTest", uvm_component parent = null);
        super.new(name, parent);
        transaction_port = new("transaction_port", this);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        recorder = TransactionRecorder::type_id::create("recorder", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        transaction_port.connect(recorder.analysis_imp);
    endfunction
    
    task run_phase(uvm_phase phase);
        RecorderTransaction txn;
        phase.raise_objection(this);
        
        // Generate and record transactions
        for (int i = 0; i < 10; i++) begin
            txn = RecorderTransaction::type_id::create("txn");
            void'(txn.randomize());
            txn.timestamp = i * 10;
            transaction_port.write(txn);
            #10;
        end
        
        #50;
        recorder.playback_transactions();
        
        #50;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level module for recorder example
 */
module recorders_top;
    import uvm_pkg::*;
    
    initial begin
        run_test("RecorderTest");
    end
endmodule
