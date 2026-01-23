// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Verror_handling_example.h for the primary calling header

#include "Verror_handling_example__pch.h"
#include "Verror_handling_example__Syms.h"
#include "Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg.h"

Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent::Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent(Verror_handling_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__retry_count = 0U;
    this->__PVT__max_retries = 3U;
}

VlCoroutine Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent::__VnoInFunc_retry_task(Verror_handling_example__Syms* __restrict vlSymsp, IData/*31:0*/ attempts) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent::__VnoInFunc_retry_task\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ success;
    success = 0;
    success = 0U;
    IData/*31:0*/ attempt;
    attempt = 0;
    attempt = 0U;
    while (((~ (IData)(success)) & VL_LTS_III(32, attempt, attempts))) {
        attempt = ((IData)(1U) + attempt);
        VL_WRITEF_NX("[RETRY] Attempt %0d of %0d\n",0,
                     32,attempt,32,attempts);
        co_await vlSymsp->TOP.__VdlySched.delay(0xaULL, 
                                                nullptr, 
                                                "error_handling_example.sv", 
                                                51);
        if ((0U != VL_URANDOM_RANGE_I(0U, 1U))) {
            success = 1U;
            VL_WRITEF_NX("[RETRY] Operation succeeded\n",0);
        } else {
            VL_WRITEF_NX("[RETRY] WARNING: Operation failed, retrying...\n",0);
        }
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(success)))))) {
        VL_WRITEF_NX("[RETRY] ERROR: Operation failed after all retries\n",0);
    }
}

void Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent::_ctor_var_reset(Verror_handling_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__retry_count = 0;
    __PVT__max_retries = 0;
}
