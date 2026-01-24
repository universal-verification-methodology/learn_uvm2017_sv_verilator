/**
 * Module 5 Example 5.3: Advanced Configuration
 * Demonstrates complex configuration objects and hierarchy.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand complex configuration object design
 *   2. Learn configuration hierarchy (nested objects)
 *   3. Master component-specific configuration
 *   4. Understand configuration copy operations
 *   5. Apply advanced configuration patterns
 * 
 * ADVANCED CONFIGURATION:
 *   - Complex objects with nested configurations
 *   - Hierarchical configuration (env -> agent -> component)
 *   - Component-specific overrides
 *   - Configuration inheritance and defaults
 * 
 * CONFIGURATION HIERARCHY:
 *   - EnvConfig: Top-level configuration
 *   - AgentConfig: Agent-specific configuration
 *   - Component-specific: Override agent config per component
 * 
 * This example shows:
 * - Complex configuration objects
 * - Configuration hierarchy
 * - Resource database usage
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Complex configuration object
 */
class AgentConfig extends uvm_object;
    bit active;
    bit has_coverage;
    int address_width;
    int data_width;
    int timeout;
    string mode;
    
    `uvm_object_utils(AgentConfig)
    
    function new(string name = "AgentConfig");
        super.new(name);
        active = 1;
        has_coverage = 0;
        address_width = 32;
        data_width = 32;
        timeout = 1000;
        mode = "default";
    endfunction
    
    function string convert2string();
        return $sformatf("active=%0b, coverage=%0b, addr_w=%0d, data_w=%0d, timeout=%0d, mode=%s",
                         active, has_coverage, address_width, data_width, timeout, mode);
    endfunction
    
    // ========================================================================
    // DO_COPY METHOD (CONFIGURATION COPY)
    // ========================================================================
    /**
     * Deep copy implementation for configuration object
     * 
     * CONFIGURATION COPY:
     *   - Creates independent copy of configuration
     *   - All fields copied (deep copy)
     *   - Used for configuration inheritance
     * 
     * COPY USAGE:
     *   - Create configuration variants
     *   - Base configuration + modifications
     *   - Configuration templates
     */
    function void do_copy(uvm_object rhs);
        AgentConfig cfg;
        
        // Type cast: Convert uvm_object to AgentConfig
        if (!$cast(cfg, rhs)) return;  // Exit if type mismatch
        
        // Call parent do_copy (copies base class fields)
        super.do_copy(rhs);
        
        // Copy all configuration fields
        // 
        // FIELD COPYING:
        //   - Copy all scalar fields
        //   - Deep copy: Copy values, not references
        //   - Ensures independent configuration objects
        active = cfg.active;              // Copy active flag
        has_coverage = cfg.has_coverage;  // Copy coverage flag
        address_width = cfg.address_width; // Copy address width
        data_width = cfg.data_width;      // Copy data width
        timeout = cfg.timeout;            // Copy timeout value
        mode = cfg.mode;                  // Copy mode string
        
        // ========================================================================
        // CONFIGURATION COPY USAGE EXAMPLES
        // ========================================================================
        // 
        // CONFIGURATION TEMPLATE:
        //   AgentConfig base_cfg, derived_cfg;
        //   base_cfg = AgentConfig::type_id::create("base");
        //   base_cfg.active = 1;
        //   base_cfg.address_width = 32;
        //   
        //   derived_cfg = AgentConfig::type_id::create("derived");
        //   derived_cfg.copy(base_cfg);  // Copy base configuration
        //   derived_cfg.address_width = 16;  // Override specific field
        // 
        // CONFIGURATION INHERITANCE:
        //   - Start with base configuration
        //   - Copy and modify for specific use case
        //   - Reduces configuration code duplication
    endfunction
endclass

/**
 * Environment configuration
 */
class EnvConfig extends uvm_object;
    AgentConfig master_config;
    AgentConfig slave_config;
    int num_agents;
    
    `uvm_object_utils(EnvConfig)
    
    function new(string name = "EnvConfig");
        super.new(name);
        master_config = AgentConfig::type_id::create("master_config");
        slave_config = AgentConfig::type_id::create("slave_config");
        num_agents = 2;
    endfunction
    
    function string convert2string();
        return $sformatf("num_agents=%0d, master=[%s], slave=[%s]",
                         num_agents, master_config.convert2string(), slave_config.convert2string());
    endfunction
endclass

/**
 * Component using configuration
 */
class ConfigurableComponent extends uvm_component;
    AgentConfig cfg;
    
    `uvm_component_utils(ConfigurableComponent)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // Get configuration from ConfigDB
        if (!uvm_config_db#(AgentConfig)::get(this, "", "agent_config", cfg)) begin
            `uvm_warning("CONFIG", "AgentConfig not found, using defaults")
            cfg = AgentConfig::type_id::create("cfg");
        end else begin
            `uvm_info("CONFIG", $sformatf("Got config: %s", cfg.convert2string()), UVM_MEDIUM)
        end
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        `uvm_info("COMPONENT", $sformatf("Using config: %s", cfg.convert2string()), UVM_MEDIUM)
        #10;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Test class demonstrating advanced configuration
 */
class ConfigurationTest extends uvm_test;
    EnvConfig env_config;
    ConfigurableComponent master_comp;
    ConfigurableComponent slave_comp;
    
    `uvm_component_utils(ConfigurationTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // Create and configure environment configuration
        env_config = EnvConfig::type_id::create("env_config");
        env_config.master_config.active = 1;
        env_config.master_config.has_coverage = 1;
        env_config.master_config.address_width = 16;
        env_config.master_config.data_width = 16;
        env_config.master_config.timeout = 2000;
        env_config.master_config.mode = "master_mode";
        
        env_config.slave_config.active = 1;
        env_config.slave_config.has_coverage = 0;
        env_config.slave_config.address_width = 8;
        env_config.slave_config.data_width = 8;
        env_config.slave_config.timeout = 500;
        env_config.slave_config.mode = "slave_mode";
        
        // Set configuration in ConfigDB
        uvm_config_db#(AgentConfig)::set(this, "master_comp", "agent_config", env_config.master_config);
        uvm_config_db#(AgentConfig)::set(this, "slave_comp", "agent_config", env_config.slave_config);
        
        `uvm_info("TEST", $sformatf("Set configuration: %s", env_config.convert2string()), UVM_MEDIUM)
        
        // Create components (they will get config in their build_phase)
        master_comp = ConfigurableComponent::type_id::create("master_comp", this);
        slave_comp = ConfigurableComponent::type_id::create("slave_comp", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        `uvm_info("TEST", "Starting configuration test", UVM_MEDIUM)
        #50;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level testbench module
 */
module configuration;
    initial begin
        $display("============================================================");
        $display("UVM Advanced Configuration Example");
        $display("============================================================");
        $display();
        
        run_test("ConfigurationTest");
    end
endmodule
