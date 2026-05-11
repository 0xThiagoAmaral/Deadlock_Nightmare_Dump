// Generated via Nightmare Oracle
#pragma once
#include <cstddef>

namespace deadlock_dumper {
  namespace pulse_system_dll {
    namespace CBasePulseGraphInstance {
    }
    namespace CPhysSurfaceProperties* {
    }
    namespace CPulseArraylib {
    }
    namespace CPulseCell_Base {
      constexpr std::ptrdiff_t m_nEditorNodeID = 0x8;
    }
    namespace CPulseCell_BaseFlow {
    }
    namespace CPulseCell_BaseLerp {
      constexpr std::ptrdiff_t m_WakeResume = 0x48;
    }
    namespace CPulseCell_BaseLerp__CursorState_t {
      constexpr std::ptrdiff_t m_StartTime = 0x0;
      constexpr std::ptrdiff_t m_EndTime = 0x4;
    }
    namespace CPulseCell_BaseRequirement {
    }
    namespace CPulseCell_BaseState {
    }
    namespace CPulseCell_BaseValue {
    }
    namespace CPulseCell_BaseYieldingInflow {
    }
    namespace CPulseCell_BooleanSwitchState {
      constexpr std::ptrdiff_t m_Condition = 0x48;
      constexpr std::ptrdiff_t m_SubGraph = 0xc0;
      constexpr std::ptrdiff_t m_WhenTrue = 0x108;
      constexpr std::ptrdiff_t m_WhenFalse = 0x150;
    }
    namespace CPulseCell_CursorQueue {
      constexpr std::ptrdiff_t m_nCursorsAllowedToRunParallel = 0x98;
    }
    namespace CPulseCell_ExampleCriteria {
    }
    namespace CPulseCell_ExampleCriteria__Criteria_t {
      constexpr std::ptrdiff_t m_flFloatValue1 = 0x0;
      constexpr std::ptrdiff_t m_flFloatValue2 = 0x4;
      constexpr std::ptrdiff_t m_bMyBool = 0x8;
    }
    namespace CPulseCell_ExampleSelector {
      constexpr std::ptrdiff_t m_OutflowList = 0x48;
    }
    namespace CPulseCell_FireCursors {
      constexpr std::ptrdiff_t m_Outflows = 0x48;
      constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60;
      constexpr std::ptrdiff_t m_OnFinished = 0x68;
      constexpr std::ptrdiff_t m_OnCanceled = 0xb0;
    }
    namespace CPulseCell_Inflow_BaseEntrypoint {
      constexpr std::ptrdiff_t m_EntryChunk = 0x48;
      constexpr std::ptrdiff_t m_RegisterMap = 0x50;
    }
    namespace CPulseCell_Inflow_EntOutputHandler {
      constexpr std::ptrdiff_t m_SourceEntity = 0x80;
      constexpr std::ptrdiff_t m_SourceOutput = 0x90;
      constexpr std::ptrdiff_t m_ExpectedParamType = 0xa0;
    }
    namespace CPulseCell_Inflow_EventHandler {
      constexpr std::ptrdiff_t m_EventName = 0x80;
    }
    namespace CPulseCell_Inflow_GraphHook {
      constexpr std::ptrdiff_t m_HookName = 0x80;
    }
    namespace CPulseCell_Inflow_Method {
      constexpr std::ptrdiff_t m_MethodName = 0x80;
      constexpr std::ptrdiff_t m_Description = 0x90;
      constexpr std::ptrdiff_t m_bIsPublic = 0x98;
      constexpr std::ptrdiff_t m_ReturnType = 0xa0;
      constexpr std::ptrdiff_t m_Args = 0xb8;
    }
    namespace CPulseCell_Inflow_ObservableVariableListener {
      constexpr std::ptrdiff_t m_nBlackboardReference = 0x80;
      constexpr std::ptrdiff_t m_bSelfReference = 0x82;
    }
    namespace CPulseCell_Inflow_Wait {
      constexpr std::ptrdiff_t m_WakeResume = 0x48;
    }
    namespace CPulseCell_Inflow_Yield {
      constexpr std::ptrdiff_t m_UnyieldResume = 0x48;
    }
    namespace CPulseCell_InlineNodeSkipSelector {
      constexpr std::ptrdiff_t m_nFlowNodeID = 0x48;
      constexpr std::ptrdiff_t m_bAnd = 0x4c;
      constexpr std::ptrdiff_t m_PassOutflow = 0x50;
      constexpr std::ptrdiff_t m_FailOutflow = 0x68;
    }
    namespace CPulseCell_IntervalTimer {
      constexpr std::ptrdiff_t m_Completed = 0x48;
      constexpr std::ptrdiff_t m_OnInterval = 0x90;
    }
    namespace CPulseCell_IntervalTimer__CursorState_t {
      constexpr std::ptrdiff_t m_StartTime = 0x0;
      constexpr std::ptrdiff_t m_EndTime = 0x4;
      constexpr std::ptrdiff_t m_flWaitInterval = 0x8;
      constexpr std::ptrdiff_t m_flWaitIntervalHigh = 0xc;
      constexpr std::ptrdiff_t m_bCompleteOnNextWake = 0x10;
    }
    namespace CPulseCell_IsRequirementValid {
    }
    namespace CPulseCell_IsRequirementValid__Criteria_t {
      constexpr std::ptrdiff_t m_bIsValid = 0x0;
    }
    namespace CPulseCell_LimitCount {
      constexpr std::ptrdiff_t m_nLimitCount = 0x48;
    }
    namespace CPulseCell_LimitCount__Criteria_t {
      constexpr std::ptrdiff_t m_bLimitCountPasses = 0x0;
    }
    namespace CPulseCell_LimitCount__InstanceState_t {
      constexpr std::ptrdiff_t m_nCurrentCount = 0x0;
    }
    namespace CPulseCell_Outflow_CycleOrdered {
      constexpr std::ptrdiff_t m_Outputs = 0x48;
    }
    namespace CPulseCell_Outflow_CycleOrdered__InstanceState_t {
      constexpr std::ptrdiff_t m_nNextIndex = 0x0;
    }
    namespace CPulseCell_Outflow_CycleRandom {
      constexpr std::ptrdiff_t m_Outputs = 0x48;
    }
    namespace CPulseCell_Outflow_CycleShuffled {
      constexpr std::ptrdiff_t m_Outputs = 0x48;
    }
    namespace CPulseCell_Outflow_CycleShuffled__InstanceState_t {
      constexpr std::ptrdiff_t m_Shuffle = 0x0;
      constexpr std::ptrdiff_t m_nNextShuffle = 0x20;
    }
    namespace CPulseCell_Outflow_TestExplicitYesNo {
      constexpr std::ptrdiff_t m_Yes = 0x48;
      constexpr std::ptrdiff_t m_No = 0x90;
    }
    namespace CPulseCell_Outflow_TestRandomYesNo {
      constexpr std::ptrdiff_t m_Yes = 0x48;
      constexpr std::ptrdiff_t m_No = 0x90;
    }
    namespace CPulseCell_PickBestOutflowSelector {
      constexpr std::ptrdiff_t m_nCheckType = 0x48;
      constexpr std::ptrdiff_t m_OutflowList = 0x50;
    }
    namespace CPulseCell_Step_CallExternalMethod {
      constexpr std::ptrdiff_t m_MethodName = 0x48;
      constexpr std::ptrdiff_t m_GameBlackboard = 0x58;
      constexpr std::ptrdiff_t m_ExpectedArgs = 0x68;
      constexpr std::ptrdiff_t m_nAsyncCallMode = 0x78;
      constexpr std::ptrdiff_t m_OnFinished = 0x80;
    }
    namespace CPulseCell_Step_DebugLog {
    }
    namespace CPulseCell_Step_PublicOutput {
      constexpr std::ptrdiff_t m_OutputIndex = 0x48;
    }
    namespace CPulseCell_Step_TestDomainCreateFakeEntity {
    }
    namespace CPulseCell_Step_TestDomainDestroyFakeEntity {
    }
    namespace CPulseCell_Step_TestDomainEntFire {
      constexpr std::ptrdiff_t m_Input = 0x48;
    }
    namespace CPulseCell_Step_TestDomainTracepoint {
    }
    namespace CPulseCell_TestWaitWithCursorState {
      constexpr std::ptrdiff_t m_WakeResume = 0x48;
      constexpr std::ptrdiff_t m_WakeCancel = 0x90;
      constexpr std::ptrdiff_t m_WakeFail = 0xd8;
    }
    namespace CPulseCell_TestWaitWithCursorState__CursorState_t {
      constexpr std::ptrdiff_t flWaitValue = 0x0;
      constexpr std::ptrdiff_t bFailOnCancel = 0x4;
    }
    namespace CPulseCell_Test_MultiInflow_NoDefault {
    }
    namespace CPulseCell_Test_MultiInflow_WithDefault {
    }
    namespace CPulseCell_Test_MultiOutflow_WithParams {
      constexpr std::ptrdiff_t m_Out1 = 0x48;
      constexpr std::ptrdiff_t m_Out2 = 0x90;
    }
    namespace CPulseCell_Test_MultiOutflow_WithParams_Yielding {
      constexpr std::ptrdiff_t m_Out1 = 0x48;
      constexpr std::ptrdiff_t m_AsyncChild1 = 0x90;
      constexpr std::ptrdiff_t m_AsyncChild2 = 0xd8;
      constexpr std::ptrdiff_t m_YieldResume1 = 0x120;
      constexpr std::ptrdiff_t m_YieldResume2 = 0x168;
    }
    namespace CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t {
      constexpr std::ptrdiff_t nTestStep = 0x0;
    }
    namespace CPulseCell_Test_NoInflow {
    }
    namespace CPulseCell_Timeline {
      constexpr std::ptrdiff_t m_TimelineEvents = 0x48;
      constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60;
      constexpr std::ptrdiff_t m_OnFinished = 0x68;
      constexpr std::ptrdiff_t m_OnCanceled = 0xb0;
    }
    namespace CPulseCell_Timeline__TimelineEvent_t {
      constexpr std::ptrdiff_t m_flTimeFromPrevious = 0x0;
      constexpr std::ptrdiff_t m_EventOutflow = 0x8;
    }
    namespace CPulseCell_Unknown {
      constexpr std::ptrdiff_t m_UnknownKeys = 0x48;
    }
    namespace CPulseCell_Val_TestDomainFindEntityByName {
    }
    namespace CPulseCell_Val_TestDomainGetEntityName {
    }
    namespace CPulseCell_Value_Curve {
      constexpr std::ptrdiff_t m_Curve = 0x48;
    }
    namespace CPulseCell_Value_Gradient {
      constexpr std::ptrdiff_t m_Gradient = 0x48;
    }
    namespace CPulseCell_Value_RandomFloat {
    }
    namespace CPulseCell_Value_RandomInt {
    }
    namespace CPulseCell_Value_TestValue50 {
    }
    namespace CPulseCell_WaitForCursorsWithTag {
      constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x98;
      constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x9c;
    }
    namespace CPulseCell_WaitForCursorsWithTagBase {
      constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0x48;
      constexpr std::ptrdiff_t m_WaitComplete = 0x50;
    }
    namespace CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
      constexpr std::ptrdiff_t m_TagName = 0x0;
    }
    namespace CPulseCell_WaitForObservable {
      constexpr std::ptrdiff_t m_Condition = 0x48;
      constexpr std::ptrdiff_t m_OnTrue = 0xc0;
    }
    namespace CPulseCursorFuncs {
    }
    namespace CPulseExecCursor {
    }
    namespace CPulseGraphDef {
      constexpr std::ptrdiff_t m_DomainIdentifier = 0x8;
      constexpr std::ptrdiff_t m_DomainSubType = 0x18;
      constexpr std::ptrdiff_t m_ParentMapName = 0x30;
      constexpr std::ptrdiff_t m_ParentXmlName = 0x40;
      constexpr std::ptrdiff_t m_Chunks = 0x50;
      constexpr std::ptrdiff_t m_Cells = 0x68;
      constexpr std::ptrdiff_t m_Vars = 0x80;
      constexpr std::ptrdiff_t m_PublicOutputs = 0x98;
      constexpr std::ptrdiff_t m_InvokeBindings = 0xb0;
      constexpr std::ptrdiff_t m_CallInfos = 0xc8;
      constexpr std::ptrdiff_t m_Constants = 0xe0;
      constexpr std::ptrdiff_t m_DomainValues = 0xf8;
      constexpr std::ptrdiff_t m_BlackboardReferences = 0x110;
      constexpr std::ptrdiff_t m_OutputConnections = 0x128;
    }
    namespace CPulseGraphInstance_TestDomain {
      constexpr std::ptrdiff_t m_bIsRunningUnitTests = 0x130;
      constexpr std::ptrdiff_t m_bExplicitTimeStepping = 0x131;
      constexpr std::ptrdiff_t m_bExpectingToDestroyWithYieldedCursors = 0x132;
      constexpr std::ptrdiff_t m_bQuietTracepoints = 0x133;
      constexpr std::ptrdiff_t m_bExpectingCursorTerminatedDueToMaxInstructions = 0x134;
      constexpr std::ptrdiff_t m_nCursorsTerminatedDueToMaxInstructions = 0x138;
      constexpr std::ptrdiff_t m_nNextValidateIndex = 0x13c;
      constexpr std::ptrdiff_t m_Tracepoints = 0x140;
      constexpr std::ptrdiff_t m_bTestYesOrNoPath = 0x158;
    }
    namespace CPulseGraphInstance_TestDomain_Derived {
      constexpr std::ptrdiff_t m_nInstanceValueX = 0x160;
    }
    namespace CPulseGraphInstance_TestDomain_FakeEntityOwner {
    }
    namespace CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView {
    }
    namespace CPulseGraphInstance_TurtleGraphics {
    }
    namespace CPulseMathlib {
    }
    namespace CPulseTestFuncs_LibraryA {
    }
    namespace CPulseTestScriptLib {
    }
    namespace CPulseTurtleGraphicsCursor {
      constexpr std::ptrdiff_t m_Color = 0xd0;
      constexpr std::ptrdiff_t m_vPos = 0xd4;
      constexpr std::ptrdiff_t m_flHeadingDeg = 0xdc;
      constexpr std::ptrdiff_t m_bPenUp = 0xe0;
    }
    namespace CPulse_BlackboardReference {
      constexpr std::ptrdiff_t m_hBlackboardResource = 0x0;
      constexpr std::ptrdiff_t m_BlackboardResource = 0x8;
      constexpr std::ptrdiff_t m_nNodeID = 0x18;
      constexpr std::ptrdiff_t m_NodeName = 0x20;
    }
    namespace CPulse_CallInfo {
      constexpr std::ptrdiff_t m_PortName = 0x0;
      constexpr std::ptrdiff_t m_nEditorNodeID = 0x10;
      constexpr std::ptrdiff_t m_RegisterMap = 0x18;
      constexpr std::ptrdiff_t m_CallMethodID = 0x48;
      constexpr std::ptrdiff_t m_nSrcChunk = 0x4c;
      constexpr std::ptrdiff_t m_nSrcInstruction = 0x50;
    }
    namespace CPulse_InvokeBinding {
      constexpr std::ptrdiff_t m_RegisterMap = 0x0;
      constexpr std::ptrdiff_t m_FuncName = 0x30;
      constexpr std::ptrdiff_t m_nCellIndex = 0x40;
      constexpr std::ptrdiff_t m_nSrcChunk = 0x44;
      constexpr std::ptrdiff_t m_nSrcInstruction = 0x48;
    }
    namespace CPulse_OutflowConnection {
      constexpr std::ptrdiff_t m_SourceOutflowName = 0x0;
      constexpr std::ptrdiff_t m_nDestChunk = 0x10;
      constexpr std::ptrdiff_t m_nInstruction = 0x14;
      constexpr std::ptrdiff_t m_OutflowRegisterMap = 0x18;
    }
    namespace CPulse_ResumePoint {
    }
    namespace CTestDomainDerived_Cursor {
      constexpr std::ptrdiff_t m_nCursorValueA = 0xd0;
      constexpr std::ptrdiff_t m_nCursorValueB = 0xd4;
    }
    namespace CUtlVector< CPhysSurfaceProperties* > {
    }
    namespace CUtlVector< CPulseCell_Timeline__TimelineEvent_t > {
    }
    namespace CUtlVector< PhysShapeMarkup_t > {
    }
    namespace CUtlVector< PulseRuntimeBlackboardReferenceIndex_t > {
    }
    namespace CUtlVector< PulseRuntimeVarIndex_t > {
    }
    namespace CUtlVector< RnCapsuleDesc_t > {
    }
    namespace CUtlVector< RnHullDesc_t > {
    }
    namespace CUtlVector< RnMeshDesc_t > {
    }
    namespace CUtlVector< RnSoftbodyCapsule_t > {
    }
    namespace CUtlVector< RnSoftbodyParticle_t > {
    }
    namespace CUtlVector< RnSoftbodySpring_t > {
    }
    namespace CUtlVector< RnSphereDesc_t > {
    }
    namespace CUtlVector< VPhysXBodyPart_t > {
    }
    namespace CUtlVector< VPhysXCollisionAttributes_t > {
    }
    namespace CUtlVector< VPhysXConstraint2_t > {
    }
    namespace CUtlVector< VPhysXJoint_t > {
    }
    namespace FakeEntityDerivedA_tAPI {
    }
    namespace FakeEntityDerivedB_tAPI {
    }
    namespace FakeEntity_tAPI {
    }
    namespace OutflowWithRequirements_t {
      constexpr std::ptrdiff_t m_Connection = 0x0;
      constexpr std::ptrdiff_t m_DestinationFlowNodeID = 0x48;
      constexpr std::ptrdiff_t m_RequirementNodeIDs = 0x50;
      constexpr std::ptrdiff_t m_nCursorStateBlockIndex = 0x68;
    }
    namespace PhysShapeMarkup_t {
      constexpr std::ptrdiff_t m_nBodyInAggregate = 0x0;
      constexpr std::ptrdiff_t m_nShapeInBody = 0x4;
      constexpr std::ptrdiff_t m_sHitGroup = 0x8;
    }
    namespace PulseNodeDynamicOutflows_t {
      constexpr std::ptrdiff_t m_Outflows = 0x0;
    }
    namespace PulseNodeDynamicOutflows_t__DynamicOutflow_t {
      constexpr std::ptrdiff_t m_OutflowID = 0x0;
      constexpr std::ptrdiff_t m_Connection = 0x8;
    }
    namespace PulseObservableBoolExpression_t {
      constexpr std::ptrdiff_t m_EvaluateConnection = 0x0;
      constexpr std::ptrdiff_t m_DependentObservableVars = 0x48;
      constexpr std::ptrdiff_t m_DependentObservableBlackboardReferences = 0x60;
    }
    namespace PulseRuntimeBlackboardReferenceIndex_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace PulseRuntimeVarIndex_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace PulseSelectorOutflowList_t {
      constexpr std::ptrdiff_t m_Outflows = 0x0;
    }
    namespace RnCapsuleDesc_t {
      constexpr std::ptrdiff_t m_Capsule = 0x18;
    }
    namespace RnHullDesc_t {
      constexpr std::ptrdiff_t m_Hull = 0x18;
    }
    namespace RnMeshDesc_t {
      constexpr std::ptrdiff_t m_Mesh = 0x18;
    }
    namespace RnSoftbodyCapsule_t {
      constexpr std::ptrdiff_t m_vCenter = 0x0;
      constexpr std::ptrdiff_t m_flRadius = 0x18;
      constexpr std::ptrdiff_t m_nParticle = 0x1c;
    }
    namespace RnSoftbodyParticle_t {
      constexpr std::ptrdiff_t m_flMassInv = 0x0;
    }
    namespace RnSoftbodySpring_t {
      constexpr std::ptrdiff_t m_nParticle = 0x0;
      constexpr std::ptrdiff_t m_flLength = 0x4;
    }
    namespace RnSphereDesc_t {
      constexpr std::ptrdiff_t m_Sphere = 0x18;
    }
    namespace SignatureOutflow_Continue {
    }
    namespace SignatureOutflow_Resume {
    }
    namespace VPhysXBodyPart_t {
      constexpr std::ptrdiff_t m_nFlags = 0x0;
      constexpr std::ptrdiff_t m_flMass = 0x4;
      constexpr std::ptrdiff_t m_rnShape = 0x8;
      constexpr std::ptrdiff_t m_nCollisionAttributeIndex = 0x80;
      constexpr std::ptrdiff_t m_nReserved = 0x82;
      constexpr std::ptrdiff_t m_flInertiaScale = 0x84;
      constexpr std::ptrdiff_t m_flLinearDamping = 0x88;
      constexpr std::ptrdiff_t m_flAngularDamping = 0x8c;
      constexpr std::ptrdiff_t m_flLinearDrag = 0x90;
      constexpr std::ptrdiff_t m_flAngularDrag = 0x94;
      constexpr std::ptrdiff_t m_bOverrideMassCenter = 0x98;
      constexpr std::ptrdiff_t m_vMassCenterOverride = 0x9c;
    }
    namespace VPhysXCollisionAttributes_t {
      constexpr std::ptrdiff_t m_nIncludeDetailLayerCount = 0x0;
      constexpr std::ptrdiff_t m_CollisionGroup = 0x4;
      constexpr std::ptrdiff_t m_InteractAs = 0x8;
      constexpr std::ptrdiff_t m_InteractWith = 0x20;
      constexpr std::ptrdiff_t m_InteractExclude = 0x38;
      constexpr std::ptrdiff_t m_DetailLayers = 0x50;
      constexpr std::ptrdiff_t m_CollisionGroupString = 0x68;
      constexpr std::ptrdiff_t m_InteractAsStrings = 0x70;
      constexpr std::ptrdiff_t m_InteractWithStrings = 0x88;
      constexpr std::ptrdiff_t m_InteractExcludeStrings = 0xa0;
      constexpr std::ptrdiff_t m_DetailLayerStrings = 0xb8;
    }
    namespace VPhysXConstraint2_t {
      constexpr std::ptrdiff_t m_nFlags = 0x0;
      constexpr std::ptrdiff_t m_nParent = 0x4;
      constexpr std::ptrdiff_t m_nChild = 0x6;
      constexpr std::ptrdiff_t m_params = 0x8;
    }
    namespace VPhysXJoint_t {
      constexpr std::ptrdiff_t m_nType = 0x0;
      constexpr std::ptrdiff_t m_nBody1 = 0x2;
      constexpr std::ptrdiff_t m_nBody2 = 0x4;
      constexpr std::ptrdiff_t m_nFlags = 0x6;
      constexpr std::ptrdiff_t m_Frame1 = 0x10;
      constexpr std::ptrdiff_t m_Frame2 = 0x30;
      constexpr std::ptrdiff_t m_bEnableCollision = 0x50;
      constexpr std::ptrdiff_t m_bIsLinearConstraintDisabled = 0x51;
      constexpr std::ptrdiff_t m_bIsAngularConstraintDisabled = 0x52;
      constexpr std::ptrdiff_t m_bEnableLinearLimit = 0x53;
      constexpr std::ptrdiff_t m_LinearLimit = 0x54;
      constexpr std::ptrdiff_t m_bEnableLinearMotor = 0x5c;
      constexpr std::ptrdiff_t m_vLinearTargetVelocity = 0x60;
      constexpr std::ptrdiff_t m_flMaxForce = 0x6c;
      constexpr std::ptrdiff_t m_bEnableSwingLimit = 0x70;
      constexpr std::ptrdiff_t m_SwingLimit = 0x74;
      constexpr std::ptrdiff_t m_bEnableTwistLimit = 0x7c;
      constexpr std::ptrdiff_t m_TwistLimit = 0x80;
      constexpr std::ptrdiff_t m_bEnableAngularMotor = 0x88;
      constexpr std::ptrdiff_t m_vAngularTargetVelocity = 0x8c;
      constexpr std::ptrdiff_t m_flMaxTorque = 0x98;
      constexpr std::ptrdiff_t m_flLinearFrequency = 0x9c;
      constexpr std::ptrdiff_t m_flLinearDampingRatio = 0xa0;
      constexpr std::ptrdiff_t m_flAngularFrequency = 0xa4;
      constexpr std::ptrdiff_t m_flAngularDampingRatio = 0xa8;
      constexpr std::ptrdiff_t m_flFriction = 0xac;
      constexpr std::ptrdiff_t m_flElasticity = 0xb0;
      constexpr std::ptrdiff_t m_flElasticDamping = 0xb4;
      constexpr std::ptrdiff_t m_flPlasticity = 0xb8;
      constexpr std::ptrdiff_t m_Tag = 0xc0;
    }
  }
}
