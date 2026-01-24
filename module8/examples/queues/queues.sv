/**
 * Module 8 Example 8.5: UVM Queues
 * Demonstrates queue utilities and operations.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand queue data structures
 *   2. Learn FIFO queue operations
 *   3. Learn priority queue operations
 *   4. Understand queue management patterns
 *   5. Learn queue insertion and removal
 * 
 * QUEUE TYPES:
 *   - FIFO Queue: First In, First Out (push_back, pop_front)
 *   - Priority Queue: Ordered by priority (insert by priority)
 * 
 * This example shows:
 * - Queue utilities
 * - Queue operations
 * - Queue patterns
 * - Queue management
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================================
// TRANSACTION CLASS
// ============================================================================
/**
 * QueueTransaction: Transaction for queue example
 * 
 * TRANSACTION FIELDS:
 *   - data: 8-bit data
 *   - address: 16-bit address
 *   - prio: Priority (for priority queue)
 */
class QueueTransaction extends uvm_sequence_item;
    rand logic [7:0] data;      // Data (8-bit, randomized)
    rand logic [15:0] address;  // Address (16-bit, randomized)
    int prio;                   // Priority (for priority queue)
    
    `uvm_object_utils(QueueTransaction)
    
    function new(string name = "QueueTransaction");
        super.new(name);
        prio = 0;
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h, priority=%0d", data, address, prio);
    endfunction
    
    // ========================================================================
    // COMPARE FUNCTION
    // ========================================================================
    /**
     * Compare function: Compare transactions by priority
     * 
     * COMPARISON LOGIC:
     *   - Returns 1 if this priority > rhs priority
     *   - Returns -1 if this priority < rhs priority
     *   - Returns 0 if priorities equal
     *   - Used for priority queue ordering
     */
    function int compare(QueueTransaction rhs);
        if (prio > rhs.prio) return 1;   // Higher priority
        if (prio < rhs.prio) return -1;  // Lower priority
        return 0;                         // Equal priority
    endfunction
endclass

// ============================================================================
// QUEUE MANAGER
// ============================================================================
/**
 * QueueManager: Queue manager with various operations
 * 
 * QUEUE MANAGER PURPOSE:
 *   - Manages FIFO and priority queues
 *   - Provides enqueue/dequeue operations
 *   - Tracks queue statistics
 */
class QueueManager extends uvm_component;
    QueueTransaction fifo_queue[$];        // FIFO queue
    QueueTransaction priority_queue[$];    // Priority queue
    int queue_size;                        // Current queue size
    int enqueue_count;                     // Enqueue counter
    int dequeue_count;                     // Dequeue counter
    
    `uvm_component_utils(QueueManager)
    
    function new(string name = "QueueManager", uvm_component parent = null);
        super.new(name, parent);
        queue_size = 0;
        enqueue_count = 0;
        dequeue_count = 0;
    endfunction
    
    // ========================================================================
    // FIFO QUEUE OPERATIONS
    // ========================================================================
    /**
     * Enqueue FIFO: Add transaction to FIFO queue
     * 
     * FIFO ENQUEUE:
     *   - push_back(): Add to end of queue
     *   - FIFO behavior: First in, first out
     *   - Maintains arrival order
     */
    function void enqueue_fifo(QueueTransaction txn);
        // ====================================================================
        // ADD TO FIFO QUEUE
        // ====================================================================
        // 
        // PUSH_BACK:
        //   - Adds transaction to end of queue
        //   - FIFO: First in, first out
        //   - Example: Queue [txn0, txn1] -> push_back(txn2) -> [txn0, txn1, txn2]
        fifo_queue.push_back(txn);
        enqueue_count++;
        queue_size = fifo_queue.size();
        `uvm_info("QUEUE", $sformatf("Enqueued FIFO: %s (size: %0d)", 
            txn.convert2string(), queue_size), UVM_DEBUG)
        // 
        // FIFO EXAMPLE:
        //   Enqueue: txn0 -> Queue: [txn0]
        //   Enqueue: txn1 -> Queue: [txn0, txn1]
        //   Enqueue: txn2 -> Queue: [txn0, txn1, txn2]
    endfunction
    
    /**
     * Dequeue FIFO: Remove transaction from FIFO queue
     * 
     * FIFO DEQUEUE:
     *   - pop_front(): Remove and return first item
     *   - FIFO behavior: First in, first out
     *   - Returns first item added
     */
    function QueueTransaction dequeue_fifo();
        QueueTransaction txn;
        if (fifo_queue.size() > 0) begin
            // ================================================================
            // REMOVE FROM FIFO QUEUE
            // ================================================================
            // 
            // POP_FRONT:
            //   - Removes and returns first item
            //   - FIFO: First in, first out
            //   - Example: Queue [txn0, txn1, txn2] -> pop_front() -> txn0, Queue: [txn1, txn2]
            txn = fifo_queue.pop_front();
            dequeue_count++;
            queue_size = fifo_queue.size();
            `uvm_info("QUEUE", $sformatf("Dequeued FIFO: %s (size: %0d)", 
                txn.convert2string(), queue_size), UVM_DEBUG)
            // 
            // FIFO DEQUEUE EXAMPLE:
            //   Queue: [txn0, txn1, txn2]
            //   Dequeue: txn0 (first in, first out)
            //   Queue: [txn1, txn2]
        end else begin
            // ================================================================
            // EMPTY QUEUE WARNING
            // ================================================================
            `uvm_warning("QUEUE", "Attempted to dequeue from empty FIFO")
        end
        return txn;
    endfunction
    
    // ========================================================================
    // PRIORITY QUEUE OPERATIONS
    // ========================================================================
    /**
     * Enqueue priority: Add transaction to priority queue
     * 
     * PRIORITY ENQUEUE:
     *   - Insert transaction by priority
     *   - Higher priority transactions first
     *   - Maintains priority order
     */
    function void enqueue_priority(QueueTransaction txn);
        int insert_pos = 0;  // Insert position
        
        // ====================================================================
        // FIND INSERT POSITION
        // ====================================================================
        // 
        // INSERT POSITION FINDING:
        //   - Iterate through priority queue
        //   - Find position where txn.prio > queue[i].prio
        //   - Insert at that position
        //   - Maintains descending priority order
        // 
        // INSERTION ALGORITHM:
        //   Step 1: Start at position 0
        //   Step 2: Compare txn.prio with queue[i].prio
        //   Step 3: If txn.prio > queue[i].prio: Insert at position i
        //   Step 4: If txn.prio <= queue[i].prio: Continue to next position
        //   Step 5: If no higher priority found: Insert at end
        foreach (priority_queue[i]) begin
            // ================================================================
            // COMPARE PRIORITIES
            // ================================================================
            // 
            // PRIORITY COMPARISON:
            //   - txn.compare(priority_queue[i]): Compare priorities
            //   - Returns 1 if txn.prio > queue[i].prio
            //   - Returns -1 if txn.prio < queue[i].prio
            //   - Returns 0 if txn.prio == queue[i].prio
            //   - Insert before higher priority items
            if (txn.compare(priority_queue[i]) > 0) begin
                insert_pos = i;
                break;  // Found insert position
            end
            insert_pos = i + 1;  // Continue searching
        end
        // 
        // INSERT POSITION DETAILED EXAMPLE:
        //   Initial queue: [prio=9, prio=7, prio=5, prio=3]
        //   New transaction: prio=6
        //   
        //   Iteration 0 (i=0):
        //     queue[0].prio = 9
        //     txn.prio = 6
        //     compare(6, 9) = -1 (6 < 9)
        //     insert_pos = 1 (continue)
        //   
        //   Iteration 1 (i=1):
        //     queue[1].prio = 7
        //     txn.prio = 6
        //     compare(6, 7) = -1 (6 < 7)
        //     insert_pos = 2 (continue)
        //   
        //   Iteration 2 (i=2):
        //     queue[2].prio = 5
        //     txn.prio = 6
        //     compare(6, 5) = 1 (6 > 5)
        //     insert_pos = 2 (found!)
        //     break
        //   
        //   Result: Insert at position 2
        //   Final queue: [prio=9, prio=7, prio=6, prio=5, prio=3]
        // 
        // EDGE CASES:
        //   Case 1: Insert at beginning (highest priority)
        //     Queue: [prio=7, prio=5, prio=3]
        //     New: prio=9
        //     Compare: 9 > 7 (insert at position 0)
        //     Result: [prio=9, prio=7, prio=5, prio=3]
        //   
        //   Case 2: Insert at end (lowest priority)
        //     Queue: [prio=9, prio=7, prio=5]
        //     New: prio=3
        //     Compare: 3 < 9, 3 < 7, 3 < 5 (insert at end)
        //     Result: [prio=9, prio=7, prio=5, prio=3]
        //   
        //   Case 3: Insert in middle
        //     Queue: [prio=9, prio=7, prio=3]
        //     New: prio=5
        //     Compare: 5 < 9, 5 < 7, 5 > 3 (insert at position 2)
        //     Result: [prio=9, prio=7, prio=5, prio=3]
        
        // ====================================================================
        // INSERT TRANSACTION
        // ====================================================================
        // 
        // INSERT OPERATION:
        //   - insert(pos, txn): Insert at position
        //   - Maintains priority order
        //   - Higher priority items first
        priority_queue.insert(insert_pos, txn);
        enqueue_count++;
        queue_size = priority_queue.size();
        `uvm_info("QUEUE", $sformatf("Enqueued Priority: %s (size: %0d)", 
            txn.convert2string(), queue_size), UVM_DEBUG)
        // 
        // PRIORITY ENQUEUE EXAMPLE:
        //   Queue: [prio=9, prio=7, prio=5]
        //   Enqueue: prio=6
        //   Insert at position 2
        //   Result: [prio=9, prio=7, prio=6, prio=5]
    endfunction
    
    /**
     * Dequeue priority: Remove transaction from priority queue
     * 
     * PRIORITY DEQUEUE:
     *   - pop_front(): Remove and return first item (highest priority)
     *   - Priority behavior: Highest priority first
     *   - Returns highest priority item
     */
    function QueueTransaction dequeue_priority();
        QueueTransaction txn;
        if (priority_queue.size() > 0) begin
            // ================================================================
            // REMOVE FROM PRIORITY QUEUE
            // ================================================================
            // 
            // POP_FRONT:
            //   - Removes and returns first item (highest priority)
            //   - Priority: Highest priority first
            //   - Example: Queue [prio=9, prio=7, prio=5] -> pop_front() -> prio=9
            txn = priority_queue.pop_front();
            dequeue_count++;
            queue_size = priority_queue.size();
            `uvm_info("QUEUE", $sformatf("Dequeued Priority: %s (size: %0d)", 
                txn.convert2string(), queue_size), UVM_DEBUG)
            // 
            // PRIORITY DEQUEUE EXAMPLE:
            //   Queue: [prio=9, prio=7, prio=5]
            //   Dequeue: prio=9 (highest priority first)
            //   Queue: [prio=7, prio=5]
        end else begin
            // ================================================================
            // EMPTY QUEUE WARNING
            // ================================================================
            `uvm_warning("QUEUE", "Attempted to dequeue from empty priority queue")
        end
        return txn;
    endfunction
    
    // ========================================================================
    // REPORT PHASE
    // ========================================================================
    function void report_phase(uvm_phase phase);
        `uvm_info("QUEUE", $sformatf("Queue Statistics:"), UVM_LOW)
        `uvm_info("QUEUE", $sformatf("  FIFO Queue Size: %0d", fifo_queue.size()), UVM_LOW)
        `uvm_info("QUEUE", $sformatf("  Priority Queue Size: %0d", priority_queue.size()), UVM_LOW)
        `uvm_info("QUEUE", $sformatf("  Enqueued: %0d", enqueue_count), UVM_LOW)
        `uvm_info("QUEUE", $sformatf("  Dequeued: %0d", dequeue_count), UVM_LOW)
    endfunction
endclass

// ============================================================================
// TEST CLASS
// ============================================================================
class QueueTest extends uvm_test;
    QueueManager queue_mgr;
    
    `uvm_component_utils(QueueTest)
    
    function new(string name = "QueueTest", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        queue_mgr = QueueManager::type_id::create("queue_mgr", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        QueueTransaction txn;
        phase.raise_objection(this);
        
        // ====================================================================
        // TEST FIFO QUEUE
        // ====================================================================
        `uvm_info("QUEUE", "Testing FIFO queue", UVM_LOW)
        
        // Enqueue transactions
        for (int i = 0; i < 10; i++) begin
            txn = QueueTransaction::type_id::create("txn");
            void'(txn.randomize());
            txn.data = i * 8'h10;
            txn.address = i * 16'h100;
            queue_mgr.enqueue_fifo(txn);
            #10;
        end
        
        // Dequeue transactions
        for (int i = 0; i < 10; i++) begin
            txn = queue_mgr.dequeue_fifo();
            `uvm_info("QUEUE", $sformatf("Dequeued #%0d: %s", i, txn.convert2string()), UVM_MEDIUM)
            #10;
        end
        
        // ====================================================================
        // TEST PRIORITY QUEUE
        // ====================================================================
        `uvm_info("QUEUE", "Testing priority queue", UVM_LOW)
        
        // Enqueue transactions with random priorities
        for (int i = 0; i < 10; i++) begin
            txn = QueueTransaction::type_id::create("txn");
            void'(txn.randomize());
            txn.data = i * 8'h10;
            txn.address = i * 16'h100;
            txn.prio = $urandom_range(0, 9);  // Random priority
            queue_mgr.enqueue_priority(txn);
            #10;
        end
        
        // Dequeue transactions (should be in priority order)
        for (int i = 0; i < 10; i++) begin
            txn = queue_mgr.dequeue_priority();
            `uvm_info("QUEUE", $sformatf("Dequeued Priority #%0d: %s", i, txn.convert2string()), UVM_MEDIUM)
            #10;
        end
        
        #50;
        phase.drop_objection(this);
    endtask
endclass

// ============================================================================
// TOP-LEVEL MODULE
// ============================================================================
module queues_top;
    import uvm_pkg::*;
    
    initial begin
        run_test("QueueTest");
    end
endmodule
