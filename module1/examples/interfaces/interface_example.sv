/**
 * Module 1 Example 1.2: Interfaces and Modports
 * Demonstrates SystemVerilog interfaces, modports, and clocking blocks.
 */

/**
 * Simple APB-like interface
 */
interface apb_if(input logic clk);
    // Interface signals
    logic        psel;
    logic        penable;
    logic        pwrite;
    logic [15:0] paddr;
    logic [31:0] pwdata;
    logic [31:0] prdata;
    logic        pready;
    
    // Note: This example demonstrates interfaces and modports.
    // For Verilator compatibility, the slave module uses individual signals
    // instead of interface ports (Verilator limitation).
    // In commercial simulators, interface ports work directly.
    
    // Modport for master (driver)
    modport master_mp(
        output psel, penable, pwrite, paddr, pwdata,
        input  prdata, pready
    );
    
    // Modport for slave (monitor)
    modport slave_mp(
        input  psel, penable, pwrite, paddr, pwdata,
        output prdata, pready
    );
endinterface

/**
 * Simple APB slave module
 * Note: Using individual signals instead of interface port for Verilator compatibility
 * Verilator doesn't support interface ports on non-top-level modules
 */
module apb_slave(
    input  logic        clk,
    input  logic        psel,
    input  logic        penable,
    input  logic        pwrite,
    input  logic [15:0] paddr,
    input  logic [31:0] pwdata,
    output logic [31:0] prdata,
    output logic        pready
);
    logic [31:0] mem [0:1023];
    
    always @(posedge clk) begin
        if (psel && penable) begin
            if (pwrite) begin
                // Write operation
                // Use proper bit range for 1024-entry array (needs 10 bits: 0-1023)
                mem[paddr[11:2]] <= pwdata;
                pready <= 1'b1;
            end else begin
                // Read operation
                prdata <= mem[paddr[11:2]];
                pready <= 1'b1;
            end
        end else begin
            pready <= 1'b0;
        end
    end
endmodule

/**
 * Test program demonstrating interface usage
 */
module interface_example;
    // Clock generation
    logic clk;
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end
    
    // Interface instantiation
    apb_if bus(clk);
    
    // DUT instantiation
    // Note: Connecting interface signals individually for Verilator compatibility
    // In a commercial simulator, we could use: apb_slave dut(bus);
    apb_slave dut(
        .clk(bus.clk),
        .psel(bus.psel),
        .penable(bus.penable),
        .pwrite(bus.pwrite),
        .paddr(bus.paddr),
        .pwdata(bus.pwdata),
        .prdata(bus.prdata),
        .pready(bus.pready)
    );
    
    initial begin
        $display("============================================================");
        $display("Module 1 Example 1.2: Interfaces and Modports");
        $display("============================================================");
        $display();
        
        // Initialize interface signals
        bus.psel = 0;
        bus.penable = 0;
        bus.pwrite = 0;
        bus.paddr = 0;
        bus.pwdata = 0;
        
        // Wait for reset
        #20;
        
        // Write operation
        $display("1. Performing write operation:");
        @(posedge bus.clk);
        bus.psel <= 1;
        bus.pwrite <= 1;
        bus.paddr <= 16'h0100;
        bus.pwdata <= 32'hDEADBEEF;
        
        @(posedge bus.clk);
        bus.penable <= 1;
        
        @(posedge bus.clk);
        while (!bus.pready) @(posedge bus.clk);
        $display("   Write: addr=0x%0h, data=0x%0h", bus.paddr, bus.pwdata);
        
        bus.psel <= 0;
        bus.penable <= 0;
        
        // Read operation
        $display();
        $display("2. Performing read operation:");
        @(posedge bus.clk);
        bus.psel <= 1;
        bus.pwrite <= 0;
        bus.paddr <= 16'h0100;
        
        @(posedge bus.clk);
        bus.penable <= 1;
        
        @(posedge bus.clk);
        while (!bus.pready) @(posedge bus.clk);
        $display("   Read: addr=0x%0h, data=0x%0h", bus.paddr, bus.prdata);
        
        bus.psel <= 0;
        bus.penable <= 0;
        
        $display();
        $display("============================================================");
        $display("Example completed successfully!");
        $display("============================================================");
        
        #50;
        $finish;
    end
endmodule
