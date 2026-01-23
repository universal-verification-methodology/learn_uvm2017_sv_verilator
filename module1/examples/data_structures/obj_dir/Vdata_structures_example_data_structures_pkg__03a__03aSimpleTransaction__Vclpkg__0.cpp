// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_structures_example.h for the primary calling header

#include "Vdata_structures_example__pch.h"

Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction::Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction(Vdata_structures_example__Syms* __restrict vlSymsp, IData/*31:0*/ id_val, IData/*31:0*/ data_val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__id = id_val;
    this->__PVT__data = data_val;
}

void Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction::__VnoInFunc_convert2string(Vdata_structures_example__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction::__VnoInFunc_convert2string\n"); );
    // Body
    convert2string__Vfuncrtn = VL_SFORMATF_N_NX("id=%0d, data=0x%0x",0,
                                                32,
                                                this->__PVT__id,
                                                32,
                                                this->__PVT__data) ;
}

void Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction::_ctor_var_reset(Vdata_structures_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__id = 0;
    __PVT__data = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "id:" + VL_TO_STRING(__PVT__id);
    out += ", data:" + VL_TO_STRING(__PVT__data);
    return (out);
}
