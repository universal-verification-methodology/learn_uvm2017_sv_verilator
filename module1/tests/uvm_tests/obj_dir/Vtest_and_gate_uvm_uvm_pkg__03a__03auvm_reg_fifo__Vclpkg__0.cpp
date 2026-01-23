// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ size, IData/*31:0*/ n_bits, IData/*31:0*/ has_cover)
    : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg(vlProcess, vlSymsp, name, n_bits, has_cover) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_size = size;
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__Vfifo_size, 0x0000000000000020ULL, 
                                                                              "__Vfifo_size", 0ULL);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_build(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_build\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_field> __Vfunc_create__1__Vfuncout;
    IData/*31:0*/ __Vfunc_get_n_bits__3__Vfuncout;
    __Vfunc_get_n_bits__3__Vfuncout = 0;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi110__Vclpkg.__VnoInFunc_create(vlSymsp, "value"s, VlNull{}, ""s, __Vfunc_create__1__Vfuncout);
    this->__PVT__value = __Vfunc_create__1__Vfuncout;
    VL_NULL_CHECK(this->__PVT__value, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_fifo.svh", 80)->__VnoInFunc_configure(vlSymsp, 
                                                                                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo>{this}, 
                                                                                ([&]() {
                this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__3__Vfuncout);
            }(), __Vfunc_get_n_bits__3__Vfuncout), 0U, "RW"s, 0U, 0ULL, 1U, 0U, 1U);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_set_compare(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ check) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_set_compare\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__value, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_fifo.svh", 87)->__VnoInFunc_set_compare(vlSymsp, check);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_size(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__fifo.size();
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_capacity(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &capacity__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_capacity\n"); );
    // Body
    capacity__Vfuncrtn = this->__PVT__m_size;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_set(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_set\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_n_bits__5__Vfuncout;
    __Vfunc_get_n_bits__5__Vfuncout = 0;
    // Body
    {
        value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                        ([&]() {
                            this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__5__Vfuncout);
                        }(), __Vfunc_get_n_bits__5__Vfuncout)) 
                          - 1ULL));
        if ((this->__PVT__fifo.size() == this->__PVT__m_size)) {
            goto __Vlabel0;
        }
        Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set(vlProcess, vlSymsp, value, fname, lineno);
        this->__PVT__m_set_cnt = ((IData)(1U) + this->__PVT__m_set_cnt);
        this->__PVT__fifo.push_back(VL_NULL_CHECK(this->__PVT__value, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_fifo.svh", 148)
                                    ->__PVT__value);
        __Vlabel0: ;
    }
}

VlCoroutine Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_update(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_update\n"); );
    // Locals
    IData/*31:0*/ __Vtask_write__7__status;
    __Vtask_write__7__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    QData/*63:0*/ upd;
    upd = 0;
    {
        if ((1U & ((~ (0U != this->__PVT__m_set_cnt)) 
                   | (0U == this->__PVT__fifo.size())))) {
            goto __Vlabel0;
        }
        Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg::__PVT__m_update_in_progress = 1U;
        unnamedblk1__DOT__i = (this->__PVT__fifo.size() 
                               - this->__PVT__m_set_cnt);
        while (VL_LTS_III(32, 0U, this->__PVT__m_set_cnt)) {
            if (VL_LTES_III(32, 0U, unnamedblk1__DOT__i)) {
                co_await this->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__7__status, this->__PVT__fifo.at(unnamedblk1__DOT__i), path, map, parent, prior, extension, fname, lineno);
                status = __Vtask_write__7__status;
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
            this->__PVT__m_set_cnt = (this->__PVT__m_set_cnt 
                                      - (IData)(1U));
        }
        Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg::__PVT__m_update_in_progress = 0U;
        __Vlabel0: ;
    }
    co_return;}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_get(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_get\n"); );
    // Body
    get__Vfuncrtn = this->__PVT__fifo.at(0U);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_do_predict(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_do_predict\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_n_bits__9__Vfuncout;
    __Vfunc_get_n_bits__9__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_compare__10__Vfuncout;
    __Vtask_get_compare__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__Vfuncout;
    __Vfunc_uvm_report_enabled__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__verbosity;
    __Vfunc_uvm_report_enabled__11__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__11__severity;
    __Vfunc_uvm_report_enabled__11__severity = 0;
    std::string __Vfunc_uvm_report_enabled__11__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__14__Vfuncout;
    __Vtask_uvm_report_enabled__14__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__15__id;
    std::string __Vtask_uvm_report_warning__15__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__15__verbosity;
    __Vtask_uvm_report_warning__15__verbosity = 0;
    std::string __Vtask_uvm_report_warning__15__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__15__line;
    __Vtask_uvm_report_warning__15__line = 0;
    std::string __Vtask_uvm_report_warning__15__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__15__report_enabled_checked;
    __Vtask_uvm_report_warning__15__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    // Body
    QData/*63:0*/ unnamedblk2__DOT__value;
    unnamedblk2__DOT__value = 0;
    QData/*63:0*/ unnamedblk2__DOT__mirror_val;
    unnamedblk2__DOT__mirror_val = 0;
    {
        Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, (IData)(be));
        if ((1U == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_fifo.svh", 215)
             ->__PVT__status)) {
            goto __Vlabel0;
        }
        if (((2U == kind) || (0U == kind))) {
            if (((this->__PVT__fifo.size() != this->__PVT__m_size) 
                 & (~ (IData)(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg::__PVT__m_update_in_progress)))) {
                this->__PVT__fifo.push_back(VL_NULL_CHECK(this->__PVT__value, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_fifo.svh", 224)
                                            ->__PVT__value);
            }
        } else if ((1U == kind)) {
            unnamedblk2__DOT__value = (VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_fifo.svh", 229)
                                       ->__PVT__value.at(0U) 
                                       & (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                        ([&]() {
                                this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__9__Vfuncout);
                            }(), __Vfunc_get_n_bits__9__Vfuncout)) 
                                          - 1ULL));
            if ((0U == this->__PVT__fifo.size())) {
                goto __Vlabel0;
            }
            unnamedblk2__DOT__mirror_val = this->__PVT__fifo.pop_front();
            if (((1U == ([&]() {
                                VL_NULL_CHECK(this->__PVT__value, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_fifo.svh", 235)
                         ->__VnoInFunc_get_compare(vlSymsp, __Vtask_get_compare__10__Vfuncout);
                            }(), __Vtask_get_compare__10__Vfuncout)) 
                 && (unnamedblk2__DOT__mirror_val != unnamedblk2__DOT__value))) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__11__id = "MIRROR_MISMATCH"s;
                                __Vfunc_uvm_report_enabled__11__severity = 1U;
                                __Vfunc_uvm_report_enabled__11__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__12__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__13__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__11__verbosity, (IData)(__Vfunc_uvm_report_enabled__11__severity), __Vfunc_uvm_report_enabled__11__id, __Vtask_uvm_report_enabled__14__Vfuncout);
                                __Vfunc_uvm_report_enabled__11__Vfuncout 
                                    = __Vtask_uvm_report_enabled__14__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__11__Vfuncout))) {
                    __Vtask_uvm_report_warning__15__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__15__context_name = ""s;
                    __Vtask_uvm_report_warning__15__line = 0x000000edU;
                    __Vtask_uvm_report_warning__15__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_fifo.svh"s;
                    __Vtask_uvm_report_warning__15__verbosity = 0U;
                    __Vtask_uvm_report_warning__15__message 
                        = VL_SFORMATF_N_NX("Observed DUT read value 'h%0x != mirror value 'h%0x",0,
                                           64,unnamedblk2__DOT__value,
                                           64,unnamedblk2__DOT__mirror_val) ;
                    __Vtask_uvm_report_warning__15__id = "MIRROR_MISMATCH"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__16__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__17__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__15__id, __Vtask_uvm_report_warning__15__message, __Vtask_uvm_report_warning__15__verbosity, __Vtask_uvm_report_warning__15__filename, __Vtask_uvm_report_warning__15__line, __Vtask_uvm_report_warning__15__context_name, (IData)(__Vtask_uvm_report_warning__15__report_enabled_checked));
                }
            }
        }
        __Vlabel0: ;
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_pre_write(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_pre_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__19__Vfuncout;
    __Vfunc_uvm_report_enabled__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__19__verbosity;
    __Vfunc_uvm_report_enabled__19__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__19__severity;
    __Vfunc_uvm_report_enabled__19__severity = 0;
    std::string __Vfunc_uvm_report_enabled__19__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__20__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__21__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__22__Vfuncout;
    __Vtask_uvm_report_enabled__22__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__23__id;
    std::string __Vtask_uvm_report_error__23__message;
    IData/*31:0*/ __Vtask_uvm_report_error__23__verbosity;
    __Vtask_uvm_report_error__23__verbosity = 0;
    std::string __Vtask_uvm_report_error__23__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__23__line;
    __Vtask_uvm_report_error__23__line = 0;
    std::string __Vtask_uvm_report_error__23__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__23__report_enabled_checked;
    __Vtask_uvm_report_error__23__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__24__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__25__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__27__Vfuncout;
    __Vfunc_uvm_report_enabled__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__27__verbosity;
    __Vfunc_uvm_report_enabled__27__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__27__severity;
    __Vfunc_uvm_report_enabled__27__severity = 0;
    std::string __Vfunc_uvm_report_enabled__27__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__28__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__29__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__30__Vfuncout;
    __Vtask_uvm_report_enabled__30__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__31__id;
    std::string __Vtask_uvm_report_error__31__message;
    IData/*31:0*/ __Vtask_uvm_report_error__31__verbosity;
    __Vtask_uvm_report_error__31__verbosity = 0;
    std::string __Vtask_uvm_report_error__31__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__31__line;
    __Vtask_uvm_report_error__31__line = 0;
    std::string __Vtask_uvm_report_error__31__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__31__report_enabled_checked;
    __Vtask_uvm_report_error__31__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__32__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__33__Vfuncout;
    // Body
    {
        if (((0U != this->__PVT__m_set_cnt) & (~ (IData)(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg::__PVT__m_update_in_progress)))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__19__id = "Needs Update"s;
                            __Vfunc_uvm_report_enabled__19__severity = 2U;
                            __Vfunc_uvm_report_enabled__19__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__20__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__20__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__21__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__21__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__19__verbosity, (IData)(__Vfunc_uvm_report_enabled__19__severity), __Vfunc_uvm_report_enabled__19__id, __Vtask_uvm_report_enabled__22__Vfuncout);
                            __Vfunc_uvm_report_enabled__19__Vfuncout 
                                = __Vtask_uvm_report_enabled__22__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__19__Vfuncout))) {
                __Vtask_uvm_report_error__23__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__23__context_name = ""s;
                __Vtask_uvm_report_error__23__line = 0x00000103U;
                __Vtask_uvm_report_error__23__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_fifo.svh"s;
                __Vtask_uvm_report_error__23__verbosity = 0U;
                __Vtask_uvm_report_error__23__message = "Must call update() after set() and before write()"s;
                __Vtask_uvm_report_error__23__id = "Needs Update"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__24__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__24__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__25__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__25__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__23__id, __Vtask_uvm_report_error__23__message, __Vtask_uvm_report_error__23__verbosity, __Vtask_uvm_report_error__23__filename, __Vtask_uvm_report_error__23__line, __Vtask_uvm_report_error__23__context_name, (IData)(__Vtask_uvm_report_error__23__report_enabled_checked));
            }
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_fifo.svh", 260)->__PVT__status = 1U;
            goto __Vlabel0;
        }
        if (((this->__PVT__fifo.size() >= this->__PVT__m_size) 
             & (~ (IData)(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg::__PVT__m_update_in_progress)))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__27__id = "FIFO Full"s;
                            __Vfunc_uvm_report_enabled__27__severity = 2U;
                            __Vfunc_uvm_report_enabled__27__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__28__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__28__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__29__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__29__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__27__verbosity, (IData)(__Vfunc_uvm_report_enabled__27__severity), __Vfunc_uvm_report_enabled__27__id, __Vtask_uvm_report_enabled__30__Vfuncout);
                            __Vfunc_uvm_report_enabled__27__Vfuncout 
                                = __Vtask_uvm_report_enabled__30__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__27__Vfuncout))) {
                __Vtask_uvm_report_error__31__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__31__context_name = ""s;
                __Vtask_uvm_report_error__31__line = 0x00000108U;
                __Vtask_uvm_report_error__31__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_fifo.svh"s;
                __Vtask_uvm_report_error__31__verbosity = 0U;
                __Vtask_uvm_report_error__31__message = "Write to full FIFO ignored"s;
                __Vtask_uvm_report_error__31__id = "FIFO Full"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__32__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__32__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__33__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__33__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__31__id, __Vtask_uvm_report_error__31__message, __Vtask_uvm_report_error__31__verbosity, __Vtask_uvm_report_error__31__filename, __Vtask_uvm_report_error__31__line, __Vtask_uvm_report_error__31__context_name, (IData)(__Vtask_uvm_report_error__31__report_enabled_checked));
            }
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_fifo.svh", 265)->__PVT__status = 1U;
        }
        __Vlabel0: ;
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_pre_read(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_pre_read\n"); );
    // Body
    if ((0U == this->__PVT__fifo.size())) {
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_fifo.svh", 282)->__PVT__status = 1U;
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_post_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_post_randomize\n"); );
    // Body
    this->__PVT__m_set_cnt = 0U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_valid_fifo_size_resize_constrained_array(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_valid_fifo_size_resize_constrained_array\n"); );
    // Body
    this->__PVT__fifo.resize(this->__Vfifo_size);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__37__Vfuncout;
    __Vfunc___VBasicRand__37__Vfuncout = 0;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___Vresize_constrained_arrays(vlSymsp);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__37__Vfuncout);
            }(), __Vfunc___VBasicRand__37__Vfuncout));
    this->__VnoInFunc_post_randomize(vlSymsp);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_valid_fifo_size_setup_constraint(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_valid_fifo_size_setup_constraint\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    __Vtemp_1 = VL_SFORMATF_N_NX("#x%x",0,32,this->__PVT__m_size) ;
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (bvule __Vfifo_size %@))",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_fifo.svh", 
                                                                         54, 
                                                                         "      fifo.size() <= m_size;");
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard("(__Vbv (bvsge __Vfifo_size #x00000000))"s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_fifo.svh", 
                                                                         54, 
                                                                         "      fifo.size() <= m_size;");
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_valid_fifo_size_setup_constraint(vlSymsp);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___Vresize_constrained_arrays(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___Vresize_constrained_arrays\n"); );
    // Body
    this->__VnoInFunc_valid_fifo_size_resize_constrained_array(vlSymsp);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___VBasicRand\n"); );
    // Body
    IData/*31:0*/ unnamedblk2_1__DOT____Vrandarr___0;
    unnamedblk2_1__DOT____Vrandarr___0 = 0;
    __VBasicRand__Vfuncrtn = 1U;
    unnamedblk2_1__DOT____Vrandarr___0 = 0U;
    while ((unnamedblk2_1__DOT____Vrandarr___0 < this->__PVT__fifo.size())) {
        this->__PVT__fifo.atWriteAppend(unnamedblk2_1__DOT____Vrandarr___0) 
            = VL_RANDOM_RNG_Q(__Vm_rng);
        unnamedblk2_1__DOT____Vrandarr___0 = ((IData)(1U) 
                                              + unnamedblk2_1__DOT____Vrandarr___0);
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_set_cnt = 0;
    __PVT__m_size = 0;
    __PVT__fifo.atDefault() = 0;
    __Vfifo_size = 0;
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_fifo::to_string_middle\n"); );
    // Body
    std::string out;
    out += "value:" + VL_TO_STRING(__PVT__value);
    out += ", m_set_cnt:" + VL_TO_STRING(__PVT__m_set_cnt);
    out += ", m_size:" + VL_TO_STRING(__PVT__m_size);
    out += ", fifo:" + VL_TO_STRING(__PVT__fifo);
    out += ", __Vfifo_size:" + VL_TO_STRING(__Vfifo_size);
    out += ", "+ Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg::to_string_middle();
    return (out);
}
