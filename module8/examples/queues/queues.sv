/**
 * Module 8 Example 8.5: UVM Queues
 * Demonstrates queue utilities and operations.
 * 
 * This example shows:
 * - Queue utilities
 * - Queue operations
 * - Queue patterns
 * - Queue management
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Transaction for queue example
 */
class QueueTransaction extends uvm_sequence_item;
    rand logic [7:0] data;
    rand logic [15:0] address;
    int prio;
    
    `uvm_object_utils(QueueTransaction)
    
    function new(string name = "QueueTransaction");
        super.new(name);
        prio = 0;
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h, priority=%0d", data, address, prio);
    endfunction
    
    function int compare(QueueTransaction rhs);
        if (prio > rhs.prio) return 1;
        if (prio < rhs.prio) return -1;
        return 0;
    endfunction
endclass

/**
 * Queue manager with various operations
 */
class QueueManager extends uvm_component;
    QueueTransaction fifo_queue[$];
    QueueTransaction priority_queue[$];
    int queue_size;
    int enqueue_count;
    int dequeue_count;
    
    `uvm_component_utils(QueueManager)
    
    function new(string name = "QueueManager", uvm_component parent = null);
        super.new(name, parent);
        queue_size = 0;
        enqueue_count = 0;
        dequeue_count = 0;
    endfunction
    
    function void enqueue_fifo(QueueTransaction txn);
        fifo_queue.push_back(txn);
        enqueue_count++;
        queue_size = fifo_queue.size();
        `uvm_info("QUEUE", $sformatf("Enqueued FIFO: %s (size: %0d)", 
            txn.convert2string(), queue_size), UVM_DEBUG)
    endfunction
    
    function QueueTransaction dequeue_fifo();
        QueueTransaction txn;
        if (fifo_queue.size() > 0) begin
            txn = fifo_queue.pop_front();
            dequeue_count++;
            queue_size = fifo_queue.size();
            `uvm_info("QUEUE", $sformatf("Dequeued FIFO: %s (size: %0d)", 
                txn.convert2string(), queue_size), UVM_DEBUG)
        end else begin
            `uvm_warning("QUEUE", "Attempted to dequeue from empty FIFO")
        end
        return txn;
    endfunction
    
    function void enqueue_priority(QueueTransaction txn);
        int insert_pos = 0;
        foreach (priority_queue[i]) begin
            if (txn.compare(priority_queue[i]) > 0) begin
                insert_pos = i;
                break;
            end
            insert_pos = i + 1;
        end
        priority_queue.insert(insert_pos, txn);
        enqueue_count++;
        queue_size = priority_queue.size();
        `uvm_info("QUEUE", $sformatf("Enqueued Priority: %s (size: %0d)", 
            txn.convert2string(), queue_size), UVM_DEBUG)
    endfunction
    
    function QueueTransaction dequeue_priority();
        QueueTransaction txn;
        if (priority_queue.size() > 0) begin
            txn = priority_queue.pop_front();
            dequeue_count++;
            queue_size = priority_queue.size();
            `uvm_info("QUEUE", $sformatf("Dequeued Priority: %s (size: %0d)", 
                txn.convert2string(), queue_size), UVM_DEBUG)
        end else begin
            `uvm_warning("QUEUE", "Attempted to dequeue from empty priority queue")
        end
        return txn;
    endfunction
    
    function void report_phase(uvm_phase phase);
        `uvm_info("QUEUE", $sformatf("Queue Statistics:"), UVM_LOW)
        `uvm_info("QUEUE", $sformatf("  FIFO Queue Size: %0d", fifo_queue.size()), UVM_LOW)
        `uvm_info("QUEUE", $sformatf("  Priority Queue Size: %0d", priority_queue.size()), UVM_LOW)
        `uvm_info("QUEUE", $sformatf("  Enqueued: %0d", enqueue_count), UVM_LOW)
        `uvm_info("QUEUE", $sformatf("  Dequeued: %0d", dequeue_count), UVM_LOW)
    endfunction
endclass

/**
 * Test for queue example
 */
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
        
        `uvm_info("QUEUE", "Testing FIFO queue", UVM_LOW)
        
        // Test FIFO queue
        for (int i = 0; i < 10; i++) begin
            txn = QueueTransaction::type_id::create("txn");
            void'(txn.randomize());
            txn.data = i * 8'h10;
            txn.address = i * 16'h100;
            queue_mgr.enqueue_fifo(txn);
            #10;
        end
        
        for (int i = 0; i < 10; i++) begin
            txn = queue_mgr.dequeue_fifo();
            `uvm_info("QUEUE", $sformatf("Dequeued #%0d: %s", i, txn.convert2string()), UVM_MEDIUM)
            #10;
        end
        
        `uvm_info("QUEUE", "Testing priority queue", UVM_LOW)
        
        // Test priority queue
        for (int i = 0; i < 10; i++) begin
            txn = QueueTransaction::type_id::create("txn");
            void'(txn.randomize());
            txn.data = i * 8'h10;
            txn.address = i * 16'h100;
            txn.prio = $urandom_range(0, 9);
            queue_mgr.enqueue_priority(txn);
            #10;
        end
        
        for (int i = 0; i < 10; i++) begin
            txn = queue_mgr.dequeue_priority();
            `uvm_info("QUEUE", $sformatf("Dequeued Priority #%0d: %s", i, txn.convert2string()), UVM_MEDIUM)
            #10;
        end
        
        #50;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level module for queue example
 */
module queues_top;
    import uvm_pkg::*;
    
    initial begin
        run_test("QueueTest");
    end
endmodule
