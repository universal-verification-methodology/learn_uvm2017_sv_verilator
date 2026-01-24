/**
 * Module 8 Example 8.1: Command Line Processor (CLP)
 * Demonstrates using UVM Command Line Processor for test configuration.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand UVM Command Line Processor (CLP)
 *   2. Learn command-line argument parsing
 *   3. Understand plusarg handling
 *   4. Learn test configuration from command line
 *   5. Understand CLP usage patterns
 * 
 * COMMAND LINE PROCESSOR:
 *   - UVM CLP: Parses command-line arguments
 *   - Plusargs: Arguments starting with "+" (e.g., +test_mode=normal)
 *   - Configuration: Set test parameters from command line
 *   - Flexibility: Change test behavior without recompiling
 * 
 * CLP USAGE:
 *   - Command line: +test_mode=normal +debug_level=2 +num_transactions=20
 *   - CLP parsing: uvm_cmdline_proc.get_arg_value()
 *   - Configuration: Set test parameters dynamically
 * 
 * This example shows:
 * - Command-line argument parsing
 * - Plusarg handling
 * - Test configuration from command line
 * - CLP usage patterns
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================================
// DPI FUNCTION FOR STRING-TO-INTEGER CONVERSION
// ============================================================================
// 
// DPI FUNCTION:
//   - Verilator-compatible replacement for $atoi
//   - Converts string to integer
//   - Used for parsing numeric command-line arguments
//   - C function implementation required
import "DPI-C" function int sv_atoi(input string str);

// ============================================================================
// TRANSACTION CLASS
// ============================================================================
/**
 * CLPTransaction: Transaction for CLP example
 * 
 * TRANSACTION FIELDS:
 *   - data: 8-bit data
 *   - address: 16-bit address
 */
class CLPTransaction extends uvm_sequence_item;
    rand logic [7:0] data;      // Data (8-bit, randomized)
    rand logic [15:0] address;  // Address (16-bit, randomized)
    
    `uvm_object_utils(CLPTransaction)
    
    function new(string name = "CLPTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h", data, address);
    endfunction
endclass

// ============================================================================
// SEQUENCE CLASS
// ============================================================================
/**
 * CLPSequence: Sequence using CLP configuration
 * 
 * SEQUENCE CONFIGURATION:
 *   - num_transactions: Number of transactions to generate
 *   - Configurable from command line via CLP
 *   - Allows dynamic test configuration
 */
class CLPSequence extends uvm_sequence #(CLPTransaction);
    int num_transactions = 10;  // Default: 10 transactions
                                // Can be overridden via CLP
    
    `uvm_object_utils(CLPSequence)
    
    function new(string name = "CLPSequence");
        super.new(name);
    endfunction
    
    task body();
        // ====================================================================
        // GENERATE TRANSACTIONS
        // ====================================================================
        // 
        // TRANSACTION GENERATION:
        //   - Generate num_transactions transactions
        //   - num_transactions configured from command line
        //   - Each transaction has sequential data and address
        for (int i = 0; i < num_transactions; i++) begin
            CLPTransaction txn;
            txn = CLPTransaction::type_id::create("txn");
            void'(txn.randomize());
            
            // ================================================================
            // SET TRANSACTION FIELDS
            // ================================================================
            // 
            // DATA ASSIGNMENT:
            //   - Sequential data pattern: i * 0x10
            //   - Example: i=0 -> 0x00, i=1 -> 0x10, i=2 -> 0x20
            txn.data = i * 8'h10;
            
            // ================================================================
            // ADDRESS ASSIGNMENT
            // ================================================================
            // 
            // ADDRESS ASSIGNMENT:
            //   - Sequential address pattern: i * 0x100
            //   - Example: i=0 -> 0x0000, i=1 -> 0x0100, i=2 -> 0x0200
            txn.address = i * 16'h100;
            
            // ================================================================
            // SEND TRANSACTION
            // ================================================================
            // 
            // UVM_SEND:
            //   - Sends transaction to sequencer
            //   - Waits for driver to complete
            //   - Standard UVM sequence pattern
            // Suppress Verilator's false positive $cast warning from UVM macro expansion
            /* verilator lint_off CASTCONST */
            `uvm_send(txn)
            /* verilator lint_on CASTCONST */
        end
    endtask
endclass

// ============================================================================
// DRIVER CLASS
// ============================================================================
/**
 * CLPDriver: Driver for CLP example
 * 
 * DRIVER PURPOSE:
 *   - Receives transactions from sequencer
 *   - Drives DUT signals (simplified in this example)
 */
class CLPDriver extends uvm_driver #(CLPTransaction);
    `uvm_component_utils(CLPDriver)
    
    function new(string name = "CLPDriver", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    task run_phase(uvm_phase phase);
        CLPTransaction txn;
        forever begin
            seq_item_port.get_next_item(txn);
            `uvm_info("DRIVER", $sformatf("Driving: %s", txn.convert2string()), UVM_MEDIUM)
            #10;
            seq_item_port.item_done();
        end
    endtask
endclass

// ============================================================================
// AGENT CLASS
// ============================================================================
/**
 * CLPAgent: Agent for CLP example
 * 
 * AGENT STRUCTURE:
 *   - Driver: Drives transactions
 *   - Sequencer: Provides transactions to driver
 */
class CLPAgent extends uvm_agent;
    CLPDriver driver;                           // Driver
    uvm_sequencer #(CLPTransaction) sequencer;  // Sequencer
    
    `uvm_component_utils(CLPAgent)
    
    function new(string name = "CLPAgent", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        driver = CLPDriver::type_id::create("driver", this);
        sequencer = uvm_sequencer #(CLPTransaction)::type_id::create("sequencer", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction
endclass

// ============================================================================
// ENVIRONMENT CLASS
// ============================================================================
/**
 * CLPEnv: Environment demonstrating CLP usage
 * 
 * CLP CONFIGURATION:
 *   - test_mode: Test mode string (from +test_mode=...)
 *   - debug_level: Debug level integer (from +debug_level=...)
 *   - num_transactions: Number of transactions (from +num_transactions=...)
 *   - seed: Random seed (from +seed=...)
 * 
 * CLP PARSING:
 *   - uvm_cmdline_proc.get_arg_value(): Get plusarg value
 *   - Returns string value
 *   - Convert to integer if needed (sv_atoi)
 */
class CLPEnv extends uvm_env;
    CLPAgent agent;              // Agent
    
    // ========================================================================
    // CLP CONFIGURATION VARIABLES
    // ========================================================================
    string test_mode = "normal";     // Test mode (default: "normal")
    int debug_level = 0;             // Debug level (default: 0)
    int num_transactions = 10;       // Number of transactions (default: 10)
    int seed = 0;                    // Random seed (default: 0)
    string str_val;                  // Temporary string for CLP parsing
    
    `uvm_component_utils(CLPEnv)
    
    function new(string name = "CLPEnv", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // ====================================================================
        // CLP CONFIGURATION HEADER
        // ====================================================================
        `uvm_info("CLP", "============================================================", UVM_LOW)
        `uvm_info("CLP", "Building CLP Environment", UVM_LOW)
        `uvm_info("CLP", "============================================================", UVM_LOW)
        
        // ====================================================================
        // PARSE COMMAND-LINE ARGUMENTS
        // ====================================================================
        // 
        // CLP PARSING:
        //   - uvm_cmdline_proc.get_arg_value(): Get plusarg value
        //   - Format: +arg_name=value
        //   - Example: +test_mode=normal
        //   - Returns: true if found, false if not found
        //   - Value stored in second parameter (string)
        // 
        // CLP PARSING DETAILED:
        //   Command line: ./test +test_mode=normal +debug_level=2 +num_transactions=20
        //   
        //   Parsing process:
        //     1. Split command line into arguments
        //     2. Find arguments starting with "+"
        //     3. Extract argument name (after "+")
        //     4. Extract argument value (after "=")
        //     5. Store in configuration variables
        // 
        // TEST MODE:
        //   - Command line: +test_mode=normal (or +test_mode=debug)
        //   - Default: "normal" (if not specified)
        //   - Usage: Control test behavior
        // 
        // GET_ARG_VALUE STEP-BY-STEP:
        //   Step 1: Search command line for "+test_mode"
        //   Step 2: If found: Extract value after "="
        //   Step 3: Store value in test_mode variable
        //   Step 4: If not found: test_mode remains default ("normal")
        void'(uvm_cmdline_proc.get_arg_value("+test_mode", test_mode));
        // 
        // GET_ARG_VALUE BEHAVIOR EXAMPLES:
        //   Example 1: +test_mode=normal
        //     Command line: ./test +test_mode=normal
        //     Parsing: Find "+test_mode", extract "normal"
        //     Result: test_mode = "normal"
        //   
        //   Example 2: +test_mode=debug
        //     Command line: ./test +test_mode=debug
        //     Parsing: Find "+test_mode", extract "debug"
        //     Result: test_mode = "debug"
        //   
        //   Example 3: Not specified
        //     Command line: ./test
        //     Parsing: "+test_mode" not found
        //     Result: test_mode = "normal" (default, unchanged)
        //   
        //   Example 4: Multiple arguments
        //     Command line: ./test +test_mode=normal +debug_level=2
        //     Parsing: Find "+test_mode", extract "normal"
        //     Result: test_mode = "normal"
        //   
        //   void'(): Suppress return value (not used)
        //     - get_arg_value() returns bool (true if found)
        //     - void'() discards return value
        //     - Prevents unused return value warning
        
        // ====================================================================
        // PARSE DEBUG LEVEL
        // ====================================================================
        // 
        // DEBUG LEVEL:
        //   - Command line: +debug_level=2
        //   - Default: 0 (if not specified)
        //   - Usage: Control debug verbosity
        //   - Conversion: String to integer (sv_atoi)
        if (uvm_cmdline_proc.get_arg_value("+debug_level", str_val)) begin
            // ================================================================
            // CONVERT STRING TO INTEGER
            // ================================================================
            // 
            // STRING TO INTEGER:
            //   - str_val: String from command line (e.g., "2")
            //   - sv_atoi(): Convert to integer (e.g., 2)
            //   - debug_level: Integer value (e.g., 2)
            debug_level = sv_atoi(str_val);
            // 
            // CONVERSION EXAMPLE:
            //   Command line: +debug_level=5
            //   str_val = "5"
            //   sv_atoi("5") = 5
            //   debug_level = 5
        end
        
        // ====================================================================
        // PARSE NUMBER OF TRANSACTIONS
        // ====================================================================
        // 
        // NUM TRANSACTIONS:
        //   - Command line: +num_transactions=20
        //   - Default: 10 (if not specified)
        //   - Usage: Control number of transactions generated
        if (uvm_cmdline_proc.get_arg_value("+num_transactions", str_val)) begin
            num_transactions = sv_atoi(str_val);
            // 
            // CONVERSION EXAMPLE:
            //   Command line: +num_transactions=50
            //   str_val = "50"
            //   sv_atoi("50") = 50
            //   num_transactions = 50
        end
        
        // ====================================================================
        // PARSE RANDOM SEED
        // ====================================================================
        // 
        // RANDOM SEED:
        //   - Command line: +seed=12345
        //   - Default: 0 (if not specified)
        //   - Usage: Set random seed for reproducibility
        if (uvm_cmdline_proc.get_arg_value("+seed", str_val)) begin
            seed = sv_atoi(str_val);
            // 
            // CONVERSION EXAMPLE:
            //   Command line: +seed=98765
            //   str_val = "98765"
            //   sv_atoi("98765") = 98765
            //   seed = 98765
        end
        
        // ====================================================================
        // DISPLAY CLP CONFIGURATION
        // ====================================================================
        // 
        // CONFIGURATION DISPLAY:
        //   - Show all parsed configuration values
        //   - Helps verify CLP parsing
        //   - Useful for debugging
        `uvm_info("CLP", $sformatf("CLP Configuration:"), UVM_LOW)
        `uvm_info("CLP", $sformatf("  test_mode: %s", test_mode), UVM_LOW)
        `uvm_info("CLP", $sformatf("  debug_level: %0d", debug_level), UVM_LOW)
        `uvm_info("CLP", $sformatf("  num_transactions: %0d", num_transactions), UVM_LOW)
        `uvm_info("CLP", $sformatf("  seed: %0d", seed), UVM_LOW)
        
        // ====================================================================
        // SET RANDOM SEED
        // ====================================================================
        // 
        // SEED SETTING:
        //   - If seed provided, set random seed
        //   - Note: SystemVerilog doesn't have direct seed setting like Python
        //   - This would typically be done via $urandom(seed) or similar
        //   - For reproducibility: Use seed value in randomization
        if (seed != 0) begin
            `uvm_info("CLP", $sformatf("Setting random seed to %0d", seed), UVM_LOW)
            // 
            // SEED USAGE:
            //   - seed value can be used in randomization
            //   - Example: $urandom(seed) or similar
            //   - Ensures reproducible random sequences
        end
        
        // ====================================================================
        // CREATE AGENT
        // ====================================================================
        agent = CLPAgent::type_id::create("agent", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        CLPSequence seq;
        phase.raise_objection(this);
        
        // ====================================================================
        // CREATE AND CONFIGURE SEQUENCE
        // ====================================================================
        seq = CLPSequence::type_id::create("seq");
        
        // ====================================================================
        // SET SEQUENCE PARAMETERS FROM CLP
        // ====================================================================
        // 
        // SEQUENCE CONFIGURATION:
        //   - num_transactions: Set from CLP configuration
        //   - Allows dynamic test configuration
        //   - Example: +num_transactions=20 -> seq.num_transactions = 20
        seq.num_transactions = num_transactions;
        
        // ====================================================================
        // START SEQUENCE
        // ====================================================================
        seq.start(agent.sequencer);
        
        #100;
        phase.drop_objection(this);
    endtask
endclass

// ============================================================================
// TEST CLASS
// ============================================================================
/**
 * CLPTest: Test for CLP example
 * 
 * TEST EXECUTION:
 *   - Creates environment (which parses CLP arguments)
 *   - Runs test with CLP-configured parameters
 */
class CLPTest extends uvm_test;
    CLPEnv env;
    
    `uvm_component_utils(CLPTest)
    
    function new(string name = "CLPTest", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = CLPEnv::type_id::create("env", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        #200;
        phase.drop_objection(this);
    endtask
endclass

// ============================================================================
// TOP-LEVEL MODULE
// ============================================================================
/**
 * Top-level module for CLP example
 * 
 * USAGE:
 *   - Command line: +test_mode=normal +debug_level=2 +num_transactions=20 +seed=12345
 *   - CLP parsing: Environment parses arguments in build_phase
 *   - Configuration: Test parameters set from command line
 */
module clp_top;
    import uvm_pkg::*;
    
    initial begin
        // ====================================================================
        // START UVM TEST
        // ====================================================================
        // 
        // RUN_TEST:
        //   - Starts UVM test
        //   - CLP arguments parsed during build_phase
        //   - Test executes with CLP-configured parameters
        run_test("CLPTest");
    end
endmodule
