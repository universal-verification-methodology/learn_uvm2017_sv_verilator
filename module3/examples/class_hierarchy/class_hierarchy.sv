/**
 * Module 3 Example 3.1: UVM Class Hierarchy
 * Demonstrates UVM class hierarchy and component structure.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand UVM class hierarchy (uvm_object vs uvm_component)
 *   2. Learn component creation and factory pattern
 *   3. Master UVM phase implementation
 *   4. Understand component hierarchy and parent-child relationships
 *   5. Apply UVM component patterns (driver, monitor, agent, env, test)
 * 
 * UVM CLASS HIERARCHY:
 *   - uvm_object: Base class for data objects (transactions, configs)
 *     * No parent required, created with new()
 *     * Examples: uvm_sequence_item, uvm_object
 *   - uvm_component: Base class for verification components
 *     * Requires parent, created with factory
 *     * Examples: uvm_driver, uvm_monitor, uvm_agent, uvm_env, uvm_test
 * 
 * COMPONENT HIERARCHY:
 *   test (uvm_test)
 *     └── env (uvm_env)
 *           └── agent (uvm_agent)
 *                 ├── driver (uvm_driver)
 *                 ├── sequencer (uvm_sequencer)
 *                 └── monitor (uvm_monitor)
 * 
 * PHASE EXECUTION:
 *   - Build-time phases: Top-down (parent before child)
 *   - Run-time phases: Bottom-up (child before parent)
 *   - Cleanup phases: Bottom-up (child before parent)
 * 
 * This example shows:
 * - uvm_object vs uvm_component
 * - Component hierarchy
 * - Component creation
 * - Phase implementation
 */

`include "uvm_macros.svh"  // Include UVM macros for `uvm_object_utils, `uvm_component_utils, etc.
import uvm_pkg::*;         // Import UVM package for all UVM classes and types

// ============================================================================
// TRANSACTION CLASS (uvm_object hierarchy)
// ============================================================================
/**
 * Transaction class - extends uvm_object hierarchy
 * 
 * UVM_OBJECT HIERARCHY:
 *   - uvm_object: Base class for all UVM objects
 *   - uvm_transaction: Base for transactions (deprecated, use uvm_sequence_item)
 *   - uvm_sequence_item: Base for sequence items (transactions)
 * 
 * CHARACTERISTICS:
 *   - No parent required (created with new() or factory)
 *   - Can be created anywhere (not tied to component hierarchy)
 *   - Passed between components (driver, monitor, scoreboard)
 *   - Has copy(), compare(), convert2string() methods
 * 
 * USAGE:
 *   - Represents data flowing through verification environment
 *   - Created by sequences, processed by drivers/monitors
 *   - Compared in scoreboards
 */
class MyTransaction extends uvm_sequence_item;
    // ========================================================================
    // INSTANCE VARIABLES
    // ========================================================================
    // Transaction data fields
    logic [7:0] data;        // 8-bit data field (transaction payload)
    logic [15:0] address;    // 16-bit address field (memory address)
    
    // ========================================================================
    // FACTORY REGISTRATION
    // ========================================================================
    // 'uvm_object_utils' macro registers class with UVM factory
    // 
    // MACRO FUNCTIONALITY:
    //   - Registers class type with factory
    //   - Enables type_id::create() for object creation
    //   - Provides get_type(), get_type_name() methods
    //   - Required for factory pattern and overrides
    // 
    // FACTORY REGISTRATION:
    //   - Must be called before using type_id::create()
    //   - Enables factory-based object creation
    //   - Allows type/instance overrides
    `uvm_object_utils(MyTransaction)
    
    // ========================================================================
    // CONSTRUCTOR
    // ========================================================================
    /**
     * Constructor: Creates new transaction object
     * 
     * @param name Object name (for hierarchical naming and debugging)
     *              Default: "MyTransaction"
     *              In UVM, name is used for hierarchical identification
     */
    function new(string name = "MyTransaction");
        // Call parent class constructor
        // uvm_sequence_item constructor initializes object
        super.new(name);
        // Note: data and address are automatically initialized to 0
    endfunction
    
    // ========================================================================
    // CONVERT2STRING METHOD
    // ========================================================================
    /**
     * Convert transaction to string representation
     * 
     * Inherited from uvm_object, overridden here for custom formatting.
     * Used for debugging and logging.
     * 
     * @return Formatted string with transaction fields
     */
    function string convert2string();
        // Format string with transaction data
        // '%02h' = 2-digit hexadecimal with leading zeros
        // '%04h' = 4-digit hexadecimal with leading zeros
        return $sformatf("data=0x%02h, address=0x%04h", data, address);
    endfunction
endclass  // End of MyTransaction class

// ============================================================================
// DRIVER CLASS (uvm_component hierarchy)
// ============================================================================
/**
 * Driver - extends uvm_component hierarchy
 * 
 * UVM_COMPONENT HIERARCHY:
 *   - uvm_component: Base class for all UVM components
 *   - uvm_driver: Base class for drivers (drives transactions to DUT)
 *   - Generic: uvm_driver #(transaction_type)
 * 
 * CHARACTERISTICS:
 *   - Requires parent component (part of component hierarchy)
 *   - Created with factory (type_id::create())
 *   - Has phases (build_phase, connect_phase, run_phase, etc.)
 *   - Has hierarchical name (parent.child)
 *   - Lives for entire simulation
 * 
 * DRIVER RESPONSIBILITY:
 *   - Receives transactions from sequencer
 *   - Drives transactions to DUT via virtual interface
 *   - Implements protocol-specific driving logic
 * 
 * USAGE:
 *   - Part of agent (driver + sequencer + monitor)
 *   - Connects to sequencer via seq_item_port
 *   - Drives DUT signals through virtual interface
 */
class MyDriver extends uvm_driver #(MyTransaction);
    // ========================================================================
    // FACTORY REGISTRATION
    // ========================================================================
    // 'uvm_component_utils' macro registers component with UVM factory
    // 
    // DIFFERENCE FROM uvm_object_utils:
    //   - uvm_component_utils: For components (requires parent)
    //   - uvm_object_utils: For objects (no parent required)
    // 
    // MACRO FUNCTIONALITY:
    //   - Registers class type with factory
    //   - Enables type_id::create() for component creation
    //   - Provides get_type(), get_type_name() methods
    //   - Required for factory pattern and overrides
    `uvm_component_utils(MyDriver)
    
    // ========================================================================
    // CONSTRUCTOR
    // ========================================================================
    /**
     * Constructor: Creates new driver component
     * 
     * COMPONENT CONSTRUCTOR REQUIREMENTS:
     *   - Must have 'name' parameter (component name)
     *   - Must have 'parent' parameter (parent component)
     *   - Must call super.new(name, parent)
     * 
     * @param name Component name (e.g., "driver")
     * @param parent Parent component (e.g., agent that contains this driver)
     *                Cannot be null for components (unlike objects)
     */
    function new(string name, uvm_component parent);
        // Call parent class constructor
        // uvm_driver constructor initializes component and registers with parent
        super.new(name, parent);
    endfunction
    
    // ========================================================================
    // BUILD_PHASE
    // ========================================================================
    /**
     * Build phase: Component construction and configuration
     * 
     * BUILD_PHASE CHARACTERISTICS:
     *   - Function (not task): Executes immediately, no delays
     *   - Top-down execution: Parent build_phase before child
     *   - Purpose: Create child components, get configuration
     *   - Timing: Before connect_phase
     * 
     * BUILD_PHASE ACTIVITIES:
     *   - Create child components using factory
     *   - Get configuration from ConfigDB
     *   - Set default values
     *   - Allocate resources
     * 
     * @param phase UVM phase object (provides phase information)
     */
    function void build_phase(uvm_phase phase);
        // Call parent build_phase (required)
        // Parent may have important initialization
        super.build_phase(phase);
        
        // Build phase activities
        // In real driver: Create virtual interface, get config, etc.
        `uvm_info("DRIVER", "Building driver component", UVM_MEDIUM)
        // UVM_MEDIUM: Verbosity level (controls message visibility)
    endfunction
    
    // ========================================================================
    // CONNECT_PHASE
    // ========================================================================
    /**
     * Connect phase: Component connections
     * 
     * CONNECT_PHASE CHARACTERISTICS:
     *   - Function (not task): Executes immediately, no delays
     *   - Top-down execution: Parent connect_phase before child
     *   - Purpose: Connect ports, exports, analysis ports
     *   - Timing: After build_phase, before run_phase
     * 
     * CONNECT_PHASE ACTIVITIES:
     *   - Connect TLM ports (seq_item_port, analysis_port, etc.)
     *   - Connect virtual interfaces
     *   - Establish communication channels
     * 
     * @param phase UVM phase object
     */
    function void connect_phase(uvm_phase phase);
        // Call parent connect_phase (required)
        super.connect_phase(phase);
        
        // Connect phase activities
        // In real driver: Connect seq_item_port to sequencer, connect virtual interface
        `uvm_info("DRIVER", "Connecting driver component", UVM_MEDIUM)
    endfunction
    
    // ========================================================================
    // RUN_PHASE
    // ========================================================================
    /**
     * Run phase: Main simulation activity
     * 
     * RUN_PHASE CHARACTERISTICS:
     *   - Task (not function): Can have delays (#, @, wait)
     *   - Bottom-up execution: Child run_phase before parent
     *   - Purpose: Main simulation activity (driving, monitoring)
     *   - Timing: After connect_phase, runs until all objections dropped
     * 
     * RUN_PHASE ACTIVITIES:
     *   - Drive transactions to DUT
     *   - Monitor DUT behavior
     *   - Execute sequences
     *   - Coordinate test execution
     * 
     * OBJECTIONS:
     *   - Must raise objection to keep phase running
     *   - Must drop objection when work complete
     *   - Phase ends when all objections dropped
     * 
     * @param phase UVM phase object
     */
    task run_phase(uvm_phase phase);
        `uvm_info("DRIVER", "Driver run_phase executing", UVM_MEDIUM)
        
        // Raise objection: Keeps run_phase running
        // Without objection, phase would end immediately
        // Objection prevents premature phase completion
        phase.raise_objection(this);
        
        // Simulate driver work (driving transactions)
        // In real driver: Loop getting transactions from sequencer and driving to DUT
        #100;  // Simulate 100 time units of work
        
        // Drop objection: Signals work is complete
        // When all objections dropped, phase can complete
        phase.drop_objection(this);
    endtask
endclass  // End of MyDriver class

// ============================================================================
// MONITOR CLASS (uvm_component hierarchy)
// ============================================================================
/**
 * Monitor - extends uvm_component hierarchy
 * 
 * MONITOR RESPONSIBILITY:
 *   - Observes DUT behavior via virtual interface
 *   - Captures transactions from DUT signals
 *   - Sends transactions to analysis subscribers (scoreboard, coverage)
 *   - Passive component (doesn't drive DUT)
 * 
 * ANALYSIS PORT:
 *   - uvm_analysis_port: Broadcasts transactions to subscribers
 *   - Subscribers: Scoreboard, coverage collector, etc.
 *   - One-to-many communication pattern
 */
class MyMonitor extends uvm_monitor;
    // ========================================================================
    // ANALYSIS PORT
    // ========================================================================
    // Analysis port for broadcasting transactions
    // 
    // ANALYSIS PORT PURPOSE:
    //   - Broadcasts transactions to multiple subscribers
    //   - Subscribers: Scoreboard, coverage, logger, etc.
    //   - One monitor can have multiple analysis ports
    // 
    // GENERIC PARAMETER:
    //   - #(MyTransaction): Type of transaction sent through port
    //   - Type-safe: Only MyTransaction objects can be sent
    uvm_analysis_port #(MyTransaction) ap;
    
    `uvm_component_utils(MyMonitor)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        // Create analysis port
        // 'new("ap", this)': Port name="ap", parent=this component
        // Analysis ports are created in constructor (not build_phase)
        ap = new("ap", this);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        // Build phase activities
        // In real monitor: Get virtual interface, create analysis ports, etc.
        `uvm_info("MONITOR", "Building monitor component", UVM_MEDIUM)
    endfunction
    
    task run_phase(uvm_phase phase);
        `uvm_info("MONITOR", "Monitor run_phase executing", UVM_MEDIUM)
        
        // Raise objection: Keeps run_phase running
        phase.raise_objection(this);
        
        // Simulate monitor work (observing DUT)
        // In real monitor: Loop sampling DUT signals, creating transactions, writing to analysis port
        #100;  // Simulate 100 time units of work
        
        // Drop objection: Signals work is complete
        phase.drop_objection(this);
    endtask
endclass  // End of MyMonitor class

// ============================================================================
// AGENT CLASS (uvm_component hierarchy)
// ============================================================================
/**
 * Agent - demonstrates component composition
 * 
 * AGENT PURPOSE:
 *   - Groups related components (driver, sequencer, monitor)
 *   - Provides reusable verification IP (VIP)
 *   - Can be active (has driver) or passive (monitor only)
 * 
 * AGENT COMPONENTS:
 *   - Driver: Drives transactions to DUT
 *   - Sequencer: Provides transactions to driver
 *   - Monitor: Observes DUT behavior
 * 
 * AGENT CONFIGURATION:
 *   - Active agent: driver + sequencer + monitor
 *   - Passive agent: monitor only
 *   - Configuration via ConfigDB
 */
class MyAgent extends uvm_agent;
    // ========================================================================
    // COMPONENT HANDLES
    // ========================================================================
    // Child components created in build_phase
    MyDriver driver;                              // Driver component handle
    MyMonitor monitor;                            // Monitor component handle
    uvm_sequencer #(MyTransaction) sequencer;     // Sequencer component handle
                                                  // Generic: #(MyTransaction) transaction type
    
    `uvm_component_utils(MyAgent)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("AGENT", "Building agent component", UVM_MEDIUM)
        
        // Create child components using factory
        // 
        // FACTORY CREATION:
        //   - type_id::create() uses factory to create objects
        //   - Factory can apply overrides (type/instance overrides)
        //   - First parameter: Component name (hierarchical name)
        //   - Second parameter: Parent component (this agent)
        // 
        // COMPONENT NAMES:
        //   - "driver": Creates component named "driver"
        //   - Full name: "agent.driver" (parent.child)
        //   - Used for ConfigDB lookup and debugging
        driver = MyDriver::type_id::create("driver", this);
        monitor = MyMonitor::type_id::create("monitor", this);
        sequencer = uvm_sequencer#(MyTransaction)::type_id::create("sequencer", this);
        // Note: Sequencer is built-in UVM class, not custom
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        `uvm_info("AGENT", "Connecting agent components", UVM_MEDIUM)
        
        // Connect driver to sequencer
        // 
        // TLM CONNECTION:
        //   - driver.seq_item_port: Port on driver (requests transactions)
        //   - sequencer.seq_item_export: Export on sequencer (provides transactions)
        //   - Connection: driver requests -> sequencer provides
        // 
        // SEQUENCE ITEM FLOW:
        //   Sequence -> Sequencer -> Driver -> DUT
        //   Driver requests transaction from sequencer
        //   Sequencer gets transaction from sequence
        //   Driver receives transaction and drives to DUT
        driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction
endclass  // End of MyAgent class

// ============================================================================
// ENVIRONMENT CLASS (uvm_component hierarchy)
// ============================================================================
/**
 * Environment - top-level verification environment
 * 
 * ENVIRONMENT PURPOSE:
 *   - Contains all verification components (agents, scoreboards, etc.)
 *   - Top-level container for testbench structure
 *   - Reusable across multiple tests
 * 
 * ENVIRONMENT COMPONENTS:
 *   - Agents: Interface-specific verification components
 *   - Scoreboards: Result checking components
 *   - Coverage collectors: Coverage collection components
 *   - Virtual sequencers: Coordinate multiple agents
 */
class MyEnv extends uvm_env;
    MyAgent agent;  // Agent component handle
    
    `uvm_component_utils(MyEnv)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("ENV", "Building environment component", UVM_MEDIUM)
        
        // Create agent using factory
        // Agent will be created in build_phase (top-down)
        agent = MyAgent::type_id::create("agent", this);
    endfunction
endclass  // End of MyEnv class

// ============================================================================
// TEST CLASS (uvm_component hierarchy)
// ============================================================================
/**
 * Test - top-level test class
 * 
 * TEST PURPOSE:
 *   - Top-level component in UVM hierarchy
 *   - Contains environment and test-specific logic
 *   - Each test class = one test scenario
 *   - Selected by run_test() call
 * 
 * TEST STRUCTURE:
 *   - Build phase: Create environment
 *   - Connect phase: Connect components
 *   - Run phase: Execute test scenario
 *   - Report phase: Generate test results
 * 
 * TEST SELECTION:
 *   - run_test("TestClassName") selects test to run
 *   - Can be overridden via command line: +UVM_TESTNAME=TestName
 */
class ClassHierarchyTest extends uvm_test;
    MyEnv env;              // Environment component handle
    MyTransaction txn;      // Transaction object handle (uvm_object, not component)
    
    `uvm_component_utils(ClassHierarchyTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        // Note: parent is null for test (top of hierarchy)
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("TEST", "Building test component", UVM_MEDIUM)
        
        // Create environment using factory
        // Environment will create agent, which creates driver/monitor/sequencer
        env = MyEnv::type_id::create("env", this);
        
        // Create transaction object (uvm_object)
        // 
        // OBJECT vs COMPONENT CREATION:
        //   - Objects: No parent required, created with type_id::create("name")
        //   - Components: Parent required, created with type_id::create("name", parent)
        // 
        // TRANSACTION CREATION:
        //   - Created in test (can be created anywhere)
        //   - Not part of component hierarchy
        //   - Can be passed to sequences, drivers, etc.
        txn = MyTransaction::type_id::create("txn");
        
        // Set transaction fields
        txn.data = 8'hAA;        // 8-bit data value
        txn.address = 16'h1234;   // 16-bit address value
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        `uvm_info("TEST", "Connecting test components", UVM_MEDIUM)
        // Connect phase activities
        // In real test: Connect scoreboard to monitor, connect virtual sequencer, etc.
    endfunction
    
    task run_phase(uvm_phase phase);
        `uvm_info("TEST", "Test run_phase executing", UVM_MEDIUM)
        
        // Display transaction information
        // Demonstrates transaction object usage
        `uvm_info("TEST", $sformatf("Transaction: %s", txn.convert2string()), UVM_MEDIUM)
        
        // Raise objection: Keeps run_phase running
        // Test must raise objection to prevent premature phase completion
        phase.raise_objection(this);
        
        // Simulate test execution
        // In real test: Start sequences, wait for completion, check results
        #200;  // Simulate 200 time units of test execution
        
        // Drop objection: Signals test is complete
        // When all objections dropped, run_phase completes
        phase.drop_objection(this);
    endtask
    
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        `uvm_info("TEST", "Class hierarchy demonstration complete", UVM_MEDIUM)
    endfunction
endclass  // End of ClassHierarchyTest class

// ============================================================================
// TOP-LEVEL MODULE
// ============================================================================
/**
 * Top-level testbench module
 * 
 * MODULE PURPOSE:
 *   - Entry point for simulation
 *   - Calls run_test() to start UVM test
 *   - Can instantiate DUT if needed
 * 
 * RUN_TEST FUNCTION:
 *   - UVM function that starts test execution
 *   - Parameter: Test class name (string)
 *   - Creates test instance and runs all phases
 *   - Can be overridden: +UVM_TESTNAME=TestName command line option
 */
module class_hierarchy;
    initial begin
        $display("============================================================");
        $display("UVM Class Hierarchy Example");
        $display("============================================================");
        $display();
        
        // Start UVM test
        // 
        // RUN_TEST BEHAVIOR:
        //   1. Creates test instance: ClassHierarchyTest::type_id::create("ClassHierarchyTest", null)
        //   2. Executes all UVM phases in order
        //   3. Phases: build -> connect -> run -> report -> final
        //   4. Simulation ends when all phases complete
        // 
        // TEST SELECTION:
        //   - Command line override: +UVM_TESTNAME=OtherTest
        //   - Allows running different tests without recompilation
        run_test("ClassHierarchyTest");
    end
endmodule
