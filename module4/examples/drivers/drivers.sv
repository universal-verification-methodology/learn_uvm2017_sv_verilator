/**
 * Module 4 Example 4.2: UVM Driver Implementation
 * Demonstrates driver implementation with transaction reception and signal driving.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand UVM driver class structure and purpose
 *   2. Learn transaction reception from sequencer (get_next_item)
 *   3. Master signal driving to DUT via virtual interface
 *   4. Understand driver-sequencer communication (TLM)
 *   5. Apply protocol-specific driving patterns
 * 
 * DRIVER PURPOSE:
 *   - Receives transactions from sequencer
 *   - Drives transactions to DUT via virtual interface
 *   - Implements protocol-specific driving logic
 *   - Converts transaction-level to signal-level
 * 
 * DRIVER-SEQUENCER COMMUNICATION:
 *   - Driver requests: seq_item_port.get_next_item()
 *   - Sequencer provides: Transaction from sequence
 *   - Driver completes: seq_item_port.item_done()
 *   - TLM connection: driver.seq_item_port <-> sequencer.seq_item_export
 * 
 * DRIVING PATTERNS:
 *   - Simple driver: Direct signal driving
 *   - Protocol driver: Handshake, timing, protocol compliance
 *   - Pipelined driver: Multiple transactions in flight
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
        
        // ========================================================================
        // DRIVER MAIN LOOP
        // ========================================================================
        // 
        // FOREVER LOOP:
        //   - Driver runs continuously during run_phase
        //   - Processes transactions one at a time
        //   - Blocks on get_next_item() until transaction available
        //   - Typical pattern: get -> drive -> done
        forever begin
            // ========================================================================
            // GET NEXT TRANSACTION FROM SEQUENCER
            // ========================================================================
            // 
            // GET_NEXT_ITEM:
            //   - Blocks until sequencer provides transaction
            //   - Transaction comes from active sequence
            //   - Driver waits if no transaction available
            //   - Returns transaction handle in txn
            // 
            // TLM COMMUNICATION:
            //   - seq_item_port: Driver's TLM port
            //   - Connected to sequencer's seq_item_export
            //   - Request-response pattern
            // 
            // BLOCKING BEHAVIOR:
            //   - get_next_item() blocks until transaction available
            //   - Driver suspends here if sequencer has no transaction
            //   - Resumes when sequence sends transaction
            seq_item_port.get_next_item(txn);
            
            `uvm_info("DRIVER", $sformatf("[%s] Received transaction: %s", 
                      get_name(), txn.convert2string()), UVM_MEDIUM)
            
            // ========================================================================
            // DRIVE TRANSACTION TO DUT
            // ========================================================================
            // 
            // DRIVING PROCESS:
            //   - Convert transaction fields to DUT signals
            //   - Apply protocol-specific timing
            //   - Drive signals via virtual interface
            //   - Wait for protocol completion
            // 
            // PROTOCOL IMPLEMENTATION:
            //   - In real driver: Drive vif.data, vif.address, vif.valid, etc.
            //   - Follow protocol timing requirements
            //   - Handle handshakes, delays, etc.
            drive_transaction(txn);
            
            // ========================================================================
            // SIGNAL COMPLETION TO SEQUENCER
            // ========================================================================
            // 
            // ITEM_DONE:
            //   - Signals sequencer that transaction is complete
            //   - Allows sequencer to send next transaction
            //   - Must be called after driving completes
            //   - Unblocks sequencer for next transaction
            // 
            // SEQUENCER COORDINATION:
            //   - Sequencer waits for item_done() before sending next item
            //   - Enables sequential transaction processing
            //   - Can pass response transaction: item_done(response)
            seq_item_port.item_done();
            
            `uvm_info("DRIVER", $sformatf("[%s] Transaction completed", get_name()), UVM_MEDIUM)
        end
    endtask
    
    // ========================================================================
    // DRIVE TRANSACTION TASK
    // ========================================================================
    /**
     * Drive transaction to DUT
     * 
     * DRIVING PROCESS:
     *   1. Extract fields from transaction
     *   2. Drive signals via virtual interface
     *   3. Apply protocol timing
     *   4. Wait for protocol completion
     * 
     * PROTOCOL IMPLEMENTATION:
     *   - Valid/ready handshake
     *   - Setup/hold time requirements
     *   - Clock edge synchronization
     * 
     * @param txn Transaction to drive
     */
    task drive_transaction(SimpleTransaction txn);
        `uvm_info("DRIVER", $sformatf("[%s] Driving transaction: %s", 
                  get_name(), txn.convert2string()), UVM_MEDIUM)
        
        // ========================================================================
        // REAL IMPLEMENTATION (COMMENTED - FOR REFERENCE)
        // ========================================================================
        // 
        // VIRTUAL INTERFACE DRIVING:
        //   - vif: Virtual interface handle (set via ConfigDB)
        //   - Drives DUT signals through interface
        //   - Must follow protocol timing
        // 
        // PROTOCOL EXAMPLE (Valid/Ready Handshake):
        //   // Setup phase: Drive data and address
        //   vif.data <= txn.data;           // Drive data signal
        //   vif.address <= txn.address;     // Drive address signal
        //   vif.valid <= 1'b1;              // Assert valid signal
        //   
        //   // Wait for ready (handshake)
        //   @(posedge vif.clk);
        //   while (!vif.ready) @(posedge vif.clk);  // Wait for ready
        //   
        //   // Completion: Deassert valid
        //   @(posedge vif.clk);
        //   vif.valid <= 1'b0;
        //   vif.data <= 8'h00;              // Clear data
        //   vif.address <= 16'h0000;        // Clear address
        // 
        // TIMING CONSIDERATIONS:
        //   - Setup time: Data must be stable before clock edge
        //   - Hold time: Data must remain stable after clock edge
        //   - Protocol timing: Follow specification requirements
        // 
        // ERROR HANDLING:
        //   - Timeout: Wait for ready with timeout
        //   - Protocol violations: Check for illegal states
        //   - Retry: Implement retry mechanism if needed
        // 
        // EXAMPLE WITH TIMEOUT:
        //   fork
        //       begin
        //           wait(vif.ready);
        //       end
        //       begin
        //           #1000;  // Timeout
        //           `uvm_error("DRIVER", "Timeout waiting for ready")
        //       end
        //   join_any
        //   disable fork;
        
        // Simulated driving (for demonstration)
        #10;  // Simulate protocol timing
        
        `uvm_info("DRIVER", $sformatf("[%s] Signals driven: data=0x%02h, addr=0x%04h", 
                  get_name(), txn.data, txn.address), UVM_MEDIUM)
        
        // ========================================================================
        // DRIVING BEST PRACTICES
        // ========================================================================
        // 
        // 1. PROTOCOL COMPLIANCE:
        //    - Follow protocol specification exactly
        //    - Respect timing requirements
        //    - Handle all protocol states
        // 
        // 2. ERROR HANDLING:
        //    - Implement timeouts for handshakes
        //    - Check for protocol violations
        //    - Report errors clearly
        // 
        // 3. DEBUGGING:
        //    - Log all signal values
        //    - Use waveform debugging
        //    - Add protocol state tracking
        // 
        // 4. PERFORMANCE:
        //    - Minimize clock cycles per transaction
        //    - Pipeline when possible
        //    - Avoid unnecessary delays
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
