// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event___Vclpkg::__VnoInFunc_m_register_cb(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &m_register_cb__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event___Vclpkg::__VnoInFunc_m_register_cb\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_m_register_pair__0__Vfuncout;
    __Vfunc_m_register_pair__0__Vfuncout = 0;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz7_TBz57__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_pkg::uvm_event#(T)"s, "uvm_pkg::uvm_event_callback#(T)"s, __Vfunc_m_register_pair__0__Vfuncout);
    m_register_cb__Vfuncrtn = __Vfunc_m_register_pair__0__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event___Vclpkg::__VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__Tz7> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event___Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__Tz7> __Vfunc_get__2__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz7__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__2__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__Tz7> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz7__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_create(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_, vlProcess, vlSymsp, ""s)
            : VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_pkg::uvm_event#(T)"s;
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_base(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_wait_trigger_data(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_wait_trigger_data\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> __Vfunc_get_trigger_data__5__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_wait_trigger(vlProcess, vlSymsp);
    this->__VnoInFunc_get_trigger_data(vlSymsp, __Vfunc_get_trigger_data__5__Vfuncout);
    data = __Vfunc_get_trigger_data__5__Vfuncout;
    co_return;}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_wait_ptrigger_data(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_wait_ptrigger_data\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> __Vfunc_get_trigger_data__7__Vfuncout;
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_wait_ptrigger(vlSymsp);
    this->__VnoInFunc_get_trigger_data(vlSymsp, __Vfunc_get_trigger_data__7__Vfuncout);
    data = __Vfunc_get_trigger_data__7__Vfuncout;
    co_return;}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_trigger(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_trigger\n"); );
    // Locals
    CData/*0:0*/ __Vtask_pre_trigger__9__Vfuncout;
    __Vtask_pre_trigger__9__Vfuncout = 0;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    IData/*31:0*/ skip;
    skip = 0;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback_>> cb_q;
    skip = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz7_TBz57__Vclpkg.__VnoInFunc_get_all(vlProcess, vlSymsp, cb_q, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_>{this});
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, cb_q.size())) {
        skip = (skip + VL_EXTEND_II(32,1, ([&]() {
                        VL_NULL_CHECK(cb_q.at(unnamedblk1__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_event.svh", 335)
                                           ->__VnoInFunc_pre_trigger(vlSymsp, 
                                                                     VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_>{this}, data, __Vtask_pre_trigger__9__Vfuncout);
                    }(), (IData)(__Vtask_pre_trigger__9__Vfuncout))));
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
    if ((0U == skip)) {
        vlSymsp->fireEvent(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__m_event);
        unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__i, cb_q.size())) {
            VL_NULL_CHECK(cb_q.at(unnamedblk2__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_event.svh", 339)->__VnoInFunc_post_trigger(vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_>{this}, data);
            unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
        }
        Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__num_waiters = 0U;
        Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__on = 1U;
        Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__trigger_time 
            = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
        this->__PVT__trigger_data = data;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_trigger__Vtcwrap_1(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_trigger__Vtcwrap_1\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> __Vfunc_get_default_data__11__Vfuncout;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> data;
    this->__VnoInFunc_get_default_data(vlSymsp, __Vfunc_get_default_data__11__Vfuncout);
    data = __Vfunc_get_default_data__11__Vfuncout;
    this->__VnoInFunc_trigger(vlProcess, vlSymsp, data);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_get_trigger_data(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &get_trigger_data__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_get_trigger_data\n"); );
    // Body
    get_trigger_data__Vfuncrtn = this->__PVT__trigger_data;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_get_default_data(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &get_default_data__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_get_default_data\n"); );
    // Body
    get_default_data__Vfuncrtn = this->__PVT__default_data;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_set_default_data(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_set_default_data\n"); );
    // Body
    this->__PVT__default_data = data;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_do_print\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> __Vtask_get_trigger_data__19__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk3__DOT__e;
    unnamedblk3__DOT__e = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event__Tz2> unnamedblk4__DOT__se;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_> oe;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback_>> cb_q;
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz7_TBz57__Vclpkg.__VnoInFunc_get_all(vlProcess, vlSymsp, cb_q, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_>{this});
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
                    oe = VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_>{this};
                }(), 1U))) {
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_event.svh", 412)->__VnoInFunc_print_object(vlProcess, vlSymsp, "trigger_data"s, 
                                                                                ([&]() {
                    VL_NULL_CHECK(oe, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_event.svh", 412)
                                                                                ->__VnoInFunc_get_trigger_data(vlSymsp, __Vtask_get_trigger_data__19__Vfuncout);
                }(), __Vtask_get_trigger_data__19__Vfuncout), 0x2eU);
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_do_copy\n"); );
    // Body
    IData/*31:0*/ unnamedblk5__DOT__i;
    unnamedblk5__DOT__i = 0;
    IData/*31:0*/ unnamedblk6__DOT__i;
    unnamedblk6__DOT__i = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_> e;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback_>> cb_q;
    {
        Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        if (((! VL_CAST_DYNAMIC(rhs, e)) || (VlNull{} 
                                             == e))) {
            goto __Vlabel0;
        }
        this->__PVT__trigger_data = VL_NULL_CHECK(e, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_event.svh", 426)
            ->__PVT__trigger_data;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz7_TBz57__Vclpkg.__VnoInFunc_get_all(vlProcess, vlSymsp, cb_q, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_>{this});
        unnamedblk5__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk5__DOT__i, cb_q.size())) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz7_TBz57__Vclpkg.__VnoInFunc_delete(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_>{this}, cb_q.at(unnamedblk5__DOT__i));
            unnamedblk5__DOT__i = ((IData)(1U) + unnamedblk5__DOT__i);
        }
        cb_q.clear();
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz7_TBz57__Vclpkg.__VnoInFunc_get_all(vlProcess, vlSymsp, cb_q, e);
        unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk6__DOT__i, cb_q.size())) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz7_TBz57__Vclpkg.__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_>{this}, cb_q.at(unnamedblk6__DOT__i), 0U);
            unnamedblk6__DOT__i = ((IData)(1U) + unnamedblk6__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__26__Vfuncout;
    __Vfunc___VBasicRand__26__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__26__Vfuncout);
            }(), __Vfunc___VBasicRand__26__Vfuncout));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_::to_string_middle\n"); );
    // Body
    std::string out;
    out += "trigger_data:" + VL_TO_STRING(__PVT__trigger_data);
    out += ", default_data:" + VL_TO_STRING(__PVT__default_data);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_base::to_string_middle();
    return (out);
}
