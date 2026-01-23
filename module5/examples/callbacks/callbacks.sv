/**
 * Module 5 Example 5.4: UVM Callbacks
 * Demonstrates callback implementation and usage.
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

/**
 * Callback base class for driver
 */
class DriverCallbackBase extends uvm_callback;
    `uvm_object_utils(DriverCallbackBase)
    
    function new(string name = "DriverCallbackBase");
        super.new(name);
    endfunction
    
    virtual function void pre_drive(uvm_driver #(CallbackTransaction) driver, 
                                     CallbackTransaction txn);
        // Override in derived classes
    endfunction
    
    virtual function void post_drive(uvm_driver #(CallbackTransaction) driver, 
                                      CallbackTransaction txn);
        // Override in derived classes
    endfunction
endclass

/**
 * Driver callback implementation
 */
class DriverCallback extends DriverCallbackBase;
    `uvm_object_utils(DriverCallback)
    `uvm_register_cb(DriverWithCallbacks, DriverCallback)
    
    function new(string name = "DriverCallback");
        super.new(name);
    endfunction
    
    function void pre_drive(uvm_driver #(CallbackTransaction) driver, 
                            CallbackTransaction txn);
        `uvm_info("CALLBACK", $sformatf("[%s] Pre-drive callback: %s", 
                  get_name(), txn.convert2string()), UVM_MEDIUM)
        // Can modify transaction before driving
        txn.data = txn.data ^ 8'hFF;  // Example: invert data
    endfunction
    
    function void post_drive(uvm_driver #(CallbackTransaction) driver, 
                             CallbackTransaction txn);
        `uvm_info("CALLBACK", $sformatf("[%s] Post-drive callback: %s", 
                  get_name(), txn.convert2string()), UVM_MEDIUM)
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
            
            // Pre-drive callback
            `uvm_do_callbacks(DriverWithCallbacks, DriverCallback, 
                              pre_drive(this, item))
            
            `uvm_info("DRIVER", $sformatf("Driving: %s", item.convert2string()), UVM_MEDIUM)
            #10;
            
            // Post-drive callback
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
    
    function void pre_sample(uvm_monitor monitor, CallbackTransaction txn);
        `uvm_info("CALLBACK", $sformatf("[%s] Pre-sample callback: %s", 
                  get_name(), txn.convert2string()), UVM_MEDIUM)
    endfunction
    
    function void post_sample(uvm_monitor monitor, CallbackTransaction txn);
        `uvm_info("CALLBACK", $sformatf("[%s] Post-sample callback: %s", 
                  get_name(), txn.convert2string()), UVM_MEDIUM)
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
        
        // Register callbacks
        uvm_callbacks#(DriverWithCallbacks, DriverCallback)::add(driver, driver_cb);
        uvm_callbacks#(MonitorWithCallbacks, MonitorCallback)::add(monitor, monitor_cb);
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
