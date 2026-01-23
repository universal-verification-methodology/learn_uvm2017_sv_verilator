// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Verror_handling_example.h for the primary calling header

#include "Verror_handling_example__pch.h"
#include "Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg.h"

void Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent::__VnoInFunc_demonstrate_reporting(Verror_handling_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent::__VnoInFunc_demonstrate_reporting\n"); );
    // Body
    VL_WRITEF_NX("[DEMO] INFO: This is an INFO message\n[DEMO] INFO: This is a MEDIUM verbosity INFO\n[DEMO] INFO: This is a HIGH verbosity INFO\n[DEMO] WARNING: This is a WARNING message\n[DEMO] ERROR: This is an ERROR message\n",0);
}

std::string VL_TO_STRING(const VlClassRef<Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent::to_string_middle\n"); );
    // Body
    std::string out;
    out += "retry_count:" + VL_TO_STRING(__PVT__retry_count);
    out += ", max_retries:" + VL_TO_STRING(__PVT__max_retries);
    return out;
}
