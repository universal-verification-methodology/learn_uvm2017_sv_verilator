// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Verror_handling_example.h for the primary calling header

#include "Verror_handling_example__pch.h"
#include "Verror_handling_example_error_handling_pkg__03a__03aVerificationException__Vclpkg.h"

void Verror_handling_example_error_handling_pkg__03a__03aVerificationException::__VnoInFunc_convert2string(Verror_handling_example__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Verror_handling_example_error_handling_pkg__03a__03aVerificationException::__VnoInFunc_convert2string\n"); );
    // Body
    convert2string__Vfuncrtn = VL_SFORMATF_N_NX("VerificationException: %@ (code=%0d)",0,
                                                -1,
                                                &(this->__PVT__message),
                                                32,
                                                this->__PVT__error_code) ;
}

std::string VL_TO_STRING(const VlClassRef<Verror_handling_example_error_handling_pkg__03a__03aVerificationException>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Verror_handling_example_error_handling_pkg__03a__03aVerificationException::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Verror_handling_example_error_handling_pkg__03a__03aVerificationException::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Verror_handling_example_error_handling_pkg__03a__03aVerificationException::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Verror_handling_example_error_handling_pkg__03a__03aVerificationException::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Verror_handling_example_error_handling_pkg__03a__03aVerificationException::to_string_middle\n"); );
    // Body
    std::string out;
    out += "message:" + VL_TO_STRING(__PVT__message);
    out += ", error_code:" + VL_TO_STRING(__PVT__error_code);
    return out;
}
