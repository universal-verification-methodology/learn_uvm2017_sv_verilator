/**
 * Module 8 Example 8.6: String Utilities
 * Demonstrates string manipulation and formatting utilities.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand string manipulation
 *   2. Learn string formatting
 *   3. Understand string conversion
 *   4. Learn string utilities
 *   5. Understand substring operations
 * 
 * STRING UTILITIES:
 *   - Integer to hex/binary conversion
 *   - String padding
 *   - Transaction formatting
 *   - Field extraction
 * 
 * This example shows:
 * - String manipulation
 * - String formatting
 * - String conversion
 * - String utilities
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================================
// STRING UTILITY CLASS
// ============================================================================
/**
 * StringUtils: String utility class
 * 
 * UTILITY PURPOSE:
 *   - Provides string manipulation functions
 *   - Format conversion
 *   - String operations
 */
class StringUtils extends uvm_object;
    `uvm_object_utils(StringUtils)
    
    function new(string name = "StringUtils");
        super.new(name);
    endfunction
    
    // ========================================================================
    // INTEGER TO HEX CONVERSION
    // ========================================================================
    /**
     * Int to hex: Convert integer to hexadecimal string
     * 
     * CONVERSION:
     *   - $sformatf("%0h", value): Format as hex
     *   - Returns hexadecimal string
     */
    function string int_to_hex(int value, int width = 8);
        // ====================================================================
        // FORMAT AS HEXADECIMAL
        // ====================================================================
        // 
        // FORMAT SPECIFIER:
        //   - %0h: Hexadecimal format (lowercase)
        //   - %0H: Hexadecimal format (uppercase)
        //   - %0: No leading zeros
        //   - Example: 255 -> "ff", 16 -> "10"
        return $sformatf("%0h", value);
        // 
        // HEX CONVERSION EXAMPLE:
        //   value = 255
        //   $sformatf("%0h", 255) -> "ff"
        //   value = 16
        //   $sformatf("%0h", 16) -> "10"
        //   value = 0
        //   $sformatf("%0h", 0) -> "0"
    endfunction
    
    // ========================================================================
    // INTEGER TO BINARY CONVERSION
    // ========================================================================
    /**
     * Int to bin: Convert integer to binary string
     * 
     * CONVERSION:
     *   - $sformatf("%0b", value): Format as binary
     *   - Returns binary string
     */
    function string int_to_bin(int value, int width = 8);
        // ====================================================================
        // FORMAT AS BINARY
        // ====================================================================
        // 
        // FORMAT SPECIFIER:
        //   - %0b: Binary format
        //   - %0: No leading zeros
        //   - Example: 15 -> "1111", 5 -> "101"
        return $sformatf("%0b", value);
        // 
        // BINARY CONVERSION EXAMPLE:
        //   value = 15
        //   $sformatf("%0b", 15) -> "1111"
        //   value = 5
        //   $sformatf("%0b", 5) -> "101"
        //   value = 0
        //   $sformatf("%0b", 0) -> "0"
    endfunction
    
    // ========================================================================
    // STRING PADDING
    // ========================================================================
    /**
     * Pad string: Pad string to specified width
     * 
     * PADDING:
     *   - Add pad_char to beginning until width reached
     *   - Left padding (pad at beginning)
     *   - Useful for formatting
     */
    function string pad_string(string str, int width, string pad_char = " ");
        string result = str;
        
        // ====================================================================
        // PAD TO WIDTH
        // ====================================================================
        // 
        // PADDING LOOP:
        //   - While result length < width: Add pad_char
        //   - Left padding: pad_char added at beginning
        //   - Example: "test" -> "000000test" (width=10, pad_char="0")
        while (result.len() < width) begin
            result = {pad_char, result};  // Prepend pad character
        end
        // 
        // PADDING EXAMPLE:
        //   str = "test", width = 10, pad_char = "0"
        //   Iteration 1: result = "0test" (len=5)
        //   Iteration 2: result = "00test" (len=6)
        //   ...
        //   Iteration 6: result = "000000test" (len=10)
        //   Result: "000000test"
        return result;
    endfunction
    
    // ========================================================================
    // TRANSACTION FORMATTING
    // ========================================================================
    /**
     * Format transaction: Format transaction as string
     * 
     * FORMATTING:
     *   - Format transaction fields
     *   - Returns formatted string
     *   - Used for logging and display
     */
    function string format_transaction(string name, logic [7:0] data, logic [15:0] addr);
        // ====================================================================
        // FORMAT TRANSACTION STRING
        // ====================================================================
        // 
        // FORMAT STRING:
        //   - Format: "name: data=0xXX, addr=0xXXXX"
        //   - Includes name, data, and address
        //   - Hexadecimal format for data and address
        return $sformatf("%s: data=0x%02h, addr=0x%04h", name, data, addr);
        // 
        // FORMAT EXAMPLE:
        //   name = "TXN", data = 0xAA, addr = 0x1234
        //   Result: "TXN: data=0xAA, addr=0x1234"
    endfunction
    
    // ========================================================================
    // FIND SUBSTRING
    // ========================================================================
    /**
     * Find substring: Find substring position in string
     * 
     * SUBSTRING SEARCH:
     *   - Search for substr in str
     *   - Returns position if found, -1 if not found
     *   - Verilator-compatible replacement for string.find
     */
    function int find_substring(string str, string substr);
        int len = str.len();
        int sublen = substr.len();
        
        // ====================================================================
        // VALIDATION
        // ====================================================================
        // 
        // VALIDATION CHECKS:
        //   - substr empty: Return -1
        //   - str shorter than substr: Return -1
        if (sublen == 0 || len < sublen) return -1;
        
        // ====================================================================
        // SEARCH FOR SUBSTRING
        // ====================================================================
        // 
        // SEARCH ALGORITHM:
        //   - Try each starting position
        //   - Compare characters
        //   - Return position if match found
        for (int i = 0; i <= len - sublen; i++) begin
            bit match = 1;
            
            // ================================================================
            // COMPARE CHARACTERS
            // ================================================================
            // 
            // CHARACTER COMPARISON:
            //   - Compare each character of substring
            //   - If all match: Found substring
            for (int j = 0; j < sublen; j++) begin
                if (str.getc(i+j) != substr.getc(j)) begin
                    match = 0;
                    break;  // Mismatch, try next position
                end
            end
            
            // ================================================================
            // CHECK MATCH
            // ================================================================
            if (match) return i;  // Found substring at position i
        end
        // 
        // SEARCH EXAMPLE:
        //   str = "data=0xAA, addr=0x1234"
        //   substr = "data"
        //   Position 0: "data" matches -> return 0
        
        return -1;  // Not found
    endfunction
    
    // ========================================================================
    // EXTRACT FIELD
    // ========================================================================
    /**
     * Extract field: Extract field value from formatted string
     * 
     * FIELD EXTRACTION:
     *   - Find field name in string
     *   - Extract value after "="
     *   - Return field value
     */
    function string extract_field(string formatted_str, string field_name);
        // Simple extraction - in real implementation would use regex
        int pos, eq_pos, start, end_pos;
        byte eq_char, space_char, comma_char, ch;
        
        // ====================================================================
        // FIND FIELD NAME
        // ====================================================================
        pos = find_substring(formatted_str, field_name);
        if (pos >= 0) begin
            // ================================================================
            // FIND "=" AFTER FIELD NAME
            // ================================================================
            // 
            // EQUAL SIGN SEARCH:
            //   - Find "=" after field name
            //   - Value follows "="
            eq_pos = -1;
            eq_char = "=";
            for (int i = pos + field_name.len(); i < formatted_str.len(); i++) begin
                if (formatted_str.getc(i) == eq_char) begin
                    eq_pos = i;
                    break;
                end
            end
            
            if (eq_pos >= 0) begin
                start = eq_pos + 1;
                
                // ============================================================
                // SKIP WHITESPACE
                // ============================================================
                // 
                // WHITESPACE SKIPPING:
                //   - Skip spaces after "="
                //   - Find start of value
                space_char = " ";
                while (start < formatted_str.len() && formatted_str.getc(start) == space_char) begin
                    start++;
                end
                
                // ============================================================
                // FIND END OF VALUE
                // ============================================================
                // 
                // END FINDING:
                //   - Find "," or space (end of value)
                //   - Extract value between start and end
                end_pos = formatted_str.len();
                comma_char = ",";
                for (int i = start; i < formatted_str.len(); i++) begin
                    ch = formatted_str.getc(i);
                    if (ch == comma_char || ch == space_char) begin
                        end_pos = i;
                        break;
                    end
                end
                
                // ============================================================
                // EXTRACT VALUE
                // ============================================================
                if (start < end_pos) begin
                    return formatted_str.substr(start, end_pos - 1);
                end
            end
        end
        // 
        // EXTRACTION EXAMPLE:
        //   formatted_str = "data=0xAA, addr=0x1234"
        //   field_name = "data"
        //   pos = 0 (found "data" at position 0)
        //   eq_pos = 4 (found "=" at position 4)
        //   start = 5 (after "=")
        //   end_pos = 9 (found "," at position 9)
        //   Result: "0xAA"
        
        return "";  // Not found
    endfunction
endclass

// ============================================================================
// TEST CLASS
// ============================================================================
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
        string hex_str, bin_str, padded_str, formatted_str, data_field;
        phase.raise_objection(this);
        
        `uvm_info("STRING", "Testing string utilities", UVM_LOW)
        
        // ====================================================================
        // TEST INTEGER TO HEX CONVERSION
        // ====================================================================
        hex_str = str_utils.int_to_hex(255);
        `uvm_info("STRING", $sformatf("int_to_hex(255) = %s", hex_str), UVM_MEDIUM)
        // 
        // HEX CONVERSION VERIFICATION:
        //   255 -> "ff" (hexadecimal)
        
        // ====================================================================
        // TEST INTEGER TO BINARY CONVERSION
        // ====================================================================
        bin_str = str_utils.int_to_bin(15);
        `uvm_info("STRING", $sformatf("int_to_bin(15) = %s", bin_str), UVM_MEDIUM)
        // 
        // BINARY CONVERSION VERIFICATION:
        //   15 -> "1111" (binary)
        
        // ====================================================================
        // TEST STRING PADDING
        // ====================================================================
        padded_str = str_utils.pad_string("test", 10, "0");
        `uvm_info("STRING", $sformatf("pad_string('test', 10, '0') = '%s'", padded_str), UVM_MEDIUM)
        // 
        // PADDING VERIFICATION:
        //   "test" (len=4) -> "000000test" (len=10, padded with "0")
        
        // ====================================================================
        // TEST TRANSACTION FORMATTING
        // ====================================================================
        formatted_str = str_utils.format_transaction("TXN", 8'hAA, 16'h1234);
        `uvm_info("STRING", $sformatf("format_transaction() = %s", formatted_str), UVM_MEDIUM)
        // 
        // FORMATTING VERIFICATION:
        //   name="TXN", data=0xAA, addr=0x1234
        //   Result: "TXN: data=0xAA, addr=0x1234"
        
        // ====================================================================
        // TEST FIELD EXTRACTION
        // ====================================================================
        data_field = str_utils.extract_field(formatted_str, "data");
        `uvm_info("STRING", $sformatf("extract_field('data') = %s", data_field), UVM_MEDIUM)
        // 
        // EXTRACTION VERIFICATION:
        //   formatted_str = "TXN: data=0xAA, addr=0x1234"
        //   field_name = "data"
        //   Result: "0xAA"
        
        #100;
        phase.drop_objection(this);
    endtask
endclass

// ============================================================================
// TOP-LEVEL MODULE
// ============================================================================
module string_utils_top;
    import uvm_pkg::*;
    
    initial begin
        run_test("StringUtilsTest");
    end
endmodule
