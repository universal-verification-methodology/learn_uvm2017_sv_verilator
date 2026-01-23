// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransaction_example.h for the primary calling header

#ifndef VERILATED_VTRANSACTION_EXAMPLE_TRANSACTION_PKG__03A__03ATRANSACTION__VCLPKG_H_
#define VERILATED_VTRANSACTION_EXAMPLE_TRANSACTION_PKG__03A__03ATRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtransaction_example_transaction_pkg__03a__03aTransaction;


class Vtransaction_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__id_counter;

    // INTERNAL VARIABLES
    Vtransaction_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg(Vtransaction_example__Syms* symsp, const char* v__name);
    ~Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg();
    VL_UNCOPYABLE(Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtransaction_example__Syms;

class Vtransaction_example_transaction_pkg__03a__03aTransaction : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__id;
    IData/*31:0*/ __PVT__data;
    IData/*31:0*/ __PVT__timestamp;
    void __VnoInFunc_compare(Vtransaction_example__Syms* __restrict vlSymsp, VlClassRef<Vtransaction_example_transaction_pkg__03a__03aTransaction> rhs, CData/*0:0*/ &compare__Vfuncrtn);
    void __VnoInFunc_convert2string(Vtransaction_example__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_copy(Vtransaction_example__Syms* __restrict vlSymsp, VlClassRef<Vtransaction_example_transaction_pkg__03a__03aTransaction> rhs);
    void __VnoInFunc_get_id(Vtransaction_example__Syms* __restrict vlSymsp, IData/*31:0*/ &get_id__Vfuncrtn);
    void __VnoInFunc_set_timestamp(Vtransaction_example__Syms* __restrict vlSymsp, IData/*31:0*/ ts);
  private:
    void _ctor_var_reset(Vtransaction_example__Syms* __restrict vlSymsp);
  public:
    Vtransaction_example_transaction_pkg__03a__03aTransaction(Vtransaction_example__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransaction_example_transaction_pkg__03a__03aTransaction() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtransaction_example_transaction_pkg__03a__03aTransaction>& obj);

#endif  // guard
