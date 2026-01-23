// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Verror_handling_example.h for the primary calling header

#include "Verror_handling_example__pch.h"
#include "Verror_handling_example__Syms.h"
#include "Verror_handling_example___024root.h"
#include "Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg.h"
#include "Verror_handling_example_error_handling_pkg__03a__03aVerificationException__Vclpkg.h"

VL_INLINE_OPT VlCoroutine Verror_handling_example___024root___eval_initial__TOP__Vtiming__0(Verror_handling_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root___eval_initial__TOP__Vtiming__0\n"); );
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlClassRef<Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent> error_handling_example__DOT__comp;
    VlClassRef<Verror_handling_example_error_handling_pkg__03a__03aVerificationException> error_handling_example__DOT__unnamedblk1__DOT__exc;
    std::string __Vtask_convert2string__4__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VL_WRITEF_NX("============================================================\nModule 1 Example 1.5: Error Handling and Logging\n============================================================\n\n",0);
    error_handling_example__DOT__comp = VL_NEW(Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent, vlSymsp);
    VL_WRITEF_NX("1. Reporting Levels:\n",0);
    VL_NULL_CHECK(error_handling_example__DOT__comp, "error_handling_example.sv", 97)->__VnoInFunc_demonstrate_reporting(vlSymsp);
    VL_WRITEF_NX("\n2. Retry Logic:\n",0);
    co_await VL_NULL_CHECK(error_handling_example__DOT__comp, "error_handling_example.sv", 102)->__VnoInFunc_retry_task(vlSymsp, 3U);
    VL_WRITEF_NX("\n3. Exception Handling:\n",0);
    error_handling_example__DOT__unnamedblk1__DOT__exc 
        = VL_NEW(Verror_handling_example_error_handling_pkg__03a__03aVerificationException, vlSymsp, 
                 std::string{"Test exception"}, 0x2aU);
    __Vtemp_1 = ([&]() {
            VL_NULL_CHECK(error_handling_example__DOT__unnamedblk1__DOT__exc, "error_handling_example.sv", 110)
                 ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__4__Vfuncout);
        }(), __Vtask_convert2string__4__Vfuncout);
    VL_WRITEF_NX("   Created exception: %@\n\n============================================================\nExample completed successfully!\n============================================================\n",0,
                 -1,&(__Vtemp_1));
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "error_handling_example.sv", 
                                         118);
    VL_FINISH_MT("error_handling_example.sv", 119, "");
}
