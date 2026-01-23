// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::Vdma_uvm_pkg__03a__03auvm_port_base__Tz223(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ port_type, IData/*31:0*/ min_size, IData/*31:0*/ max_size)
    : Vdma_uvm_pkg__03a__03auvm_tlm_if_base__Tz26_TBz26(vlProcess, vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::new\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_get__2__Vfuncout;
    __Vfunc_get__2__Vfuncout = 0;
    VlWide<128>/*4095:0*/ __Vfunc_get__2__value;
    VL_ZERO_W(4096, __Vfunc_get__2__value);
    // Body
    _ctor_var_reset(vlSymsp);
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> comp;
    IData/*31:0*/ tmp;
    tmp = 0;
    ;
    this->__PVT__m_port_type = port_type;
    this->__PVT__m_min_size = min_size;
    this->__PVT__m_max_size = max_size;
    this->__PVT__m_comp = VL_NEW(Vdma_uvm_pkg__03a__03auvm_port_component__Tz255, vlProcess, vlSymsp, name, parent, 
                                 VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223>{this});
    if ((1U & (~ ([&]() {
                        VL_EXTENDS_WI(4096,32, __Vfunc_get__2__value, tmp);
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz8__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, this->__PVT__m_comp, ""s, "check_connection_relationships"s, __Vfunc_get__2__value, __Vfunc_get__2__Vfuncout);
                        tmp = __Vfunc_get__2__value[0U];
                    }(), (IData)(__Vfunc_get__2__Vfuncout))))) {
        VL_NULL_CHECK(this->__PVT__m_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 268)->__VnoInFunc_set_report_id_action(vlProcess, vlSymsp, "Connection Warning"s, 0U);
    }
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_get_name(Vdma__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_get_name\n"); );
    // Locals
    std::string __Vtask_get_name__4__Vfuncout;
    // Body
    VL_NULL_CHECK(this->__PVT__m_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 279)->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__4__Vfuncout);
    get_name__Vfuncrtn = __Vtask_get_name__4__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_get_full_name\n"); );
    // Locals
    std::string __Vtask_get_full_name__5__Vfuncout;
    // Body
    VL_NULL_CHECK(this->__PVT__m_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 289)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__5__Vfuncout);
    get_full_name__Vfuncrtn = __Vtask_get_full_name__5__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_get_parent(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_get_parent\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> __Vtask_get_parent__6__Vfuncout;
    // Body
    VL_NULL_CHECK(this->__PVT__m_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 299)->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__6__Vfuncout);
    get_parent__Vfuncrtn = __Vtask_get_parent__6__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_get_comp(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_component_base> &get_comp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_get_comp\n"); );
    // Body
    get_comp__Vfuncrtn = this->__PVT__m_comp;
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_get_type_name\n"); );
    // Body
    if ((0U == this->__PVT__m_port_type)) {
        get_type_name__Vfuncrtn = "port"s;
    } else if ((1U == this->__PVT__m_port_type)) {
        get_type_name__Vfuncrtn = "export"s;
    } else if ((2U == this->__PVT__m_port_type)) {
        get_type_name__Vfuncrtn = "implementation"s;
    }
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_max_size(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &max_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_max_size\n"); );
    // Body
    max_size__Vfuncrtn = this->__PVT__m_max_size;
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_min_size(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &min_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_min_size\n"); );
    // Body
    min_size__Vfuncrtn = this->__PVT__m_min_size;
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_is_unbounded(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_unbounded__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_is_unbounded\n"); );
    // Body
    is_unbounded__Vfuncrtn = (0xffffffffU == this->__PVT__m_max_size);
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_is_port(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_is_port\n"); );
    // Body
    is_port__Vfuncrtn = (0U == this->__PVT__m_port_type);
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_is_export(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_is_export\n"); );
    // Body
    is_export__Vfuncrtn = (1U == this->__PVT__m_port_type);
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_is_imp(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_is_imp\n"); );
    // Body
    is_imp__Vfuncrtn = (2U == this->__PVT__m_port_type);
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_size(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__m_imp_list.size();
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_set_if(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ index) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_set_if\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223> __Vfunc_get_if__7__Vfuncout;
    // Body
    this->__VnoInFunc_get_if(vlProcess, vlSymsp, index, __Vfunc_get_if__7__Vfuncout);
    this->__PVT__m_if = __Vfunc_get_if__7__Vfuncout;
    if ((VlNull{} != this->__PVT__m_if)) {
        this->__PVT__m_def_index = index;
    }
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_m_get_if_mask(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &m_get_if_mask__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_m_get_if_mask\n"); );
    // Body
    m_get_if_mask__Vfuncrtn = this->__PVT__m_if_mask;
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_set_default_index(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ index) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_set_default_index\n"); );
    // Body
    this->__PVT__m_def_index = index;
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_connect(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223> provider) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_connect\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    IData/*31:0*/ __Vtask_get_state__10__Vfuncout;
    __Vtask_get_state__10__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_state__11__Vfuncout;
    __Vtask_get_state__11__Vfuncout = 0;
    std::string __Vfunc_get_full_name__13__Vfuncout;
    std::string __Vfunc_get_type_name__14__Vfuncout;
    std::string __Vtask_get_full_name__18__Vfuncout;
    std::string __Vtask_get_type_name__19__Vfuncout;
    std::string __Vfunc_get_type_name__20__Vfuncout;
    CData/*0:0*/ __Vfunc_is_imp__21__Vfuncout;
    __Vfunc_is_imp__21__Vfuncout = 0;
    std::string __Vtask_get_full_name__23__Vfuncout;
    CData/*0:0*/ __Vfunc_is_export__24__Vfuncout;
    __Vfunc_is_export__24__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_port__25__Vfuncout;
    __Vtask_is_port__25__Vfuncout = 0;
    std::string __Vtask_get_full_name__27__Vfuncout;
    CData/*0:0*/ __Vtask_m_check_relationship__28__Vfuncout;
    __Vtask_m_check_relationship__28__Vfuncout = 0;
    std::string __Vtask_get_full_name__29__Vfuncout;
    std::string __Vfunc_get_full_name__30__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> cs;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
        cs = __Vfunc_get__8__Vfuncout;
        VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 474)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
        top = __Vtask_get_root__9__Vfuncout;
        if (((0x00000010U == ([&]() {
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__end_of_elaboration_ph, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 475)
                              ->__VnoInFunc_get_state(vlSymsp, __Vtask_get_state__10__Vfuncout);
                        }(), __Vtask_get_state__10__Vfuncout)) 
             || (0x00000100U == ([&]() {
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__end_of_elaboration_ph, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 476)
                                 ->__VnoInFunc_get_state(vlSymsp, __Vtask_get_state__11__Vfuncout);
                        }(), __Vtask_get_state__11__Vfuncout)))) {
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 477)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Late Connection"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Attempt to connect "s, 
                                                                                ([&]() {
                                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__13__Vfuncout);
                                        }(), __Vfunc_get_full_name__13__Vfuncout)), " (of type "s), 
                                                                                ([&]() {
                                    this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__14__Vfuncout);
                                }(), __Vfunc_get_type_name__14__Vfuncout)), ") at or after end_of_elaboration phase.  Ignoring."s)), 0x000000c8U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((VlNull{} == provider)) {
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 484)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, "Cannot connect to null port handle"s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((provider == VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223>{this})) {
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 490)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, "Cannot connect a port instance to itself"s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if (((VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 495)
              ->__PVT__m_if_mask & this->__PVT__m_if_mask) 
             != this->__PVT__m_if_mask)) {
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 496)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                ([&]() {
                                                VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 497)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__18__Vfuncout);
                                            }(), __Vtask_get_full_name__18__Vfuncout), " (of type "s), 
                                                                                ([&]() {
                                            VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 498)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__19__Vfuncout);
                                        }(), __Vtask_get_type_name__19__Vfuncout)), ") does not provide the complete interface required of this port (type "s), 
                                                                                ([&]() {
                                    this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__20__Vfuncout);
                                }(), __Vfunc_get_type_name__20__Vfuncout)), ")"s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if (([&]() {
                    this->__VnoInFunc_is_imp(vlSymsp, __Vfunc_is_imp__21__Vfuncout);
                }(), (IData)(__Vfunc_is_imp__21__Vfuncout))) {
            __Vtemp_1 = ([&]() {
                    VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 508)
                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__23__Vfuncout);
                }(), __Vtask_get_full_name__23__Vfuncout);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 506)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, VL_SFORMATF_N_NX("Cannot call an imp port's connect method. An imp is connected only to the component passed in its constructor. (You attempted to bind this imp to %@)",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((([&]() {
                        this->__VnoInFunc_is_export(vlSymsp, __Vfunc_is_export__24__Vfuncout);
                    }(), (IData)(__Vfunc_is_export__24__Vfuncout)) 
             && ([&]() {
                        VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 513)
                 ->__VnoInFunc_is_port(vlSymsp, __Vtask_is_port__25__Vfuncout);
                    }(), (IData)(__Vtask_is_port__25__Vfuncout)))) {
            __Vtemp_2 = ([&]() {
                    VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 516)
                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__27__Vfuncout);
                }(), __Vtask_get_full_name__27__Vfuncout);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 514)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, VL_SFORMATF_N_NX("Cannot connect exports to ports Try calling port.connect(export) instead. (You attempted to bind this export to %@).",0,
                                                                                -1,
                                                                                &(__Vtemp_2)) , 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        this->__VnoInFunc_m_check_relationship(vlProcess, vlSymsp, provider, __Vtask_m_check_relationship__28__Vfuncout);
        this->__PVT__m_provided_by.at(([&]() {
                    VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 522)
                                       ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__29__Vfuncout);
                }(), __Vtask_get_full_name__29__Vfuncout)) 
            = provider;
        VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 523)->__PVT__m_provided_to.at(
                                                                                ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__30__Vfuncout);
                }(), __Vfunc_get_full_name__30__Vfuncout)) 
            = VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223>{this};
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_debug_connected_to(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_debug_connected_to\n"); );
    // Locals
    std::string __Vtask_get_type_name__31__Vfuncout;
    std::string __Vfunc_get_full_name__33__Vfuncout;
    std::string __Vfunc_get_type_name__34__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__35__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__36__Vfuncout;
    IData/*31:0*/ __Vtask_get_state__37__Vfuncout;
    __Vtask_get_state__37__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_state__38__Vfuncout;
    __Vtask_get_state__38__Vfuncout = 0;
    std::string __Vtask_get_type_name__39__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string unnamedblk1__DOT__nm;
    CData/*0:0*/ unnamedblk1__DOT__nm__Vfirst;
    unnamedblk1__DOT__nm__Vfirst = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> unnamedblk2__DOT__top;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk2__DOT__cs;
    std::string unnamedblk3__DOT__nm;
    CData/*0:0*/ unnamedblk3__DOT__nm__Vfirst;
    unnamedblk3__DOT__nm__Vfirst = 0;
    IData/*31:0*/ sz;
    sz = 0;
    IData/*31:0*/ num;
    num = 0;
    IData/*31:0*/ curr_num;
    curr_num = 0;
    std::string s_sz;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223> port;
    {
        if (VL_GTS_III(32, 0U, level)) {
            level = 0U;
        }
        if ((0U == level)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__save = ""s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__indent = "  "s;
        }
        if (((0xffffffffU != max_level) & VL_GTES_III(32, level, max_level))) {
            goto __Vlabel0;
        }
        num = this->__PVT__m_provided_by.size();
        if ((0U != this->__PVT__m_provided_by.size())) {
            if ((0U != this->__PVT__m_provided_by.first(unnamedblk1__DOT__nm))) {
                unnamedblk1__DOT__nm__Vfirst = 1U;
                while (((IData)(unnamedblk1__DOT__nm__Vfirst) 
                        || (0U != this->__PVT__m_provided_by.next(unnamedblk1__DOT__nm)))) {
                    unnamedblk1__DOT__nm__Vfirst = 0U;
                    curr_num = ((IData)(1U) + curr_num);
                    port = this->__PVT__m_provided_by
                        .at(unnamedblk1__DOT__nm);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__save 
                        = VL_CONCATN_NNN(VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__save, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__indent), "  | \n"s);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__save 
                        = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__save, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__indent), "  |_"s), unnamedblk1__DOT__nm), " ("s), 
                                                        ([&]() {
                                    VL_NULL_CHECK(port, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 559)
                                                         ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__31__Vfuncout);
                                }(), __Vtask_get_type_name__31__Vfuncout)), ")\n"s);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__indent 
                        = ((VL_LTS_III(32, 1U, num) 
                            & (curr_num != num)) ? 
                           VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__indent, "  | "s)
                            : VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__indent, "    "s));
                    VL_NULL_CHECK(port, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 561)->__VnoInFunc_debug_connected_to(vlSymsp, 
                                                                                ((IData)(1U) 
                                                                                + level), max_level);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__indent 
                        = VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__indent,0U,
                                      ((VL_LEN_IN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__indent) 
                                        - (IData)(4U)) 
                                       - (IData)(1U)));
                }
            }
        }
        if ((0U == level)) {
            if ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__save)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__save 
                    = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("This port's fanout network:\n\n  "s, 
                                                                                ([&]() {
                                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__33__Vfuncout);
                                            }(), __Vfunc_get_full_name__33__Vfuncout)), " ("s), 
                                                                                ([&]() {
                                        this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__34__Vfuncout);
                                    }(), __Vfunc_get_type_name__34__Vfuncout)), ")\n"s), vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__save), "\n"s);
            }
            if ((0U == this->__PVT__m_imp_list.size())) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__35__Vfuncout);
                unnamedblk2__DOT__cs = __Vfunc_get__35__Vfuncout;
                VL_NULL_CHECK(unnamedblk2__DOT__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 574)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__36__Vfuncout);
                unnamedblk2__DOT__top = __Vtask_get_root__36__Vfuncout;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__save 
                    = (((0x00000010U == ([&]() {
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__end_of_elaboration_ph, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 575)
                                         ->__VnoInFunc_get_state(vlSymsp, __Vtask_get_state__37__Vfuncout);
                                }(), __Vtask_get_state__37__Vfuncout)) 
                        || (0x00000100U == ([&]() {
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__end_of_elaboration_ph, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 576)
                                            ->__VnoInFunc_get_state(vlSymsp, __Vtask_get_state__38__Vfuncout);
                                }(), __Vtask_get_state__38__Vfuncout)))
                        ? VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__save, "  Connected implementations: none\n"s)
                        : VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__save, "  Connected implementations: not resolved until end-of-elab\n"s));
            } else {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__save 
                    = VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__save, "  Resolved implementation list:\n"s);
                if ((0U != this->__PVT__m_imp_list.first(unnamedblk3__DOT__nm))) {
                    unnamedblk3__DOT__nm__Vfirst = 1U;
                    while (((IData)(unnamedblk3__DOT__nm__Vfirst) 
                            || (0U != this->__PVT__m_imp_list.next(unnamedblk3__DOT__nm)))) {
                        unnamedblk3__DOT__nm__Vfirst = 0U;
                        port = this->__PVT__m_imp_list
                            .at(unnamedblk3__DOT__nm);
                        s_sz = VL_SFORMATF_N_NX("%0d",0,
                                                32,
                                                sz) ;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__save 
                            = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__save, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__indent), s_sz), ": "s), unnamedblk3__DOT__nm), " ("s), 
                                                            ([&]() {
                                        VL_NULL_CHECK(port, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 587)
                                                             ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__39__Vfuncout);
                                    }(), __Vtask_get_type_name__39__Vfuncout)), ")\n"s);
                        sz = ((IData)(1U) + sz);
                    }
                }
            }
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 591)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "debug_connected_to"s, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_connected_to__Vstatic__save, 0x000000c8U, ""s, 0U, ""s, 0U);
        }
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_debug_provided_to(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_debug_provided_to\n"); );
    // Locals
    std::string __Vtask_get_type_name__41__Vfuncout;
    std::string __Vfunc_get_full_name__43__Vfuncout;
    std::string __Vfunc_get_type_name__44__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string unnamedblk4__DOT__nm;
    CData/*0:0*/ unnamedblk4__DOT__nm__Vfirst;
    unnamedblk4__DOT__nm__Vfirst = 0;
    std::string nm;
    IData/*31:0*/ num;
    num = 0;
    IData/*31:0*/ curr_num;
    curr_num = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223> port;
    {
        if (VL_GTS_III(32, 0U, level)) {
            level = 0U;
        }
        if ((0U == level)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__save = ""s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__indent = "  "s;
        }
        if (((0xffffffffU != max_level) & VL_GTS_III(32, level, max_level))) {
            goto __Vlabel0;
        }
        num = this->__PVT__m_provided_to.size();
        if ((0U != num)) {
            if ((0U != this->__PVT__m_provided_to.first(unnamedblk4__DOT__nm))) {
                unnamedblk4__DOT__nm__Vfirst = 1U;
                while (((IData)(unnamedblk4__DOT__nm__Vfirst) 
                        || (0U != this->__PVT__m_provided_to.next(unnamedblk4__DOT__nm)))) {
                    unnamedblk4__DOT__nm__Vfirst = 0U;
                    curr_num = ((IData)(1U) + curr_num);
                    port = this->__PVT__m_provided_to
                        .at(unnamedblk4__DOT__nm);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__save 
                        = VL_CONCATN_NNN(VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__save, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__indent), "  | \n"s);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__save 
                        = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__save, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__indent), "  |_"s), unnamedblk4__DOT__nm), " ("s), 
                                                        ([&]() {
                                    VL_NULL_CHECK(port, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 626)
                                                         ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__41__Vfuncout);
                                }(), __Vtask_get_type_name__41__Vfuncout)), ")\n"s);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__indent 
                        = ((VL_LTS_III(32, 1U, num) 
                            & (curr_num != num)) ? 
                           VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__indent, "  | "s)
                            : VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__indent, "    "s));
                    VL_NULL_CHECK(port, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 628)->__VnoInFunc_debug_provided_to(vlSymsp, 
                                                                                ((IData)(1U) 
                                                                                + level), max_level);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__indent 
                        = VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__indent,0U,
                                      ((VL_LEN_IN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__indent) 
                                        - (IData)(4U)) 
                                       - (IData)(1U)));
                }
            }
        }
        if ((0U == level)) {
            if ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__save)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__save 
                    = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("This port's fanin network:\n\n  "s, 
                                                                                ([&]() {
                                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__43__Vfuncout);
                                            }(), __Vfunc_get_full_name__43__Vfuncout)), " ("s), 
                                                                                ([&]() {
                                        this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__44__Vfuncout);
                                    }(), __Vfunc_get_type_name__44__Vfuncout)), ")\n"s), vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__save), "\n"s);
            }
            if ((0U == this->__PVT__m_provided_to.size())) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__save 
                    = VL_CONCATN_NNN(VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__save, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__indent), "This port has not been bound\n"s);
            }
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 639)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "debug_provided_to"s, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.__PVT__debug_provided_to__Vstatic__save, 0x000000c8U, ""s, 0U, ""s, 0U);
        }
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_get_connected_to(Vdma__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223>> &list) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_get_connected_to\n"); );
    // Body
    std::string unnamedblk5__DOT__name;
    CData/*0:0*/ unnamedblk5__DOT__name__Vfirst;
    unnamedblk5__DOT__name__Vfirst = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223> port;
    list.clear();
    if ((0U != this->__PVT__m_provided_by.first(unnamedblk5__DOT__name))) {
        unnamedblk5__DOT__name__Vfirst = 1U;
        while (((IData)(unnamedblk5__DOT__name__Vfirst) 
                || (0U != this->__PVT__m_provided_by.next(unnamedblk5__DOT__name)))) {
            unnamedblk5__DOT__name__Vfirst = 0U;
            port = this->__PVT__m_provided_by.at(unnamedblk5__DOT__name);
            list.at(unnamedblk5__DOT__name) = port;
        }
    }
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_get_provided_to(Vdma__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223>> &list) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_get_provided_to\n"); );
    // Body
    std::string unnamedblk6__DOT__name;
    CData/*0:0*/ unnamedblk6__DOT__name__Vfirst;
    unnamedblk6__DOT__name__Vfirst = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223> port;
    list.clear();
    if ((0U != this->__PVT__m_provided_to.first(unnamedblk6__DOT__name))) {
        unnamedblk6__DOT__name__Vfirst = 1U;
        while (((IData)(unnamedblk6__DOT__name__Vfirst) 
                || (0U != this->__PVT__m_provided_to.next(unnamedblk6__DOT__name)))) {
            unnamedblk6__DOT__name__Vfirst = 0U;
            port = this->__PVT__m_provided_to.at(unnamedblk6__DOT__name);
            list.at(unnamedblk6__DOT__name) = port;
        }
    }
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_m_check_relationship(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223> provider, CData/*0:0*/ &m_check_relationship__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_m_check_relationship\n"); );
    // Locals
    std::string __Vfunc_get_type_name__46__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> __Vfunc_get_parent__47__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> __Vtask_get_parent__48__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> __Vtask_get_parent__49__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> __Vtask_get_parent__50__Vfuncout;
    CData/*0:0*/ __Vtask_is_port__51__Vfuncout;
    __Vtask_is_port__51__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_port__52__Vfuncout;
    __Vtask_is_port__52__Vfuncout = 0;
    std::string __Vtask_get_full_name__53__Vfuncout;
    std::string __Vtask_get_type_name__54__Vfuncout;
    CData/*0:0*/ __Vtask_is_port__56__Vfuncout;
    __Vtask_is_port__56__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_export__57__Vfuncout;
    __Vtask_is_export__57__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_imp__58__Vfuncout;
    __Vtask_is_imp__58__Vfuncout = 0;
    std::string __Vtask_get_full_name__59__Vfuncout;
    std::string __Vtask_get_type_name__60__Vfuncout;
    CData/*0:0*/ __Vtask_is_export__62__Vfuncout;
    __Vtask_is_export__62__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_export__63__Vfuncout;
    __Vtask_is_export__63__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_imp__64__Vfuncout;
    __Vtask_is_imp__64__Vfuncout = 0;
    std::string __Vtask_get_full_name__65__Vfuncout;
    std::string __Vtask_get_type_name__66__Vfuncout;
    // Body
    std::string s;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223> from;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> from_parent;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> to_parent;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> from_gparent;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> to_gparent;
    {
        if (("uvm_analysis_port"s == ([&]() {
                        this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__46__Vfuncout);
                    }(), __Vfunc_get_type_name__46__Vfuncout))) {
            m_check_relationship__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        from = VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223>{this};
        this->__VnoInFunc_get_parent(vlSymsp, __Vfunc_get_parent__47__Vfuncout);
        from_parent = __Vfunc_get_parent__47__Vfuncout;
        VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 694)->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__48__Vfuncout);
        to_parent = __Vtask_get_parent__48__Vfuncout;
        if (((VlNull{} == from_parent) | (VlNull{} 
                                          == to_parent))) {
            m_check_relationship__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(from_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 700)->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__49__Vfuncout);
        from_gparent = __Vtask_get_parent__49__Vfuncout;
        VL_NULL_CHECK(to_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 701)->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__50__Vfuncout);
        to_gparent = __Vtask_get_parent__50__Vfuncout;
        if (((([&]() {
                            VL_NULL_CHECK(from, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 705)
               ->__VnoInFunc_is_port(vlSymsp, __Vtask_is_port__51__Vfuncout);
                        }(), (IData)(__Vtask_is_port__51__Vfuncout)) 
              && ([&]() {
                            VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 705)
                  ->__VnoInFunc_is_port(vlSymsp, __Vtask_is_port__52__Vfuncout);
                        }(), (IData)(__Vtask_is_port__52__Vfuncout))) 
             && (from_gparent != to_parent))) {
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN(
                                                                                ([&]() {
                                        VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 706)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__53__Vfuncout);
                                    }(), __Vtask_get_full_name__53__Vfuncout), " (of type "s), 
                                                                            ([&]() {
                                    VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 707)
                                                                             ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__54__Vfuncout);
                                }(), __Vtask_get_type_name__54__Vfuncout)), ") is not up one level of hierarchy from this port. "s), "A port-to-port connection takes the form "s), "child_component.child_port.connect(parent_port)"s);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 711)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Connection Warning"s, s, 0U, ""s, 0U, ""s, 0U);
            m_check_relationship__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else if (((([&]() {
                            VL_NULL_CHECK(from, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 718)
                      ->__VnoInFunc_is_port(vlSymsp, __Vtask_is_port__56__Vfuncout);
                        }(), (IData)(__Vtask_is_port__56__Vfuncout)) 
                     && (([&]() {
                                VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 718)
                          ->__VnoInFunc_is_export(vlSymsp, __Vtask_is_export__57__Vfuncout);
                            }(), (IData)(__Vtask_is_export__57__Vfuncout)) 
                         || ([&]() {
                                VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 718)
                             ->__VnoInFunc_is_imp(vlSymsp, __Vtask_is_imp__58__Vfuncout);
                            }(), (IData)(__Vtask_is_imp__58__Vfuncout)))) 
                    && (from_gparent != to_gparent))) {
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN(
                                                                                ([&]() {
                                        VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 720)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__59__Vfuncout);
                                    }(), __Vtask_get_full_name__59__Vfuncout), " (of type "s), 
                                                                            ([&]() {
                                    VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 721)
                                                                             ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__60__Vfuncout);
                                }(), __Vtask_get_type_name__60__Vfuncout)), ") is not at the same level of hierarchy as this port. "s), "A port-to-export connection takes the form "s), "component1.port.connect(component2.export)"s);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 725)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Connection Warning"s, s, 0U, ""s, 0U, ""s, 0U);
            m_check_relationship__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else if (((([&]() {
                            VL_NULL_CHECK(from, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732)
                      ->__VnoInFunc_is_export(vlSymsp, __Vtask_is_export__62__Vfuncout);
                        }(), (IData)(__Vtask_is_export__62__Vfuncout)) 
                     && (([&]() {
                                VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732)
                          ->__VnoInFunc_is_export(vlSymsp, __Vtask_is_export__63__Vfuncout);
                            }(), (IData)(__Vtask_is_export__63__Vfuncout)) 
                         || ([&]() {
                                VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732)
                             ->__VnoInFunc_is_imp(vlSymsp, __Vtask_is_imp__64__Vfuncout);
                            }(), (IData)(__Vtask_is_imp__64__Vfuncout)))) 
                    && (from_parent != to_gparent))) {
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN(
                                                                                ([&]() {
                                        VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 734)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__65__Vfuncout);
                                    }(), __Vtask_get_full_name__65__Vfuncout), " (of type "s), 
                                                                            ([&]() {
                                    VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 735)
                                                                             ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__66__Vfuncout);
                                }(), __Vtask_get_type_name__66__Vfuncout)), ") is not down one level of hierarchy from this export. "s), "An export-to-export or export-to-imp connection takes the form "s), "parent_export.connect(child_component.child_export)"s);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 739)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Connection Warning"s, s, 0U, ""s, 0U, ""s, 0U);
            m_check_relationship__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        m_check_relationship__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_m_add_list(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223> provider) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_m_add_list\n"); );
    // Locals
    IData/*31:0*/ __Vtask_size__68__Vfuncout;
    __Vtask_size__68__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223> __Vtask_get_if__69__Vfuncout;
    std::string __Vtask_get_full_name__70__Vfuncout;
    std::string __Vtask_get_full_name__71__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk7__DOT__i;
    unnamedblk7__DOT__i = 0;
    std::string sz;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223> imp;
    unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk7__DOT__i, ([&]() {
                    VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 755)
                                                ->__VnoInFunc_size(vlSymsp, __Vtask_size__68__Vfuncout);
                }(), __Vtask_size__68__Vfuncout))) {
        VL_NULL_CHECK(provider, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 756)->__VnoInFunc_get_if(vlProcess, vlSymsp, unnamedblk7__DOT__i, __Vtask_get_if__69__Vfuncout);
        imp = __Vtask_get_if__69__Vfuncout;
        if ((! this->__PVT__m_imp_list.exists(([&]() {
                            VL_NULL_CHECK(imp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 757)
                                               ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__70__Vfuncout);
                        }(), __Vtask_get_full_name__70__Vfuncout)))) {
            this->__PVT__m_imp_list.at(([&]() {
                        VL_NULL_CHECK(imp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 758)
                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__71__Vfuncout);
                    }(), __Vtask_get_full_name__71__Vfuncout)) 
                = imp;
        }
        unnamedblk7__DOT__i = ((IData)(1U) + unnamedblk7__DOT__i);
    }
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_resolve_bindings\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is_imp__72__Vfuncout;
    __Vfunc_is_imp__72__Vfuncout = 0;
    std::string __Vfunc_get_full_name__73__Vfuncout;
    IData/*31:0*/ __Vfunc_size__76__Vfuncout;
    __Vfunc_size__76__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_min_size__77__Vfuncout;
    __Vfunc_min_size__77__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_size__79__Vfuncout;
    __Vfunc_size__79__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_min_size__80__Vfuncout;
    __Vfunc_min_size__80__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_max_size__81__Vfuncout;
    __Vfunc_max_size__81__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_size__82__Vfuncout;
    __Vfunc_size__82__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_max_size__83__Vfuncout;
    __Vfunc_max_size__83__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_size__85__Vfuncout;
    __Vfunc_size__85__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_max_size__86__Vfuncout;
    __Vfunc_max_size__86__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_size__87__Vfuncout;
    __Vfunc_size__87__Vfuncout = 0;
    // Body
    std::string unnamedblk8__DOT__nm;
    CData/*0:0*/ unnamedblk8__DOT__nm__Vfirst;
    unnamedblk8__DOT__nm__Vfirst = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223> unnamedblk8__DOT__unnamedblk9__DOT__port;
    {
        if (this->__PVT__m_resolved) {
            goto __Vlabel0;
        }
        if (([&]() {
                    this->__VnoInFunc_is_imp(vlSymsp, __Vfunc_is_imp__72__Vfuncout);
                }(), (IData)(__Vfunc_is_imp__72__Vfuncout))) {
            this->__PVT__m_imp_list.at(([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__73__Vfuncout);
                    }(), __Vfunc_get_full_name__73__Vfuncout)) 
                = VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223>{this};
        } else if ((0U != this->__PVT__m_provided_by.first(unnamedblk8__DOT__nm))) {
            unnamedblk8__DOT__nm__Vfirst = 1U;
            while (((IData)(unnamedblk8__DOT__nm__Vfirst) 
                    || (0U != this->__PVT__m_provided_by.next(unnamedblk8__DOT__nm)))) {
                unnamedblk8__DOT__nm__Vfirst = 0U;
                unnamedblk8__DOT__unnamedblk9__DOT__port 
                    = this->__PVT__m_provided_by.at(unnamedblk8__DOT__nm);
                VL_NULL_CHECK(unnamedblk8__DOT__unnamedblk9__DOT__port, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 787)->__VnoInFunc_resolve_bindings(vlProcess, vlSymsp);
                this->__VnoInFunc_m_add_list(vlProcess, vlSymsp, unnamedblk8__DOT__unnamedblk9__DOT__port);
            }
        }
        this->__PVT__m_resolved = 1U;
        if (VL_LTS_III(32, ([&]() {
                        this->__VnoInFunc_size(vlSymsp, __Vfunc_size__76__Vfuncout);
                    }(), __Vfunc_size__76__Vfuncout), 
                       ([&]() {
                        this->__VnoInFunc_min_size(vlSymsp, __Vfunc_min_size__77__Vfuncout);
                    }(), __Vfunc_min_size__77__Vfuncout))) {
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 795)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, VL_SFORMATF_N_NX("connection count of %0d does not meet required minimum of %0d",0,
                                                                                32,
                                                                                ([&]() {
                                this->__VnoInFunc_size(vlSymsp, __Vfunc_size__79__Vfuncout);
                            }(), __Vfunc_size__79__Vfuncout),
                                                                                32,
                                                                                ([&]() {
                                this->__VnoInFunc_min_size(vlSymsp, __Vfunc_min_size__80__Vfuncout);
                            }(), __Vfunc_min_size__80__Vfuncout)) , 0U, ""s, 0U, ""s, 0U);
        }
        if (((0xffffffffU != ([&]() {
                            this->__VnoInFunc_max_size(vlSymsp, __Vfunc_max_size__81__Vfuncout);
                        }(), __Vfunc_max_size__81__Vfuncout)) 
             & VL_GTS_III(32, ([&]() {
                            this->__VnoInFunc_size(vlSymsp, __Vfunc_size__82__Vfuncout);
                        }(), __Vfunc_size__82__Vfuncout), 
                          ([&]() {
                            this->__VnoInFunc_max_size(vlSymsp, __Vfunc_max_size__83__Vfuncout);
                        }(), __Vfunc_max_size__83__Vfuncout)))) {
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 801)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, VL_SFORMATF_N_NX("connection count of %0d exceeds maximum of %0d",0,
                                                                                32,
                                                                                ([&]() {
                                this->__VnoInFunc_size(vlSymsp, __Vfunc_size__85__Vfuncout);
                            }(), __Vfunc_size__85__Vfuncout),
                                                                                32,
                                                                                ([&]() {
                                this->__VnoInFunc_max_size(vlSymsp, __Vfunc_max_size__86__Vfuncout);
                            }(), __Vfunc_max_size__86__Vfuncout)) , 0U, ""s, 0U, ""s, 0U);
        }
        if ((0U != ([&]() {
                        this->__VnoInFunc_size(vlSymsp, __Vfunc_size__87__Vfuncout);
                    }(), __Vfunc_size__87__Vfuncout))) {
            this->__VnoInFunc_set_if(vlProcess, vlSymsp, 0U);
        }
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_get_if(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223> &get_if__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::__VnoInFunc_get_if\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_size__89__Vfuncout;
    __Vfunc_size__89__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_size__91__Vfuncout;
    __Vfunc_size__91__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_size__92__Vfuncout;
    __Vfunc_size__92__Vfuncout = 0;
    // Body
    std::string unnamedblk10__DOT__nm;
    CData/*0:0*/ unnamedblk10__DOT__nm__Vfirst;
    unnamedblk10__DOT__nm__Vfirst = 0;
    std::string s;
    {
        if ((0U == ([&]() {
                        this->__VnoInFunc_size(vlSymsp, __Vfunc_size__89__Vfuncout);
                    }(), __Vfunc_size__89__Vfuncout))) {
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 822)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "get_if"s, "Port size is zero; cannot get interface at any index"s, 0U, ""s, 0U, ""s, 0U);
            get_if__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((VL_GTS_III(32, 0U, index) | VL_GTES_III(32, index, 
                                                     ([&]() {
                            this->__VnoInFunc_size(vlSymsp, __Vfunc_size__91__Vfuncout);
                        }(), __Vfunc_size__91__Vfuncout)))) {
            VL_SFORMAT_NX(64,s,"Index %0d out of range [0,%0d]",0,
                          32,index,32,(([&]() {
                                this->__VnoInFunc_size(vlSymsp, __Vfunc_size__92__Vfuncout);
                            }(), __Vfunc_size__92__Vfuncout) 
                                       - (IData)(1U)));
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 828)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Connection Error"s, s, 0U, ""s, 0U, ""s, 0U);
            get_if__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((0U != this->__PVT__m_imp_list.first(unnamedblk10__DOT__nm))) {
            unnamedblk10__DOT__nm__Vfirst = 1U;
            while (((IData)(unnamedblk10__DOT__nm__Vfirst) 
                    || (0U != this->__PVT__m_imp_list.next(unnamedblk10__DOT__nm)))) {
                unnamedblk10__DOT__nm__Vfirst = 0U;
                if ((0U == index)) {
                    get_if__Vfuncrtn = this->__PVT__m_imp_list
                        .at(unnamedblk10__DOT__nm);
                    goto __Vlabel0;
                }
                index = (index - (IData)(1U));
            }
        }
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_if_mask = 0;
    __PVT__m_def_index = 0;
    __PVT__m_port_type = 0;
    __PVT__m_min_size = 0;
    __PVT__m_max_size = 0;
    __PVT__m_resolved = 0;
}

Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::~Vdma_uvm_pkg__03a__03auvm_port_base__Tz223() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_port_base__Tz223>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_port_base__Tz223::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_if_mask:" + VL_TO_STRING(__PVT__m_if_mask);
    out += ", m_if:" + VL_TO_STRING(__PVT__m_if);
    out += ", m_def_index:" + VL_TO_STRING(__PVT__m_def_index);
    out += ", m_comp:" + VL_TO_STRING(__PVT__m_comp);
    out += ", m_provided_by:" + VL_TO_STRING(__PVT__m_provided_by);
    out += ", m_provided_to:" + VL_TO_STRING(__PVT__m_provided_to);
    out += ", m_port_type:" + VL_TO_STRING(__PVT__m_port_type);
    out += ", m_min_size:" + VL_TO_STRING(__PVT__m_min_size);
    out += ", m_max_size:" + VL_TO_STRING(__PVT__m_max_size);
    out += ", m_resolved:" + VL_TO_STRING(__PVT__m_resolved);
    out += ", m_imp_list:" + VL_TO_STRING(__PVT__m_imp_list);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_tlm_if_base__Tz26_TBz26::to_string_middle();
    return (out);
}
