// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_structures_example.h for the primary calling header

#include "Vdata_structures_example__pch.h"

Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector::Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector(Vdata_structures_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector::__VnoInFunc_sample_address(Vdata_structures_example__Syms* __restrict vlSymsp, IData/*31:0*/ addr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector::__VnoInFunc_sample_address\n"); );
    // Locals
    IData/*31:0*/ __Vtemp_1;
    // Body
    if ((0U != this->__PVT__address_count.exists(addr))) {
        __Vtemp_1 = ((IData)(1U) + this->__PVT__address_count
                     .at(addr));
        this->__PVT__address_count.at(addr) = __Vtemp_1;
    } else {
        this->__PVT__address_count.at(addr) = 1U;
    }
}

void Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector::__VnoInFunc_get_coverage(Vdata_structures_example__Syms* __restrict vlSymsp, IData/*31:0*/ max_address, double &get_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector::__VnoInFunc_get_coverage\n"); );
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    CData/*0:0*/ unnamedblk1__DOT__i__Vfirst;
    unnamedblk1__DOT__i__Vfirst = 0;
    IData/*31:0*/ covered;
    covered = 0;
    covered = 0U;
    if ((0U != this->__PVT__address_count.first(unnamedblk1__DOT__i))) {
        unnamedblk1__DOT__i__Vfirst = 1U;
        while (((IData)(unnamedblk1__DOT__i__Vfirst) 
                || (0U != this->__PVT__address_count.next(unnamedblk1__DOT__i)))) {
            unnamedblk1__DOT__i__Vfirst = 0U;
            if (VL_LTS_III(32, unnamedblk1__DOT__i, max_address)) {
                covered = ((IData)(1U) + covered);
            }
        }
    }
    get_coverage__Vfuncrtn = (100.0 * (VL_ISTOR_D_I(32, covered) 
                                       / VL_ISTOR_D_I(32, max_address)));
}

void Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector::_ctor_var_reset(Vdata_structures_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__address_count.atDefault() = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector::to_string_middle\n"); );
    // Body
    std::string out;
    out += "address_count:" + VL_TO_STRING(__PVT__address_count);
    return (out);
}
