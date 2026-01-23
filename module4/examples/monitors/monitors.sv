/**
 * Module 4 Example 4.3: UVM Monitor Implementation
 * Demonstrates monitor implementation with signal sampling and transaction creation.
 * 
 * This example shows:
 * - Monitor class structure
 * - Signal sampling
 * - Transaction creation
 * - Analysis port usage
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Transaction for monitor example
 */
class MonitorTransaction extends uvm_sequence_item;
    logic [7:0] data;
    logic [15:0] address;
    logic [7:0] result;
    
    `uvm_object_utils(MonitorTransaction)
    
    function new(string name = "MonitorTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h, result=0x%02h", 
                        data, address, result);
    endfunction
endclass

/**
 * Simple monitor demonstrating basic monitor implementation
 */
class SimpleMonitor extends uvm_monitor;
    uvm_analysis_port #(MonitorTransaction) ap;
    
    `uvm_component_utils(SimpleMonitor)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("MONITOR", $sformatf("[%s] Building monitor", get_name()), UVM_MEDIUM)
    endfunction
    
    task run_phase(uvm_phase phase);
        MonitorTransaction txn;
        
        `uvm_info("MONITOR", $sformatf("[%s] Starting monitor run_phase", get_name()), UVM_MEDIUM)
        
        forever begin
            // Sample DUT signals (simulated)
            // In real implementation:
            // @(posedge vif.clk);
            // if (vif.valid && vif.ready) begin
            //     txn = MonitorTransaction::type_id::create("txn");
            //     txn.data = vif.data;
            //     txn.address = vif.address;
            //     txn.result = vif.result;
            //     ap.write(txn);
            // end
            
            #20;
            txn = MonitorTransaction::type_id::create("txn");
            txn.data = $urandom_range(0, 255);
            txn.address = $urandom_range(0, 65535);
            txn.result = txn.data + 1;  // Simulate DUT operation
            
            `uvm_info("MONITOR", $sformatf("[%s] Sampled transaction: %s", 
                      get_name(), txn.convert2string()), UVM_MEDIUM)
            
            ap.write(txn);
        end
    endtask
endclass

/**
 * Protocol monitor demonstrating protocol-specific monitoring
 */
class ProtocolMonitor extends uvm_monitor;
    uvm_analysis_port #(MonitorTransaction) ap;
    
    `uvm_component_utils(ProtocolMonitor)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        MonitorTransaction txn;
        
        `uvm_info("PROTOCOL_MONITOR", "Starting protocol monitor", UVM_MEDIUM)
        
        forever begin
            // Wait for protocol handshake
            // wait(vif.valid && vif.ready);
            #15;
            
            // Sample on handshake
            txn = MonitorTransaction::type_id::create("txn");
            txn.data = $urandom_range(0, 255);
            txn.address = $urandom_range(0, 65535);
            txn.result = txn.data + 1;
            
            `uvm_info("PROTOCOL_MONITOR", $sformatf("Protocol transaction: %s", 
                      txn.convert2string()), UVM_MEDIUM)
            
            ap.write(txn);
        end
    endtask
endclass

/**
 * Subscriber to receive monitor transactions
 */
class MonitorSubscriber extends uvm_subscriber #(MonitorTransaction);
    int transaction_count = 0;
    
    `uvm_component_utils(MonitorSubscriber)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void write(MonitorTransaction t);
        transaction_count++;
        `uvm_info("SUBSCRIBER", $sformatf("Received transaction #%0d: %s", 
                  transaction_count, t.convert2string()), UVM_MEDIUM)
    endfunction
    
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        `uvm_info("SUBSCRIBER", $sformatf("Total transactions received: %0d", 
                  transaction_count), UVM_MEDIUM)
    endfunction
endclass

/**
 * Test class demonstrating monitors
 */
class MonitorsTest extends uvm_test;
    SimpleMonitor monitor;
    MonitorSubscriber subscriber;
    
    `uvm_component_utils(MonitorsTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("TEST", "Building monitor test", UVM_MEDIUM)
        monitor = SimpleMonitor::type_id::create("monitor", this);
        subscriber = MonitorSubscriber::type_id::create("subscriber", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        monitor.ap.connect(subscriber.analysis_export);
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        `uvm_info("TEST", "Starting monitor test", UVM_MEDIUM)
        #200;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level testbench module
 */
module monitors;
    initial begin
        $display("============================================================");
        $display("UVM Monitor Example");
        $display("============================================================");
        $display();
        
        run_test("MonitorsTest");
    end
endmodule
