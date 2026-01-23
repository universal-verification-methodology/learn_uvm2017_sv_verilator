// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VARCHITECTURE_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_std__03a__03aprocess;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_std__03a__03aprocess__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_std__03a__03aprocess__Vclpkg();
    ~Varchitecture_std__03a__03aprocess__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_killQueue(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_std__03a__03aprocess> &self__Vfuncrtn);
};


class Varchitecture__Syms;

class Varchitecture_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef __PVT__m_process;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    VlCoroutine __VnoInFunc_await(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(Varchitecture__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(Varchitecture__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_srandom(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ seed);
    void __VnoInFunc_status(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(Varchitecture__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_std__03a__03aprocess(Varchitecture__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Varchitecture_std__03a__03aprocess() {}
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_std__03a__03aprocess>& obj);


//*** Below code from `systemc in Verilog file
// From `systemc at /usr/local/share/verilator/include/verilated_std.sv:196:21

template<> template<>
inline bool VlClassRef<Varchitecture_std__03a__03aprocess>::operator==(const VlClassRef<Varchitecture_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return true;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process == rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<Varchitecture_std__03a__03aprocess>::operator!=(const VlClassRef<Varchitecture_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return true;
    return m_objp->__PVT__m_process != rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<Varchitecture_std__03a__03aprocess>::operator<(const VlClassRef<Varchitecture_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process < rhs.m_objp->__PVT__m_process;
};
//*** Above code from `systemc in Verilog file


#endif  // guard
