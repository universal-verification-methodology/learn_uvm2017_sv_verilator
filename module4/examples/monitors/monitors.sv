/**
 * Module 4 Example 4.3: UVM Monitor Implementation
 * Demonstrates monitor implementation with signal sampling and transaction creation.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand UVM monitor class structure and purpose
 *   2. Learn signal sampling from DUT via virtual interface
 *   3. Master transaction creation from sampled signals
 *   4. Understand analysis port usage for broadcasting
 *   5. Apply protocol-specific monitoring patterns
 * 
 * MONITOR PURPOSE:
 *   - Observes DUT behavior via virtual interface
 *   - Samples DUT signals on clock edges
 *   - Creates transactions from signal values
 *   - Broadcasts transactions to subscribers (scoreboard, coverage, etc.)
 * 
 * MONITOR OPERATION:
 *   - Passive component (doesn't drive DUT)
 *   - Samples signals continuously
 *   - Detects protocol events (valid/ready handshake, etc.)
 *   - Creates and broadcasts transactions
 * 
 * ANALYSIS PORT:
 *   - One-to-many communication (broadcast)
 *   - Subscribers: Scoreboard, coverage collector, logger
 *   - Non-blocking: Monitor doesn't wait for subscribers
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
        
        // ========================================================================
        // MONITOR MAIN LOOP
        // ========================================================================
        // 
        // FOREVER LOOP:
        //   - Monitor runs continuously during run_phase
        //   - Samples DUT signals on every clock edge
        //   - Creates transactions when protocol events detected
        //   - Broadcasts transactions to subscribers
        forever begin
            // ========================================================================
            // SIGNAL SAMPLING (REAL IMPLEMENTATION)
            // ========================================================================
            // 
            // CLOCK EDGE SAMPLING:
            //   - Wait for clock edge: @(posedge vif.clk)
            //   - Sample signals on clock edge
            //   - Check protocol conditions (valid/ready, etc.)
            // 
            // PROTOCOL DETECTION:
            //   - Detect valid transactions (e.g., valid && ready)
            //   - Sample all relevant signals
            //   - Create transaction with sampled values
            // 
            // EXAMPLE (commented out - real implementation):
            // @(posedge vif.clk);  // Wait for clock edge
            // if (vif.valid && vif.ready) begin  // Detect transaction
            //     txn = MonitorTransaction::type_id::create("txn");
            //     txn.data = vif.data;        // Sample data
            //     txn.address = vif.address;   // Sample address
            //     txn.result = vif.result;    // Sample result
            //     ap.write(txn);               // Broadcast transaction
            // end
            
            // Simulated sampling (for demonstration)
            #20;  // Simulate time delay
            txn = MonitorTransaction::type_id::create("txn");
            txn.data = $urandom_range(0, 255);      // Random data (simulated)
            txn.address = $urandom_range(0, 65535);  // Random address (simulated)
            txn.result = txn.data + 1;              // Simulate DUT operation
            
            `uvm_info("MONITOR", $sformatf("[%s] Sampled transaction: %s", 
                      get_name(), txn.convert2string()), UVM_MEDIUM)
            
            // ========================================================================
            // BROADCAST TRANSACTION VIA ANALYSIS PORT
            // ========================================================================
            // 
            // ANALYSIS PORT WRITE:
            //   - ap.write(txn): Broadcasts transaction to all subscribers
            //   - Non-blocking: Monitor continues immediately
            //   - One-to-many: Multiple subscribers receive same transaction
            //   - Subscribers: Scoreboard, coverage, logger, etc.
            // 
            // SUBSCRIBER RECEPTION:
            //   - Each subscriber's write() method called
            //   - Subscribers process transaction independently
            //   - No coordination needed between subscribers
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

// ============================================================================
// MONITOR SUBSCRIBER CLASS
// ============================================================================
/**
 * Subscriber to receive monitor transactions
 * 
 * SUBSCRIBER PURPOSE:
 *   - Receives transactions from monitor via analysis port
 *   - Processes transactions (logging, coverage, checking)
 *   - Demonstrates analysis port subscriber pattern
 * 
 * SUBSCRIBER PATTERN:
 *   - Extends uvm_subscriber #(transaction_type)
 *   - Implements write() method
 *   - Automatically connected to analysis port
 * 
 * USAGE:
 *   - Scoreboard: Compare expected vs actual
 *   - Coverage: Collect coverage data
 *   - Logger: Log transactions to file
 *   - Checker: Verify protocol compliance
 */
class MonitorSubscriber extends uvm_subscriber #(MonitorTransaction);
    // ========================================================================
    // INSTANCE VARIABLES
    // ========================================================================
    int transaction_count = 0;  // Count of received transactions
    
    `uvm_component_utils(MonitorSubscriber)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    // ========================================================================
    // WRITE METHOD (ANALYSIS PORT CALLBACK)
    // ========================================================================
    /**
     * Write method called by analysis port
     * 
     * WRITE METHOD:
     *   - Called automatically when monitor writes to analysis port
     *   - Receives transaction as parameter
     *   - Processes transaction (logging, checking, coverage)
     *   - Non-blocking: Should return quickly
     * 
     * ANALYSIS PORT FLOW:
     *   1. Monitor: ap.write(txn)
     *   2. Analysis port: Calls all subscribers' write() methods
     *   3. Subscriber: write(t) called with transaction
     *   4. Subscriber: Processes transaction
     * 
     * @param t Transaction received from monitor
     */
    function void write(MonitorTransaction t);
        // Increment transaction counter
        transaction_count++;
        
        // Process transaction
        // 
        // PROCESSING OPTIONS:
        //   - Logging: Record transaction details
        //   - Coverage: Update coverage bins
        //   - Checking: Verify protocol compliance
        //   - Statistics: Collect transaction statistics
        `uvm_info("SUBSCRIBER", $sformatf("Received transaction #%0d: %s", 
                  transaction_count, t.convert2string()), UVM_MEDIUM)
        
        // ========================================================================
        // SUBSCRIBER PROCESSING EXAMPLES
        // ========================================================================
        // 
        // COVERAGE EXAMPLE:
        //   - Update coverage bins based on transaction
        //   - Example: covergroup.sample(t.data, t.address)
        // 
        // CHECKING EXAMPLE:
        //   - Verify protocol compliance
        //   - Example: Check address range, data validity
        // 
        // STATISTICS EXAMPLE:
        //   - Collect transaction statistics
        //   - Example: Track min/max values, averages
        // 
        // SCOREBOARD EXAMPLE:
        //   - Compare with expected transactions
        //   - Example: scoreboard.check_actual(t)
    endfunction
    
    // ========================================================================
    // REPORT PHASE
    // ========================================================================
    /**
     * Report phase: Display statistics
     * 
     * REPORT PHASE USAGE:
     *   - Display collected statistics
     *   - Report coverage information
     *   - Show test results summary
     */
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        
        // Display transaction count
        // 
        // STATISTICS REPORTING:
        //   - Total transactions received
        //   - Transaction rate
        //   - Coverage information
        //   - Error statistics
        `uvm_info("SUBSCRIBER", $sformatf("Total transactions received: %0d", 
                  transaction_count), UVM_MEDIUM)
        
        // ========================================================================
        // STATISTICS REPORTING EXAMPLES
        // ========================================================================
        // 
        // TRANSACTION RATE:
        //   - Calculate transactions per time unit
        //   - Useful for performance analysis
        // 
        // COVERAGE REPORT:
        //   - Display coverage statistics
        //   - Show coverage holes
        // 
        // ERROR SUMMARY:
        //   - Report protocol violations
        //   - Show error statistics
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
