/**
 * Module 5 Example 5.4: UVM Callbacks
 * Demonstrates callback implementation and usage.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand UVM callback mechanism and purpose
 *   2. Learn callback base class design
 *   3. Master callback registration (`uvm_register_cb)
 *   4. Understand callback invocation (`uvm_do_callbacks)
 *   5. Apply pre/post callback patterns
 * 
 * CALLBACK PURPOSE:
 *   - Extend component behavior without modifying component code
 *   - Add functionality at specific points (pre/post operations)
 *   - Enable test-specific customization
 *   - Support multiple callback implementations
 * 
 * CALLBACK MECHANISM:
 *   - Base callback class: Defines callback interface
 *   - Derived callback class: Implements callback behavior
 *   - Registration: Register callback with component
 *   - Invocation: Component calls callbacks at specific points
 * 
 * CALLBACK TYPES:
 *   - Pre-callbacks: Execute before operation (can modify)
 *   - Post-callbacks: Execute after operation (can observe)
 *   - Multiple callbacks: All registered callbacks execute
 * 
 * This example shows:
 * - Callback mechanism
 * - Pre/post callbacks
 * - Callback registration
 * - Callback usage patterns
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

// Forward typedef declarations for classes that use callbacks
typedef class DriverWithCallbacks;
typedef class MonitorWithCallbacks;

/**
 * Transaction for callback example
 */
class CallbackTransaction extends uvm_sequence_item;
    logic [7:0] data;
    
    `uvm_object_utils(CallbackTransaction)
    
    function new(string name = "CallbackTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h", data);
    endfunction
endclass

// ============================================================================
// CALLBACK BASE CLASS FOR DRIVER
// ============================================================================
/**
 * Callback base class for driver
 * 
 * CALLBACK BASE CLASS PURPOSE:
 *   - Defines callback interface (virtual methods)
 *   - Base class for all driver callbacks
 *   - Enables polymorphism (multiple callback types)
 * 
 * VIRTUAL METHODS:
 *   - pre_drive: Called before driving transaction
 *   - post_drive: Called after driving transaction
 *   - Virtual: Must be overridden in derived classes
 */
class DriverCallbackBase extends uvm_callback;
    `uvm_object_utils(DriverCallbackBase)
    
    function new(string name = "DriverCallbackBase");
        super.new(name);
    endfunction
    
    // ========================================================================
    // PRE-DRIVE CALLBACK (VIRTUAL)
    // ========================================================================
    /**
     * Pre-drive callback: Called before driving transaction
     * 
     * PRE-DRIVE PURPOSE:
     *   - Modify transaction before driving
     *   - Add logging/coverage before operation
     *   - Validate transaction before driving
     *   - Add test-specific behavior
     * 
     * @param driver Driver component calling callback
     * @param txn Transaction to be driven (can be modified)
     */
    virtual function void pre_drive(uvm_driver #(CallbackTransaction) driver, 
                                     CallbackTransaction txn);
        // Override in derived classes
        // Base implementation: Do nothing (empty)
        // Derived classes implement specific behavior
    endfunction
    
    // ========================================================================
    // POST-DRIVE CALLBACK (VIRTUAL)
    // ========================================================================
    /**
     * Post-drive callback: Called after driving transaction
     * 
     * POST-DRIVE PURPOSE:
     *   - Observe transaction after driving
     *   - Add logging/coverage after operation
     *   - Verify transaction was driven correctly
     *   - Add test-specific behavior
     * 
     * @param driver Driver component calling callback
     * @param txn Transaction that was driven (read-only observation)
     */
    virtual function void post_drive(uvm_driver #(CallbackTransaction) driver, 
                                      CallbackTransaction txn);
        // Override in derived classes
        // Base implementation: Do nothing (empty)
        // Derived classes implement specific behavior
    endfunction
endclass

// ============================================================================
// DRIVER CALLBACK IMPLEMENTATION
// ============================================================================
/**
 * Driver callback implementation
 * 
 * CALLBACK IMPLEMENTATION:
 *   - Extends callback base class
 *   - Implements virtual methods
 *   - Provides specific callback behavior
 * 
 * CALLBACK REGISTRATION:
 *   - `uvm_register_cb: Registers callback type with component type
 *   - Enables callback system to find callbacks
 *   - Required for callback mechanism to work
 */
class DriverCallback extends DriverCallbackBase;
    `uvm_object_utils(DriverCallback)
    
    // ========================================================================
    // CALLBACK REGISTRATION MACRO
    // ========================================================================
    // 
    // UVM_REGISTER_CB MACRO:
    //   `uvm_register_cb(component_type, callback_type)
    // 
    // PARAMETERS:
    //   - component_type: Component that uses callbacks (DriverWithCallbacks)
    //   - callback_type: Callback class (DriverCallback)
    // 
    // REGISTRATION PURPOSE:
    //   - Registers callback type with component type
    //   - Enables callback lookup and invocation
    //   - Required for `uvm_do_callbacks to work
    // 
    // REGISTRATION TIMING:
    //   - Registered at compile time (macro expansion)
    //   - Available for all instances of component type
    `uvm_register_cb(DriverWithCallbacks, DriverCallback)
    
    function new(string name = "DriverCallback");
        super.new(name);
    endfunction
    
    // ========================================================================
    // PRE-DRIVE CALLBACK IMPLEMENTATION
    // ========================================================================
    /**
     * Pre-drive callback: Modify transaction before driving
     * 
     * PRE-DRIVE BEHAVIOR:
     *   - Log transaction before driving
     *   - Modify transaction (example: invert data)
     *   - Add test-specific behavior
     * 
     * TRANSACTION MODIFICATION:
     *   - Can modify transaction fields
     *   - Changes affect driver behavior
     *   - Useful for test-specific transformations
     */
    function void pre_drive(uvm_driver #(CallbackTransaction) driver, 
                            CallbackTransaction txn);
        `uvm_info("CALLBACK", $sformatf("[%s] Pre-drive callback: %s", 
                  get_name(), txn.convert2string()), UVM_MEDIUM)
        
        // ========================================================================
        // TRANSACTION MODIFICATION EXAMPLE
        // ========================================================================
        // 
        // MODIFICATION PURPOSE:
        //   - Transform transaction before driving
        //   - Example: Invert data bits (XOR with 0xFF)
        //   - Useful for test-specific behavior
        // 
        // MODIFICATION EXAMPLES:
        //   - Data transformation: txn.data = txn.data ^ 8'hFF (invert)
        //   - Address mapping: txn.address = txn.address + offset
        //   - Field modification: txn.control = txn.control | mask
        //   - Validation: Check transaction validity
        // 
        // MODIFICATION IMPACT:
        //   - Driver receives modified transaction
        //   - DUT sees modified values
        //   - Useful for error injection, transformations
        txn.data = txn.data ^ 8'hFF;  // Example: invert data bits
                                      // Original: 0xAA -> Modified: 0x55
                                      // Original: 0x00 -> Modified: 0xFF
    endfunction
    
    // ========================================================================
    // POST-DRIVE CALLBACK IMPLEMENTATION
    // ========================================================================
    /**
     * Post-drive callback: Observe transaction after driving
     * 
     * POST-DRIVE BEHAVIOR:
     *   - Log transaction after driving
     *   - Observe transaction (read-only)
     *   - Add coverage/checking
     * 
     * OBSERVATION PURPOSE:
     *   - Monitor what was driven
     *   - Collect coverage data
     *   - Verify transaction was driven correctly
     */
    function void post_drive(uvm_driver #(CallbackTransaction) driver, 
                             CallbackTransaction txn);
        `uvm_info("CALLBACK", $sformatf("[%s] Post-drive callback: %s", 
                  get_name(), txn.convert2string()), UVM_MEDIUM)
        
        // ========================================================================
        // POST-DRIVE OBSERVATION EXAMPLES
        // ========================================================================
        // 
        // OBSERVATION OPTIONS:
        //   - Logging: Record transaction details
        //   - Coverage: Update coverage bins
        //   - Checking: Verify transaction correctness
        //   - Statistics: Collect transaction statistics
        // 
        // NOTE: Transaction is read-only in post-drive
        //   - Modifications don't affect driver (already driven)
        //   - Use for observation only
    endfunction
endclass

/**
 * Driver that uses callbacks
 */
class DriverWithCallbacks extends uvm_driver #(CallbackTransaction);
    `uvm_component_utils(DriverWithCallbacks)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    task run_phase(uvm_phase phase);
        CallbackTransaction item;
        
        forever begin
            seq_item_port.get_next_item(item);
            
            // ========================================================================
            // PRE-DRIVE CALLBACK INVOCATION
            // ========================================================================
            // 
            // UVM_DO_CALLBACKS MACRO:
            //   `uvm_do_callbacks(component_type, callback_type, callback_method(args))
            // 
            // MACRO FUNCTIONALITY:
            //   - Finds all registered callbacks of callback_type
            //   - Calls callback_method on each callback
            //   - Executes all callbacks in registration order
            // 
            // CALLBACK INVOCATION:
            //   - All registered callbacks execute
            //   - Callbacks execute in registration order
            //   - Each callback can modify transaction
            // 
            // PRE-DRIVE PURPOSE:
            //   - Modify transaction before driving
            //   - Add test-specific behavior
            //   - Validate transaction
            `uvm_do_callbacks(DriverWithCallbacks, DriverCallback, 
                              pre_drive(this, item))
            
            `uvm_info("DRIVER", $sformatf("Driving: %s", item.convert2string()), UVM_MEDIUM)
            #10;
            
            // ========================================================================
            // POST-DRIVE CALLBACK INVOCATION
            // ========================================================================
            // 
            // POST-DRIVE PURPOSE:
            //   - Observe transaction after driving
            //   - Add coverage/checking
            //   - Log transaction details
            // 
            // CALLBACK EXECUTION:
            //   - All registered callbacks execute
            //   - Transaction is read-only (already driven)
            //   - Use for observation only
            `uvm_do_callbacks(DriverWithCallbacks, DriverCallback, 
                              post_drive(this, item))
            
            seq_item_port.item_done();
        end
    endtask
endclass

/**
 * Monitor callback base class
 */
class MonitorCallbackBase extends uvm_callback;
    `uvm_object_utils(MonitorCallbackBase)
    
    function new(string name = "MonitorCallbackBase");
        super.new(name);
    endfunction
    
    virtual function void pre_sample(uvm_monitor monitor, CallbackTransaction txn);
        // Override in derived classes
    endfunction
    
    virtual function void post_sample(uvm_monitor monitor, CallbackTransaction txn);
        // Override in derived classes
    endfunction
endclass

/**
 * Monitor callback implementation
 */
class MonitorCallback extends MonitorCallbackBase;
    `uvm_object_utils(MonitorCallback)
    `uvm_register_cb(MonitorWithCallbacks, MonitorCallback)
    
    function new(string name = "MonitorCallback");
        super.new(name);
    endfunction
    
    // ========================================================================
    // PRE-SAMPLE CALLBACK IMPLEMENTATION
    // ========================================================================
    /**
     * Pre-sample callback: Called before sampling transaction
     * 
     * PRE-SAMPLE BEHAVIOR:
     *   - Observe transaction before sampling
     *   - Can modify transaction (if needed)
     *   - Add logging/checking before sampling
     * 
     * MONITOR CALLBACKS:
     *   - Pre-sample: Before transaction created/sampled
     *   - Post-sample: After transaction sampled
     *   - Useful for protocol checking, coverage, logging
     */
    function void pre_sample(uvm_monitor monitor, CallbackTransaction txn);
        `uvm_info("CALLBACK", $sformatf("[%s] Pre-sample callback: %s", 
                  get_name(), txn.convert2string()), UVM_MEDIUM)
        
        // ========================================================================
        // PRE-SAMPLE USAGE EXAMPLES
        // ========================================================================
        // 
        // PROTOCOL CHECKING:
        //   - Validate transaction before sampling
        //   - Check protocol compliance
        //   - Example: if (txn.data == 0) `uvm_warning("CALLBACK", "Zero data detected")
        // 
        // COVERAGE TRIGGERING:
        //   - Trigger coverage before sampling
        //   - Example: coverage_collector.sample_pre(txn)
        // 
        // LOGGING:
        //   - Log transaction details
        //   - Example: transaction_logger.log_pre(txn)
    endfunction
    
    // ========================================================================
    // POST-SAMPLE CALLBACK IMPLEMENTATION
    // ========================================================================
    /**
     * Post-sample callback: Called after sampling transaction
     * 
     * POST-SAMPLE BEHAVIOR:
     *   - Observe transaction after sampling
     *   - Transaction already sampled (read-only)
     *   - Add coverage/checking after sampling
     */
    function void post_sample(uvm_monitor monitor, CallbackTransaction txn);
        `uvm_info("CALLBACK", $sformatf("[%s] Post-sample callback: %s", 
                  get_name(), txn.convert2string()), UVM_MEDIUM)
        
        // ========================================================================
        // POST-SAMPLE USAGE EXAMPLES
        // ========================================================================
        // 
        // COVERAGE COLLECTION:
        //   - Update coverage after sampling
        //   - Example: coverage_collector.sample_post(txn)
        // 
        // STATISTICS:
        //   - Update statistics
        //   - Example: stats_collector.record(txn)
        // 
        // VERIFICATION:
        //   - Verify transaction correctness
        //   - Example: checker.verify(txn)
    endfunction
endclass

/**
 * Monitor that uses callbacks
 */
class MonitorWithCallbacks extends uvm_monitor;
    uvm_analysis_port #(CallbackTransaction) ap;
    
    `uvm_component_utils(MonitorWithCallbacks)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        CallbackTransaction txn;
        
        forever begin
            #15;
            txn = CallbackTransaction::type_id::create("txn");
            txn.data = $urandom_range(0, 255);
            
            // Pre-sample callback
            `uvm_do_callbacks(MonitorWithCallbacks, MonitorCallback, 
                              pre_sample(this, txn))
            
            `uvm_info("MONITOR", $sformatf("Sampled: %s", txn.convert2string()), UVM_MEDIUM)
            
            // Post-sample callback
            `uvm_do_callbacks(MonitorWithCallbacks, MonitorCallback, 
                              post_sample(this, txn))
            
            ap.write(txn);
        end
    endtask
endclass

/**
 * Test class demonstrating callbacks
 */
class CallbacksTest extends uvm_test;
    DriverWithCallbacks driver;
    MonitorWithCallbacks monitor;
    uvm_sequencer #(CallbackTransaction) sequencer;
    DriverCallback driver_cb;
    MonitorCallback monitor_cb;
    CallbackTransaction txn;
    
    `uvm_component_utils(CallbacksTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("TEST", "Building callback test", UVM_MEDIUM)
        driver = DriverWithCallbacks::type_id::create("driver", this);
        monitor = MonitorWithCallbacks::type_id::create("monitor", this);
        sequencer = uvm_sequencer#(CallbackTransaction)::type_id::create("sequencer", this);
        driver_cb = DriverCallback::type_id::create("driver_cb");
        monitor_cb = MonitorCallback::type_id::create("monitor_cb");
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        driver.seq_item_port.connect(sequencer.seq_item_export);
        
        // ========================================================================
        // CALLBACK REGISTRATION
        // ========================================================================
        // 
        // UVM_CALLBACKS::ADD:
        //   uvm_callbacks#(component_type, callback_type)::add(component, callback)
        // 
        // REGISTRATION PROCESS:
        //   - Registers callback instance with component instance
        //   - Callback will be invoked when component calls `uvm_do_callbacks
        //   - Multiple callbacks can be registered (all execute)
        // 
        // REGISTRATION TIMING:
        //   - Typically done in connect_phase
        //   - After components are created
        //   - Before run_phase (when callbacks are used)
        // 
        // MULTIPLE CALLBACKS:
        //   - Can register multiple callbacks
        //   - All callbacks execute in registration order
        //   - Each callback can have different behavior
        // 
        // CALLBACK LIFETIME:
        //   - Callback lives for component lifetime
        //   - Remains registered until component destroyed
        //   - Can be added/removed dynamically (advanced)
        uvm_callbacks#(DriverWithCallbacks, DriverCallback)::add(driver, driver_cb);
        uvm_callbacks#(MonitorWithCallbacks, MonitorCallback)::add(monitor, monitor_cb);
        
        // ========================================================================
        // CALLBACK REGISTRATION EXAMPLES
        // ========================================================================
        // 
        // MULTIPLE CALLBACKS:
        //   DriverCallback cb1, cb2;
        //   cb1 = DriverCallback::type_id::create("cb1");
        //   cb2 = DriverCallback::type_id::create("cb2");
        //   uvm_callbacks#(...)::add(driver, cb1);
        //   uvm_callbacks#(...)::add(driver, cb2);
        //   // Both cb1 and cb2 execute when driver calls callbacks
        // 
        // CONDITIONAL REGISTRATION:
        //   if (test_mode == "debug") begin
        //       uvm_callbacks#(...)::add(driver, debug_cb);
        //   end
        // 
        // REMOVING CALLBACKS:
        //   uvm_callbacks#(...)::delete(driver, driver_cb);
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        
        `uvm_info("TEST", "Starting callback test", UVM_MEDIUM)
        
        // Create and send a transaction
        txn = CallbackTransaction::type_id::create("txn");
        txn.data = 8'hAA;
        
        fork
            begin
                sequencer.execute_item(txn);
            end
        join_none
        
        #100;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level testbench module
 */
module callbacks;
    initial begin
        $display("============================================================");
        $display("UVM Callbacks Example");
        $display("============================================================");
        $display();
        
        run_test("CallbacksTest");
    end
endmodule
