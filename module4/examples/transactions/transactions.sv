/**
 * Module 4 Example 4.1: Transaction-Level Modeling
 * Demonstrates transaction design, operations, and methods.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand transaction class design and structure
 *   2. Learn transaction fields and data members
 *   3. Master transaction copy and comparison operations
 *   4. Understand extended transactions with inheritance
 *   5. Apply constrained random transactions
 * 
 * TRANSACTION PURPOSE:
 *   - Represents data flowing through verification environment
 *   - Encapsulates protocol-specific information
 *   - Passed between components (driver, monitor, scoreboard)
 *   - Supports randomization for test generation
 * 
 * TRANSACTION OPERATIONS:
 *   - copy(): Deep copy of transaction
 *   - compare(): Compare two transactions
 *   - convert2string(): String representation
 *   - randomize(): Constrained random generation
 * 
 * INHERITANCE PATTERNS:
 *   - Base transaction: Common fields and operations
 *   - Extended transaction: Additional fields, overridden methods
 *   - Factory can substitute extended for base
 * 
 * This example shows:
 * - Transaction class design
 * - Transaction fields and data members
 * - Transaction copy and comparison operations
 * - Extended transactions with inheritance
 * - Constrained random transactions
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Base transaction class
 */
class BaseTransaction extends uvm_sequence_item;
    logic [7:0] data;
    logic [15:0] address;
    
    `uvm_object_utils(BaseTransaction)
    
    function new(string name = "BaseTransaction");
        super.new(name);
        data = 8'h00;
        address = 16'h0000;
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h", data, address);
    endfunction
    
    // ========================================================================
    // DO_COPY METHOD (DEEP COPY)
    // ========================================================================
    /**
     * Deep copy implementation
     * 
     * DO_COPY PURPOSE:
     *   - Creates independent copy of transaction
     *   - All fields copied (deep copy, not reference)
     *   - Used by copy() method
     * 
     * COPY PROCESS:
     *   1. Type cast rhs to transaction type
     *   2. Call parent do_copy (copies base class fields)
     *   3. Copy all transaction fields
     * 
     * @param rhs Right-hand side object to copy from
     */
    function void do_copy(uvm_object rhs);
        BaseTransaction txn;
        
        // Type cast: Convert uvm_object to BaseTransaction
        // $cast returns 1 if successful, 0 if type mismatch
        // !$cast means cast failed (wrong type)
        if (!$cast(txn, rhs)) begin
            `uvm_fatal("COPY", "Copy failed: wrong type")
            return;  // Exit if type mismatch
        end
        
        // Call parent do_copy (copies base class fields)
        // Important: Must call super.do_copy() first
        super.do_copy(rhs);
        
        // Copy transaction-specific fields
        // Deep copy: Copy values, not references
        data = txn.data;        // Copy data field
        address = txn.address;  // Copy address field
    endfunction
    
    // ========================================================================
    // DO_COMPARE METHOD (COMPARISON)
    // ========================================================================
    /**
     * Comparison implementation
     * 
     * DO_COMPARE PURPOSE:
     *   - Compares two transactions for equality
     *   - Used by compare() method
     *   - Returns 1 if equal, 0 if not equal
     * 
     * COMPARISON PROCESS:
     *   1. Type cast rhs to transaction type
     *   2. Compare all transaction fields
     *   3. Return 1 if all fields match, 0 otherwise
     * 
     * @param rhs Right-hand side object to compare with
     * @param comparer UVM comparer object (for advanced comparison)
     * @return 1 if equal, 0 if not equal
     */
    function bit do_compare(uvm_object rhs, uvm_comparer comparer);
        BaseTransaction txn;
        
        // Type cast: Convert uvm_object to BaseTransaction
        if (!$cast(txn, rhs)) return 0;  // Return 0 if type mismatch
        
        // Compare all fields
        // Return 1 only if ALL fields match
        return (data == txn.data) && (address == txn.address);
    endfunction
endclass

/**
 * Extended transaction with additional fields
 */
class ExtendedTransaction extends BaseTransaction;
    logic [7:0] control;
    logic [7:0] status;
    
    `uvm_object_utils(ExtendedTransaction)
    
    function new(string name = "ExtendedTransaction");
        super.new(name);
        control = 8'h00;
        status = 8'h00;
    endfunction
    
    // ========================================================================
    // CONVERT2STRING METHOD (OVERRIDDEN)
    // ========================================================================
    /**
     * Convert extended transaction to string
     * 
     * INHERITANCE PATTERN:
     *   - Calls super.convert2string() to get base class string
     *   - Appends extended fields (control, status)
     *   - Demonstrates method overriding
     * 
     * OUTPUT FORMAT:
     *   "data=0xAA, addr=0x1234, ctrl=0x11, status=0x22"
     *   Base fields from super, extended fields appended
     */
    function string convert2string();
        // Call parent method to get base class string representation
        // Then append extended fields
        return $sformatf("%s, ctrl=0x%02h, status=0x%02h", 
                        super.convert2string(), control, status);
    endfunction
    
    // ========================================================================
    // DO_COPY METHOD (OVERRIDDEN)
    // ========================================================================
    /**
     * Deep copy implementation for extended transaction
     * 
     * INHERITANCE PATTERN:
     *   - Must call super.do_copy() first (copies base fields)
     *   - Then copy extended fields
     *   - Ensures complete deep copy
     * 
     * COPY ORDER:
     *   1. Call super.do_copy(rhs) - copies data, address
     *   2. Type cast and copy extended fields - copies control, status
     * 
     * COMMON BUG:
     *   - Forgetting to call super.do_copy() - base fields not copied!
     *   - Copying before type cast - may copy wrong type
     */
    function void do_copy(uvm_object rhs);
        ExtendedTransaction txn;
        
        // CRITICAL: Call parent do_copy FIRST
        // This copies base class fields (data, address)
        // Must be called before copying extended fields
        super.do_copy(rhs);
        
        // Type cast: Convert uvm_object to ExtendedTransaction
        // Check if cast successful before copying extended fields
        if (!$cast(txn, rhs)) return;  // Exit if type mismatch
        
        // Copy extended transaction-specific fields
        // Deep copy: Copy values, not references
        control = txn.control;  // Copy control field
        status = txn.status;    // Copy status field
    endfunction
    
    // ========================================================================
    // DO_COMPARE METHOD (OVERRIDDEN)
    // ========================================================================
    /**
     * Comparison implementation for extended transaction
     * 
     * INHERITANCE PATTERN:
     *   - Must call super.do_compare() first (compares base fields)
     *   - Then compare extended fields
     *   - All fields must match for equality
     * 
     * COMPARISON LOGIC:
     *   - Base fields: super.do_compare() checks data and address
     *   - Extended fields: Compare control and status
     *   - Return 1 only if ALL fields match
     * 
     * SHORT-CIRCUIT EVALUATION:
     *   - && operator: Stops if first condition false
     *   - Efficient: Doesn't check extended fields if base fields differ
     */
    function bit do_compare(uvm_object rhs, uvm_comparer comparer);
        ExtendedTransaction txn;
        
        // Type cast: Convert uvm_object to ExtendedTransaction
        if (!$cast(txn, rhs)) return 0;  // Return 0 if type mismatch
        
        // Compare: Base fields AND extended fields
        // 
        // COMPARISON ORDER:
        //   1. super.do_compare(rhs, comparer): Compares data and address
        //   2. (control == txn.control): Compares control field
        //   3. (status == txn.status): Compares status field
        // 
        // ALL CONDITIONS MUST BE TRUE:
        //   - Base transaction fields must match
        //   - Extended fields must match
        //   - Returns 1 only if everything matches
        return super.do_compare(rhs, comparer) &&  // Base fields match?
               (control == txn.control) &&          // Control matches?
               (status == txn.status);              // Status matches?
    endfunction
endclass

// ============================================================================
// CONSTRAINED TRANSACTION CLASS
// ============================================================================
/**
 * Constrained transaction
 * 
 * CONSTRAINED RANDOMIZATION:
 *   - Uses SystemVerilog constraints
 *   - Generates valid random values
 *   - Ensures protocol compliance
 *   - Reduces test code complexity
 * 
 * CONSTRAINT BENEFITS:
 *   - Automatic test generation
 *   - Protocol compliance
 *   - Edge case coverage
 *   - Reduced manual test writing
 */
class ConstrainedTransaction extends uvm_sequence_item;
    // ========================================================================
    // RANDOM FIELDS
    // ========================================================================
    // 'rand' keyword: Field can be randomized
    // Randomization generates values within constraints
    rand logic [7:0] data;      // Random 8-bit data
    rand logic [15:0] address;   // Random 16-bit address
    
    `uvm_object_utils(ConstrainedTransaction)
    
    // ========================================================================
    // CONSTRAINTS
    // ========================================================================
    // 
    // CONSTRAINT: address_aligned
    //   - Ensures address is 4-byte aligned
    //   - Bits [1:0] must be 00
    //   - Valid addresses: 0x0000, 0x0004, 0x0008, 0x000C, ...
    //   - Invalid addresses: 0x0001, 0x0002, 0x0003, ...
    // 
    // ALIGNMENT RATIONALE:
    //   - Many protocols require aligned addresses
    //   - Prevents invalid address generation
    //   - Reduces test failures from invalid addresses
    constraint address_aligned {
        address[1:0] == 2'b00;  // 4-byte aligned (bits 1:0 = 00)
    }
    
    // CONSTRAINT: data_nonzero
    //   - Ensures data is not zero
    //   - Prevents zero-value transactions
    //   - Useful for testing non-zero operations
    // 
    // NONZERO RATIONALE:
    //   - Some operations may have special handling for zero
    //   - Ensures meaningful test data
    //   - Can be removed if zero values are valid
    constraint data_nonzero {
        data != 8'h00;  // Data must not be zero
    }
    
    function new(string name = "ConstrainedTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h", data, address);
    endfunction
    
    // ========================================================================
    // RANDOMIZATION USAGE
    // ========================================================================
    // 
    // RANDOMIZE METHOD:
    //   - Call: txn.randomize()
    //   - Generates random values satisfying constraints
    //   - Returns 1 if successful, 0 if constraints unsatisfiable
    // 
    // EXAMPLE:
    //   ConstrainedTransaction txn;
    //   txn = ConstrainedTransaction::type_id::create("txn");
    //   if (txn.randomize()) begin
    //       // txn.data and txn.address now have valid random values
    //   end
    // 
    // CONSTRAINT SOLVER:
    //   - SystemVerilog constraint solver finds valid values
    //   - May take time for complex constraints
    //   - Can fail if constraints are contradictory
endclass

/**
 * Test class demonstrating transactions
 */
class TransactionsTest extends uvm_test;
    BaseTransaction base_txn1, base_txn2;
    ExtendedTransaction ext_txn;
    ConstrainedTransaction constr_txn;
    
    `uvm_component_utils(TransactionsTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("TEST", "Building transaction test", UVM_MEDIUM)
        
        base_txn1 = BaseTransaction::type_id::create("base_txn1");
        base_txn2 = BaseTransaction::type_id::create("base_txn2");
        ext_txn = ExtendedTransaction::type_id::create("ext_txn");
        constr_txn = ConstrainedTransaction::type_id::create("constr_txn");
    endfunction
    
    task run_phase(uvm_phase phase);
        BaseTransaction base_copy;
        
        phase.raise_objection(this);
        
        // ========================================================================
        // DEMONSTRATE BASE TRANSACTIONS
        // ========================================================================
        `uvm_info("TEST", "Demonstrating base transactions", UVM_MEDIUM)
        
        // Create and configure first transaction
        // 
        // TRANSACTION CREATION:
        //   - Created in build_phase using factory
        //   - Fields initialized to default values (0)
        //   - Can be configured in run_phase
        base_txn1.data = 8'hAA;        // Set data field: 0xAA (170 decimal)
        base_txn1.address = 16'h1234;  // Set address field: 0x1234 (4660 decimal)
        
        // Display transaction using convert2string()
        // 
        // CONVERT2STRING USAGE:
        //   - Provides human-readable transaction representation
        //   - Useful for debugging and logging
        //   - Format: "data=0xAA, addr=0x1234"
        `uvm_info("TEST", $sformatf("Base transaction 1: %s", base_txn1.convert2string()), UVM_MEDIUM)
        
        // Create second transaction with same values
        // 
        // TRANSACTION COMPARISON TEST:
        //   - Two transactions with identical fields
        //   - Should compare as equal
        //   - Tests do_compare() implementation
        base_txn2.data = 8'hAA;        // Same data as txn1
        base_txn2.address = 16'h1234;  // Same address as txn1
        `uvm_info("TEST", $sformatf("Base transaction 2: %s", base_txn2.convert2string()), UVM_MEDIUM)
        
        // ========================================================================
        // TRANSACTION COMPARISON
        // ========================================================================
        // 
        // COMPARE METHOD:
        //   - Calls do_compare() internally
        //   - Returns 1 if equal, 0 if not equal
        //   - Compares all fields (data and address)
        // 
        // COMPARISON RESULT:
        //   - Both transactions have data=0xAA, address=0x1234
        //   - Should return 1 (equal)
        //   - If not equal, indicates bug in do_compare()
        if (base_txn1.compare(base_txn2)) begin
            `uvm_info("TEST", "Transactions are equal", UVM_MEDIUM)
            // 
            // EXPECTED RESULT:
            //   - Transactions have identical fields
            //   - Comparison should succeed
            //   - This validates do_compare() implementation
        end else begin
            // ERROR CASE:
            //   - Transactions should be equal but aren't
            //   - Indicates bug in do_compare() or field values
            //   - Should never happen in this test
            `uvm_error("TEST", "Transactions should be equal")
        end
        
        // ========================================================================
        // TRANSACTION COPY DEMONSTRATION
        // ========================================================================
        // 
        // COPY OPERATION:
        //   - Creates independent copy of transaction
        //   - All fields copied (deep copy)
        //   - Original and copy are independent
        // 
        // COPY USAGE:
        //   - Store transaction for later comparison
        //   - Pass transaction to multiple components
        //   - Create backup before modification
        // 
        // COPY PROCESS:
        //   1. Create new transaction object
        //   2. Call copy() method (calls do_copy() internally)
        //   3. All fields copied from source to destination
        base_copy = BaseTransaction::type_id::create("base_copy");
        
        // COPY METHOD:
        //   - Calls do_copy() internally
        //   - Performs deep copy of all fields
        //   - base_copy now has independent copy of base_txn1
        base_copy.copy(base_txn1);
        
        // VERIFY COPY:
        //   - Display copied transaction
        //   - Should match original: "data=0xAA, addr=0x1234"
        //   - Validates do_copy() implementation
        `uvm_info("TEST", $sformatf("Copied transaction: %s", base_copy.convert2string()), UVM_MEDIUM)
        
        // COPY INDEPENDENCE TEST:
        //   - Modify original: base_txn1.data = 8'hBB
        //   - Copy should remain unchanged: base_copy.data = 8'hAA
        //   - This proves deep copy (not reference)
        // base_txn1.data = 8'hBB;  // Modify original
        // if (base_copy.data == 8'hAA) begin
        //     `uvm_info("TEST", "Copy is independent (deep copy verified)", UVM_MEDIUM)
        // end
        
        // Extended transaction
        `uvm_info("TEST", "Demonstrating extended transactions", UVM_MEDIUM)
        ext_txn.data = 8'hBB;
        ext_txn.address = 16'h5678;
        ext_txn.control = 8'h11;
        ext_txn.status = 8'h22;
        `uvm_info("TEST", $sformatf("Extended transaction: %s", ext_txn.convert2string()), UVM_MEDIUM)
        
        // ========================================================================
        // CONSTRAINED RANDOM TRANSACTION DEMONSTRATION
        // ========================================================================
        // 
        // CONSTRAINED RANDOMIZATION:
        //   - Generates random values satisfying constraints
        //   - Ensures protocol compliance automatically
        //   - Reduces manual test writing
        // 
        // CONSTRAINT SOLVER:
        //   - SystemVerilog constraint solver finds valid values
        //   - Satisfies all constraints simultaneously
        //   - May take time for complex constraint sets
        `uvm_info("TEST", "Demonstrating constrained transactions", UVM_MEDIUM)
        
        // RANDOMIZE METHOD:
        //   - Generates random values for all 'rand' fields
        //   - Values satisfy all constraints
        //   - Returns 1 if successful, 0 if constraints unsatisfiable
        // 
        // EXPECTED BEHAVIOR:
        //   - data: Random 8-bit value, not zero (data != 0x00)
        //   - address: Random 16-bit value, 4-byte aligned (address[1:0] == 00)
        //   - Examples: address=0x0000, 0x0004, 0x0008, 0x000C, ...
        //   - Invalid: address=0x0001, 0x0002, 0x0003 (not aligned)
        if (constr_txn.randomize()) begin
            // RANDOMIZATION SUCCESS:
            //   - All constraints satisfied
            //   - Fields have valid random values
            //   - Display generated values
            `uvm_info("TEST", $sformatf("Randomized transaction: %s", constr_txn.convert2string()), UVM_MEDIUM)
            
            // VERIFY CONSTRAINTS:
            //   - Check that constraints are satisfied
            //   - data != 0x00 (non-zero constraint)
            //   - address[1:0] == 2'b00 (alignment constraint)
            // 
            // CONSTRAINT VERIFICATION:
            //   if (constr_txn.data == 8'h00) begin
            //       `uvm_error("TEST", "Constraint violation: data is zero")
            //   end
            //   if (constr_txn.address[1:0] != 2'b00) begin
            //       `uvm_error("TEST", "Constraint violation: address not aligned")
            //   end
        end else begin
            // RANDOMIZATION FAILURE:
            //   - Constraints are contradictory or unsatisfiable
            //   - Example: data != 0x00 AND data == 0x00 (impossible)
            //   - Should never happen with current constraints
            //   - Indicates constraint definition error
            `uvm_error("TEST", "Randomization failed")
            // 
            // DEBUGGING TIPS:
            //   1. Check constraint syntax
            //   2. Verify constraints are not contradictory
            //   3. Use constraint debug mode: +uvm_set_verbosity=UVM_DEBUG
            //   4. Simplify constraints to isolate issue
        end
        
        // ========================================================================
        // CONSTRAINT TESTING EXAMPLES
        // ========================================================================
        // 
        // MULTIPLE RANDOMIZATIONS:
        //   - Can randomize same transaction multiple times
        //   - Each call generates new random values
        //   - Useful for generating test sequences
        // 
        // EXAMPLE:
        //   for (int i = 0; i < 10; i++) begin
        //       if (constr_txn.randomize()) begin
        //           `uvm_info("TEST", $sformatf("Random %0d: %s", i, 
        //                     constr_txn.convert2string()), UVM_MEDIUM)
        //       end
        //   end
        // 
        // CONSTRAINT OVERRIDES:
        //   - Can override constraints during randomization
        //   - Example: constr_txn.randomize() with { address == 16'h1000; }
        //   - Useful for directed testing within random framework
        // 
        // PERFORMANCE CONSIDERATIONS:
        //   - Complex constraints may slow randomization
        //   - Use simple constraints when possible
        //   - Profile constraint solver if performance issues
        
        #100;
        phase.drop_objection(this);
    endtask
    
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        `uvm_info("TEST", "Transaction demonstration complete", UVM_MEDIUM)
    endfunction
endclass

/**
 * Top-level testbench module
 */
module transactions;
    initial begin
        $display("============================================================");
        $display("UVM Transaction Example");
        $display("============================================================");
        $display();
        
        run_test("TransactionsTest");
    end
endmodule
