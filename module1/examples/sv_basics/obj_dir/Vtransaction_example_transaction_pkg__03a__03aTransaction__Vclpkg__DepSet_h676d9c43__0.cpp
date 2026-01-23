// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_example.h for the primary calling header

#include "Vtransaction_example__pch.h"
#include "Vtransaction_example__Syms.h"
#include "Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg.h"

Vtransaction_example_transaction_pkg__03a__03aTransaction::Vtransaction_example_transaction_pkg__03a__03aTransaction(Vtransaction_example__Syms* __restrict vlSymsp, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aTransaction::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    vlSymsp->TOP__transaction_pkg__03a__03aTransaction__Vclpkg.__PVT__id_counter 
        = ((IData)(1U) + vlSymsp->TOP__transaction_pkg__03a__03aTransaction__Vclpkg.__PVT__id_counter);
    this->__PVT__id = vlSymsp->TOP__transaction_pkg__03a__03aTransaction__Vclpkg.__PVT__id_counter;
    this->__PVT__data = 0U;
    this->__PVT__timestamp = 0U;
}

void Vtransaction_example_transaction_pkg__03a__03aTransaction::__VnoInFunc_copy(Vtransaction_example__Syms* __restrict vlSymsp, VlClassRef<Vtransaction_example_transaction_pkg__03a__03aTransaction> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aTransaction::__VnoInFunc_copy\n"); );
    // Body
    {
        if (VL_UNLIKELY(((VlNull{} == rhs)))) {
            VL_WRITEF_NX("[%0t] %%Error: transaction.sv:43: Assertion failed in %Ntransaction_pkg.Transaction.copy: Copy failed: null pointer\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("transaction.sv", 43, "");
            goto __Vlabel1;
        }
        this->__PVT__id = VL_NULL_CHECK(rhs, "transaction.sv", 46)
            ->__PVT__id;
        this->__PVT__data = VL_NULL_CHECK(rhs, "transaction.sv", 47)
            ->__PVT__data;
        this->__PVT__timestamp = VL_NULL_CHECK(rhs, "transaction.sv", 48)
            ->__PVT__timestamp;
        __Vlabel1: ;
    }
}

void Vtransaction_example_transaction_pkg__03a__03aTransaction::_ctor_var_reset(Vtransaction_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aTransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__id = 0;
    __PVT__data = 0;
    __PVT__timestamp = 0;
}
