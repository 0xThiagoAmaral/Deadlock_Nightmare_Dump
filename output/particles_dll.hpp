// Generated via Nightmare Oracle
#pragma once
#include <cstddef>

namespace deadlock_dumper {
  namespace particles_dll {
    namespace AnimationSnapshotBase_t {
      constexpr std::ptrdiff_t m_flRealTime = 0x0;
      constexpr std::ptrdiff_t m_rootToWorld = 0x10;
      constexpr std::ptrdiff_t m_bBonesInWorldSpace = 0x40;
      constexpr std::ptrdiff_t m_boneSetupMask = 0x48;
      constexpr std::ptrdiff_t m_boneTransforms = 0x60;
      constexpr std::ptrdiff_t m_flexControllers = 0x78;
      constexpr std::ptrdiff_t m_SnapshotType = 0x90;
      constexpr std::ptrdiff_t m_bHasDecodeDump = 0x94;
      constexpr std::ptrdiff_t m_DecodeDump = 0x98;
    }
    namespace CAnimActionUpdater {
    }
    namespace CAnimStateMachineUpdater {
      constexpr std::ptrdiff_t m_states = 0x8;
      constexpr std::ptrdiff_t m_transitions = 0x20;
      constexpr std::ptrdiff_t m_startStateIndex = 0x50;
    }
    namespace CBasePulseGraphInstance {
    }
    namespace CBaseRendererSource2 {
      constexpr std::ptrdiff_t m_flRadiusScale = 0x228;
      constexpr std::ptrdiff_t m_flAlphaScale = 0x398;
      constexpr std::ptrdiff_t m_flRollScale = 0x508;
      constexpr std::ptrdiff_t m_nAlpha2Field = 0x678;
      constexpr std::ptrdiff_t m_vecColorScale = 0x680;
      constexpr std::ptrdiff_t m_nColorBlendType = 0xd38;
      constexpr std::ptrdiff_t m_nShaderType = 0xd3c;
      constexpr std::ptrdiff_t m_strShaderOverride = 0xd40;
      constexpr std::ptrdiff_t m_flCenterXOffset = 0xd48;
      constexpr std::ptrdiff_t m_flCenterYOffset = 0xeb8;
      constexpr std::ptrdiff_t m_flBumpStrength = 0x1028;
      constexpr std::ptrdiff_t m_nCropTextureOverride = 0x102c;
      constexpr std::ptrdiff_t m_vecTexturesInput = 0x1030;
      constexpr std::ptrdiff_t m_flAnimationRate = 0x1040;
      constexpr std::ptrdiff_t m_nAnimationType = 0x1044;
      constexpr std::ptrdiff_t m_bAnimateInFPS = 0x1048;
      constexpr std::ptrdiff_t m_flMotionVectorScaleU = 0x1050;
      constexpr std::ptrdiff_t m_flMotionVectorScaleV = 0x11c0;
      constexpr std::ptrdiff_t m_flSelfIllumAmount = 0x1330;
      constexpr std::ptrdiff_t m_flDiffuseAmount = 0x14a0;
      constexpr std::ptrdiff_t m_flDiffuseClamp = 0x1610;
      constexpr std::ptrdiff_t m_nLightingControlPoint = 0x1780;
      constexpr std::ptrdiff_t m_nOutputBlendMode = 0x1784;
      constexpr std::ptrdiff_t m_bGammaCorrectVertexColors = 0x1788;
      constexpr std::ptrdiff_t m_bSaturateColorPreAlphaBlend = 0x1789;
      constexpr std::ptrdiff_t m_flAddSelfAmount = 0x1790;
      constexpr std::ptrdiff_t m_flDesaturation = 0x1900;
      constexpr std::ptrdiff_t m_flOverbrightFactor = 0x1a70;
      constexpr std::ptrdiff_t m_nHSVShiftControlPoint = 0x1be0;
      constexpr std::ptrdiff_t m_nFogType = 0x1be4;
      constexpr std::ptrdiff_t m_flFogAmount = 0x1be8;
      constexpr std::ptrdiff_t m_bTintByFOW = 0x1d58;
      constexpr std::ptrdiff_t m_bTintByGlobalLight = 0x1d59;
      constexpr std::ptrdiff_t m_nPerParticleAlphaReference = 0x1d5c;
      constexpr std::ptrdiff_t m_nPerParticleAlphaRefWindow = 0x1d60;
      constexpr std::ptrdiff_t m_nAlphaReferenceType = 0x1d64;
      constexpr std::ptrdiff_t m_flAlphaReferenceSoftness = 0x1d68;
      constexpr std::ptrdiff_t m_flSourceAlphaValueToMapToZero = 0x1ed8;
      constexpr std::ptrdiff_t m_flSourceAlphaValueToMapToOne = 0x2048;
      constexpr std::ptrdiff_t m_bRefract = 0x21b8;
      constexpr std::ptrdiff_t m_bRefractSolid = 0x21b9;
      constexpr std::ptrdiff_t m_bRefract2Passes = 0x21ba;
      constexpr std::ptrdiff_t m_flRefractAmount = 0x21c0;
      constexpr std::ptrdiff_t m_nRefractBlurRadius = 0x2330;
      constexpr std::ptrdiff_t m_nRefractBlurType = 0x2334;
      constexpr std::ptrdiff_t m_bOnlyRenderInEffectsBloomPass = 0x2338;
      constexpr std::ptrdiff_t m_bOnlyRenderInEffectsWaterPass = 0x2339;
      constexpr std::ptrdiff_t m_bUseMixedResolutionRendering = 0x233a;
      constexpr std::ptrdiff_t m_bOnlyRenderInEffecsGameOverlay = 0x233b;
      constexpr std::ptrdiff_t m_stencilTestID = 0x233c;
      constexpr std::ptrdiff_t m_bStencilTestExclude = 0x23bc;
      constexpr std::ptrdiff_t m_stencilWriteID = 0x23bd;
      constexpr std::ptrdiff_t m_bWriteStencilOnDepthPass = 0x243d;
      constexpr std::ptrdiff_t m_bWriteStencilOnDepthFail = 0x243e;
      constexpr std::ptrdiff_t m_bReverseZBuffering = 0x243f;
      constexpr std::ptrdiff_t m_bDisableZBuffering = 0x2440;
      constexpr std::ptrdiff_t m_nFeatheringMode = 0x2444;
      constexpr std::ptrdiff_t m_flFeatheringMinDist = 0x2448;
      constexpr std::ptrdiff_t m_flFeatheringMaxDist = 0x25b8;
      constexpr std::ptrdiff_t m_flFeatheringFilter = 0x2728;
      constexpr std::ptrdiff_t m_flFeatheringDepthMapFilter = 0x2898;
      constexpr std::ptrdiff_t m_flDepthBias = 0x2a08;
      constexpr std::ptrdiff_t m_nSortMethod = 0x2b78;
      constexpr std::ptrdiff_t m_bBlendFramesSeq0 = 0x2b7c;
      constexpr std::ptrdiff_t m_bMaxLuminanceBlendingSequence0 = 0x2b7d;
    }
    namespace CBaseTrailRenderer {
      constexpr std::ptrdiff_t m_nOrientationType = 0x2df0;
      constexpr std::ptrdiff_t m_nOrientationControlPoint = 0x2df4;
      constexpr std::ptrdiff_t m_flMinSize = 0x2df8;
      constexpr std::ptrdiff_t m_flMaxSize = 0x2dfc;
      constexpr std::ptrdiff_t m_flStartFadeSize = 0x2e00;
      constexpr std::ptrdiff_t m_flEndFadeSize = 0x2f70;
      constexpr std::ptrdiff_t m_bClampV = 0x30e0;
    }
    namespace CCycleBase {
      constexpr std::ptrdiff_t m_flCycle = 0x0;
    }
    namespace CEmitTagActionUpdater {
      constexpr std::ptrdiff_t m_nTagIndex = 0x18;
      constexpr std::ptrdiff_t m_bIsZeroDuration = 0x1c;
    }
    namespace CGeneralRandomRotation {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e0;
      constexpr std::ptrdiff_t m_flDegrees = 0x1e4;
      constexpr std::ptrdiff_t m_flDegreesMin = 0x1e8;
      constexpr std::ptrdiff_t m_flDegreesMax = 0x1ec;
      constexpr std::ptrdiff_t m_flRotationRandExponent = 0x1f0;
      constexpr std::ptrdiff_t m_bRandomlyFlipDirection = 0x1f4;
    }
    namespace CGeneralSpin {
      constexpr std::ptrdiff_t m_nSpinRateDegrees = 0x1d8;
      constexpr std::ptrdiff_t m_nSpinRateMinDegrees = 0x1dc;
      constexpr std::ptrdiff_t m_fSpinRateStopTime = 0x1e4;
    }
    namespace CNmIDSwitchNode__CDefinition {
      constexpr std::ptrdiff_t m_nSwitchValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_nTrueValueNodeIdx = 0x12;
      constexpr std::ptrdiff_t m_nFalseValueNodeIdx = 0x14;
      constexpr std::ptrdiff_t m_falseValue = 0x18;
      constexpr std::ptrdiff_t m_trueValue = 0x20;
    }
    namespace CNmRootMotionEvent {
      constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x20;
    }
    namespace CNmSyncEventIndexConditionNode__CDefinition {
      constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_triggerMode = 0x12;
      constexpr std::ptrdiff_t m_syncEventIdx = 0x14;
    }
    namespace CNmTimeConditionNode__CDefinition {
      constexpr std::ptrdiff_t m_sourceStateNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x12;
      constexpr std::ptrdiff_t m_flComparand = 0x14;
      constexpr std::ptrdiff_t m_type = 0x18;
      constexpr std::ptrdiff_t m_operator = 0x19;
    }
    namespace CPAssignment_t {
      constexpr std::ptrdiff_t m_nCPNumber = 0x0;
      constexpr std::ptrdiff_t m_Pos = 0x8;
      constexpr std::ptrdiff_t m_nOrientationMode = 0x6c0;
    }
    namespace CParticleAnimTag {
      constexpr std::ptrdiff_t m_hParticleSystem = 0x58;
      constexpr std::ptrdiff_t m_particleSystemName = 0x60;
      constexpr std::ptrdiff_t m_configName = 0x68;
      constexpr std::ptrdiff_t m_bDetachFromOwner = 0x70;
      constexpr std::ptrdiff_t m_bAggregate = 0x71;
      constexpr std::ptrdiff_t m_bStopWhenTagEnds = 0x72;
      constexpr std::ptrdiff_t m_bTagEndStopIsInstant = 0x73;
      constexpr std::ptrdiff_t m_attachmentName = 0x78;
      constexpr std::ptrdiff_t m_attachmentType = 0x80;
      constexpr std::ptrdiff_t m_attachmentCP1Name = 0x88;
      constexpr std::ptrdiff_t m_attachmentCP1Type = 0x90;
    }
    namespace CParticleBindingRealPulse {
    }
    namespace CParticleCollectionBindingInstance {
    }
    namespace CParticleFunction {
      constexpr std::ptrdiff_t m_flOpStrength = 0x8;
      constexpr std::ptrdiff_t m_nOpEndCapState = 0x178;
      constexpr std::ptrdiff_t m_nToolsState = 0x17c;
      constexpr std::ptrdiff_t m_flOpStartFadeInTime = 0x180;
      constexpr std::ptrdiff_t m_flOpEndFadeInTime = 0x184;
      constexpr std::ptrdiff_t m_flOpStartFadeOutTime = 0x188;
      constexpr std::ptrdiff_t m_flOpEndFadeOutTime = 0x18c;
      constexpr std::ptrdiff_t m_flOpFadeOscillatePeriod = 0x190;
      constexpr std::ptrdiff_t m_bNormalizeToStopTime = 0x194;
      constexpr std::ptrdiff_t m_flOpTimeOffsetMin = 0x198;
      constexpr std::ptrdiff_t m_flOpTimeOffsetMax = 0x19c;
      constexpr std::ptrdiff_t m_nOpTimeOffsetSeed = 0x1a0;
      constexpr std::ptrdiff_t m_nOpTimeScaleSeed = 0x1a4;
      constexpr std::ptrdiff_t m_flOpTimeScaleMin = 0x1a8;
      constexpr std::ptrdiff_t m_flOpTimeScaleMax = 0x1ac;
      constexpr std::ptrdiff_t m_bDisableOperator = 0x1b2;
      constexpr std::ptrdiff_t m_Notes = 0x1b8;
    }
    namespace CParticleFunctionConstraint {
    }
    namespace CParticleFunctionEmitter {
      constexpr std::ptrdiff_t m_nEmitterIndex = 0x1d8;
    }
    namespace CParticleFunctionForce {
    }
    namespace CParticleFunctionInitializer {
      constexpr std::ptrdiff_t m_nAssociatedEmitterIndex = 0x1d8;
    }
    namespace CParticleFunctionOperator {
    }
    namespace CParticleFunctionPreEmission {
      constexpr std::ptrdiff_t m_bRunOnce = 0x1d8;
    }
    namespace CParticleFunctionRenderer {
      constexpr std::ptrdiff_t VisibilityInputs = 0x1d8;
      constexpr std::ptrdiff_t m_bCannotBeRefracted = 0x220;
      constexpr std::ptrdiff_t m_bSkipRenderingOnMobile = 0x221;
    }
    namespace CParticleMassCalculationParameters {
      constexpr std::ptrdiff_t m_nMassMode = 0x0;
      constexpr std::ptrdiff_t m_flRadius = 0x8;
      constexpr std::ptrdiff_t m_flNominalRadius = 0x178;
      constexpr std::ptrdiff_t m_flScale = 0x2e8;
    }
    namespace CParticleSystemDefinition {
      constexpr std::ptrdiff_t m_nBehaviorVersion = 0x8;
      constexpr std::ptrdiff_t m_PreEmissionOperators = 0x10;
      constexpr std::ptrdiff_t m_Emitters = 0x28;
      constexpr std::ptrdiff_t m_Initializers = 0x40;
      constexpr std::ptrdiff_t m_Operators = 0x58;
      constexpr std::ptrdiff_t m_ForceGenerators = 0x70;
      constexpr std::ptrdiff_t m_Constraints = 0x88;
      constexpr std::ptrdiff_t m_Renderers = 0xa0;
      constexpr std::ptrdiff_t m_Children = 0xb8;
      constexpr std::ptrdiff_t m_nFirstMultipleOverride_BackwardCompat = 0x178;
      constexpr std::ptrdiff_t m_nInitialParticles = 0x258;
      constexpr std::ptrdiff_t m_nMaxParticles = 0x25c;
      constexpr std::ptrdiff_t m_nGroupID = 0x260;
      constexpr std::ptrdiff_t m_BoundingBoxMin = 0x264;
      constexpr std::ptrdiff_t m_BoundingBoxMax = 0x270;
      constexpr std::ptrdiff_t m_flDepthSortBias = 0x27c;
      constexpr std::ptrdiff_t m_nSortOverridePositionCP = 0x280;
      constexpr std::ptrdiff_t m_bInfiniteBounds = 0x284;
      constexpr std::ptrdiff_t m_bEnableNamedValues = 0x285;
      constexpr std::ptrdiff_t m_NamedValueDomain = 0x288;
      constexpr std::ptrdiff_t m_NamedValueLocals = 0x290;
      constexpr std::ptrdiff_t m_ConstantColor = 0x2a8;
      constexpr std::ptrdiff_t m_ConstantNormal = 0x2ac;
      constexpr std::ptrdiff_t m_flConstantRadius = 0x2b8;
      constexpr std::ptrdiff_t m_flConstantRotation = 0x2bc;
      constexpr std::ptrdiff_t m_flConstantRotationSpeed = 0x2c0;
      constexpr std::ptrdiff_t m_flConstantLifespan = 0x2c4;
      constexpr std::ptrdiff_t m_nConstantSequenceNumber = 0x2c8;
      constexpr std::ptrdiff_t m_nConstantSequenceNumber1 = 0x2cc;
      constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x2d0;
      constexpr std::ptrdiff_t m_hSnapshot = 0x2d8;
      constexpr std::ptrdiff_t m_pszCullReplacementName = 0x2e0;
      constexpr std::ptrdiff_t m_flCullRadius = 0x2e8;
      constexpr std::ptrdiff_t m_flCullFillCost = 0x2ec;
      constexpr std::ptrdiff_t m_nCullControlPoint = 0x2f0;
      constexpr std::ptrdiff_t m_hFallback = 0x2f8;
      constexpr std::ptrdiff_t m_nFallbackMaxCount = 0x300;
      constexpr std::ptrdiff_t m_hLowViolenceDef = 0x308;
      constexpr std::ptrdiff_t m_hReferenceReplacement = 0x310;
      constexpr std::ptrdiff_t m_flPreSimulationTime = 0x318;
      constexpr std::ptrdiff_t m_flStopSimulationAfterTime = 0x31c;
      constexpr std::ptrdiff_t m_flMaximumTimeStep = 0x320;
      constexpr std::ptrdiff_t m_flMaximumSimTime = 0x324;
      constexpr std::ptrdiff_t m_flMinimumSimTime = 0x328;
      constexpr std::ptrdiff_t m_flMinimumTimeStep = 0x32c;
      constexpr std::ptrdiff_t m_nMinimumFrames = 0x330;
      constexpr std::ptrdiff_t m_nMinCPULevel = 0x334;
      constexpr std::ptrdiff_t m_nMinGPULevel = 0x338;
      constexpr std::ptrdiff_t m_flNoDrawTimeToGoToSleep = 0x33c;
      constexpr std::ptrdiff_t m_flMaxDrawDistance = 0x340;
      constexpr std::ptrdiff_t m_flStartFadeDistance = 0x344;
      constexpr std::ptrdiff_t m_flMaxCreationDistance = 0x348;
      constexpr std::ptrdiff_t m_nAggregationMinAvailableParticles = 0x34c;
      constexpr std::ptrdiff_t m_flAggregateRadius = 0x350;
      constexpr std::ptrdiff_t m_bShouldBatch = 0x354;
      constexpr std::ptrdiff_t m_bShouldHitboxesFallbackToRenderBounds = 0x355;
      constexpr std::ptrdiff_t m_bShouldHitboxesFallbackToSnapshot = 0x356;
      constexpr std::ptrdiff_t m_bShouldHitboxesFallbackToCollisionHulls = 0x357;
      constexpr std::ptrdiff_t m_nViewModelEffect = 0x358;
      constexpr std::ptrdiff_t m_bScreenSpaceEffect = 0x35c;
      constexpr std::ptrdiff_t m_pszTargetLayerID = 0x360;
      constexpr std::ptrdiff_t m_nSkipRenderControlPoint = 0x368;
      constexpr std::ptrdiff_t m_nAllowRenderControlPoint = 0x36c;
      constexpr std::ptrdiff_t m_bShouldSort = 0x370;
      constexpr std::ptrdiff_t m_controlPointConfigurations = 0x3b8;
    }
    namespace CParticleVisibilityInputs {
      constexpr std::ptrdiff_t m_flCameraBias = 0x0;
      constexpr std::ptrdiff_t m_nCPin = 0x4;
      constexpr std::ptrdiff_t m_flProxyRadius = 0x8;
      constexpr std::ptrdiff_t m_flInputMin = 0xc;
      constexpr std::ptrdiff_t m_flInputMax = 0x10;
      constexpr std::ptrdiff_t m_flInputPixelVisFade = 0x14;
      constexpr std::ptrdiff_t m_flNoPixelVisibilityFallback = 0x18;
      constexpr std::ptrdiff_t m_flDistanceInputMin = 0x1c;
      constexpr std::ptrdiff_t m_flDistanceInputMax = 0x20;
      constexpr std::ptrdiff_t m_flDotInputMin = 0x24;
      constexpr std::ptrdiff_t m_flDotInputMax = 0x28;
      constexpr std::ptrdiff_t m_bDotCPAngles = 0x2c;
      constexpr std::ptrdiff_t m_bDotCameraAngles = 0x2d;
      constexpr std::ptrdiff_t m_flAlphaScaleMin = 0x30;
      constexpr std::ptrdiff_t m_flAlphaScaleMax = 0x34;
      constexpr std::ptrdiff_t m_flRadiusScaleMin = 0x38;
      constexpr std::ptrdiff_t m_flRadiusScaleMax = 0x3c;
      constexpr std::ptrdiff_t m_flRadiusScaleFOVBase = 0x40;
      constexpr std::ptrdiff_t m_bRightEye = 0x44;
    }
    namespace CPathParameters {
      constexpr std::ptrdiff_t m_nStartControlPointNumber = 0x0;
      constexpr std::ptrdiff_t m_nEndControlPointNumber = 0x4;
      constexpr std::ptrdiff_t m_nBulgeControl = 0x8;
      constexpr std::ptrdiff_t m_flBulge = 0xc;
      constexpr std::ptrdiff_t m_flMidPoint = 0x10;
      constexpr std::ptrdiff_t m_vStartPointOffset = 0x14;
      constexpr std::ptrdiff_t m_vMidPointOffset = 0x20;
      constexpr std::ptrdiff_t m_vEndOffset = 0x2c;
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
    namespace CPulseMathlib {
    }
    namespace CPulseTestScriptLib {
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
    namespace CPulse_PublicOutput {
      constexpr std::ptrdiff_t m_Name = 0x0;
      constexpr std::ptrdiff_t m_Description = 0x10;
      constexpr std::ptrdiff_t m_Args = 0x18;
    }
    namespace CPulse_ResumePoint {
    }
    namespace CRandomNumberGeneratorParameters {
      constexpr std::ptrdiff_t m_bDistributeEvenly = 0x0;
      constexpr std::ptrdiff_t m_nSeed = 0x4;
    }
    namespace CReplicationParameters {
      constexpr std::ptrdiff_t m_nReplicationMode = 0x0;
      constexpr std::ptrdiff_t m_bScaleChildParticleRadii = 0x4;
      constexpr std::ptrdiff_t m_flMinRandomRadiusScale = 0x8;
      constexpr std::ptrdiff_t m_flMaxRandomRadiusScale = 0x178;
      constexpr std::ptrdiff_t m_vMinRandomDisplacement = 0x2e8;
      constexpr std::ptrdiff_t m_vMaxRandomDisplacement = 0x9a0;
      constexpr std::ptrdiff_t m_flModellingScale = 0x1058;
    }
    namespace CSpinUpdateBase {
    }
    namespace C_INIT_AddVectorToVector {
      constexpr std::ptrdiff_t m_vecScale = 0x1e0;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1ec;
      constexpr std::ptrdiff_t m_nFieldInput = 0x1f0;
      constexpr std::ptrdiff_t m_vOffsetMin = 0x1f4;
      constexpr std::ptrdiff_t m_vOffsetMax = 0x200;
      constexpr std::ptrdiff_t m_randomnessParameters = 0x20c;
    }
    namespace C_INIT_AgeNoise {
      constexpr std::ptrdiff_t m_bAbsVal = 0x1e0;
      constexpr std::ptrdiff_t m_bAbsValInv = 0x1e1;
      constexpr std::ptrdiff_t m_flOffset = 0x1e4;
      constexpr std::ptrdiff_t m_flAgeMin = 0x1e8;
      constexpr std::ptrdiff_t m_flAgeMax = 0x1ec;
      constexpr std::ptrdiff_t m_flNoiseScale = 0x1f0;
      constexpr std::ptrdiff_t m_flNoiseScaleLoc = 0x1f4;
      constexpr std::ptrdiff_t m_vecOffsetLoc = 0x1f8;
    }
    namespace C_INIT_ChaoticAttractor {
      constexpr std::ptrdiff_t m_flAParm = 0x1e0;
      constexpr std::ptrdiff_t m_flBParm = 0x1e4;
      constexpr std::ptrdiff_t m_flCParm = 0x1e8;
      constexpr std::ptrdiff_t m_flDParm = 0x1ec;
      constexpr std::ptrdiff_t m_flScale = 0x1f0;
      constexpr std::ptrdiff_t m_flSpeedMin = 0x1f4;
      constexpr std::ptrdiff_t m_flSpeedMax = 0x1f8;
      constexpr std::ptrdiff_t m_nBaseCP = 0x1fc;
      constexpr std::ptrdiff_t m_bUniformSpeed = 0x200;
    }
    namespace C_INIT_CheckParticleForWater {
      constexpr std::ptrdiff_t m_flRadius = 0x1e0;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x350;
      constexpr std::ptrdiff_t m_flOutputRemap = 0x358;
      constexpr std::ptrdiff_t m_nSetMethod = 0x4c8;
    }
    namespace C_INIT_ColorLitPerParticle {
      constexpr std::ptrdiff_t m_ColorMin = 0x1f8;
      constexpr std::ptrdiff_t m_ColorMax = 0x1fc;
      constexpr std::ptrdiff_t m_TintMin = 0x200;
      constexpr std::ptrdiff_t m_TintMax = 0x204;
      constexpr std::ptrdiff_t m_flTintPerc = 0x208;
      constexpr std::ptrdiff_t m_nTintBlendMode = 0x20c;
      constexpr std::ptrdiff_t m_flLightAmplification = 0x210;
    }
    namespace C_INIT_CreateAlongPath {
      constexpr std::ptrdiff_t m_fMaxDistance = 0x1e0;
      constexpr std::ptrdiff_t m_PathParams = 0x1f0;
      constexpr std::ptrdiff_t m_bUseRandomCPs = 0x230;
      constexpr std::ptrdiff_t m_vEndOffset = 0x234;
      constexpr std::ptrdiff_t m_bSaveOffset = 0x240;
    }
    namespace C_INIT_CreateFromCPs {
      constexpr std::ptrdiff_t m_nIncrement = 0x1e0;
      constexpr std::ptrdiff_t m_nMinCP = 0x1e4;
      constexpr std::ptrdiff_t m_nMaxCP = 0x1e8;
      constexpr std::ptrdiff_t m_nDynamicCPCount = 0x1f0;
    }
    namespace C_INIT_CreateFromParentParticles {
      constexpr std::ptrdiff_t m_flVelocityScale = 0x1e0;
      constexpr std::ptrdiff_t m_flIncrement = 0x1e4;
      constexpr std::ptrdiff_t m_bRandomDistribution = 0x1e8;
      constexpr std::ptrdiff_t m_nRandomSeed = 0x1ec;
      constexpr std::ptrdiff_t m_bSubFrame = 0x1f0;
      constexpr std::ptrdiff_t m_bSetRopeSegmentID = 0x1f1;
    }
    namespace C_INIT_CreateFromPlaneCache {
      constexpr std::ptrdiff_t m_vecOffsetMin = 0x1e0;
      constexpr std::ptrdiff_t m_vecOffsetMax = 0x1ec;
      constexpr std::ptrdiff_t m_bUseNormal = 0x1f9;
    }
    namespace C_INIT_CreateInEpitrochoid {
      constexpr std::ptrdiff_t m_nComponent1 = 0x1e0;
      constexpr std::ptrdiff_t m_nComponent2 = 0x1e4;
      constexpr std::ptrdiff_t m_TransformInput = 0x1e8;
      constexpr std::ptrdiff_t m_flParticleDensity = 0x250;
      constexpr std::ptrdiff_t m_flOffset = 0x3c0;
      constexpr std::ptrdiff_t m_flRadius1 = 0x530;
      constexpr std::ptrdiff_t m_flRadius2 = 0x6a0;
      constexpr std::ptrdiff_t m_bUseCount = 0x810;
      constexpr std::ptrdiff_t m_bUseLocalCoords = 0x811;
      constexpr std::ptrdiff_t m_bOffsetExistingPos = 0x812;
    }
    namespace C_INIT_CreateOnGrid {
      constexpr std::ptrdiff_t m_nXCount = 0x1e0;
      constexpr std::ptrdiff_t m_nYCount = 0x350;
      constexpr std::ptrdiff_t m_nZCount = 0x4c0;
      constexpr std::ptrdiff_t m_nXSpacing = 0x630;
      constexpr std::ptrdiff_t m_nYSpacing = 0x7a0;
      constexpr std::ptrdiff_t m_nZSpacing = 0x910;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0xa80;
      constexpr std::ptrdiff_t m_bLocalSpace = 0xa84;
      constexpr std::ptrdiff_t m_bCenter = 0xa85;
      constexpr std::ptrdiff_t m_bHollow = 0xa86;
    }
    namespace C_INIT_CreateOnModel {
      constexpr std::ptrdiff_t m_modelInput = 0x1e0;
      constexpr std::ptrdiff_t m_transformInput = 0x240;
      constexpr std::ptrdiff_t m_nForceInModel = 0x2a8;
      constexpr std::ptrdiff_t m_bScaleToVolume = 0x2ac;
      constexpr std::ptrdiff_t m_bEvenDistribution = 0x2ad;
      constexpr std::ptrdiff_t m_nDesiredHitbox = 0x2b0;
      constexpr std::ptrdiff_t m_nHitboxValueFromControlPointIndex = 0x420;
      constexpr std::ptrdiff_t m_vecHitBoxScale = 0x428;
      constexpr std::ptrdiff_t m_flBoneVelocity = 0xae0;
      constexpr std::ptrdiff_t m_flMaxBoneVelocity = 0xae4;
      constexpr std::ptrdiff_t m_vecDirectionBias = 0xae8;
      constexpr std::ptrdiff_t m_HitboxSetName = 0x11a0;
      constexpr std::ptrdiff_t m_bLocalCoords = 0x1220;
      constexpr std::ptrdiff_t m_bUseBones = 0x1221;
      constexpr std::ptrdiff_t m_bUseMesh = 0x1222;
      constexpr std::ptrdiff_t m_flShellSize = 0x1228;
    }
    namespace C_INIT_CreateOnModelAtHeight {
      constexpr std::ptrdiff_t m_bUseBones = 0x1e0;
      constexpr std::ptrdiff_t m_bForceZ = 0x1e1;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1e4;
      constexpr std::ptrdiff_t m_nHeightCP = 0x1e8;
      constexpr std::ptrdiff_t m_bUseWaterHeight = 0x1ec;
      constexpr std::ptrdiff_t m_flDesiredHeight = 0x1f0;
      constexpr std::ptrdiff_t m_vecHitBoxScale = 0x360;
      constexpr std::ptrdiff_t m_vecDirectionBias = 0xa18;
      constexpr std::ptrdiff_t m_nBiasType = 0x10d0;
      constexpr std::ptrdiff_t m_bLocalCoords = 0x10d4;
      constexpr std::ptrdiff_t m_bPreferMovingBoxes = 0x10d5;
      constexpr std::ptrdiff_t m_HitboxSetName = 0x10d6;
      constexpr std::ptrdiff_t m_flHitboxVelocityScale = 0x1158;
      constexpr std::ptrdiff_t m_flMaxBoneVelocity = 0x12c8;
    }
    namespace C_INIT_CreateParticleImpulse {
      constexpr std::ptrdiff_t m_InputRadius = 0x1e0;
      constexpr std::ptrdiff_t m_InputMagnitude = 0x350;
      constexpr std::ptrdiff_t m_nFalloffFunction = 0x4c0;
      constexpr std::ptrdiff_t m_InputFalloffExp = 0x4c8;
      constexpr std::ptrdiff_t m_nImpulseType = 0x638;
    }
    namespace C_INIT_CreatePhyllotaxis {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1e0;
      constexpr std::ptrdiff_t m_nScaleCP = 0x1e4;
      constexpr std::ptrdiff_t m_nComponent = 0x1e8;
      constexpr std::ptrdiff_t m_fRadCentCore = 0x1ec;
      constexpr std::ptrdiff_t m_fRadPerPoint = 0x1f0;
      constexpr std::ptrdiff_t m_fRadPerPointTo = 0x1f4;
      constexpr std::ptrdiff_t m_fpointAngle = 0x1f8;
      constexpr std::ptrdiff_t m_fsizeOverall = 0x1fc;
      constexpr std::ptrdiff_t m_fRadBias = 0x200;
      constexpr std::ptrdiff_t m_fMinRad = 0x204;
      constexpr std::ptrdiff_t m_fDistBias = 0x208;
      constexpr std::ptrdiff_t m_bUseLocalCoords = 0x20c;
      constexpr std::ptrdiff_t m_bUseWithContEmit = 0x20d;
      constexpr std::ptrdiff_t m_bUseOrigRadius = 0x20e;
    }
    namespace C_INIT_CreateSequentialPath {
      constexpr std::ptrdiff_t m_fMaxDistance = 0x1e0;
      constexpr std::ptrdiff_t m_flNumToAssign = 0x1e4;
      constexpr std::ptrdiff_t m_bLoop = 0x1e8;
      constexpr std::ptrdiff_t m_bCPPairs = 0x1e9;
      constexpr std::ptrdiff_t m_bSaveOffset = 0x1ea;
      constexpr std::ptrdiff_t m_PathParams = 0x1f0;
    }
    namespace C_INIT_CreateSequentialPathV2 {
      constexpr std::ptrdiff_t m_fMaxDistance = 0x1e0;
      constexpr std::ptrdiff_t m_flNumToAssign = 0x350;
      constexpr std::ptrdiff_t m_bLoop = 0x4c0;
      constexpr std::ptrdiff_t m_bCPPairs = 0x4c1;
      constexpr std::ptrdiff_t m_bSaveOffset = 0x4c2;
      constexpr std::ptrdiff_t m_PathParams = 0x4d0;
    }
    namespace C_INIT_CreateSpiralSphere {
      constexpr std::ptrdiff_t m_TransformInput = 0x1e0;
      constexpr std::ptrdiff_t m_flDensity = 0x248;
      constexpr std::ptrdiff_t m_flInitialRadius = 0x3b8;
      constexpr std::ptrdiff_t m_flInitialSpeedMin = 0x528;
      constexpr std::ptrdiff_t m_flInitialSpeedMax = 0x698;
      constexpr std::ptrdiff_t m_bUseParticleCount = 0x808;
    }
    namespace C_INIT_CreateWithinBox {
      constexpr std::ptrdiff_t m_vecMin = 0x1e0;
      constexpr std::ptrdiff_t m_vecMax = 0x898;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0xf50;
      constexpr std::ptrdiff_t m_bLocalSpace = 0xf54;
      constexpr std::ptrdiff_t m_randomnessParameters = 0xf58;
      constexpr std::ptrdiff_t m_bUseNewCode = 0xf60;
    }
    namespace C_INIT_CreateWithinCapsuleTransform {
      constexpr std::ptrdiff_t m_fRadiusMin = 0x1e0;
      constexpr std::ptrdiff_t m_fRadiusMax = 0x350;
      constexpr std::ptrdiff_t m_fHeight = 0x4c0;
      constexpr std::ptrdiff_t m_TransformInput = 0x630;
      constexpr std::ptrdiff_t m_fSpeedMin = 0x698;
      constexpr std::ptrdiff_t m_fSpeedMax = 0x808;
      constexpr std::ptrdiff_t m_fSpeedRandExp = 0x978;
      constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMin = 0x980;
      constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMax = 0x1038;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x16f0;
      constexpr std::ptrdiff_t m_nFieldVelocity = 0x16f4;
    }
    namespace C_INIT_CreateWithinSphereTransform {
      constexpr std::ptrdiff_t m_fRadiusMin = 0x1e0;
      constexpr std::ptrdiff_t m_fRadiusMax = 0x350;
      constexpr std::ptrdiff_t m_vecDistanceBias = 0x4c0;
      constexpr std::ptrdiff_t m_vecDistanceBiasAbs = 0xb78;
      constexpr std::ptrdiff_t m_TransformInput = 0xb88;
      constexpr std::ptrdiff_t m_fSpeedMin = 0xbf0;
      constexpr std::ptrdiff_t m_fSpeedMax = 0xd60;
      constexpr std::ptrdiff_t m_fSpeedRandExp = 0xed0;
      constexpr std::ptrdiff_t m_bLocalCoords = 0xed4;
      constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMin = 0xed8;
      constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMax = 0x1590;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1c48;
      constexpr std::ptrdiff_t m_nFieldVelocity = 0x1c4c;
    }
    namespace C_INIT_CreationNoise {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e0;
      constexpr std::ptrdiff_t m_bAbsVal = 0x1e4;
      constexpr std::ptrdiff_t m_bAbsValInv = 0x1e5;
      constexpr std::ptrdiff_t m_flOffset = 0x1e8;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1ec;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1f0;
      constexpr std::ptrdiff_t m_flNoiseScale = 0x1f4;
      constexpr std::ptrdiff_t m_flNoiseScaleLoc = 0x1f8;
      constexpr std::ptrdiff_t m_vecOffsetLoc = 0x1fc;
      constexpr std::ptrdiff_t m_flWorldTimeScale = 0x208;
    }
    namespace C_INIT_DistanceCull {
      constexpr std::ptrdiff_t m_nControlPoint = 0x1e0;
      constexpr std::ptrdiff_t m_flDistance = 0x1e8;
      constexpr std::ptrdiff_t m_bCullInside = 0x358;
    }
    namespace C_INIT_DistanceToCPInit {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e0;
      constexpr std::ptrdiff_t m_flInputMin = 0x1e8;
      constexpr std::ptrdiff_t m_flInputMax = 0x358;
      constexpr std::ptrdiff_t m_flOutputMin = 0x4c8;
      constexpr std::ptrdiff_t m_flOutputMax = 0x638;
      constexpr std::ptrdiff_t m_nStartCP = 0x7a8;
      constexpr std::ptrdiff_t m_bLOS = 0x7ac;
      constexpr std::ptrdiff_t m_CollisionGroupName = 0x7ad;
      constexpr std::ptrdiff_t m_nTraceSet = 0x830;
      constexpr std::ptrdiff_t m_flMaxTraceLength = 0x838;
      constexpr std::ptrdiff_t m_flLOSScale = 0x9a8;
      constexpr std::ptrdiff_t m_nSetMethod = 0x9ac;
      constexpr std::ptrdiff_t m_bActiveRange = 0x9b0;
      constexpr std::ptrdiff_t m_vecDistanceScale = 0x9b4;
      constexpr std::ptrdiff_t m_flRemapBias = 0x9c0;
    }
    namespace C_INIT_DistanceToNeighborCull {
      constexpr std::ptrdiff_t m_flDistance = 0x1e0;
      constexpr std::ptrdiff_t m_bIncludeRadii = 0x350;
      constexpr std::ptrdiff_t m_flLifespanOverlap = 0x358;
      constexpr std::ptrdiff_t m_nFieldModify = 0x4c8;
      constexpr std::ptrdiff_t m_flModify = 0x4d0;
      constexpr std::ptrdiff_t m_nSetMethod = 0x640;
      constexpr std::ptrdiff_t m_bUseNeighbor = 0x644;
    }
    namespace C_INIT_GlobalScale {
      constexpr std::ptrdiff_t m_flScale = 0x1e0;
      constexpr std::ptrdiff_t m_nScaleControlPointNumber = 0x1e4;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1e8;
      constexpr std::ptrdiff_t m_bScaleRadius = 0x1ec;
      constexpr std::ptrdiff_t m_bScalePosition = 0x1ed;
      constexpr std::ptrdiff_t m_bScaleVelocity = 0x1ee;
    }
    namespace C_INIT_InheritFromParentParticles {
      constexpr std::ptrdiff_t m_flScale = 0x1e0;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e4;
      constexpr std::ptrdiff_t m_nIncrement = 0x1e8;
      constexpr std::ptrdiff_t m_bRandomDistribution = 0x1ec;
      constexpr std::ptrdiff_t m_nRandomSeed = 0x1f0;
    }
    namespace C_INIT_InheritVelocity {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1e0;
      constexpr std::ptrdiff_t m_flVelocityScale = 0x1e4;
    }
    namespace C_INIT_InitFloat {
      constexpr std::ptrdiff_t m_InputValue = 0x1e0;
      constexpr std::ptrdiff_t m_nOutputField = 0x350;
      constexpr std::ptrdiff_t m_nSetMethod = 0x354;
      constexpr std::ptrdiff_t m_InputStrength = 0x358;
    }
    namespace C_INIT_InitFloatCollection {
      constexpr std::ptrdiff_t m_InputValue = 0x1e0;
      constexpr std::ptrdiff_t m_nOutputField = 0x350;
    }
    namespace C_INIT_InitFromCPSnapshot {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1e0;
      constexpr std::ptrdiff_t m_strSnapshotSubset = 0x1e8;
      constexpr std::ptrdiff_t m_nAttributeToRead = 0x1f0;
      constexpr std::ptrdiff_t m_nAttributeToWrite = 0x1f4;
      constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1f8;
      constexpr std::ptrdiff_t m_bRandom = 0x1fc;
      constexpr std::ptrdiff_t m_bReverse = 0x1fd;
      constexpr std::ptrdiff_t m_nSnapShotIncrement = 0x200;
      constexpr std::ptrdiff_t m_nManualSnapshotIndex = 0x370;
      constexpr std::ptrdiff_t m_nRandomSeed = 0x4e0;
      constexpr std::ptrdiff_t m_bLocalSpaceAngles = 0x4e4;
    }
    namespace C_INIT_InitFromParentKilled {
      constexpr std::ptrdiff_t m_nAttributeToCopy = 0x1e0;
      constexpr std::ptrdiff_t m_nEventType = 0x1e4;
    }
    namespace C_INIT_InitFromVectorFieldSnapshot {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1e0;
      constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1e4;
      constexpr std::ptrdiff_t m_nWeightUpdateCP = 0x1e8;
      constexpr std::ptrdiff_t m_bUseVerticalVelocity = 0x1ec;
      constexpr std::ptrdiff_t m_vecScale = 0x1f0;
    }
    namespace C_INIT_InitSkinnedPositionFromCPSnapshot {
      constexpr std::ptrdiff_t m_nSnapshotControlPointNumber = 0x1e0;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1e4;
      constexpr std::ptrdiff_t m_bRandom = 0x1e8;
      constexpr std::ptrdiff_t m_nRandomSeed = 0x1ec;
      constexpr std::ptrdiff_t m_bRigid = 0x1f0;
      constexpr std::ptrdiff_t m_bSetNormal = 0x1f1;
      constexpr std::ptrdiff_t m_bIgnoreDt = 0x1f2;
      constexpr std::ptrdiff_t m_flMinNormalVelocity = 0x1f4;
      constexpr std::ptrdiff_t m_flMaxNormalVelocity = 0x1f8;
      constexpr std::ptrdiff_t m_nIndexType = 0x1fc;
      constexpr std::ptrdiff_t m_flReadIndex = 0x200;
      constexpr std::ptrdiff_t m_flIncrement = 0x370;
      constexpr std::ptrdiff_t m_nFullLoopIncrement = 0x374;
      constexpr std::ptrdiff_t m_nSnapShotStartPoint = 0x378;
      constexpr std::ptrdiff_t m_flBoneVelocity = 0x37c;
      constexpr std::ptrdiff_t m_flBoneVelocityMax = 0x380;
      constexpr std::ptrdiff_t m_bCopyColor = 0x384;
      constexpr std::ptrdiff_t m_bCopyAlpha = 0x385;
      constexpr std::ptrdiff_t m_bSetRadius = 0x386;
    }
    namespace C_INIT_InitVec {
      constexpr std::ptrdiff_t m_InputValue = 0x1e0;
      constexpr std::ptrdiff_t m_nOutputField = 0x898;
      constexpr std::ptrdiff_t m_nSetMethod = 0x89c;
      constexpr std::ptrdiff_t m_bNormalizedOutput = 0x8a0;
      constexpr std::ptrdiff_t m_bWritePreviousPosition = 0x8a1;
    }
    namespace C_INIT_InitVecCollection {
      constexpr std::ptrdiff_t m_InputValue = 0x1e0;
      constexpr std::ptrdiff_t m_nOutputField = 0x898;
    }
    namespace C_INIT_InitialRepulsionVelocity {
      constexpr std::ptrdiff_t m_CollisionGroupName = 0x1e0;
      constexpr std::ptrdiff_t m_nTraceSet = 0x260;
      constexpr std::ptrdiff_t m_vecOutputMin = 0x264;
      constexpr std::ptrdiff_t m_vecOutputMax = 0x270;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x27c;
      constexpr std::ptrdiff_t m_bPerParticle = 0x280;
      constexpr std::ptrdiff_t m_bTranslate = 0x281;
      constexpr std::ptrdiff_t m_bProportional = 0x282;
      constexpr std::ptrdiff_t m_flTraceLength = 0x284;
      constexpr std::ptrdiff_t m_bPerParticleTR = 0x288;
      constexpr std::ptrdiff_t m_bInherit = 0x289;
      constexpr std::ptrdiff_t m_nChildCP = 0x28c;
      constexpr std::ptrdiff_t m_nChildGroupID = 0x290;
    }
    namespace C_INIT_InitialSequenceFromModel {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1e0;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e4;
      constexpr std::ptrdiff_t m_nFieldOutputAnim = 0x1e8;
      constexpr std::ptrdiff_t m_flInputMin = 0x1ec;
      constexpr std::ptrdiff_t m_flInputMax = 0x1f0;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1f4;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1f8;
      constexpr std::ptrdiff_t m_nSetMethod = 0x1fc;
    }
    namespace C_INIT_InitialVelocityFromHitbox {
      constexpr std::ptrdiff_t m_flVelocityMin = 0x1e0;
      constexpr std::ptrdiff_t m_flVelocityMax = 0x1e4;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1e8;
      constexpr std::ptrdiff_t m_HitboxSetName = 0x1ec;
      constexpr std::ptrdiff_t m_bUseBones = 0x26c;
    }
    namespace C_INIT_InitialVelocityNoise {
      constexpr std::ptrdiff_t m_vecAbsVal = 0x1e0;
      constexpr std::ptrdiff_t m_vecAbsValInv = 0x1ec;
      constexpr std::ptrdiff_t m_vecOffsetLoc = 0x1f8;
      constexpr std::ptrdiff_t m_flOffset = 0x8b0;
      constexpr std::ptrdiff_t m_vecOutputMin = 0xa20;
      constexpr std::ptrdiff_t m_vecOutputMax = 0x10d8;
      constexpr std::ptrdiff_t m_flNoiseScale = 0x1790;
      constexpr std::ptrdiff_t m_flNoiseScaleLoc = 0x1900;
      constexpr std::ptrdiff_t m_TransformInput = 0x1a70;
      constexpr std::ptrdiff_t m_bIgnoreDt = 0x1ad8;
    }
    namespace C_INIT_LifespanFromVelocity {
      constexpr std::ptrdiff_t m_vecComponentScale = 0x1e0;
      constexpr std::ptrdiff_t m_flTraceOffset = 0x1ec;
      constexpr std::ptrdiff_t m_flMaxTraceLength = 0x1f0;
      constexpr std::ptrdiff_t m_flTraceTolerance = 0x1f4;
      constexpr std::ptrdiff_t m_nMaxPlanes = 0x1f8;
      constexpr std::ptrdiff_t m_CollisionGroupName = 0x200;
      constexpr std::ptrdiff_t m_nTraceSet = 0x280;
      constexpr std::ptrdiff_t m_bIncludeWater = 0x290;
    }
    namespace C_INIT_ModelCull {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1e0;
      constexpr std::ptrdiff_t m_bBoundBox = 0x1e4;
      constexpr std::ptrdiff_t m_bCullOutside = 0x1e5;
      constexpr std::ptrdiff_t m_bUseBones = 0x1e6;
      constexpr std::ptrdiff_t m_HitboxSetName = 0x1e7;
    }
    namespace C_INIT_MoveBetweenPoints {
      constexpr std::ptrdiff_t m_flSpeedMin = 0x1e0;
      constexpr std::ptrdiff_t m_flSpeedMax = 0x350;
      constexpr std::ptrdiff_t m_flEndSpread = 0x4c0;
      constexpr std::ptrdiff_t m_flStartOffset = 0x630;
      constexpr std::ptrdiff_t m_flEndOffset = 0x7a0;
      constexpr std::ptrdiff_t m_nEndControlPointNumber = 0x910;
      constexpr std::ptrdiff_t m_bTrailBias = 0x914;
    }
    namespace C_INIT_NormalAlignToCP {
      constexpr std::ptrdiff_t m_transformInput = 0x1e0;
      constexpr std::ptrdiff_t m_nControlPointAxis = 0x248;
    }
    namespace C_INIT_NormalOffset {
      constexpr std::ptrdiff_t m_OffsetMin = 0x1e0;
      constexpr std::ptrdiff_t m_OffsetMax = 0x1ec;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1f8;
      constexpr std::ptrdiff_t m_bLocalCoords = 0x1fc;
      constexpr std::ptrdiff_t m_bNormalize = 0x1fd;
    }
    namespace C_INIT_OffsetVectorToVector {
      constexpr std::ptrdiff_t m_nFieldInput = 0x1e0;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e4;
      constexpr std::ptrdiff_t m_vecOutputMin = 0x1e8;
      constexpr std::ptrdiff_t m_vecOutputMax = 0x1f4;
      constexpr std::ptrdiff_t m_randomnessParameters = 0x200;
    }
    namespace C_INIT_Orient2DRelToCP {
      constexpr std::ptrdiff_t m_nCP = 0x1e0;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e4;
      constexpr std::ptrdiff_t m_flRotOffset = 0x1e8;
    }
    namespace C_INIT_PlaneCull {
      constexpr std::ptrdiff_t m_nControlPoint = 0x1e0;
      constexpr std::ptrdiff_t m_flDistance = 0x1e8;
      constexpr std::ptrdiff_t m_bCullInside = 0x358;
    }
    namespace C_INIT_PointList {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e0;
      constexpr std::ptrdiff_t m_pointList = 0x1e8;
      constexpr std::ptrdiff_t m_bPlaceAlongPath = 0x200;
      constexpr std::ptrdiff_t m_bClosedLoop = 0x201;
      constexpr std::ptrdiff_t m_nNumPointsAlongPath = 0x204;
    }
    namespace C_INIT_PositionOffset {
      constexpr std::ptrdiff_t m_OffsetMin = 0x1e0;
      constexpr std::ptrdiff_t m_OffsetMax = 0x898;
      constexpr std::ptrdiff_t m_TransformInput = 0xf50;
      constexpr std::ptrdiff_t m_bLocalCoords = 0xfb8;
      constexpr std::ptrdiff_t m_bProportional = 0xfb9;
      constexpr std::ptrdiff_t m_randomnessParameters = 0xfbc;
    }
    namespace C_INIT_PositionOffsetToCP {
      constexpr std::ptrdiff_t m_nControlPointNumberStart = 0x1e0;
      constexpr std::ptrdiff_t m_nControlPointNumberEnd = 0x1e4;
      constexpr std::ptrdiff_t m_bLocalCoords = 0x1e8;
    }
    namespace C_INIT_PositionPlaceOnGround {
      constexpr std::ptrdiff_t m_flOffset = 0x1e0;
      constexpr std::ptrdiff_t m_flMaxTraceLength = 0x350;
      constexpr std::ptrdiff_t m_vecTraceDir = 0x4c0;
      constexpr std::ptrdiff_t m_CollisionGroupName = 0xb78;
      constexpr std::ptrdiff_t m_nTraceSet = 0xbf8;
      constexpr std::ptrdiff_t m_nTraceMissBehavior = 0xc08;
      constexpr std::ptrdiff_t m_bIncludeWater = 0xc0c;
      constexpr std::ptrdiff_t m_nAttribute = 0xc10;
      constexpr std::ptrdiff_t m_bSetPXYZOnly = 0xc14;
      constexpr std::ptrdiff_t m_bSetNormal = 0xc15;
      constexpr std::ptrdiff_t m_nGroundNormalAttribute = 0xc18;
      constexpr std::ptrdiff_t m_bOffsetonColOnly = 0xc1c;
      constexpr std::ptrdiff_t m_flOffsetByRadiusFactor = 0xc20;
      constexpr std::ptrdiff_t m_nPreserveOffsetCP = 0xc24;
      constexpr std::ptrdiff_t m_nIgnoreCP = 0xc28;
    }
    namespace C_INIT_PositionWarp {
      constexpr std::ptrdiff_t m_vecWarpMin = 0x1e0;
      constexpr std::ptrdiff_t m_vecWarpMax = 0x898;
      constexpr std::ptrdiff_t m_nScaleControlPointNumber = 0xf50;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0xf54;
      constexpr std::ptrdiff_t m_nRadiusComponent = 0xf58;
      constexpr std::ptrdiff_t m_flWarpTime = 0xf5c;
      constexpr std::ptrdiff_t m_flWarpStartTime = 0xf60;
      constexpr std::ptrdiff_t m_flPrevPosScale = 0xf64;
      constexpr std::ptrdiff_t m_bInvertWarp = 0xf68;
      constexpr std::ptrdiff_t m_bUseCount = 0xf69;
    }
    namespace C_INIT_PositionWarpScalar {
      constexpr std::ptrdiff_t m_vecWarpMin = 0x1e0;
      constexpr std::ptrdiff_t m_vecWarpMax = 0x1ec;
      constexpr std::ptrdiff_t m_InputValue = 0x1f8;
      constexpr std::ptrdiff_t m_flPrevPosScale = 0x368;
      constexpr std::ptrdiff_t m_nScaleControlPointNumber = 0x36c;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x370;
    }
    namespace C_INIT_QuantizeFloat {
      constexpr std::ptrdiff_t m_InputValue = 0x1e0;
      constexpr std::ptrdiff_t m_nOutputField = 0x350;
    }
    namespace C_INIT_RadiusFromCPObject {
      constexpr std::ptrdiff_t m_nControlPoint = 0x1e0;
    }
    namespace C_INIT_RandomAlpha {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e0;
      constexpr std::ptrdiff_t m_nAlphaMin = 0x1e4;
      constexpr std::ptrdiff_t m_nAlphaMax = 0x1e8;
      constexpr std::ptrdiff_t m_flAlphaRandExponent = 0x1f4;
    }
    namespace C_INIT_RandomAlphaWindowThreshold {
      constexpr std::ptrdiff_t m_flMin = 0x1e0;
      constexpr std::ptrdiff_t m_flMax = 0x1e4;
      constexpr std::ptrdiff_t m_flExponent = 0x1e8;
    }
    namespace C_INIT_RandomColor {
      constexpr std::ptrdiff_t m_ColorMin = 0x1fc;
      constexpr std::ptrdiff_t m_ColorMax = 0x200;
      constexpr std::ptrdiff_t m_TintMin = 0x204;
      constexpr std::ptrdiff_t m_TintMax = 0x208;
      constexpr std::ptrdiff_t m_flTintPerc = 0x20c;
      constexpr std::ptrdiff_t m_flUpdateThreshold = 0x210;
      constexpr std::ptrdiff_t m_nTintCP = 0x214;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x218;
      constexpr std::ptrdiff_t m_nTintBlendMode = 0x21c;
      constexpr std::ptrdiff_t m_flLightAmplification = 0x220;
    }
    namespace C_INIT_RandomLifeTime {
      constexpr std::ptrdiff_t m_fLifetimeMin = 0x1e0;
      constexpr std::ptrdiff_t m_fLifetimeMax = 0x1e4;
      constexpr std::ptrdiff_t m_fLifetimeRandExponent = 0x1e8;
    }
    namespace C_INIT_RandomModelSequence {
      constexpr std::ptrdiff_t m_ActivityName = 0x1e0;
      constexpr std::ptrdiff_t m_SequenceName = 0x2e0;
      constexpr std::ptrdiff_t m_hModel = 0x3e0;
    }
    namespace C_INIT_RandomNamedModelBodyPart {
    }
    namespace C_INIT_RandomNamedModelElement {
      constexpr std::ptrdiff_t m_hModel = 0x1e0;
      constexpr std::ptrdiff_t m_names = 0x1e8;
      constexpr std::ptrdiff_t m_bShuffle = 0x200;
      constexpr std::ptrdiff_t m_bLinear = 0x201;
      constexpr std::ptrdiff_t m_bModelFromRenderer = 0x202;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x204;
    }
    namespace C_INIT_RandomNamedModelMeshGroup {
    }
    namespace C_INIT_RandomNamedModelSequence {
    }
    namespace C_INIT_RandomRadius {
      constexpr std::ptrdiff_t m_flRadiusMin = 0x1e0;
      constexpr std::ptrdiff_t m_flRadiusMax = 0x1e4;
      constexpr std::ptrdiff_t m_flRadiusRandExponent = 0x1e8;
    }
    namespace C_INIT_RandomRotation {
    }
    namespace C_INIT_RandomRotationSpeed {
    }
    namespace C_INIT_RandomScalar {
      constexpr std::ptrdiff_t m_flMin = 0x1e0;
      constexpr std::ptrdiff_t m_flMax = 0x1e4;
      constexpr std::ptrdiff_t m_flExponent = 0x1e8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1ec;
    }
    namespace C_INIT_RandomSecondSequence {
      constexpr std::ptrdiff_t m_nSequenceMin = 0x1e0;
      constexpr std::ptrdiff_t m_nSequenceMax = 0x1e4;
    }
    namespace C_INIT_RandomSequence {
      constexpr std::ptrdiff_t m_nSequenceMin = 0x1e0;
      constexpr std::ptrdiff_t m_nSequenceMax = 0x1e4;
      constexpr std::ptrdiff_t m_bShuffle = 0x1e8;
      constexpr std::ptrdiff_t m_bLinear = 0x1e9;
      constexpr std::ptrdiff_t m_WeightedList = 0x1f0;
    }
    namespace C_INIT_RandomTrailLength {
      constexpr std::ptrdiff_t m_flMinLength = 0x1e0;
      constexpr std::ptrdiff_t m_flMaxLength = 0x1e4;
      constexpr std::ptrdiff_t m_flLengthRandExponent = 0x1e8;
    }
    namespace C_INIT_RandomVector {
      constexpr std::ptrdiff_t m_vecMin = 0x1e0;
      constexpr std::ptrdiff_t m_vecMax = 0x1ec;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1f8;
      constexpr std::ptrdiff_t m_randomnessParameters = 0x1fc;
    }
    namespace C_INIT_RandomVectorComponent {
      constexpr std::ptrdiff_t m_flMin = 0x1e0;
      constexpr std::ptrdiff_t m_flMax = 0x1e4;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e8;
      constexpr std::ptrdiff_t m_nComponent = 0x1ec;
    }
    namespace C_INIT_RandomYaw {
    }
    namespace C_INIT_RandomYawFlip {
      constexpr std::ptrdiff_t m_flPercent = 0x1e0;
    }
    namespace C_INIT_RemapInitialDirectionToTransformToVector {
      constexpr std::ptrdiff_t m_TransformInput = 0x1e0;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x248;
      constexpr std::ptrdiff_t m_flScale = 0x24c;
      constexpr std::ptrdiff_t m_flOffsetRot = 0x250;
      constexpr std::ptrdiff_t m_vecOffsetAxis = 0x254;
      constexpr std::ptrdiff_t m_bNormalize = 0x260;
    }
    namespace C_INIT_RemapInitialTransformDirectionToRotation {
      constexpr std::ptrdiff_t m_TransformInput = 0x1e0;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x248;
      constexpr std::ptrdiff_t m_flOffsetRot = 0x24c;
      constexpr std::ptrdiff_t m_nComponent = 0x250;
    }
    namespace C_INIT_RemapInitialVisibilityScalar {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e4;
      constexpr std::ptrdiff_t m_flInputMin = 0x1e8;
      constexpr std::ptrdiff_t m_flInputMax = 0x1ec;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1f0;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1f4;
    }
    namespace C_INIT_RemapNamedModelBodyPartToScalar {
    }
    namespace C_INIT_RemapNamedModelElementToScalar {
      constexpr std::ptrdiff_t m_hModel = 0x1e0;
      constexpr std::ptrdiff_t m_names = 0x1e8;
      constexpr std::ptrdiff_t m_values = 0x200;
      constexpr std::ptrdiff_t m_nFieldInput = 0x218;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x21c;
      constexpr std::ptrdiff_t m_nSetMethod = 0x220;
      constexpr std::ptrdiff_t m_bModelFromRenderer = 0x224;
    }
    namespace C_INIT_RemapNamedModelMeshGroupToScalar {
    }
    namespace C_INIT_RemapNamedModelSequenceToScalar {
    }
    namespace C_INIT_RemapParticleCountToNamedModelBodyPartScalar {
    }
    namespace C_INIT_RemapParticleCountToNamedModelElementScalar {
      constexpr std::ptrdiff_t m_hModel = 0x210;
      constexpr std::ptrdiff_t m_outputMinName = 0x218;
      constexpr std::ptrdiff_t m_outputMaxName = 0x220;
      constexpr std::ptrdiff_t m_bModelFromRenderer = 0x228;
    }
    namespace C_INIT_RemapParticleCountToNamedModelMeshGroupScalar {
    }
    namespace C_INIT_RemapParticleCountToNamedModelSequenceScalar {
    }
    namespace C_INIT_RemapParticleCountToScalar {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e0;
      constexpr std::ptrdiff_t m_nInputMin = 0x1e4;
      constexpr std::ptrdiff_t m_nInputMax = 0x1e8;
      constexpr std::ptrdiff_t m_nScaleControlPoint = 0x1ec;
      constexpr std::ptrdiff_t m_nScaleControlPointField = 0x1f0;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1f4;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1f8;
      constexpr std::ptrdiff_t m_nSetMethod = 0x1fc;
      constexpr std::ptrdiff_t m_bActiveRange = 0x200;
      constexpr std::ptrdiff_t m_bInvert = 0x201;
      constexpr std::ptrdiff_t m_bWrap = 0x202;
      constexpr std::ptrdiff_t m_flRemapBias = 0x204;
    }
    namespace C_INIT_RemapQAnglesToRotation {
      constexpr std::ptrdiff_t m_TransformInput = 0x1e0;
    }
    namespace C_INIT_RemapScalarToVector {
      constexpr std::ptrdiff_t m_nFieldInput = 0x1e0;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e4;
      constexpr std::ptrdiff_t m_flInputMin = 0x1e8;
      constexpr std::ptrdiff_t m_flInputMax = 0x1ec;
      constexpr std::ptrdiff_t m_vecOutputMin = 0x1f0;
      constexpr std::ptrdiff_t m_vecOutputMax = 0x1fc;
      constexpr std::ptrdiff_t m_flStartTime = 0x208;
      constexpr std::ptrdiff_t m_flEndTime = 0x20c;
      constexpr std::ptrdiff_t m_nSetMethod = 0x210;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x214;
      constexpr std::ptrdiff_t m_bLocalCoords = 0x218;
      constexpr std::ptrdiff_t m_flRemapBias = 0x21c;
    }
    namespace C_INIT_RemapTransformOrientationToRotations {
      constexpr std::ptrdiff_t m_TransformInput = 0x1e0;
      constexpr std::ptrdiff_t m_vecRotation = 0x248;
      constexpr std::ptrdiff_t m_bUseQuat = 0x254;
      constexpr std::ptrdiff_t m_bWriteNormal = 0x255;
    }
    namespace C_INIT_RemapTransformToVector {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e0;
      constexpr std::ptrdiff_t m_vInputMin = 0x1e4;
      constexpr std::ptrdiff_t m_vInputMax = 0x1f0;
      constexpr std::ptrdiff_t m_vOutputMin = 0x1fc;
      constexpr std::ptrdiff_t m_vOutputMax = 0x208;
      constexpr std::ptrdiff_t m_TransformInput = 0x218;
      constexpr std::ptrdiff_t m_LocalSpaceTransform = 0x280;
      constexpr std::ptrdiff_t m_flStartTime = 0x2e8;
      constexpr std::ptrdiff_t m_flEndTime = 0x2ec;
      constexpr std::ptrdiff_t m_nSetMethod = 0x2f0;
      constexpr std::ptrdiff_t m_bOffset = 0x2f4;
      constexpr std::ptrdiff_t m_bAccelerate = 0x2f5;
      constexpr std::ptrdiff_t m_flRemapBias = 0x2f8;
    }
    namespace C_INIT_RingWave {
      constexpr std::ptrdiff_t m_TransformInput = 0x1e0;
      constexpr std::ptrdiff_t m_flParticlesPerOrbit = 0x248;
      constexpr std::ptrdiff_t m_flInitialRadius = 0x3b8;
      constexpr std::ptrdiff_t m_flThickness = 0x528;
      constexpr std::ptrdiff_t m_flInitialSpeedMin = 0x698;
      constexpr std::ptrdiff_t m_flInitialSpeedMax = 0x808;
      constexpr std::ptrdiff_t m_flRoll = 0x978;
      constexpr std::ptrdiff_t m_flPitch = 0xae8;
      constexpr std::ptrdiff_t m_flYaw = 0xc58;
      constexpr std::ptrdiff_t m_bEvenDistribution = 0xdc8;
      constexpr std::ptrdiff_t m_bXYVelocityOnly = 0xdc9;
    }
    namespace C_INIT_RtEnvCull {
      constexpr std::ptrdiff_t m_vecTestDir = 0x1e0;
      constexpr std::ptrdiff_t m_vecTestNormal = 0x1ec;
      constexpr std::ptrdiff_t m_bUseVelocity = 0x1f8;
      constexpr std::ptrdiff_t m_bCullOnMiss = 0x1f9;
      constexpr std::ptrdiff_t m_bLifeAdjust = 0x1fa;
      constexpr std::ptrdiff_t m_RtEnvName = 0x1fb;
      constexpr std::ptrdiff_t m_nRTEnvCP = 0x27c;
      constexpr std::ptrdiff_t m_nComponent = 0x280;
    }
    namespace C_INIT_ScaleVelocity {
      constexpr std::ptrdiff_t m_vecScale = 0x1e0;
    }
    namespace C_INIT_ScreenSpacePositionOfTarget {
      constexpr std::ptrdiff_t m_vecTargetPosition = 0x1e0;
      constexpr std::ptrdiff_t m_bOututBehindness = 0x898;
      constexpr std::ptrdiff_t m_nBehindFieldOutput = 0x89c;
      constexpr std::ptrdiff_t m_flBehindOutputRemap = 0x8a0;
    }
    namespace C_INIT_SequenceFromCP {
      constexpr std::ptrdiff_t m_bKillUnused = 0x1e0;
      constexpr std::ptrdiff_t m_bRadiusScale = 0x1e1;
      constexpr std::ptrdiff_t m_nCP = 0x1e4;
      constexpr std::ptrdiff_t m_vecOffset = 0x1e8;
    }
    namespace C_INIT_SequenceLifeTime {
      constexpr std::ptrdiff_t m_flFramerate = 0x1e0;
    }
    namespace C_INIT_SetAttributeToScalarExpression {
      constexpr std::ptrdiff_t m_nExpression = 0x1e0;
      constexpr std::ptrdiff_t m_flInput1 = 0x1e8;
      constexpr std::ptrdiff_t m_flInput2 = 0x358;
      constexpr std::ptrdiff_t m_flOutputRemap = 0x4c8;
      constexpr std::ptrdiff_t m_nOutputField = 0x638;
      constexpr std::ptrdiff_t m_nSetMethod = 0x63c;
    }
    namespace C_INIT_SetFloatAttributeToVectorExpression {
      constexpr std::ptrdiff_t m_nExpression = 0x1e0;
      constexpr std::ptrdiff_t m_vInput1 = 0x1e8;
      constexpr std::ptrdiff_t m_vInput2 = 0x8a0;
      constexpr std::ptrdiff_t m_flOutputRemap = 0xf58;
      constexpr std::ptrdiff_t m_nOutputField = 0x10c8;
      constexpr std::ptrdiff_t m_nSetMethod = 0x10cc;
    }
    namespace C_INIT_SetHitboxToClosest {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1e0;
      constexpr std::ptrdiff_t m_nDesiredHitbox = 0x1e4;
      constexpr std::ptrdiff_t m_vecHitBoxScale = 0x1e8;
      constexpr std::ptrdiff_t m_HitboxSetName = 0x8a0;
      constexpr std::ptrdiff_t m_bUseBones = 0x920;
      constexpr std::ptrdiff_t m_bUseClosestPointOnHitbox = 0x921;
      constexpr std::ptrdiff_t m_nTestType = 0x924;
      constexpr std::ptrdiff_t m_flHybridRatio = 0x928;
      constexpr std::ptrdiff_t m_bUpdatePosition = 0xa98;
    }
    namespace C_INIT_SetHitboxToModel {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1e0;
      constexpr std::ptrdiff_t m_nForceInModel = 0x1e4;
      constexpr std::ptrdiff_t m_bEvenDistribution = 0x1e8;
      constexpr std::ptrdiff_t m_nDesiredHitbox = 0x1ec;
      constexpr std::ptrdiff_t m_vecHitBoxScale = 0x1f0;
      constexpr std::ptrdiff_t m_vecDirectionBias = 0x8a8;
      constexpr std::ptrdiff_t m_bMaintainHitbox = 0x8b4;
      constexpr std::ptrdiff_t m_bUseBones = 0x8b5;
      constexpr std::ptrdiff_t m_HitboxSetName = 0x8b6;
      constexpr std::ptrdiff_t m_flShellSize = 0x938;
    }
    namespace C_INIT_SetRigidAttachment {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1e0;
      constexpr std::ptrdiff_t m_nFieldInput = 0x1e4;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e8;
      constexpr std::ptrdiff_t m_bLocalSpace = 0x1ec;
    }
    namespace C_INIT_SetVectorAttributeToVectorExpression {
      constexpr std::ptrdiff_t m_nExpression = 0x1e0;
      constexpr std::ptrdiff_t m_vInput1 = 0x1e8;
      constexpr std::ptrdiff_t m_vInput2 = 0x8a0;
      constexpr std::ptrdiff_t m_flLerp = 0xf58;
      constexpr std::ptrdiff_t m_nOutputField = 0x10c8;
      constexpr std::ptrdiff_t m_nSetMethod = 0x10cc;
      constexpr std::ptrdiff_t m_bNormalizedOutput = 0x10d0;
    }
    namespace C_INIT_StatusEffect {
      constexpr std::ptrdiff_t m_nDetail2Combo = 0x1e0;
      constexpr std::ptrdiff_t m_flDetail2Rotation = 0x1e4;
      constexpr std::ptrdiff_t m_flDetail2Scale = 0x1e8;
      constexpr std::ptrdiff_t m_flDetail2BlendFactor = 0x1ec;
      constexpr std::ptrdiff_t m_flColorWarpIntensity = 0x1f0;
      constexpr std::ptrdiff_t m_flDiffuseWarpBlendToFull = 0x1f4;
      constexpr std::ptrdiff_t m_flEnvMapIntensity = 0x1f8;
      constexpr std::ptrdiff_t m_flAmbientScale = 0x1fc;
      constexpr std::ptrdiff_t m_specularColor = 0x200;
      constexpr std::ptrdiff_t m_flSpecularScale = 0x204;
      constexpr std::ptrdiff_t m_flSpecularExponent = 0x208;
      constexpr std::ptrdiff_t m_flSpecularExponentBlendToFull = 0x20c;
      constexpr std::ptrdiff_t m_flSpecularBlendToFull = 0x210;
      constexpr std::ptrdiff_t m_rimLightColor = 0x214;
      constexpr std::ptrdiff_t m_flRimLightScale = 0x218;
      constexpr std::ptrdiff_t m_flReflectionsTintByBaseBlendToNone = 0x21c;
      constexpr std::ptrdiff_t m_flMetalnessBlendToFull = 0x220;
      constexpr std::ptrdiff_t m_flSelfIllumBlendToFull = 0x224;
    }
    namespace C_INIT_StatusEffectCitadel {
      constexpr std::ptrdiff_t m_flSFXColorWarpAmount = 0x1e0;
      constexpr std::ptrdiff_t m_flSFXNormalAmount = 0x1e4;
      constexpr std::ptrdiff_t m_flSFXMetalnessAmount = 0x1e8;
      constexpr std::ptrdiff_t m_flSFXRoughnessAmount = 0x1ec;
      constexpr std::ptrdiff_t m_flSFXSelfIllumAmount = 0x1f0;
      constexpr std::ptrdiff_t m_flSFXSScale = 0x1f4;
      constexpr std::ptrdiff_t m_flSFXSScrollX = 0x1f8;
      constexpr std::ptrdiff_t m_flSFXSScrollY = 0x1fc;
      constexpr std::ptrdiff_t m_flSFXSScrollZ = 0x200;
      constexpr std::ptrdiff_t m_flSFXSOffsetX = 0x204;
      constexpr std::ptrdiff_t m_flSFXSOffsetY = 0x208;
      constexpr std::ptrdiff_t m_flSFXSOffsetZ = 0x20c;
      constexpr std::ptrdiff_t m_nDetailCombo = 0x210;
      constexpr std::ptrdiff_t m_flSFXSDetailAmount = 0x214;
      constexpr std::ptrdiff_t m_flSFXSDetailScale = 0x218;
      constexpr std::ptrdiff_t m_flSFXSDetailScrollX = 0x21c;
      constexpr std::ptrdiff_t m_flSFXSDetailScrollY = 0x220;
      constexpr std::ptrdiff_t m_flSFXSDetailScrollZ = 0x224;
      constexpr std::ptrdiff_t m_flSFXSUseModelUVs = 0x228;
    }
    namespace C_INIT_VelocityFromCP {
      constexpr std::ptrdiff_t m_velocityInput = 0x1e0;
      constexpr std::ptrdiff_t m_transformInput = 0x898;
      constexpr std::ptrdiff_t m_flVelocityScale = 0x900;
      constexpr std::ptrdiff_t m_bDirectionOnly = 0x904;
    }
    namespace C_INIT_VelocityFromNormal {
      constexpr std::ptrdiff_t m_fSpeedMin = 0x1e0;
      constexpr std::ptrdiff_t m_fSpeedMax = 0x1e4;
      constexpr std::ptrdiff_t m_bIgnoreDt = 0x1e8;
    }
    namespace C_INIT_VelocityRadialRandom {
      constexpr std::ptrdiff_t m_bPerParticleCenter = 0x1e0;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1e4;
      constexpr std::ptrdiff_t m_vecPosition = 0x1e8;
      constexpr std::ptrdiff_t m_vecFwd = 0x8a0;
      constexpr std::ptrdiff_t m_fSpeedMin = 0xf58;
      constexpr std::ptrdiff_t m_fSpeedMax = 0x10c8;
      constexpr std::ptrdiff_t m_vecLocalCoordinateSystemSpeedScale = 0x1238;
      constexpr std::ptrdiff_t m_bIgnoreDelta = 0x1245;
    }
    namespace C_INIT_VelocityRandom {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1e0;
      constexpr std::ptrdiff_t m_fSpeedMin = 0x1e8;
      constexpr std::ptrdiff_t m_fSpeedMax = 0x358;
      constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMin = 0x4c8;
      constexpr std::ptrdiff_t m_LocalCoordinateSystemSpeedMax = 0xb80;
      constexpr std::ptrdiff_t m_bIgnoreDT = 0x1238;
      constexpr std::ptrdiff_t m_randomnessParameters = 0x123c;
    }
    namespace C_OP_AlphaDecay {
      constexpr std::ptrdiff_t m_flMinAlpha = 0x1d8;
    }
    namespace C_OP_AttractToControlPoint {
      constexpr std::ptrdiff_t m_vecComponentScale = 0x1e8;
      constexpr std::ptrdiff_t m_fForceAmount = 0x1f8;
      constexpr std::ptrdiff_t m_fFalloffPower = 0x368;
      constexpr std::ptrdiff_t m_TransformInput = 0x370;
      constexpr std::ptrdiff_t m_fForceAmountMin = 0x3d8;
      constexpr std::ptrdiff_t m_bApplyMinForce = 0x548;
    }
    namespace C_OP_BasicMovement {
      constexpr std::ptrdiff_t m_Gravity = 0x1d8;
      constexpr std::ptrdiff_t m_fDrag = 0x890;
      constexpr std::ptrdiff_t m_massControls = 0xa00;
      constexpr std::ptrdiff_t m_nMaxConstraintPasses = 0xe58;
      constexpr std::ptrdiff_t m_bUseNewCode = 0xe5c;
    }
    namespace C_OP_BoxConstraint {
      constexpr std::ptrdiff_t m_vecMin = 0x1d8;
      constexpr std::ptrdiff_t m_vecMax = 0x890;
      constexpr std::ptrdiff_t m_nCP = 0xf48;
      constexpr std::ptrdiff_t m_bLocalSpace = 0xf4c;
      constexpr std::ptrdiff_t m_bAccountForRadius = 0xf4d;
    }
    namespace C_OP_CPOffsetToPercentageBetweenCPs {
      constexpr std::ptrdiff_t m_flInputMin = 0x1d8;
      constexpr std::ptrdiff_t m_flInputMax = 0x1dc;
      constexpr std::ptrdiff_t m_flInputBias = 0x1e0;
      constexpr std::ptrdiff_t m_nStartCP = 0x1e4;
      constexpr std::ptrdiff_t m_nEndCP = 0x1e8;
      constexpr std::ptrdiff_t m_nOffsetCP = 0x1ec;
      constexpr std::ptrdiff_t m_nOuputCP = 0x1f0;
      constexpr std::ptrdiff_t m_nInputCP = 0x1f4;
      constexpr std::ptrdiff_t m_bRadialCheck = 0x1f8;
      constexpr std::ptrdiff_t m_bScaleOffset = 0x1f9;
      constexpr std::ptrdiff_t m_vecOffset = 0x1fc;
    }
    namespace C_OP_CPVelocityForce {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1e8;
      constexpr std::ptrdiff_t m_flScale = 0x1f0;
    }
    namespace C_OP_CalculateVectorAttribute {
      constexpr std::ptrdiff_t m_vStartValue = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldInput1 = 0x1e4;
      constexpr std::ptrdiff_t m_flInputScale1 = 0x1e8;
      constexpr std::ptrdiff_t m_nFieldInput2 = 0x1ec;
      constexpr std::ptrdiff_t m_flInputScale2 = 0x1f0;
      constexpr std::ptrdiff_t m_nControlPointInput1 = 0x1f4;
      constexpr std::ptrdiff_t m_flControlPointScale1 = 0x208;
      constexpr std::ptrdiff_t m_nControlPointInput2 = 0x20c;
      constexpr std::ptrdiff_t m_flControlPointScale2 = 0x220;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x224;
      constexpr std::ptrdiff_t m_vFinalOutputScale = 0x228;
    }
    namespace C_OP_Callback {
    }
    namespace C_OP_ChladniWave {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_flInputMin = 0x1e0;
      constexpr std::ptrdiff_t m_flInputMax = 0x350;
      constexpr std::ptrdiff_t m_flOutputMin = 0x4c0;
      constexpr std::ptrdiff_t m_flOutputMax = 0x630;
      constexpr std::ptrdiff_t m_vecWaveLength = 0x7a0;
      constexpr std::ptrdiff_t m_vecHarmonics = 0xe58;
      constexpr std::ptrdiff_t m_nSetMethod = 0x1510;
      constexpr std::ptrdiff_t m_nLocalSpaceControlPoint = 0x1514;
      constexpr std::ptrdiff_t m_b3D = 0x1518;
    }
    namespace C_OP_ChooseRandomChildrenInGroup {
      constexpr std::ptrdiff_t m_nChildGroupID = 0x1e0;
      constexpr std::ptrdiff_t m_flNumberOfChildren = 0x1e8;
    }
    namespace C_OP_ClampScalar {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1e0;
      constexpr std::ptrdiff_t m_flOutputMax = 0x350;
    }
    namespace C_OP_ClampVector {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_vecOutputMin = 0x1e0;
      constexpr std::ptrdiff_t m_vecOutputMax = 0x898;
    }
    namespace C_OP_ClientPhysics {
      constexpr std::ptrdiff_t m_strPhysicsType = 0x228;
      constexpr std::ptrdiff_t m_bStartAsleep = 0x230;
      constexpr std::ptrdiff_t m_flPlayerWakeRadius = 0x238;
      constexpr std::ptrdiff_t m_flVehicleWakeRadius = 0x3a8;
      constexpr std::ptrdiff_t m_bUseHighQualitySimulation = 0x518;
      constexpr std::ptrdiff_t m_nMaxParticleCount = 0x51c;
      constexpr std::ptrdiff_t m_bRespectExclusionVolumes = 0x520;
      constexpr std::ptrdiff_t m_bKillParticles = 0x521;
      constexpr std::ptrdiff_t m_bDeleteSim = 0x522;
      constexpr std::ptrdiff_t m_nControlPoint = 0x524;
      constexpr std::ptrdiff_t m_nForcedSimId = 0x528;
      constexpr std::ptrdiff_t m_nColorBlendType = 0x52c;
      constexpr std::ptrdiff_t m_nForcedStatusEffects = 0x530;
    }
    namespace C_OP_CollideWithParentParticles {
      constexpr std::ptrdiff_t m_flParentRadiusScale = 0x1d8;
      constexpr std::ptrdiff_t m_flRadiusScale = 0x348;
    }
    namespace C_OP_CollideWithSelf {
      constexpr std::ptrdiff_t m_flRadiusScale = 0x1d8;
      constexpr std::ptrdiff_t m_flMinimumSpeed = 0x348;
    }
    namespace C_OP_ColorAdjustHSL {
      constexpr std::ptrdiff_t m_flHueAdjust = 0x1d8;
      constexpr std::ptrdiff_t m_flSaturationAdjust = 0x348;
      constexpr std::ptrdiff_t m_flLightnessAdjust = 0x4b8;
    }
    namespace C_OP_ColorInterpolate {
      constexpr std::ptrdiff_t m_ColorFade = 0x1d8;
      constexpr std::ptrdiff_t m_flFadeStartTime = 0x1e8;
      constexpr std::ptrdiff_t m_flFadeEndTime = 0x1ec;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1f0;
      constexpr std::ptrdiff_t m_bEaseInOut = 0x1f4;
    }
    namespace C_OP_ColorInterpolateRandom {
      constexpr std::ptrdiff_t m_ColorFadeMin = 0x1d8;
      constexpr std::ptrdiff_t m_ColorFadeMax = 0x1f4;
      constexpr std::ptrdiff_t m_flFadeStartTime = 0x204;
      constexpr std::ptrdiff_t m_flFadeEndTime = 0x208;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x20c;
      constexpr std::ptrdiff_t m_bEaseInOut = 0x210;
    }
    namespace C_OP_ConnectParentParticleToNearest {
      constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1d8;
      constexpr std::ptrdiff_t m_nSecondControlPoint = 0x1dc;
      constexpr std::ptrdiff_t m_bUseRadius = 0x1e0;
      constexpr std::ptrdiff_t m_flRadiusScale = 0x1e8;
      constexpr std::ptrdiff_t m_flParentRadiusScale = 0x358;
    }
    namespace C_OP_ConstrainDistance {
      constexpr std::ptrdiff_t m_fMinDistance = 0x1d8;
      constexpr std::ptrdiff_t m_fMaxDistance = 0x348;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x4b8;
      constexpr std::ptrdiff_t m_CenterOffset = 0x4bc;
      constexpr std::ptrdiff_t m_bGlobalCenter = 0x4c8;
    }
    namespace C_OP_ConstrainDistanceToPath {
      constexpr std::ptrdiff_t m_fMinDistance = 0x1d8;
      constexpr std::ptrdiff_t m_flMaxDistance0 = 0x1dc;
      constexpr std::ptrdiff_t m_flMaxDistanceMid = 0x1e0;
      constexpr std::ptrdiff_t m_flMaxDistance1 = 0x1e4;
      constexpr std::ptrdiff_t m_PathParameters = 0x1f0;
      constexpr std::ptrdiff_t m_flTravelTime = 0x230;
      constexpr std::ptrdiff_t m_nFieldScale = 0x234;
      constexpr std::ptrdiff_t m_nManualTField = 0x238;
    }
    namespace C_OP_ConstrainDistanceToUserSpecifiedPath {
      constexpr std::ptrdiff_t m_fMinDistance = 0x1d8;
      constexpr std::ptrdiff_t m_flMaxDistance = 0x1dc;
      constexpr std::ptrdiff_t m_flTimeScale = 0x1e0;
      constexpr std::ptrdiff_t m_bLoopedPath = 0x1e4;
      constexpr std::ptrdiff_t m_pointList = 0x1e8;
    }
    namespace C_OP_ConstrainLineLength {
      constexpr std::ptrdiff_t m_flMinDistance = 0x1d8;
      constexpr std::ptrdiff_t m_flMaxDistance = 0x1dc;
    }
    namespace C_OP_ContinuousEmitter {
      constexpr std::ptrdiff_t m_flEmissionDuration = 0x1e0;
      constexpr std::ptrdiff_t m_flStartTime = 0x350;
      constexpr std::ptrdiff_t m_flEmitRate = 0x4c0;
      constexpr std::ptrdiff_t m_flEmissionScale = 0x630;
      constexpr std::ptrdiff_t m_flScalePerParentParticle = 0x634;
      constexpr std::ptrdiff_t m_bInitFromKilledParentParticles = 0x638;
      constexpr std::ptrdiff_t m_nEventType = 0x63c;
      constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x640;
      constexpr std::ptrdiff_t m_strSnapshotSubset = 0x648;
      constexpr std::ptrdiff_t m_nLimitPerUpdate = 0x650;
      constexpr std::ptrdiff_t m_bForceEmitOnFirstUpdate = 0x654;
      constexpr std::ptrdiff_t m_bForceEmitOnLastUpdate = 0x655;
    }
    namespace C_OP_ControlPointToRadialScreenSpace {
      constexpr std::ptrdiff_t m_nCPIn = 0x1e0;
      constexpr std::ptrdiff_t m_vecCP1Pos = 0x1e4;
      constexpr std::ptrdiff_t m_nCPOut = 0x1f0;
      constexpr std::ptrdiff_t m_nCPOutField = 0x1f4;
      constexpr std::ptrdiff_t m_nCPSSPosOut = 0x1f8;
    }
    namespace C_OP_ControlpointLight {
      constexpr std::ptrdiff_t m_flScale = 0x1d8;
      constexpr std::ptrdiff_t m_nControlPoint1 = 0x660;
      constexpr std::ptrdiff_t m_nControlPoint2 = 0x664;
      constexpr std::ptrdiff_t m_nControlPoint3 = 0x668;
      constexpr std::ptrdiff_t m_nControlPoint4 = 0x66c;
      constexpr std::ptrdiff_t m_vecCPOffset1 = 0x670;
      constexpr std::ptrdiff_t m_vecCPOffset2 = 0x67c;
      constexpr std::ptrdiff_t m_vecCPOffset3 = 0x688;
      constexpr std::ptrdiff_t m_vecCPOffset4 = 0x694;
      constexpr std::ptrdiff_t m_LightFiftyDist1 = 0x6a0;
      constexpr std::ptrdiff_t m_LightZeroDist1 = 0x6a4;
      constexpr std::ptrdiff_t m_LightFiftyDist2 = 0x6a8;
      constexpr std::ptrdiff_t m_LightZeroDist2 = 0x6ac;
      constexpr std::ptrdiff_t m_LightFiftyDist3 = 0x6b0;
      constexpr std::ptrdiff_t m_LightZeroDist3 = 0x6b4;
      constexpr std::ptrdiff_t m_LightFiftyDist4 = 0x6b8;
      constexpr std::ptrdiff_t m_LightZeroDist4 = 0x6bc;
      constexpr std::ptrdiff_t m_LightColor1 = 0x6c0;
      constexpr std::ptrdiff_t m_LightColor2 = 0x6c4;
      constexpr std::ptrdiff_t m_LightColor3 = 0x6c8;
      constexpr std::ptrdiff_t m_LightColor4 = 0x6cc;
      constexpr std::ptrdiff_t m_bLightType1 = 0x6d0;
      constexpr std::ptrdiff_t m_bLightType2 = 0x6d1;
      constexpr std::ptrdiff_t m_bLightType3 = 0x6d2;
      constexpr std::ptrdiff_t m_bLightType4 = 0x6d3;
      constexpr std::ptrdiff_t m_bLightDynamic1 = 0x6d4;
      constexpr std::ptrdiff_t m_bLightDynamic2 = 0x6d5;
      constexpr std::ptrdiff_t m_bLightDynamic3 = 0x6d6;
      constexpr std::ptrdiff_t m_bLightDynamic4 = 0x6d7;
      constexpr std::ptrdiff_t m_bUseNormal = 0x6d8;
      constexpr std::ptrdiff_t m_bUseHLambert = 0x6d9;
      constexpr std::ptrdiff_t m_bClampLowerRange = 0x6de;
      constexpr std::ptrdiff_t m_bClampUpperRange = 0x6df;
    }
    namespace C_OP_CreateParticleSystemRenderer {
      constexpr std::ptrdiff_t m_hEffect = 0x228;
      constexpr std::ptrdiff_t m_nEventType = 0x230;
      constexpr std::ptrdiff_t m_vecCPs = 0x238;
      constexpr std::ptrdiff_t m_szParticleConfig = 0x248;
      constexpr std::ptrdiff_t m_AggregationPos = 0x250;
    }
    namespace C_OP_Cull {
      constexpr std::ptrdiff_t m_flCullPerc = 0x1d8;
      constexpr std::ptrdiff_t m_flCullStart = 0x1dc;
      constexpr std::ptrdiff_t m_flCullEnd = 0x1e0;
      constexpr std::ptrdiff_t m_flCullExp = 0x1e4;
    }
    namespace C_OP_CurlNoiseForce {
      constexpr std::ptrdiff_t m_nNoiseType = 0x1e8;
      constexpr std::ptrdiff_t m_vecNoiseFreq = 0x1f0;
      constexpr std::ptrdiff_t m_vecNoiseScale = 0x8a8;
      constexpr std::ptrdiff_t m_vecOffset = 0xf60;
      constexpr std::ptrdiff_t m_vecOffsetRate = 0x1618;
      constexpr std::ptrdiff_t m_flWorleySeed = 0x1cd0;
      constexpr std::ptrdiff_t m_flWorleyJitter = 0x1e40;
    }
    namespace C_OP_CycleScalar {
      constexpr std::ptrdiff_t m_nDestField = 0x1d8;
      constexpr std::ptrdiff_t m_flStartValue = 0x1dc;
      constexpr std::ptrdiff_t m_flEndValue = 0x1e0;
      constexpr std::ptrdiff_t m_flCycleTime = 0x1e4;
      constexpr std::ptrdiff_t m_bDoNotRepeatCycle = 0x1e8;
      constexpr std::ptrdiff_t m_bSynchronizeParticles = 0x1e9;
      constexpr std::ptrdiff_t m_nCPScale = 0x1ec;
      constexpr std::ptrdiff_t m_nCPFieldMin = 0x1f0;
      constexpr std::ptrdiff_t m_nCPFieldMax = 0x1f4;
      constexpr std::ptrdiff_t m_nSetMethod = 0x1f8;
    }
    namespace C_OP_CylindricalDistanceToTransform {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_flInputMin = 0x1e0;
      constexpr std::ptrdiff_t m_flInputMax = 0x350;
      constexpr std::ptrdiff_t m_flOutputMin = 0x4c0;
      constexpr std::ptrdiff_t m_flOutputMax = 0x630;
      constexpr std::ptrdiff_t m_TransformStart = 0x7a0;
      constexpr std::ptrdiff_t m_TransformEnd = 0x808;
      constexpr std::ptrdiff_t m_nSetMethod = 0x870;
      constexpr std::ptrdiff_t m_bActiveRange = 0x874;
      constexpr std::ptrdiff_t m_bAdditive = 0x875;
      constexpr std::ptrdiff_t m_bCapsule = 0x876;
    }
    namespace C_OP_DampenToCP {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1d8;
      constexpr std::ptrdiff_t m_flRange = 0x1dc;
      constexpr std::ptrdiff_t m_flScale = 0x1e0;
    }
    namespace C_OP_Decay {
      constexpr std::ptrdiff_t m_bRopeDecay = 0x1d8;
      constexpr std::ptrdiff_t m_bForcePreserveParticleOrder = 0x1d9;
    }
    namespace C_OP_DecayClampCount {
      constexpr std::ptrdiff_t m_nCount = 0x1d8;
    }
    namespace C_OP_DecayMaintainCount {
      constexpr std::ptrdiff_t m_nParticlesToMaintain = 0x1d8;
      constexpr std::ptrdiff_t m_flDecayDelay = 0x1dc;
      constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x1e0;
      constexpr std::ptrdiff_t m_strSnapshotSubset = 0x1e8;
      constexpr std::ptrdiff_t m_bLifespanDecay = 0x1f0;
      constexpr std::ptrdiff_t m_flScale = 0x1f8;
      constexpr std::ptrdiff_t m_bKillNewest = 0x368;
    }
    namespace C_OP_DecayOffscreen {
      constexpr std::ptrdiff_t m_flOffscreenTime = 0x1d8;
    }
    namespace C_OP_DensityForce {
      constexpr std::ptrdiff_t m_flRadiusScale = 0x1e8;
      constexpr std::ptrdiff_t m_flForceScale = 0x1ec;
      constexpr std::ptrdiff_t m_flTargetDensity = 0x1f0;
    }
    namespace C_OP_DifferencePreviousParticle {
      constexpr std::ptrdiff_t m_nFieldInput = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1dc;
      constexpr std::ptrdiff_t m_flInputMin = 0x1e0;
      constexpr std::ptrdiff_t m_flInputMax = 0x1e4;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1e8;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1ec;
      constexpr std::ptrdiff_t m_nSetMethod = 0x1f0;
      constexpr std::ptrdiff_t m_bActiveRange = 0x1f4;
      constexpr std::ptrdiff_t m_bSetPreviousParticle = 0x1f5;
    }
    namespace C_OP_Diffusion {
      constexpr std::ptrdiff_t m_flRadiusScale = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1dc;
      constexpr std::ptrdiff_t m_nVoxelGridResolution = 0x1e0;
    }
    namespace C_OP_DirectionBetweenVecsToVec {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_vecPoint1 = 0x1e0;
      constexpr std::ptrdiff_t m_vecPoint2 = 0x898;
    }
    namespace C_OP_DistanceBetweenCPsToCP {
      constexpr std::ptrdiff_t m_nStartCP = 0x1e0;
      constexpr std::ptrdiff_t m_nEndCP = 0x1e4;
      constexpr std::ptrdiff_t m_nOutputCP = 0x1e8;
      constexpr std::ptrdiff_t m_nOutputCPField = 0x1ec;
      constexpr std::ptrdiff_t m_bSetOnce = 0x1f0;
      constexpr std::ptrdiff_t m_flInputMin = 0x1f4;
      constexpr std::ptrdiff_t m_flInputMax = 0x1f8;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1fc;
      constexpr std::ptrdiff_t m_flOutputMax = 0x200;
      constexpr std::ptrdiff_t m_flMaxTraceLength = 0x204;
      constexpr std::ptrdiff_t m_flLOSScale = 0x208;
      constexpr std::ptrdiff_t m_bLOS = 0x20c;
      constexpr std::ptrdiff_t m_CollisionGroupName = 0x20d;
      constexpr std::ptrdiff_t m_nTraceSet = 0x290;
      constexpr std::ptrdiff_t m_nSetParent = 0x294;
    }
    namespace C_OP_DistanceBetweenTransforms {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_TransformStart = 0x1e0;
      constexpr std::ptrdiff_t m_TransformEnd = 0x248;
      constexpr std::ptrdiff_t m_flInputMin = 0x2b0;
      constexpr std::ptrdiff_t m_flInputMax = 0x420;
      constexpr std::ptrdiff_t m_flOutputMin = 0x590;
      constexpr std::ptrdiff_t m_flOutputMax = 0x700;
      constexpr std::ptrdiff_t m_flMaxTraceLength = 0x870;
      constexpr std::ptrdiff_t m_flLOSScale = 0x874;
      constexpr std::ptrdiff_t m_CollisionGroupName = 0x878;
      constexpr std::ptrdiff_t m_nTraceSet = 0x8f8;
      constexpr std::ptrdiff_t m_bLOS = 0x8fc;
      constexpr std::ptrdiff_t m_nSetMethod = 0x900;
    }
    namespace C_OP_DistanceBetweenVecs {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_vecPoint1 = 0x1e0;
      constexpr std::ptrdiff_t m_vecPoint2 = 0x898;
      constexpr std::ptrdiff_t m_flInputMin = 0xf50;
      constexpr std::ptrdiff_t m_flInputMax = 0x10c0;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1230;
      constexpr std::ptrdiff_t m_flOutputMax = 0x13a0;
      constexpr std::ptrdiff_t m_nSetMethod = 0x1510;
      constexpr std::ptrdiff_t m_bDeltaTime = 0x1514;
    }
    namespace C_OP_DistanceCull {
      constexpr std::ptrdiff_t m_nControlPoint = 0x1d8;
      constexpr std::ptrdiff_t m_vecPointOffset = 0x1dc;
      constexpr std::ptrdiff_t m_flDistance = 0x1e8;
      constexpr std::ptrdiff_t m_bCullInside = 0x358;
      constexpr std::ptrdiff_t m_nAttribute = 0x35c;
    }
    namespace C_OP_DistanceToTransform {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_flInputMin = 0x1e0;
      constexpr std::ptrdiff_t m_flInputMax = 0x350;
      constexpr std::ptrdiff_t m_flOutputMin = 0x4c0;
      constexpr std::ptrdiff_t m_flOutputMax = 0x630;
      constexpr std::ptrdiff_t m_TransformStart = 0x7a0;
      constexpr std::ptrdiff_t m_bLOS = 0x808;
      constexpr std::ptrdiff_t m_CollisionGroupName = 0x809;
      constexpr std::ptrdiff_t m_nTraceSet = 0x88c;
      constexpr std::ptrdiff_t m_flMaxTraceLength = 0x890;
      constexpr std::ptrdiff_t m_flLOSScale = 0x894;
      constexpr std::ptrdiff_t m_nSetMethod = 0x898;
      constexpr std::ptrdiff_t m_bActiveRange = 0x89c;
      constexpr std::ptrdiff_t m_bAdditive = 0x89d;
      constexpr std::ptrdiff_t m_vecComponentScale = 0x8a0;
    }
    namespace C_OP_DragRelativeToPlane {
      constexpr std::ptrdiff_t m_flDragAtPlane = 0x1d8;
      constexpr std::ptrdiff_t m_flFalloff = 0x348;
      constexpr std::ptrdiff_t m_bDirectional = 0x4b8;
      constexpr std::ptrdiff_t m_vecPlaneNormal = 0x4c0;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0xb78;
    }
    namespace C_OP_DriveCPFromGlobalSoundFloat {
      constexpr std::ptrdiff_t m_nOutputControlPoint = 0x1e0;
      constexpr std::ptrdiff_t m_nOutputField = 0x1e4;
      constexpr std::ptrdiff_t m_flInputMin = 0x1e8;
      constexpr std::ptrdiff_t m_flInputMax = 0x1ec;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1f0;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1f4;
      constexpr std::ptrdiff_t m_StackName = 0x1f8;
      constexpr std::ptrdiff_t m_OperatorName = 0x200;
      constexpr std::ptrdiff_t m_FieldName = 0x208;
    }
    namespace C_OP_EnableChildrenFromParentParticleCount {
      constexpr std::ptrdiff_t m_nChildGroupID = 0x1e0;
      constexpr std::ptrdiff_t m_nFirstChild = 0x1e4;
      constexpr std::ptrdiff_t m_nNumChildrenToEnable = 0x1e8;
      constexpr std::ptrdiff_t m_bDisableChildren = 0x358;
      constexpr std::ptrdiff_t m_bPlayEndcapOnStop = 0x359;
      constexpr std::ptrdiff_t m_bDestroyImmediately = 0x35a;
    }
    namespace C_OP_EndCapDecay {
    }
    namespace C_OP_EndCapTimedDecay {
      constexpr std::ptrdiff_t m_flDecayTime = 0x1d8;
    }
    namespace C_OP_EndCapTimedFreeze {
      constexpr std::ptrdiff_t m_flFreezeTime = 0x1d8;
    }
    namespace C_OP_ExternalGameImpulseForce {
      constexpr std::ptrdiff_t m_flForceScale = 0x1e8;
      constexpr std::ptrdiff_t m_bRopes = 0x358;
      constexpr std::ptrdiff_t m_bRopesZOnly = 0x359;
      constexpr std::ptrdiff_t m_bExplosions = 0x35a;
      constexpr std::ptrdiff_t m_bParticles = 0x35b;
    }
    namespace C_OP_ExternalWindForce {
      constexpr std::ptrdiff_t m_vecSamplePosition = 0x1e8;
      constexpr std::ptrdiff_t m_vecScale = 0x8a0;
      constexpr std::ptrdiff_t m_bSampleWind = 0xf58;
      constexpr std::ptrdiff_t m_bSampleWater = 0xf59;
      constexpr std::ptrdiff_t m_bDampenNearWaterPlane = 0xf5a;
      constexpr std::ptrdiff_t m_bSampleGravity = 0xf5b;
      constexpr std::ptrdiff_t m_vecGravityForce = 0xf60;
      constexpr std::ptrdiff_t m_bUseBasicMovementGravity = 0x1618;
      constexpr std::ptrdiff_t m_flLocalGravityScale = 0x1620;
      constexpr std::ptrdiff_t m_flLocalBuoyancyScale = 0x1790;
      constexpr std::ptrdiff_t m_vecBuoyancyForce = 0x1900;
    }
    namespace C_OP_FadeAndKill {
      constexpr std::ptrdiff_t m_flStartFadeInTime = 0x1d8;
      constexpr std::ptrdiff_t m_flEndFadeInTime = 0x1dc;
      constexpr std::ptrdiff_t m_flStartFadeOutTime = 0x1e0;
      constexpr std::ptrdiff_t m_flEndFadeOutTime = 0x1e4;
      constexpr std::ptrdiff_t m_flStartAlpha = 0x1e8;
      constexpr std::ptrdiff_t m_flEndAlpha = 0x1ec;
      constexpr std::ptrdiff_t m_bForcePreserveParticleOrder = 0x1f0;
    }
    namespace C_OP_FadeAndKillForTracers {
      constexpr std::ptrdiff_t m_flStartFadeInTime = 0x1d8;
      constexpr std::ptrdiff_t m_flEndFadeInTime = 0x1dc;
      constexpr std::ptrdiff_t m_flStartFadeOutTime = 0x1e0;
      constexpr std::ptrdiff_t m_flEndFadeOutTime = 0x1e4;
      constexpr std::ptrdiff_t m_flStartAlpha = 0x1e8;
      constexpr std::ptrdiff_t m_flEndAlpha = 0x1ec;
    }
    namespace C_OP_FadeIn {
      constexpr std::ptrdiff_t m_flFadeInTimeMin = 0x1d8;
      constexpr std::ptrdiff_t m_flFadeInTimeMax = 0x1dc;
      constexpr std::ptrdiff_t m_flFadeInTimeExp = 0x1e0;
      constexpr std::ptrdiff_t m_bProportional = 0x1e4;
    }
    namespace C_OP_FadeInSimple {
      constexpr std::ptrdiff_t m_flFadeInTime = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1dc;
    }
    namespace C_OP_FadeOut {
      constexpr std::ptrdiff_t m_flFadeOutTimeMin = 0x1d8;
      constexpr std::ptrdiff_t m_flFadeOutTimeMax = 0x1dc;
      constexpr std::ptrdiff_t m_flFadeOutTimeExp = 0x1e0;
      constexpr std::ptrdiff_t m_flFadeBias = 0x1e4;
      constexpr std::ptrdiff_t m_bProportional = 0x220;
      constexpr std::ptrdiff_t m_bEaseInAndOut = 0x221;
    }
    namespace C_OP_FadeOutSimple {
      constexpr std::ptrdiff_t m_flFadeOutTime = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1dc;
    }
    namespace C_OP_ForceBasedOnDistanceToPlane {
      constexpr std::ptrdiff_t m_flMinDist = 0x1e8;
      constexpr std::ptrdiff_t m_vecForceAtMinDist = 0x1ec;
      constexpr std::ptrdiff_t m_flMaxDist = 0x1f8;
      constexpr std::ptrdiff_t m_vecForceAtMaxDist = 0x1fc;
      constexpr std::ptrdiff_t m_vecPlaneNormal = 0x208;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x214;
      constexpr std::ptrdiff_t m_flExponent = 0x218;
    }
    namespace C_OP_ForceControlPointStub {
      constexpr std::ptrdiff_t m_ControlPoint = 0x1e0;
    }
    namespace C_OP_GameDecalRenderer {
      constexpr std::ptrdiff_t m_sDecalGroupName = 0x228;
      constexpr std::ptrdiff_t m_nEventType = 0x230;
      constexpr std::ptrdiff_t m_nInteractionMask = 0x238;
      constexpr std::ptrdiff_t m_nCollisionGroup = 0x240;
      constexpr std::ptrdiff_t m_vecStartPos = 0x248;
      constexpr std::ptrdiff_t m_vecEndPos = 0x900;
      constexpr std::ptrdiff_t m_flTraceBloat = 0xfb8;
      constexpr std::ptrdiff_t m_flDecalSize = 0x1128;
      constexpr std::ptrdiff_t m_nDecalGroupIndex = 0x1298;
      constexpr std::ptrdiff_t m_flDecalRotation = 0x1408;
      constexpr std::ptrdiff_t m_vModulationColor = 0x1578;
      constexpr std::ptrdiff_t m_bUseGameDefaultDecalSize = 0x1c30;
      constexpr std::ptrdiff_t m_bRandomDecalRotation = 0x1c31;
      constexpr std::ptrdiff_t m_bRandomlySelectDecalInGroup = 0x1c32;
      constexpr std::ptrdiff_t m_bNoDecalsOnOwner = 0x1c33;
      constexpr std::ptrdiff_t m_bVisualizeTraces = 0x1c34;
    }
    namespace C_OP_GameLiquidSpill {
      constexpr std::ptrdiff_t m_flLiquidContentsField = 0x228;
      constexpr std::ptrdiff_t m_flExpirationTime = 0x398;
      constexpr std::ptrdiff_t m_nAmountAttribute = 0x508;
    }
    namespace C_OP_GlobalLight {
      constexpr std::ptrdiff_t m_flScale = 0x1d8;
      constexpr std::ptrdiff_t m_bClampLowerRange = 0x1dc;
      constexpr std::ptrdiff_t m_bClampUpperRange = 0x1dd;
    }
    namespace C_OP_HSVShiftToCP {
      constexpr std::ptrdiff_t m_nColorCP = 0x1e0;
      constexpr std::ptrdiff_t m_nColorGemEnableCP = 0x1e4;
      constexpr std::ptrdiff_t m_nOutputCP = 0x1e8;
      constexpr std::ptrdiff_t m_DefaultHSVColor = 0x1ec;
    }
    namespace C_OP_InheritFromParentParticles {
      constexpr std::ptrdiff_t m_flScale = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1dc;
      constexpr std::ptrdiff_t m_nIncrement = 0x1e0;
      constexpr std::ptrdiff_t m_bRandomDistribution = 0x1e4;
    }
    namespace C_OP_InheritFromParentParticlesV2 {
      constexpr std::ptrdiff_t m_flScale = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x348;
      constexpr std::ptrdiff_t m_nIncrement = 0x350;
      constexpr std::ptrdiff_t m_bRandomDistribution = 0x4c0;
      constexpr std::ptrdiff_t m_bReverse = 0x4c1;
      constexpr std::ptrdiff_t m_nMissingParentBehavior = 0x4c4;
      constexpr std::ptrdiff_t m_flInterpolation = 0x4c8;
    }
    namespace C_OP_InheritFromPeerSystem {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldInput = 0x1dc;
      constexpr std::ptrdiff_t m_nIncrement = 0x1e0;
      constexpr std::ptrdiff_t m_nGroupID = 0x1e4;
    }
    namespace C_OP_InstantaneousEmitter {
      constexpr std::ptrdiff_t m_nParticlesToEmit = 0x1e0;
      constexpr std::ptrdiff_t m_flStartTime = 0x350;
      constexpr std::ptrdiff_t m_flInitFromKilledParentParticles = 0x4c0;
      constexpr std::ptrdiff_t m_nEventType = 0x4c4;
      constexpr std::ptrdiff_t m_flParentParticleScale = 0x4c8;
      constexpr std::ptrdiff_t m_nMaxEmittedPerFrame = 0x638;
      constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x63c;
      constexpr std::ptrdiff_t m_strSnapshotSubset = 0x640;
    }
    namespace C_OP_InterpolateRadius {
      constexpr std::ptrdiff_t m_flStartTime = 0x1d8;
      constexpr std::ptrdiff_t m_flEndTime = 0x1dc;
      constexpr std::ptrdiff_t m_flStartScale = 0x1e0;
      constexpr std::ptrdiff_t m_flEndScale = 0x1e4;
      constexpr std::ptrdiff_t m_bEaseInAndOut = 0x1e8;
      constexpr std::ptrdiff_t m_flBias = 0x1ec;
    }
    namespace C_OP_IntraParticleForce {
      constexpr std::ptrdiff_t m_flAttractionMinDistance = 0x1e8;
      constexpr std::ptrdiff_t m_flAttractionMaxDistance = 0x1ec;
      constexpr std::ptrdiff_t m_flAttractionMaxStrength = 0x1f0;
      constexpr std::ptrdiff_t m_flRepulsionMinDistance = 0x1f4;
      constexpr std::ptrdiff_t m_flRepulsionMaxDistance = 0x1f8;
      constexpr std::ptrdiff_t m_flRepulsionMaxStrength = 0x1fc;
      constexpr std::ptrdiff_t m_bUseAABB = 0x200;
    }
    namespace C_OP_LagCompensation {
      constexpr std::ptrdiff_t m_nDesiredVelocityCP = 0x1d8;
      constexpr std::ptrdiff_t m_nLatencyCP = 0x1dc;
      constexpr std::ptrdiff_t m_nLatencyCPField = 0x1e0;
      constexpr std::ptrdiff_t m_nDesiredVelocityCPField = 0x1e4;
    }
    namespace C_OP_LazyCullCompareFloat {
      constexpr std::ptrdiff_t m_flComparsion1 = 0x1d8;
      constexpr std::ptrdiff_t m_flComparsion2 = 0x348;
      constexpr std::ptrdiff_t m_flCullTime = 0x4b8;
    }
    namespace C_OP_LerpEndCapScalar {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_flOutput = 0x1dc;
      constexpr std::ptrdiff_t m_flLerpTime = 0x1e0;
    }
    namespace C_OP_LerpEndCapVector {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_vecOutput = 0x1dc;
      constexpr std::ptrdiff_t m_flLerpTime = 0x1e8;
    }
    namespace C_OP_LerpScalar {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_flOutput = 0x1e0;
      constexpr std::ptrdiff_t m_flStartTime = 0x350;
      constexpr std::ptrdiff_t m_flEndTime = 0x354;
    }
    namespace C_OP_LerpToInitialPosition {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1d8;
      constexpr std::ptrdiff_t m_flInterpolation = 0x1e0;
      constexpr std::ptrdiff_t m_nCacheField = 0x350;
      constexpr std::ptrdiff_t m_flScale = 0x358;
      constexpr std::ptrdiff_t m_vecScale = 0x4c8;
    }
    namespace C_OP_LerpToOtherAttribute {
      constexpr std::ptrdiff_t m_flInterpolation = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldInputFrom = 0x348;
      constexpr std::ptrdiff_t m_nFieldInput = 0x34c;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x350;
    }
    namespace C_OP_LerpVector {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_vecOutput = 0x1dc;
      constexpr std::ptrdiff_t m_flStartTime = 0x1e8;
      constexpr std::ptrdiff_t m_flEndTime = 0x1ec;
      constexpr std::ptrdiff_t m_nSetMethod = 0x1f0;
    }
    namespace C_OP_LightningSnapshotGenerator {
      constexpr std::ptrdiff_t m_nCPSnapshot = 0x1e0;
      constexpr std::ptrdiff_t m_nCPStartPnt = 0x1e4;
      constexpr std::ptrdiff_t m_nCPEndPnt = 0x1e8;
      constexpr std::ptrdiff_t m_flSegments = 0x1f0;
      constexpr std::ptrdiff_t m_flOffset = 0x360;
      constexpr std::ptrdiff_t m_flOffsetDecay = 0x4d0;
      constexpr std::ptrdiff_t m_flRecalcRate = 0x640;
      constexpr std::ptrdiff_t m_flUVScale = 0x7b0;
      constexpr std::ptrdiff_t m_flUVOffset = 0x920;
      constexpr std::ptrdiff_t m_flSplitRate = 0xa90;
      constexpr std::ptrdiff_t m_flBranchTwist = 0xc00;
      constexpr std::ptrdiff_t m_nBranchBehavior = 0xd70;
      constexpr std::ptrdiff_t m_flRadiusStart = 0xd78;
      constexpr std::ptrdiff_t m_flRadiusEnd = 0xee8;
      constexpr std::ptrdiff_t m_flDedicatedPool = 0x1058;
    }
    namespace C_OP_LocalAccelerationForce {
      constexpr std::ptrdiff_t m_nCP = 0x1e8;
      constexpr std::ptrdiff_t m_nScaleCP = 0x1ec;
      constexpr std::ptrdiff_t m_vecAccel = 0x1f0;
    }
    namespace C_OP_LockPoints {
      constexpr std::ptrdiff_t m_nMinCol = 0x1d8;
      constexpr std::ptrdiff_t m_nMaxCol = 0x1dc;
      constexpr std::ptrdiff_t m_nMinRow = 0x1e0;
      constexpr std::ptrdiff_t m_nMaxRow = 0x1e4;
      constexpr std::ptrdiff_t m_nControlPoint = 0x1e8;
      constexpr std::ptrdiff_t m_flBlendValue = 0x1ec;
    }
    namespace C_OP_LockToBone {
      constexpr std::ptrdiff_t m_modelInput = 0x1d8;
      constexpr std::ptrdiff_t m_transformInput = 0x238;
      constexpr std::ptrdiff_t m_flLifeTimeFadeStart = 0x2a0;
      constexpr std::ptrdiff_t m_flLifeTimeFadeEnd = 0x2a4;
      constexpr std::ptrdiff_t m_flJumpThreshold = 0x2a8;
      constexpr std::ptrdiff_t m_flPrevPosScale = 0x2ac;
      constexpr std::ptrdiff_t m_HitboxSetName = 0x2b0;
      constexpr std::ptrdiff_t m_bRigid = 0x330;
      constexpr std::ptrdiff_t m_bUseBones = 0x331;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x334;
      constexpr std::ptrdiff_t m_nFieldOutputPrev = 0x338;
      constexpr std::ptrdiff_t m_nRotationSetType = 0x33c;
      constexpr std::ptrdiff_t m_bRigidRotationLock = 0x340;
      constexpr std::ptrdiff_t m_vecRotation = 0x348;
      constexpr std::ptrdiff_t m_flRotLerp = 0xa00;
    }
    namespace C_OP_LockToPointList {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_pointList = 0x1e0;
      constexpr std::ptrdiff_t m_bPlaceAlongPath = 0x1f8;
      constexpr std::ptrdiff_t m_bClosedLoop = 0x1f9;
      constexpr std::ptrdiff_t m_nNumPointsAlongPath = 0x1fc;
    }
    namespace C_OP_LockToSavedSequentialPath {
      constexpr std::ptrdiff_t m_flFadeStart = 0x1dc;
      constexpr std::ptrdiff_t m_flFadeEnd = 0x1e0;
      constexpr std::ptrdiff_t m_bCPPairs = 0x1e4;
      constexpr std::ptrdiff_t m_PathParams = 0x1f0;
    }
    namespace C_OP_LockToSavedSequentialPathV2 {
      constexpr std::ptrdiff_t m_flFadeStart = 0x1d8;
      constexpr std::ptrdiff_t m_flFadeEnd = 0x1dc;
      constexpr std::ptrdiff_t m_bCPPairs = 0x1e0;
      constexpr std::ptrdiff_t m_PathParams = 0x1f0;
    }
    namespace C_OP_MaintainEmitter {
      constexpr std::ptrdiff_t m_nParticlesToMaintain = 0x1e0;
      constexpr std::ptrdiff_t m_flStartTime = 0x350;
      constexpr std::ptrdiff_t m_flEmissionDuration = 0x358;
      constexpr std::ptrdiff_t m_flEmissionRate = 0x4c8;
      constexpr std::ptrdiff_t m_nSnapshotControlPoint = 0x4cc;
      constexpr std::ptrdiff_t m_strSnapshotSubset = 0x4d0;
      constexpr std::ptrdiff_t m_bEmitInstantaneously = 0x4d8;
      constexpr std::ptrdiff_t m_bFinalEmitOnStop = 0x4d9;
      constexpr std::ptrdiff_t m_flScale = 0x4e0;
    }
    namespace C_OP_MaintainSequentialPath {
      constexpr std::ptrdiff_t m_fMaxDistance = 0x1d8;
      constexpr std::ptrdiff_t m_flNumToAssign = 0x1dc;
      constexpr std::ptrdiff_t m_flCohesionStrength = 0x1e0;
      constexpr std::ptrdiff_t m_flTolerance = 0x1e4;
      constexpr std::ptrdiff_t m_bLoop = 0x1e8;
      constexpr std::ptrdiff_t m_bUseParticleCount = 0x1e9;
      constexpr std::ptrdiff_t m_PathParams = 0x1f0;
    }
    namespace C_OP_MaxVelocity {
      constexpr std::ptrdiff_t m_flMaxVelocity = 0x1d8;
      constexpr std::ptrdiff_t m_flMinVelocity = 0x1dc;
      constexpr std::ptrdiff_t m_nOverrideCP = 0x1e0;
      constexpr std::ptrdiff_t m_nOverrideCPField = 0x1e4;
    }
    namespace C_OP_ModelCull {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1d8;
      constexpr std::ptrdiff_t m_bBoundBox = 0x1dc;
      constexpr std::ptrdiff_t m_bCullOutside = 0x1dd;
      constexpr std::ptrdiff_t m_bUseBones = 0x1de;
      constexpr std::ptrdiff_t m_HitboxSetName = 0x1df;
    }
    namespace C_OP_ModelDampenMovement {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1d8;
      constexpr std::ptrdiff_t m_bBoundBox = 0x1dc;
      constexpr std::ptrdiff_t m_bOutside = 0x1dd;
      constexpr std::ptrdiff_t m_bUseBones = 0x1de;
      constexpr std::ptrdiff_t m_HitboxSetName = 0x1df;
      constexpr std::ptrdiff_t m_vecPosOffset = 0x260;
      constexpr std::ptrdiff_t m_fDrag = 0x918;
    }
    namespace C_OP_ModelSurfaceSnapshotGenerator {
      constexpr std::ptrdiff_t m_nCPSnapshot = 0x1e0;
      constexpr std::ptrdiff_t m_modelInput = 0x1e8;
      constexpr std::ptrdiff_t m_flRecalcRate = 0x248;
      constexpr std::ptrdiff_t m_flUSpacing = 0x3b8;
      constexpr std::ptrdiff_t m_flVSpacing = 0x528;
      constexpr std::ptrdiff_t m_flSurfaceOffset = 0x698;
      constexpr std::ptrdiff_t m_bSetNormal = 0x808;
      constexpr std::ptrdiff_t m_bSetUp = 0x809;
      constexpr std::ptrdiff_t m_bSetGravity = 0x80a;
      constexpr std::ptrdiff_t m_bSetUV = 0x80b;
    }
    namespace C_OP_MoveToHitbox {
      constexpr std::ptrdiff_t m_modelInput = 0x1d8;
      constexpr std::ptrdiff_t m_transformInput = 0x238;
      constexpr std::ptrdiff_t m_flLifeTimeLerpStart = 0x2a4;
      constexpr std::ptrdiff_t m_flLifeTimeLerpEnd = 0x2a8;
      constexpr std::ptrdiff_t m_flPrevPosScale = 0x2ac;
      constexpr std::ptrdiff_t m_HitboxSetName = 0x2b0;
      constexpr std::ptrdiff_t m_bUseBones = 0x330;
      constexpr std::ptrdiff_t m_nLerpType = 0x334;
      constexpr std::ptrdiff_t m_flInterpolation = 0x338;
    }
    namespace C_OP_MovementLoopInsideSphere {
      constexpr std::ptrdiff_t m_nCP = 0x1d8;
      constexpr std::ptrdiff_t m_flDistance = 0x1e0;
      constexpr std::ptrdiff_t m_vecScale = 0x350;
      constexpr std::ptrdiff_t m_nDistSqrAttr = 0xa08;
    }
    namespace C_OP_MovementMaintainOffset {
      constexpr std::ptrdiff_t m_vecOffset = 0x1d8;
      constexpr std::ptrdiff_t m_nCP = 0x1e4;
      constexpr std::ptrdiff_t m_bRadiusScale = 0x1e8;
    }
    namespace C_OP_MovementMoveAlongSkinnedCPSnapshot {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1d8;
      constexpr std::ptrdiff_t m_nSnapshotControlPointNumber = 0x1dc;
      constexpr std::ptrdiff_t m_bSetNormal = 0x1e0;
      constexpr std::ptrdiff_t m_bSetRadius = 0x1e1;
      constexpr std::ptrdiff_t m_flInterpolation = 0x1e8;
      constexpr std::ptrdiff_t m_flTValue = 0x358;
    }
    namespace C_OP_MovementPlaceOnGround {
      constexpr std::ptrdiff_t m_flOffset = 0x1d8;
      constexpr std::ptrdiff_t m_flMaxTraceLength = 0x348;
      constexpr std::ptrdiff_t m_flTolerance = 0x34c;
      constexpr std::ptrdiff_t m_vecTraceDir = 0x350;
      constexpr std::ptrdiff_t m_flTraceOffset = 0xa08;
      constexpr std::ptrdiff_t m_flLerpRate = 0xa0c;
      constexpr std::ptrdiff_t m_CollisionGroupName = 0xa10;
      constexpr std::ptrdiff_t m_nTraceSet = 0xa90;
      constexpr std::ptrdiff_t m_nRefCP1 = 0xa94;
      constexpr std::ptrdiff_t m_nRefCP2 = 0xa98;
      constexpr std::ptrdiff_t m_nLerpCP = 0xa9c;
      constexpr std::ptrdiff_t m_nTraceMissBehavior = 0xaa8;
      constexpr std::ptrdiff_t m_bIncludeShotHull = 0xaac;
      constexpr std::ptrdiff_t m_bIncludeWater = 0xaad;
      constexpr std::ptrdiff_t m_bSetNormal = 0xab0;
      constexpr std::ptrdiff_t m_bScaleOffset = 0xab1;
      constexpr std::ptrdiff_t m_nPreserveOffsetCP = 0xab4;
      constexpr std::ptrdiff_t m_nIgnoreCP = 0xab8;
    }
    namespace C_OP_MovementRigidAttachToCP {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1d8;
      constexpr std::ptrdiff_t m_nScaleControlPoint = 0x1dc;
      constexpr std::ptrdiff_t m_nScaleCPField = 0x1e0;
      constexpr std::ptrdiff_t m_nFieldInput = 0x1e4;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e8;
      constexpr std::ptrdiff_t m_bOffsetLocal = 0x1ec;
    }
    namespace C_OP_MovementRotateParticleAroundAxis {
      constexpr std::ptrdiff_t m_vecRotAxis = 0x1d8;
      constexpr std::ptrdiff_t m_flRotRate = 0x890;
      constexpr std::ptrdiff_t m_TransformInput = 0xa00;
      constexpr std::ptrdiff_t m_bLocalSpace = 0xa68;
    }
    namespace C_OP_MovementSkinnedPositionFromCPSnapshot {
      constexpr std::ptrdiff_t m_nSnapshotControlPointNumber = 0x1d8;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1dc;
      constexpr std::ptrdiff_t m_bRandom = 0x1e0;
      constexpr std::ptrdiff_t m_nRandomSeed = 0x1e4;
      constexpr std::ptrdiff_t m_bSetNormal = 0x1e8;
      constexpr std::ptrdiff_t m_bSetRadius = 0x1e9;
      constexpr std::ptrdiff_t m_nIndexType = 0x1ec;
      constexpr std::ptrdiff_t m_flReadIndex = 0x1f0;
      constexpr std::ptrdiff_t m_flIncrement = 0x360;
      constexpr std::ptrdiff_t m_nFullLoopIncrement = 0x4d0;
      constexpr std::ptrdiff_t m_nSnapShotStartPoint = 0x640;
      constexpr std::ptrdiff_t m_flInterpolation = 0x7b0;
    }
    namespace C_OP_MultiSegmentDisplaySnapshotGenerator {
      constexpr std::ptrdiff_t m_nCPSnapshot = 0x1e0;
      constexpr std::ptrdiff_t m_nSegCount = 0x1e4;
      constexpr std::ptrdiff_t m_nInputType = 0x1e8;
      constexpr std::ptrdiff_t m_strDefaultString = 0x1f0;
      constexpr std::ptrdiff_t m_flValue = 0x1f8;
      constexpr std::ptrdiff_t m_SpecialCharList = 0x368;
      constexpr std::ptrdiff_t m_vecColorUnlit = 0x380;
      constexpr std::ptrdiff_t m_vecColorLit = 0xa38;
      constexpr std::ptrdiff_t m_flRadius = 0x10f0;
      constexpr std::ptrdiff_t m_flSpacing = 0x1260;
      constexpr std::ptrdiff_t m_flMinCount = 0x13d0;
      constexpr std::ptrdiff_t m_flMaxCount = 0x1540;
      constexpr std::ptrdiff_t m_bPrependEmpty = 0x16b0;
      constexpr std::ptrdiff_t m_flDigitsAfterDecimal = 0x16b8;
    }
    namespace C_OP_Noise {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1dc;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1e0;
      constexpr std::ptrdiff_t m_fl4NoiseScale = 0x1e4;
      constexpr std::ptrdiff_t m_bAdditive = 0x1e8;
      constexpr std::ptrdiff_t m_flNoiseAnimationTimeScale = 0x1ec;
    }
    namespace C_OP_NoiseEmitter {
      constexpr std::ptrdiff_t m_flEmissionDuration = 0x1e0;
      constexpr std::ptrdiff_t m_flStartTime = 0x1e4;
      constexpr std::ptrdiff_t m_flEmissionScale = 0x1e8;
      constexpr std::ptrdiff_t m_nScaleControlPoint = 0x1ec;
      constexpr std::ptrdiff_t m_nScaleControlPointField = 0x1f0;
      constexpr std::ptrdiff_t m_nWorldNoisePoint = 0x1f4;
      constexpr std::ptrdiff_t m_bAbsVal = 0x1f8;
      constexpr std::ptrdiff_t m_bAbsValInv = 0x1f9;
      constexpr std::ptrdiff_t m_flOffset = 0x1fc;
      constexpr std::ptrdiff_t m_flOutputMin = 0x200;
      constexpr std::ptrdiff_t m_flOutputMax = 0x204;
      constexpr std::ptrdiff_t m_flNoiseScale = 0x208;
      constexpr std::ptrdiff_t m_flWorldNoiseScale = 0x20c;
      constexpr std::ptrdiff_t m_vecOffsetLoc = 0x210;
      constexpr std::ptrdiff_t m_flWorldTimeScale = 0x21c;
    }
    namespace C_OP_NormalLock {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1d8;
    }
    namespace C_OP_NormalizeVector {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_flScale = 0x1dc;
    }
    namespace C_OP_Orient2DRelToCP {
      constexpr std::ptrdiff_t m_flRotOffset = 0x1d8;
      constexpr std::ptrdiff_t m_flSpinStrength = 0x1dc;
      constexpr std::ptrdiff_t m_nCP = 0x1e0;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e4;
    }
    namespace C_OP_OrientTo2dDirection {
      constexpr std::ptrdiff_t m_flRotOffset = 0x1d8;
      constexpr std::ptrdiff_t m_flSpinStrength = 0x1dc;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e0;
    }
    namespace C_OP_OscillateScalar {
      constexpr std::ptrdiff_t m_RateMin = 0x1d8;
      constexpr std::ptrdiff_t m_RateMax = 0x1dc;
      constexpr std::ptrdiff_t m_FrequencyMin = 0x1e0;
      constexpr std::ptrdiff_t m_FrequencyMax = 0x1e4;
      constexpr std::ptrdiff_t m_nField = 0x1e8;
      constexpr std::ptrdiff_t m_bProportional = 0x1ec;
      constexpr std::ptrdiff_t m_bProportionalOp = 0x1ed;
      constexpr std::ptrdiff_t m_flStartTime_min = 0x1f0;
      constexpr std::ptrdiff_t m_flStartTime_max = 0x1f4;
      constexpr std::ptrdiff_t m_flEndTime_min = 0x1f8;
      constexpr std::ptrdiff_t m_flEndTime_max = 0x1fc;
      constexpr std::ptrdiff_t m_flOscMult = 0x200;
      constexpr std::ptrdiff_t m_flOscAdd = 0x204;
    }
    namespace C_OP_OscillateScalarSimple {
      constexpr std::ptrdiff_t m_Rate = 0x1d8;
      constexpr std::ptrdiff_t m_Frequency = 0x1dc;
      constexpr std::ptrdiff_t m_nField = 0x1e0;
      constexpr std::ptrdiff_t m_flOscMult = 0x1e4;
      constexpr std::ptrdiff_t m_flOscAdd = 0x1e8;
    }
    namespace C_OP_OscillateVector {
      constexpr std::ptrdiff_t m_RateMin = 0x1d8;
      constexpr std::ptrdiff_t m_RateMax = 0x1e4;
      constexpr std::ptrdiff_t m_FrequencyMin = 0x1f0;
      constexpr std::ptrdiff_t m_FrequencyMax = 0x1fc;
      constexpr std::ptrdiff_t m_nField = 0x208;
      constexpr std::ptrdiff_t m_bProportional = 0x20c;
      constexpr std::ptrdiff_t m_bProportionalOp = 0x20d;
      constexpr std::ptrdiff_t m_bOffset = 0x20e;
      constexpr std::ptrdiff_t m_flStartTime_min = 0x210;
      constexpr std::ptrdiff_t m_flStartTime_max = 0x214;
      constexpr std::ptrdiff_t m_flEndTime_min = 0x218;
      constexpr std::ptrdiff_t m_flEndTime_max = 0x21c;
      constexpr std::ptrdiff_t m_flOscMult = 0x220;
      constexpr std::ptrdiff_t m_flOscAdd = 0x390;
      constexpr std::ptrdiff_t m_flRateScale = 0x500;
    }
    namespace C_OP_OscillateVectorSimple {
      constexpr std::ptrdiff_t m_Rate = 0x1d8;
      constexpr std::ptrdiff_t m_Frequency = 0x1e4;
      constexpr std::ptrdiff_t m_nField = 0x1f0;
      constexpr std::ptrdiff_t m_flOscMult = 0x1f4;
      constexpr std::ptrdiff_t m_flOscAdd = 0x1f8;
      constexpr std::ptrdiff_t m_bOffset = 0x1fc;
    }
    namespace C_OP_ParentVortices {
      constexpr std::ptrdiff_t m_flForceScale = 0x1e8;
      constexpr std::ptrdiff_t m_vecTwistAxis = 0x1ec;
      constexpr std::ptrdiff_t m_bFlipBasedOnYaw = 0x1f8;
    }
    namespace C_OP_PerParticleForce {
      constexpr std::ptrdiff_t m_flForceScale = 0x1e8;
      constexpr std::ptrdiff_t m_vForce = 0x358;
      constexpr std::ptrdiff_t m_nCP = 0xa10;
    }
    namespace C_OP_PercentageBetweenTransformLerpCPs {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_flInputMin = 0x1dc;
      constexpr std::ptrdiff_t m_flInputMax = 0x1e0;
      constexpr std::ptrdiff_t m_TransformStart = 0x1e8;
      constexpr std::ptrdiff_t m_TransformEnd = 0x250;
      constexpr std::ptrdiff_t m_nOutputStartCP = 0x2b8;
      constexpr std::ptrdiff_t m_nOutputStartField = 0x2bc;
      constexpr std::ptrdiff_t m_nOutputEndCP = 0x2c0;
      constexpr std::ptrdiff_t m_nOutputEndField = 0x2c4;
      constexpr std::ptrdiff_t m_nSetMethod = 0x2c8;
      constexpr std::ptrdiff_t m_bActiveRange = 0x2cc;
      constexpr std::ptrdiff_t m_bRadialCheck = 0x2cd;
    }
    namespace C_OP_PercentageBetweenTransforms {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_flInputMin = 0x1dc;
      constexpr std::ptrdiff_t m_flInputMax = 0x1e0;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1e4;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1e8;
      constexpr std::ptrdiff_t m_TransformStart = 0x1f0;
      constexpr std::ptrdiff_t m_TransformEnd = 0x258;
      constexpr std::ptrdiff_t m_nSetMethod = 0x2c0;
      constexpr std::ptrdiff_t m_bActiveRange = 0x2c4;
      constexpr std::ptrdiff_t m_bRadialCheck = 0x2c5;
    }
    namespace C_OP_PercentageBetweenTransformsVector {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_flInputMin = 0x1dc;
      constexpr std::ptrdiff_t m_flInputMax = 0x1e0;
      constexpr std::ptrdiff_t m_vecOutputMin = 0x1e4;
      constexpr std::ptrdiff_t m_vecOutputMax = 0x1f0;
      constexpr std::ptrdiff_t m_TransformStart = 0x200;
      constexpr std::ptrdiff_t m_TransformEnd = 0x268;
      constexpr std::ptrdiff_t m_nSetMethod = 0x2d0;
      constexpr std::ptrdiff_t m_bActiveRange = 0x2d4;
      constexpr std::ptrdiff_t m_bRadialCheck = 0x2d5;
    }
    namespace C_OP_PinParticleToCP {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1d8;
      constexpr std::ptrdiff_t m_vecOffset = 0x1e0;
      constexpr std::ptrdiff_t m_bOffsetLocal = 0x898;
      constexpr std::ptrdiff_t m_nParticleSelection = 0x89c;
      constexpr std::ptrdiff_t m_nParticleNumber = 0x8a0;
      constexpr std::ptrdiff_t m_nPinBreakType = 0xa10;
      constexpr std::ptrdiff_t m_flBreakDistance = 0xa18;
      constexpr std::ptrdiff_t m_flBreakSpeed = 0xb88;
      constexpr std::ptrdiff_t m_flAge = 0xcf8;
      constexpr std::ptrdiff_t m_nBreakControlPointNumber = 0xe68;
      constexpr std::ptrdiff_t m_nBreakControlPointNumber2 = 0xe6c;
      constexpr std::ptrdiff_t m_flBreakValue = 0xe70;
      constexpr std::ptrdiff_t m_flInterpolation = 0xfe0;
      constexpr std::ptrdiff_t m_bRetainInitialVelocity = 0x1150;
    }
    namespace C_OP_PinRopeSegmentParticleToParent {
      constexpr std::ptrdiff_t m_nParticleSelection = 0x1d8;
      constexpr std::ptrdiff_t m_nParticleNumber = 0x1e0;
      constexpr std::ptrdiff_t m_flInterpolation = 0x350;
    }
    namespace C_OP_PlanarConstraint {
      constexpr std::ptrdiff_t m_PointOnPlane = 0x1d8;
      constexpr std::ptrdiff_t m_PlaneNormal = 0x1e4;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1f0;
      constexpr std::ptrdiff_t m_bGlobalOrigin = 0x1f4;
      constexpr std::ptrdiff_t m_bGlobalNormal = 0x1f5;
      constexpr std::ptrdiff_t m_flRadiusScale = 0x1f8;
      constexpr std::ptrdiff_t m_flMaximumDistanceToCP = 0x368;
      constexpr std::ptrdiff_t m_bUseOldCode = 0x4d8;
    }
    namespace C_OP_PlaneCull {
      constexpr std::ptrdiff_t m_nPlaneControlPoint = 0x1d8;
      constexpr std::ptrdiff_t m_vecPlaneDirection = 0x1e0;
      constexpr std::ptrdiff_t m_bLocalSpace = 0x898;
      constexpr std::ptrdiff_t m_flPlaneOffset = 0x89c;
    }
    namespace C_OP_PlayEndCapWhenFinished {
      constexpr std::ptrdiff_t m_bFireOnEmissionEnd = 0x1e0;
      constexpr std::ptrdiff_t m_bIncludeChildren = 0x1e1;
    }
    namespace C_OP_PointVectorAtNextParticle {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_flInterpolation = 0x1e0;
    }
    namespace C_OP_PositionLock {
      constexpr std::ptrdiff_t m_TransformInput = 0x1d8;
      constexpr std::ptrdiff_t m_flStartTime_min = 0x240;
      constexpr std::ptrdiff_t m_flStartTime_max = 0x244;
      constexpr std::ptrdiff_t m_flStartTime_exp = 0x248;
      constexpr std::ptrdiff_t m_flEndTime_min = 0x24c;
      constexpr std::ptrdiff_t m_flEndTime_max = 0x250;
      constexpr std::ptrdiff_t m_flEndTime_exp = 0x254;
      constexpr std::ptrdiff_t m_flRange = 0x258;
      constexpr std::ptrdiff_t m_flRangeBias = 0x260;
      constexpr std::ptrdiff_t m_flJumpThreshold = 0x3d0;
      constexpr std::ptrdiff_t m_flPrevPosScale = 0x3d4;
      constexpr std::ptrdiff_t m_bLockRot = 0x3d8;
      constexpr std::ptrdiff_t m_vecScale = 0x3e0;
      constexpr std::ptrdiff_t m_nFieldOutput = 0xa98;
      constexpr std::ptrdiff_t m_nFieldOutputPrev = 0xa9c;
    }
    namespace C_OP_QuantizeCPComponent {
      constexpr std::ptrdiff_t m_flInputValue = 0x1e0;
      constexpr std::ptrdiff_t m_nCPOutput = 0x350;
      constexpr std::ptrdiff_t m_nOutVectorField = 0x354;
      constexpr std::ptrdiff_t m_flQuantizeValue = 0x358;
    }
    namespace C_OP_QuantizeFloat {
      constexpr std::ptrdiff_t m_InputValue = 0x1d8;
      constexpr std::ptrdiff_t m_nOutputField = 0x348;
    }
    namespace C_OP_RadiusDecay {
      constexpr std::ptrdiff_t m_flMinRadius = 0x1d8;
    }
    namespace C_OP_RampCPLinearRandom {
      constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1e0;
      constexpr std::ptrdiff_t m_vecRateMin = 0x1e4;
      constexpr std::ptrdiff_t m_vecRateMax = 0x1f0;
    }
    namespace C_OP_RampScalarLinear {
      constexpr std::ptrdiff_t m_RateMin = 0x1d8;
      constexpr std::ptrdiff_t m_RateMax = 0x1dc;
      constexpr std::ptrdiff_t m_flStartTime_min = 0x1e0;
      constexpr std::ptrdiff_t m_flStartTime_max = 0x1e4;
      constexpr std::ptrdiff_t m_flEndTime_min = 0x1e8;
      constexpr std::ptrdiff_t m_flEndTime_max = 0x1ec;
      constexpr std::ptrdiff_t m_nField = 0x210;
      constexpr std::ptrdiff_t m_bProportionalOp = 0x214;
    }
    namespace C_OP_RampScalarLinearSimple {
      constexpr std::ptrdiff_t m_Rate = 0x1d8;
      constexpr std::ptrdiff_t m_flStartTime = 0x1dc;
      constexpr std::ptrdiff_t m_flEndTime = 0x1e0;
      constexpr std::ptrdiff_t m_nField = 0x210;
    }
    namespace C_OP_RampScalarSpline {
      constexpr std::ptrdiff_t m_RateMin = 0x1d8;
      constexpr std::ptrdiff_t m_RateMax = 0x1dc;
      constexpr std::ptrdiff_t m_flStartTime_min = 0x1e0;
      constexpr std::ptrdiff_t m_flStartTime_max = 0x1e4;
      constexpr std::ptrdiff_t m_flEndTime_min = 0x1e8;
      constexpr std::ptrdiff_t m_flEndTime_max = 0x1ec;
      constexpr std::ptrdiff_t m_flBias = 0x1f0;
      constexpr std::ptrdiff_t m_nField = 0x220;
      constexpr std::ptrdiff_t m_bProportionalOp = 0x224;
      constexpr std::ptrdiff_t m_bEaseOut = 0x225;
    }
    namespace C_OP_RampScalarSplineSimple {
      constexpr std::ptrdiff_t m_Rate = 0x1d8;
      constexpr std::ptrdiff_t m_flStartTime = 0x1dc;
      constexpr std::ptrdiff_t m_flEndTime = 0x1e0;
      constexpr std::ptrdiff_t m_nField = 0x210;
      constexpr std::ptrdiff_t m_bEaseOut = 0x214;
    }
    namespace C_OP_RandomForce {
      constexpr std::ptrdiff_t m_MinForce = 0x1e8;
      constexpr std::ptrdiff_t m_MaxForce = 0x1f4;
    }
    namespace C_OP_ReadFromNeighboringParticle {
      constexpr std::ptrdiff_t m_nFieldInput = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1dc;
      constexpr std::ptrdiff_t m_nIncrement = 0x1e0;
      constexpr std::ptrdiff_t m_DistanceCheck = 0x1e8;
      constexpr std::ptrdiff_t m_flInterpolation = 0x358;
    }
    namespace C_OP_ReinitializeScalarEndCap {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1dc;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1e0;
    }
    namespace C_OP_RemapAverageHitboxSpeedtoCP {
      constexpr std::ptrdiff_t m_nInControlPointNumber = 0x1e0;
      constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1e4;
      constexpr std::ptrdiff_t m_nField = 0x1e8;
      constexpr std::ptrdiff_t m_nHitboxDataType = 0x1ec;
      constexpr std::ptrdiff_t m_flInputMin = 0x1f0;
      constexpr std::ptrdiff_t m_flInputMax = 0x360;
      constexpr std::ptrdiff_t m_flOutputMin = 0x4d0;
      constexpr std::ptrdiff_t m_flOutputMax = 0x640;
      constexpr std::ptrdiff_t m_nHeightControlPointNumber = 0x7b0;
      constexpr std::ptrdiff_t m_vecComparisonVelocity = 0x7b8;
      constexpr std::ptrdiff_t m_HitboxSetName = 0xe70;
    }
    namespace C_OP_RemapAverageScalarValuetoCP {
      constexpr std::ptrdiff_t m_nExpression = 0x1e0;
      constexpr std::ptrdiff_t m_flDecimalPlaces = 0x1e8;
      constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x358;
      constexpr std::ptrdiff_t m_nOutVectorField = 0x35c;
      constexpr std::ptrdiff_t m_nField = 0x360;
      constexpr std::ptrdiff_t m_flOutputRemap = 0x368;
    }
    namespace C_OP_RemapBoundingVolumetoCP {
      constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1e0;
      constexpr std::ptrdiff_t m_flInputMin = 0x1e4;
      constexpr std::ptrdiff_t m_flInputMax = 0x1e8;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1ec;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1f0;
    }
    namespace C_OP_RemapCPVelocityToVector {
      constexpr std::ptrdiff_t m_nControlPoint = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1dc;
      constexpr std::ptrdiff_t m_flScale = 0x1e0;
      constexpr std::ptrdiff_t m_bNormalize = 0x1e4;
    }
    namespace C_OP_RemapCPtoCP {
      constexpr std::ptrdiff_t m_nInputControlPoint = 0x1e0;
      constexpr std::ptrdiff_t m_nOutputControlPoint = 0x1e4;
      constexpr std::ptrdiff_t m_nInputField = 0x1e8;
      constexpr std::ptrdiff_t m_nOutputField = 0x1ec;
      constexpr std::ptrdiff_t m_flInputMin = 0x1f0;
      constexpr std::ptrdiff_t m_flInputMax = 0x1f4;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1f8;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1fc;
      constexpr std::ptrdiff_t m_bDerivative = 0x200;
      constexpr std::ptrdiff_t m_flInterpRate = 0x204;
    }
    namespace C_OP_RemapCPtoScalar {
      constexpr std::ptrdiff_t m_nCPInput = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1dc;
      constexpr std::ptrdiff_t m_nField = 0x1e0;
      constexpr std::ptrdiff_t m_flInputMin = 0x1e4;
      constexpr std::ptrdiff_t m_flInputMax = 0x1e8;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1ec;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1f0;
      constexpr std::ptrdiff_t m_flStartTime = 0x1f4;
      constexpr std::ptrdiff_t m_flEndTime = 0x1f8;
      constexpr std::ptrdiff_t m_flInterpRate = 0x1fc;
      constexpr std::ptrdiff_t m_nSetMethod = 0x200;
    }
    namespace C_OP_RemapCPtoVector {
      constexpr std::ptrdiff_t m_nCPInput = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1dc;
      constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1e0;
      constexpr std::ptrdiff_t m_vInputMin = 0x1e4;
      constexpr std::ptrdiff_t m_vInputMax = 0x1f0;
      constexpr std::ptrdiff_t m_vOutputMin = 0x1fc;
      constexpr std::ptrdiff_t m_vOutputMax = 0x208;
      constexpr std::ptrdiff_t m_flStartTime = 0x214;
      constexpr std::ptrdiff_t m_flEndTime = 0x218;
      constexpr std::ptrdiff_t m_flInterpRate = 0x21c;
      constexpr std::ptrdiff_t m_nSetMethod = 0x220;
      constexpr std::ptrdiff_t m_bOffset = 0x224;
      constexpr std::ptrdiff_t m_bAccelerate = 0x225;
    }
    namespace C_OP_RemapControlPointDirectionToVector {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_flScale = 0x1dc;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1e0;
    }
    namespace C_OP_RemapControlPointOrientationToRotation {
      constexpr std::ptrdiff_t m_nCP = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1dc;
      constexpr std::ptrdiff_t m_flOffsetRot = 0x1e0;
      constexpr std::ptrdiff_t m_nComponent = 0x1e4;
    }
    namespace C_OP_RemapCrossProductOfTwoVectorsToVector {
      constexpr std::ptrdiff_t m_InputVec1 = 0x1d8;
      constexpr std::ptrdiff_t m_InputVec2 = 0x890;
      constexpr std::ptrdiff_t m_nFieldOutput = 0xf48;
      constexpr std::ptrdiff_t m_bNormalize = 0xf4c;
    }
    namespace C_OP_RemapDensityGradientToVectorAttribute {
      constexpr std::ptrdiff_t m_flRadiusScale = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1dc;
    }
    namespace C_OP_RemapDensityToVector {
      constexpr std::ptrdiff_t m_flRadiusScale = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1dc;
      constexpr std::ptrdiff_t m_flDensityMin = 0x1e0;
      constexpr std::ptrdiff_t m_flDensityMax = 0x1e4;
      constexpr std::ptrdiff_t m_vecOutputMin = 0x1e8;
      constexpr std::ptrdiff_t m_vecOutputMax = 0x1f4;
      constexpr std::ptrdiff_t m_bUseParentDensity = 0x200;
      constexpr std::ptrdiff_t m_nVoxelGridResolution = 0x204;
    }
    namespace C_OP_RemapDirectionToCPToVector {
      constexpr std::ptrdiff_t m_nCP = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1dc;
      constexpr std::ptrdiff_t m_flScale = 0x1e0;
      constexpr std::ptrdiff_t m_flOffsetRot = 0x1e4;
      constexpr std::ptrdiff_t m_vecOffsetAxis = 0x1e8;
      constexpr std::ptrdiff_t m_bNormalize = 0x1f4;
      constexpr std::ptrdiff_t m_nFieldStrength = 0x1f8;
    }
    namespace C_OP_RemapDistanceToLineSegmentBase {
      constexpr std::ptrdiff_t m_nCP0 = 0x1d8;
      constexpr std::ptrdiff_t m_nCP1 = 0x1dc;
      constexpr std::ptrdiff_t m_flMinInputValue = 0x1e0;
      constexpr std::ptrdiff_t m_flMaxInputValue = 0x1e4;
      constexpr std::ptrdiff_t m_bInfiniteLine = 0x1e8;
    }
    namespace C_OP_RemapDistanceToLineSegmentToScalar {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1f0;
      constexpr std::ptrdiff_t m_flMinOutputValue = 0x1f4;
      constexpr std::ptrdiff_t m_flMaxOutputValue = 0x1f8;
    }
    namespace C_OP_RemapDistanceToLineSegmentToVector {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1f0;
      constexpr std::ptrdiff_t m_vMinOutputValue = 0x1f4;
      constexpr std::ptrdiff_t m_vMaxOutputValue = 0x200;
    }
    namespace C_OP_RemapDotProductToCP {
      constexpr std::ptrdiff_t m_nInputCP1 = 0x1e0;
      constexpr std::ptrdiff_t m_nInputCP2 = 0x1e4;
      constexpr std::ptrdiff_t m_nOutputCP = 0x1e8;
      constexpr std::ptrdiff_t m_nOutVectorField = 0x1ec;
      constexpr std::ptrdiff_t m_flInputMin = 0x1f0;
      constexpr std::ptrdiff_t m_flInputMax = 0x360;
      constexpr std::ptrdiff_t m_flOutputMin = 0x4d0;
      constexpr std::ptrdiff_t m_flOutputMax = 0x640;
    }
    namespace C_OP_RemapDotProductToScalar {
      constexpr std::ptrdiff_t m_nInputCP1 = 0x1d8;
      constexpr std::ptrdiff_t m_nInputCP2 = 0x1dc;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e0;
      constexpr std::ptrdiff_t m_flInputMin = 0x1e4;
      constexpr std::ptrdiff_t m_flInputMax = 0x1e8;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1ec;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1f0;
      constexpr std::ptrdiff_t m_bUseParticleVelocity = 0x1f4;
      constexpr std::ptrdiff_t m_nSetMethod = 0x1f8;
      constexpr std::ptrdiff_t m_bActiveRange = 0x1fc;
      constexpr std::ptrdiff_t m_bUseParticleNormal = 0x1fd;
    }
    namespace C_OP_RemapExternalWindToCP {
      constexpr std::ptrdiff_t m_nCP = 0x1e0;
      constexpr std::ptrdiff_t m_nCPOutput = 0x1e4;
      constexpr std::ptrdiff_t m_vecScale = 0x1e8;
      constexpr std::ptrdiff_t m_bSetMagnitude = 0x8a0;
      constexpr std::ptrdiff_t m_nOutVectorField = 0x8a4;
    }
    namespace C_OP_RemapGravityToVector {
      constexpr std::ptrdiff_t m_vInput1 = 0x1d8;
      constexpr std::ptrdiff_t m_nOutputField = 0x890;
      constexpr std::ptrdiff_t m_nSetMethod = 0x894;
      constexpr std::ptrdiff_t m_bNormalizedOutput = 0x898;
    }
    namespace C_OP_RemapModelVolumetoCP {
      constexpr std::ptrdiff_t m_nBBoxType = 0x1e0;
      constexpr std::ptrdiff_t m_nInControlPointNumber = 0x1e4;
      constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1e8;
      constexpr std::ptrdiff_t m_nOutControlPointMaxNumber = 0x1ec;
      constexpr std::ptrdiff_t m_nField = 0x1f0;
      constexpr std::ptrdiff_t m_flInputMin = 0x1f4;
      constexpr std::ptrdiff_t m_flInputMax = 0x1f8;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1fc;
      constexpr std::ptrdiff_t m_flOutputMax = 0x200;
      constexpr std::ptrdiff_t m_bBBoxOnly = 0x204;
      constexpr std::ptrdiff_t m_bCubeRoot = 0x205;
    }
    namespace C_OP_RemapNamedModelBodyPartEndCap {
    }
    namespace C_OP_RemapNamedModelBodyPartOnceTimed {
    }
    namespace C_OP_RemapNamedModelElementEndCap {
      constexpr std::ptrdiff_t m_hModel = 0x1d8;
      constexpr std::ptrdiff_t m_inNames = 0x1e0;
      constexpr std::ptrdiff_t m_outNames = 0x1f8;
      constexpr std::ptrdiff_t m_fallbackNames = 0x210;
      constexpr std::ptrdiff_t m_bModelFromRenderer = 0x228;
      constexpr std::ptrdiff_t m_nFieldInput = 0x22c;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x230;
    }
    namespace C_OP_RemapNamedModelElementOnceTimed {
      constexpr std::ptrdiff_t m_hModel = 0x1d8;
      constexpr std::ptrdiff_t m_inNames = 0x1e0;
      constexpr std::ptrdiff_t m_outNames = 0x1f8;
      constexpr std::ptrdiff_t m_fallbackNames = 0x210;
      constexpr std::ptrdiff_t m_bModelFromRenderer = 0x228;
      constexpr std::ptrdiff_t m_bProportional = 0x229;
      constexpr std::ptrdiff_t m_nFieldInput = 0x22c;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x230;
      constexpr std::ptrdiff_t m_flRemapTime = 0x234;
    }
    namespace C_OP_RemapNamedModelMeshGroupEndCap {
    }
    namespace C_OP_RemapNamedModelMeshGroupOnceTimed {
    }
    namespace C_OP_RemapNamedModelSequenceEndCap {
    }
    namespace C_OP_RemapNamedModelSequenceOnceTimed {
    }
    namespace C_OP_RemapParticleCountOnScalarEndCap {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_nInputMin = 0x1dc;
      constexpr std::ptrdiff_t m_nInputMax = 0x1e0;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1e4;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1e8;
      constexpr std::ptrdiff_t m_bBackwards = 0x1ec;
      constexpr std::ptrdiff_t m_nSetMethod = 0x1f0;
    }
    namespace C_OP_RemapParticleCountToScalar {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_nInputMin = 0x1e0;
      constexpr std::ptrdiff_t m_nInputMax = 0x350;
      constexpr std::ptrdiff_t m_flOutputMin = 0x4c0;
      constexpr std::ptrdiff_t m_flOutputMax = 0x630;
      constexpr std::ptrdiff_t m_bActiveRange = 0x7a0;
      constexpr std::ptrdiff_t m_nSetMethod = 0x7a4;
    }
    namespace C_OP_RemapScalar {
      constexpr std::ptrdiff_t m_nFieldInput = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1dc;
      constexpr std::ptrdiff_t m_flInputMin = 0x1e0;
      constexpr std::ptrdiff_t m_flInputMax = 0x1e4;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1e8;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1ec;
      constexpr std::ptrdiff_t m_bOldCode = 0x1f0;
    }
    namespace C_OP_RemapScalarEndCap {
      constexpr std::ptrdiff_t m_nFieldInput = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1dc;
      constexpr std::ptrdiff_t m_flInputMin = 0x1e0;
      constexpr std::ptrdiff_t m_flInputMax = 0x1e4;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1e8;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1ec;
    }
    namespace C_OP_RemapScalarOnceTimed {
      constexpr std::ptrdiff_t m_bProportional = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldInput = 0x1dc;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1e0;
      constexpr std::ptrdiff_t m_flInputMin = 0x1e4;
      constexpr std::ptrdiff_t m_flInputMax = 0x1e8;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1ec;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1f0;
      constexpr std::ptrdiff_t m_flRemapTime = 0x1f4;
    }
    namespace C_OP_RemapSpeed {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_flInputMin = 0x1dc;
      constexpr std::ptrdiff_t m_flInputMax = 0x1e0;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1e4;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1e8;
      constexpr std::ptrdiff_t m_nSetMethod = 0x1ec;
      constexpr std::ptrdiff_t m_bIgnoreDelta = 0x1f0;
    }
    namespace C_OP_RemapSpeedtoCP {
      constexpr std::ptrdiff_t m_nInControlPointNumber = 0x1e0;
      constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1e4;
      constexpr std::ptrdiff_t m_nField = 0x1e8;
      constexpr std::ptrdiff_t m_flInputMin = 0x1ec;
      constexpr std::ptrdiff_t m_flInputMax = 0x1f0;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1f4;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1f8;
      constexpr std::ptrdiff_t m_bUseDeltaV = 0x1fc;
    }
    namespace C_OP_RemapTransformOrientationToRotations {
      constexpr std::ptrdiff_t m_TransformInput = 0x1d8;
      constexpr std::ptrdiff_t m_vecRotation = 0x240;
      constexpr std::ptrdiff_t m_bUseQuat = 0x24c;
      constexpr std::ptrdiff_t m_bWriteNormal = 0x24d;
    }
    namespace C_OP_RemapTransformOrientationToYaw {
      constexpr std::ptrdiff_t m_TransformInput = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x240;
      constexpr std::ptrdiff_t m_flRotOffset = 0x244;
      constexpr std::ptrdiff_t m_flSpinStrength = 0x248;
    }
    namespace C_OP_RemapTransformToVelocity {
      constexpr std::ptrdiff_t m_TransformInput = 0x1d8;
    }
    namespace C_OP_RemapTransformVisibilityToScalar {
      constexpr std::ptrdiff_t m_nSetMethod = 0x1d8;
      constexpr std::ptrdiff_t m_TransformInput = 0x1e0;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x248;
      constexpr std::ptrdiff_t m_flInputMin = 0x24c;
      constexpr std::ptrdiff_t m_flInputMax = 0x250;
      constexpr std::ptrdiff_t m_flOutputMin = 0x254;
      constexpr std::ptrdiff_t m_flOutputMax = 0x258;
      constexpr std::ptrdiff_t m_flRadius = 0x25c;
    }
    namespace C_OP_RemapTransformVisibilityToVector {
      constexpr std::ptrdiff_t m_nSetMethod = 0x1d8;
      constexpr std::ptrdiff_t m_TransformInput = 0x1e0;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x248;
      constexpr std::ptrdiff_t m_flInputMin = 0x24c;
      constexpr std::ptrdiff_t m_flInputMax = 0x250;
      constexpr std::ptrdiff_t m_vecOutputMin = 0x254;
      constexpr std::ptrdiff_t m_vecOutputMax = 0x260;
      constexpr std::ptrdiff_t m_flRadius = 0x26c;
    }
    namespace C_OP_RemapVectorComponentToScalar {
      constexpr std::ptrdiff_t m_nFieldInput = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1dc;
      constexpr std::ptrdiff_t m_nComponent = 0x1e0;
    }
    namespace C_OP_RemapVectortoCP {
      constexpr std::ptrdiff_t m_nOutControlPointNumber = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldInput = 0x1dc;
      constexpr std::ptrdiff_t m_nParticleNumber = 0x1e0;
    }
    namespace C_OP_RemapVelocityToVector {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_flScale = 0x1dc;
      constexpr std::ptrdiff_t m_bNormalize = 0x1e0;
    }
    namespace C_OP_RemapVisibilityScalar {
      constexpr std::ptrdiff_t m_nFieldInput = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1dc;
      constexpr std::ptrdiff_t m_flInputMin = 0x1e0;
      constexpr std::ptrdiff_t m_flInputMax = 0x1e4;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1e8;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1ec;
      constexpr std::ptrdiff_t m_flRadiusScale = 0x1f0;
    }
    namespace C_OP_RenderAsModels {
      constexpr std::ptrdiff_t m_ModelList = 0x228;
      constexpr std::ptrdiff_t m_flModelScale = 0x244;
      constexpr std::ptrdiff_t m_bFitToModelSize = 0x248;
      constexpr std::ptrdiff_t m_bNonUniformScaling = 0x249;
      constexpr std::ptrdiff_t m_nXAxisScalingAttribute = 0x24c;
      constexpr std::ptrdiff_t m_nYAxisScalingAttribute = 0x250;
      constexpr std::ptrdiff_t m_nZAxisScalingAttribute = 0x254;
      constexpr std::ptrdiff_t m_nSizeCullBloat = 0x258;
    }
    namespace C_OP_RenderBlobs {
      constexpr std::ptrdiff_t m_cubeWidth = 0x228;
      constexpr std::ptrdiff_t m_cutoffRadius = 0x398;
      constexpr std::ptrdiff_t m_renderRadius = 0x508;
      constexpr std::ptrdiff_t m_nVertexCountKb = 0x678;
      constexpr std::ptrdiff_t m_nIndexCountKb = 0x67c;
      constexpr std::ptrdiff_t m_nScaleCP = 0x680;
      constexpr std::ptrdiff_t m_MaterialVars = 0x688;
      constexpr std::ptrdiff_t m_hMaterial = 0x6b8;
    }
    namespace C_OP_RenderCables {
      constexpr std::ptrdiff_t m_flRadiusScale = 0x228;
      constexpr std::ptrdiff_t m_flAlphaScale = 0x398;
      constexpr std::ptrdiff_t m_vecColorScale = 0x508;
      constexpr std::ptrdiff_t m_nColorBlendType = 0xbc0;
      constexpr std::ptrdiff_t m_hMaterial = 0xbc8;
      constexpr std::ptrdiff_t m_nTextureRepetitionMode = 0xbd0;
      constexpr std::ptrdiff_t m_flTextureRepeatsPerSegment = 0xbd8;
      constexpr std::ptrdiff_t m_flTextureRepeatsCircumference = 0xd48;
      constexpr std::ptrdiff_t m_flColorMapOffsetV = 0xeb8;
      constexpr std::ptrdiff_t m_flColorMapOffsetU = 0x1028;
      constexpr std::ptrdiff_t m_flNormalMapOffsetV = 0x1198;
      constexpr std::ptrdiff_t m_flNormalMapOffsetU = 0x1308;
      constexpr std::ptrdiff_t m_bDrawCableCaps = 0x1478;
      constexpr std::ptrdiff_t m_flCapRoundness = 0x147c;
      constexpr std::ptrdiff_t m_flCapOffsetAmount = 0x1480;
      constexpr std::ptrdiff_t m_flTessScale = 0x1484;
      constexpr std::ptrdiff_t m_nMinTesselation = 0x1488;
      constexpr std::ptrdiff_t m_nMaxTesselation = 0x148c;
      constexpr std::ptrdiff_t m_nRoundness = 0x1490;
      constexpr std::ptrdiff_t m_nForceRoundnessFixed = 0x1494;
      constexpr std::ptrdiff_t m_LightingTransform = 0x1498;
      constexpr std::ptrdiff_t m_MaterialFloatVars = 0x1500;
      constexpr std::ptrdiff_t m_MaterialVecVars = 0x1520;
    }
    namespace C_OP_RenderClientPhysicsImpulse {
      constexpr std::ptrdiff_t m_flRadius = 0x228;
      constexpr std::ptrdiff_t m_flMagnitude = 0x398;
      constexpr std::ptrdiff_t m_nSimIdFilter = 0x508;
    }
    namespace C_OP_RenderClothForce {
    }
    namespace C_OP_RenderDeferredLight {
      constexpr std::ptrdiff_t m_bUseAlphaTestWindow = 0x228;
      constexpr std::ptrdiff_t m_bUseTexture = 0x229;
      constexpr std::ptrdiff_t m_flRadiusScale = 0x22c;
      constexpr std::ptrdiff_t m_flAlphaScale = 0x230;
      constexpr std::ptrdiff_t m_nAlpha2Field = 0x234;
      constexpr std::ptrdiff_t m_vecColorScale = 0x238;
      constexpr std::ptrdiff_t m_nColorBlendType = 0x8f0;
      constexpr std::ptrdiff_t m_flLightDistance = 0x8f4;
      constexpr std::ptrdiff_t m_flStartFalloff = 0x8f8;
      constexpr std::ptrdiff_t m_flDistanceFalloff = 0x8fc;
      constexpr std::ptrdiff_t m_flSpotFoV = 0x900;
      constexpr std::ptrdiff_t m_nAlphaTestPointField = 0x904;
      constexpr std::ptrdiff_t m_nAlphaTestRangeField = 0x908;
      constexpr std::ptrdiff_t m_nAlphaTestSharpnessField = 0x90c;
      constexpr std::ptrdiff_t m_hTexture = 0x910;
      constexpr std::ptrdiff_t m_nHSVShiftControlPoint = 0x918;
    }
    namespace C_OP_RenderFlattenGrass {
      constexpr std::ptrdiff_t m_flFlattenStrength = 0x228;
      constexpr std::ptrdiff_t m_nStrengthFieldOverride = 0x22c;
      constexpr std::ptrdiff_t m_flRadiusScale = 0x230;
    }
    namespace C_OP_RenderGpuImplicit {
      constexpr std::ptrdiff_t m_bUsePerParticleRadius = 0x228;
      constexpr std::ptrdiff_t m_nVertexCountKb = 0x22c;
      constexpr std::ptrdiff_t m_nIndexCountKb = 0x230;
      constexpr std::ptrdiff_t m_fGridSize = 0x238;
      constexpr std::ptrdiff_t m_fRadiusScale = 0x3a8;
      constexpr std::ptrdiff_t m_fIsosurfaceThreshold = 0x518;
      constexpr std::ptrdiff_t m_nScaleCP = 0x688;
      constexpr std::ptrdiff_t m_hMaterial = 0x690;
    }
    namespace C_OP_RenderLightBeam {
      constexpr std::ptrdiff_t m_vColorBlend = 0x228;
      constexpr std::ptrdiff_t m_nColorBlendType = 0x8e0;
      constexpr std::ptrdiff_t m_flBrightnessLumensPerMeter = 0x8e8;
      constexpr std::ptrdiff_t m_bCastShadows = 0xa58;
      constexpr std::ptrdiff_t m_flSkirt = 0xa60;
      constexpr std::ptrdiff_t m_flRange = 0xbd0;
      constexpr std::ptrdiff_t m_flThickness = 0xd40;
    }
    namespace C_OP_RenderLights {
      constexpr std::ptrdiff_t m_flAnimationRate = 0x230;
      constexpr std::ptrdiff_t m_nAnimationType = 0x234;
      constexpr std::ptrdiff_t m_bAnimateInFPS = 0x238;
      constexpr std::ptrdiff_t m_flMinSize = 0x23c;
      constexpr std::ptrdiff_t m_flMaxSize = 0x240;
      constexpr std::ptrdiff_t m_flStartFadeSize = 0x244;
      constexpr std::ptrdiff_t m_flEndFadeSize = 0x248;
    }
    namespace C_OP_RenderMaterialProxy {
      constexpr std::ptrdiff_t m_nMaterialControlPoint = 0x228;
      constexpr std::ptrdiff_t m_nProxyType = 0x22c;
      constexpr std::ptrdiff_t m_MaterialVars = 0x230;
      constexpr std::ptrdiff_t m_hOverrideMaterial = 0x248;
      constexpr std::ptrdiff_t m_flMaterialOverrideEnabled = 0x250;
      constexpr std::ptrdiff_t m_vecColorScale = 0x3c0;
      constexpr std::ptrdiff_t m_flAlpha = 0xa78;
      constexpr std::ptrdiff_t m_nColorBlendType = 0xbe8;
    }
    namespace C_OP_RenderModels {
      constexpr std::ptrdiff_t m_bOnlyRenderInEffectsBloomPass = 0x228;
      constexpr std::ptrdiff_t m_bOnlyRenderInEffectsWaterPass = 0x229;
      constexpr std::ptrdiff_t m_bUseMixedResolutionRendering = 0x22a;
      constexpr std::ptrdiff_t m_bOnlyRenderInEffecsGameOverlay = 0x22b;
      constexpr std::ptrdiff_t m_ModelList = 0x230;
      constexpr std::ptrdiff_t m_nBodyGroupField = 0x248;
      constexpr std::ptrdiff_t m_nSubModelField = 0x24c;
      constexpr std::ptrdiff_t m_bIgnoreNormal = 0x250;
      constexpr std::ptrdiff_t m_bOrientZ = 0x251;
      constexpr std::ptrdiff_t m_bCenterOffset = 0x252;
      constexpr std::ptrdiff_t m_vecLocalOffset = 0x258;
      constexpr std::ptrdiff_t m_vecLocalRotation = 0x910;
      constexpr std::ptrdiff_t m_bIgnoreRadius = 0xfc8;
      constexpr std::ptrdiff_t m_nModelScaleCP = 0xfcc;
      constexpr std::ptrdiff_t m_vecComponentScale = 0xfd0;
      constexpr std::ptrdiff_t m_bLocalScale = 0x1688;
      constexpr std::ptrdiff_t m_nSizeCullBloat = 0x168c;
      constexpr std::ptrdiff_t m_bAnimated = 0x1690;
      constexpr std::ptrdiff_t m_flAnimationRate = 0x1698;
      constexpr std::ptrdiff_t m_bScaleAnimationRate = 0x1808;
      constexpr std::ptrdiff_t m_bForceLoopingAnimation = 0x1809;
      constexpr std::ptrdiff_t m_bResetAnimOnStop = 0x180a;
      constexpr std::ptrdiff_t m_bManualAnimFrame = 0x180b;
      constexpr std::ptrdiff_t m_nAnimationScaleField = 0x180c;
      constexpr std::ptrdiff_t m_nAnimationField = 0x1810;
      constexpr std::ptrdiff_t m_nManualFrameField = 0x1814;
      constexpr std::ptrdiff_t m_ActivityName = 0x1818;
      constexpr std::ptrdiff_t m_SequenceName = 0x1918;
      constexpr std::ptrdiff_t m_bEnableClothSimulation = 0x1a18;
      constexpr std::ptrdiff_t m_ClothEffectName = 0x1a19;
      constexpr std::ptrdiff_t m_hOverrideMaterial = 0x1a60;
      constexpr std::ptrdiff_t m_bOverrideTranslucentMaterials = 0x1a68;
      constexpr std::ptrdiff_t m_nSkin = 0x1a70;
      constexpr std::ptrdiff_t m_MaterialVars = 0x1be0;
      constexpr std::ptrdiff_t m_flRenderFilter = 0x1bf8;
      constexpr std::ptrdiff_t m_flManualModelSelection = 0x1d68;
      constexpr std::ptrdiff_t m_modelInput = 0x1ed8;
      constexpr std::ptrdiff_t m_nLOD = 0x1f38;
      constexpr std::ptrdiff_t m_EconSlotName = 0x1f3c;
      constexpr std::ptrdiff_t m_bOriginalModel = 0x203c;
      constexpr std::ptrdiff_t m_bSuppressTint = 0x203d;
      constexpr std::ptrdiff_t m_nSubModelFieldType = 0x2040;
      constexpr std::ptrdiff_t m_bDisableShadows = 0x2044;
      constexpr std::ptrdiff_t m_bDisableDepthPrepass = 0x2045;
      constexpr std::ptrdiff_t m_bAcceptsDecals = 0x2046;
      constexpr std::ptrdiff_t m_bForceDrawInterlevedWithSiblings = 0x2047;
      constexpr std::ptrdiff_t m_bDoNotDrawInParticlePass = 0x2048;
      constexpr std::ptrdiff_t m_bAllowApproximateTransforms = 0x2049;
      constexpr std::ptrdiff_t m_szRenderAttribute = 0x204a;
      constexpr std::ptrdiff_t m_flRadiusScale = 0x2150;
      constexpr std::ptrdiff_t m_flAlphaScale = 0x22c0;
      constexpr std::ptrdiff_t m_flRollScale = 0x2430;
      constexpr std::ptrdiff_t m_nAlpha2Field = 0x25a0;
      constexpr std::ptrdiff_t m_vecColorScale = 0x25a8;
      constexpr std::ptrdiff_t m_nColorBlendType = 0x2c60;
    }
    namespace C_OP_RenderOmni2Light {
      constexpr std::ptrdiff_t m_nLightType = 0x228;
      constexpr std::ptrdiff_t m_vColorBlend = 0x230;
      constexpr std::ptrdiff_t m_nColorBlendType = 0x8e8;
      constexpr std::ptrdiff_t m_nBrightnessUnit = 0x8ec;
      constexpr std::ptrdiff_t m_flBrightnessLumens = 0x8f0;
      constexpr std::ptrdiff_t m_flBrightnessCandelas = 0xa60;
      constexpr std::ptrdiff_t m_bCastShadows = 0xbd0;
      constexpr std::ptrdiff_t m_bFog = 0xbd1;
      constexpr std::ptrdiff_t m_flFogScale = 0xbd8;
      constexpr std::ptrdiff_t m_flLuminaireRadius = 0xd48;
      constexpr std::ptrdiff_t m_flSkirt = 0xeb8;
      constexpr std::ptrdiff_t m_flRange = 0x1028;
      constexpr std::ptrdiff_t m_flInnerConeAngle = 0x1198;
      constexpr std::ptrdiff_t m_flOuterConeAngle = 0x1308;
      constexpr std::ptrdiff_t m_hLightCookie = 0x1478;
      constexpr std::ptrdiff_t m_bSphericalCookie = 0x1480;
    }
    namespace C_OP_RenderPoints {
      constexpr std::ptrdiff_t m_hMaterial = 0x228;
    }
    namespace C_OP_RenderPostProcessing {
      constexpr std::ptrdiff_t m_flPostProcessStrength = 0x228;
      constexpr std::ptrdiff_t m_hPostTexture = 0x398;
      constexpr std::ptrdiff_t m_nPriority = 0x3a0;
    }
    namespace C_OP_RenderProjected {
      constexpr std::ptrdiff_t m_bProjectCharacter = 0x228;
      constexpr std::ptrdiff_t m_bProjectWorld = 0x229;
      constexpr std::ptrdiff_t m_bProjectWater = 0x22a;
      constexpr std::ptrdiff_t m_bFlipHorizontal = 0x22b;
      constexpr std::ptrdiff_t m_bEnableProjectedDepthControls = 0x22c;
      constexpr std::ptrdiff_t m_flMinProjectionDepth = 0x230;
      constexpr std::ptrdiff_t m_flMaxProjectionDepth = 0x234;
      constexpr std::ptrdiff_t m_vecProjectedMaterials = 0x238;
      constexpr std::ptrdiff_t m_flMaterialSelection = 0x250;
      constexpr std::ptrdiff_t m_flAnimationTimeScale = 0x3c0;
      constexpr std::ptrdiff_t m_bOrientToNormal = 0x3c4;
      constexpr std::ptrdiff_t m_MaterialVars = 0x3c8;
      constexpr std::ptrdiff_t m_flRadiusScale = 0x3e0;
      constexpr std::ptrdiff_t m_flAlphaScale = 0x550;
      constexpr std::ptrdiff_t m_flRollScale = 0x6c0;
      constexpr std::ptrdiff_t m_nAlpha2Field = 0x830;
      constexpr std::ptrdiff_t m_vecColorScale = 0x838;
      constexpr std::ptrdiff_t m_nColorBlendType = 0xef0;
    }
    namespace C_OP_RenderRopes {
      constexpr std::ptrdiff_t m_bEnableFadingAndClamping = 0x2df0;
      constexpr std::ptrdiff_t m_flMinSize = 0x2df4;
      constexpr std::ptrdiff_t m_flMaxSize = 0x2df8;
      constexpr std::ptrdiff_t m_flStartFadeSize = 0x2dfc;
      constexpr std::ptrdiff_t m_flEndFadeSize = 0x2e00;
      constexpr std::ptrdiff_t m_flStartFadeDot = 0x2e04;
      constexpr std::ptrdiff_t m_flEndFadeDot = 0x2e08;
      constexpr std::ptrdiff_t m_flRadiusTaper = 0x2e0c;
      constexpr std::ptrdiff_t m_nMinTesselation = 0x2e10;
      constexpr std::ptrdiff_t m_nMaxTesselation = 0x2e14;
      constexpr std::ptrdiff_t m_flTessScale = 0x2e18;
      constexpr std::ptrdiff_t m_flTextureVWorldSize = 0x2e20;
      constexpr std::ptrdiff_t m_flTextureVScrollRate = 0x2f90;
      constexpr std::ptrdiff_t m_flTextureVOffset = 0x3100;
      constexpr std::ptrdiff_t m_nTextureVParamsCP = 0x3270;
      constexpr std::ptrdiff_t m_bClampV = 0x3274;
      constexpr std::ptrdiff_t m_nScaleCP1 = 0x3278;
      constexpr std::ptrdiff_t m_nScaleCP2 = 0x327c;
      constexpr std::ptrdiff_t m_flScaleVSizeByControlPointDistance = 0x3280;
      constexpr std::ptrdiff_t m_flScaleVScrollByControlPointDistance = 0x3284;
      constexpr std::ptrdiff_t m_flScaleVOffsetByControlPointDistance = 0x3288;
      constexpr std::ptrdiff_t m_bUseScalarForTextureCoordinate = 0x328d;
      constexpr std::ptrdiff_t m_nScalarFieldForTextureCoordinate = 0x3290;
      constexpr std::ptrdiff_t m_flScalarAttributeTextureCoordScale = 0x3294;
      constexpr std::ptrdiff_t m_bReverseOrder = 0x3298;
      constexpr std::ptrdiff_t m_bClosedLoop = 0x3299;
      constexpr std::ptrdiff_t m_nSplitField = 0x329c;
      constexpr std::ptrdiff_t m_bSortBySegmentID = 0x32a0;
      constexpr std::ptrdiff_t m_nOrientationType = 0x32a4;
      constexpr std::ptrdiff_t m_nVectorFieldForOrientation = 0x32a8;
      constexpr std::ptrdiff_t m_bDrawAsOpaque = 0x32ac;
      constexpr std::ptrdiff_t m_bGenerateNormals = 0x32ad;
    }
    namespace C_OP_RenderScreenShake {
      constexpr std::ptrdiff_t m_flDurationScale = 0x228;
      constexpr std::ptrdiff_t m_flRadiusScale = 0x22c;
      constexpr std::ptrdiff_t m_flFrequencyScale = 0x230;
      constexpr std::ptrdiff_t m_flAmplitudeScale = 0x234;
      constexpr std::ptrdiff_t m_nRadiusField = 0x238;
      constexpr std::ptrdiff_t m_nDurationField = 0x23c;
      constexpr std::ptrdiff_t m_nFrequencyField = 0x240;
      constexpr std::ptrdiff_t m_nAmplitudeField = 0x244;
      constexpr std::ptrdiff_t m_nFilterCP = 0x248;
    }
    namespace C_OP_RenderScreenVelocityRotate {
      constexpr std::ptrdiff_t m_flRotateRateDegrees = 0x228;
      constexpr std::ptrdiff_t m_flForwardDegrees = 0x22c;
    }
    namespace C_OP_RenderSimpleModelCollection {
      constexpr std::ptrdiff_t m_bCenterOffset = 0x228;
      constexpr std::ptrdiff_t m_hModel = 0x230;
      constexpr std::ptrdiff_t m_modelInput = 0x238;
      constexpr std::ptrdiff_t m_fSizeCullScale = 0x298;
      constexpr std::ptrdiff_t m_bDisableShadows = 0x408;
      constexpr std::ptrdiff_t m_bDisableMotionBlur = 0x409;
      constexpr std::ptrdiff_t m_bAcceptsDecals = 0x40a;
      constexpr std::ptrdiff_t m_fDrawFilter = 0x410;
      constexpr std::ptrdiff_t m_nAngularVelocityField = 0x580;
    }
    namespace C_OP_RenderSound {
      constexpr std::ptrdiff_t m_flDurationScale = 0x228;
      constexpr std::ptrdiff_t m_flSndLvlScale = 0x22c;
      constexpr std::ptrdiff_t m_flPitchScale = 0x230;
      constexpr std::ptrdiff_t m_flVolumeScale = 0x234;
      constexpr std::ptrdiff_t m_nSndLvlField = 0x238;
      constexpr std::ptrdiff_t m_nDurationField = 0x23c;
      constexpr std::ptrdiff_t m_nPitchField = 0x240;
      constexpr std::ptrdiff_t m_nVolumeField = 0x244;
      constexpr std::ptrdiff_t m_nChannel = 0x248;
      constexpr std::ptrdiff_t m_nCPReference = 0x24c;
      constexpr std::ptrdiff_t m_pszSoundName = 0x250;
      constexpr std::ptrdiff_t m_bSuppressStopSoundEvent = 0x350;
    }
    namespace C_OP_RenderSprites {
      constexpr std::ptrdiff_t m_nSequenceOverride = 0x2df0;
      constexpr std::ptrdiff_t m_bSequenceNumbersAreRawSequenceIndices = 0x2f60;
      constexpr std::ptrdiff_t m_nOrientationType = 0x2f64;
      constexpr std::ptrdiff_t m_nOrientationControlPoint = 0x2f68;
      constexpr std::ptrdiff_t m_bUseYawWithNormalAligned = 0x2f6c;
      constexpr std::ptrdiff_t m_flMinSize = 0x2f70;
      constexpr std::ptrdiff_t m_flMaxSize = 0x30e0;
      constexpr std::ptrdiff_t m_flAlphaAdjustWithSizeAdjust = 0x3250;
      constexpr std::ptrdiff_t m_flStartFadeSize = 0x33c0;
      constexpr std::ptrdiff_t m_flEndFadeSize = 0x3530;
      constexpr std::ptrdiff_t m_flStartFadeDot = 0x36a0;
      constexpr std::ptrdiff_t m_flEndFadeDot = 0x36a4;
      constexpr std::ptrdiff_t m_bDistanceAlpha = 0x36a8;
      constexpr std::ptrdiff_t m_bSoftEdges = 0x36a9;
      constexpr std::ptrdiff_t m_flEdgeSoftnessStart = 0x36ac;
      constexpr std::ptrdiff_t m_flEdgeSoftnessEnd = 0x36b0;
      constexpr std::ptrdiff_t m_bOutline = 0x36b4;
      constexpr std::ptrdiff_t m_OutlineColor = 0x36b5;
      constexpr std::ptrdiff_t m_nOutlineAlpha = 0x36bc;
      constexpr std::ptrdiff_t m_flOutlineStart0 = 0x36c0;
      constexpr std::ptrdiff_t m_flOutlineStart1 = 0x36c4;
      constexpr std::ptrdiff_t m_flOutlineEnd0 = 0x36c8;
      constexpr std::ptrdiff_t m_flOutlineEnd1 = 0x36cc;
      constexpr std::ptrdiff_t m_nLightingMode = 0x36d0;
      constexpr std::ptrdiff_t m_vecLightingOverride = 0x36d8;
      constexpr std::ptrdiff_t m_flLightingTessellation = 0x3d90;
      constexpr std::ptrdiff_t m_flLightingDirectionality = 0x3f00;
      constexpr std::ptrdiff_t m_bParticleShadows = 0x4070;
      constexpr std::ptrdiff_t m_flShadowDensity = 0x4074;
      constexpr std::ptrdiff_t m_replicationParameters = 0x4078;
    }
    namespace C_OP_RenderStandardLight {
      constexpr std::ptrdiff_t m_nLightType = 0x228;
      constexpr std::ptrdiff_t m_vecColorScale = 0x230;
      constexpr std::ptrdiff_t m_nColorBlendType = 0x8e8;
      constexpr std::ptrdiff_t m_flIntensity = 0x8f0;
      constexpr std::ptrdiff_t m_bCastShadows = 0xa60;
      constexpr std::ptrdiff_t m_flTheta = 0xa68;
      constexpr std::ptrdiff_t m_flPhi = 0xbd8;
      constexpr std::ptrdiff_t m_flRadiusMultiplier = 0xd48;
      constexpr std::ptrdiff_t m_nAttenuationStyle = 0xeb8;
      constexpr std::ptrdiff_t m_flFalloffLinearity = 0xec0;
      constexpr std::ptrdiff_t m_flFiftyPercentFalloff = 0x1030;
      constexpr std::ptrdiff_t m_flZeroPercentFalloff = 0x11a0;
      constexpr std::ptrdiff_t m_bRenderDiffuse = 0x1310;
      constexpr std::ptrdiff_t m_bRenderSpecular = 0x1311;
      constexpr std::ptrdiff_t m_lightCookie = 0x1318;
      constexpr std::ptrdiff_t m_nPriority = 0x1320;
      constexpr std::ptrdiff_t m_nFogLightingMode = 0x1324;
      constexpr std::ptrdiff_t m_flFogContribution = 0x1328;
      constexpr std::ptrdiff_t m_nCapsuleLightBehavior = 0x1498;
      constexpr std::ptrdiff_t m_flCapsuleLength = 0x149c;
      constexpr std::ptrdiff_t m_bReverseOrder = 0x14a0;
      constexpr std::ptrdiff_t m_bClosedLoop = 0x14a1;
      constexpr std::ptrdiff_t m_nPrevPntSource = 0x14a4;
      constexpr std::ptrdiff_t m_flMaxLength = 0x14a8;
      constexpr std::ptrdiff_t m_flMinLength = 0x14ac;
      constexpr std::ptrdiff_t m_bIgnoreDT = 0x14b0;
      constexpr std::ptrdiff_t m_flConstrainRadiusToLengthRatio = 0x14b4;
      constexpr std::ptrdiff_t m_flLengthScale = 0x14b8;
      constexpr std::ptrdiff_t m_flLengthFadeInTime = 0x14bc;
    }
    namespace C_OP_RenderStatusEffect {
      constexpr std::ptrdiff_t m_pTextureColorWarp = 0x228;
      constexpr std::ptrdiff_t m_pTextureDetail2 = 0x230;
      constexpr std::ptrdiff_t m_pTextureDiffuseWarp = 0x238;
      constexpr std::ptrdiff_t m_pTextureFresnelColorWarp = 0x240;
      constexpr std::ptrdiff_t m_pTextureFresnelWarp = 0x248;
      constexpr std::ptrdiff_t m_pTextureSpecularWarp = 0x250;
      constexpr std::ptrdiff_t m_pTextureEnvMap = 0x258;
    }
    namespace C_OP_RenderStatusEffectCitadel {
      constexpr std::ptrdiff_t m_pTextureColorWarp = 0x228;
      constexpr std::ptrdiff_t m_pTextureNormal = 0x230;
      constexpr std::ptrdiff_t m_pTextureMetalness = 0x238;
      constexpr std::ptrdiff_t m_pTextureRoughness = 0x240;
      constexpr std::ptrdiff_t m_pTextureSelfIllum = 0x248;
      constexpr std::ptrdiff_t m_pTextureDetail = 0x250;
    }
    namespace C_OP_RenderText {
      constexpr std::ptrdiff_t m_OutlineColor = 0x228;
      constexpr std::ptrdiff_t m_DefaultText = 0x230;
    }
    namespace C_OP_RenderTrails {
      constexpr std::ptrdiff_t m_bEnableFadingAndClamping = 0x30e8;
      constexpr std::ptrdiff_t m_flStartFadeDot = 0x30ec;
      constexpr std::ptrdiff_t m_flEndFadeDot = 0x30f0;
      constexpr std::ptrdiff_t m_nPrevPntSource = 0x30f4;
      constexpr std::ptrdiff_t m_flMaxLength = 0x30f8;
      constexpr std::ptrdiff_t m_flMinLength = 0x30fc;
      constexpr std::ptrdiff_t m_bIgnoreDT = 0x3100;
      constexpr std::ptrdiff_t m_flConstrainRadiusToLengthRatio = 0x3104;
      constexpr std::ptrdiff_t m_flLengthScale = 0x3108;
      constexpr std::ptrdiff_t m_flLengthFadeInTime = 0x310c;
      constexpr std::ptrdiff_t m_flRadiusHeadTaper = 0x3110;
      constexpr std::ptrdiff_t m_vecHeadColorScale = 0x3280;
      constexpr std::ptrdiff_t m_flHeadAlphaScale = 0x3938;
      constexpr std::ptrdiff_t m_flRadiusTaper = 0x3aa8;
      constexpr std::ptrdiff_t m_vecTailColorScale = 0x3c18;
      constexpr std::ptrdiff_t m_flTailAlphaScale = 0x42d0;
      constexpr std::ptrdiff_t m_nHorizCropField = 0x4440;
      constexpr std::ptrdiff_t m_nVertCropField = 0x4444;
      constexpr std::ptrdiff_t m_flForwardShift = 0x4448;
      constexpr std::ptrdiff_t m_bFlipUVBasedOnPitchYaw = 0x444c;
    }
    namespace C_OP_RenderTreeShake {
      constexpr std::ptrdiff_t m_flPeakStrength = 0x228;
      constexpr std::ptrdiff_t m_nPeakStrengthFieldOverride = 0x22c;
      constexpr std::ptrdiff_t m_flRadius = 0x230;
      constexpr std::ptrdiff_t m_nRadiusFieldOverride = 0x234;
      constexpr std::ptrdiff_t m_flShakeDuration = 0x238;
      constexpr std::ptrdiff_t m_flTransitionTime = 0x23c;
      constexpr std::ptrdiff_t m_flTwistAmount = 0x240;
      constexpr std::ptrdiff_t m_flRadialAmount = 0x244;
      constexpr std::ptrdiff_t m_flControlPointOrientationAmount = 0x248;
      constexpr std::ptrdiff_t m_nControlPointForLinearDirection = 0x24c;
    }
    namespace C_OP_RenderVRHapticEvent {
      constexpr std::ptrdiff_t m_nHand = 0x228;
      constexpr std::ptrdiff_t m_nOutputHandCP = 0x22c;
      constexpr std::ptrdiff_t m_nOutputField = 0x230;
      constexpr std::ptrdiff_t m_flAmplitude = 0x238;
    }
    namespace C_OP_RenderVolumetricEmitter {
      constexpr std::ptrdiff_t m_strSmokeType = 0x228;
      constexpr std::ptrdiff_t m_nType = 0x230;
      constexpr std::ptrdiff_t m_nCreationType = 0x234;
      constexpr std::ptrdiff_t m_nEventType = 0x238;
      constexpr std::ptrdiff_t m_vecPos = 0x240;
      constexpr std::ptrdiff_t m_vecVelocity = 0x8f8;
      constexpr std::ptrdiff_t m_flRadius = 0xfb0;
      constexpr std::ptrdiff_t m_flDensity = 0x1120;
      constexpr std::ptrdiff_t m_flTemperature = 0x1290;
      constexpr std::ptrdiff_t m_flFuel = 0x1400;
      constexpr std::ptrdiff_t m_flDust = 0x1570;
      constexpr std::ptrdiff_t m_flLifespan = 0x16e0;
      constexpr std::ptrdiff_t m_flMagnitude = 0x1850;
      constexpr std::ptrdiff_t m_flKillRadius = 0x19c0;
      constexpr std::ptrdiff_t m_flFalloff = 0x1b30;
    }
    namespace C_OP_RepeatedTriggerChildGroup {
      constexpr std::ptrdiff_t m_nChildGroupID = 0x1e0;
      constexpr std::ptrdiff_t m_flClusterRefireTime = 0x1e8;
      constexpr std::ptrdiff_t m_flClusterSize = 0x358;
      constexpr std::ptrdiff_t m_flClusterCooldown = 0x4c8;
      constexpr std::ptrdiff_t m_bLimitChildCount = 0x638;
    }
    namespace C_OP_RestartAfterDuration {
      constexpr std::ptrdiff_t m_flDurationMin = 0x1d8;
      constexpr std::ptrdiff_t m_flDurationMax = 0x1dc;
      constexpr std::ptrdiff_t m_nCP = 0x1e0;
      constexpr std::ptrdiff_t m_nCPField = 0x1e4;
      constexpr std::ptrdiff_t m_nChildGroupID = 0x1e8;
      constexpr std::ptrdiff_t m_bOnlyChildren = 0x1ec;
    }
    namespace C_OP_RopeSpringConstraint {
      constexpr std::ptrdiff_t m_flRestLength = 0x1d8;
      constexpr std::ptrdiff_t m_flMinDistance = 0x348;
      constexpr std::ptrdiff_t m_flMaxDistance = 0x4b8;
      constexpr std::ptrdiff_t m_flAdjustmentScale = 0x628;
      constexpr std::ptrdiff_t m_flInitialRestingLength = 0x630;
    }
    namespace C_OP_RotateVector {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_vecRotAxisMin = 0x1dc;
      constexpr std::ptrdiff_t m_vecRotAxisMax = 0x1e8;
      constexpr std::ptrdiff_t m_flRotRateMin = 0x1f4;
      constexpr std::ptrdiff_t m_flRotRateMax = 0x1f8;
      constexpr std::ptrdiff_t m_bNormalize = 0x1fc;
      constexpr std::ptrdiff_t m_flScale = 0x200;
    }
    namespace C_OP_RtEnvCull {
      constexpr std::ptrdiff_t m_vecTestDir = 0x1d8;
      constexpr std::ptrdiff_t m_vecTestNormal = 0x1e4;
      constexpr std::ptrdiff_t m_bCullOnMiss = 0x1f0;
      constexpr std::ptrdiff_t m_bStickInsteadOfCull = 0x1f1;
      constexpr std::ptrdiff_t m_RtEnvName = 0x1f2;
      constexpr std::ptrdiff_t m_nRTEnvCP = 0x274;
      constexpr std::ptrdiff_t m_nComponent = 0x278;
    }
    namespace C_OP_ScreenSpaceDistanceToEdge {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_flMaxDistFromEdge = 0x1e0;
      constexpr std::ptrdiff_t m_flOutputRemap = 0x350;
      constexpr std::ptrdiff_t m_nSetMethod = 0x4c0;
    }
    namespace C_OP_ScreenSpacePositionOfTarget {
      constexpr std::ptrdiff_t m_vecTargetPosition = 0x1d8;
      constexpr std::ptrdiff_t m_bOututBehindness = 0x890;
      constexpr std::ptrdiff_t m_nBehindFieldOutput = 0x894;
      constexpr std::ptrdiff_t m_flBehindOutputRemap = 0x898;
      constexpr std::ptrdiff_t m_nBehindSetMethod = 0xa08;
    }
    namespace C_OP_ScreenSpaceRotateTowardTarget {
      constexpr std::ptrdiff_t m_vecTargetPosition = 0x1d8;
      constexpr std::ptrdiff_t m_flOutputRemap = 0x890;
      constexpr std::ptrdiff_t m_nSetMethod = 0xa00;
      constexpr std::ptrdiff_t m_flScreenEdgeAlignmentDistance = 0xa08;
    }
    namespace C_OP_SelectivelyEnableChildren {
      constexpr std::ptrdiff_t m_nChildGroupID = 0x1e0;
      constexpr std::ptrdiff_t m_nFirstChild = 0x350;
      constexpr std::ptrdiff_t m_nNumChildrenToEnable = 0x4c0;
      constexpr std::ptrdiff_t m_bPlayEndcapOnStop = 0x630;
      constexpr std::ptrdiff_t m_bDestroyImmediately = 0x631;
    }
    namespace C_OP_SequenceFromModel {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1dc;
      constexpr std::ptrdiff_t m_nFieldOutputAnim = 0x1e0;
      constexpr std::ptrdiff_t m_flInputMin = 0x1e4;
      constexpr std::ptrdiff_t m_flInputMax = 0x1e8;
      constexpr std::ptrdiff_t m_flOutputMin = 0x1ec;
      constexpr std::ptrdiff_t m_flOutputMax = 0x1f0;
      constexpr std::ptrdiff_t m_nSetMethod = 0x1f4;
    }
    namespace C_OP_SetAttributeToScalarExpression {
      constexpr std::ptrdiff_t m_nExpression = 0x1d8;
      constexpr std::ptrdiff_t m_flInput1 = 0x1e0;
      constexpr std::ptrdiff_t m_flInput2 = 0x350;
      constexpr std::ptrdiff_t m_flOutputRemap = 0x4c0;
      constexpr std::ptrdiff_t m_nOutputField = 0x630;
      constexpr std::ptrdiff_t m_nSetMethod = 0x634;
    }
    namespace C_OP_SetCPOrientationToDirection {
      constexpr std::ptrdiff_t m_nInputControlPoint = 0x1d8;
      constexpr std::ptrdiff_t m_nOutputControlPoint = 0x1dc;
    }
    namespace C_OP_SetCPOrientationToGroundNormal {
      constexpr std::ptrdiff_t m_flInterpRate = 0x1d8;
      constexpr std::ptrdiff_t m_flMaxTraceLength = 0x1dc;
      constexpr std::ptrdiff_t m_flTolerance = 0x1e0;
      constexpr std::ptrdiff_t m_flTraceOffset = 0x1e4;
      constexpr std::ptrdiff_t m_CollisionGroupName = 0x1e8;
      constexpr std::ptrdiff_t m_nTraceSet = 0x268;
      constexpr std::ptrdiff_t m_nInputCP = 0x26c;
      constexpr std::ptrdiff_t m_nOutputCP = 0x270;
      constexpr std::ptrdiff_t m_bIncludeWater = 0x280;
    }
    namespace C_OP_SetCPOrientationToPointAtCP {
      constexpr std::ptrdiff_t m_nInputCP = 0x1e0;
      constexpr std::ptrdiff_t m_nOutputCP = 0x1e4;
      constexpr std::ptrdiff_t m_flInterpolation = 0x1e8;
      constexpr std::ptrdiff_t m_b2DOrientation = 0x358;
      constexpr std::ptrdiff_t m_bAvoidSingularity = 0x359;
      constexpr std::ptrdiff_t m_bPointAway = 0x35a;
    }
    namespace C_OP_SetCPtoVector {
      constexpr std::ptrdiff_t m_nCPInput = 0x1d8;
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1dc;
    }
    namespace C_OP_SetChildControlPoints {
      constexpr std::ptrdiff_t m_nChildGroupID = 0x1d8;
      constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1dc;
      constexpr std::ptrdiff_t m_nNumControlPoints = 0x1e0;
      constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x1e8;
      constexpr std::ptrdiff_t m_bReverse = 0x358;
      constexpr std::ptrdiff_t m_bSetOrientation = 0x359;
      constexpr std::ptrdiff_t m_nOrientation = 0x35c;
    }
    namespace C_OP_SetControlPointFieldFromVectorExpression {
      constexpr std::ptrdiff_t m_nExpression = 0x1e0;
      constexpr std::ptrdiff_t m_vecInput1 = 0x1e8;
      constexpr std::ptrdiff_t m_vecInput2 = 0x8a0;
      constexpr std::ptrdiff_t m_flLerp = 0xf58;
      constexpr std::ptrdiff_t m_flOutputRemap = 0x10c8;
      constexpr std::ptrdiff_t m_nOutputCP = 0x1238;
      constexpr std::ptrdiff_t m_nOutVectorField = 0x123c;
    }
    namespace C_OP_SetControlPointFieldToScalarExpression {
      constexpr std::ptrdiff_t m_nExpression = 0x1e0;
      constexpr std::ptrdiff_t m_flInput1 = 0x1e8;
      constexpr std::ptrdiff_t m_flInput2 = 0x358;
      constexpr std::ptrdiff_t m_flOutputRemap = 0x4c8;
      constexpr std::ptrdiff_t m_nOutputCP = 0x638;
      constexpr std::ptrdiff_t m_nOutVectorField = 0x63c;
      constexpr std::ptrdiff_t m_flInterpolation = 0x640;
    }
    namespace C_OP_SetControlPointFieldToWater {
      constexpr std::ptrdiff_t m_nSourceCP = 0x1e0;
      constexpr std::ptrdiff_t m_nDestCP = 0x1e4;
      constexpr std::ptrdiff_t m_nCPField = 0x1e8;
    }
    namespace C_OP_SetControlPointFromObjectScale {
      constexpr std::ptrdiff_t m_nCPInput = 0x1e0;
      constexpr std::ptrdiff_t m_nCPOutput = 0x1e4;
    }
    namespace C_OP_SetControlPointOrientation {
      constexpr std::ptrdiff_t m_bUseWorldLocation = 0x1e0;
      constexpr std::ptrdiff_t m_bRandomize = 0x1e2;
      constexpr std::ptrdiff_t m_bSetOnce = 0x1e3;
      constexpr std::ptrdiff_t m_nCP = 0x1e4;
      constexpr std::ptrdiff_t m_nHeadLocation = 0x1e8;
      constexpr std::ptrdiff_t m_vecRotation = 0x1ec;
      constexpr std::ptrdiff_t m_vecRotationB = 0x1f8;
      constexpr std::ptrdiff_t m_flInterpolation = 0x208;
    }
    namespace C_OP_SetControlPointOrientationToCPVelocity {
      constexpr std::ptrdiff_t m_nCPInput = 0x1e0;
      constexpr std::ptrdiff_t m_nCPOutput = 0x1e4;
    }
    namespace C_OP_SetControlPointPositionToRandomActiveCP {
      constexpr std::ptrdiff_t m_nCP1 = 0x1e0;
      constexpr std::ptrdiff_t m_nHeadLocationMin = 0x1e4;
      constexpr std::ptrdiff_t m_nHeadLocationMax = 0x1e8;
      constexpr std::ptrdiff_t m_flResetRate = 0x1f0;
    }
    namespace C_OP_SetControlPointPositionToTimeOfDayValue {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1e0;
      constexpr std::ptrdiff_t m_pszTimeOfDayParameter = 0x1e4;
      constexpr std::ptrdiff_t m_vecDefaultValue = 0x264;
    }
    namespace C_OP_SetControlPointPositions {
      constexpr std::ptrdiff_t m_bUseWorldLocation = 0x1e0;
      constexpr std::ptrdiff_t m_bOrient = 0x1e1;
      constexpr std::ptrdiff_t m_bSetOnce = 0x1e2;
      constexpr std::ptrdiff_t m_nCP1 = 0x1e4;
      constexpr std::ptrdiff_t m_nCP2 = 0x1e8;
      constexpr std::ptrdiff_t m_nCP3 = 0x1ec;
      constexpr std::ptrdiff_t m_nCP4 = 0x1f0;
      constexpr std::ptrdiff_t m_vecCP1Pos = 0x1f4;
      constexpr std::ptrdiff_t m_vecCP2Pos = 0x200;
      constexpr std::ptrdiff_t m_vecCP3Pos = 0x20c;
      constexpr std::ptrdiff_t m_vecCP4Pos = 0x218;
      constexpr std::ptrdiff_t m_nHeadLocation = 0x224;
    }
    namespace C_OP_SetControlPointRotation {
      constexpr std::ptrdiff_t m_vecRotAxis = 0x1e0;
      constexpr std::ptrdiff_t m_flRotRate = 0x898;
      constexpr std::ptrdiff_t m_nCP = 0xa08;
      constexpr std::ptrdiff_t m_nLocalCP = 0xa0c;
    }
    namespace C_OP_SetControlPointToCPVelocity {
      constexpr std::ptrdiff_t m_nCPInput = 0x1e0;
      constexpr std::ptrdiff_t m_nCPOutputVel = 0x1e4;
      constexpr std::ptrdiff_t m_bNormalize = 0x1e8;
      constexpr std::ptrdiff_t m_nCPOutputMag = 0x1ec;
      constexpr std::ptrdiff_t m_nCPField = 0x1f0;
      constexpr std::ptrdiff_t m_vecComparisonVelocity = 0x1f8;
    }
    namespace C_OP_SetControlPointToCenter {
      constexpr std::ptrdiff_t m_nCP1 = 0x1e0;
      constexpr std::ptrdiff_t m_vecCP1Pos = 0x1e4;
      constexpr std::ptrdiff_t m_bUseAvgParticlePos = 0x1f0;
      constexpr std::ptrdiff_t m_nSetParent = 0x1f4;
    }
    namespace C_OP_SetControlPointToHMD {
      constexpr std::ptrdiff_t m_nCP1 = 0x1e0;
      constexpr std::ptrdiff_t m_vecCP1Pos = 0x1e4;
      constexpr std::ptrdiff_t m_bOrientToHMD = 0x1f0;
    }
    namespace C_OP_SetControlPointToHand {
      constexpr std::ptrdiff_t m_nCP1 = 0x1e0;
      constexpr std::ptrdiff_t m_nHand = 0x1e4;
      constexpr std::ptrdiff_t m_vecCP1Pos = 0x1e8;
      constexpr std::ptrdiff_t m_bOrientToHand = 0x1f4;
    }
    namespace C_OP_SetControlPointToImpactPoint {
      constexpr std::ptrdiff_t m_nCPOut = 0x1e0;
      constexpr std::ptrdiff_t m_nCPIn = 0x1e4;
      constexpr std::ptrdiff_t m_flUpdateRate = 0x1e8;
      constexpr std::ptrdiff_t m_flTraceLength = 0x1f0;
      constexpr std::ptrdiff_t m_flStartOffset = 0x360;
      constexpr std::ptrdiff_t m_flOffset = 0x364;
      constexpr std::ptrdiff_t m_vecTraceDir = 0x368;
      constexpr std::ptrdiff_t m_CollisionGroupName = 0x374;
      constexpr std::ptrdiff_t m_nTraceSet = 0x3f4;
      constexpr std::ptrdiff_t m_bSetToEndpoint = 0x3f8;
      constexpr std::ptrdiff_t m_bTraceToClosestSurface = 0x3f9;
      constexpr std::ptrdiff_t m_bIncludeWater = 0x3fa;
    }
    namespace C_OP_SetControlPointToPlayer {
      constexpr std::ptrdiff_t m_nCP1 = 0x1e0;
      constexpr std::ptrdiff_t m_vecCP1Pos = 0x1e4;
      constexpr std::ptrdiff_t m_bOrientToEyes = 0x1f0;
      constexpr std::ptrdiff_t m_nPosition = 0x1f4;
    }
    namespace C_OP_SetControlPointToVectorExpression {
      constexpr std::ptrdiff_t m_nExpression = 0x1e0;
      constexpr std::ptrdiff_t m_nOutputCP = 0x1e4;
      constexpr std::ptrdiff_t m_vInput1 = 0x1e8;
      constexpr std::ptrdiff_t m_vInput2 = 0x8a0;
      constexpr std::ptrdiff_t m_flLerp = 0xf58;
      constexpr std::ptrdiff_t m_bNormalizedOutput = 0x10c8;
    }
    namespace C_OP_SetControlPointToWaterSurface {
      constexpr std::ptrdiff_t m_nSourceCP = 0x1e0;
      constexpr std::ptrdiff_t m_nDestCP = 0x1e4;
      constexpr std::ptrdiff_t m_nFlowCP = 0x1e8;
      constexpr std::ptrdiff_t m_nActiveCP = 0x1ec;
      constexpr std::ptrdiff_t m_nActiveCPField = 0x1f0;
      constexpr std::ptrdiff_t m_flRetestRate = 0x1f8;
      constexpr std::ptrdiff_t m_bAdaptiveThreshold = 0x368;
    }
    namespace C_OP_SetControlPointsToModelParticles {
      constexpr std::ptrdiff_t m_HitboxSetName = 0x1d8;
      constexpr std::ptrdiff_t m_AttachmentName = 0x258;
      constexpr std::ptrdiff_t m_nFirstControlPoint = 0x2d8;
      constexpr std::ptrdiff_t m_nNumControlPoints = 0x2dc;
      constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x2e0;
      constexpr std::ptrdiff_t m_bSkin = 0x2e4;
      constexpr std::ptrdiff_t m_bAttachment = 0x2e5;
    }
    namespace C_OP_SetControlPointsToParticle {
      constexpr std::ptrdiff_t m_nChildGroupID = 0x1d8;
      constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1dc;
      constexpr std::ptrdiff_t m_nNumControlPoints = 0x1e0;
      constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x1e4;
      constexpr std::ptrdiff_t m_bReverse = 0x1e8;
      constexpr std::ptrdiff_t m_bSetOrientation = 0x1e9;
      constexpr std::ptrdiff_t m_nOrientationMode = 0x1ec;
      constexpr std::ptrdiff_t m_nSetParent = 0x1f0;
    }
    namespace C_OP_SetFloat {
      constexpr std::ptrdiff_t m_InputValue = 0x1d8;
      constexpr std::ptrdiff_t m_nOutputField = 0x348;
      constexpr std::ptrdiff_t m_nSetMethod = 0x34c;
      constexpr std::ptrdiff_t m_Lerp = 0x350;
    }
    namespace C_OP_SetFloatAttributeToVectorExpression {
      constexpr std::ptrdiff_t m_nExpression = 0x1d8;
      constexpr std::ptrdiff_t m_vInput1 = 0x1e0;
      constexpr std::ptrdiff_t m_vInput2 = 0x898;
      constexpr std::ptrdiff_t m_flOutputRemap = 0xf50;
      constexpr std::ptrdiff_t m_nOutputField = 0x10c0;
      constexpr std::ptrdiff_t m_nSetMethod = 0x10c4;
    }
    namespace C_OP_SetFloatCollection {
      constexpr std::ptrdiff_t m_InputValue = 0x1d8;
      constexpr std::ptrdiff_t m_nOutputField = 0x348;
      constexpr std::ptrdiff_t m_nSetMethod = 0x34c;
      constexpr std::ptrdiff_t m_Lerp = 0x350;
    }
    namespace C_OP_SetFromCPSnapshot {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1d8;
      constexpr std::ptrdiff_t m_strSnapshotSubset = 0x1e0;
      constexpr std::ptrdiff_t m_nAttributeToRead = 0x1e8;
      constexpr std::ptrdiff_t m_nAttributeToWrite = 0x1ec;
      constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1f0;
      constexpr std::ptrdiff_t m_bRandom = 0x1f4;
      constexpr std::ptrdiff_t m_bReverse = 0x1f5;
      constexpr std::ptrdiff_t m_nRandomSeed = 0x1f8;
      constexpr std::ptrdiff_t m_nSnapShotStartPoint = 0x200;
      constexpr std::ptrdiff_t m_nSnapShotIncrement = 0x370;
      constexpr std::ptrdiff_t m_flInterpolation = 0x4e0;
      constexpr std::ptrdiff_t m_bSubSample = 0x650;
      constexpr std::ptrdiff_t m_bPrev = 0x651;
    }
    namespace C_OP_SetGravityToCP {
      constexpr std::ptrdiff_t m_nCPInput = 0x1e0;
      constexpr std::ptrdiff_t m_nCPOutput = 0x1e4;
      constexpr std::ptrdiff_t m_flScale = 0x1e8;
      constexpr std::ptrdiff_t m_bSetPosition = 0x358;
      constexpr std::ptrdiff_t m_bSetOrientation = 0x359;
      constexpr std::ptrdiff_t m_bSetZDown = 0x35a;
    }
    namespace C_OP_SetParentControlPointsToChildCP {
      constexpr std::ptrdiff_t m_nChildGroupID = 0x1e0;
      constexpr std::ptrdiff_t m_nChildControlPoint = 0x1e4;
      constexpr std::ptrdiff_t m_nNumControlPoints = 0x1e8;
      constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x1ec;
      constexpr std::ptrdiff_t m_bSetOrientation = 0x1f0;
    }
    namespace C_OP_SetPerChildControlPoint {
      constexpr std::ptrdiff_t m_nChildGroupID = 0x1d8;
      constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1dc;
      constexpr std::ptrdiff_t m_nNumControlPoints = 0x1e0;
      constexpr std::ptrdiff_t m_nParticleIncrement = 0x1e8;
      constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x358;
      constexpr std::ptrdiff_t m_bSetOrientation = 0x4c8;
      constexpr std::ptrdiff_t m_nOrientationField = 0x4cc;
      constexpr std::ptrdiff_t m_bNumBasedOnParticleCount = 0x4d0;
    }
    namespace C_OP_SetPerChildControlPointFromAttribute {
      constexpr std::ptrdiff_t m_nChildGroupID = 0x1d8;
      constexpr std::ptrdiff_t m_nFirstControlPoint = 0x1dc;
      constexpr std::ptrdiff_t m_nNumControlPoints = 0x1e0;
      constexpr std::ptrdiff_t m_nParticleIncrement = 0x1e4;
      constexpr std::ptrdiff_t m_nFirstSourcePoint = 0x1e8;
      constexpr std::ptrdiff_t m_bNumBasedOnParticleCount = 0x1ec;
      constexpr std::ptrdiff_t m_nAttributeToRead = 0x1f0;
      constexpr std::ptrdiff_t m_nCPField = 0x1f4;
    }
    namespace C_OP_SetRandomControlPointPosition {
      constexpr std::ptrdiff_t m_bUseWorldLocation = 0x1e0;
      constexpr std::ptrdiff_t m_bOrient = 0x1e1;
      constexpr std::ptrdiff_t m_nCP1 = 0x1e4;
      constexpr std::ptrdiff_t m_nHeadLocation = 0x1e8;
      constexpr std::ptrdiff_t m_flReRandomRate = 0x1f0;
      constexpr std::ptrdiff_t m_vecCPMinPos = 0x360;
      constexpr std::ptrdiff_t m_vecCPMaxPos = 0x36c;
      constexpr std::ptrdiff_t m_flInterpolation = 0x378;
    }
    namespace C_OP_SetSimulationRate {
      constexpr std::ptrdiff_t m_flSimulationScale = 0x1e0;
    }
    namespace C_OP_SetSingleControlPointPosition {
      constexpr std::ptrdiff_t m_bSetOnce = 0x1e0;
      constexpr std::ptrdiff_t m_nCP1 = 0x1e4;
      constexpr std::ptrdiff_t m_vecCP1Pos = 0x1e8;
      constexpr std::ptrdiff_t m_transformInput = 0x8a0;
    }
    namespace C_OP_SetToCP {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1d8;
      constexpr std::ptrdiff_t m_vecOffset = 0x1dc;
      constexpr std::ptrdiff_t m_bOffsetLocal = 0x1e8;
    }
    namespace C_OP_SetUserEvent {
      constexpr std::ptrdiff_t m_flInput = 0x1d8;
      constexpr std::ptrdiff_t m_flRisingEdge = 0x348;
      constexpr std::ptrdiff_t m_nRisingEventType = 0x4b8;
      constexpr std::ptrdiff_t m_flFallingEdge = 0x4c0;
      constexpr std::ptrdiff_t m_nFallingEventType = 0x630;
    }
    namespace C_OP_SetVariable {
      constexpr std::ptrdiff_t m_variableReference = 0x1e0;
      constexpr std::ptrdiff_t m_transformInput = 0x230;
      constexpr std::ptrdiff_t m_positionOffset = 0x298;
      constexpr std::ptrdiff_t m_rotationOffset = 0x2a4;
      constexpr std::ptrdiff_t m_vecInput = 0x2b0;
      constexpr std::ptrdiff_t m_floatInput = 0x968;
    }
    namespace C_OP_SetVec {
      constexpr std::ptrdiff_t m_InputValue = 0x1d8;
      constexpr std::ptrdiff_t m_nOutputField = 0x890;
      constexpr std::ptrdiff_t m_nSetMethod = 0x894;
      constexpr std::ptrdiff_t m_Lerp = 0x898;
      constexpr std::ptrdiff_t m_bNormalizedOutput = 0xa08;
    }
    namespace C_OP_SetVectorAttributeToVectorExpression {
      constexpr std::ptrdiff_t m_nExpression = 0x1d8;
      constexpr std::ptrdiff_t m_vInput1 = 0x1e0;
      constexpr std::ptrdiff_t m_vInput2 = 0x898;
      constexpr std::ptrdiff_t m_flLerp = 0xf50;
      constexpr std::ptrdiff_t m_nOutputField = 0x10c0;
      constexpr std::ptrdiff_t m_nSetMethod = 0x10c4;
      constexpr std::ptrdiff_t m_bNormalizedOutput = 0x10c8;
    }
    namespace C_OP_ShapeMatchingConstraint {
      constexpr std::ptrdiff_t m_flShapeRestorationTime = 0x1d8;
    }
    namespace C_OP_SnapshotRigidSkinToBones {
      constexpr std::ptrdiff_t m_bTransformNormals = 0x1d8;
      constexpr std::ptrdiff_t m_bTransformRadii = 0x1d9;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1dc;
    }
    namespace C_OP_SnapshotSkinToBones {
      constexpr std::ptrdiff_t m_bTransformNormals = 0x1d8;
      constexpr std::ptrdiff_t m_bTransformRadii = 0x1d9;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1dc;
      constexpr std::ptrdiff_t m_flLifeTimeFadeStart = 0x1e0;
      constexpr std::ptrdiff_t m_flLifeTimeFadeEnd = 0x1e4;
      constexpr std::ptrdiff_t m_flJumpThreshold = 0x1e8;
      constexpr std::ptrdiff_t m_flPrevPosScale = 0x1ec;
    }
    namespace C_OP_Spin {
    }
    namespace C_OP_SpinUpdate {
    }
    namespace C_OP_SpinYaw {
    }
    namespace C_OP_SpringToVectorConstraint {
      constexpr std::ptrdiff_t m_flRestLength = 0x1d8;
      constexpr std::ptrdiff_t m_flMinDistance = 0x348;
      constexpr std::ptrdiff_t m_flMaxDistance = 0x4b8;
      constexpr std::ptrdiff_t m_flRestingLength = 0x628;
      constexpr std::ptrdiff_t m_vecAnchorVector = 0x798;
    }
    namespace C_OP_StopAfterCPDuration {
      constexpr std::ptrdiff_t m_flDuration = 0x1e0;
      constexpr std::ptrdiff_t m_bDestroyImmediately = 0x350;
      constexpr std::ptrdiff_t m_bPlayEndCap = 0x351;
    }
    namespace C_OP_TeleportBeam {
      constexpr std::ptrdiff_t m_nCPPosition = 0x1d8;
      constexpr std::ptrdiff_t m_nCPVelocity = 0x1dc;
      constexpr std::ptrdiff_t m_nCPMisc = 0x1e0;
      constexpr std::ptrdiff_t m_nCPColor = 0x1e4;
      constexpr std::ptrdiff_t m_nCPInvalidColor = 0x1e8;
      constexpr std::ptrdiff_t m_nCPExtraArcData = 0x1ec;
      constexpr std::ptrdiff_t m_vGravity = 0x1f0;
      constexpr std::ptrdiff_t m_flArcMaxDuration = 0x1fc;
      constexpr std::ptrdiff_t m_flSegmentBreak = 0x200;
      constexpr std::ptrdiff_t m_flArcSpeed = 0x204;
      constexpr std::ptrdiff_t m_flAlpha = 0x208;
    }
    namespace C_OP_TimeVaryingForce {
      constexpr std::ptrdiff_t m_flStartLerpTime = 0x1e8;
      constexpr std::ptrdiff_t m_StartingForce = 0x1ec;
      constexpr std::ptrdiff_t m_flEndLerpTime = 0x1f8;
      constexpr std::ptrdiff_t m_EndingForce = 0x1fc;
    }
    namespace C_OP_TurbulenceForce {
      constexpr std::ptrdiff_t m_flNoiseCoordScale0 = 0x1e8;
      constexpr std::ptrdiff_t m_flNoiseCoordScale1 = 0x1ec;
      constexpr std::ptrdiff_t m_flNoiseCoordScale2 = 0x1f0;
      constexpr std::ptrdiff_t m_flNoiseCoordScale3 = 0x1f4;
      constexpr std::ptrdiff_t m_vecNoiseAmount0 = 0x1f8;
      constexpr std::ptrdiff_t m_vecNoiseAmount1 = 0x204;
      constexpr std::ptrdiff_t m_vecNoiseAmount2 = 0x210;
      constexpr std::ptrdiff_t m_vecNoiseAmount3 = 0x21c;
    }
    namespace C_OP_TwistAroundAxis {
      constexpr std::ptrdiff_t m_fForceAmount = 0x1e8;
      constexpr std::ptrdiff_t m_TwistAxis = 0x1ec;
      constexpr std::ptrdiff_t m_bLocalSpace = 0x1f8;
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1fc;
    }
    namespace C_OP_UpdateLightSource {
      constexpr std::ptrdiff_t m_vColorTint = 0x1d8;
      constexpr std::ptrdiff_t m_flBrightnessScale = 0x1dc;
      constexpr std::ptrdiff_t m_flRadiusScale = 0x1e0;
      constexpr std::ptrdiff_t m_flMinimumLightingRadius = 0x1e4;
      constexpr std::ptrdiff_t m_flMaximumLightingRadius = 0x1e8;
      constexpr std::ptrdiff_t m_flPositionDampingConstant = 0x1ec;
    }
    namespace C_OP_VectorFieldSnapshot {
      constexpr std::ptrdiff_t m_nControlPointNumber = 0x1d8;
      constexpr std::ptrdiff_t m_nAttributeToWrite = 0x1dc;
      constexpr std::ptrdiff_t m_nLocalSpaceCP = 0x1e0;
      constexpr std::ptrdiff_t m_flInterpolation = 0x1e8;
      constexpr std::ptrdiff_t m_vecScale = 0x358;
      constexpr std::ptrdiff_t m_flBoundaryDampening = 0xa10;
      constexpr std::ptrdiff_t m_bSetVelocity = 0xa14;
      constexpr std::ptrdiff_t m_bLockToSurface = 0xa15;
      constexpr std::ptrdiff_t m_flGridSpacing = 0xa18;
    }
    namespace C_OP_VectorNoise {
      constexpr std::ptrdiff_t m_nFieldOutput = 0x1d8;
      constexpr std::ptrdiff_t m_vecOutputMin = 0x1dc;
      constexpr std::ptrdiff_t m_vecOutputMax = 0x1e8;
      constexpr std::ptrdiff_t m_fl4NoiseScale = 0x1f4;
      constexpr std::ptrdiff_t m_bAdditive = 0x1f8;
      constexpr std::ptrdiff_t m_bOffset = 0x1f9;
      constexpr std::ptrdiff_t m_flNoiseAnimationTimeScale = 0x1fc;
    }
    namespace C_OP_VelocityDecay {
      constexpr std::ptrdiff_t m_flMinVelocity = 0x1d8;
    }
    namespace C_OP_VelocityMatchingForce {
      constexpr std::ptrdiff_t m_flDirScale = 0x1d8;
      constexpr std::ptrdiff_t m_flSpdScale = 0x1dc;
      constexpr std::ptrdiff_t m_flNeighborDistance = 0x1e0;
      constexpr std::ptrdiff_t m_flFacingStrength = 0x1e4;
      constexpr std::ptrdiff_t m_bUseAABB = 0x1e8;
      constexpr std::ptrdiff_t m_nCPBroadcast = 0x1ec;
    }
    namespace C_OP_WaterImpulseRenderer {
      constexpr std::ptrdiff_t m_vecPos = 0x228;
      constexpr std::ptrdiff_t m_flRadius = 0x8e0;
      constexpr std::ptrdiff_t m_flMagnitude = 0xa50;
      constexpr std::ptrdiff_t m_flShape = 0xbc0;
      constexpr std::ptrdiff_t m_flWindSpeed = 0xd30;
      constexpr std::ptrdiff_t m_flWobble = 0xea0;
      constexpr std::ptrdiff_t m_bIsRadialWind = 0x1010;
      constexpr std::ptrdiff_t m_nEventType = 0x1014;
    }
    namespace C_OP_WindForce {
      constexpr std::ptrdiff_t m_vForce = 0x1e8;
    }
    namespace C_OP_WorldCollideConstraint {
    }
    namespace C_OP_WorldTraceConstraint {
      constexpr std::ptrdiff_t m_nCP = 0x1d8;
      constexpr std::ptrdiff_t m_vecCpOffset = 0x1dc;
      constexpr std::ptrdiff_t m_nCollisionMode = 0x1e8;
      constexpr std::ptrdiff_t m_nCollisionModeMin = 0x1ec;
      constexpr std::ptrdiff_t m_nTraceSet = 0x1f0;
      constexpr std::ptrdiff_t m_CollisionGroupName = 0x1f4;
      constexpr std::ptrdiff_t m_bWorldOnly = 0x274;
      constexpr std::ptrdiff_t m_bBrushOnly = 0x275;
      constexpr std::ptrdiff_t m_bIncludeWater = 0x276;
      constexpr std::ptrdiff_t m_nIgnoreCP = 0x278;
      constexpr std::ptrdiff_t m_flCpMovementTolerance = 0x27c;
      constexpr std::ptrdiff_t m_flRetestRate = 0x280;
      constexpr std::ptrdiff_t m_flTraceTolerance = 0x284;
      constexpr std::ptrdiff_t m_flCollisionConfirmationSpeed = 0x288;
      constexpr std::ptrdiff_t m_nMaxTracesPerFrame = 0x28c;
      constexpr std::ptrdiff_t m_flRadiusScale = 0x290;
      constexpr std::ptrdiff_t m_flBounceAmount = 0x400;
      constexpr std::ptrdiff_t m_flSlideAmount = 0x570;
      constexpr std::ptrdiff_t m_flRandomDirScale = 0x6e0;
      constexpr std::ptrdiff_t m_bDecayBounce = 0x850;
      constexpr std::ptrdiff_t m_bKillonContact = 0x851;
      constexpr std::ptrdiff_t m_flMinSpeed = 0x854;
      constexpr std::ptrdiff_t m_bSetNormal = 0x858;
      constexpr std::ptrdiff_t m_nStickOnCollisionField = 0x85c;
      constexpr std::ptrdiff_t m_flStopSpeed = 0x860;
      constexpr std::ptrdiff_t m_nEntityStickDataField = 0x9d0;
      constexpr std::ptrdiff_t m_nEntityStickNormalField = 0x9d4;
    }
    namespace CollisionGroupContext_t {
      constexpr std::ptrdiff_t m_nCollisionGroupNumber = 0x0;
    }
    namespace ControlPointReference_t {
      constexpr std::ptrdiff_t m_controlPointNameString = 0x0;
      constexpr std::ptrdiff_t m_vOffsetFromControlPoint = 0x4;
      constexpr std::ptrdiff_t m_bOffsetInLocalSpace = 0x10;
    }
    namespace DynamicMeshDeformParams_t {
      constexpr std::ptrdiff_t m_flTensionCompressScale = 0x0;
      constexpr std::ptrdiff_t m_flTensionStretchScale = 0x4;
      constexpr std::ptrdiff_t m_bRecomputeSmoothNormalsAfterAnimation = 0x8;
      constexpr std::ptrdiff_t m_bComputeDynamicMeshTensionAfterAnimation = 0x9;
      constexpr std::ptrdiff_t m_bSmoothNormalsAcrossUvSeams = 0xa;
      constexpr std::ptrdiff_t m_bEnableEyeBulgeDeformation = 0xb;
    }
    namespace FloatInputMaterialVariable_t {
      constexpr std::ptrdiff_t m_strVariable = 0x0;
      constexpr std::ptrdiff_t m_flInput = 0x8;
    }
    namespace FollowTargetOpFixedSettings_t {
      constexpr std::ptrdiff_t m_boneIndex = 0x0;
      constexpr std::ptrdiff_t m_bBoneTarget = 0x4;
      constexpr std::ptrdiff_t m_boneTargetIndex = 0x8;
      constexpr std::ptrdiff_t m_bWorldCoodinateTarget = 0xc;
      constexpr std::ptrdiff_t m_bMatchTargetOrientation = 0xd;
    }
    namespace IParticleSystemDefinition {
    }
    namespace MaterialVariable_t {
      constexpr std::ptrdiff_t m_strVariable = 0x0;
      constexpr std::ptrdiff_t m_nVariableField = 0x8;
      constexpr std::ptrdiff_t m_flScale = 0xc;
    }
    namespace ModelReference_t {
      constexpr std::ptrdiff_t m_model = 0x0;
      constexpr std::ptrdiff_t m_flRelativeProbabilityOfSpawn = 0x8;
    }
    namespace OutflowWithRequirements_t {
      constexpr std::ptrdiff_t m_Connection = 0x0;
      constexpr std::ptrdiff_t m_DestinationFlowNodeID = 0x48;
      constexpr std::ptrdiff_t m_RequirementNodeIDs = 0x50;
      constexpr std::ptrdiff_t m_nCursorStateBlockIndex = 0x68;
    }
    namespace ParticleChildrenInfo_t {
      constexpr std::ptrdiff_t m_ChildRef = 0x0;
      constexpr std::ptrdiff_t m_flDelay = 0x8;
      constexpr std::ptrdiff_t m_bEndCap = 0xc;
      constexpr std::ptrdiff_t m_bDisableChild = 0xd;
      constexpr std::ptrdiff_t m_nDetailLevel = 0x10;
    }
    namespace ParticleControlPointConfiguration_t {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_drivers = 0x8;
      constexpr std::ptrdiff_t m_previewState = 0x20;
    }
    namespace ParticleControlPointDriver_t {
      constexpr std::ptrdiff_t m_iControlPoint = 0x0;
      constexpr std::ptrdiff_t m_iAttachType = 0x10;
      constexpr std::ptrdiff_t m_attachmentName = 0x18;
      constexpr std::ptrdiff_t m_vecOffset = 0x20;
      constexpr std::ptrdiff_t m_angOffset = 0x2c;
      constexpr std::ptrdiff_t m_entityName = 0x38;
    }
    namespace ParticlePreviewBodyGroup_t {
      constexpr std::ptrdiff_t m_bodyGroupName = 0x0;
      constexpr std::ptrdiff_t m_nValue = 0x8;
    }
    namespace ParticlePreviewState_t {
      constexpr std::ptrdiff_t m_previewModel = 0x0;
      constexpr std::ptrdiff_t m_nModSpecificData = 0x8;
      constexpr std::ptrdiff_t m_groundType = 0xc;
      constexpr std::ptrdiff_t m_sequenceName = 0x10;
      constexpr std::ptrdiff_t m_nFireParticleOnSequenceFrame = 0x18;
      constexpr std::ptrdiff_t m_hitboxSetName = 0x20;
      constexpr std::ptrdiff_t m_materialGroupName = 0x28;
      constexpr std::ptrdiff_t m_vecBodyGroups = 0x30;
      constexpr std::ptrdiff_t m_flPlaybackSpeed = 0x48;
      constexpr std::ptrdiff_t m_flParticleSimulationRate = 0x4c;
      constexpr std::ptrdiff_t m_bShouldDrawHitboxes = 0x50;
      constexpr std::ptrdiff_t m_bShouldDrawAttachments = 0x51;
      constexpr std::ptrdiff_t m_bShouldDrawAttachmentNames = 0x52;
      constexpr std::ptrdiff_t m_bShouldDrawControlPointAxes = 0x53;
      constexpr std::ptrdiff_t m_bAnimationNonLooping = 0x54;
      constexpr std::ptrdiff_t m_bSequenceNameIsAnimClipPath = 0x55;
      constexpr std::ptrdiff_t m_vecPreviewGravity = 0x58;
    }
    namespace PointDefinitionWithTimeValues_t {
      constexpr std::ptrdiff_t m_flTimeDuration = 0x14;
    }
    namespace PointDefinition_t {
      constexpr std::ptrdiff_t m_nControlPoint = 0x0;
      constexpr std::ptrdiff_t m_bLocalCoords = 0x4;
      constexpr std::ptrdiff_t m_vOffset = 0x8;
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
    namespace PulseSelectorOutflowList_t {
      constexpr std::ptrdiff_t m_Outflows = 0x0;
    }
    namespace RenderProjectedMaterial_t {
      constexpr std::ptrdiff_t m_hMaterial = 0x0;
    }
    namespace RnMeshDesc_t {
      constexpr std::ptrdiff_t m_Mesh = 0x18;
    }
    namespace SequenceWeightedList_t {
      constexpr std::ptrdiff_t m_nSequence = 0x0;
      constexpr std::ptrdiff_t m_flRelativeWeight = 0x4;
    }
    namespace SignatureOutflow_Continue {
    }
    namespace SignatureOutflow_Resume {
    }
    namespace TextureControls_t {
      constexpr std::ptrdiff_t m_flFinalTextureScaleU = 0x0;
      constexpr std::ptrdiff_t m_flFinalTextureScaleV = 0x170;
      constexpr std::ptrdiff_t m_flFinalTextureOffsetU = 0x2e0;
      constexpr std::ptrdiff_t m_flFinalTextureOffsetV = 0x450;
      constexpr std::ptrdiff_t m_flFinalTextureUVRotation = 0x5c0;
      constexpr std::ptrdiff_t m_flZoomScale = 0x730;
      constexpr std::ptrdiff_t m_flDistortion = 0x8a0;
      constexpr std::ptrdiff_t m_bRandomizeOffsets = 0xa10;
      constexpr std::ptrdiff_t m_bClampUVs = 0xa11;
      constexpr std::ptrdiff_t m_nPerParticleBlend = 0xa14;
      constexpr std::ptrdiff_t m_nPerParticleScale = 0xa18;
      constexpr std::ptrdiff_t m_nPerParticleOffsetU = 0xa1c;
      constexpr std::ptrdiff_t m_nPerParticleOffsetV = 0xa20;
      constexpr std::ptrdiff_t m_nPerParticleRotation = 0xa24;
      constexpr std::ptrdiff_t m_nPerParticleZoom = 0xa28;
      constexpr std::ptrdiff_t m_nPerParticleDistortion = 0xa2c;
    }
    namespace TextureGroup_t {
      constexpr std::ptrdiff_t m_bEnabled = 0x0;
      constexpr std::ptrdiff_t m_bReplaceTextureWithGradient = 0x1;
      constexpr std::ptrdiff_t m_hTexture = 0x8;
      constexpr std::ptrdiff_t m_Gradient = 0x10;
      constexpr std::ptrdiff_t m_nTextureType = 0x28;
      constexpr std::ptrdiff_t m_nTextureChannels = 0x2c;
      constexpr std::ptrdiff_t m_nTextureBlendMode = 0x30;
      constexpr std::ptrdiff_t m_flTextureBlend = 0x38;
      constexpr std::ptrdiff_t m_TextureControls = 0x1a8;
    }
    namespace VecInputMaterialVariable_t {
      constexpr std::ptrdiff_t m_strVariable = 0x0;
      constexpr std::ptrdiff_t m_vecInput = 0x8;
    }
  }
}
