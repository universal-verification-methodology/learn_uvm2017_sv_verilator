/**
 * Module 5 Example 5.5: UVM Register Model
 * Demonstrates register model basics.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand register model purpose and structure
 *   2. Learn register hierarchy (block -> register -> field)
 *   3. Master register read/write operations
 *   4. Understand field extraction and manipulation
 *   5. Apply register model patterns for register verification
 * 
 * REGISTER MODEL PURPOSE:
 *   - Abstract representation of hardware registers
 *   - High-level register access (read/write)
 *   - Field-level access and manipulation
 *   - Register verification and checking
 * 
 * REGISTER HIERARCHY:
 *   - RegisterBlock: Contains multiple registers
 *   - Register: Contains multiple fields
 *   - RegisterField: Individual register field
 * 
 * REGISTER OPERATIONS:
 *   - write(): Write value to register
 *   - read(): Read value from register
 *   - Field access: Extract/modify individual fields
 * 
 * NOTE: This is a simplified register model demonstration.
 *       Full UVM register model requires uvm_reg package.
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
    
    // ========================================================================
    // WRITE METHOD
    // ========================================================================
    /**
     * Write value to register
     * 
     * WRITE OPERATION:
     *   1. Store data in register value
     *   2. Extract field values from data
     *   3. Update all field values
     * 
     * FIELD EXTRACTION:
     *   - Extract field value from register data
     *   - Use bit shifting and masking
     *   - Update field.value for each field
     * 
     * @param data 32-bit data to write to register
     */
    function void write(logic [31:0] data);
        // Store full register value
        value = data;
        `uvm_info("REGISTER", $sformatf("Write %s: 0x%08h", name, value), UVM_MEDIUM)
        
        // ========================================================================
        // FIELD VALUE EXTRACTION
        // ========================================================================
        // 
        // FIELD EXTRACTION PROCESS:
        //   1. Shift data right by field offset (align field to bit 0)
        //   2. Mask with field width (extract only field bits)
        //   3. Store in field.value
        // 
        // EXTRACTION FORMULA:
        //   field_value = (data >> offset) & ((1 << width) - 1)
        // 
        // EXAMPLE:
        //   data = 0x0000_00F7, field offset=0, width=4
        //   Shift: 0x0000_00F7 >> 0 = 0x0000_00F7
        //   Mask: 0x0000_00F7 & 0x0F = 0x07 (bits 3:0)
        // 
        // EXAMPLE:
        //   data = 0x0000_00F7, field offset=4, width=4
        //   Shift: 0x0000_00F7 >> 4 = 0x0000_000F
        //   Mask: 0x0000_000F & 0x0F = 0x0F (bits 7:4)
        foreach (fields[i]) begin
            // Extract field value from register data
            // 
            // BIT EXTRACTION:
            //   - (data >> fields[i].offset): Shift field to bit 0
            //   - ((1 << fields[i].width) - 1): Create mask for field width
            //   - & operation: Extract only field bits
            // 
            // MASK CREATION:
            //   - width=1: (1<<1)-1 = 0x1 (mask for 1 bit)
            //   - width=4: (1<<4)-1 = 0xF (mask for 4 bits)
            //   - width=8: (1<<8)-1 = 0xFF (mask for 8 bits)
            fields[i].value = (data >> fields[i].offset) & ((1 << fields[i].width) - 1);
        end
    endfunction
    
    // ========================================================================
    // READ METHOD
    // ========================================================================
    /**
     * Read value from register
     * 
     * READ OPERATION:
     *   - Returns current register value
     *   - Value reflects last write operation
     *   - Can be used for verification
     * 
     * @return Current 32-bit register value
     */
    function logic [31:0] read();
        `uvm_info("REGISTER", $sformatf("Read %s: 0x%08h", name, value), UVM_MEDIUM)
        return value;  // Return current register value
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
        
        // ========================================================================
        // REGISTER AND FIELD CREATION
        // ========================================================================
        // 
        // REGISTER CREATION:
        //   - Create register instance
        //   - Add fields to register
        //   - Register fields define register structure
        control_reg = Register::type_id::create("control_reg");
        
        // ========================================================================
        // FIELD 1: ENABLE FIELD
        // ========================================================================
        // 
        // FIELD SPECIFICATION:
        //   - Name: "enable"
        //   - Offset: 0 (bit 0)
        //   - Width: 1 (1 bit)
        //   - Position: Bits [0:0]
        // 
        // FIELD USAGE:
        //   - Enable/disable functionality
        //   - 0 = disabled, 1 = enabled
        //   - Single bit control
        field1 = RegisterField::type_id::create("enable");
        field1.offset = 0;   // Bit position 0
        field1.width = 1;    // 1 bit wide
        
        // ========================================================================
        // FIELD 2: MODE FIELD
        // ========================================================================
        // 
        // FIELD SPECIFICATION:
        //   - Name: "mode"
        //   - Offset: 1 (bit 1)
        //   - Width: 3 (3 bits)
        //   - Position: Bits [3:1]
        // 
        // FIELD USAGE:
        //   - Operation mode selection
        //   - 3 bits: 8 possible modes (0-7)
        //   - Example: mode=0 (idle), mode=1 (active), mode=2 (standby), etc.
        // 
        // BIT POSITION CALCULATION:
        //   - Offset: 1 (starts at bit 1)
        //   - Width: 3 (3 bits)
        //   - Range: [offset+width-1 : offset] = [3:1]
        field2 = RegisterField::type_id::create("mode");
        field2.offset = 1;   // Bit position 1
        field2.width = 3;    // 3 bits wide (bits 3:1)
        
        // ========================================================================
        // FIELD 3: RESERVED FIELD
        // ========================================================================
        // 
        // FIELD SPECIFICATION:
        //   - Name: "reserved"
        //   - Offset: 4 (bit 4)
        //   - Width: 28 (28 bits)
        //   - Position: Bits [31:4]
        // 
        // RESERVED FIELD:
        //   - Reserved for future use
        //   - Should be written as 0
        //   - Read value may be undefined
        // 
        // REGISTER LAYOUT:
        //   Bits [31:4]: Reserved (28 bits)
        //   Bits [3:1]:  Mode (3 bits)
        //   Bit  [0]:    Enable (1 bit)
        //   Total: 32 bits
        field3 = RegisterField::type_id::create("reserved");
        field3.offset = 4;   // Bit position 4
        field3.width = 28;   // 28 bits wide (bits 31:4)
        
        // ========================================================================
        // ADD FIELDS TO REGISTER
        // ========================================================================
        // 
        // FIELD ADDITION:
        //   - Fields added to register
        //   - Order doesn't matter (identified by offset)
        //   - Fields can overlap (not recommended)
        //   - All fields extracted on write
        control_reg.add_field(field1);  // Add enable field
        control_reg.add_field(field2);  // Add mode field
        control_reg.add_field(field3);  // Add reserved field
        
        // ========================================================================
        // ADD REGISTER TO REGISTER BLOCK
        // ========================================================================
        // 
        // REGISTER ADDITION:
        //   - Register added to register block
        //   - Address assigned automatically
        //   - Address = base_address + (register_index * 4)
        //   - First register: base_address + 0
        //   - Second register: base_address + 4
        reg_block.add_register(control_reg);
        
        // ========================================================================
        // REGISTER ADDRESS ASSIGNMENT
        // ========================================================================
        // 
        // ADDRESS CALCULATION:
        //   - base_address = 0x1000_0000
        //   - control_reg: 0x1000_0000 + (0 * 4) = 0x1000_0000
        //   - status_reg: 0x1000_0000 + (1 * 4) = 0x1000_0004
        // 
        // ADDRESS SPACING:
        //   - 4-byte spacing (32-bit registers)
        //   - Standard register map layout
        //   - Allows easy address calculation
        
        // Create status register
        status_reg = Register::type_id::create("status_reg");
        reg_block.add_register(status_reg);
        
        `uvm_info("TEST", $sformatf("Created register block:\n%s", reg_block.convert2string()), UVM_MEDIUM)
    endfunction
    
    task run_phase(uvm_phase phase);
        logic [31:0] data;
        
        phase.raise_objection(this);
        
        `uvm_info("TEST", "Starting register model test", UVM_MEDIUM)
        
        // ========================================================================
        // REGISTER WRITE OPERATION
        // ========================================================================
        // 
        // WRITE OPERATION:
        //   - Write value to register
        //   - Updates register value
        //   - Extracts and updates field values
        // 
        // DATA VALUE BREAKDOWN:
        //   data = 32'h0000_0007 = 0b0000_0000_0000_0000_0000_0000_0000_0111
        //   - Bit 0 (enable): 1 (enabled)
        //   - Bits 3:1 (mode): 011 = 3 (mode 3)
        //   - Bits 31:4 (reserved): 0 (reserved bits)
        // 
        // FIELD VALUES AFTER WRITE:
        //   - enable field (offset=0, width=1): 0x7 & 0x1 = 0x1 (bit 0)
        //   - mode field (offset=1, width=3): (0x7 >> 1) & 0x7 = 0x3 (bits 3:1)
        //   - reserved field (offset=4, width=28): (0x7 >> 4) & 0xFFFFFFF = 0x0
        data = 32'h0000_0007;  // enable=1, mode=3
        // 
        // WRITE PROCESS:
        //   1. reg_block.write_register() finds register by name
        //   2. register.write() stores data and extracts fields
        //   3. All field values updated automatically
        reg_block.write_register("control_reg", data);
        
        // ========================================================================
        // REGISTER READ OPERATION
        // ========================================================================
        // 
        // READ OPERATION:
        //   - Read current register value
        //   - Returns last written value
        //   - Used for verification (read-back check)
        // 
        // READ-BACK VERIFICATION:
        //   - Write value, then read back
        //   - Compare written vs read values
        //   - Verifies register operation
        // 
        // EXPECTED RESULT:
        //   - Should return 0x0000_0007 (last written value)
        //   - If different, indicates register issue
        data = reg_block.read_register("control_reg");
        `uvm_info("TEST", $sformatf("Read control_reg: 0x%08h", data), UVM_MEDIUM)
        
        // ========================================================================
        // READ-BACK VERIFICATION EXAMPLE
        // ========================================================================
        // 
        // VERIFICATION PATTERN:
        //   logic [31:0] written_data, read_data;
        //   written_data = 32'h0000_0007;
        //   reg_block.write_register("control_reg", written_data);
        //   read_data = reg_block.read_register("control_reg");
        //   if (written_data != read_data) begin
        //       `uvm_error("TEST", $sformatf("Read-back mismatch: wrote 0x%08h, read 0x%08h",
        //                 written_data, read_data))
        //   end
        
        // ========================================================================
        // FIELD ACCESS VERIFICATION
        // ========================================================================
        // 
        // FIELD VERIFICATION:
        //   - Verify field values after write
        //   - Check enable field: should be 1
        //   - Check mode field: should be 3
        // 
        // FIELD ACCESS EXAMPLE:
        //   RegisterField enable_field;
        //   enable_field = control_reg.fields[0];  // Get enable field
        //   if (enable_field.value != 1) begin
        //       `uvm_error("TEST", "Enable field incorrect")
        //   end
        // 
        // FIELD MODIFICATION EXAMPLE:
        //   - Can modify individual fields
        //   - Reconstruct register value from fields
        //   - Useful for field-level testing
        
        // ========================================================================
        // STATUS REGISTER WRITE/READ TEST
        // ========================================================================
        // 
        // TEST SCENARIO:
        //   - Write arbitrary value to status register
        //   - Read back and verify
        //   - Status register typically read-only in hardware
        //   - This is a simplified model (writable for demonstration)
        data = 32'h1234_5678;  // Arbitrary test value
        reg_block.write_register("status_reg", data);
        
        // Read-back verification
        // 
        // EXPECTED RESULT:
        //   - Should return 0x1234_5678
        //   - Verifies register write/read operation
        data = reg_block.read_register("status_reg");
        `uvm_info("TEST", $sformatf("Read status_reg: 0x%08h", data), UVM_MEDIUM)
        
        // ========================================================================
        // REGISTER MODEL TESTING PATTERNS
        // ========================================================================
        // 
        // PATTERN 1: Write-Read Verification
        //   - Write value, read back, compare
        //   - Verifies basic register operation
        // 
        // PATTERN 2: Field-Level Testing
        //   - Write via fields, read full register
        //   - Verify field extraction
        // 
        // PATTERN 3: Register Reset Testing
        //   - Reset register, verify default values
        //   - Check all fields reset correctly
        // 
        // PATTERN 4: Field Constraint Testing
        //   - Write invalid field values
        //   - Verify field masking/constraints
        // 
        // PATTERN 5: Register Access Testing
        //   - Test read-only, write-only, read-write
        //   - Verify access permissions
        
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
