/**
 * Module 8 Example 8.2: UVM Comparators
 * Demonstrates using comparators for transaction comparison in scoreboards.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand transaction comparison patterns
 *   2. Learn in-order transaction comparison
 *   3. Learn out-of-order transaction comparison
 *   4. Understand transaction matching algorithms
 *   5. Learn comparator statistics and reporting
 * 
 * COMPARATOR TYPES:
 *   - In-order: Transactions compared in arrival order
 *   - Out-of-order: Transactions matched by key (e.g., address)
 * 
 * This example shows:
 * - In-order transaction comparison
 * - Out-of-order transaction comparison
 * - Transaction matching algorithms
 * - Comparator statistics and reporting
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================================
// TRANSACTION CLASS
// ============================================================================
/**
 * ComparatorTransaction: Transaction for comparator example
 * 
 * TRANSACTION FIELDS:
 *   - data: 8-bit data
 *   - address: 16-bit address
 *   - timestamp: Transaction timestamp
 */
class ComparatorTransaction extends uvm_sequence_item;
    rand logic [7:0] data;      // Data (8-bit, randomized)
    rand logic [15:0] address; // Address (16-bit, randomized)
    int timestamp;              // Timestamp (for ordering)
    
    `uvm_object_utils(ComparatorTransaction)
    
    function new(string name = "ComparatorTransaction");
        super.new(name);
        timestamp = 0;
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h, ts=%0d", data, address, timestamp);
    endfunction
    
    // ========================================================================
    // COMPARE FUNCTION
    // ========================================================================
    /**
     * Compare function: Compare two transactions
     * 
     * COMPARISON LOGIC:
     *   - Compare data and address fields
     *   - Returns 1 if match, 0 if mismatch
     *   - Used by comparators for matching
     */
    function bit compare(ComparatorTransaction rhs);
        // ====================================================================
        // FIELD COMPARISON
        // ====================================================================
        // 
        // COMPARISON:
        //   - data == rhs.data: Data values match
        //   - address == rhs.address: Address values match
        //   - Both must match for transaction match
        // 
        // COMPARISON EXAMPLE:
        //   - Transaction 1: data=0x55, address=0x1000
        //   - Transaction 2: data=0x55, address=0x1000
        //   - Compare: (0x55 == 0x55) && (0x1000 == 0x1000) = 1 (match)
        // 
        // MISMATCH EXAMPLE:
        //   - Transaction 1: data=0x55, address=0x1000
        //   - Transaction 2: data=0xAA, address=0x1000
        //   - Compare: (0x55 == 0xAA) && (0x1000 == 0x1000) = 0 (mismatch)
        return (data == rhs.data && address == rhs.address);
    endfunction
endclass

// ============================================================================
// ANALYSIS IMP DECLARATIONS
// ============================================================================
// 
// ANALYSIS IMP DECLARATIONS:
//   - Declare different analysis imp types
//   - _expected: For expected transactions
//   - _actual: For actual transactions
//   - Allows separate write methods for each stream
`uvm_analysis_imp_decl(_expected)
`uvm_analysis_imp_decl(_actual)

// ============================================================================
// IN-ORDER COMPARATOR
// ============================================================================
/**
 * InOrderComparator: In-order transaction comparator
 * 
 * COMPARATOR PURPOSE:
 *   - Compares transactions in arrival order
 *   - First expected vs first actual
 *   - Second expected vs second actual
 *   - Requires strict ordering
 * 
 * COMPARISON ALGORITHM:
 *   1. Store transactions in queues (FIFO)
 *   2. When both queues have transactions, compare first items
 *   3. If match: Remove both, increment match count
 *   4. If mismatch: Report error, remove both, increment mismatch count
 */
class InOrderComparator extends uvm_component;
    uvm_analysis_imp_expected #(ComparatorTransaction, InOrderComparator) expected_imp;
    uvm_analysis_imp_actual #(ComparatorTransaction, InOrderComparator) actual_imp;
    
    // ========================================================================
    // TRANSACTION QUEUES
    // ========================================================================
    // 
    // QUEUE STRUCTURE:
    //   - expected_queue: FIFO queue for expected transactions
    //   - actual_queue: FIFO queue for actual transactions
    //   - Transactions stored in arrival order
    ComparatorTransaction expected_queue[$];  // Expected transaction queue
    ComparatorTransaction actual_queue[$];    // Actual transaction queue
    
    // ========================================================================
    // STATISTICS
    // ========================================================================
    int match_count;    // Match counter
    int mismatches;     // Mismatch counter
    
    `uvm_component_utils(InOrderComparator)
    
    function new(string name = "InOrderComparator", uvm_component parent = null);
        super.new(name, parent);
        expected_imp = new("expected_imp", this);
        actual_imp = new("actual_imp", this);
        match_count = 0;
        mismatches = 0;
    endfunction
    
    // ========================================================================
    // WRITE EXPECTED METHOD
    // ========================================================================
    /**
     * Write expected: Receive expected transaction
     * 
     * WRITE BEHAVIOR:
     *   1. Store transaction in expected queue
     *   2. Check for matching transaction in actual queue
     *   3. Compare if both queues have transactions
     */
    function void write_expected(ComparatorTransaction txn);
        // ====================================================================
        // STORE EXPECTED TRANSACTION
        // ====================================================================
        // 
        // QUEUE STORAGE:
        //   - push_back(): Add to end of queue (FIFO)
        //   - Maintains arrival order
        //   - Example: Queue [txn0, txn1, txn2]
        expected_queue.push_back(txn);
        `uvm_info("COMPARATOR", $sformatf("Expected: %s", txn.convert2string()), UVM_DEBUG)
        
        // ====================================================================
        // CHECK FOR MATCH
        // ====================================================================
        // 
        // MATCH CHECKING:
        //   - Compare transactions if both queues have items
        //   - In-order: Compare first items from each queue
        compare_transactions();
    endfunction
    
    // ========================================================================
    // WRITE ACTUAL METHOD
    // ========================================================================
    /**
     * Write actual: Receive actual transaction
     * 
     * WRITE BEHAVIOR:
     *   1. Store transaction in actual queue
     *   2. Check for matching transaction in expected queue
     *   3. Compare if both queues have transactions
     */
    function void write_actual(ComparatorTransaction txn);
        // ====================================================================
        // STORE ACTUAL TRANSACTION
        // ====================================================================
        actual_queue.push_back(txn);
        `uvm_info("COMPARATOR", $sformatf("Actual: %s", txn.convert2string()), UVM_DEBUG)
        
        // ====================================================================
        // CHECK FOR MATCH
        // ====================================================================
        compare_transactions();
    endfunction
    
    // ========================================================================
    // COMPARE TRANSACTIONS METHOD
    // ========================================================================
    /**
     * Compare transactions: Compare queued transactions
     * 
     * COMPARISON ALGORITHM:
     *   1. Check if both queues have transactions
     *   2. Pop first transaction from each queue
     *   3. Compare transactions
     *   4. Report match or mismatch
     *   5. Repeat until one queue is empty
     */
    function void compare_transactions();
        // ====================================================================
        // COMPARISON LOOP
        // ====================================================================
        // 
        // LOOP CONDITION:
        //   - Both queues must have transactions
        //   - Compare first items from each queue
        //   - Continue until one queue is empty
        // 
        // IN-ORDER COMPARISON:
        //   - Expected queue: [exp0, exp1, exp2]
        //   - Actual queue: [act0, act1, act2]
        //   - Compare: exp0 vs act0, exp1 vs act1, exp2 vs act2
        while (expected_queue.size() > 0 && actual_queue.size() > 0) begin
            // ================================================================
            // POP TRANSACTIONS
            // ================================================================
            // 
            // POP OPERATION:
            //   - pop_front(): Remove and return first item
            //   - FIFO behavior: First in, first out
            //   - Maintains order
            // 
            // POP DETAILED EXAMPLE:
            //   Expected queue: [exp0, exp1, exp2]
            //   Actual queue: [act0, act1, act2]
            //   After pop_front():
            //     exp_txn = exp0, expected_queue = [exp1, exp2]
            //     act_txn = act0, actual_queue = [act1, act2]
            //   Next iteration:
            //     exp_txn = exp1, expected_queue = [exp2]
            //     act_txn = act1, actual_queue = [act2]
            ComparatorTransaction exp_txn = expected_queue.pop_front();
            ComparatorTransaction act_txn = actual_queue.pop_front();
            
            // ================================================================
            // COMPARE TRANSACTIONS
            // ================================================================
            // 
            // COMPARISON:
            //   - exp_txn.compare(act_txn): Compare transactions
            //   - Returns 1 if match, 0 if mismatch
            //   - Compare data and address fields
            // 
            // COMPARISON STEP-BY-STEP:
            //   Step 1: Compare data fields
            //     exp_txn.data == act_txn.data?
            //     If false: Return 0 (mismatch)
            //   Step 2: Compare address fields
            //     exp_txn.address == act_txn.address?
            //     If false: Return 0 (mismatch)
            //   Step 3: Both match
            //     Return 1 (match)
            // 
            // COMPARISON EXAMPLES:
            //   Example 1 (Match):
            //     exp_txn: data=0x55, address=0x1000
            //     act_txn: data=0x55, address=0x1000
            //     Compare: (0x55 == 0x55) && (0x1000 == 0x1000) = 1 (match)
            //   
            //   Example 2 (Data Mismatch):
            //     exp_txn: data=0x55, address=0x1000
            //     act_txn: data=0xAA, address=0x1000
            //     Compare: (0x55 == 0xAA) && (0x1000 == 0x1000) = 0 (mismatch)
            //   
            //   Example 3 (Address Mismatch):
            //     exp_txn: data=0x55, address=0x1000
            //     act_txn: data=0x55, address=0x2000
            //     Compare: (0x55 == 0x55) && (0x1000 == 0x2000) = 0 (mismatch)
            //   
            //   Example 4 (Both Mismatch):
            //     exp_txn: data=0x55, address=0x1000
            //     act_txn: data=0xAA, address=0x2000
            //     Compare: (0x55 == 0xAA) && (0x1000 == 0x2000) = 0 (mismatch)
            if (exp_txn.compare(act_txn)) begin
                // ============================================================
                // MATCH FOUND
                // ============================================================
                // 
                // MATCH HANDLING:
                //   - Increment match counter
                //   - Log match information
                //   - Transactions removed from queues
                match_count++;
                `uvm_info("COMPARATOR", $sformatf("MATCH: %s", exp_txn.convert2string()), UVM_MEDIUM)
                // 
                // MATCH EXAMPLE:
                //   Expected: data=0x55, addr=0x1000
                //   Actual: data=0x55, addr=0x1000
                //   Compare: Match! (data and address match)
            end else begin
                // ============================================================
                // MISMATCH FOUND
                // ============================================================
                // 
                // MISMATCH HANDLING:
                //   - Increment mismatch counter
                //   - Report error with both transactions
                //   - Transactions removed from queues
                mismatches++;
                `uvm_error("COMPARATOR", $sformatf("MISMATCH: Expected %s, Got %s", 
                    exp_txn.convert2string(), act_txn.convert2string()))
                // 
                // MISMATCH EXAMPLE:
                //   Expected: data=0x55, addr=0x1000
                //   Actual: data=0xAA, addr=0x1000
                //   Compare: Mismatch! (data doesn't match)
            end
        end
        // 
        // QUEUE EMPTY CASE:
        //   - If one queue is empty, wait for more transactions
        //   - Transactions remain in non-empty queue
        //   - Comparison resumes when both queues have transactions
    endfunction
    
    // ========================================================================
    // REPORT PHASE
    // ========================================================================
    /**
     * Report phase: Generate comparator statistics
     * 
     * STATISTICS REPORTED:
     *   - Match count: Number of matching transactions
     *   - Mismatch count: Number of mismatched transactions
     *   - Pending expected: Transactions waiting for actual
     *   - Pending actual: Transactions waiting for expected
     */
    function void report_phase(uvm_phase phase);
        `uvm_info("COMPARATOR", $sformatf("Comparator Statistics:"), UVM_LOW)
        `uvm_info("COMPARATOR", $sformatf("  Matches: %0d", match_count), UVM_LOW)
        `uvm_info("COMPARATOR", $sformatf("  Mismatches: %0d", mismatches), UVM_LOW)
        `uvm_info("COMPARATOR", $sformatf("  Pending Expected: %0d", expected_queue.size()), UVM_LOW)
        `uvm_info("COMPARATOR", $sformatf("  Pending Actual: %0d", actual_queue.size()), UVM_LOW)
        // 
        // STATISTICS INTERPRETATION:
        //   - Matches: Successful comparisons
        //   - Mismatches: Failed comparisons (errors)
        //   - Pending Expected: Expected transactions without matching actual
        //   - Pending Actual: Actual transactions without matching expected
    endfunction
endclass

// ============================================================================
// OUT-OF-ORDER COMPARATOR
// ============================================================================
/**
 * OutOfOrderComparator: Out-of-order transaction comparator
 * 
 * COMPARATOR PURPOSE:
 *   - Compares transactions by key (address)
 *   - Matches transactions with same address
 *   - Allows out-of-order arrival
 *   - More flexible than in-order comparator
 * 
 * COMPARISON ALGORITHM:
 *   1. Store transactions in associative arrays (indexed by address)
 *   2. When transaction arrives, check for matching address
 *   3. If match found: Compare transactions
 *   4. If match: Remove both, increment match count
 *   5. If mismatch: Report error, remove both, increment mismatch count
 */
class OutOfOrderComparator extends uvm_component;
    uvm_analysis_imp_expected #(ComparatorTransaction, OutOfOrderComparator) expected_imp;
    uvm_analysis_imp_actual #(ComparatorTransaction, OutOfOrderComparator) actual_imp;
    
    // ========================================================================
    // TRANSACTION MAPS
    // ========================================================================
    // 
    // ASSOCIATIVE ARRAY STRUCTURE:
    //   - expected_map[address]: Expected transaction at address
    //   - actual_map[address]: Actual transaction at address
    //   - Indexed by address (key for matching)
    ComparatorTransaction expected_map[logic [15:0]];  // Expected transaction map
    ComparatorTransaction actual_map[logic [15:0]];    // Actual transaction map
    
    // ========================================================================
    // STATISTICS
    // ========================================================================
    int match_count;    // Match counter
    int mismatches;     // Mismatch counter
    
    `uvm_component_utils(OutOfOrderComparator)
    
    function new(string name = "OutOfOrderComparator", uvm_component parent = null);
        super.new(name, parent);
        expected_imp = new("expected_imp", this);
        actual_imp = new("actual_imp", this);
        match_count = 0;
        mismatches = 0;
    endfunction
    
    // ========================================================================
    // WRITE EXPECTED METHOD
    // ========================================================================
    /**
     * Write expected: Receive expected transaction
     * 
     * WRITE BEHAVIOR:
     *   1. Store transaction in expected map (indexed by address)
     *   2. Check for matching transaction in actual map
     *   3. Compare if both maps have transaction with same address
     */
    function void write_expected(ComparatorTransaction txn);
        // ====================================================================
        // STORE EXPECTED TRANSACTION
        // ====================================================================
        // 
        // MAP STORAGE:
        //   - expected_map[txn.address] = txn
        //   - Indexed by address (key for matching)
        //   - Example: expected_map[0x1000] = transaction
        expected_map[txn.address] = txn;
        `uvm_info("COMPARATOR", $sformatf("Expected: %s", txn.convert2string()), UVM_DEBUG)
        
        // ====================================================================
        // CHECK FOR MATCH
        // ====================================================================
        compare_transactions();
    endfunction
    
    // ========================================================================
    // WRITE ACTUAL METHOD
    // ========================================================================
    /**
     * Write actual: Receive actual transaction
     * 
     * WRITE BEHAVIOR:
     *   1. Store transaction in actual map (indexed by address)
     *   2. Check for matching transaction in expected map
     *   3. Compare if both maps have transaction with same address
     */
    function void write_actual(ComparatorTransaction txn);
        // ====================================================================
        // STORE ACTUAL TRANSACTION
        // ====================================================================
        actual_map[txn.address] = txn;
        `uvm_info("COMPARATOR", $sformatf("Actual: %s", txn.convert2string()), UVM_DEBUG)
        
        // ====================================================================
        // CHECK FOR MATCH
        // ====================================================================
        compare_transactions();
    endfunction
    
    // ========================================================================
    // COMPARE TRANSACTIONS METHOD
    // ========================================================================
    /**
     * Compare transactions: Compare transactions by address
     * 
     * COMPARISON ALGORITHM:
     *   1. Iterate over expected map addresses
     *   2. Check if actual map has transaction with same address
     *   3. If match found: Compare transactions
     *   4. If match: Remove both, increment match count
     *   5. If mismatch: Report error, remove both, increment mismatch count
     */
    function void compare_transactions();
        logic [15:0] addr;  // Address variable for iteration
        
        // ====================================================================
        // ITERATE OVER EXPECTED MAP
        // ====================================================================
        // 
        // ITERATION:
        //   - foreach (expected_map[addr]): Iterate over all addresses
        //   - Check if actual map has transaction with same address
        //   - Compare if both maps have transaction with same address
        // 
        // OUT-OF-ORDER MATCHING:
        //   - Expected: address=0x1000 arrives first
        //   - Actual: address=0x2000 arrives first
        //   - Actual: address=0x1000 arrives second
        //   - Match: expected_map[0x1000] vs actual_map[0x1000] (matched by address)
        foreach (expected_map[addr]) begin
            // ================================================================
            // CHECK FOR MATCHING ADDRESS
            // ================================================================
            // 
            // ADDRESS MATCHING:
            //   - Check if actual map has transaction with same address
            //   - If found: Compare transactions
            //   - If not found: Wait for actual transaction
            if (actual_map.exists(addr)) begin
                // ============================================================
                // GET TRANSACTIONS
                // ============================================================
                ComparatorTransaction exp_txn = expected_map[addr];
                ComparatorTransaction act_txn = actual_map[addr];
                
                // ============================================================
                // COMPARE TRANSACTIONS
                // ============================================================
                if (exp_txn.compare(act_txn)) begin
                    // ========================================================
                    // MATCH FOUND
                    // ========================================================
                    match_count++;
                    `uvm_info("COMPARATOR", $sformatf("MATCH (addr=0x%04h): %s", addr, exp_txn.convert2string()), UVM_MEDIUM)
                    // 
                    // MATCH EXAMPLE:
                    //   Address: 0x1000
                    //   Expected: data=0x55, addr=0x1000
                    //   Actual: data=0x55, addr=0x1000
                    //   Compare: Match! (matched by address, data matches)
                end else begin
                    // ========================================================
                    // MISMATCH FOUND
                    // ========================================================
                    mismatches++;
                    `uvm_error("COMPARATOR", $sformatf("MISMATCH (addr=0x%04h): Expected %s, Got %s", 
                        addr, exp_txn.convert2string(), act_txn.convert2string()))
                    // 
                    // MISMATCH EXAMPLE:
                    //   Address: 0x1000
                    //   Expected: data=0x55, addr=0x1000
                    //   Actual: data=0xAA, addr=0x1000
                    //   Compare: Mismatch! (matched by address, but data doesn't match)
                end
                
                // ============================================================
                // REMOVE MATCHED TRANSACTIONS
                // ============================================================
                // 
                // CLEANUP:
                //   - Remove matched transactions from maps
                //   - Prevents re-comparison
                //   - Keeps maps clean
                expected_map.delete(addr);
                actual_map.delete(addr);
            end
        end
        // 
        // NO MATCH CASE:
        //   - If actual map doesn't have transaction with same address
        //   - Expected transaction remains in map
        //   - Wait for actual transaction with matching address
    endfunction
    
    // ========================================================================
    // REPORT PHASE
    // ========================================================================
    function void report_phase(uvm_phase phase);
        `uvm_info("COMPARATOR", $sformatf("Out-of-Order Comparator Statistics:"), UVM_LOW)
        `uvm_info("COMPARATOR", $sformatf("  Matches: %0d", match_count), UVM_LOW)
        `uvm_info("COMPARATOR", $sformatf("  Mismatches: %0d", mismatches), UVM_LOW)
        `uvm_info("COMPARATOR", $sformatf("  Pending Expected: %0d", expected_map.size()), UVM_LOW)
        `uvm_info("COMPARATOR", $sformatf("  Pending Actual: %0d", actual_map.size()), UVM_LOW)
    endfunction
endclass

// ============================================================================
// SCOREBOARD CLASS
// ============================================================================
/**
 * ComparatorScoreboard: Scoreboard using comparators
 * 
 * SCOREBOARD PURPOSE:
 *   - Receives transactions from multiple sources
 *   - Routes to both in-order and out-of-order comparators
 *   - Demonstrates comparator usage in scoreboard
 */
class ComparatorScoreboard extends uvm_scoreboard;
    InOrderComparator in_order_comp;        // In-order comparator
    OutOfOrderComparator out_of_order_comp; // Out-of-order comparator
    uvm_analysis_port #(ComparatorTransaction) expected_port;  // Expected port
    uvm_analysis_port #(ComparatorTransaction) actual_port;    // Actual port
    
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
        // ====================================================================
        // CONNECT TO IN-ORDER COMPARATOR
        // ====================================================================
        expected_port.connect(in_order_comp.expected_imp);
        actual_port.connect(in_order_comp.actual_imp);
        
        // ====================================================================
        // CONNECT TO OUT-OF-ORDER COMPARATOR
        // ====================================================================
        expected_port.connect(out_of_order_comp.expected_imp);
        actual_port.connect(out_of_order_comp.actual_imp);
        // 
        // CONNECTION PATTERN:
        //   - Multiple comparators can receive from same ports
        //   - Allows parallel comparison with different algorithms
        //   - Useful for comparing in-order vs out-of-order behavior
    endfunction
endclass

// ============================================================================
// TEST CLASS
// ============================================================================
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
        
        // ====================================================================
        // GENERATE MATCHING TRANSACTIONS
        // ====================================================================
        // 
        // TRANSACTION GENERATION:
        //   - Generate expected and actual transactions
        //   - Make them match (same data and address)
        //   - Test comparator matching logic
        for (int i = 0; i < 10; i++) begin
            exp_txn = ComparatorTransaction::type_id::create("exp_txn");
            act_txn = ComparatorTransaction::type_id::create("act_txn");
            
            void'(exp_txn.randomize());
            act_txn.data = exp_txn.data;        // Match data
            act_txn.address = exp_txn.address;    // Match address
            act_txn.timestamp = i;
            
            // ================================================================
            // SEND TRANSACTIONS
            // ================================================================
            scoreboard.expected_port.write(exp_txn);
            #10;
            scoreboard.actual_port.write(act_txn);
            #10;
        end
        
        #100;
        phase.drop_objection(this);
    endtask
endclass

// ============================================================================
// TOP-LEVEL MODULE
// ============================================================================
module comparators_top;
    import uvm_pkg::*;
    
    initial begin
        run_test("ComparatorTest");
    end
endmodule
