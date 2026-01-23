/**
 * Module 5 Example 5.3: Advanced Configuration
 * Demonstrates complex configuration objects and hierarchy.
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
    
    function void do_copy(uvm_object rhs);
        AgentConfig cfg;
        if (!$cast(cfg, rhs)) return;
        super.do_copy(rhs);
        active = cfg.active;
        has_coverage = cfg.has_coverage;
        address_width = cfg.address_width;
        data_width = cfg.data_width;
        timeout = cfg.timeout;
        mode = cfg.mode;
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
