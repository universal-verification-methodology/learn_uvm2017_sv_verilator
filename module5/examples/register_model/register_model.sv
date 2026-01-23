/**
 * Module 5 Example 5.5: UVM Register Model
 * Demonstrates register model basics.
 * 
 * This example shows:
 * - Register model structure
 * - Register blocks, registers, fields
 * - Register read/write operations
 * - Simplified register model (full implementation requires uvm_reg)
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Simplified register field
 */
class RegisterField extends uvm_object;
    string name;
    int unsigned offset;
    int unsigned width;
    logic [31:0] value;
    
    `uvm_object_utils(RegisterField)
    
    function new(string name = "RegisterField");
        super.new(name);
        this.name = name;
        offset = 0;
        width = 8;
        value = 0;
    endfunction
    
    function string convert2string();
        return $sformatf("%s[%0d:%0d]=0x%08h", name, offset+width-1, offset, value);
    endfunction
endclass

/**
 * Simplified register
 */
class Register extends uvm_object;
    string name;
    logic [31:0] address;
    RegisterField fields[$];
    logic [31:0] value;
    
    `uvm_object_utils(Register)
    
    function new(string name = "Register");
        super.new(name);
        this.name = name;
        address = 0;
        value = 0;
    endfunction
    
    function void add_field(RegisterField field);
        fields.push_back(field);
    endfunction
    
    function void write(logic [31:0] data);
        value = data;
        `uvm_info("REGISTER", $sformatf("Write %s: 0x%08h", name, value), UVM_MEDIUM)
        // Update field values
        foreach (fields[i]) begin
            fields[i].value = (data >> fields[i].offset) & ((1 << fields[i].width) - 1);
        end
    endfunction
    
    function logic [31:0] read();
        `uvm_info("REGISTER", $sformatf("Read %s: 0x%08h", name, value), UVM_MEDIUM)
        return value;
    endfunction
    
    function string convert2string();
        string s = $sformatf("%s @ 0x%08h = 0x%08h", name, address, value);
        foreach (fields[i]) begin
            s = {s, $sformatf("\n  %s", fields[i].convert2string())};
        end
        return s;
    endfunction
endclass

/**
 * Simplified register block
 */
class RegisterBlock extends uvm_object;
    string name;
    logic [31:0] base_address;
    Register registers[string];
    
    `uvm_object_utils(RegisterBlock)
    
    function new(string name = "RegisterBlock");
        super.new(name);
        this.name = name;
        base_address = 32'h0000_0000;
    endfunction
    
    function void add_register(Register reg_item);
        registers[reg_item.name] = reg_item;
        reg_item.address = base_address + (registers.num() * 4);
    endfunction
    
    function Register get_register(string name);
        if (registers.exists(name)) begin
            return registers[name];
        end else begin
            `uvm_warning("REG_BLOCK", $sformatf("Register %s not found", name))
            return null;
        end
    endfunction
    
    function void write_register(string name, logic [31:0] data);
        Register reg_item;
        reg_item = get_register(name);
        if (reg_item != null) begin
            reg_item.write(data);
        end
    endfunction
    
    function logic [31:0] read_register(string name);
        Register reg_item;
        reg_item = get_register(name);
        if (reg_item != null) begin
            return reg_item.read();
        end else begin
            return 32'h0;
        end
    endfunction
    
    function string convert2string();
        string s;
        string reg_name;
        s = $sformatf("Register Block: %s @ 0x%08h", name, base_address);
        foreach (registers[reg_name]) begin
            s = {s, $sformatf("\n  %s", registers[reg_name].convert2string())};
        end
        return s;
    endfunction
endclass

/**
 * Test class demonstrating register model
 */
class RegisterModelTest extends uvm_test;
    RegisterBlock reg_block;
    Register control_reg;
    Register status_reg;
    RegisterField field1, field2, field3;
    
    `uvm_component_utils(RegisterModelTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("TEST", "Building register model test", UVM_MEDIUM)
        
        // Create register block
        reg_block = RegisterBlock::type_id::create("reg_block");
        reg_block.base_address = 32'h1000_0000;
        
        // Create control register with fields
        control_reg = Register::type_id::create("control_reg");
        field1 = RegisterField::type_id::create("enable");
        field1.offset = 0;
        field1.width = 1;
        field2 = RegisterField::type_id::create("mode");
        field2.offset = 1;
        field2.width = 3;
        field3 = RegisterField::type_id::create("reserved");
        field3.offset = 4;
        field3.width = 28;
        
        control_reg.add_field(field1);
        control_reg.add_field(field2);
        control_reg.add_field(field3);
        reg_block.add_register(control_reg);
        
        // Create status register
        status_reg = Register::type_id::create("status_reg");
        reg_block.add_register(status_reg);
        
        `uvm_info("TEST", $sformatf("Created register block:\n%s", reg_block.convert2string()), UVM_MEDIUM)
    endfunction
    
    task run_phase(uvm_phase phase);
        logic [31:0] data;
        
        phase.raise_objection(this);
        
        `uvm_info("TEST", "Starting register model test", UVM_MEDIUM)
        
        // Write to control register
        data = 32'h0000_0007;  // enable=1, mode=3
        reg_block.write_register("control_reg", data);
        
        // Read from control register
        data = reg_block.read_register("control_reg");
        `uvm_info("TEST", $sformatf("Read control_reg: 0x%08h", data), UVM_MEDIUM)
        
        // Write to status register
        data = 32'h1234_5678;
        reg_block.write_register("status_reg", data);
        
        // Read from status register
        data = reg_block.read_register("status_reg");
        `uvm_info("TEST", $sformatf("Read status_reg: 0x%08h", data), UVM_MEDIUM)
        
        `uvm_info("TEST", $sformatf("Final register block state:\n%s", reg_block.convert2string()), UVM_MEDIUM)
        
        #100;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level testbench module
 */
module register_model;
    initial begin
        $display("============================================================");
        $display("UVM Register Model Example");
        $display("============================================================");
        $display();
        $display("Note: This is a simplified register model demonstration.");
        $display("      Full UVM register model requires uvm_reg package.");
        $display();
        
        run_test("RegisterModelTest");
    end
endmodule
