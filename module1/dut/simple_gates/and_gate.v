/**
 * Module 1: Simple AND Gate
 * 
 * A basic 2-input AND gate for verification examples.
 * 
 * Ports:
 *   a, b: Input signals
 *   y:    Output signal
 */

`timescale 1ns/1ps

module and_gate (
    input  wire a,
    input  wire b,
    output reg  y
);

    always @(*) begin
        y = a & b;
    end

endmodule
