/**
 * Module 4 Example 4.5: TLM (Transaction-Level Modeling)
 * Demonstrates TLM communication between UVM components.
 * 
 * This example shows:
 * - TLM ports and exports
 * - TLM FIFOs
 * - Analysis ports
 * - TLM connections
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Transaction for TLM example
 */
class TlmTransaction extends uvm_sequence_item;
    logic [7:0] data;
    
    `uvm_object_utils(TlmTransaction)
    
    function new(string name = "TlmTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h", data);
    endfunction
endclass

/**
 * Producer component using TLM put port
 */
class TlmProducer extends uvm_component;
    uvm_blocking_put_port #(TlmTransaction) put_port;
    
    `uvm_component_utils(TlmProducer)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        put_port = new("put_port", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        TlmTransaction txn;
        
        phase.raise_objection(this);
        `uvm_info("PRODUCER", "Starting producer", UVM_MEDIUM)
        
        for (int i = 0; i < 5; i++) begin
            txn = TlmTransaction::type_id::create("txn");
            txn.data = 8'h10 + 8'(i);
            
            `uvm_info("PRODUCER", $sformatf("Putting transaction: %s", 
                      txn.convert2string()), UVM_MEDIUM)
            
            put_port.put(txn);
        end
        
        `uvm_info("PRODUCER", "Producer complete", UVM_MEDIUM)
        phase.drop_objection(this);
    endtask
endclass

/**
 * Consumer component using TLM get export
 */
class TlmConsumer extends uvm_component;
    uvm_blocking_get_export #(TlmTransaction) get_export;
    int received_count = 0;
    
    `uvm_component_utils(TlmConsumer)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        get_export = new("get_export", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        TlmTransaction txn;
        
        phase.raise_objection(this);
        `uvm_info("CONSUMER", "Starting consumer", UVM_MEDIUM)
        
        for (int i = 0; i < 5; i++) begin
            get_export.get(txn);
            received_count++;
            `uvm_info("CONSUMER", $sformatf("Received transaction #%0d: %s", 
                      received_count, txn.convert2string()), UVM_MEDIUM)
        end
        
        `uvm_info("CONSUMER", "Consumer complete", UVM_MEDIUM)
        phase.drop_objection(this);
    endtask
    
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        `uvm_info("CONSUMER", $sformatf("Total received: %0d", received_count), UVM_MEDIUM)
    endfunction
endclass

/**
 * Analysis port producer
 */
class AnalysisProducer extends uvm_component;
    uvm_analysis_port #(TlmTransaction) ap;
    
    `uvm_component_utils(AnalysisProducer)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        TlmTransaction txn;
        
        phase.raise_objection(this);
        `uvm_info("ANALYSIS_PRODUCER", "Starting analysis producer", UVM_MEDIUM)
        
        for (int i = 0; i < 5; i++) begin
            txn = TlmTransaction::type_id::create("txn");
            txn.data = 8'h20 + 8'(i);
            
            `uvm_info("ANALYSIS_PRODUCER", $sformatf("Broadcasting: %s", 
                      txn.convert2string()), UVM_MEDIUM)
            
            ap.write(txn);
            #10;
        end
        
        phase.drop_objection(this);
    endtask
endclass

/**
 * Analysis subscriber
 */
class AnalysisSubscriber extends uvm_subscriber #(TlmTransaction);
    int received_count = 0;
    
    `uvm_component_utils(AnalysisSubscriber)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void write(TlmTransaction t);
        received_count++;
        `uvm_info("SUBSCRIBER", $sformatf("Subscriber received #%0d: %s", 
                  received_count, t.convert2string()), UVM_MEDIUM)
    endfunction
    
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        `uvm_info("SUBSCRIBER", $sformatf("Total received: %0d", received_count), UVM_MEDIUM)
    endfunction
endclass

/**
 * Test class demonstrating TLM
 */
class TlmTest extends uvm_test;
    TlmProducer producer;
    TlmConsumer consumer;
    uvm_tlm_fifo #(TlmTransaction) fifo;
    AnalysisProducer analysis_producer;
    AnalysisSubscriber subscriber1, subscriber2;
    
    `uvm_component_utils(TlmTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("TEST", "Building TLM test", UVM_MEDIUM)
        producer = TlmProducer::type_id::create("producer", this);
        consumer = TlmConsumer::type_id::create("consumer", this);
        fifo = uvm_tlm_fifo#(TlmTransaction)::type_id::create("fifo", this);
        analysis_producer = AnalysisProducer::type_id::create("analysis_producer", this);
        subscriber1 = AnalysisSubscriber::type_id::create("subscriber1", this);
        subscriber2 = AnalysisSubscriber::type_id::create("subscriber2", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        // Connect producer -> fifo -> consumer
        producer.put_port.connect(fifo.put_export);
        consumer.get_export.connect(fifo.get_export);
        
        // Connect analysis port to multiple subscribers
        analysis_producer.ap.connect(subscriber1.analysis_export);
        analysis_producer.ap.connect(subscriber2.analysis_export);
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        `uvm_info("TEST", "Starting TLM test", UVM_MEDIUM)
        #200;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level testbench module
 */
module tlm;
    initial begin
        $display("============================================================");
        $display("UVM TLM Example");
        $display("============================================================");
        $display();
        
        run_test("TlmTest");
    end
endmodule
