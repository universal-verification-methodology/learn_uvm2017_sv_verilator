// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27__Vclpkg::__VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_resource#(logic[63:0])"s;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27__Vclpkg::__VnoInFunc_get_type(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    if ((VlNull{} == this->__PVT__my_type)) {
        this->__PVT__my_type = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27, vlProcess, vlSymsp, ""s);
    }
    get_type__Vfuncrtn = this->__PVT__my_type;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27__Vclpkg::__VnoInFunc_get_highest_precedence(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_queue__Tz26> &q, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27> &get_highest_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27__Vclpkg::__VnoInFunc_get_highest_precedence\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__2__Vfuncout;
    IData/*31:0*/ __Vtask_size__3__Vfuncout;
    __Vtask_size__3__Vfuncout = 0;
    IData/*31:0*/ __Vtask_size__5__Vfuncout;
    __Vtask_size__5__Vfuncout = 0;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__6__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_base> __Vfunc_get_highest_precedence__8__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27> rsrc;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27> r;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_queue__Tz26> tq;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_base> rb;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> rp;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
        rp = __Vfunc_get__2__Vfuncout;
        if ((0U == ([&]() {
                        VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1403)
                    ->__VnoInFunc_size(vlSymsp, __Vtask_size__3__Vfuncout);
                    }(), __Vtask_size__3__Vfuncout))) {
            get_highest_precedence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        tq = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_queue__Tz26, vlProcess, vlSymsp, ""s);
        rsrc = VlNull{};
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, 
                          ([&]() {
                        VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1409)
                           ->__VnoInFunc_size(vlSymsp, __Vtask_size__5__Vfuncout);
                    }(), __Vtask_size__5__Vfuncout))) {
            if (VL_CAST_DYNAMIC(([&]() {
                            VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1410)
                                 ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk1__DOT__i, __Vtask_get__6__Vfuncout);
                        }(), __Vtask_get__6__Vfuncout), r)) {
                VL_NULL_CHECK(tq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1411)->__VnoInFunc_push_back(vlSymsp, r);
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get_highest_precedence(vlProcess, vlSymsp, tq, __Vfunc_get_highest_precedence__8__Vfuncout);
        rb = __Vfunc_get_highest_precedence__8__Vfuncout;
        if ((! VL_CAST_DYNAMIC(rb, rsrc))) {
            get_highest_precedence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_highest_precedence__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__Tz88> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz88__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc_create(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27> tmp;
    tmp = ((""s == name) ? VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27, vlProcess, vlSymsp, ""s)
            : VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_resource#(logic[63:0])"s;
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_base(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc_m_value_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &m_value_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc_m_value_type_name\n"); );
    // Body
    m_value_type_name__Vfuncrtn = "logic[63:0]"s;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc_m_value_as_string(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &m_value_as_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc_m_value_as_string\n"); );
    // Body
    m_value_as_string__Vfuncrtn = VL_SFORMATF_N_NX("'h%0x",0,
                                                   64,
                                                   this->__PVT__val) ;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc_get_type_handle(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc_get_type_handle\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27> __Vfunc_get_type__4__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz27__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__4__Vfuncout);
    get_type_handle__Vfuncrtn = __Vfunc_get_type__4__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc_read(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor, QData/*63:0*/ &read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc_read\n"); );
    // Body
    this->__VnoInFunc_record_read_access(vlProcess, vlSymsp, accessor);
    read__Vfuncrtn = this->__PVT__val;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc_write(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ t, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc_write\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is_read_only__6__Vfuncout;
    __Vfunc_is_read_only__6__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__7__id;
    std::string __Vtask_uvm_report_error__7__message;
    IData/*31:0*/ __Vtask_uvm_report_error__7__verbosity;
    __Vtask_uvm_report_error__7__verbosity = 0;
    std::string __Vtask_uvm_report_error__7__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__7__line;
    __Vtask_uvm_report_error__7__line = 0;
    std::string __Vtask_uvm_report_error__7__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__7__report_enabled_checked;
    __Vtask_uvm_report_error__7__report_enabled_checked = 0;
    std::string __Vfunc_get_name__8__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if (([&]() {
                    this->__VnoInFunc_is_read_only(vlSymsp, __Vfunc_is_read_only__6__Vfuncout);
                }(), (IData)(__Vfunc_is_read_only__6__Vfuncout))) {
            __Vtask_uvm_report_error__7__report_enabled_checked = 0U;
            __Vtask_uvm_report_error__7__context_name = ""s;
            __Vtask_uvm_report_error__7__line = 0U;
            __Vtask_uvm_report_error__7__filename = ""s;
            __Vtask_uvm_report_error__7__verbosity = 0U;
            __Vtemp_1 = ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__8__Vfuncout);
                }(), __Vfunc_get_name__8__Vfuncout);
            __Vtask_uvm_report_error__7__message = VL_SFORMATF_N_NX("resource %@ is read only -- cannot modify",0,
                                                                    -1,
                                                                    &(__Vtemp_1)) ;
            __Vtask_uvm_report_error__7__id = "resource"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__9__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__10__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__7__id, __Vtask_uvm_report_error__7__message, __Vtask_uvm_report_error__7__verbosity, __Vtask_uvm_report_error__7__filename, __Vtask_uvm_report_error__7__line, __Vtask_uvm_report_error__7__context_name, (IData)(__Vtask_uvm_report_error__7__report_enabled_checked));
            goto __Vlabel0;
        }
        if ((this->__PVT__val == t)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_record_write_access(vlProcess, vlSymsp, accessor);
        this->__PVT__val = t;
        Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_base::__PVT__modified = 1U;
        __Vlabel0: ;
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__14__Vfuncout;
    __Vfunc___VBasicRand__14__Vfuncout = 0;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__14__Vfuncout);
            }(), __Vfunc___VBasicRand__14__Vfuncout));
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__val = VL_SCOPED_RAND_RESET_Q(64, 6049256505566430833ULL, 14157650751545541461ull);
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::~Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz27::to_string_middle\n"); );
    // Body
    std::string out;
    out += "val:" + VL_TO_STRING(__PVT__val);
    out += ", "+ Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_base::to_string_middle();
    return (out);
}
