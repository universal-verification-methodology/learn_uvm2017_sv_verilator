/**
 * Module 3 Example 3.4: UVM ConfigDB
 * Demonstrates UVM configuration database for passing configuration.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand UVM ConfigDB purpose and usage
 *   2. Learn setting configuration (uvm_config_db::set)
 *   3. Master getting configuration (uvm_config_db::get)
 *   4. Understand hierarchical configuration lookup
 *   5. Apply configuration objects vs scalar values
 * 
 * CONFIGDB PURPOSE:
 *   - Centralized configuration database
 *   - Enables test-to-component configuration passing
 *   - Supports hierarchical lookup (global vs component-specific)
 *   - Type-safe configuration storage
 * 
 * CONFIGDB OPERATIONS:
 *   - set(): Store configuration (typically in test build_phase)
 *   - get(): Retrieve configuration (typically in component build_phase)
 *   - Lookup: Hierarchical path matching (wildcards supported)
 * 
 * CONFIGURATION TYPES:
 *   - Configuration objects: Complex objects (AgentConfig, etc.)
 *   - Scalar values: int, string, bit, etc.
 *   - Virtual interfaces: Interface handles
 * 
 * This example shows:
 * - Setting configuration values in ConfigDB
 * - Getting configuration values from ConfigDB
 * - Hierarchical configuration lookup
 * - Configuration objects vs scalar values
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================================
// CONFIGURATION OBJECT CLASS
// ============================================================================
/**
 * Configuration object class
 * 
 * CONFIGURATION OBJECT PURPOSE:
 *   - Encapsulates related configuration parameters
 *   - Type-safe configuration passing
 *   - Reusable across multiple components
 *   - Better than passing individual parameters
 * 
 * CONFIGURATION OBJECT BENEFITS:
 *   - Groups related settings together
 *   - Easy to copy and modify
 *   - Can be extended for different scenarios
 *   - Supports validation and constraints
 * 
 * USAGE PATTERN:
 *   1. Create config object in test
 *   2. Set configuration values
 *   3. Store in ConfigDB
 *   4. Components retrieve in build_phase
 */
class AgentConfig extends uvm_object;
    // ========================================================================
    // CONFIGURATION FIELDS
    // ========================================================================
    // Configuration parameters for agent
    bit active;          // Agent active/passive mode (1=active, 0=passive)
    bit has_coverage;    // Enable coverage collection (1=enabled, 0=disabled)
    int address_width;   // Address bus width in bits (e.g., 16, 32, 64)
    int data_width;      // Data bus width in bits (e.g., 8, 16, 32, 64)
    
    `uvm_object_utils(AgentConfig)
    
    // ========================================================================
    // CONSTRUCTOR WITH DEFAULTS
    // ========================================================================
    /**
     * Constructor: Initialize with default values
     * 
     * DEFAULT VALUES:
     *   - active = 1: Agent is active by default
     *   - has_coverage = 0: Coverage disabled by default
     *   - address_width = 32: 32-bit address by default
     *   - data_width = 32: 32-bit data by default
     * 
     * DEFAULT STRATEGY:
     *   - Provide sensible defaults
     *   - Allow test to override via ConfigDB
     *   - Components can use defaults if config not found
     */
    function new(string name = "AgentConfig");
        super.new(name);
        // Default configuration values
        active = 1;              // Active agent (has driver)
        has_coverage = 0;        // Coverage disabled
        address_width = 32;      // 32-bit address
        data_width = 32;         // 32-bit data
    endfunction
    
    // ========================================================================
    // CONVERT2STRING METHOD
    // ========================================================================
    /**
     * Convert configuration to string representation
     * 
     * USAGE:
     *   - Debugging: Display configuration values
     *   - Logging: Include in log messages
     *   - Debugging: Verify configuration values
     * 
     * FORMAT SPECIFIERS:
     *   - %0b: Binary without prefix (0 or 1)
     *   - %0d: Decimal without padding
     * 
     * @return Formatted string with all configuration fields
     */
    function string convert2string();
        return $sformatf("active=%0b, has_coverage=%0b, addr_width=%0d, data_width=%0d",
                         active, has_coverage, address_width, data_width);
    endfunction
    
    // ========================================================================
    // CONFIGURATION VALIDATION (EXAMPLE)
    // ========================================================================
    // 
    // VALIDATION EXAMPLE:
    //   function bit is_valid();
    //       if (address_width <= 0 || data_width <= 0) return 0;
    //       if (address_width > 64 || data_width > 64) return 0;
    //       return 1;
    //   endfunction
    // 
    // USAGE:
    //   if (!config_obj.is_valid()) begin
    //       `uvm_error("CONFIG", "Invalid configuration")
    //   end
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
        
        // ========================================================================
        // GET CONFIGURATION OBJECT FROM CONFIGDB
        // ========================================================================
        // 
        // CONFIGDB::GET SYNTAX:
        //   uvm_config_db#(TYPE)::get(contxt, inst_path, field_name, var)
        // 
        // PARAMETERS:
        //   - TYPE: Configuration type (AgentConfig, int, string, etc.)
        //   - contxt: Context component (this) - lookup starts from this component
        //   - inst_path: Instance path ("" = current component, "*" = wildcard)
        //   - field_name: Configuration field name ("agent_config")
        //   - var: Variable to receive configuration (config_obj)
        // 
        // RETURN VALUE:
        //   - Returns 1 if found, 0 if not found
        //   - Use if (!get()) to check for missing configuration
        // 
        // LOOKUP ORDER:
        //   1. Exact match: this component's path
        //   2. Wildcard match: "*" path
        //   3. Parent path: Walk up hierarchy
        //   4. Global: Root-level configuration
        if (!uvm_config_db#(AgentConfig)::get(this, "", "agent_config", config_obj)) begin
            // Configuration not found: Use defaults
            // This is common pattern: Try to get config, use defaults if not found
            `uvm_warning("CONFIGDB", "AgentConfig not found, using defaults")
            // Create default configuration object
            config_obj = AgentConfig::type_id::create("config_obj");
        end else begin
            // Configuration found: Use it
            `uvm_info("CONFIGDB", $sformatf("Got config: %s", config_obj.convert2string()), UVM_MEDIUM)
        end
        
        // ========================================================================
        // GET SCALAR CONFIGURATION VALUE (INT)
        // ========================================================================
        // 
        // SCALAR CONFIGURATION:
        //   - Simple types: int, string, bit, logic, etc.
        //   - Stored directly (not as objects)
        //   - Retrieved directly into variable
        // 
        // USAGE:
        //   - Timeout values, mode strings, enable flags, etc.
        //   - Simpler than configuration objects for simple values
        if (!uvm_config_db#(int)::get(this, "", "timeout", timeout_value)) begin
            `uvm_warning("CONFIGDB", "Timeout not found, using default")
            timeout_value = 1000;  // Default timeout value
        end else begin
            `uvm_info("CONFIGDB", $sformatf("Got timeout: %0d", timeout_value), UVM_MEDIUM)
        end
        
        // ========================================================================
        // GET STRING CONFIGURATION VALUE
        // ========================================================================
        // 
        // STRING CONFIGURATION:
        //   - String type for text configuration
        //   - Useful for mode names, file paths, etc.
        if (!uvm_config_db#(string)::get(this, "", "mode", mode)) begin
            `uvm_warning("CONFIGDB", "Mode not found, using default")
            mode = "default";  // Default mode string
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
        
        // ========================================================================
        // CREATE AND SET GLOBAL CONFIGURATION
        // ========================================================================
        // 
        // GLOBAL CONFIGURATION:
        //   - Set with "*" path: Applies to all components
        //   - Components can override with component-specific config
        //   - Useful for default configuration
        // 
        // CONFIGDB::SET SYNTAX:
        //   uvm_config_db#(TYPE)::set(contxt, inst_path, field_name, value)
        // 
        // PARAMETERS:
        //   - TYPE: Configuration type (AgentConfig, int, string, etc.)
        //   - contxt: Context component (this) - configuration scope
        //   - inst_path: Instance path ("*" = all components, "path" = specific component)
        //   - field_name: Configuration field name ("agent_config")
        //   - value: Configuration value (object, scalar, etc.)
        global_config = AgentConfig::type_id::create("global_config");
        global_config.active = 1;
        global_config.has_coverage = 1;
        global_config.address_width = 16;
        global_config.data_width = 16;
        
        // Set global configuration: "*" means all components
        // Any component can get this configuration
        uvm_config_db#(AgentConfig)::set(this, "*", "agent_config", global_config);
        `uvm_info("TEST", "Set global agent_config", UVM_MEDIUM)
        
        // ========================================================================
        // SET SCALAR CONFIGURATION VALUES (GLOBAL)
        // ========================================================================
        // Set global timeout and mode (scalar values)
        // "*" path: Available to all components
        uvm_config_db#(int)::set(this, "*", "timeout", 2000);
        uvm_config_db#(string)::set(this, "*", "mode", "test_mode");
        `uvm_info("TEST", "Set global timeout and mode", UVM_MEDIUM)
        
        // ========================================================================
        // SET CHILD-SPECIFIC CONFIGURATION
        // ========================================================================
        // 
        // COMPONENT-SPECIFIC CONFIGURATION:
        //   - Set with specific path: "child_comp"
        //   - Overrides global configuration for that component
        //   - More specific path takes precedence
        // 
        // HIERARCHICAL CONFIGURATION:
        //   - Global: "*" (lowest priority)
        //   - Component-specific: "child_comp" (higher priority)
        //   - Most specific match wins
        child_config = AgentConfig::type_id::create("child_config");
        child_config.active = 0;
        child_config.has_coverage = 0;
        child_config.address_width = 8;
        child_config.data_width = 8;
        
        // Set child-specific configuration: "child_comp" path
        // Only "child_comp" component will get this configuration
        // Other components get global configuration
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
