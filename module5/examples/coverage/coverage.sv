/**
 * Module 5 Example 5.2: UVM Coverage Models
 * Demonstrates functional coverage implementation.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand functional coverage purpose and benefits
 *   2. Learn coverage model class structure (uvm_subscriber)
 *   3. Master coverage sampling (write method)
 *   4. Understand coverage data structures (associative arrays)
 *   5. Apply coverage reporting and analysis
 * 
 * COVERAGE PURPOSE:
 *   - Measure test completeness
 *   - Identify untested scenarios
 *   - Guide test generation
 *   - Ensure comprehensive verification
 * 
 * COVERAGE TYPES:
 *   - Data coverage: Unique values seen
 *   - Range coverage: Value ranges covered
 *   - Cross coverage: Combinations of values
 *   - Functional coverage: Protocol states, transitions
 * 
 * COVERAGE MODEL:
 *   - Extends uvm_subscriber (receives transactions)
 *   - Samples transactions via write() method
 *   - Tracks coverage data
 *   - Reports coverage in report_phase
 * 
 * This example shows:
 * - Coverage model class structure
 * - Coverage sampling
 * - Coverage analysis
 * - Coverage reporting
 */

`include "uvm_macros.svh"
import uvm_pkg::*;

/**
 * Transaction for coverage example
 */
class CoverageTransaction extends uvm_sequence_item;
    logic [7:0] data;
    logic [15:0] address;
    logic [7:0] command;
    
    `uvm_object_utils(CoverageTransaction)
    
    function new(string name = "CoverageTransaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("data=0x%02h, addr=0x%04h, cmd=0x%02h", 
                        data, address, command);
    endfunction
endclass

/**
 * Coverage model demonstrating functional coverage
 */
class CoverageModel extends uvm_subscriber #(CoverageTransaction);
    // Coverage data structures
    int data_coverage[logic [7:0]];  // Track unique data values
    int address_ranges[3];  // low, mid, high
    int command_coverage[logic [7:0]];  // Track unique command values
    int cross_coverage[logic [7:0]][logic [7:0]];  // (data, command) pairs
    
    // Temporary variables for reporting
    int report_data_count;
    int report_cmd_count;
    int report_cross_count;
    
    `uvm_component_utils(CoverageModel)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        address_ranges[0] = 0;  // low
        address_ranges[1] = 0;  // mid
        address_ranges[2] = 0;  // high
    endfunction
    
    // ========================================================================
    // WRITE METHOD (COVERAGE SAMPLING)
    // ========================================================================
    /**
     * Write method: Sample coverage for transaction
     * 
     * COVERAGE SAMPLING:
     *   - Called automatically when transaction received
     *   - Samples all coverage points
     *   - Updates coverage data structures
     *   - Tracks unique values and combinations
     * 
     * @param t Transaction to sample coverage for
     */
    function void write(CoverageTransaction t);
        `uvm_info("COVERAGE", $sformatf("Sampling coverage for: %s", t.convert2string()), UVM_DEBUG)
        
        // ========================================================================
        // DATA COVERAGE SAMPLING
        // ========================================================================
        // 
        // DATA COVERAGE:
        //   - Tracks unique data values seen
        //   - Associative array: data_coverage[value] = count
        //   - Counts occurrences of each value
        // 
        // COVERAGE TRACKING:
        //   - First occurrence: Initialize count to 0, then increment
        //   - Subsequent occurrences: Increment count
        //   - Tracks how many times each value seen
        // 
        // COVERAGE METRIC:
        //   - Unique values: data_coverage.num()
        //   - Total coverage: 256 possible values (8-bit)
        //   - Coverage %: (unique_values / 256) * 100
        if (!data_coverage.exists(t.data)) begin
            // First time seeing this data value
            data_coverage[t.data] = 0;  // Initialize count
        end
        data_coverage[t.data]++;  // Increment occurrence count
        
        // ========================================================================
        // ADDRESS RANGE COVERAGE SAMPLING
        // ========================================================================
        // 
        // RANGE COVERAGE:
        //   - Divides address space into ranges
        //   - Tracks coverage per range
        //   - Ensures all ranges tested
        // 
        // ADDRESS RANGES:
        //   - Low: 0x0000 - 0x3FFF (0-16383)
        //   - Mid: 0x4000 - 0x7FFF (16384-32767)
        //   - High: 0x8000 - 0xFFFF (32768-65535)
        // 
        // COVERAGE TRACKING:
        //   - Increment counter for appropriate range
        //   - Tracks how many transactions in each range
        //   - Ensures all ranges covered
        if (t.address < 16'h4000) begin
            address_ranges[0]++;  // Low range: 0x0000-0x3FFF
        end else if (t.address < 16'h8000) begin
            address_ranges[1]++;  // Mid range: 0x4000-0x7FFF
        end else begin
            address_ranges[2]++;  // High range: 0x8000-0xFFFF
        end
        
        // ========================================================================
        // COMMAND COVERAGE SAMPLING
        // ========================================================================
        // 
        // COMMAND COVERAGE:
        //   - Tracks unique command values
        //   - Similar to data coverage
        //   - Ensures all commands tested
        if (!command_coverage.exists(t.command)) begin
            command_coverage[t.command] = 0;  // Initialize count
        end
        command_coverage[t.command]++;  // Increment occurrence count
        
        // ========================================================================
        // CROSS COVERAGE SAMPLING
        // ========================================================================
        // 
        // CROSS COVERAGE:
        //   - Tracks combinations of values
        //   - 2D associative array: cross_coverage[data][command] = count
        //   - Ensures all combinations tested
        // 
        // CROSS COVERAGE PURPOSE:
        //   - Verify all data/command combinations
        //   - Identify untested combinations
        //   - Critical for protocol verification
        // 
        // COVERAGE METRIC:
        //   - Total combinations: 256 x 256 = 65,536
        //   - Unique combinations: Count of non-zero entries
        //   - Coverage %: (unique_combinations / 65536) * 100
        if (!cross_coverage[t.data].exists(t.command)) begin
            // First time seeing this (data, command) combination
            cross_coverage[t.data][t.command] = 0;  // Initialize count
        end
        cross_coverage[t.data][t.command]++;  // Increment occurrence count
        
        // ========================================================================
        // COVERAGE SAMPLING BEST PRACTICES
        // ========================================================================
        // 
        // 1. EFFICIENT DATA STRUCTURES:
        //    - Use associative arrays for sparse data
        //    - Use fixed arrays for dense data
        // 
        // 2. COVERAGE GRANULARITY:
        //    - Too fine: Too many bins, hard to achieve 100%
        //    - Too coarse: Misses important scenarios
        //    - Balance: Meaningful coverage points
        // 
        // 3. PERFORMANCE:
        //    - Sampling overhead should be minimal
        //    - Use efficient data structures
        //    - Avoid complex calculations in write()
    endfunction
    
    // ========================================================================
    // REPORT PHASE (COVERAGE REPORTING)
    // ========================================================================
    /**
     * Report phase: Generate coverage report
     * 
     * COVERAGE REPORTING:
     *   - Calculates coverage metrics
     *   - Displays coverage statistics
     *   - Identifies coverage holes
     *   - Guides test generation
     */
    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        
        // ========================================================================
        // COVERAGE METRIC CALCULATION
        // ========================================================================
        // 
        // ASSOCIATIVE ARRAY NUM() METHOD:
        //   - Returns number of entries in associative array
        //   - Counts unique keys (values seen)
        //   - Used for coverage percentage calculation
        // 
        // DATA COVERAGE METRIC:
        //   - Total possible: 256 values (8-bit data)
        //   - Unique seen: data_coverage.num()
        //   - Coverage %: (unique_seen / 256) * 100
        report_data_count = data_coverage.num();
        
        // COMMAND COVERAGE METRIC:
        //   - Total possible: 256 values (8-bit command)
        //   - Unique seen: command_coverage.num()
        //   - Coverage %: (unique_seen / 256) * 100
        report_cmd_count = command_coverage.num();
        
        // ========================================================================
        // CROSS COVERAGE METRIC CALCULATION
        // ========================================================================
        // 
        // CROSS COVERAGE:
        //   - 2D associative array: cross_coverage[data][command]
        //   - Tracks unique (data, command) pairs
        //   - Total possible: 256 x 256 = 65,536 combinations
        // 
        // COUNTING UNIQUE PAIRS:
        //   - Iterate over all data values
        //   - For each data, count unique commands
        //   - Sum all unique pairs
        // 
        // NESTED LOOP EXPLANATION:
        //   - Outer loop: foreach (cross_coverage[data])
        //     * Iterates over all data values that have been seen
        //   - Inner count: cross_coverage[data].num()
        //     * Counts unique commands for this data value
        //   - Sum: report_cross_count += ...
        //     * Accumulates total unique pairs
        report_cross_count = 0;
        foreach (cross_coverage[data]) begin
            // For each data value, count unique command values
            // 
            // EXAMPLE:
            //   cross_coverage[0x10] has commands: {0x01, 0x02, 0x03}
            //   cross_coverage[0x10].num() = 3
            //   cross_coverage[0x20] has commands: {0x01, 0x04}
            //   cross_coverage[0x20].num() = 2
            //   Total: 3 + 2 = 5 unique pairs
            report_cross_count += cross_coverage[data].num();
        end
        
        // ========================================================================
        // COVERAGE REPORT DISPLAY
        // ========================================================================
        `uvm_info("COVERAGE", "============================================================", UVM_MEDIUM)
        `uvm_info("COVERAGE", "Coverage Report", UVM_MEDIUM)
        `uvm_info("COVERAGE", "============================================================", UVM_MEDIUM)
        
        // Data coverage report
        // 
        // COVERAGE INTERPRETATION:
        //   - report_data_count: Number of unique data values seen
        //   - Maximum: 256 (all 8-bit values)
        //   - Coverage goal: 100% (all values tested)
        //   - Typical: 50-80% in constrained random tests
        `uvm_info("COVERAGE", $sformatf("Data Coverage: %0d unique values (out of 256 possible, %.1f%%)", 
                  report_data_count, (report_data_count * 100.0) / 256.0), UVM_MEDIUM)
        
        // Address range coverage report
        // 
        // RANGE COVERAGE INTERPRETATION:
        //   - address_ranges[0]: Low range transactions
        //   - address_ranges[1]: Mid range transactions
        //   - address_ranges[2]: High range transactions
        //   - Goal: All ranges covered (non-zero counts)
        //   - Identifies untested address ranges
        `uvm_info("COVERAGE", $sformatf("Address Ranges - Low: %0d, Mid: %0d, High: %0d", 
                  address_ranges[0], address_ranges[1], address_ranges[2]), UVM_MEDIUM)
        
        // Command coverage report
        `uvm_info("COVERAGE", $sformatf("Command Coverage: %0d unique values (out of 256 possible, %.1f%%)", 
                  report_cmd_count, (report_cmd_count * 100.0) / 256.0), UVM_MEDIUM)
        
        // Cross coverage report
        // 
        // CROSS COVERAGE INTERPRETATION:
        //   - report_cross_count: Number of unique (data, command) pairs
        //   - Maximum: 65,536 (all combinations)
        //   - Coverage goal: Critical combinations tested
        //   - Typical: 1-10% in constrained random tests (sparse)
        `uvm_info("COVERAGE", $sformatf("Cross Coverage: %0d unique pairs (out of 65536 possible, %.2f%%)", 
                  report_cross_count, (report_cross_count * 100.0) / 65536.0), UVM_MEDIUM)
        
        // ========================================================================
        // COVERAGE ANALYSIS AND RECOMMENDATIONS
        // ========================================================================
        // 
        // COVERAGE HOLES:
        //   - Identify untested values/ranges
        //   - Generate directed tests for holes
        //   - Improve coverage with better constraints
        // 
        // COVERAGE GOALS:
        //   - Data/Command: 80-100% (high coverage)
        //   - Cross: 10-50% (critical combinations)
        //   - Ranges: All ranges covered (100%)
        // 
        // COVERAGE IMPROVEMENT:
        //   - Add constraints to cover missing values
        //   - Generate directed tests for holes
        //   - Use coverage-driven test generation
    endfunction
endclass

/**
 * Producer to generate transactions for coverage
 */
class CoverageProducer extends uvm_component;
    uvm_analysis_port #(CoverageTransaction) ap;
    
    `uvm_component_utils(CoverageProducer)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        CoverageTransaction txn;
        
        phase.raise_objection(this);
        `uvm_info("PRODUCER", "Generating transactions for coverage", UVM_MEDIUM)
        
        // Generate various transactions
        for (int i = 0; i < 10; i++) begin
            txn = CoverageTransaction::type_id::create("txn");
            txn.data = $urandom_range(0, 255);
            txn.address = $urandom_range(0, 65535);
            txn.command = $urandom_range(0, 255);
            
            `uvm_info("PRODUCER", $sformatf("Generated: %s", txn.convert2string()), UVM_MEDIUM)
            ap.write(txn);
            #10;
        end
        
        phase.drop_objection(this);
    endtask
endclass

/**
 * Test class demonstrating coverage
 */
class CoverageTest extends uvm_test;
    CoverageModel coverage;
    CoverageProducer producer;
    
    `uvm_component_utils(CoverageTest)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("TEST", "Building coverage test", UVM_MEDIUM)
        coverage = CoverageModel::type_id::create("coverage", this);
        producer = CoverageProducer::type_id::create("producer", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        producer.ap.connect(coverage.analysis_export);
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        `uvm_info("TEST", "Starting coverage test", UVM_MEDIUM)
        #200;
        phase.drop_objection(this);
    endtask
endclass

/**
 * Top-level testbench module
 */
module coverage;
    initial begin
        $display("============================================================");
        $display("UVM Coverage Example");
        $display("============================================================");
        $display();
        
        run_test("CoverageTest");
    end
endmodule
