/**
 * Module 1 Example 1.3: Packages and Namespaces
 * Demonstrates SystemVerilog packages for code organization.
 */

/**
 * Verification package with common types and functions
 */
package verification_pkg;
    // Common types
    typedef enum logic [1:0] {
        IDLE,
        ACTIVE,
        DONE
    } state_e;
    
    typedef struct packed {
        logic [15:0] address;
        logic [31:0] data;
        logic        valid;
    } transaction_t;
    
    // Constants
    parameter int MAX_TRANSACTIONS = 100;
    parameter int TIMEOUT_CYCLES = 1000;
    
    // Note: Verilator may have issues with parameter types in task defaults
    // Using explicit value in call instead
    
    /**
     * Function to check if address is valid
     */
    function automatic bit is_valid_address(logic [15:0] addr);
        return (addr < 16'h1000);
    endfunction
    
    /**
     * Function to calculate checksum
     */
    function automatic logic [7:0] calculate_checksum(logic [31:0] data);
        return data[7:0] ^ data[15:8] ^ data[23:16] ^ data[31:24];
    endfunction
    
    /**
     * Task to wait for condition with timeout
     */
    task automatic wait_for_condition(ref bit condition, int timeout);
        int count = 0;
        while (!condition && count < timeout) begin
            #1;
            count++;
        end
        if (count >= timeout) begin
            $error("Timeout waiting for condition");
        end
    endtask
endpackage

/**
 * Test program demonstrating package usage
 */
module package_example;
    import verification_pkg::*;
    
    state_e current_state;
    transaction_t trans;
    bit condition;
    
    initial begin
        $display("============================================================");
        $display("Module 1 Example 1.3: Packages and Namespaces");
        $display("============================================================");
        $display();
        
        // Use enum type from package
        $display("1. Using enum type from package:");
        current_state = IDLE;
        $display("   Initial state: %s", current_state.name());
        
        current_state = ACTIVE;
        $display("   Active state: %s", current_state.name());
        $display();
        
        // Use struct type from package
        $display("2. Using struct type from package:");
        trans.address = 16'h0100;
        trans.data = 32'hDEADBEEF;
        trans.valid = 1;
        $display("   Transaction: addr=0x%0h, data=0x%0h, valid=%0d", 
                 trans.address, trans.data, trans.valid);
        $display();
        
        // Use function from package
        $display("3. Using functions from package:");
        $display("   Address 0x0100 is valid: %0d", is_valid_address(16'h0100));
        $display("   Address 0x2000 is valid: %0d", is_valid_address(16'h2000));
        $display("   Checksum of 0xDEADBEEF: 0x%0h", calculate_checksum(32'hDEADBEEF));
        $display();
        
        // Use constants from package
        $display("4. Using constants from package:");
        $display("   MAX_TRANSACTIONS: %0d", MAX_TRANSACTIONS);
        $display("   TIMEOUT_CYCLES: %0d", TIMEOUT_CYCLES);
        $display();
        
        // Use task from package
        $display("5. Using task from package:");
        condition = 0;
        fork
            begin
                #10;
                condition = 1;
            end
            begin
                int timeout_val;
                timeout_val = 1000;
                wait_for_condition(condition, timeout_val);
            end
        join
        $display("   Condition met after wait");
        $display();
        
        $display("============================================================");
        $display("Example completed successfully!");
        $display("============================================================");
        
        #10;
        $finish;
    end
endmodule
