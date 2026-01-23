/**
 * Module 3 Example 3.4: UVM ConfigDB
 * Demonstrates UVM configuration database for passing configuration.
 * 
 * This example shows:
 * - Setting configuration values in ConfigDB
 * - Getting configuration values from ConfigDB
 * - Hierarchical configuration lookup
 * - Configuration objects vs scalar values
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Configuration object class
 */
class AgentConfig extends uvm_object;
    bit active;
    bit has_coverage;
    int address_width;
    int data_width;
    
    `uvm_object_utils(AgentConfig)
    
    function new(string name = "AgentConfig");
        super.new(name);
        active = 1;
        has_coverage = 0;
        address_width = 32;
        data_width = 32;
    endfunction
    
    function string convert2string();
        return $sformatf("active=%0b, has_coverage=%0b, addr_width=%0d, data_width=%0d",
                         active, has_coverage, address_width, data_width);
    endfunction
endclass

/**
 * Component that uses configuration from ConfigDB
 */
class ConfigurableComponent extends uvm_component;
    AgentConfig config_obj;
    int timeout_value;
    string mode;
    
    `uvm_component_utils(ConfigurableComponent)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // Get configuration object from ConfigDB
        if (!uvm_config_db#(AgentConfig)::get(this, "", "agent_config", config_obj)) begin
            `uvm_warning("CONFIGDB", "AgentConfig not found, using defaults")
            config_obj = AgentConfig::type_id::create("config_obj");
        end else begin
            `uvm_info("CONFIGDB", $sformatf("Got config: %s", config_obj.convert2string()), UVM_MEDIUM)
        end
        
        // Get scalar configuration value
        if (!uvm_config_db#(int)::get(this, "", "timeout", timeout_value)) begin
            `uvm_warning("CONFIGDB", "Timeout not found, using default")
            timeout_value = 1000;
        end else begin
            `uvm_info("CONFIGDB", $sformatf("Got timeout: %0d", timeout_value), UVM_MEDIUM)
        end
        
        // Get string configuration value
        if (!uvm_config_db#(string)::get(this, "", "mode", mode)) begin
            `uvm_warning("CONFIGDB", "Mode not found, using default")
            mode = "default";
        end else begin
            `uvm_info("CONFIGDB", $sformatf("Got mode: %s", mode), UVM_MEDIUM)
        end
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        `uvm_info("CONFIGDB", $sformatf("Component using config: %s", config_obj.convert2string()), UVM_MEDIUM)
        `uvm_info("CONFIGDB", $sformatf("Timeout: %0d, Mode: %s", timeout_value, mode), UVM_MEDIUM)
        #10;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Child component for hierarchical configuration
 */
class ConfigurableChild extends ConfigurableComponent;
    `uvm_component_utils(ConfigurableChild)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
endclass

/**
 * Test class that sets configuration
 */
class ConfigDBTest extends uvm_test;
    ConfigurableComponent parent_comp;
    ConfigurableChild child_comp;
    AgentConfig global_config;
    AgentConfig child_config;
    
    `uvm_component_utils(ConfigDBTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // Create and set global configuration
        global_config = AgentConfig::type_id::create("global_config");
        global_config.active = 1;
        global_config.has_coverage = 1;
        global_config.address_width = 16;
        global_config.data_width = 16;
        
        uvm_config_db#(AgentConfig)::set(this, "*", "agent_config", global_config);
        `uvm_info("TEST", "Set global agent_config", UVM_MEDIUM)
        
        // Set scalar configuration values
        uvm_config_db#(int)::set(this, "*", "timeout", 2000);
        uvm_config_db#(string)::set(this, "*", "mode", "test_mode");
        `uvm_info("TEST", "Set global timeout and mode", UVM_MEDIUM)
        
        // Set child-specific configuration
        child_config = AgentConfig::type_id::create("child_config");
        child_config.active = 0;
        child_config.has_coverage = 0;
        child_config.address_width = 8;
        child_config.data_width = 8;
        
        uvm_config_db#(AgentConfig)::set(this, "child_comp", "agent_config", child_config);
        uvm_config_db#(int)::set(this, "child_comp", "timeout", 500);
        uvm_config_db#(string)::set(this, "child_comp", "mode", "child_mode");
        `uvm_info("TEST", "Set child-specific configuration", UVM_MEDIUM)
        
        // Create components (they will get config in their build_phase)
        parent_comp = ConfigurableComponent::type_id::create("parent_comp", this);
        child_comp = ConfigurableChild::type_id::create("child_comp", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        `uvm_info("TEST", "Test run_phase executing", UVM_MEDIUM)
        #50;
        phase.drop_objection(this);
    endtask
    
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        `uvm_info("TEST", "ConfigDB demonstration complete", UVM_MEDIUM)
        `uvm_info("TEST", "Key Concepts:", UVM_MEDIUM)
        `uvm_info("TEST", "  - ConfigDB enables flexible test configuration", UVM_MEDIUM)
        `uvm_info("TEST", "  - Configuration can be set globally or per-component", UVM_MEDIUM)
        `uvm_info("TEST", "  - Components look up configuration in build_phase", UVM_MEDIUM)
        `uvm_info("TEST", "  - Hierarchical paths enable component-specific config", UVM_MEDIUM)
    endfunction
endclass

/**
 * Top-level testbench module
 */
module configdb;
    initial begin
        $display("============================================================");
        $display("UVM ConfigDB Example");
        $display("============================================================");
        $display();
        $display("This example demonstrates:");
        $display("  - Setting configuration in ConfigDB");
        $display("  - Getting configuration from ConfigDB");
        $display("  - Global vs component-specific configuration");
        $display("  - Configuration objects and scalar values");
        $display();
        
        run_test("ConfigDBTest");
    end
endmodule
