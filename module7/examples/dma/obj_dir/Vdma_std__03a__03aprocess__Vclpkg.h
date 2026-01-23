// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VDMA_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_std__03a__03aprocess;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_std__03a__03aprocess__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_std__03a__03aprocess__Vclpkg();
    ~Vdma_std__03a__03aprocess__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_killQueue(Vdma__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vdma_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_std__03a__03aprocess> &self__Vfuncrtn);
};


class Vdma__Syms;

class Vdma_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef __PVT__m_process;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    VlCoroutine __VnoInFunc_await(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(Vdma__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(Vdma__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_srandom(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ seed);
    void __VnoInFunc_status(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(Vdma__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_std__03a__03aprocess(Vdma__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdma_std__03a__03aprocess() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_std__03a__03aprocess>& obj);


//*** Below code from `systemc in Verilog file
// From `systemc at /usr/local/share/verilator/include/verilated_std.sv:196:21

template<> template<>
inline bool VlClassRef<Vdma_std__03a__03aprocess>::operator==(const VlClassRef<Vdma_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return true;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process == rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<Vdma_std__03a__03aprocess>::operator!=(const VlClassRef<Vdma_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return true;
    return m_objp->__PVT__m_process != rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<Vdma_std__03a__03aprocess>::operator<(const VlClassRef<Vdma_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process < rhs.m_objp->__PVT__m_process;
};
//*** Above code from `systemc in Verilog file


#endif  // guard
