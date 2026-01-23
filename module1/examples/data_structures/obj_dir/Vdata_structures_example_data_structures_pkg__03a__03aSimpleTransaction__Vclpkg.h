// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_structures_example.h for the primary calling header

#ifndef VERILATED_VDATA_STRUCTURES_EXAMPLE_DATA_STRUCTURES_PKG__03A__03ASIMPLETRANSACTION__VCLPKG_H_
#define VERILATED_VDATA_STRUCTURES_EXAMPLE_DATA_STRUCTURES_PKG__03A__03ASIMPLETRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdata_structures_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vdata_structures_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction__Vclpkg(Vdata_structures_example__Syms* symsp, const char* v__name);
    ~Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction__Vclpkg();
    VL_UNCOPYABLE(Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vdata_structures_example__Syms;

class Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__id;
    IData/*31:0*/ __PVT__data;
    void __VnoInFunc_convert2string(Vdata_structures_example__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdata_structures_example__Syms* __restrict vlSymsp);
  public:
    Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction(Vdata_structures_example__Syms* __restrict vlSymsp, IData/*31:0*/ id_val, IData/*31:0*/ data_val);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction>& obj);

#endif  // guard
