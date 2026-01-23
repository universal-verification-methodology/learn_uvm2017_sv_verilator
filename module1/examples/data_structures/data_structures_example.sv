/**
 * Module 1 Example 1.4: Data Structures for Verification
 * Demonstrates SystemVerilog data structures commonly used in verification.
 */

package data_structures_pkg;
    // Note: This example uses a simple transaction class
    // For UVM-compatible transactions, see the UVM testbenches
    
    // Simple transaction class for this example
    class SimpleTransaction;
        int id;
        bit [31:0] data;
        
        function new(int id_val = 0, bit [31:0] data_val = 0);
            id = id_val;
            data = data_val;
        endfunction
        
        function string convert2string();
            return $sformatf("id=%0d, data=0x%0h", id, data);
        endfunction
    endclass
    
    /**
     * Transaction queue using SystemVerilog queue
     */
    class TransactionQueue;
        SimpleTransaction queue[$];  // Queue of transactions
        
        function new();
        endfunction
        
        /**
         * Push transaction to queue
         */
        function void push(SimpleTransaction txn);
            queue.push_back(txn);
        endfunction
        
        /**
         * Pop transaction from queue
         */
        function SimpleTransaction pop();
            SimpleTransaction txn;
            if (queue.size() > 0) begin
                txn = queue.pop_front();
            end
            return txn;
        endfunction
        
        /**
         * Get queue size
         */
        function int size();
            return queue.size();
        endfunction
        
        /**
         * Check if queue is empty
         */
        function bit is_empty();
            return (queue.size() == 0);
        endfunction
    endclass
    
    /**
     * Scoreboard using associative array
     */
    class Scoreboard;
        // Associative array: transaction ID -> expected data
        bit [31:0] expected_data[int];
        bit [31:0] actual_data[int];
        
        function new();
        endfunction
        
        /**
         * Add expected transaction
         */
        function void add_expected(int id, bit [31:0] data);
            expected_data[id] = data;
        endfunction
        
        /**
         * Add actual transaction
         */
        function void add_actual(int id, bit [31:0] data);
            actual_data[id] = data;
        endfunction
        
        /**
         * Check if transaction matches
         */
        function bit check(int id);
            if (expected_data.exists(id) == 0 || actual_data.exists(id) == 0) begin
                return 0;
            end
            return (expected_data[id] == actual_data[id]);
        endfunction
    endclass
    
    /**
     * Coverage collector using associative array
     */
    class CoverageCollector;
        // Associative array: address -> count
        int address_count[int];
        
        function new();
        endfunction
        
        /**
         * Sample address
         */
        function void sample_address(int addr);
            if (address_count.exists(addr) != 0) begin
                address_count[addr]++;
            end else begin
                address_count[addr] = 1;
            end
        endfunction
        
        /**
         * Get coverage percentage
         */
        function real get_coverage(int max_address);
            int covered = 0;
            foreach (address_count[i]) begin
                if (i < max_address) covered++;
            end
            return (real'(covered) / real'(max_address)) * 100.0;
        endfunction
    endclass
endpackage

/**
 * Test program demonstrating data structures
 */
module data_structures_example;
    import data_structures_pkg::*;
    
    TransactionQueue txn_queue;
    Scoreboard scoreboard;
    CoverageCollector coverage;
    SimpleTransaction txn;
    
    initial begin
        $display("============================================================");
        $display("Module 1 Example 1.4: Data Structures for Verification");
        $display("============================================================");
        $display();
        
        // Create data structures
        txn_queue = new();
        scoreboard = new();
        coverage = new();
        
        // Demonstrate transaction queue
        $display("1. Transaction Queue:");
        for (int i = 0; i < 5; i++) begin
            txn = new(i, 32'h1000 + i);
            txn_queue.push(txn);
            $display("   Pushed: %s", txn.convert2string());
        end
        $display("   Queue size: %0d", txn_queue.size());
        $display();
        
        $display("2. Popping from queue:");
        while (!txn_queue.is_empty()) begin
            txn = txn_queue.pop();
            $display("   Popped: %s", txn.convert2string());
        end
        $display();
        
        // Demonstrate scoreboard
        $display("3. Scoreboard:");
        scoreboard.add_expected(1, 32'hDEADBEEF);
        scoreboard.add_expected(2, 32'hCAFEBABE);
        scoreboard.add_actual(1, 32'hDEADBEEF);
        scoreboard.add_actual(2, 32'hCAFEBABE);
        $display("   Transaction 1 match: %0d", scoreboard.check(1));
        $display("   Transaction 2 match: %0d", scoreboard.check(2));
        $display();
        
        // Demonstrate coverage collector
        $display("4. Coverage Collector:");
        for (int i = 0; i < 10; i++) begin
            coverage.sample_address(i * 16);
        end
        $display("   Coverage: %0.2f%%", coverage.get_coverage(256));
        $display();
        
        $display("============================================================");
        $display("Example completed successfully!");
        $display("============================================================");
        
        #10;
        $finish;
    end
endmodule
