// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy_std__03a__03aprocess__Vclpkg::__VnoInFunc_self(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_std__03a__03aprocess> &self__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_std__03a__03aprocess__Vclpkg::__VnoInFunc_self\n"); );
    // Body
    VlClassRef<Vclass_hierarchy_std__03a__03aprocess> p;
    p = VL_NEW(Vclass_hierarchy_std__03a__03aprocess, vlSymsp);

// $c statement at /usr/local/share/verilator/include/verilated_std.sv:141:7
    VL_NULL_CHECK(p, "/usr/local/share/verilator/include/verilated_std.sv", 141)->__PVT__m_process = vlProcess;
    self__Vfuncrtn = p;
}

void Vclass_hierarchy_std__03a__03aprocess__Vclpkg::__VnoInFunc_killQueue(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vclass_hierarchy_std__03a__03aprocess>> &processQueue) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_std__03a__03aprocess__Vclpkg::__VnoInFunc_killQueue\n"); );
    // Body
    while (VL_LTS_III(32, 0U, processQueue.size())) {
        VL_NULL_CHECK(processQueue.pop_back(), "/usr/local/share/verilator/include/verilated_std.sv", 181)->__VnoInFunc_kill(vlSymsp);
    }
}

void Vclass_hierarchy_std__03a__03aprocess::__VnoInFunc_set_status(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_std__03a__03aprocess::__VnoInFunc_set_status\n"); );
    // Body

// $c statement at /usr/local/share/verilator/include/verilated_std.sv:148:7
    this->__PVT__m_process->state(s);
}

void Vclass_hierarchy_std__03a__03aprocess::__VnoInFunc_status(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_std__03a__03aprocess::__VnoInFunc_status\n"); );
    // Body
    status__Vfuncrtn = 
// $cpure expression at /usr/local/share/verilator/include/verilated_std.sv:154:21
this->__PVT__m_process->state()
    ;
}

void Vclass_hierarchy_std__03a__03aprocess::__VnoInFunc_kill(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_std__03a__03aprocess::__VnoInFunc_kill\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 4U);
}

void Vclass_hierarchy_std__03a__03aprocess::__VnoInFunc_suspend(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_std__03a__03aprocess::__VnoInFunc_suspend\n"); );
    // Body
    VL_WRITEF_NX("[%0t] %%Error: verilated_std.sv:165: Assertion failed in %Nstd.process.suspend: std::process::suspend() not supported\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
    VL_STOP_MT("/usr/local/share/verilator/include/verilated_std.sv", 165, "");
}

void Vclass_hierarchy_std__03a__03aprocess::__VnoInFunc_resume(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_std__03a__03aprocess::__VnoInFunc_resume\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 1U);
}

VlCoroutine Vclass_hierarchy_std__03a__03aprocess::__VnoInFunc_await(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_std__03a__03aprocess::__VnoInFunc_await\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_status__2__Vfuncout;
    __Vfunc_status__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_status__3__Vfuncout;
    __Vfunc_status__3__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    if ((1U & (~ ((0U == ([&]() {
                                this->__VnoInFunc_status(vlSymsp, __Vfunc_status__2__Vfuncout);
                            }(), __Vfunc_status__2__Vfuncout)) 
                  | (4U == ([&]() {
                                this->__VnoInFunc_status(vlSymsp, __Vfunc_status__3__Vfuncout);
                            }(), __Vfunc_status__3__Vfuncout)))))) {
        CData/*0:0*/ __VdynTrigger_h32485e37__0;
        __VdynTrigger_h32485e37__0 = 0;
        __VdynTrigger_h32485e37__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h32485e37__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] ((32'h0 == $_EXPRSTMT( // Function: status __VnoInFunc_status(std::process.__Vfunc_status__2__Vfuncout); , ); ) | (32'h4 == $_EXPRSTMT( // Function: status __VnoInFunc_status(std::process.__Vfunc_status__3__Vfuncout); , ); )))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         174);
            this->__Vtrigprevexpr_h1426c6b2__0 = ((0U 
                                                   == 
                                                   ([&]() {
                            this->__VnoInFunc_status(vlSymsp, __Vfunc_status__2__Vfuncout);
                        }(), __Vfunc_status__2__Vfuncout)) 
                                                  | (4U 
                                                     == 
                                                     ([&]() {
                            this->__VnoInFunc_status(vlSymsp, __Vfunc_status__3__Vfuncout);
                        }(), __Vfunc_status__3__Vfuncout)));
            __VdynTrigger_h32485e37__0 = this->__Vtrigprevexpr_h1426c6b2__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h32485e37__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] ((32'h0 == $_EXPRSTMT( // Function: status __VnoInFunc_status(std::process.__Vfunc_status__2__Vfuncout); , ); ) | (32'h4 == $_EXPRSTMT( // Function: status __VnoInFunc_status(std::process.__Vfunc_status__3__Vfuncout); , ); )))", 
                                                     "/usr/local/share/verilator/include/verilated_std.sv", 
                                                     174);
    }
}

void Vclass_hierarchy_std__03a__03aprocess::__VnoInFunc_get_randstate(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_std__03a__03aprocess::__VnoInFunc_get_randstate\n"); );
    // Body
    std::string s;
    s = VL_CVT_PACK_STR_NI(
// $c expression at /usr/local/share/verilator/include/verilated_std.sv:227:26
0
    );

// $c statement at /usr/local/share/verilator/include/verilated_std.sv:229:7
    s = this->__PVT__m_process->randstate();
    get_randstate__Vfuncrtn = s;
}

void Vclass_hierarchy_std__03a__03aprocess::__VnoInFunc_set_randstate(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_std__03a__03aprocess::__VnoInFunc_set_randstate\n"); );
    // Body

// $c statement at /usr/local/share/verilator/include/verilated_std.sv:234:7
    this->__PVT__m_process->randstate(s);
}

Vclass_hierarchy_std__03a__03aprocess::Vclass_hierarchy_std__03a__03aprocess(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_std__03a__03aprocess::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vclass_hierarchy_std__03a__03aprocess::__VnoInFunc_srandom(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ seed) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_std__03a__03aprocess::__VnoInFunc_srandom\n"); );
    // Body
    __Vm_rng.srandom(seed);
}

void Vclass_hierarchy_std__03a__03aprocess::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_std__03a__03aprocess::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __Vtrigprevexpr_h1426c6b2__0 = VL_SCOPED_RAND_RESET_I(1, 1632604199446231211ULL, 14495397076183301666ull);
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_std__03a__03aprocess>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_std__03a__03aprocess::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy_std__03a__03aprocess::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_std__03a__03aprocess::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy_std__03a__03aprocess::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_std__03a__03aprocess::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_process:" + VL_TO_STRING(__PVT__m_process);
    return (out);
}
