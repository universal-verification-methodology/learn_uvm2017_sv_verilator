/**
 * Module 8 Example 8.3: UVM Recorders
 * Demonstrates transaction recording and playback capabilities.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand transaction recording
 *   2. Learn recorder implementation
 *   3. Understand recording formats
 *   4. Learn playback capabilities
 *   5. Understand do_record() method
 * 
 * RECORDER PURPOSE:
 *   - Record transactions for analysis
 *   - Playback recorded transactions
 *   - Debug transaction flow
 *   - Generate transaction logs
 * 
 * This example shows:
 * - Transaction recording
 * - Recorder implementation
 * - Recording formats
 * - Playback capabilities
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================================
// TRANSACTION CLASS
// ============================================================================
/**
 * RecorderTransaction: Transaction for recorder example
 * 
 * TRANSACTION FIELDS:
 *   - data: 8-bit data
 *   - address: 16-bit address
 *   - timestamp: Transaction timestamp
 */
class RecorderTransaction extends uvm_sequence_item;
    rand logic [7:0] data;      // Data (8-bit, randomized)
    rand logic [15:0] address; // Address (16-bit, randomized)
    int timestamp;              // Timestamp (for recording)
    
    `uvm_object_utils(RecorderTransaction)
    
    function new(string name = "RecorderTransaction");
        super.new(name);
        timestamp = 0;
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h, ts=%0d", data, address, timestamp);
    endfunction
    
    // ========================================================================
    // DO_RECORD METHOD
    // ========================================================================
    /**
     * Do record: Record transaction fields
     * 
     * RECORDING PURPOSE:
     *   - Record transaction fields to recorder
     *   - Used for transaction logging
     *   - Enables transaction playback
     * 
     * RECORDING FORMAT:
     *   - record_field(): Record individual field
     *   - Format: UVM_HEX (hexadecimal) or UVM_DEC (decimal)
     *   - Field name, value, width, format
     */
    function void do_record(uvm_recorder recorder);
        super.do_record(recorder);
        
        // ====================================================================
        // RECORD FIELDS
        // ====================================================================
        // 
        // RECORD_FIELD:
        //   - recorder.record_field(name, value, width, format)
        //   - name: Field name (string)
        //   - value: Field value (any type)
        //   - width: Field width in bits
        //   - format: UVM_HEX (hex) or UVM_DEC (decimal)
        // 
        // RECORDING EXAMPLE:
        //   data = 0x55, address = 0x1234, timestamp = 100
        //   record_field("data", 0x55, 8, UVM_HEX) -> "data: 0x55"
        //   record_field("address", 0x1234, 16, UVM_HEX) -> "address: 0x1234"
        //   record_field("timestamp", 100, 32, UVM_DEC) -> "timestamp: 100"
        // Suppress Verilator's WIDTHEXPAND warnings - UVM record_field accepts variable bit widths
        /* verilator lint_off WIDTHEXPAND */
        recorder.record_field("data", data, $bits(data), UVM_HEX);
        recorder.record_field("address", address, $bits(address), UVM_HEX);
        recorder.record_field("timestamp", timestamp, $bits(timestamp), UVM_DEC);
        /* verilator lint_on WIDTHEXPAND */
        // 
        // RECORDING FORMATS:
        //   - UVM_HEX: Hexadecimal format (0x55, 0x1234)
        //   - UVM_DEC: Decimal format (100, 255)
        //   - UVM_BIN: Binary format (0b01010101)
        //   - UVM_STRING: String format
    endfunction
endclass

// ============================================================================
// TRANSACTION RECORDER
// ============================================================================
/**
 * TransactionRecorder: Simple transaction recorder
 * 
 * RECORDER PURPOSE:
 *   - Receives transactions via analysis port
 *   - Records transactions in queue
 *   - Provides playback capability
 *   - Tracks transaction statistics
 */
class TransactionRecorder extends uvm_component;
    uvm_analysis_imp #(RecorderTransaction, TransactionRecorder) analysis_imp;
    RecorderTransaction recorded_transactions[$];  // Recorded transaction queue
    int transaction_count;                         // Transaction counter
    
    `uvm_component_utils(TransactionRecorder)
    
    function new(string name = "TransactionRecorder", uvm_component parent = null);
        super.new(name, parent);
        analysis_imp = new("analysis_imp", this);
        transaction_count = 0;
    endfunction
    
    // ========================================================================
    // WRITE METHOD
    // ========================================================================
    /**
     * Write: Receive transaction for recording
     * 
     * RECORDING BEHAVIOR:
     *   1. Create copy of transaction
     *   2. Set timestamp
     *   3. Add to recorded queue
     *   4. Increment counter
     */
    function void write(RecorderTransaction txn);
        RecorderTransaction recorded_txn;
        
        // ====================================================================
        // CREATE TRANSACTION COPY
        // ====================================================================
        // 
        // COPY OPERATION:
        //   - Create new transaction object
        //   - Copy all fields from original
        //   - Independent copy (deep copy)
        recorded_txn = RecorderTransaction::type_id::create("recorded_txn");
        recorded_txn.copy(txn);
        
        // ====================================================================
        // SET TIMESTAMP
        // ====================================================================
        // 
        // TIMESTAMP:
        //   - $time: Current simulation time
        //   - Records when transaction was received
        //   - Used for timing analysis
        recorded_txn.timestamp = $time;
        // 
        // TIMESTAMP EXAMPLE:
        //   Transaction received at time 100
        //   recorded_txn.timestamp = 100
        
        // ====================================================================
        // STORE RECORDED TRANSACTION
        // ====================================================================
        // 
        // QUEUE STORAGE:
        //   - push_back(): Add to end of queue
        //   - Maintains recording order
        //   - Available for playback
        recorded_transactions.push_back(recorded_txn);
        transaction_count++;
        
        `uvm_info("RECORDER", $sformatf("Recorded transaction #%0d: %s", 
            transaction_count, recorded_txn.convert2string()), UVM_MEDIUM)
        // 
        // RECORDING EXAMPLE:
        //   Transaction: data=0x55, address=0x1234, timestamp=100
        //   Recorded: transaction #1
        //   Queue: [txn1]
    endfunction
    
    // ========================================================================
    // PLAYBACK METHOD
    // ========================================================================
    /**
     * Playback transactions: Playback recorded transactions
     * 
     * PLAYBACK PURPOSE:
     *   - Replay recorded transactions
     *   - Debug transaction flow
     *   - Verify recording correctness
     */
    function void playback_transactions();
        `uvm_info("RECORDER", $sformatf("Playing back %0d transactions", 
            recorded_transactions.size()), UVM_LOW)
        
        // ====================================================================
        // ITERATE OVER RECORDED TRANSACTIONS
        // ====================================================================
        // 
        // PLAYBACK LOOP:
        //   - Iterate through recorded transactions
        //   - Display each transaction
        //   - Maintains recording order
        foreach (recorded_transactions[i]) begin
            `uvm_info("RECORDER", $sformatf("Playback #%0d: %s", 
                i, recorded_transactions[i].convert2string()), UVM_MEDIUM)
            // 
            // PLAYBACK EXAMPLE:
            //   Queue: [txn1, txn2, txn3]
            //   Playback #0: txn1
            //   Playback #1: txn2
            //   Playback #2: txn3
        end
    endfunction
    
    // ========================================================================
    // REPORT PHASE
    // ========================================================================
    function void report_phase(uvm_phase phase);
        `uvm_info("RECORDER", $sformatf("Recorder Statistics:"), UVM_LOW)
        `uvm_info("RECORDER", $sformatf("  Total Transactions Recorded: %0d", transaction_count), UVM_LOW)
        // 
        // STATISTICS INTERPRETATION:
        //   - Total Transactions Recorded: Number of transactions recorded
        //   - Queue Size: Number of transactions in queue
        //   - Used for verification and debugging
    endfunction
endclass

// ============================================================================
// TEST CLASS
// ============================================================================
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
        
        // ====================================================================
        // GENERATE AND RECORD TRANSACTIONS
        // ====================================================================
        // 
        // RECORDING PATTERN:
        //   - Generate transactions
        //   - Send to recorder via analysis port
        //   - Recorder stores transactions
        for (int i = 0; i < 10; i++) begin
            txn = RecorderTransaction::type_id::create("txn");
            void'(txn.randomize());
            txn.timestamp = i * 10;  // Set timestamp
            transaction_port.write(txn);  // Send to recorder
            #10;
        end
        
        // ====================================================================
        // PLAYBACK RECORDED TRANSACTIONS
        // ====================================================================
        #50;
        recorder.playback_transactions();
        
        #50;
        phase.drop_objection(this);
    endtask
endclass

// ============================================================================
// TOP-LEVEL MODULE
// ============================================================================
module recorders_top;
    import uvm_pkg::*;
    
    initial begin
        run_test("RecorderTest");
    end
endmodule
