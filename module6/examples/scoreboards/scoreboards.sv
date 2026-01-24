/**
 * Module 6 Example 6.5: Multi-Channel Scoreboards
 * Demonstrates matching transactions from two streams.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand scoreboard implementation
 *   2. Learn transaction matching from multiple streams
 *   3. Understand associative array usage for queues
 *   - Learn pass/fail tracking
 *   5. Understand analysis imp usage for scoreboards
 * 
 * SCOREBOARD PURPOSE:
 *   - Receives transactions from multiple sources
 *   - Matches transactions based on criteria (sequence number)
 *   - Compares matched transactions
 *   - Reports pass/fail results
 * 
 * SCOREBOARD PATTERN:
 *   - Multiple analysis ports connect to scoreboard
 *   - Scoreboard uses analysis imp (write method)
 *   - Transactions stored in queues (associative arrays)
 *   - Matching logic compares transactions
 *   - Pass/fail tracking and reporting
 */
`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================================
// TRANSACTION CLASS
// ============================================================================
/**
 * SB_Txn: Scoreboard transaction class
 * 
 * TRANSACTION FIELDS:
 *   - stream_id: Stream identifier (0 or 1)
 *   - seq: Sequence number (used for matching)
 *   - data: Data value (used for comparison)
 */
class SB_Txn extends uvm_sequence_item;
    int stream_id;      // Stream identifier (0 or 1)
    int seq;            // Sequence number (used for matching)
    bit [7:0] data;     // Data value (8-bit)
    
    `uvm_object_utils(SB_Txn)
    
    function new(string n="SB_Txn");
        super.new(n);
    endfunction
    
    function string convert2string();
        return $sformatf("stream=%0d seq=%0d data=0x%02h", stream_id, seq, data);
    endfunction
endclass

// ============================================================================
// STREAM PRODUCER
// ============================================================================
/**
 * StreamProducer: Produces transactions for scoreboard
 * 
 * PRODUCER PURPOSE:
 *   - Generates transactions
 *   - Sends transactions to scoreboard via analysis port
 *   - Simulates data stream (e.g., from driver or monitor)
 */
class StreamProducer extends uvm_component;
    uvm_analysis_port #(SB_Txn) ap;  // Analysis port
    int stream_id;                     // Stream identifier
    
    `uvm_component_utils(StreamProducer)
    
    function new(string n, uvm_component p);
        super.new(n, p);
        ap = new("ap", this);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // ====================================================================
        // GET STREAM ID FROM CONFIGDB
        // ====================================================================
        if (!uvm_config_db#(int)::get(this, "", "stream_id", stream_id)) begin
            stream_id = 0;  // Default stream_id
        end
    endfunction
    
    task run_phase(uvm_phase phase);
        SB_Txn t;
        
        phase.raise_objection(this);
        
        // ====================================================================
        // GENERATE TRANSACTIONS
        // ====================================================================
        // 
        // TRANSACTION GENERATION:
        //   - Generate 10 transactions
        //   - Each transaction has stream_id, seq, and data
        //   - Send to scoreboard via analysis port
        for (int i = 0; i < 10; i++) begin
            // ================================================================
            // CREATE TRANSACTION
            // ================================================================
            t = SB_Txn::type_id::create("t");
            
            // ================================================================
            // SET TRANSACTION FIELDS
            // ================================================================
            t.stream_id = stream_id;  // Set stream identifier
            t.seq = i;                // Set sequence number (0-9)
            
            // ================================================================
            // SET DATA VALUE
            // ================================================================
            // 
            // DATA ASSIGNMENT:
            //   - Both streams use same data pattern (for matching)
            //   - Data = 0xA0 + i (0xA0 to 0xA9)
            //   - This ensures transactions match when compared
            t.data = (stream_id == 0) ? (32'hA0 + i) : (32'hA0 + i);  // make matchable
            
            // ================================================================
            // SEND TRANSACTION TO SCOREBOARD
            // ================================================================
            // 
            // ANALYSIS PORT WRITE:
            //   - Non-blocking write to analysis port
            //   - Scoreboard receives via write() method
            //   - Multiple producers can write to same scoreboard
            ap.write(t);
            
            #10;  // Delay between transactions
        end
        
        phase.drop_objection(this);
    endtask
endclass

// ============================================================================
// MULTI-CHANNEL SCOREBOARD
// ============================================================================
/**
 * MultiChannelScoreboard: Scoreboard for multi-channel matching
 * 
 * SCOREBOARD PURPOSE:
 *   - Receives transactions from multiple streams
 *   - Stores transactions in queues (associative arrays)
 *   - Matches transactions by sequence number
 *   - Compares matched transactions
 *   - Tracks pass/fail results
 * 
 * MATCHING LOGIC:
 *   - Transactions matched by sequence number (seq)
 *   - When both streams have transaction with same seq:
 *     * Compare data values
 *     * Report match (pass) or mismatch (fail)
 *     * Remove matched transactions
 */
class MultiChannelScoreboard extends uvm_component;
    uvm_analysis_imp #(SB_Txn, MultiChannelScoreboard) imp;  // Analysis imp
    
    // ========================================================================
    // TRANSACTION QUEUES
    // ========================================================================
    // 
    // ASSOCIATIVE ARRAYS:
    //   - q0[int]: Queue for stream 0 (indexed by sequence number)
    //   - q1[int]: Queue for stream 1 (indexed by sequence number)
    //   - Key: sequence number (seq)
    //   - Value: transaction object
    SB_Txn q0[int];  // Queue for stream 0
    SB_Txn q1[int];  // Queue for stream 1
    
    // ========================================================================
    // PASS/FAIL COUNTERS
    // ========================================================================
    int pass = 0;  // Pass counter
    int fail = 0;  // Fail counter
    
    `uvm_component_utils(MultiChannelScoreboard)
    
    function new(string n, uvm_component p);
        super.new(n, p);
        imp = new("imp", this);
    endfunction
    
    // ========================================================================
    // WRITE METHOD (ANALYSIS IMP)
    // ========================================================================
    /**
     * Write method: Receive transaction from analysis port
     * 
     * WRITE BEHAVIOR:
     *   1. Store transaction in appropriate queue
     *   2. Check if matching transaction exists in other queue
     *   3. If match found: Compare and report result
     *   4. Remove matched transactions
     */
    function void write(SB_Txn t);
        // ====================================================================
        // STORE TRANSACTION IN QUEUE
        // ====================================================================
        // 
        // QUEUE STORAGE:
        //   - Store transaction in queue based on stream_id
        //   - Index by sequence number (seq)
        //   - Allows lookup by sequence number
        // 
        // ASSOCIATIVE ARRAY USAGE:
        //   - q0[int]: Associative array indexed by sequence number
        //   - Key: sequence number (seq)
        //   - Value: transaction object (SB_Txn)
        //   - Example: q0[5] = transaction with seq=5 from stream 0
        // 
        // STORAGE PATTERN:
        //   - Stream 0 transactions stored in q0
        //   - Stream 1 transactions stored in q1
        //   - Both indexed by same sequence number
        //   - Enables matching by sequence number
        if (t.stream_id == 0) begin
            q0[t.seq] = t;  // Store in stream 0 queue
            // 
            // STORAGE EXAMPLE:
            //   Transaction: stream_id=0, seq=3, data=0xA3
            //   q0[3] = transaction object
            //   Later: Can retrieve with q0[3]
        end else begin
            q1[t.seq] = t;  // Store in stream 1 queue
            // 
            // STORAGE EXAMPLE:
            //   Transaction: stream_id=1, seq=3, data=0xA3
            //   q1[3] = transaction object
            //   Later: Can retrieve with q1[3]
        end
        
        // ====================================================================
        // CHECK FOR MATCHING TRANSACTION
        // ====================================================================
        // 
        // MATCHING LOGIC:
        //   - Check if both queues have transaction with same seq
        //   - If match found: Compare and report
        //   - If no match: Wait for other stream
        // 
        // MATCHING ALGORITHM:
        //   1. Check if q0 has transaction with seq = t.seq
        //   2. Check if q1 has transaction with seq = t.seq
        //   3. If both exist: Compare data values
        //   4. If match: Report pass, remove from queues
        //   5. If mismatch: Report fail, remove from queues
        //   6. If only one exists: Wait for other stream
        // 
        // MATCHING EXAMPLE:
        //   - Stream 0 sends: seq=5, data=0xA5
        //   - q0[5] = transaction (stored)
        //   - q1.exists(5) = false (no match yet)
        //   - Stream 1 sends: seq=5, data=0xA5
        //   - q1[5] = transaction (stored)
        //   - q0.exists(5) = true, q1.exists(5) = true (match found!)
        //   - Compare q0[5].data == q1[5].data (0xA5 == 0xA5, pass!)
        if (q0.exists(t.seq) && q1.exists(t.seq)) begin
            // ================================================================
            // MATCH FOUND: COMPARE TRANSACTIONS
            // ================================================================
            // 
            // COMPARISON:
            //   - Compare data values from both streams
            //   - If match: Increment pass counter
            //   - If mismatch: Increment fail counter, report error
            // 
            // COMPARISON LOGIC:
            //   - q0[t.seq].data: Data from stream 0
            //   - q1[t.seq].data: Data from stream 1
            //   - Compare: Are they equal?
            // 
            // COMPARISON EXAMPLE:
            //   - q0[5].data = 0xA5, q1[5].data = 0xA5
            //   - Comparison: 0xA5 == 0xA5 = true (match)
            //   - Result: Pass
            // 
            // MISMATCH EXAMPLE:
            //   - q0[5].data = 0xA5, q1[5].data = 0xB5
            //   - Comparison: 0xA5 == 0xB5 = false (mismatch)
            //   - Result: Fail, report error
            if (q0[t.seq].data == q1[t.seq].data) begin
                // ============================================================
                // DATA MATCH: PASS
                // ============================================================
                // 
                // PASS CONDITION:
                //   - Data values match
                //   - Transaction verified successfully
                //   - Increment pass counter
                pass++;
                `uvm_info("SB", $sformatf("MATCH seq=%0d data=0x%02h", t.seq, t.data), UVM_MEDIUM)
                // 
                // PASS EXAMPLE:
                //   seq=5: Stream 0 data=0xA5, Stream 1 data=0xA5
                //   Result: MATCH seq=5 data=0xA5
                //   pass counter: 1
            end else begin
                // ============================================================
                // DATA MISMATCH: FAIL
                // ============================================================
                // 
                // FAIL CONDITION:
                //   - Data values don't match
                //   - Transaction verification failed
                //   - Increment fail counter
                //   - Report error with both values
                fail++;
                `uvm_error("SB", $sformatf("MISMATCH seq=%0d s0=0x%02h s1=0x%02h",
                          t.seq, q0[t.seq].data, q1[t.seq].data))
                // 
                // FAIL EXAMPLE:
                //   seq=5: Stream 0 data=0xA5, Stream 1 data=0xB5
                //   Result: MISMATCH seq=5 s0=0xA5 s1=0xB5
                //   fail counter: 1
            end
            
            // ================================================================
            // REMOVE MATCHED TRANSACTIONS
            // ================================================================
            // 
            // QUEUE CLEANUP:
            //   - Remove matched transactions from queues
            //   - Prevents memory leaks
            //   - Keeps queues clean
            //   - Allows new transactions with same seq
            // 
            // CLEANUP EXAMPLE:
            //   - Before: q0[5] = transaction, q1[5] = transaction
            //   - After: q0[5] = null, q1[5] = null
            //   - New transaction with seq=5 can be stored
            q0.delete(t.seq);  // Remove from stream 0 queue
            q1.delete(t.seq);  // Remove from stream 1 queue
        end
        // 
        // NO MATCH CASE:
        //   - Only one stream has transaction with this seq
        //   - Wait for other stream to send matching transaction
        //   - Transaction remains in queue until match found
        // 
        // NO MATCH EXAMPLE:
        //   - Stream 0 sends: seq=5, data=0xA5
        //   - q0[5] = transaction (stored)
        //   - q1.exists(5) = false (no match)
        //   - Transaction remains in q0[5] until stream 1 sends seq=5
    endfunction
    
    // ========================================================================
    // REPORT PHASE
    // ========================================================================
    /**
     * Report phase: Generate scoreboard report
     * 
     * REPORT CONTENT:
     *   - Pass count
     *   - Fail count
     *   - Summary statistics
     */
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        
        // ====================================================================
        // REPORT SCOREBOARD RESULTS
        // ====================================================================
        `uvm_info("SB", $sformatf("pass=%0d fail=%0d", pass, fail), UVM_MEDIUM)
    endfunction
endclass

// ============================================================================
// TEST CLASS
// ============================================================================
class ScoreboardsTest extends uvm_test;
    StreamProducer p0, p1;              // Stream producers
    MultiChannelScoreboard sb;           // Scoreboard
    
    `uvm_component_utils(ScoreboardsTest)
    
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // ====================================================================
        // CONFIGURE STREAM PRODUCERS
        // ====================================================================
        uvm_config_db#(int)::set(this, "p0", "stream_id", 0);
        uvm_config_db#(int)::set(this, "p1", "stream_id", 1);
        
        // ====================================================================
        // CREATE COMPONENTS
        // ====================================================================
        p0 = StreamProducer::type_id::create("p0", this);
        p1 = StreamProducer::type_id::create("p1", this);
        sb = MultiChannelScoreboard::type_id::create("sb", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        
        // ====================================================================
        // CONNECT PRODUCERS TO SCOREBOARD
        // ====================================================================
        // 
        // ANALYSIS PORT CONNECTION:
        //   - Multiple producers connect to same scoreboard
        //   - Scoreboard receives via write() method
        //   - All transactions processed by same scoreboard
        p0.ap.connect(sb.imp);  // Connect producer 0 to scoreboard
        p1.ap.connect(sb.imp);  // Connect producer 1 to scoreboard
    endfunction
endclass

// ============================================================================
// TOP-LEVEL MODULE
// ============================================================================
module scoreboards;
    initial run_test("ScoreboardsTest");
endmodule
