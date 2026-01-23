/**
 * Module 1: 8-bit Up Counter
 * 
 * An 8-bit up counter with active-low reset and enable.
 * 
 * Ports:
 *   clk:    Clock signal
 *   rst_n:  Active-low reset
 *   enable: Counter enable
 *   count:  8-bit counter output
 */

`timescale 1ns/1ps

module counter (
    input  wire       clk,
    input  wire       rst_n,
    input  wire       enable,
    output reg [7:0]  count
);

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            count <= 8'h00;
        end else if (enable) begin
            count <= count + 1;
        end
    end

endmodule
