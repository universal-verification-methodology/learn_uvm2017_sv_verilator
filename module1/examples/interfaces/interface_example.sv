/**
 * Module 1 Example 1.2: Interfaces and Modports
 * Demonstrates SystemVerilog interfaces, modports, and clocking blocks.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand SystemVerilog interfaces and their benefits
 *   2. Master modports for signal direction control
 *   3. Learn APB protocol implementation
 *   4. Understand interface vs module differences
 *   5. Apply interfaces to bus protocol modeling
 * 
 * INTERFACE CONCEPTS:
 *   - Interface: Bundles related signals together
 *   - Modport: Defines signal directions from module perspective
 *   - Clocking Block: Synchronous signal sampling (not shown here)
 *   - Virtual Interface: Interface handles for class-based testbenches
 * 
 * APB PROTOCOL:
 *   - Advanced Peripheral Bus (ARM AMBA specification)
 *   - Simple, low-power bus protocol
 *   - Two-phase transactions: Setup and Enable
 *   - Used for peripheral communication
 * 
 * VERILATOR CONSIDERATIONS:
 *   - Verilator has limited interface support
 *   - Interface ports on non-top modules not fully supported
 *   - Workaround: Connect interface signals individually
 * 
 * UVM RELATIONSHIP:
 *   - Interfaces used with uvm_analysis_port for TLM
 *   - Virtual interfaces used in UVM drivers and monitors
 *   - Modports essential for UVM VIP (Verification IP)
 */

// ============================================================================
// INTERFACE DECLARATION
// ============================================================================
/**
 * Simple APB-like interface
 * 
 * Interfaces bundle related signals together and provide a clean way to
 * connect modules. This interface implements an APB (Advanced Peripheral Bus)
 * protocol with master and slave modports.
 * 
 * INTERFACE BENEFITS:
 *   - Signal bundling: Related signals grouped together
 *   - Type safety: Interface ensures consistent signal usage
 *   - Modports: Control signal directions per module
 *   - Reusability: Same interface used by multiple modules
 * 
 * APB Protocol Signals:
 *   - psel: Peripheral select (indicates transaction start)
 *   - penable: Peripheral enable (indicates data phase)
 *   - pwrite: Write/read direction (1=write, 0=read)
 *   - paddr: Address bus (16-bit)
 *   - pwdata: Write data bus (32-bit, master->slave)
 *   - prdata: Read data bus (32-bit, slave->master)
 *   - pready: Ready signal (slave indicates completion)
 * 
 * PROTOCOL TIMING:
 *   - Setup Phase: psel=1, address/data valid
 *   - Enable Phase: penable=1, data transfer occurs
 *   - Completion: pready=1 indicates transfer complete
 */
interface apb_if(input logic clk);
    // Interface signals: all signals declared here are part of the interface
    // These signals are shared by all modules connected to this interface
    
    // Control signals (1-bit each)
    logic        psel;      // Peripheral select: master asserts to start transaction
    logic        penable;   // Peripheral enable: master asserts in data phase
    logic        pwrite;    // Write/read direction: 1=write, 0=read
    
    // Address and data buses
    logic [15:0] paddr;     // 16-bit address bus (64KB address space)
    logic [31:0] pwdata;    // 32-bit write data bus (master to slave)
    logic [31:0] prdata;    // 32-bit read data bus (slave to master)
    logic        pready;    // Ready signal: slave asserts when transaction complete
    
    // Note: This example demonstrates interfaces and modports.
    // For Verilator compatibility, the slave module uses individual signals
    // instead of interface ports (Verilator limitation).
    // In commercial simulators, interface ports work directly.
    
    /**
     * Modport for master (driver)
     * 
     * Modports define signal directions from a module's perspective.
     * The master modport defines which signals the master drives (output)
     * and which it receives (input).
     */
    modport master_mp(
        // Master drives these signals (outputs from master's perspective)
        output psel, penable, pwrite, paddr, pwdata,  // Control and write data
        // Master receives these signals (inputs to master's perspective)
        input  prdata, pready  // Read data and ready status
    );
    
    /**
     * Modport for slave (receiver)
     * 
     * The slave modport defines which signals the slave drives (output)
     * and which it receives (input). Opposite of master modport.
     */
    modport slave_mp(
        // Slave receives these signals (inputs from slave's perspective)
        input  psel, penable, pwrite, paddr, pwdata,  // Control and write data
        // Slave drives these signals (outputs from slave's perspective)
        output prdata, pready  // Read data and ready status
    );
endinterface  // End of interface definition

/**
 * Simple APB slave module
 * 
 * This module implements an APB slave with a 1KB memory (1024 x 32-bit words).
 * It responds to APB read and write transactions.
 * 
 * Note: Using individual signals instead of interface port for Verilator compatibility
 * Verilator doesn't support interface ports on non-top-level modules.
 * In commercial simulators, we could use: module apb_slave(apb_if.slave_mp bus);
 */
module apb_slave(
    // Port declarations: individual signals instead of interface
    input  logic        clk,      // Clock signal (positive edge triggered)
    input  logic        psel,     // Peripheral select (from master)
    input  logic        penable,  // Peripheral enable (from master)
    input  logic        pwrite,   // Write/read direction (1=write, 0=read)
    input  logic [15:0] paddr,    // 16-bit address bus (from master)
    input  logic [31:0] pwdata,   // 32-bit write data (from master)
    output logic [31:0] prdata,   // 32-bit read data (to master)
    output logic        pready    // Ready signal (to master)
);
    // Memory array: 1024 entries, each 32 bits wide
    // 'logic [31:0] mem [0:1023]' means: array of 1024 elements, each 32 bits
    // Index range: 0 to 1023 (requires 10 address bits)
    logic [31:0] mem [0:1023];
    
    // Sequential logic: executes on positive clock edge
    always @(posedge clk) begin
        // Check if transaction is active (both psel and penable asserted)
        // '&&' is logical AND: both must be 1 for transaction to be active
        if (psel && penable) begin
            // Transaction is active: perform read or write operation
            // Check transaction direction
            if (pwrite) begin
                // Write operation: store data to memory
                // Address indexing: paddr[11:2] extracts bits 11-2 (10 bits for 1024 entries)
                // This converts byte address to word address (4-byte words)
                // Example: address 0x0100 (byte) -> index 0x40 (word)
                mem[paddr[11:2]] <= pwdata;  // Write data to memory location
                // Assert ready signal to indicate write complete
                pready <= 1'b1;  // '1'b1' is 1-bit binary literal (value 1)
            end else begin
                // Read operation: retrieve data from memory
                // Read from memory location indexed by address bits [11:2]
                prdata <= mem[paddr[11:2]];  // Read data from memory location
                // Assert ready signal to indicate read complete
                pready <= 1'b1;
            end
        end else begin
            // Transaction not active: deassert ready signal
            // This indicates the slave is not ready (idle state)
            pready <= 1'b0;  // '1'b0' is 1-bit binary literal (value 0)
        end
    end  // End of always block
endmodule  // End of apb_slave module

/**
 * Test program demonstrating interface usage
 * 
 * This module demonstrates:
 * - Interface instantiation and connection
 * - APB protocol write and read transactions
 * - Clock generation and synchronization
 */
module interface_example;
    // Clock generation: creates a free-running clock signal
    logic clk;  // Clock signal declaration
    // 'initial' block: executes once at simulation start
    initial begin
        // Initialize clock to 0 (low)
        clk = 0;
        // 'forever' loop: runs indefinitely (until simulation ends)
        // '#5' waits 5 time units, '~clk' inverts clock value
        // This creates a clock with period = 10 time units (5 low, 5 high)
        forever #5 clk = ~clk;  // Toggle clock every 5 time units
    end
    
    // Interface instantiation: create an instance of the APB interface
    // 'apb_if bus(clk)' creates interface instance named 'bus'
    // The clock signal is passed to the interface (required parameter)
    apb_if bus(clk);
    
    // DUT (Device Under Test) instantiation: connect APB slave module
    // Note: Connecting interface signals individually for Verilator compatibility
    // In a commercial simulator, we could use: apb_slave dut(bus);
    apb_slave dut(
        // Connect each signal from interface to module port
        // '.clk(bus.clk)' means: connect port 'clk' to signal 'bus.clk'
        .clk(bus.clk),        // Connect clock signal
        .psel(bus.psel),      // Connect peripheral select
        .penable(bus.penable), // Connect peripheral enable
        .pwrite(bus.pwrite),   // Connect write/read direction
        .paddr(bus.paddr),     // Connect address bus
        .pwdata(bus.pwdata),   // Connect write data bus
        .prdata(bus.prdata),   // Connect read data bus
        .pready(bus.pready)    // Connect ready signal
    );
    
    // Test program: 'initial' block executes once at simulation start
    initial begin
        // Display section header for test output
        $display("============================================================");
        $display("Module 1 Example 1.2: Interfaces and Modports");
        $display("============================================================");
        $display();  // Empty line
        
        // Initialize interface signals to known values
        // Using blocking assignment (=) for initialization (combinational)
        bus.psel = 0;      // Deassert peripheral select (idle state)
        bus.penable = 0;   // Deassert peripheral enable (idle state)
        bus.pwrite = 0;    // Set direction to read (default)
        bus.paddr = 0;     // Set address to 0
        bus.pwdata = 0;   // Set write data to 0
        
        // Wait for reset/stabilization period
        // '#20' waits 20 time units (2 clock cycles)
        #20;
        
        // Test 1: Write operation (APB write transaction)
        $display("1. Performing write operation:");
        // Wait for next positive clock edge (synchronize to clock)
        // '@(posedge bus.clk)' waits until clock transitions from 0 to 1
        @(posedge bus.clk);
        // Setup phase: assert control signals and set address/data
        // Using non-blocking assignment (<=) for sequential logic
        bus.psel <= 1;              // Assert peripheral select (start transaction)
        bus.pwrite <= 1;            // Set direction to write (1 = write)
        bus.paddr <= 16'h0100;      // Set address to 0x0100 (256 in decimal)
        bus.pwdata <= 32'hDEADBEEF; // Set write data to 0xDEADBEEF
        
        // Wait for next clock edge (setup phase complete)
        @(posedge bus.clk);
        // Enable phase: assert penable to enter data phase
        bus.penable <= 1;  // Assert peripheral enable (data phase active)
        
        // Wait for next clock edge
        @(posedge bus.clk);
        // Wait for slave to assert pready (transaction complete)
        // 'while (!bus.pready)' loops until pready is 1
        // '@(posedge bus.clk)' waits for clock edge each iteration
        while (!bus.pready) @(posedge bus.clk);
        // Display write transaction information
        $display("   Write: addr=0x%0h, data=0x%0h", bus.paddr, bus.pwdata);
        
        // Deassert control signals (end transaction)
        bus.psel <= 0;      // Deassert peripheral select
        bus.penable <= 0;   // Deassert peripheral enable
        
        // Test 2: Read operation (APB read transaction)
        $display();  // Empty line
        $display("2. Performing read operation:");
        // Wait for next positive clock edge
        @(posedge bus.clk);
        // Setup phase: assert control signals and set address
        bus.psel <= 1;          // Assert peripheral select (start transaction)
        bus.pwrite <= 0;        // Set direction to read (0 = read)
        bus.paddr <= 16'h0100;  // Set address to 0x0100 (same as write)
        
        // Wait for next clock edge
        @(posedge bus.clk);
        // Enable phase: assert penable to enter data phase
        bus.penable <= 1;  // Assert peripheral enable (data phase active)
        
        // Wait for next clock edge
        @(posedge bus.clk);
        // Wait for slave to assert pready and provide read data
        while (!bus.pready) @(posedge bus.clk);
        // Display read transaction information
        // 'bus.prdata' contains the data read from memory
        $display("   Read: addr=0x%0h, data=0x%0h", bus.paddr, bus.prdata);
        
        // Deassert control signals (end transaction)
        bus.psel <= 0;      // Deassert peripheral select
        bus.penable <= 0;   // Deassert peripheral enable
        
        // Display completion message
        $display();
        $display("============================================================");
        $display("Example completed successfully!");
        $display("============================================================");
        
        // Wait 50 time units before finishing
        #50;
        // Terminate simulation
        $finish;
    end  // End of initial block
endmodule  // End of interface_example module
