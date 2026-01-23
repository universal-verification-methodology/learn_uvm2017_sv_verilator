// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_structures_example.h for the primary calling header

#include "Vdata_structures_example__pch.h"
#include "Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction__Vclpkg.h"

void Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction::__VnoInFunc_convert2string(Vdata_structures_example__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction::__VnoInFunc_convert2string\n"); );
    // Body
    convert2string__Vfuncrtn = VL_SFORMATF_N_NX("id=%0d, data=0x%0x",0,
                                                32,
                                                this->__PVT__id,
                                                32,
                                                this->__PVT__data) ;
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
    return out;
}
