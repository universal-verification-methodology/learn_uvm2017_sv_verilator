// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_resource__Tz296__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_resource__Tz296__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_resource#(bit[0:0])"s;
}

void Vdma_uvm_pkg__03a__03auvm_resource__Tz296__Vclpkg::__VnoInFunc_get_type(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz296> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_resource__Tz296__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    if ((VlNull{} == this->__PVT__my_type)) {
        this->__PVT__my_type = VL_NEW(Vdma_uvm_pkg__03a__03auvm_resource__Tz296, vlProcess, vlSymsp, ""s);
    }
    get_type__Vfuncrtn = this->__PVT__my_type;
}

void Vdma_uvm_pkg__03a__03auvm_resource__Tz296__Vclpkg::__VnoInFunc_get_highest_precedence(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_queue__Tz5> &q, VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz296> &get_highest_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_resource__Tz296__Vclpkg::__VnoInFunc_get_highest_precedence\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__2__Vfuncout;
    IData/*31:0*/ __Vtask_size__3__Vfuncout;
    __Vtask_size__3__Vfuncout = 0;
    IData/*31:0*/ __Vtask_size__5__Vfuncout;
    __Vtask_size__5__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__6__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_base> __Vfunc_get_highest_precedence__8__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz296> rsrc;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz296> r;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_queue__Tz5> tq;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_base> rb;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_pool> rp;
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
        tq = VL_NEW(Vdma_uvm_pkg__03a__03auvm_queue__Tz5, vlProcess, vlSymsp, ""s);
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

void Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__Tz344> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz344__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz296> tmp;
    tmp = ((""s == name) ? VL_NEW(Vdma_uvm_pkg__03a__03auvm_resource__Tz296, vlProcess, vlSymsp, ""s)
            : VL_NEW(Vdma_uvm_pkg__03a__03auvm_resource__Tz296, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_resource#(bit[0:0])"s;
}

Vdma_uvm_pkg__03a__03auvm_resource__Tz296::Vdma_uvm_pkg__03a__03auvm_resource__Tz296(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_resource_base(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_resource__Tz296::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc_m_value_type_name(Vdma__Syms* __restrict vlSymsp, std::string &m_value_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc_m_value_type_name\n"); );
    // Body
    m_value_type_name__Vfuncrtn = "bit[0:0]"s;
}

void Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc_m_value_as_string(Vdma__Syms* __restrict vlSymsp, std::string &m_value_as_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc_m_value_as_string\n"); );
    // Body
    m_value_as_string__Vfuncrtn = VL_SFORMATF_N_NX("'h%0x",0,
                                                   1,
                                                   this->__PVT__val) ;
}

void Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc_get_type_handle(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc_get_type_handle\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz296> __Vfunc_get_type__4__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz296__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__4__Vfuncout);
    get_type_handle__Vfuncrtn = __Vfunc_get_type__4__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc_read(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc_read\n"); );
    // Body
    this->__VnoInFunc_record_read_access(vlProcess, vlSymsp, accessor);
    read__Vfuncrtn = this->__PVT__val;
}

void Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc_write(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ t, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc_write\n"); );
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
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
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
        if (((IData)(this->__PVT__val) == (IData)(t))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_record_write_access(vlProcess, vlSymsp, accessor);
        this->__PVT__val = t;
        Vdma_uvm_pkg__03a__03auvm_resource_base::__PVT__modified = 1U;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__14__Vfuncout;
    __Vfunc___VBasicRand__14__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__14__Vfuncout);
            }(), __Vfunc___VBasicRand__14__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_resource__Tz296::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_resource__Tz296::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_resource__Tz296::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__val = 0;
}

Vdma_uvm_pkg__03a__03auvm_resource__Tz296::~Vdma_uvm_pkg__03a__03auvm_resource__Tz296() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_resource__Tz296::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz296>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_resource__Tz296::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_resource__Tz296::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_resource__Tz296::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_resource__Tz296::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_resource__Tz296::to_string_middle\n"); );
    // Body
    std::string out;
    out += "val:" + VL_TO_STRING(__PVT__val);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_resource_base::to_string_middle();
    return (out);
}
