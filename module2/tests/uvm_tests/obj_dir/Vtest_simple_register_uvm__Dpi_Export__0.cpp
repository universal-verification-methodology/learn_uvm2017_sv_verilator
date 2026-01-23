// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vtest_simple_register_uvm.h"
#include "Vtest_simple_register_uvm__Syms.h"
#include "verilated_dpi.h"


void Vtest_simple_register_uvm::m__uvm_report_dpi(int severity, const char* id, const char* message, int verbosity, const char* filename, int line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simple_register_uvm___024root::m__uvm_report_dpi\n"); );
    // Locals
    IData/*31:0*/ severity__Vcvt;
    severity__Vcvt = 0;
    static thread_local std::string id__Vcvt;
    static thread_local std::string message__Vcvt;
    IData/*31:0*/ verbosity__Vcvt;
    verbosity__Vcvt = 0;
    static thread_local std::string filename__Vcvt;
    IData/*31:0*/ line__Vcvt;
    line__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("m___05Fuvm_report_dpi");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtest_simple_register_uvm__Vcb_m___05Fuvm_report_dpi_t __Vcb = reinterpret_cast<Vtest_simple_register_uvm__Vcb_m___05Fuvm_report_dpi_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    severity__Vcvt = (severity);
    id__Vcvt = VL_CVT_N_CSTR(id);
    message__Vcvt = VL_CVT_N_CSTR(message);
    verbosity__Vcvt = (verbosity);
    filename__Vcvt = VL_CVT_N_CSTR(filename);
    line__Vcvt = (line);
    (*__Vcb)((Vtest_simple_register_uvm__Syms*)(__Vscopep->symsp()), severity__Vcvt, id__Vcvt, message__Vcvt, verbosity__Vcvt, filename__Vcvt, line__Vcvt);
}
