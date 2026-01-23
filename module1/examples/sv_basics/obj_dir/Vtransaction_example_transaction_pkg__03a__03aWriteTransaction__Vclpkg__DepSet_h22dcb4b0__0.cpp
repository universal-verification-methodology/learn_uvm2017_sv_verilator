// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_example.h for the primary calling header

#include "Vtransaction_example__pch.h"
#include "Vtransaction_example__Syms.h"
#include "Vtransaction_example_transaction_pkg__03a__03aWriteTransaction__Vclpkg.h"

Vtransaction_example_transaction_pkg__03a__03aWriteTransaction::Vtransaction_example_transaction_pkg__03a__03aWriteTransaction(Vtransaction_example__Syms* __restrict vlSymsp, std::string name)
    : Vtransaction_example_transaction_pkg__03a__03aTransaction(vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aWriteTransaction::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    ;
    this->__PVT__address = 0U;
    this->__PVT__transaction_type = std::string{"WRITE"};
}

void Vtransaction_example_transaction_pkg__03a__03aWriteTransaction::_ctor_var_reset(Vtransaction_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aWriteTransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__address = 0;
    }
