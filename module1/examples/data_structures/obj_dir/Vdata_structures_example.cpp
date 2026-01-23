// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdata_structures_example__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdata_structures_example::Vdata_structures_example(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdata_structures_example__Syms(contextp(), _vcname__, this)}
    , __PVT__data_structures_pkg{vlSymsp->TOP.__PVT__data_structures_pkg}
    , data_structures_pkg__03a__03aSimpleTransaction__Vclpkg{vlSymsp->TOP.data_structures_pkg__03a__03aSimpleTransaction__Vclpkg}
    , data_structures_pkg__03a__03aTransactionQueue__Vclpkg{vlSymsp->TOP.data_structures_pkg__03a__03aTransactionQueue__Vclpkg}
    , data_structures_pkg__03a__03aScoreboard__Vclpkg{vlSymsp->TOP.data_structures_pkg__03a__03aScoreboard__Vclpkg}
    , data_structures_pkg__03a__03aCoverageCollector__Vclpkg{vlSymsp->TOP.data_structures_pkg__03a__03aCoverageCollector__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vdata_structures_example::Vdata_structures_example(const char* _vcname__)
    : Vdata_structures_example(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdata_structures_example::~Vdata_structures_example() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdata_structures_example___024root___eval_debug_assertions(Vdata_structures_example___024root* vlSelf);
#endif  // VL_DEBUG
void Vdata_structures_example___024root___eval_static(Vdata_structures_example___024root* vlSelf);
void Vdata_structures_example___024root___eval_initial(Vdata_structures_example___024root* vlSelf);
void Vdata_structures_example___024root___eval_settle(Vdata_structures_example___024root* vlSelf);
void Vdata_structures_example___024root___eval(Vdata_structures_example___024root* vlSelf);

void Vdata_structures_example::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdata_structures_example::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdata_structures_example___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdata_structures_example___024root___eval_static(&(vlSymsp->TOP));
        Vdata_structures_example___024root___eval_initial(&(vlSymsp->TOP));
        Vdata_structures_example___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdata_structures_example___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdata_structures_example::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vdata_structures_example::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vdata_structures_example::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdata_structures_example___024root___eval_final(Vdata_structures_example___024root* vlSelf);

VL_ATTR_COLD void Vdata_structures_example::final() {
    Vdata_structures_example___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdata_structures_example::hierName() const { return vlSymsp->name(); }
const char* Vdata_structures_example::modelName() const { return "Vdata_structures_example"; }
unsigned Vdata_structures_example::threads() const { return 1; }
void Vdata_structures_example::prepareClone() const { contextp()->prepareClone(); }
void Vdata_structures_example::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdata_structures_example::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdata_structures_example___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdata_structures_example___024root__trace_init_top(Vdata_structures_example___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdata_structures_example___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_structures_example___024root*>(voidSelf);
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vdata_structures_example___024root__trace_decl_types(tracep);
    Vdata_structures_example___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdata_structures_example___024root__trace_register(Vdata_structures_example___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdata_structures_example::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdata_structures_example::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdata_structures_example___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
