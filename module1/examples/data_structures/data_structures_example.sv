/**
 * Module 1 Example 1.4: Data Structures for Verification
 * Demonstrates SystemVerilog data structures commonly used in verification.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand SystemVerilog queues (FIFO data structures)
 *   2. Master associative arrays (hash tables)
 *   3. Learn scoreboard implementation patterns
 *   4. Understand coverage collection techniques
 *   5. Apply data structures to verification problems
 * 
 * DATA STRUCTURES COVERED:
 *   - Queues: Dynamic FIFO structures for transaction buffering
 *   - Associative Arrays: Sparse arrays for scoreboards and coverage
 *   - Classes: Object-oriented data encapsulation
 * 
 * VERIFICATION PATTERNS:
 *   - Transaction Queue: FIFO buffer for transactions
 *   - Scoreboard: Expected vs actual comparison using associative arrays
 *   - Coverage Collector: Address coverage tracking
 * 
 * UVM RELATIONSHIP:
 *   - Queues are used in uvm_tlm_fifo for transaction communication
 *   - Associative arrays used in UVM scoreboards
 *   - Coverage patterns similar to uvm_coverage
 */

// ============================================================================
// PACKAGE DECLARATION
// ============================================================================
// Package declaration: creates a namespace for data structure classes
// Packages allow code organization and prevent naming conflicts
// 
// PACKAGE BENEFITS:
//   - Namespace isolation: Prevents name collisions
//   - Code reuse: Can be imported into multiple modules
//   - Organization: Groups related functionality together
//   - Compilation: Packages are compiled once, used many times
package data_structures_pkg;
    // Note: This example uses a simple transaction class
    // For UVM-compatible transactions, see the UVM testbenches
    
    /**
     * Simple transaction class for this example
     * 
     * This is a minimal transaction class used to demonstrate data structures.
     * In real UVM testbenches, transactions would inherit from uvm_sequence_item.
     */
    class SimpleTransaction;
        // Instance variables: each transaction object has these fields
        int id;              // Unique identifier for the transaction (32-bit signed integer)
        bit [31:0] data;     // Transaction payload data (32-bit unsigned bit vector)
        
        /**
         * Constructor: creates a new SimpleTransaction object
         * 
         * @param id_val Transaction ID (defaults to 0 if not provided)
         * @param data_val Transaction data (defaults to 0 if not provided)
         */
        function new(int id_val = 0, bit [31:0] data_val = 0);
            // Assign constructor parameters to instance variables
            id = id_val;        // Set the transaction ID
            data = data_val;     // Set the transaction data
        endfunction
        
        /**
         * Convert transaction to string representation
         * 
         * @return Formatted string with transaction ID and data
         */
        function string convert2string();
            // Format string with transaction fields
            // '%0d' formats integer in decimal, '%0h' formats in hexadecimal
            return $sformatf("id=%0d, data=0x%0h", id, data);
        endfunction
    endclass  // End of SimpleTransaction class
    
    /**
     * Transaction queue using SystemVerilog queue
     * 
     * This class demonstrates SystemVerilog queues, which are dynamic arrays
     * that can grow and shrink. Queues are FIFO (First In, First Out) data structures.
     * 
     * Queue syntax: 'queue[$]' where $ means unbounded size
     * Queue methods: push_back(), pop_front(), size()
     */
    class TransactionQueue;
        // Queue declaration: dynamic array of SimpleTransaction objects
        // '[$]' indicates an unbounded queue (can grow to any size)
        // Queues are indexed from 0, with new elements added at the back
        SimpleTransaction queue[$];  // Queue of transactions (FIFO structure)
        
        /**
         * Constructor: initializes an empty queue
         */
        function new();
            // Empty constructor: queue is automatically initialized as empty
            // No explicit initialization needed for queues
        endfunction
        
        /**
         * Push transaction to queue (add to back)
         * 
         * Adds a transaction to the end of the queue (FIFO enqueue operation).
         * 
         * @param txn Transaction object to add to the queue
         */
        function void push(SimpleTransaction txn);
            // 'push_back()' adds element to the end of the queue
            // This is the standard FIFO enqueue operation
            queue.push_back(txn);
        endfunction
        
        /**
         * Pop transaction from queue (remove from front)
         * 
         * Removes and returns the first transaction from the queue (FIFO dequeue operation).
         * Returns null if queue is empty.
         * 
         * @return Transaction object removed from front, or null if queue is empty
         */
        function SimpleTransaction pop();
            // Declare local variable to hold the popped transaction
            SimpleTransaction txn;
            // Check if queue has any elements before popping
            // 'size()' returns the number of elements in the queue
            if (queue.size() > 0) begin
                // 'pop_front()' removes and returns the first element (FIFO dequeue)
                // This is the standard FIFO dequeue operation
                txn = queue.pop_front();
            end
            // Return the popped transaction (or null if queue was empty)
            return txn;
        endfunction
        
        /**
         * Get queue size
         * 
         * Returns the number of transactions currently in the queue.
         * 
         * @return Number of elements in the queue (integer)
         */
        function int size();
            // Return the number of elements in the queue
            return queue.size();
        endfunction
        
        /**
         * Check if queue is empty
         * 
         * Returns 1 if queue is empty, 0 if it contains elements.
         * 
         * @return 1 if empty, 0 if not empty
         */
        function bit is_empty();
            // Check if queue size is zero
            // Returns 1 (true) if size is 0, 0 (false) otherwise
            return (queue.size() == 0);
        endfunction
    endclass  // End of TransactionQueue class
    
    /**
     * Scoreboard using associative array
     * 
     * A scoreboard is used in verification to compare expected vs actual results.
     * This implementation uses associative arrays (hash tables) to store data
     * indexed by transaction ID.
     * 
     * Associative arrays: sparse arrays indexed by any integral type
     * Syntax: 'data_type array_name[index_type]'
     * Only stores entries that have been written (sparse storage)
     */
    class Scoreboard;
        // Associative array: transaction ID -> expected data value
        // 'bit [31:0] expected_data[int]' means: 32-bit values indexed by integer keys
        // Only stores entries that have been written (sparse array)
        bit [31:0] expected_data[int];  // Maps transaction ID to expected 32-bit data
        
        // Associative array: transaction ID -> actual data value
        // Stores the actual data received for each transaction ID
        bit [31:0] actual_data[int];   // Maps transaction ID to actual 32-bit data
        
        /**
         * Constructor: initializes empty scoreboard
         */
        function new();
            // Empty constructor: associative arrays are automatically empty
            // No explicit initialization needed
        endfunction
        
        /**
         * Add expected transaction data
         * 
         * Stores the expected data value for a given transaction ID.
         * This is typically called when a transaction is sent to the DUT.
         * 
         * @param id Transaction ID (used as key in associative array)
         * @param data Expected 32-bit data value for this transaction
         */
        function void add_expected(int id, bit [31:0] data);
            // Store expected data in associative array using ID as key
            // If ID already exists, value is overwritten
            expected_data[id] = data;
        endfunction
        
        /**
         * Add actual transaction data
         * 
         * Stores the actual data value received for a given transaction ID.
         * This is typically called when a transaction is received from the DUT.
         * 
         * @param id Transaction ID (used as key in associative array)
         * @param data Actual 32-bit data value received for this transaction
         */
        function void add_actual(int id, bit [31:0] data);
            // Store actual data in associative array using ID as key
            // If ID already exists, value is overwritten
            actual_data[id] = data;
        endfunction
        
        /**
         * Check if transaction matches (expected == actual)
         * 
         * Compares expected and actual data for a given transaction ID.
         * Returns 1 if both exist and match, 0 otherwise.
         * 
         * @param id Transaction ID to check
         * @return 1 if expected and actual match, 0 if mismatch or missing
         */
        function bit check(int id);
            // Check if both expected and actual entries exist for this ID
            // 'exists()' returns 1 if key exists, 0 if it doesn't
            // If either doesn't exist, return 0 (mismatch)
            if (expected_data.exists(id) == 0 || actual_data.exists(id) == 0) begin
                return 0;  // Return false if either entry is missing
            end
            // Both entries exist: compare their values
            // Returns 1 if values match, 0 if they don't
            return (expected_data[id] == actual_data[id]);
        endfunction
    endclass  // End of Scoreboard class
    
    /**
     * Coverage collector using associative array
     * 
     * This class demonstrates coverage collection using associative arrays.
     * Coverage tracks which addresses have been accessed during simulation.
     * 
     * Coverage metrics help ensure all important design states/addresses are tested.
     */
    class CoverageCollector;
        // Associative array: address -> access count
        // 'int address_count[int]' means: integer values indexed by integer keys
        // Stores how many times each address has been accessed
        int address_count[int];  // Maps address to number of times it was accessed
        
        /**
         * Constructor: initializes empty coverage collector
         */
        function new();
            // Empty constructor: associative array is automatically empty
        endfunction
        
        /**
         * Sample address (record that an address was accessed)
         * 
         * Increments the access count for a given address.
         * If address hasn't been seen before, initializes count to 1.
         * 
         * @param addr Address that was accessed (used as key in associative array)
         */
        function void sample_address(int addr);
            // Check if this address has been seen before
            // 'exists()' returns 1 if key exists, 0 if it doesn't
            if (address_count.exists(addr) != 0) begin
                // Address already exists: increment the count
                // '++' is increment operator (address_count[addr] = address_count[addr] + 1)
                address_count[addr]++;
            end else begin
                // Address not seen before: initialize count to 1
                address_count[addr] = 1;
            end
        endfunction
        
        /**
         * Get coverage percentage
         * 
         * Calculates what percentage of addresses (0 to max_address-1) have been accessed.
         * 
         * @param max_address Maximum address value (defines address space size)
         * @return Coverage percentage as real number (0.0 to 100.0)
         */
        function real get_coverage(int max_address);
            // Local variable to count how many addresses were covered
            int covered = 0;
            // 'foreach' loop iterates over all keys in the associative array
            // 'i' is the loop variable (address key)
            foreach (address_count[i]) begin
                // Only count addresses within the valid range (0 to max_address-1)
                if (i < max_address) covered++;  // Increment covered count
            end
            // Calculate percentage: (covered addresses / total addresses) * 100
            // 'real'() is type casting: converts integer to real (floating point)
            return (real'(covered) / real'(max_address)) * 100.0;
        endfunction
    endclass  // End of CoverageCollector class
endpackage  // End of data_structures_pkg package

/**
 * Test program demonstrating data structures
 * 
 * This module demonstrates the usage of:
 * - Queues (FIFO data structure)
 * - Associative arrays (hash tables for scoreboards)
 * - Coverage collection
 */
module data_structures_example;
    // Import all items from the data_structures_pkg package
    // Makes all classes available without package prefix
    import data_structures_pkg::*;
    
    // Declare handles (pointers) to data structure objects
    // These are not objects yet, just handles that can point to objects
    TransactionQueue txn_queue;      // Handle for transaction queue object
    Scoreboard scoreboard;            // Handle for scoreboard object
    CoverageCollector coverage;       // Handle for coverage collector object
    SimpleTransaction txn;            // Handle for transaction object (reused)
    
    // 'initial' block: executes once at simulation start (time 0)
    initial begin
        // Display section header for test output
        $display("============================================================");
        $display("Module 1 Example 1.4: Data Structures for Verification");
        $display("============================================================");
        $display();  // Empty line
        
        // Create data structure objects
        // 'new()' creates objects and returns handles
        txn_queue = new();    // Create empty transaction queue
        scoreboard = new();   // Create empty scoreboard
        coverage = new();     // Create empty coverage collector
        
        // Test 1: Demonstrate transaction queue (FIFO operations)
        $display("1. Transaction Queue:");
        // 'for' loop: creates 5 transactions and pushes them to the queue
        // 'int i = 0' initializes loop variable, 'i < 5' is condition, 'i++' increments
        for (int i = 0; i < 5; i++) begin
            // Create new transaction with ID=i and data=0x1000+i
            // '32'h1000 + i' calculates data value (4096 + i in decimal)
            txn = new(i, 32'h1000 + i);
            // Push transaction to back of queue (FIFO enqueue)
            txn_queue.push(txn);
            // Display the transaction that was pushed
            $display("   Pushed: %s", txn.convert2string());
        end
        // Display total number of transactions in queue (should be 5)
        $display("   Queue size: %0d", txn_queue.size());
        $display();  // Empty line
        
        // Test 2: Pop transactions from queue (FIFO dequeue)
        $display("2. Popping from queue:");
        // 'while' loop: continues until queue is empty
        // '!' is logical NOT operator, 'is_empty()' returns 1 if empty
        while (!txn_queue.is_empty()) begin
            // Pop transaction from front of queue (FIFO dequeue)
            txn = txn_queue.pop();
            // Display the transaction that was popped
            $display("   Popped: %s", txn.convert2string());
        end
        $display();  // Empty line
        
        // Test 3: Demonstrate scoreboard (expected vs actual comparison)
        $display("3. Scoreboard:");
        // Add expected transactions (what we expect the DUT to produce)
        scoreboard.add_expected(1, 32'hDEADBEEF);  // Transaction ID 1, expected data
        scoreboard.add_expected(2, 32'hCAFEBABE);  // Transaction ID 2, expected data
        // Add actual transactions (what the DUT actually produced)
        scoreboard.add_actual(1, 32'hDEADBEEF);    // Transaction ID 1, actual data (matches)
        scoreboard.add_actual(2, 32'hCAFEBABE);    // Transaction ID 2, actual data (matches)
        // Check if transactions match (expected == actual)
        // Should return 1 (true) for both since data matches
        $display("   Transaction 1 match: %0d", scoreboard.check(1));
        $display("   Transaction 2 match: %0d", scoreboard.check(2));
        $display();  // Empty line
        
        // Test 4: Demonstrate coverage collector
        $display("4. Coverage Collector:");
        // 'for' loop: samples 10 different addresses
        for (int i = 0; i < 10; i++) begin
            // Sample address = i * 16 (addresses: 0, 16, 32, 48, ..., 144)
            // This simulates accessing different memory addresses
            coverage.sample_address(i * 16);
        end
        // Calculate coverage percentage for address space 0-255
        // 10 addresses covered out of 256 total = ~3.9% coverage
        $display("   Coverage: %0.2f%%", coverage.get_coverage(256));
        $display();  // Empty line
        
        // Display completion message
        $display("============================================================");
        $display("Example completed successfully!");
        $display("============================================================");
        
        // Wait 10 time units before finishing
        #10;
        // Terminate simulation
        $finish;
    end  // End of initial block
endmodule  // End of module definition
