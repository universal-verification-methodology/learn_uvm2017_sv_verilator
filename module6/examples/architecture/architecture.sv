/**
 * Module 6 Example 6.1: Testbench Architecture
 * Demonstrates a structured, hierarchical UVM environment skeleton.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand UVM testbench hierarchy
 *   2. Learn component relationships (test -> env -> agent -> driver/monitor/sequencer)
 *   3. Understand transaction flow (sequence -> sequencer -> driver)
 *   4. Learn component creation and connection
 *   5. Understand UVM phases execution
 * 
 * TESTBENCH HIERARCHY:
 *   ArchitectureTest (uvm_test)
 *     └── ArchEnv (uvm_env)
 *           └── ArchAgent (uvm_agent)
 *                 ├── ArchSequencer (uvm_sequencer)
 *                 ├── ArchDriver (uvm_driver)
 *                 └── ArchMonitor (uvm_monitor)
 * 
 * TRANSACTION FLOW:
 *   1. Test creates sequence
 *   2. Sequence starts on sequencer
 *   3. Sequencer provides transactions to driver
 *   4. Driver drives DUT signals
 *   5. Monitor samples DUT signals (not implemented in this example)
 * 
 * UVM PHASES:
 *   - build_phase: Create components
 *   - connect_phase: Connect components (driver-sequencer)
 *   - run_phase: Execute test (sequences, driving, monitoring)
 *   - report_phase: Generate reports
 */
`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================================
// TRANSACTION CLASS
// ============================================================================
/**
 * ArchTxn: Transaction class for architecture example
 * 
 * TRANSACTION PURPOSE:
 *   - Represents a single transaction (read or write)
 *   - Contains address, data, and operation type
 *   - Passed from sequence to driver via sequencer
 * 
 * TRANSACTION FIELDS:
 *   - addr: 32-bit address
 *   - data: 32-bit data
 *   - is_write: Operation type (1=write, 0=read)
 */
class ArchTxn extends uvm_sequence_item;
    // ========================================================================
    // TRANSACTION DATA FIELDS
    // ========================================================================
    rand bit [31:0] addr;      // Address (32-bit, randomized)
                                // Can address 4GB address space
    
    rand bit [31:0] data;      // Data (32-bit, randomized)
                                // Data to write or data read
    
    rand bit        is_write;  // Operation type (1-bit, randomized)
                                // 1 = write operation
                                // 0 = read operation
    
    // ========================================================================
    // UVM MACROS
    // ========================================================================
    // 
    // UVM_OBJECT_UTILS:
    //   - Registers class with UVM factory
    //   - Enables factory-based creation (type_id::create)
    //   - Provides standard UVM methods (copy, compare, print, etc.)
    `uvm_object_utils(ArchTxn)
    
    // ========================================================================
    // CONSTRUCTOR
    // ========================================================================
    function new(string name="ArchTxn");
        super.new(name);  // Call parent constructor
    endfunction
    
    // ========================================================================
    // CONVERT TO STRING
    // ========================================================================
    /**
     * Convert transaction to string for logging
     * 
     * USAGE:
     *   - Used in `uvm_info for transaction logging
     *   - Format: "addr=0xXXXXXXXX data=0xXXXXXXXX is_write=X"
     * 
     * EXAMPLE OUTPUT:
     *   "addr=0x00001000 data=0x12345678 is_write=1"
     */
    function string convert2string();
        return $sformatf("addr=0x%08h data=0x%08h is_write=%0b", addr, data, is_write);
    endfunction
endclass

// ============================================================================
// SEQUENCER CLASS
// ============================================================================
/**
 * ArchSequencer: Sequencer for architecture example
 * 
 * SEQUENCER PURPOSE:
 *   - Receives sequence items from sequences
 *   - Provides sequence items to driver
 *   - Manages transaction flow between sequence and driver
 * 
 * SEQUENCER BEHAVIOR:
 *   - Waits for sequences to start
 *   - Receives transactions from sequences
 *   - Provides transactions to driver via TLM port
 *   - Blocks until driver completes transaction
 */
class ArchSequencer extends uvm_sequencer #(ArchTxn);
    // ========================================================================
    // UVM MACROS
    // ========================================================================
    // 
    // UVM_COMPONENT_UTILS:
    //   - Registers component with UVM factory
    //   - Enables factory-based creation (type_id::create)
    //   - Provides standard UVM component methods
    `uvm_component_utils(ArchSequencer)
    
    // ========================================================================
    // CONSTRUCTOR
    // ========================================================================
    function new(string name, uvm_component parent);
        super.new(name, parent);  // Call parent constructor
    endfunction
endclass

// ============================================================================
// DRIVER CLASS
// ============================================================================
/**
 * ArchDriver: Driver for architecture example
 * 
 * DRIVER PURPOSE:
 *   - Receives transactions from sequencer
 *   - Drives DUT signals based on transaction
 *   - Implements protocol-specific driving logic
 * 
 * DRIVER BEHAVIOR:
 *   - Continuously gets transactions from sequencer
 *   - Drives DUT signals (simplified in this example)
 *   - Signals transaction completion to sequencer
 * 
 * NOTE:
 *   - This is a simplified driver (no actual DUT interface)
 *   - Real driver would drive signals via virtual interface
 */
class ArchDriver extends uvm_driver #(ArchTxn);
    // ========================================================================
    // UVM MACROS
    // ========================================================================
    `uvm_component_utils(ArchDriver)
    
    // ========================================================================
    // CONSTRUCTOR
    // ========================================================================
    function new(string name, uvm_component parent);
        super.new(name, parent);  // Call parent constructor
    endfunction
    
    // ========================================================================
    // RUN PHASE
    // ========================================================================
    /**
     * Run phase: Drive transactions
     * 
     * DRIVER LOOP:
     *   1. Get next transaction from sequencer
     *   2. Drive DUT signals (simplified: just log)
     *   3. Wait for protocol timing (simplified: #5 delay)
     *   4. Signal transaction completion
     *   5. Repeat
     * 
     * TLM COMMUNICATION:
     *   - seq_item_port.get_next_item(t): Get transaction from sequencer
     *   - seq_item_port.item_done(): Signal transaction completion
     *   - Blocks until sequencer provides transaction
     */
    task run_phase(uvm_phase phase);
        ArchTxn t;  // Transaction variable
        
        // ====================================================================
        // DRIVER LOOP
        // ====================================================================
        // 
        // FOREVER LOOP:
        //   - Driver runs continuously
        //   - Gets transactions from sequencer
        //   - Drives DUT signals
        //   - Signals completion
        // 
        // BLOCKING BEHAVIOR:
        //   - get_next_item() blocks until sequencer provides transaction
        //   - item_done() signals completion and unblocks sequencer
        forever begin
            // ================================================================
            // GET TRANSACTION FROM SEQUENCER
            // ================================================================
            // 
            // GET_NEXT_ITEM:
            //   - Blocks until sequencer provides transaction
            //   - Transaction stored in 't'
            //   - Sequencer waits for item_done() before providing next
            seq_item_port.get_next_item(t);
            
            // ================================================================
            // DRIVE TRANSACTION
            // ================================================================
            // 
            // DRIVING LOGIC:
            //   - In real driver: Drive DUT signals via virtual interface
            //   - Example: vif.addr <= t.addr; vif.data <= t.data;
            //   - This example: Just log transaction (simplified)
            `uvm_info("ARCH_DRV", {"drive: ", t.convert2string()}, UVM_MEDIUM)
            
            // ================================================================
            // PROTOCOL TIMING
            // ================================================================
            // 
            // TIMING DELAY:
            //   - In real driver: Wait for protocol timing
            //   - Example: Wait for handshake, wait for response
            //   - This example: Simple delay (simplified)
            #5;  // Simulate protocol timing
            
            // ================================================================
            // SIGNAL TRANSACTION COMPLETION
            // ================================================================
            // 
            // ITEM_DONE:
            //   - Signals to sequencer that transaction is complete
            //   - Unblocks sequencer to provide next transaction
            //   - Required for proper transaction flow
            seq_item_port.item_done();
        end
    endtask
endclass

// ============================================================================
// MONITOR CLASS
// ============================================================================
/**
 * ArchMonitor: Monitor for architecture example
 * 
 * MONITOR PURPOSE:
 *   - Samples DUT signals
 *   - Creates transactions from signal values
 *   - Broadcasts transactions via analysis port
 * 
 * MONITOR BEHAVIOR:
 *   - Continuously samples DUT signals
 *   - Detects transactions (address/data changes)
 *   - Creates transaction objects
 *   - Writes transactions to analysis port
 * 
 * NOTE:
 *   - This is a simplified monitor (no actual DUT interface)
 *   - Real monitor would sample signals via virtual interface
 */
class ArchMonitor extends uvm_monitor;
    // ========================================================================
    // ANALYSIS PORT
    // ========================================================================
    // 
    // ANALYSIS PORT:
    //   - Broadcasts transactions to subscribers
    //   - One-to-many communication
    //   - Non-blocking (write() doesn't block)
    //   - Subscribers: scoreboard, coverage, checker, etc.
    uvm_analysis_port #(ArchTxn) ap;
    
    // ========================================================================
    // UVM MACROS
    // ========================================================================
    `uvm_component_utils(ArchMonitor)
    
    // ========================================================================
    // CONSTRUCTOR
    // ========================================================================
    function new(string name, uvm_component parent);
        super.new(name, parent);
        // ====================================================================
        // CREATE ANALYSIS PORT
        // ====================================================================
        // 
        // ANALYSIS PORT CREATION:
        //   - Created in constructor (before build_phase)
        //   - Name: "ap" (used for hierarchical path)
        //   - Parent: this (monitor component)
        ap = new("ap", this);
    endfunction
    
    // ========================================================================
    // RUN PHASE
    // ========================================================================
    /**
     * Run phase: Monitor DUT signals
     * 
     * MONITOR LOOP:
     *   1. Sample DUT signals
     *   2. Detect transaction (address/data changes)
     *   3. Create transaction object
     *   4. Write transaction to analysis port
     *   5. Repeat
     * 
     * NOTE:
     *   - This is a simplified monitor (no actual monitoring)
     *   - Real monitor would sample signals and create transactions
     */
    task run_phase(uvm_phase phase);
        // ====================================================================
        // MONITOR LOOP
        // ====================================================================
        // 
        // FOREVER LOOP:
        //   - Monitor runs continuously
        //   - Samples DUT signals
        //   - Creates and broadcasts transactions
        // 
        // SIMPLIFIED:
        //   - This example just waits (no actual monitoring)
        //   - Real monitor would sample signals and create transactions
        forever begin
            #10;  // Sample period (simplified)
            // ================================================================
            // MONITORING LOGIC (NOT IMPLEMENTED)
            // ================================================================
            // 
            // REAL MONITORING:
            //   - Sample DUT signals: vif.addr, vif.data, vif.valid, etc.
            //   - Detect transaction: When valid signal asserted
            //   - Create transaction: t = ArchTxn::type_id::create("t");
            //   - Populate transaction: t.addr = vif.addr; t.data = vif.data;
            //   - Broadcast: ap.write(t);
            // 
            // In a real bench this would sample DUT signals and publish a txn
        end
    endtask
endclass

// ============================================================================
// AGENT CLASS
// ============================================================================
/**
 * ArchAgent: Agent for architecture example
 * 
 * AGENT PURPOSE:
 *   - Container for sequencer, driver, and monitor
 *   - Provides standard agent structure
 *   - Can be active (with driver) or passive (monitor only)
 * 
 * AGENT STRUCTURE:
 *   - Sequencer: Provides transactions to driver
 *   - Driver: Drives DUT signals
 *   - Monitor: Samples DUT signals
 * 
 * AGENT PHASES:
 *   - build_phase: Create sequencer, driver, monitor
 *   - connect_phase: Connect driver to sequencer
 */
class ArchAgent extends uvm_agent;
    // ========================================================================
    // AGENT COMPONENTS
    // ========================================================================
    ArchSequencer seqr;  // Sequencer: Provides transactions to driver
    ArchDriver    drv;   // Driver: Drives DUT signals
    ArchMonitor   mon;   // Monitor: Samples DUT signals
    
    // ========================================================================
    // UVM MACROS
    // ========================================================================
    `uvm_component_utils(ArchAgent)
    
    // ========================================================================
    // CONSTRUCTOR
    // ========================================================================
    function new(string name, uvm_component parent);
        super.new(name, parent);  // Call parent constructor
    endfunction
    
    // ========================================================================
    // BUILD PHASE
    // ========================================================================
    /**
     * Build phase: Create agent components
     * 
     * COMPONENT CREATION:
     *   - Sequencer: Created first (driver needs it)
     *   - Driver: Created second
     *   - Monitor: Created third
     * 
     * FACTORY CREATION:
     *   - type_id::create() uses UVM factory
     *   - Enables type/instance overrides
     *   - Standard UVM pattern
     */
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // ====================================================================
        // CREATE SEQUENCER
        // ====================================================================
        seqr = ArchSequencer::type_id::create("seqr", this);
        
        // ====================================================================
        // CREATE DRIVER
        // ====================================================================
        drv  = ArchDriver   ::type_id::create("drv",  this);
        
        // ====================================================================
        // CREATE MONITOR
        // ====================================================================
        mon  = ArchMonitor  ::type_id::create("mon",  this);
    endfunction
    
    // ========================================================================
    // CONNECT PHASE
    // ========================================================================
    /**
     * Connect phase: Connect agent components
     * 
     * CONNECTION:
     *   - Driver seq_item_port -> Sequencer seq_item_export
     *   - Enables driver to get transactions from sequencer
     *   - Standard UVM connection pattern
     */
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        
        // ====================================================================
        // CONNECT DRIVER TO SEQUENCER
        // ====================================================================
        // 
        // TLM CONNECTION:
        //   - drv.seq_item_port: Driver's TLM port (requests transactions)
        //   - seqr.seq_item_export: Sequencer's TLM export (provides transactions)
        //   - connect(): Establishes TLM connection
        //   - After connection: Driver can get transactions from sequencer
        drv.seq_item_port.connect(seqr.seq_item_export);
    endfunction
endclass

// ============================================================================
// ENVIRONMENT CLASS
// ============================================================================
/**
 * ArchEnv: Environment for architecture example
 * 
 * ENVIRONMENT PURPOSE:
 *   - Container for agents and other components
 *   - Top-level testbench structure
 *   - Can contain multiple agents, scoreboards, etc.
 * 
 * ENVIRONMENT STRUCTURE:
 *   - Agent: Contains sequencer, driver, monitor
 * 
 * ENVIRONMENT PHASES:
 *   - build_phase: Create agent
 */
class ArchEnv extends uvm_env;
    // ========================================================================
    // ENVIRONMENT COMPONENTS
    // ========================================================================
    ArchAgent agent;  // Agent: Contains sequencer, driver, monitor
    
    // ========================================================================
    // UVM MACROS
    // ========================================================================
    `uvm_component_utils(ArchEnv)
    
    // ========================================================================
    // CONSTRUCTOR
    // ========================================================================
    function new(string name, uvm_component parent);
        super.new(name, parent);  // Call parent constructor
    endfunction
    
    // ========================================================================
    // BUILD PHASE
    // ========================================================================
    /**
     * Build phase: Create environment components
     * 
     * COMPONENT CREATION:
     *   - Agent: Created in environment
     */
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // ====================================================================
        // CREATE AGENT
        // ====================================================================
        agent = ArchAgent::type_id::create("agent", this);
    endfunction
endclass

// ============================================================================
// SEQUENCE CLASS
// ============================================================================
/**
 * ArchSmokeSeq: Smoke sequence for architecture example
 * 
 * SEQUENCE PURPOSE:
 *   - Generates transactions
 *   - Sends transactions to sequencer
 *   - Tests basic functionality
 * 
 * SEQUENCE BEHAVIOR:
 *   - Creates transactions
 *   - Randomizes transactions
 *   - Sends transactions to sequencer
 */
class ArchSmokeSeq extends uvm_sequence #(ArchTxn);
    // ========================================================================
    // UVM MACROS
    // ========================================================================
    `uvm_object_utils(ArchSmokeSeq)
    
    // ========================================================================
    // CONSTRUCTOR
    // ========================================================================
    function new(string name="ArchSmokeSeq");
        super.new(name);  // Call parent constructor
    endfunction
    
    // ========================================================================
    // BODY TASK
    // ========================================================================
    /**
     * Body task: Generate and send transactions
     * 
     * SEQUENCE EXECUTION:
     *   1. Create transaction
     *   2. Randomize transaction
     *   3. Start item (send to sequencer)
     *   4. Finish item (wait for driver completion)
     *   5. Repeat
     * 
     * TRANSACTION FLOW:
     *   - start_item(t): Sends transaction to sequencer
     *   - finish_item(t): Waits for driver to complete transaction
     */
    task body();
        ArchTxn t;  // Transaction variable
        
        // ====================================================================
        // GENERATE TRANSACTIONS
        // ====================================================================
        // 
        // REPEAT LOOP:
        //   - Generate multiple transactions
        //   - Each transaction sent to sequencer
        repeat (5) begin
            // ================================================================
            // CREATE TRANSACTION
            // ================================================================
            t = ArchTxn::type_id::create("t");
            
            // ================================================================
            // RANDOMIZE TRANSACTION
            // ================================================================
            // 
            // RANDOMIZE:
            //   - Randomizes all rand fields (addr, data, is_write)
            //   - Constraint: is_write inside {0,1} (always valid)
            //   - void'(): Suppress return value (Verilator lint)
            /* verilator lint_off IGNOREDRETURN */
            void'(t.randomize() with { is_write inside {0,1}; });
            /* verilator lint_on IGNOREDRETURN */
            
            // ================================================================
            // SEND TRANSACTION TO SEQUENCER
            // ================================================================
            // 
            // START_ITEM / FINISH_ITEM:
            //   - start_item(t): Sends transaction to sequencer
            //   - finish_item(t): Waits for driver to complete transaction
            //   - Standard UVM sequence pattern
            start_item(t);   // Send to sequencer
            finish_item(t);  // Wait for driver completion
        end
    endtask
endclass

// ============================================================================
// TEST CLASS
// ============================================================================
/**
 * ArchitectureTest: Test for architecture example
 * 
 * TEST PURPOSE:
 *   - Top-level test class
 *   - Creates environment
 *   - Starts sequences
 *   - Controls test execution
 * 
 * TEST STRUCTURE:
 *   - Environment: Contains agent
 *   - Sequence: Generates transactions
 */
class ArchitectureTest extends uvm_test;
    // ========================================================================
    // TEST COMPONENTS
    // ========================================================================
    ArchEnv env;  // Environment: Contains agent
    
    // ========================================================================
    // UVM MACROS
    // ========================================================================
    `uvm_component_utils(ArchitectureTest)
    
    // ========================================================================
    // CONSTRUCTOR
    // ========================================================================
    function new(string name, uvm_component parent);
        super.new(name, parent);  // Call parent constructor
    endfunction
    
    // ========================================================================
    // BUILD PHASE
    // ========================================================================
    /**
     * Build phase: Create test components
     * 
     * COMPONENT CREATION:
     *   - Environment: Created in test
     */
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // ====================================================================
        // CREATE ENVIRONMENT
        // ====================================================================
        env = ArchEnv::type_id::create("env", this);
    endfunction
    
    // ========================================================================
    // RUN PHASE
    // ========================================================================
    /**
     * Run phase: Execute test
     * 
     * TEST EXECUTION:
     *   1. Raise objection (prevent phase from ending)
     *   2. Create sequence
     *   3. Start sequence on sequencer
     *   4. Wait for completion
     *   5. Drop objection (allow phase to end)
     */
    task run_phase(uvm_phase phase);
        ArchSmokeSeq seq;  // Sequence variable
        
        // ====================================================================
        // RAISE OBJECTION
        // ====================================================================
        // 
        // OBJECTION:
        //   - Prevents run_phase from ending
        //   - Must drop objection to allow phase to end
        //   - Required for proper test execution
        phase.raise_objection(this);
        
        // ====================================================================
        // CREATE SEQUENCE
        // ====================================================================
        seq = ArchSmokeSeq::type_id::create("seq");
        
        // ====================================================================
        // START SEQUENCE
        // ====================================================================
        // 
        // SEQUENCE START:
        //   - seq.start(env.agent.seqr): Start sequence on sequencer
        //   - Sequence generates transactions
        //   - Transactions sent to driver
        //   - Blocks until sequence completes
        seq.start(env.agent.seqr);
        
        // ====================================================================
        // WAIT FOR COMPLETION
        // ====================================================================
        #100;  // Wait for transactions to complete
        
        // ====================================================================
        // DROP OBJECTION
        // ====================================================================
        // 
        // OBJECTION DROP:
        //   - Allows run_phase to end
        //   - Required for proper test completion
        phase.drop_objection(this);
    endtask
endclass

// ============================================================================
// TOP-LEVEL MODULE
// ============================================================================
/**
 * Top-level module: Entry point for simulation
 * 
 * MODULE PURPOSE:
 *   - Instantiates UVM test
 *   - Starts UVM simulation
 * 
 * RUN_TEST:
 *   - run_test("ArchitectureTest"): Starts UVM test
 *   - UVM automatically creates test instance
 *   - Executes all UVM phases
 */
module architecture;
    // ========================================================================
    // START UVM TEST
    // ========================================================================
    // 
    // RUN_TEST:
    //   - Starts UVM test with name "ArchitectureTest"
    //   - UVM creates test instance via factory
    //   - Executes all UVM phases (build, connect, run, etc.)
    initial run_test("ArchitectureTest");
endmodule
