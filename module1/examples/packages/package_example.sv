/**
 * Module 1 Example 1.3: Packages and Namespaces
 * Demonstrates SystemVerilog packages for code organization.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand SystemVerilog packages and namespaces
 *   2. Learn type definitions (typedef enum, typedef struct)
 *   3. Master package import syntax
 *   4. Understand automatic functions and tasks
 *   5. Apply packages for code organization
 * 
 * PACKAGE CONCEPTS:
 *   - Namespace: Prevents naming conflicts
 *   - Code Organization: Groups related functionality
 *   - Reusability: Import into multiple modules
 *   - Compilation: Compiled once, used many times
 * 
 * TYPE SYSTEM:
 *   - Enum: Named constants with underlying type
 *   - Struct: Composite data type with multiple fields
 *   - Packed: Contiguous bit representation
 * 
 * FUNCTION/TASK SEMANTICS:
 *   - Automatic: Re-entrant (each call has own stack)
 *   - Static: Shared state (default, not used here)
 *   - Pure Functions: No side effects (functions)
 *   - Tasks: Can have delays and side effects
 * 
 * UVM RELATIONSHIP:
 *   - UVM uses packages extensively (uvm_pkg)
 *   - Type definitions similar to UVM types
 *   - Import patterns used throughout UVM
 */

// ============================================================================
// PACKAGE DECLARATION
// ============================================================================
/**
 * Verification package with common types and functions
 * 
 * Packages provide namespaces for organizing related code elements.
 * This package demonstrates:
 * - Type definitions (enum, struct)
 * - Constants (parameters)
 * - Functions (automatic, pure functions)
 * - Tasks (automatic, with timing control)
 * 
 * PACKAGE USAGE:
 *   - Import: import verification_pkg::*;
 *   - Selective: import verification_pkg::state_e;
 *   - Qualified: verification_pkg::state_e (no import needed)
 */
package verification_pkg;
    // Common types: user-defined types for better code organization
    
    /**
     * State enumeration type
     * 
     * Defines a 2-bit enumerated type with three states.
     * 'typedef enum' creates a new type name for the enumeration.
     * 'logic [1:0]' specifies the underlying type (2-bit logic vector).
     */
    typedef enum logic [1:0] {
        IDLE,    // State value 0: idle state
        ACTIVE,  // State value 1: active state
        DONE     // State value 2: done state
    } state_e;   // Type name: 'state_e' (e suffix indicates enum)
    
    /**
     * Transaction structure type
     * 
     * Defines a packed structure for transaction data.
     * 'typedef struct packed' creates a packed structure (all fields contiguous).
     * Packed structs can be used in port declarations and assignments.
     */
    typedef struct packed {
        logic [15:0] address;  // 16-bit address field
        logic [31:0] data;      // 32-bit data field
        logic        valid;      // 1-bit valid flag
    } transaction_t;             // Type name: 'transaction_t' (t suffix indicates type)
    
    // Constants: compile-time constants for configuration
    // 'parameter' defines a constant that can be overridden at instantiation
    parameter int MAX_TRANSACTIONS = 100;  // Maximum number of transactions allowed
    parameter int TIMEOUT_CYCLES = 1000;   // Timeout value in clock cycles
    
    // Note: Verilator may have issues with parameter types in task defaults
    // Using explicit value in call instead
    
    /**
     * Function to check if address is valid
     * 
     * 'automatic' keyword makes function re-entrant (each call has own stack).
     * This is required for recursive functions or functions called from tasks.
     * 
     * @param addr 16-bit address to validate
     * @return 1 if address < 0x1000 (valid), 0 otherwise
     */
    function automatic bit is_valid_address(logic [15:0] addr);
        // Check if address is within valid range (less than 0x1000 = 4096)
        // Returns 1 (true) if valid, 0 (false) if invalid
        return (addr < 16'h1000);
    endfunction
    
    /**
     * Function to calculate checksum
     * 
     * Calculates XOR checksum of 32-bit data by XORing all 4 bytes.
     * This is a simple error detection mechanism.
     * 
     * @param data 32-bit data to calculate checksum for
     * @return 8-bit checksum value (XOR of all 4 bytes)
     */
    function automatic logic [7:0] calculate_checksum(logic [31:0] data);
        // XOR all 4 bytes together to create checksum
        // '^' is bitwise XOR operator
        // data[7:0]   = bits 7-0   (byte 0, least significant)
        // data[15:8]  = bits 15-8   (byte 1)
        // data[23:16] = bits 23-16  (byte 2)
        // data[31:24] = bits 31-24 (byte 3, most significant)
        return data[7:0] ^ data[15:8] ^ data[23:16] ^ data[31:24];
    endfunction
    
    /**
     * Task to wait for condition with timeout
     * 
     * Waits for a condition to become true, with a timeout limit.
     * 'automatic' keyword makes task re-entrant.
     * 'ref' keyword passes condition by reference (can be modified).
     * 
     * @param condition Reference to condition bit (waits for this to become 1)
     * @param timeout Maximum number of time units to wait
     */
    task automatic wait_for_condition(ref bit condition, int timeout);
        // Local variable to count time units waited
        int count = 0;
        // Loop until condition is true OR timeout reached
        // '!' is logical NOT, '&&' is logical AND
        while (!condition && count < timeout) begin
            // Wait 1 time unit
            #1;
            // Increment wait counter
            count++;
        end
        // Check if timeout was reached (condition never became true)
        if (count >= timeout) begin
            // Display error message if timeout occurred
            $error("Timeout waiting for condition");
        end
    endtask
endpackage  // End of verification_pkg package

/**
 * Test program demonstrating package usage
 * 
 * This module demonstrates how to use types, constants, functions, and tasks
 * defined in a package. The 'import' statement makes package contents available.
 */
module package_example;
    // Import all items from the verification_pkg package
    // 'import verification_pkg::*;' makes all package contents available
    // Without this, you would need to use 'verification_pkg::state_e', etc.
    import verification_pkg::*;
    
    // Declare variables using types from the package
    state_e current_state;      // Variable of enum type from package
    transaction_t trans;         // Variable of struct type from package
    bit condition;               // Condition bit for wait task demonstration
    
    // 'initial' block: executes once at simulation start (time 0)
    initial begin
        // Display section header for test output
        $display("============================================================");
        $display("Module 1 Example 1.3: Packages and Namespaces");
        $display("============================================================");
        $display();  // Empty line
        
        // Test 1: Use enum type from package
        $display("1. Using enum type from package:");
        // Assign enum value (IDLE is defined in the package)
        current_state = IDLE;
        // Display state name using .name() method (returns string representation)
        $display("   Initial state: %s", current_state.name());
        
        // Change to another enum value
        current_state = ACTIVE;
        // Display new state name
        $display("   Active state: %s", current_state.name());
        $display();  // Empty line
        
        // Test 2: Use struct type from package
        $display("2. Using struct type from package:");
        // Access struct fields using dot notation
        trans.address = 16'h0100;      // Set address field to 0x0100
        trans.data = 32'hDEADBEEF;     // Set data field to 0xDEADBEEF
        trans.valid = 1;               // Set valid flag to 1 (true)
        // Display all struct fields
        $display("   Transaction: addr=0x%0h, data=0x%0h, valid=%0d", 
                 trans.address, trans.data, trans.valid);
        $display();  // Empty line
        
        // Test 3: Use functions from package
        $display("3. Using functions from package:");
        // Call is_valid_address() function with different addresses
        // Address 0x0100 (256) is < 0x1000 (4096), so should return 1 (valid)
        $display("   Address 0x0100 is valid: %0d", is_valid_address(16'h0100));
        // Address 0x2000 (8192) is >= 0x1000, so should return 0 (invalid)
        $display("   Address 0x2000 is valid: %0d", is_valid_address(16'h2000));
        // Call calculate_checksum() function
        // XOR of bytes: 0xEF ^ 0xBE ^ 0xAD ^ 0xDE = checksum
        $display("   Checksum of 0xDEADBEEF: 0x%0h", calculate_checksum(32'hDEADBEEF));
        $display();  // Empty line
        
        // Test 4: Use constants from package
        $display("4. Using constants from package:");
        // Display parameter values defined in the package
        $display("   MAX_TRANSACTIONS: %0d", MAX_TRANSACTIONS);
        $display("   TIMEOUT_CYCLES: %0d", TIMEOUT_CYCLES);
        $display();  // Empty line
        
        // Test 5: Use task from package
        $display("5. Using task from package:");
        // Initialize condition to false (0)
        condition = 0;
        // 'fork-join' creates parallel threads (concurrent execution)
        fork
            // Thread 1: Set condition to true after 10 time units
            begin
                // Wait 10 time units
                #10;
                // Set condition to true (1)
                condition = 1;
            end
            // Thread 2: Wait for condition with timeout
            begin
                // Local variable for timeout value
                int timeout_val;
                // Set timeout to 1000 time units
                timeout_val = 1000;
                // Call task from package: waits for condition to become true
                // Task will return when condition=1 (after 10 time units)
                wait_for_condition(condition, timeout_val);
            end
        join  // Wait for both threads to complete
        // Display message after condition is met
        $display("   Condition met after wait");
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
endmodule  // End of package_example module
