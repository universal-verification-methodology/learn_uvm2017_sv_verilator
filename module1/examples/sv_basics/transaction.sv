/**
 * Module 1 Example 1.1: SystemVerilog Class Basics
 * Demonstrates classes, inheritance, and special methods for verification.
 * 
 * Note: This is a standalone example without UVM dependency.
 * For UVM-compatible transactions, see the UVM testbenches.
 */

package transaction_pkg;
    /**
     * Base transaction class for verification.
     * 
     * This class demonstrates:
     * - Class definition
     * - Instance variables
     * - Methods
     * - Special methods (copy, compare, convert2string)
     */
    class Transaction;
        // Class variable (static)
        static int id_counter = 0;
        
        // Instance variables
        int id;
        bit [31:0] data;
        int unsigned timestamp;
        
        /**
         * Constructor
         */
        function new(string name = "Transaction");
            id_counter++;
            id = id_counter;
            data = 0;
            timestamp = 0;
        endfunction
        
        /**
         * Copy method
         */
        function void copy(Transaction rhs);
            if (rhs == null) begin
                $error("Copy failed: null pointer");
                return;
            end
            id = rhs.id;
            data = rhs.data;
            timestamp = rhs.timestamp;
        endfunction
        
        /**
         * Compare method
         */
        function bit compare(Transaction rhs);
            if (rhs == null) return 0;
            return (id == rhs.id) && (data == rhs.data);
        endfunction
        
        /**
         * String conversion - equivalent to __str__ in Python
         */
        function string convert2string();
            return $sformatf("Transaction(id=%0d, data=0x%0h, timestamp=%0d)", 
                           id, data, timestamp);
        endfunction
        
        /**
         * Set transaction timestamp
         */
        function void set_timestamp(int unsigned ts);
            timestamp = ts;
        endfunction
        
        /**
         * Get transaction ID
         */
        function int get_id();
            return id;
        endfunction
    endclass
    
    /**
     * Read transaction class.
     * 
     * Demonstrates inheritance and method overriding.
     */
    class ReadTransaction extends Transaction;
        bit [15:0] address;
        string transaction_type;
        
        function new(string name = "ReadTransaction");
            super.new(name);
            address = 0;
            transaction_type = "READ";
        endfunction
        
        /**
         * Override string representation
         */
        function string convert2string();
            return $sformatf("ReadTransaction(id=%0d, address=0x%0h, data=0x%0h)", 
                           id, address, data);
        endfunction
        
        /**
         * Get read address
         */
        function bit [15:0] get_address();
            return address;
        endfunction
    endclass
    
    /**
     * Write transaction class.
     * 
     * Demonstrates inheritance and method overriding.
     */
    class WriteTransaction extends Transaction;
        bit [15:0] address;
        string transaction_type;
        
        function new(string name = "WriteTransaction");
            super.new(name);
            address = 0;
            transaction_type = "WRITE";
        endfunction
        
        /**
         * Override string representation
         */
        function string convert2string();
            return $sformatf("WriteTransaction(id=%0d, address=0x%0h, data=0x%0h)", 
                           id, address, data);
        endfunction
        
        /**
         * Get write address
         */
        function bit [15:0] get_address();
            return address;
        endfunction
    endclass

endpackage

/**
 * Test program to demonstrate transaction classes
 */
module transaction_example;
    import transaction_pkg::*;
    
    initial begin
        Transaction txn1, txn2;
        ReadTransaction read_txn;
        WriteTransaction write_txn;
        Transaction txn_copy;
        
        $display("============================================================");
        $display("Module 1 Example 1.1: SystemVerilog Class Basics");
        $display("============================================================");
        $display();
        
        // Create base transaction
        $display("1. Creating base transaction:");
        txn1 = new();
        txn1.data = 32'h1234;
        $display("   %s", txn1.convert2string());
        $display("   Transaction ID: %0d", txn1.get_id());
        $display();
        
        // Create read transaction
        $display("2. Creating read transaction (inheritance):");
        read_txn = new();
        read_txn.address = 16'h1000;
        read_txn.data = 32'hDEAD;
        $display("   %s", read_txn.convert2string());
        $display("   Address: 0x%0h", read_txn.get_address());
        $display();
        
        // Create write transaction
        $display("3. Creating write transaction (inheritance):");
        write_txn = new();
        write_txn.address = 16'h2000;
        write_txn.data = 32'hBEEF;
        $display("   %s", write_txn.convert2string());
        $display("   Address: 0x%0h", write_txn.get_address());
        $display();
        
        // Demonstrate copy
        $display("4. Testing copy:");
        txn_copy = new();
        txn_copy.copy(txn1);
        $display("   Original: %s", txn1.convert2string());
        $display("   Copy:     %s", txn_copy.convert2string());
        $display();
        
        // Demonstrate compare
        $display("5. Testing compare:");
        txn2 = new();
        txn2.data = 32'h1234;
        txn2.id = txn1.id;  // Same ID
        $display("   txn1 == txn2: %0d", txn1.compare(txn2));
        $display("   txn1 == read_txn: %0d", txn1.compare(read_txn));
        $display();
        
        $display("============================================================");
        $display("Example completed successfully!");
        $display("============================================================");
        
        #10;
        $finish;
    end
endmodule
