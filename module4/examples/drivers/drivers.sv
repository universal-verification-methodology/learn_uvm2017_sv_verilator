/**
 * Module 4 Example 4.2: UVM Driver Implementation
 * Demonstrates driver implementation with transaction reception and signal driving.
 * 
 * This example shows:
 * - Driver class structure
 * - Transaction reception from sequencer
 * - Signal driving to DUT
 * - Driver-sequencer communication
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Simple transaction for driver example
 */
class SimpleTransaction extends uvm_sequence_item;
    logic [7:0] data;
    logic [15:0] address;
    
    `uvm_object_utils(SimpleTransaction)
    
    function new(string name = "SimpleTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h", data, address);
    endfunction
endclass

/**
 * Simple driver demonstrating basic driver implementation
 */
class SimpleDriver extends uvm_driver #(SimpleTransaction);
    `uvm_component_utils(SimpleDriver)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("DRIVER", $sformatf("[%s] Building driver", get_name()), UVM_MEDIUM)
    endfunction
    
    task run_phase(uvm_phase phase);
        SimpleTransaction txn;
        
        `uvm_info("DRIVER", $sformatf("[%s] Starting driver run_phase", get_name()), UVM_MEDIUM)
        
        forever begin
            // Get next transaction from sequencer
            seq_item_port.get_next_item(txn);
            `uvm_info("DRIVER", $sformatf("[%s] Received transaction: %s", 
                      get_name(), txn.convert2string()), UVM_MEDIUM)
            
            // Drive transaction to DUT
            drive_transaction(txn);
            
            // Signal completion to sequencer
            seq_item_port.item_done();
            `uvm_info("DRIVER", $sformatf("[%s] Transaction completed", get_name()), UVM_MEDIUM)
        end
    endtask
    
    task drive_transaction(SimpleTransaction txn);
        `uvm_info("DRIVER", $sformatf("[%s] Driving transaction: %s", 
                  get_name(), txn.convert2string()), UVM_MEDIUM)
        // In real implementation, this would drive DUT signals:
        // vif.data <= txn.data;
        // vif.address <= txn.address;
        // vif.valid <= 1'b1;
        // @(posedge vif.clk);
        #10;
        `uvm_info("DRIVER", $sformatf("[%s] Signals driven: data=0x%02h, addr=0x%04h", 
                  get_name(), txn.data, txn.address), UVM_MEDIUM)
    endtask
endclass

/**
 * Protocol driver demonstrating protocol implementation
 */
class ProtocolDriver extends uvm_driver #(SimpleTransaction);
    `uvm_component_utils(ProtocolDriver)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("PROTOCOL_DRIVER", "Building protocol driver", UVM_MEDIUM)
    endfunction
    
    task run_phase(uvm_phase phase);
        SimpleTransaction txn;
        
        `uvm_info("PROTOCOL_DRIVER", "Starting protocol driver", UVM_MEDIUM)
        
        forever begin
            seq_item_port.get_next_item(txn);
            
            // Implement protocol: request -> wait for grant -> drive -> complete
            `uvm_info("PROTOCOL_DRIVER", "Asserting request", UVM_MEDIUM)
            // vif.request <= 1'b1;
            #5;
            
            // Wait for grant (simulated)
            `uvm_info("PROTOCOL_DRIVER", "Waiting for grant", UVM_MEDIUM)
            #10;
            // wait(vif.grant);
            
            // Drive transaction
            `uvm_info("PROTOCOL_DRIVER", $sformatf("Driving: %s", txn.convert2string()), UVM_MEDIUM)
            #20;
            
            // Complete
            `uvm_info("PROTOCOL_DRIVER", "Completing transaction", UVM_MEDIUM)
            // vif.request <= 1'b0;
            seq_item_port.item_done();
        end
    endtask
endclass

/**
 * Test class demonstrating drivers
 */
class DriversTest extends uvm_test;
    SimpleDriver driver;
    uvm_sequencer #(SimpleTransaction) sequencer;
    SimpleTransaction txn;
    
    `uvm_component_utils(DriversTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("TEST", "Building driver test", UVM_MEDIUM)
        driver = SimpleDriver::type_id::create("driver", this);
        sequencer = uvm_sequencer#(SimpleTransaction)::type_id::create("sequencer", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        
        `uvm_info("TEST", "Starting driver test", UVM_MEDIUM)
        
        // Create and send a transaction
        txn = SimpleTransaction::type_id::create("txn");
        txn.data = 8'hAA;
        txn.address = 16'h1234;
        
        // Start transaction on sequencer
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
module drivers;
    initial begin
        $display("============================================================");
        $display("UVM Driver Example");
        $display("============================================================");
        $display();
        
        run_test("DriversTest");
    end
endmodule
