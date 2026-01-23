// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_std__03a__03asemaphore__Vclpkg();
    ~Vclass_hierarchy_std__03a__03asemaphore__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vclass_hierarchy__Syms;

class Vclass_hierarchy_std__03a__03asemaphore : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    VlCoroutine __VnoInFunc_get(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_std__03a__03asemaphore(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vclass_hierarchy_std__03a__03asemaphore() {}
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_std__03a__03asemaphore>& obj);

#endif  // guard
