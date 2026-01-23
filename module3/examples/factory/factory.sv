/**
 * Module 3 Example 3.5: UVM Factory Pattern
 * Demonstrates UVM factory pattern for object creation and overrides.
 * 
 * This example shows:
 * - Factory registration
 * - Factory-based object creation
 * - Type override
 * - Instance override
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Base transaction class
 */
class BaseTransaction extends uvm_sequence_item;
    logic [7:0] data;
    
    `uvm_object_utils(BaseTransaction)
    
    function new(string name = "BaseTransaction");
        super.new(name);
        data = 8'h00;
    endfunction
    
    function string convert2string();
        return $sformatf("BaseTransaction: data=0x%02h", data);
    endfunction
endclass

/**
 * Extended transaction class
 */
class ExtendedTransaction extends BaseTransaction;
    logic [15:0] address;
    
    `uvm_object_utils(ExtendedTransaction)
    
    function new(string name = "ExtendedTransaction");
        super.new(name);
        address = 16'h0000;
    endfunction
    
    function string convert2string();
        return $sformatf("ExtendedTransaction: data=0x%02h, address=0x%04h", data, address);
    endfunction
endclass

/**
 * Base driver class
 */
class BaseDriver extends uvm_driver #(BaseTransaction);
    `uvm_component_utils(BaseDriver)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("FACTORY", "BaseDriver build_phase", UVM_MEDIUM)
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        `uvm_info("FACTORY", "BaseDriver run_phase executing", UVM_MEDIUM)
        #10;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Extended driver class
 */
class ExtendedDriver extends BaseDriver;
    `uvm_component_utils(ExtendedDriver)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("FACTORY", "ExtendedDriver build_phase", UVM_MEDIUM)
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        `uvm_info("FACTORY", "ExtendedDriver run_phase executing (OVERRIDE)", UVM_MEDIUM)
        #10;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Component that uses factory
 */
class FactoryComponent extends uvm_component;
    BaseDriver driver1;
    BaseDriver driver2;
    
    `uvm_component_utils(FactoryComponent)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // Create components using factory
        // Factory will use override if set
        driver1 = BaseDriver::type_id::create("driver1", this);
        driver2 = BaseDriver::type_id::create("driver2", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        `uvm_info("FACTORY", "FactoryComponent run_phase executing", UVM_MEDIUM)
        #20;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Test class demonstrating factory
 */
class FactoryTest extends uvm_test;
    FactoryComponent comp;
    BaseTransaction txn1, txn2;
    
    `uvm_component_utils(FactoryTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        `uvm_info("TEST", "Building test without override", UVM_MEDIUM)
        comp = FactoryComponent::type_id::create("comp", this);
        
        // Create transactions using factory
        txn1 = BaseTransaction::type_id::create("txn1");
        txn2 = ExtendedTransaction::type_id::create("txn2");
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        
        `uvm_info("TEST", "Test run_phase executing", UVM_MEDIUM)
        `uvm_info("TEST", $sformatf("Transaction 1: %s", txn1.convert2string()), UVM_MEDIUM)
        `uvm_info("TEST", $sformatf("Transaction 2: %s", txn2.convert2string()), UVM_MEDIUM)
        
        #50;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Test class demonstrating factory override
 */
class FactoryOverrideTest extends uvm_test;
    FactoryComponent comp;
    
    `uvm_component_utils(FactoryOverrideTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // Set type override: BaseDriver -> ExtendedDriver
        // This affects ALL instances of BaseDriver
        uvm_factory::get().set_type_override_by_type(BaseDriver::get_type(), 
                                                      ExtendedDriver::get_type());
        `uvm_info("TEST", "Set type override: BaseDriver -> ExtendedDriver", UVM_MEDIUM)
        
        // Create component (factory will use override)
        comp = FactoryComponent::type_id::create("comp", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        `uvm_info("TEST", "Test run_phase executing (with override)", UVM_MEDIUM)
        #50;
        phase.drop_objection(this);
    endtask
    
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        `uvm_info("TEST", "Factory demonstration complete", UVM_MEDIUM)
        `uvm_info("TEST", "Key Concepts:", UVM_MEDIUM)
        `uvm_info("TEST", "  - Factory enables centralized object creation", UVM_MEDIUM)
        `uvm_info("TEST", "  - Type override affects all instances", UVM_MEDIUM)
        `uvm_info("TEST", "  - Instance override affects specific instances", UVM_MEDIUM)
        `uvm_info("TEST", "  - Overrides enable test customization", UVM_MEDIUM)
    endfunction
endclass

/**
 * Top-level testbench module
 */
module factory;
    initial begin
        $display("============================================================");
        $display("UVM Factory Pattern Example");
        $display("============================================================");
        $display();
        $display("This example demonstrates:");
        $display("  - Factory-based object creation");
        $display("  - Type override (affects all instances)");
        $display("  - Factory registration and lookup");
        $display();
        $display("Running FactoryTest (no override)...");
        $display();
        
        run_test("FactoryTest");
        
        $display();
        $display("============================================================");
        $display("Running FactoryOverrideTest (with override)...");
        $display("============================================================");
        $display();
        
        // Note: In a real scenario, you'd run these as separate tests
        // For demonstration, we show the pattern
    end
endmodule
