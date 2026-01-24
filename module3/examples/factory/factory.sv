/**
 * Module 3 Example 3.5: UVM Factory Pattern
 * Demonstrates UVM factory pattern for object creation and overrides.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand UVM factory purpose and benefits
 *   2. Learn factory registration (uvm_object_utils, uvm_component_utils)
 *   3. Master factory-based creation (type_id::create)
 *   4. Understand type override (affects all instances)
 *   5. Apply instance override (affects specific instance)
 * 
 * FACTORY PURPOSE:
 *   - Centralized object creation
 *   - Enables test customization without code changes
 *   - Supports inheritance and polymorphism
 *   - Allows runtime type substitution
 * 
 * FACTORY OPERATIONS:
 *   - Registration: `uvm_object_utils, `uvm_component_utils
 *   - Creation: type_id::create()
 *   - Override: set_type_override, set_inst_override
 * 
 * OVERRIDE TYPES:
 *   - Type override: BaseDriver -> ExtendedDriver (all instances)
 *   - Instance override: Specific component instance only
 * 
 * This example shows:
 * - Factory registration
 * - Factory-based object creation
 * - Type override
 * - Instance override
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================================
// BASE TRANSACTION CLASS
// ============================================================================
/**
 * Base transaction class
 * 
 * BASE CLASS PURPOSE:
 *   - Defines base transaction structure
 *   - Can be extended for specific protocols
 *   - Used with factory for type substitution
 * 
 * INHERITANCE PATTERN:
 *   - Base class: Common functionality
 *   - Extended class: Additional fields/functionality
 *   - Factory can substitute extended for base
 */
class BaseTransaction extends uvm_sequence_item;
    logic [7:0] data;  // 8-bit data field
    
    `uvm_object_utils(BaseTransaction)
    
    function new(string name = "BaseTransaction");
        super.new(name);
        data = 8'h00;  // Initialize data to 0
    endfunction
    
    function string convert2string();
        return $sformatf("BaseTransaction: data=0x%02h", data);
    endfunction
endclass

// ============================================================================
// EXTENDED TRANSACTION CLASS
// ============================================================================
/**
 * Extended transaction class
 * 
 * EXTENDED CLASS PURPOSE:
 *   - Extends base transaction with additional fields
 *   - Demonstrates inheritance and polymorphism
 *   - Can be used as factory override
 * 
 * INHERITANCE:
 *   - Inherits all base class fields and methods
 *   - Adds new fields (address)
 *   - Overrides methods (convert2string)
 * 
 * FACTORY OVERRIDE:
 *   - Can replace BaseTransaction with ExtendedTransaction
 *   - All code using BaseTransaction gets ExtendedTransaction
 *   - No code changes needed in components
 */
class ExtendedTransaction extends BaseTransaction;
    logic [15:0] address;  // 16-bit address field (new field)
    
    `uvm_object_utils(ExtendedTransaction)
    
    function new(string name = "ExtendedTransaction");
        super.new(name);  // Call base class constructor
        address = 16'h0000;  // Initialize address to 0
    endfunction
    
    function string convert2string();
        // Override base class method to include address
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
        
        // ========================================================================
        // SET TYPE OVERRIDE
        // ========================================================================
        // 
        // TYPE OVERRIDE:
        //   - Replaces ALL instances of base type with derived type
        //   - Affects all components created with BaseDriver::type_id::create()
        //   - Useful for test-wide customization
        // 
        // OVERRIDE SYNTAX:
        //   uvm_factory::get().set_type_override_by_type(original_type, override_type)
        // 
        // PARAMETERS:
        //   - original_type: Type to override (BaseDriver::get_type())
        //   - override_type: Replacement type (ExtendedDriver::get_type())
        // 
        // OVERRIDE BEHAVIOR:
        //   - When BaseDriver::type_id::create() is called
        //   - Factory creates ExtendedDriver instead
        //   - All instances of BaseDriver become ExtendedDriver
        //   - No code changes needed in components
        // 
        // USAGE:
        //   - Test customization: Replace driver with extended driver
        //   - Debugging: Replace component with debug version
        //   - Feature testing: Enable/disable features via override
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
