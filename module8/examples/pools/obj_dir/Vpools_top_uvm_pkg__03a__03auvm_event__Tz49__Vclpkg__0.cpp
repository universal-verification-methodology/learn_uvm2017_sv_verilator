// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_event__Tz49__Vclpkg::__VnoInFunc_m_register_cb(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &m_register_cb__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_event__Tz49__Vclpkg::__VnoInFunc_m_register_cb\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_m_register_pair__0__Vfuncout;
    __Vfunc_m_register_pair__0__Vfuncout = 0;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz104_TBz105__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_pkg::uvm_event#(T)"s, "uvm_pkg::uvm_event_callback#(T)"s, __Vfunc_m_register_pair__0__Vfuncout);
    m_register_cb__Vfuncrtn = __Vfunc_m_register_pair__0__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_event__Tz49__Vclpkg::__VnoInFunc_get_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__Tz104> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_event__Tz49__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__Tz104> __Vfunc_get__2__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz104__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__2__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_get_object_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__Tz104> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz104__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_create(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event__Tz49> tmp;
    tmp = ((""s == name) ? VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_event__Tz49, vlProcess, vlSymsp, ""s)
            : VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_event__Tz49, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_pkg::uvm_event#(T)"s;
}

Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::Vpools_top_uvm_pkg__03a__03auvm_event__Tz49(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name)
    : Vpools_top_uvm_pkg__03a__03auvm_event_base(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_wait_trigger_data(Vpools_top__Syms* __restrict vlSymsp, std::string &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_wait_trigger_data\n"); );
    // Locals
    std::string __Vfunc_get_trigger_data__5__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_wait_trigger(vlProcess, vlSymsp);
    this->__VnoInFunc_get_trigger_data(vlSymsp, __Vfunc_get_trigger_data__5__Vfuncout);
    data = __Vfunc_get_trigger_data__5__Vfuncout;
    co_return;}

VlCoroutine Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_wait_ptrigger_data(Vpools_top__Syms* __restrict vlSymsp, std::string &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_wait_ptrigger_data\n"); );
    // Locals
    std::string __Vfunc_get_trigger_data__7__Vfuncout;
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_wait_ptrigger(vlSymsp);
    this->__VnoInFunc_get_trigger_data(vlSymsp, __Vfunc_get_trigger_data__7__Vfuncout);
    data = __Vfunc_get_trigger_data__7__Vfuncout;
    co_return;}

void Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_trigger(Vpools_top__Syms* __restrict vlSymsp, std::string data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_trigger\n"); );
    // Locals
    CData/*0:0*/ __Vtask_pre_trigger__9__Vfuncout;
    __Vtask_pre_trigger__9__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    IData/*31:0*/ skip;
    skip = 0;
    VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event_callback__Tz49>> cb_q;
    skip = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz104_TBz105__Vclpkg.__VnoInFunc_get_all(vlProcess, vlSymsp, cb_q, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event__Tz49>{this});
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, cb_q.size())) {
        skip = (skip + VL_EXTEND_II(32,1, ([&]() {
                        VL_NULL_CHECK(cb_q.at(unnamedblk1__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_event.svh", 335)
                                           ->__VnoInFunc_pre_trigger(vlSymsp, 
                                                                     VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event__Tz49>{this}, data, __Vtask_pre_trigger__9__Vfuncout);
                    }(), (IData)(__Vtask_pre_trigger__9__Vfuncout))));
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
    if ((0U == skip)) {
        vlSymsp->fireEvent(Vpools_top_uvm_pkg__03a__03auvm_event_base::__PVT__m_event);
        unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__i, cb_q.size())) {
            VL_NULL_CHECK(cb_q.at(unnamedblk2__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_event.svh", 339)->__VnoInFunc_post_trigger(vlSymsp, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event__Tz49>{this}, data);
            unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
        }
        Vpools_top_uvm_pkg__03a__03auvm_event_base::__PVT__num_waiters = 0U;
        Vpools_top_uvm_pkg__03a__03auvm_event_base::__PVT__on = 1U;
        Vpools_top_uvm_pkg__03a__03auvm_event_base::__PVT__trigger_time 
            = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
        this->__PVT__trigger_data = data;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_get_trigger_data(Vpools_top__Syms* __restrict vlSymsp, std::string &get_trigger_data__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_get_trigger_data\n"); );
    // Body
    get_trigger_data__Vfuncrtn = this->__PVT__trigger_data;
}

void Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_get_default_data(Vpools_top__Syms* __restrict vlSymsp, std::string &get_default_data__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_get_default_data\n"); );
    // Body
    get_default_data__Vfuncrtn = this->__PVT__default_data;
}

void Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_set_default_data(Vpools_top__Syms* __restrict vlSymsp, std::string data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_set_default_data\n"); );
    // Body
    this->__PVT__default_data = data;
}

void Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_do_print(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_do_print\n"); );
    // Locals
    std::string __Vtask_get_trigger_data__17__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk3__DOT__e;
    unnamedblk3__DOT__e = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event__Tz49> unnamedblk4__DOT__se;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event_> oe;
    VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event_callback__Tz49>> cb_q;
    Vpools_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz104_TBz105__Vclpkg.__VnoInFunc_get_all(vlProcess, vlSymsp, cb_q, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event__Tz49>{this});
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_event.svh", 406)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "callbacks"s, cb_q.size(), "queue"s, 0x2eU);
    unnamedblk3__DOT__e = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__e, cb_q.size())) {
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_event.svh", 408)->__VnoInFunc_print_object(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",0,
                                                                                32,
                                                                                unnamedblk3__DOT__e) , cb_q.at(unnamedblk3__DOT__e), 0x5bU);
        unnamedblk3__DOT__e = ((IData)(1U) + unnamedblk3__DOT__e);
    }
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_event.svh", 409)->__VnoInFunc_print_array_footer(vlSymsp, cb_q.size());
    if ((0U != ([&]() {
                    unnamedblk4__DOT__se = VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event__Tz49>{this};
                }(), 1U))) {
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_event.svh", 417)->__VnoInFunc_print_string(vlProcess, vlSymsp, "trigger_data"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        VL_NULL_CHECK(unnamedblk4__DOT__se, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_event.svh", 417)
                                                                                ->__VnoInFunc_get_trigger_data(vlSymsp, __Vtask_get_trigger_data__17__Vfuncout);
                    }(), __Vtask_get_trigger_data__17__Vfuncout)), 0x2eU);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_do_copy\n"); );
    // Body
    IData/*31:0*/ unnamedblk5__DOT__i;
    unnamedblk5__DOT__i = 0;
    IData/*31:0*/ unnamedblk6__DOT__i;
    unnamedblk6__DOT__i = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event__Tz49> e;
    VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event_callback__Tz49>> cb_q;
    {
        Vpools_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        if (((! VL_CAST_DYNAMIC(rhs, e)) || (VlNull{} 
                                             == e))) {
            goto __Vlabel0;
        }
        this->__PVT__trigger_data = VL_NULL_CHECK(e, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_event.svh", 426)
            ->__PVT__trigger_data;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz104_TBz105__Vclpkg.__VnoInFunc_get_all(vlProcess, vlSymsp, cb_q, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event__Tz49>{this});
        unnamedblk5__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk5__DOT__i, cb_q.size())) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz104_TBz105__Vclpkg.__VnoInFunc_delete(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event__Tz49>{this}, cb_q.at(unnamedblk5__DOT__i));
            unnamedblk5__DOT__i = ((IData)(1U) + unnamedblk5__DOT__i);
        }
        cb_q.clear();
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz104_TBz105__Vclpkg.__VnoInFunc_get_all(vlProcess, vlSymsp, cb_q, e);
        unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk6__DOT__i, cb_q.size())) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz104_TBz105__Vclpkg.__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event__Tz49>{this}, cb_q.at(unnamedblk6__DOT__i), 0U);
            unnamedblk6__DOT__i = ((IData)(1U) + unnamedblk6__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__24__Vfuncout;
    __Vfunc___VBasicRand__24__Vfuncout = 0;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__24__Vfuncout);
            }(), __Vfunc___VBasicRand__24__Vfuncout));
}

void Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::~Vpools_top_uvm_pkg__03a__03auvm_event__Tz49() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event__Tz49>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpools_top_uvm_pkg__03a__03auvm_event__Tz49::to_string_middle\n"); );
    // Body
    std::string out;
    out += "trigger_data:" + VL_TO_STRING(__PVT__trigger_data);
    out += ", default_data:" + VL_TO_STRING(__PVT__default_data);
    out += ", "+ Vpools_top_uvm_pkg__03a__03auvm_event_base::to_string_middle();
    return (out);
}
