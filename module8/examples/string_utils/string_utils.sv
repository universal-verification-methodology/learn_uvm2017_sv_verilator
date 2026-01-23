/**
 * Module 8 Example 8.6: String Utilities
 * Demonstrates string manipulation and formatting utilities.
 * 
 * This example shows:
 * - String manipulation
 * - String formatting
 * - String conversion
 * - String utilities
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * String utility class
 */
class StringUtils extends uvm_object;
    `uvm_object_utils(StringUtils)
    
    function new(string name = "StringUtils");
        super.new(name);
    endfunction
    
    // Convert integer to hex string
    function string int_to_hex(int value, int width = 8);
        return $sformatf("%0h", value);
    endfunction
    
    // Convert integer to binary string
    function string int_to_bin(int value, int width = 8);
        return $sformatf("%0b", value);
    endfunction
    
    // Pad string to specified width
    function string pad_string(string str, int width, string pad_char = " ");
        string result = str;
        while (result.len() < width) begin
            result = {pad_char, result};
        end
        return result;
    endfunction
    
    // Format transaction string
    function string format_transaction(string name, logic [7:0] data, logic [15:0] addr);
        return $sformatf("%s: data=0x%02h, addr=0x%04h", name, data, addr);
    endfunction
    
    // Extract field from formatted string
    function string extract_field(string formatted_str, string field_name);
        // Simple extraction - in real implementation would use regex
        int pos = formatted_str.find(field_name);
        if (pos >= 0) begin
            int start = formatted_str.find("=", pos) + 1;
            int end = formatted_str.find(",", start);
            if (end < 0) end = formatted_str.len();
            return formatted_str.substr(start, end - 1);
        end
        return "";
    endfunction
endclass

/**
 * Test for string utilities
 */
class StringUtilsTest extends uvm_test;
    StringUtils str_utils;
    
    `uvm_component_utils(StringUtilsTest)
    
    function new(string name = "StringUtilsTest", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        str_utils = StringUtils::type_id::create("str_utils");
    endfunction
    
    task run_phase(uvm_phase phase);
        string hex_str, bin_str, padded_str, formatted_str;
        phase.raise_objection(this);
        
        `uvm_info("STRING", "Testing string utilities", UVM_LOW)
        
        // Test integer to hex conversion
        hex_str = str_utils.int_to_hex(255);
        `uvm_info("STRING", $sformatf("int_to_hex(255) = %s", hex_str), UVM_MEDIUM)
        
        // Test integer to binary conversion
        bin_str = str_utils.int_to_bin(15);
        `uvm_info("STRING", $sformatf("int_to_bin(15) = %s", bin_str), UVM_MEDIUM)
        
        // Test string padding
        padded_str = str_utils.pad_string("test", 10, "0");
        `uvm_info("STRING", $sformatf("pad_string('test', 10, '0') = '%s'", padded_str), UVM_MEDIUM)
        
        // Test transaction formatting
        formatted_str = str_utils.format_transaction("TXN", 8'hAA, 16'h1234);
        `uvm_info("STRING", $sformatf("format_transaction() = %s", formatted_str), UVM_MEDIUM)
        
        // Test field extraction
        string data_field = str_utils.extract_field(formatted_str, "data");
        `uvm_info("STRING", $sformatf("extract_field('data') = %s", data_field), UVM_MEDIUM)
        
        #100;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level module for string utilities example
 */
module string_utils_top;
    import uvm_pkg::*;
    
    initial begin
        run_test("StringUtilsTest");
    end
endmodule
