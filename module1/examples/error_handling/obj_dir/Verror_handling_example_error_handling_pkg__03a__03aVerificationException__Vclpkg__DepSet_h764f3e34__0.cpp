// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Verror_handling_example.h for the primary calling header

#include "Verror_handling_example__pch.h"
#include "Verror_handling_example__Syms.h"
#include "Verror_handling_example_error_handling_pkg__03a__03aVerificationException__Vclpkg.h"

Verror_handling_example_error_handling_pkg__03a__03aVerificationException::Verror_handling_example_error_handling_pkg__03a__03aVerificationException(Verror_handling_example__Syms* __restrict vlSymsp, std::string msg, IData/*31:0*/ code) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Verror_handling_example_error_handling_pkg__03a__03aVerificationException::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__message = msg;
    this->__PVT__error_code = code;
}

void Verror_handling_example_error_handling_pkg__03a__03aVerificationException::_ctor_var_reset(Verror_handling_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Verror_handling_example_error_handling_pkg__03a__03aVerificationException::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__error_code = 0;
}
