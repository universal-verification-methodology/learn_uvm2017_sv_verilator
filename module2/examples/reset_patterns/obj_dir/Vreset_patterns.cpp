// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vreset_patterns__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vreset_patterns::Vreset_patterns(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vreset_patterns__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vreset_patterns::Vreset_patterns(const char* _vcname__)
    : Vreset_patterns(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vreset_patterns::~Vreset_patterns() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vreset_patterns___024root___eval_debug_assertions(Vreset_patterns___024root* vlSelf);
#endif  // VL_DEBUG
void Vreset_patterns___024root___eval_static(Vreset_patterns___024root* vlSelf);
void Vreset_patterns___024root___eval_initial(Vreset_patterns___024root* vlSelf);
void Vreset_patterns___024root___eval_settle(Vreset_patterns___024root* vlSelf);
void Vreset_patterns___024root___eval(Vreset_patterns___024root* vlSelf);

void Vreset_patterns::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vreset_patterns::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vreset_patterns___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vreset_patterns___024root___eval_static(&(vlSymsp->TOP));
        Vreset_patterns___024root___eval_initial(&(vlSymsp->TOP));
        Vreset_patterns___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vreset_patterns___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vreset_patterns::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vreset_patterns::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vreset_patterns::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vreset_patterns___024root___eval_final(Vreset_patterns___024root* vlSelf);

VL_ATTR_COLD void Vreset_patterns::final() {
    Vreset_patterns___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vreset_patterns::hierName() const { return vlSymsp->name(); }
const char* Vreset_patterns::modelName() const { return "Vreset_patterns"; }
unsigned Vreset_patterns::threads() const { return 1; }
void Vreset_patterns::prepareClone() const { contextp()->prepareClone(); }
void Vreset_patterns::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vreset_patterns::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vreset_patterns___024root__trace_decl_types(VerilatedVcd* tracep);

void Vreset_patterns___024root__trace_init_top(Vreset_patterns___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vreset_patterns___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreset_patterns___024root*>(voidSelf);
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vreset_patterns___024root__trace_decl_types(tracep);
    Vreset_patterns___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vreset_patterns___024root__trace_register(Vreset_patterns___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vreset_patterns::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vreset_patterns::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vreset_patterns___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
