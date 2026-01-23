// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_structures_example.h for the primary calling header

#include "Vdata_structures_example__pch.h"

Vdata_structures_example_data_structures_pkg__03a__03aScoreboard::Vdata_structures_example_data_structures_pkg__03a__03aScoreboard(Vdata_structures_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aScoreboard::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vdata_structures_example_data_structures_pkg__03a__03aScoreboard::__VnoInFunc_add_expected(Vdata_structures_example__Syms* __restrict vlSymsp, IData/*31:0*/ id, IData/*31:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aScoreboard::__VnoInFunc_add_expected\n"); );
    // Body
    this->__PVT__expected_data.at(id) = data;
}

void Vdata_structures_example_data_structures_pkg__03a__03aScoreboard::__VnoInFunc_add_actual(Vdata_structures_example__Syms* __restrict vlSymsp, IData/*31:0*/ id, IData/*31:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aScoreboard::__VnoInFunc_add_actual\n"); );
    // Body
    this->__PVT__actual_data.at(id) = data;
}

void Vdata_structures_example_data_structures_pkg__03a__03aScoreboard::__VnoInFunc_check(Vdata_structures_example__Syms* __restrict vlSymsp, IData/*31:0*/ id, CData/*0:0*/ &check__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aScoreboard::__VnoInFunc_check\n"); );
    // Body
    {
        if (((0U == this->__PVT__expected_data.exists(id)) 
             | (0U == this->__PVT__actual_data.exists(id)))) {
            check__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        check__Vfuncrtn = (this->__PVT__expected_data
                           .at(id) == this->__PVT__actual_data
                           .at(id));
        __Vlabel0: ;
    }
}

void Vdata_structures_example_data_structures_pkg__03a__03aScoreboard::_ctor_var_reset(Vdata_structures_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aScoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__expected_data.atDefault() = 0;
    __PVT__actual_data.atDefault() = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aScoreboard>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aScoreboard::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdata_structures_example_data_structures_pkg__03a__03aScoreboard::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aScoreboard::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdata_structures_example_data_structures_pkg__03a__03aScoreboard::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aScoreboard::to_string_middle\n"); );
    // Body
    std::string out;
    out += "expected_data:" + VL_TO_STRING(__PVT__expected_data);
    out += ", actual_data:" + VL_TO_STRING(__PVT__actual_data);
    return (out);
}
