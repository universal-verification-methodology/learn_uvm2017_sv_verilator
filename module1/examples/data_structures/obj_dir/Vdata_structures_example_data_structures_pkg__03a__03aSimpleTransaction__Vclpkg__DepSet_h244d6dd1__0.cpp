// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_structures_example.h for the primary calling header

#include "Vdata_structures_example__pch.h"
#include "Vdata_structures_example__Syms.h"
#include "Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction__Vclpkg.h"

Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction::Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction(Vdata_structures_example__Syms* __restrict vlSymsp, IData/*31:0*/ id_val, IData/*31:0*/ data_val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__id = id_val;
    this->__PVT__data = data_val;
}

void Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction::_ctor_var_reset(Vdata_structures_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__id = 0;
    __PVT__data = 0;
}
