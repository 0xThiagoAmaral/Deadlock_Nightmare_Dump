// Generated via Nightmare Oracle
#pragma once
#include <cstddef>

namespace deadlock_dumper {
  namespace animationsystem_dll {
    namespace AimCameraOpFixedSettings_t {
      constexpr std::ptrdiff_t m_nChainIndex = 0x0;
      constexpr std::ptrdiff_t m_nCameraJointIndex = 0x4;
      constexpr std::ptrdiff_t m_nPelvisJointIndex = 0x8;
      constexpr std::ptrdiff_t m_nClavicleLeftJointIndex = 0xc;
      constexpr std::ptrdiff_t m_nClavicleRightJointIndex = 0x10;
      constexpr std::ptrdiff_t m_nDepenetrationJointIndex = 0x14;
      constexpr std::ptrdiff_t m_propJoints = 0x18;
    }
    namespace AimMatrixOpFixedSettings_t {
      constexpr std::ptrdiff_t m_attachment = 0x0;
      constexpr std::ptrdiff_t m_damping = 0x80;
      constexpr std::ptrdiff_t m_poseCacheHandles = 0x98;
      constexpr std::ptrdiff_t m_eBlendMode = 0xc0;
      constexpr std::ptrdiff_t m_flMaxYawAngle = 0xc4;
      constexpr std::ptrdiff_t m_flMaxPitchAngle = 0xc8;
      constexpr std::ptrdiff_t m_nSequenceMaxFrame = 0xcc;
      constexpr std::ptrdiff_t m_nBoneMaskIndex = 0xd0;
      constexpr std::ptrdiff_t m_bTargetIsPosition = 0xd4;
      constexpr std::ptrdiff_t m_bUseBiasAndClamp = 0xd5;
      constexpr std::ptrdiff_t m_flBiasAndClampYawOffset = 0xd8;
      constexpr std::ptrdiff_t m_flBiasAndClampPitchOffset = 0xdc;
      constexpr std::ptrdiff_t m_biasAndClampBlendCurve = 0xe0;
    }
    namespace AnimComponentID {
      constexpr std::ptrdiff_t m_id = 0x0;
    }
    namespace AnimNodeID {
      constexpr std::ptrdiff_t m_id = 0x0;
    }
    namespace AnimNodeOutputID {
      constexpr std::ptrdiff_t m_id = 0x0;
    }
    namespace AnimParamID {
      constexpr std::ptrdiff_t m_id = 0x0;
    }
    namespace AnimScriptHandle {
      constexpr std::ptrdiff_t m_id = 0x0;
    }
    namespace AnimStateID {
      constexpr std::ptrdiff_t m_id = 0x0;
    }
    namespace AnimTagID {
      constexpr std::ptrdiff_t m_id = 0x0;
    }
    namespace AnimationDecodeDebugDumpElement_t {
      constexpr std::ptrdiff_t m_nEntityIndex = 0x0;
      constexpr std::ptrdiff_t m_modelName = 0x8;
      constexpr std::ptrdiff_t m_poseParams = 0x10;
      constexpr std::ptrdiff_t m_decodeOps = 0x28;
      constexpr std::ptrdiff_t m_internalOps = 0x40;
      constexpr std::ptrdiff_t m_decodedAnims = 0x58;
    }
    namespace AnimationDecodeDebugDump_t {
      constexpr std::ptrdiff_t m_processingType = 0x0;
      constexpr std::ptrdiff_t m_elems = 0x8;
    }
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
    namespace AnimationSnapshot_t {
      constexpr std::ptrdiff_t m_nEntIndex = 0x110;
      constexpr std::ptrdiff_t m_modelName = 0x118;
    }
    namespace AttachmentHandle_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace BlendItem_t {
      constexpr std::ptrdiff_t m_tags = 0x0;
      constexpr std::ptrdiff_t m_pChild = 0x18;
      constexpr std::ptrdiff_t m_hSequence = 0x28;
      constexpr std::ptrdiff_t m_vPos = 0x2c;
      constexpr std::ptrdiff_t m_flDuration = 0x34;
      constexpr std::ptrdiff_t m_bUseCustomDuration = 0x38;
    }
    namespace BoneDemoCaptureSettings_t {
      constexpr std::ptrdiff_t m_boneName = 0x0;
      constexpr std::ptrdiff_t m_flErrorSplineRotationMax = 0x8;
      constexpr std::ptrdiff_t m_flErrorSplineTranslationMax = 0xc;
      constexpr std::ptrdiff_t m_flErrorSplineScaleMax = 0x10;
      constexpr std::ptrdiff_t m_flErrorQuantizationRotationMax = 0x14;
      constexpr std::ptrdiff_t m_flErrorQuantizationTranslationMax = 0x18;
      constexpr std::ptrdiff_t m_flErrorQuantizationScaleMax = 0x1c;
    }
    namespace CActionComponentUpdater {
      constexpr std::ptrdiff_t m_actions = 0x30;
    }
    namespace CAddUpdateNode {
      constexpr std::ptrdiff_t m_footMotionTiming = 0x94;
      constexpr std::ptrdiff_t m_bApplyToFootMotion = 0x98;
      constexpr std::ptrdiff_t m_bApplyChannelsSeparately = 0x99;
      constexpr std::ptrdiff_t m_bUseModelSpace = 0x9a;
      constexpr std::ptrdiff_t m_bApplyScale = 0x9b;
    }
    namespace CAimCameraUpdateNode {
      constexpr std::ptrdiff_t m_hParameterPosition = 0x70;
      constexpr std::ptrdiff_t m_hParameterOrientation = 0x72;
      constexpr std::ptrdiff_t m_hParameterPelvisOffset = 0x74;
      constexpr std::ptrdiff_t m_hParameterCameraOnly = 0x76;
      constexpr std::ptrdiff_t m_hParameterWeaponDepenetrationDistance = 0x78;
      constexpr std::ptrdiff_t m_hParameterWeaponDepenetrationDelta = 0x7a;
      constexpr std::ptrdiff_t m_hParameterCameraClearanceDistance = 0x7c;
      constexpr std::ptrdiff_t m_opFixedSettings = 0x80;
    }
    namespace CAimConstraint {
      constexpr std::ptrdiff_t m_qAimOffset = 0x60;
      constexpr std::ptrdiff_t m_nUpType = 0x70;
    }
    namespace CAimMatrixUpdateNode {
      constexpr std::ptrdiff_t m_opFixedSettings = 0x70;
      constexpr std::ptrdiff_t m_target = 0x168;
      constexpr std::ptrdiff_t m_paramIndex = 0x16c;
      constexpr std::ptrdiff_t m_hSequence = 0x170;
      constexpr std::ptrdiff_t m_bResetChild = 0x174;
      constexpr std::ptrdiff_t m_bLockWhenWaning = 0x175;
    }
    namespace CAnimActionUpdater {
    }
    namespace CAnimActivity {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_nActivity = 0x10;
      constexpr std::ptrdiff_t m_nFlags = 0x14;
      constexpr std::ptrdiff_t m_nWeight = 0x18;
    }
    namespace CAnimAttachment {
      constexpr std::ptrdiff_t m_influenceRotations = 0x0;
      constexpr std::ptrdiff_t m_influenceOffsets = 0x30;
      constexpr std::ptrdiff_t m_influenceIndices = 0x60;
      constexpr std::ptrdiff_t m_influenceWeights = 0x6c;
      constexpr std::ptrdiff_t m_numInfluences = 0x78;
    }
    namespace CAnimBone {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_parent = 0x10;
      constexpr std::ptrdiff_t m_pos = 0x14;
      constexpr std::ptrdiff_t m_quat = 0x20;
      constexpr std::ptrdiff_t m_scale = 0x30;
      constexpr std::ptrdiff_t m_qAlignment = 0x34;
      constexpr std::ptrdiff_t m_flags = 0x44;
    }
    namespace CAnimBoneDifference {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_parent = 0x10;
      constexpr std::ptrdiff_t m_posError = 0x20;
      constexpr std::ptrdiff_t m_bHasRotation = 0x2c;
      constexpr std::ptrdiff_t m_bHasMovement = 0x2d;
    }
    namespace CAnimComponentUpdater {
      constexpr std::ptrdiff_t m_name = 0x18;
      constexpr std::ptrdiff_t m_id = 0x20;
      constexpr std::ptrdiff_t m_networkMode = 0x24;
      constexpr std::ptrdiff_t m_bStartEnabled = 0x28;
    }
    namespace CAnimCycle {
    }
    namespace CAnimData {
      constexpr std::ptrdiff_t m_name = 0x10;
      constexpr std::ptrdiff_t m_animArray = 0x20;
      constexpr std::ptrdiff_t m_decoderArray = 0x38;
      constexpr std::ptrdiff_t m_nMaxUniqueFrameIndex = 0x50;
      constexpr std::ptrdiff_t m_segmentArray = 0x58;
    }
    namespace CAnimDataChannelDesc {
      constexpr std::ptrdiff_t m_szChannelClass = 0x0;
      constexpr std::ptrdiff_t m_szVariableName = 0x10;
      constexpr std::ptrdiff_t m_nFlags = 0x20;
      constexpr std::ptrdiff_t m_nType = 0x24;
      constexpr std::ptrdiff_t m_szGrouping = 0x28;
      constexpr std::ptrdiff_t m_szDescription = 0x38;
      constexpr std::ptrdiff_t m_szElementNameArray = 0x48;
      constexpr std::ptrdiff_t m_nElementIndexArray = 0x60;
      constexpr std::ptrdiff_t m_nElementMaskArray = 0x78;
    }
    namespace CAnimDecoder {
      constexpr std::ptrdiff_t m_szName = 0x0;
      constexpr std::ptrdiff_t m_nVersion = 0x10;
      constexpr std::ptrdiff_t m_nType = 0x14;
    }
    namespace CAnimDemoCaptureSettings {
      constexpr std::ptrdiff_t m_vecErrorRangeSplineRotation = 0x0;
      constexpr std::ptrdiff_t m_vecErrorRangeSplineTranslation = 0x8;
      constexpr std::ptrdiff_t m_vecErrorRangeSplineScale = 0x10;
      constexpr std::ptrdiff_t m_flIkRotation_MaxSplineError = 0x18;
      constexpr std::ptrdiff_t m_flIkTranslation_MaxSplineError = 0x1c;
      constexpr std::ptrdiff_t m_vecErrorRangeQuantizationRotation = 0x20;
      constexpr std::ptrdiff_t m_vecErrorRangeQuantizationTranslation = 0x28;
      constexpr std::ptrdiff_t m_vecErrorRangeQuantizationScale = 0x30;
      constexpr std::ptrdiff_t m_flIkRotation_MaxQuantizationError = 0x38;
      constexpr std::ptrdiff_t m_flIkTranslation_MaxQuantizationError = 0x3c;
      constexpr std::ptrdiff_t m_baseSequence = 0x40;
      constexpr std::ptrdiff_t m_nBaseSequenceFrame = 0x48;
      constexpr std::ptrdiff_t m_boneSelectionMode = 0x4c;
      constexpr std::ptrdiff_t m_bones = 0x50;
      constexpr std::ptrdiff_t m_ikChains = 0x68;
    }
    namespace CAnimDesc {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_flags = 0x10;
      constexpr std::ptrdiff_t fps = 0x18;
      constexpr std::ptrdiff_t m_Data = 0x20;
      constexpr std::ptrdiff_t m_movementArray = 0xf8;
      constexpr std::ptrdiff_t m_xInitialOffset = 0x110;
      constexpr std::ptrdiff_t m_eventArray = 0x130;
      constexpr std::ptrdiff_t m_activityArray = 0x148;
      constexpr std::ptrdiff_t m_hierarchyArray = 0x160;
      constexpr std::ptrdiff_t framestalltime = 0x178;
      constexpr std::ptrdiff_t m_vecRootMin = 0x17c;
      constexpr std::ptrdiff_t m_vecRootMax = 0x188;
      constexpr std::ptrdiff_t m_vecBoneWorldMin = 0x198;
      constexpr std::ptrdiff_t m_vecBoneWorldMax = 0x1b0;
      constexpr std::ptrdiff_t m_sequenceParams = 0x1c8;
    }
    namespace CAnimDesc_Flag {
      constexpr std::ptrdiff_t m_bLooping = 0x0;
      constexpr std::ptrdiff_t m_bAllZeros = 0x1;
      constexpr std::ptrdiff_t m_bHidden = 0x2;
      constexpr std::ptrdiff_t m_bDelta = 0x3;
      constexpr std::ptrdiff_t m_bLegacyWorldspace = 0x4;
      constexpr std::ptrdiff_t m_bModelDoc = 0x5;
      constexpr std::ptrdiff_t m_bImplicitSeqIgnoreDelta = 0x6;
      constexpr std::ptrdiff_t m_bAnimGraphAdditive = 0x7;
    }
    namespace CAnimEncodeDifference {
      constexpr std::ptrdiff_t m_boneArray = 0x0;
      constexpr std::ptrdiff_t m_morphArray = 0x18;
      constexpr std::ptrdiff_t m_userArray = 0x30;
      constexpr std::ptrdiff_t m_bHasRotationBitArray = 0x48;
      constexpr std::ptrdiff_t m_bHasMovementBitArray = 0x60;
      constexpr std::ptrdiff_t m_bHasMorphBitArray = 0x78;
      constexpr std::ptrdiff_t m_bHasUserBitArray = 0x90;
    }
    namespace CAnimEncodedFrames {
      constexpr std::ptrdiff_t m_fileName = 0x0;
      constexpr std::ptrdiff_t m_nFrames = 0x10;
      constexpr std::ptrdiff_t m_nFramesPerBlock = 0x14;
      constexpr std::ptrdiff_t m_frameblockArray = 0x18;
      constexpr std::ptrdiff_t m_usageDifferences = 0x30;
    }
    namespace CAnimEnum {
      constexpr std::ptrdiff_t m_value = 0x0;
    }
    namespace CAnimEventDefinition {
      constexpr std::ptrdiff_t m_nFrame = 0x8;
      constexpr std::ptrdiff_t m_nEndFrame = 0xc;
      constexpr std::ptrdiff_t m_flCycle = 0x10;
      constexpr std::ptrdiff_t m_flDuration = 0x14;
      constexpr std::ptrdiff_t m_EventData = 0x18;
      constexpr std::ptrdiff_t m_sLegacyOptions = 0x28;
      constexpr std::ptrdiff_t m_sEventName = 0x38;
    }
    namespace CAnimFoot {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_vBallOffset = 0x8;
      constexpr std::ptrdiff_t m_vHeelOffset = 0x14;
      constexpr std::ptrdiff_t m_ankleBoneIndex = 0x20;
      constexpr std::ptrdiff_t m_toeBoneIndex = 0x24;
    }
    namespace CAnimFrameBlockAnim {
      constexpr std::ptrdiff_t m_nStartFrame = 0x0;
      constexpr std::ptrdiff_t m_nEndFrame = 0x4;
      constexpr std::ptrdiff_t m_segmentIndexArray = 0x8;
    }
    namespace CAnimFrameSegment {
      constexpr std::ptrdiff_t m_nUniqueFrameIndex = 0x0;
      constexpr std::ptrdiff_t m_nLocalElementMasks = 0x4;
      constexpr std::ptrdiff_t m_nLocalChannel = 0x8;
      constexpr std::ptrdiff_t m_container = 0x10;
    }
    namespace CAnimGraphDebugReplay {
      constexpr std::ptrdiff_t m_animGraphFileName = 0x40;
      constexpr std::ptrdiff_t m_frameList = 0x48;
      constexpr std::ptrdiff_t m_startIndex = 0x60;
      constexpr std::ptrdiff_t m_writeIndex = 0x64;
      constexpr std::ptrdiff_t m_frameCount = 0x68;
    }
    namespace CAnimGraphModelBinding {
      constexpr std::ptrdiff_t m_modelName = 0x8;
      constexpr std::ptrdiff_t m_pSharedData = 0x10;
    }
    namespace CAnimGraphNetworkSettings {
      constexpr std::ptrdiff_t m_bNetworkingEnabled = 0x20;
    }
    namespace CAnimGraphSettingsGroup {
    }
    namespace CAnimGraphSettingsManager {
      constexpr std::ptrdiff_t m_settingsGroups = 0x18;
    }
    namespace CAnimInputDamping {
      constexpr std::ptrdiff_t m_speedFunction = 0x8;
      constexpr std::ptrdiff_t m_fSpeedScale = 0xc;
      constexpr std::ptrdiff_t m_fFallingSpeedScale = 0x10;
    }
    namespace CAnimKeyData {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_boneArray = 0x10;
      constexpr std::ptrdiff_t m_userArray = 0x28;
      constexpr std::ptrdiff_t m_morphArray = 0x40;
      constexpr std::ptrdiff_t m_nChannelElements = 0x58;
      constexpr std::ptrdiff_t m_dataChannelArray = 0x60;
    }
    namespace CAnimLocalHierarchy {
      constexpr std::ptrdiff_t m_sBone = 0x0;
      constexpr std::ptrdiff_t m_sNewParent = 0x10;
      constexpr std::ptrdiff_t m_nStartFrame = 0x20;
      constexpr std::ptrdiff_t m_nPeakFrame = 0x24;
      constexpr std::ptrdiff_t m_nTailFrame = 0x28;
      constexpr std::ptrdiff_t m_nEndFrame = 0x2c;
    }
    namespace CAnimMorphDifference {
      constexpr std::ptrdiff_t m_name = 0x0;
    }
    namespace CAnimMotorUpdaterBase {
      constexpr std::ptrdiff_t m_name = 0x10;
      constexpr std::ptrdiff_t m_bDefault = 0x18;
    }
    namespace CAnimMovement {
      constexpr std::ptrdiff_t endframe = 0x0;
      constexpr std::ptrdiff_t motionflags = 0x4;
      constexpr std::ptrdiff_t v0 = 0x8;
      constexpr std::ptrdiff_t v1 = 0xc;
      constexpr std::ptrdiff_t angle = 0x10;
      constexpr std::ptrdiff_t vector = 0x14;
      constexpr std::ptrdiff_t position = 0x20;
    }
    namespace CAnimNodePath {
      constexpr std::ptrdiff_t m_path = 0x0;
      constexpr std::ptrdiff_t m_nCount = 0x2c;
    }
    namespace CAnimParamHandle {
      constexpr std::ptrdiff_t m_type = 0x0;
      constexpr std::ptrdiff_t m_index = 0x1;
    }
    namespace CAnimParamHandleMap {
      constexpr std::ptrdiff_t m_list = 0x0;
    }
    namespace CAnimParameterBase {
      constexpr std::ptrdiff_t m_name = 0x18;
      constexpr std::ptrdiff_t m_sComment = 0x20;
      constexpr std::ptrdiff_t m_group = 0x28;
      constexpr std::ptrdiff_t m_id = 0x30;
      constexpr std::ptrdiff_t m_componentName = 0x48;
      constexpr std::ptrdiff_t m_bNetworkingRequested = 0x68;
      constexpr std::ptrdiff_t m_bIsReferenced = 0x69;
    }
    namespace CAnimParameterManagerUpdater {
      constexpr std::ptrdiff_t m_parameters = 0x18;
      constexpr std::ptrdiff_t m_idToIndexMap = 0x30;
      constexpr std::ptrdiff_t m_nameToIndexMap = 0x50;
      constexpr std::ptrdiff_t m_indexToHandle = 0x70;
      constexpr std::ptrdiff_t m_autoResetParams = 0x88;
      constexpr std::ptrdiff_t m_autoResetMap = 0xa0;
    }
    namespace CAnimReplayFrame {
      constexpr std::ptrdiff_t m_inputDataBlocks = 0x10;
      constexpr std::ptrdiff_t m_instanceData = 0x28;
      constexpr std::ptrdiff_t m_startingLocalToWorldTransform = 0x40;
      constexpr std::ptrdiff_t m_localToWorldTransform = 0x60;
      constexpr std::ptrdiff_t m_timeStamp = 0x80;
    }
    namespace CAnimScriptComponentUpdater {
      constexpr std::ptrdiff_t m_hScript = 0x30;
    }
    namespace CAnimScriptManager {
      constexpr std::ptrdiff_t m_scriptInfo = 0x10;
    }
    namespace CAnimSequenceParams {
      constexpr std::ptrdiff_t m_flFadeInTime = 0x0;
      constexpr std::ptrdiff_t m_flFadeOutTime = 0x4;
    }
    namespace CAnimSkeleton {
      constexpr std::ptrdiff_t m_localSpaceTransforms = 0x10;
      constexpr std::ptrdiff_t m_modelSpaceTransforms = 0x28;
      constexpr std::ptrdiff_t m_boneNames = 0x40;
      constexpr std::ptrdiff_t m_children = 0x58;
      constexpr std::ptrdiff_t m_parents = 0x70;
      constexpr std::ptrdiff_t m_feet = 0x88;
      constexpr std::ptrdiff_t m_morphNames = 0xa0;
      constexpr std::ptrdiff_t m_lodBoneCounts = 0xb8;
    }
    namespace CAnimStateMachineUpdater {
      constexpr std::ptrdiff_t m_states = 0x8;
      constexpr std::ptrdiff_t m_transitions = 0x20;
      constexpr std::ptrdiff_t m_startStateIndex = 0x50;
    }
    namespace CAnimTagBase {
      constexpr std::ptrdiff_t m_name = 0x18;
      constexpr std::ptrdiff_t m_sComment = 0x20;
      constexpr std::ptrdiff_t m_group = 0x28;
      constexpr std::ptrdiff_t m_tagID = 0x30;
      constexpr std::ptrdiff_t m_bIsReferenced = 0x48;
    }
    namespace CAnimTagManagerUpdater {
      constexpr std::ptrdiff_t m_tags = 0x38;
    }
    namespace CAnimUpdateNodeBase {
      constexpr std::ptrdiff_t m_nodePath = 0x18;
      constexpr std::ptrdiff_t m_networkMode = 0x48;
      constexpr std::ptrdiff_t m_name = 0x50;
    }
    namespace CAnimUpdateNodeRef {
      constexpr std::ptrdiff_t m_nodeIndex = 0x8;
    }
    namespace CAnimUpdateSharedData {
      constexpr std::ptrdiff_t m_nodes = 0x10;
      constexpr std::ptrdiff_t m_nodeIndexMap = 0x28;
      constexpr std::ptrdiff_t m_components = 0x48;
      constexpr std::ptrdiff_t m_pParamListUpdater = 0x60;
      constexpr std::ptrdiff_t m_pTagManagerUpdater = 0x68;
      constexpr std::ptrdiff_t m_scriptManager = 0x70;
      constexpr std::ptrdiff_t m_settings = 0x78;
      constexpr std::ptrdiff_t m_pStaticPoseCache = 0xa8;
      constexpr std::ptrdiff_t m_pSkeleton = 0xb0;
      constexpr std::ptrdiff_t m_rootNodePath = 0xb8;
    }
    namespace CAnimUser {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_nType = 0x10;
    }
    namespace CAnimUserDifference {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_nType = 0x10;
    }
    namespace CAnimationGraphVisualizerAxis {
      constexpr std::ptrdiff_t m_xWsTransform = 0x40;
      constexpr std::ptrdiff_t m_flAxisSize = 0x60;
    }
    namespace CAnimationGraphVisualizerLine {
      constexpr std::ptrdiff_t m_vWsPositionStart = 0x40;
      constexpr std::ptrdiff_t m_vWsPositionEnd = 0x50;
      constexpr std::ptrdiff_t m_Color = 0x60;
    }
    namespace CAnimationGraphVisualizerPie {
      constexpr std::ptrdiff_t m_vWsCenter = 0x40;
      constexpr std::ptrdiff_t m_vWsStart = 0x50;
      constexpr std::ptrdiff_t m_vWsEnd = 0x60;
      constexpr std::ptrdiff_t m_Color = 0x70;
    }
    namespace CAnimationGraphVisualizerPrimitiveBase {
      constexpr std::ptrdiff_t m_Type = 0x8;
      constexpr std::ptrdiff_t m_OwningAnimNodePaths = 0xc;
      constexpr std::ptrdiff_t m_nOwningAnimNodePathCount = 0x38;
    }
    namespace CAnimationGraphVisualizerSphere {
      constexpr std::ptrdiff_t m_vWsPosition = 0x40;
      constexpr std::ptrdiff_t m_flRadius = 0x50;
      constexpr std::ptrdiff_t m_Color = 0x54;
    }
    namespace CAnimationGraphVisualizerText {
      constexpr std::ptrdiff_t m_vWsPosition = 0x40;
      constexpr std::ptrdiff_t m_Color = 0x50;
      constexpr std::ptrdiff_t m_Text = 0x58;
    }
    namespace CAnimationGroup {
      constexpr std::ptrdiff_t m_nFlags = 0x10;
      constexpr std::ptrdiff_t m_name = 0x18;
      constexpr std::ptrdiff_t m_localHAnimArray_Handle = 0x60;
      constexpr std::ptrdiff_t m_includedGroupArray_Handle = 0x78;
      constexpr std::ptrdiff_t m_directHSeqGroup_Handle = 0x90;
      constexpr std::ptrdiff_t m_decodeKey = 0x98;
      constexpr std::ptrdiff_t m_szScripts = 0x110;
      constexpr std::ptrdiff_t m_AdditionalExtRefs = 0x128;
    }
    namespace CAttachment {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_influenceNames = 0x8;
      constexpr std::ptrdiff_t m_vInfluenceRotations = 0x20;
      constexpr std::ptrdiff_t m_vInfluenceOffsets = 0x50;
      constexpr std::ptrdiff_t m_influenceWeights = 0x74;
      constexpr std::ptrdiff_t m_bInfluenceRootTransform = 0x80;
      constexpr std::ptrdiff_t m_nInfluences = 0x83;
      constexpr std::ptrdiff_t m_bIgnoreRotation = 0x84;
    }
    namespace CAudioAnimTag {
      constexpr std::ptrdiff_t m_clipName = 0x58;
      constexpr std::ptrdiff_t m_attachmentName = 0x60;
      constexpr std::ptrdiff_t m_flVolume = 0x68;
      constexpr std::ptrdiff_t m_bStopWhenTagEnds = 0x6c;
      constexpr std::ptrdiff_t m_bStopWhenGraphEnds = 0x6d;
      constexpr std::ptrdiff_t m_bPlayOnServer = 0x6e;
      constexpr std::ptrdiff_t m_bPlayOnClient = 0x6f;
    }
    namespace CBaseConstraint {
      constexpr std::ptrdiff_t m_name = 0x20;
      constexpr std::ptrdiff_t m_vUpVector = 0x28;
      constexpr std::ptrdiff_t m_slaves = 0x38;
      constexpr std::ptrdiff_t m_targets = 0x48;
    }
    namespace CBasePulseGraphInstance {
    }
    namespace CBinaryUpdateNode {
      constexpr std::ptrdiff_t m_pChild1 = 0x60;
      constexpr std::ptrdiff_t m_pChild2 = 0x70;
      constexpr std::ptrdiff_t m_timingBehavior = 0x80;
      constexpr std::ptrdiff_t m_flTimingBlend = 0x84;
      constexpr std::ptrdiff_t m_bResetChild1 = 0x88;
      constexpr std::ptrdiff_t m_bResetChild2 = 0x89;
    }
    namespace CBindPoseUpdateNode {
    }
    namespace CBlend2DUpdateNode {
      constexpr std::ptrdiff_t m_items = 0x60;
      constexpr std::ptrdiff_t m_tags = 0x78;
      constexpr std::ptrdiff_t m_paramSpans = 0x90;
      constexpr std::ptrdiff_t m_nodeItemIndices = 0xa8;
      constexpr std::ptrdiff_t m_damping = 0xc0;
      constexpr std::ptrdiff_t m_blendSourceX = 0xd8;
      constexpr std::ptrdiff_t m_paramX = 0xdc;
      constexpr std::ptrdiff_t m_blendSourceY = 0xe0;
      constexpr std::ptrdiff_t m_paramY = 0xe4;
      constexpr std::ptrdiff_t m_eBlendMode = 0xe8;
      constexpr std::ptrdiff_t m_playbackSpeed = 0xec;
      constexpr std::ptrdiff_t m_bLoop = 0xf0;
      constexpr std::ptrdiff_t m_bLockBlendOnReset = 0xf1;
      constexpr std::ptrdiff_t m_bLockWhenWaning = 0xf2;
      constexpr std::ptrdiff_t m_bAnimEventsAndTagsOnMostWeightedOnly = 0xf3;
    }
    namespace CBlendCurve {
      constexpr std::ptrdiff_t m_flControlPoint1 = 0x0;
      constexpr std::ptrdiff_t m_flControlPoint2 = 0x4;
    }
    namespace CBlendUpdateNode {
      constexpr std::ptrdiff_t m_children = 0x60;
      constexpr std::ptrdiff_t m_sortedOrder = 0x78;
      constexpr std::ptrdiff_t m_targetValues = 0x90;
      constexpr std::ptrdiff_t m_blendValueSource = 0xac;
      constexpr std::ptrdiff_t m_eLinearRootMotionBlendMode = 0xb0;
      constexpr std::ptrdiff_t m_paramIndex = 0xb4;
      constexpr std::ptrdiff_t m_damping = 0xb8;
      constexpr std::ptrdiff_t m_blendKeyType = 0xd0;
      constexpr std::ptrdiff_t m_bLockBlendOnReset = 0xd4;
      constexpr std::ptrdiff_t m_bSyncCycles = 0xd5;
      constexpr std::ptrdiff_t m_bLoop = 0xd6;
      constexpr std::ptrdiff_t m_bLockWhenWaning = 0xd7;
      constexpr std::ptrdiff_t m_bIsAngle = 0xd8;
    }
    namespace CBlockSelectionMetricEvaluator {
    }
    namespace CBodyGroupAnimTag {
      constexpr std::ptrdiff_t m_nPriority = 0x58;
      constexpr std::ptrdiff_t m_bodyGroupSettings = 0x60;
    }
    namespace CBodyGroupSetting {
      constexpr std::ptrdiff_t m_BodyGroupName = 0x0;
      constexpr std::ptrdiff_t m_nBodyGroupOption = 0x8;
    }
    namespace CBoneConstraintBase {
    }
    namespace CBoneConstraintDotToMorph {
      constexpr std::ptrdiff_t m_sBoneName = 0x20;
      constexpr std::ptrdiff_t m_sTargetBoneName = 0x28;
      constexpr std::ptrdiff_t m_sMorphChannelName = 0x30;
      constexpr std::ptrdiff_t m_flRemap = 0x38;
    }
    namespace CBoneConstraintPoseSpaceBone {
      constexpr std::ptrdiff_t m_inputList = 0x60;
    }
    namespace CBoneConstraintPoseSpaceBone__Input_t {
      constexpr std::ptrdiff_t m_inputValue = 0x0;
      constexpr std::ptrdiff_t m_outputTransformList = 0x10;
    }
    namespace CBoneConstraintPoseSpaceMorph {
      constexpr std::ptrdiff_t m_sBoneName = 0x20;
      constexpr std::ptrdiff_t m_sAttachmentName = 0x28;
      constexpr std::ptrdiff_t m_outputMorph = 0x30;
      constexpr std::ptrdiff_t m_inputList = 0x48;
      constexpr std::ptrdiff_t m_bClamp = 0x60;
    }
    namespace CBoneConstraintPoseSpaceMorph__Input_t {
      constexpr std::ptrdiff_t m_inputValue = 0x0;
      constexpr std::ptrdiff_t m_outputWeightList = 0x10;
    }
    namespace CBoneConstraintRbf {
      constexpr std::ptrdiff_t m_inputBones = 0x20;
      constexpr std::ptrdiff_t m_outputBones = 0x38;
    }
    namespace CBoneMaskUpdateNode {
      constexpr std::ptrdiff_t m_nWeightListIndex = 0x94;
      constexpr std::ptrdiff_t m_flRootMotionBlend = 0x98;
      constexpr std::ptrdiff_t m_blendSpace = 0x9c;
      constexpr std::ptrdiff_t m_footMotionTiming = 0xa0;
      constexpr std::ptrdiff_t m_bUseBlendScale = 0xa4;
      constexpr std::ptrdiff_t m_blendValueSource = 0xa8;
      constexpr std::ptrdiff_t m_hBlendParameter = 0xac;
    }
    namespace CBonePositionMetricEvaluator {
      constexpr std::ptrdiff_t m_nBoneIndex = 0x50;
    }
    namespace CBoneVelocityMetricEvaluator {
      constexpr std::ptrdiff_t m_nBoneIndex = 0x50;
    }
    namespace CBoolAnimParameter {
      constexpr std::ptrdiff_t m_bDefaultValue = 0x80;
    }
    namespace CCPPScriptComponentUpdater {
      constexpr std::ptrdiff_t m_scriptsToRun = 0x30;
    }
    namespace CCachedPose {
      constexpr std::ptrdiff_t m_transforms = 0x8;
      constexpr std::ptrdiff_t m_morphWeights = 0x20;
      constexpr std::ptrdiff_t m_hSequence = 0x38;
      constexpr std::ptrdiff_t m_flCycle = 0x3c;
    }
    namespace CChoiceUpdateNode {
      constexpr std::ptrdiff_t m_children = 0x60;
      constexpr std::ptrdiff_t m_weights = 0x78;
      constexpr std::ptrdiff_t m_blendTimes = 0x90;
      constexpr std::ptrdiff_t m_choiceMethod = 0xa8;
      constexpr std::ptrdiff_t m_choiceChangeMethod = 0xac;
      constexpr std::ptrdiff_t m_blendMethod = 0xb0;
      constexpr std::ptrdiff_t m_blendTime = 0xb4;
      constexpr std::ptrdiff_t m_bCrossFade = 0xb8;
      constexpr std::ptrdiff_t m_bResetChosen = 0xb9;
      constexpr std::ptrdiff_t m_bDontResetSameSelection = 0xba;
    }
    namespace CChoreoUpdateNode {
    }
    namespace CClothSettingsAnimTag {
      constexpr std::ptrdiff_t m_flStiffness = 0x58;
      constexpr std::ptrdiff_t m_flEaseIn = 0x5c;
      constexpr std::ptrdiff_t m_flEaseOut = 0x60;
      constexpr std::ptrdiff_t m_nVertexSet = 0x68;
    }
    namespace CCompressorGroup {
      constexpr std::ptrdiff_t m_nTotalElementCount = 0x0;
      constexpr std::ptrdiff_t m_szChannelClass = 0x8;
      constexpr std::ptrdiff_t m_szVariableName = 0x20;
      constexpr std::ptrdiff_t m_nType = 0x38;
      constexpr std::ptrdiff_t m_nFlags = 0x50;
      constexpr std::ptrdiff_t m_szGrouping = 0x68;
      constexpr std::ptrdiff_t m_nCompressorIndex = 0x80;
      constexpr std::ptrdiff_t m_szElementNames = 0x98;
      constexpr std::ptrdiff_t m_nElementUniqueID = 0xb0;
      constexpr std::ptrdiff_t m_nElementMask = 0xc8;
      constexpr std::ptrdiff_t m_vectorCompressor = 0xf8;
      constexpr std::ptrdiff_t m_quaternionCompressor = 0x110;
      constexpr std::ptrdiff_t m_intCompressor = 0x128;
      constexpr std::ptrdiff_t m_boolCompressor = 0x140;
      constexpr std::ptrdiff_t m_colorCompressor = 0x158;
      constexpr std::ptrdiff_t m_vector2DCompressor = 0x170;
      constexpr std::ptrdiff_t m_vector4DCompressor = 0x188;
    }
    namespace CConcreteAnimParameter {
      constexpr std::ptrdiff_t m_previewButton = 0x70;
      constexpr std::ptrdiff_t m_eNetworkSetting = 0x74;
      constexpr std::ptrdiff_t m_bUseMostRecentValue = 0x78;
      constexpr std::ptrdiff_t m_bAutoReset = 0x79;
      constexpr std::ptrdiff_t m_bGameWritable = 0x7a;
      constexpr std::ptrdiff_t m_bGraphWritable = 0x7b;
    }
    namespace CConstraintSlave {
      constexpr std::ptrdiff_t m_qBaseOrientation = 0x0;
      constexpr std::ptrdiff_t m_vBasePosition = 0x10;
      constexpr std::ptrdiff_t m_nBoneHash = 0x1c;
      constexpr std::ptrdiff_t m_flWeight = 0x20;
      constexpr std::ptrdiff_t m_sName = 0x28;
    }
    namespace CConstraintTarget {
      constexpr std::ptrdiff_t m_qOffset = 0x20;
      constexpr std::ptrdiff_t m_vOffset = 0x30;
      constexpr std::ptrdiff_t m_nBoneHash = 0x3c;
      constexpr std::ptrdiff_t m_sName = 0x40;
      constexpr std::ptrdiff_t m_flWeight = 0x48;
      constexpr std::ptrdiff_t m_bIsAttachment = 0x59;
    }
    namespace CCurrentRotationVelocityMetricEvaluator {
    }
    namespace CCurrentVelocityMetricEvaluator {
    }
    namespace CCycleBase {
      constexpr std::ptrdiff_t m_flCycle = 0x0;
    }
    namespace CCycleControlClipUpdateNode {
      constexpr std::ptrdiff_t m_tags = 0x60;
      constexpr std::ptrdiff_t m_hSequence = 0x7c;
      constexpr std::ptrdiff_t m_duration = 0x80;
      constexpr std::ptrdiff_t m_valueSource = 0x84;
      constexpr std::ptrdiff_t m_paramIndex = 0x88;
      constexpr std::ptrdiff_t m_bLockWhenWaning = 0x8a;
    }
    namespace CCycleControlUpdateNode {
      constexpr std::ptrdiff_t m_valueSource = 0x70;
      constexpr std::ptrdiff_t m_paramIndex = 0x74;
      constexpr std::ptrdiff_t m_bLockWhenWaning = 0x76;
    }
    namespace CDampedPathAnimMotorUpdater {
      constexpr std::ptrdiff_t m_flAnticipationTime = 0x2c;
      constexpr std::ptrdiff_t m_flMinSpeedScale = 0x30;
      constexpr std::ptrdiff_t m_hAnticipationPosParam = 0x34;
      constexpr std::ptrdiff_t m_hAnticipationHeadingParam = 0x36;
      constexpr std::ptrdiff_t m_flSpringConstant = 0x38;
      constexpr std::ptrdiff_t m_flMinSpringTension = 0x3c;
      constexpr std::ptrdiff_t m_flMaxSpringTension = 0x40;
    }
    namespace CDampedValueComponentUpdater {
      constexpr std::ptrdiff_t m_items = 0x30;
    }
    namespace CDampedValueUpdateItem {
      constexpr std::ptrdiff_t m_damping = 0x0;
      constexpr std::ptrdiff_t m_hParamIn = 0x20;
      constexpr std::ptrdiff_t m_hParamOut = 0x22;
    }
    namespace CDemoSettingsComponentUpdater {
      constexpr std::ptrdiff_t m_settings = 0x30;
    }
    namespace CDirectPlaybackTagData {
      constexpr std::ptrdiff_t m_sequenceName = 0x0;
      constexpr std::ptrdiff_t m_tags = 0x8;
    }
    namespace CDirectPlaybackUpdateNode {
      constexpr std::ptrdiff_t m_bFinishEarly = 0x74;
      constexpr std::ptrdiff_t m_bResetOnFinish = 0x75;
      constexpr std::ptrdiff_t m_allTags = 0x78;
    }
    namespace CDirectionalBlendUpdateNode {
      constexpr std::ptrdiff_t m_hSequences = 0x5c;
      constexpr std::ptrdiff_t m_damping = 0x80;
      constexpr std::ptrdiff_t m_blendValueSource = 0x98;
      constexpr std::ptrdiff_t m_paramIndex = 0x9c;
      constexpr std::ptrdiff_t m_playbackSpeed = 0xa0;
      constexpr std::ptrdiff_t m_duration = 0xa4;
      constexpr std::ptrdiff_t m_bLoop = 0xa8;
      constexpr std::ptrdiff_t m_bLockBlendOnReset = 0xa9;
    }
    namespace CDistanceRemainingMetricEvaluator {
      constexpr std::ptrdiff_t m_flMaxDistance = 0x50;
      constexpr std::ptrdiff_t m_flMinDistance = 0x54;
      constexpr std::ptrdiff_t m_flStartGoalFilterDistance = 0x58;
      constexpr std::ptrdiff_t m_flMaxGoalOvershootScale = 0x5c;
      constexpr std::ptrdiff_t m_bFilterFixedMinDistance = 0x60;
      constexpr std::ptrdiff_t m_bFilterGoalDistance = 0x61;
      constexpr std::ptrdiff_t m_bFilterGoalOvershoot = 0x62;
    }
    namespace CDrawCullingData {
      constexpr std::ptrdiff_t m_ConeAxis = 0x0;
      constexpr std::ptrdiff_t m_ConeCutoff = 0x3;
    }
    namespace CEditableMotionGraph {
    }
    namespace CEmitTagActionUpdater {
      constexpr std::ptrdiff_t m_nTagIndex = 0x18;
      constexpr std::ptrdiff_t m_bIsZeroDuration = 0x1c;
    }
    namespace CEnumAnimParameter {
      constexpr std::ptrdiff_t m_defaultValue = 0x88;
      constexpr std::ptrdiff_t m_enumOptions = 0x90;
      constexpr std::ptrdiff_t m_vecEnumReferenced = 0xa8;
    }
    namespace CExpressionActionUpdater {
      constexpr std::ptrdiff_t m_hParam = 0x18;
      constexpr std::ptrdiff_t m_eParamType = 0x1a;
      constexpr std::ptrdiff_t m_hScript = 0x1c;
    }
    namespace CFlexController {
      constexpr std::ptrdiff_t m_szName = 0x0;
      constexpr std::ptrdiff_t m_szType = 0x8;
      constexpr std::ptrdiff_t min = 0x10;
      constexpr std::ptrdiff_t max = 0x14;
    }
    namespace CFlexDesc {
      constexpr std::ptrdiff_t m_szFacs = 0x0;
    }
    namespace CFlexOp {
      constexpr std::ptrdiff_t m_OpCode = 0x0;
      constexpr std::ptrdiff_t m_Data = 0x4;
    }
    namespace CFlexRule {
      constexpr std::ptrdiff_t m_nFlex = 0x0;
      constexpr std::ptrdiff_t m_FlexOps = 0x8;
    }
    namespace CFloatAnimParameter {
      constexpr std::ptrdiff_t m_fDefaultValue = 0x80;
      constexpr std::ptrdiff_t m_fMinValue = 0x84;
      constexpr std::ptrdiff_t m_fMaxValue = 0x88;
      constexpr std::ptrdiff_t m_bInterpolate = 0x8c;
    }
    namespace CFollowAttachmentUpdateNode {
      constexpr std::ptrdiff_t m_opFixedData = 0x70;
    }
    namespace CFollowPathUpdateNode {
      constexpr std::ptrdiff_t m_flBlendOutTime = 0x74;
      constexpr std::ptrdiff_t m_bBlockNonPathMovement = 0x78;
      constexpr std::ptrdiff_t m_bStopFeetAtGoal = 0x79;
      constexpr std::ptrdiff_t m_bScaleSpeed = 0x7a;
      constexpr std::ptrdiff_t m_flScale = 0x7c;
      constexpr std::ptrdiff_t m_flMinAngle = 0x80;
      constexpr std::ptrdiff_t m_flMaxAngle = 0x84;
      constexpr std::ptrdiff_t m_flSpeedScaleBlending = 0x88;
      constexpr std::ptrdiff_t m_turnDamping = 0x90;
      constexpr std::ptrdiff_t m_facingTarget = 0xa8;
      constexpr std::ptrdiff_t m_hParam = 0xac;
      constexpr std::ptrdiff_t m_flTurnToFaceOffset = 0xb0;
      constexpr std::ptrdiff_t m_bTurnToFace = 0xb4;
    }
    namespace CFollowTargetUpdateNode {
      constexpr std::ptrdiff_t m_opFixedData = 0x70;
      constexpr std::ptrdiff_t m_hParameterPosition = 0x88;
      constexpr std::ptrdiff_t m_hParameterOrientation = 0x8a;
    }
    namespace CFootAdjustmentUpdateNode {
      constexpr std::ptrdiff_t m_clips = 0x78;
      constexpr std::ptrdiff_t m_hBasePoseCacheHandle = 0x90;
      constexpr std::ptrdiff_t m_facingTarget = 0x94;
      constexpr std::ptrdiff_t m_flTurnTimeMin = 0x98;
      constexpr std::ptrdiff_t m_flTurnTimeMax = 0x9c;
      constexpr std::ptrdiff_t m_flStepHeightMax = 0xa0;
      constexpr std::ptrdiff_t m_flStepHeightMaxAngle = 0xa4;
      constexpr std::ptrdiff_t m_bResetChild = 0xa8;
      constexpr std::ptrdiff_t m_bAnimationDriven = 0xa9;
    }
    namespace CFootCycle {
    }
    namespace CFootCycleDefinition {
      constexpr std::ptrdiff_t m_vStancePositionMS = 0x0;
      constexpr std::ptrdiff_t m_vMidpointPositionMS = 0xc;
      constexpr std::ptrdiff_t m_flStanceDirectionMS = 0x18;
      constexpr std::ptrdiff_t m_vToStrideStartPos = 0x1c;
      constexpr std::ptrdiff_t m_stanceCycle = 0x28;
      constexpr std::ptrdiff_t m_footLiftCycle = 0x2c;
      constexpr std::ptrdiff_t m_footOffCycle = 0x30;
      constexpr std::ptrdiff_t m_footStrikeCycle = 0x34;
      constexpr std::ptrdiff_t m_footLandCycle = 0x38;
    }
    namespace CFootCycleMetricEvaluator {
      constexpr std::ptrdiff_t m_footIndices = 0x50;
    }
    namespace CFootDefinition {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_ankleBoneName = 0x8;
      constexpr std::ptrdiff_t m_toeBoneName = 0x10;
      constexpr std::ptrdiff_t m_vBallOffset = 0x18;
      constexpr std::ptrdiff_t m_vHeelOffset = 0x24;
      constexpr std::ptrdiff_t m_flFootLength = 0x30;
      constexpr std::ptrdiff_t m_flBindPoseDirectionMS = 0x34;
      constexpr std::ptrdiff_t m_flTraceHeight = 0x38;
      constexpr std::ptrdiff_t m_flTraceRadius = 0x3c;
    }
    namespace CFootFallAnimTag {
      constexpr std::ptrdiff_t m_foot = 0x58;
    }
    namespace CFootLockUpdateNode {
      constexpr std::ptrdiff_t m_opFixedSettings = 0x70;
      constexpr std::ptrdiff_t m_footSettings = 0xe0;
      constexpr std::ptrdiff_t m_hipShiftDamping = 0xf8;
      constexpr std::ptrdiff_t m_rootHeightDamping = 0x110;
      constexpr std::ptrdiff_t m_flStrideCurveScale = 0x128;
      constexpr std::ptrdiff_t m_flStrideCurveLimitScale = 0x12c;
      constexpr std::ptrdiff_t m_flStepHeightIncreaseScale = 0x130;
      constexpr std::ptrdiff_t m_flStepHeightDecreaseScale = 0x134;
      constexpr std::ptrdiff_t m_flHipShiftScale = 0x138;
      constexpr std::ptrdiff_t m_flBlendTime = 0x13c;
      constexpr std::ptrdiff_t m_flMaxRootHeightOffset = 0x140;
      constexpr std::ptrdiff_t m_flMinRootHeightOffset = 0x144;
      constexpr std::ptrdiff_t m_flTiltPlanePitchSpringStrength = 0x148;
      constexpr std::ptrdiff_t m_flTiltPlaneRollSpringStrength = 0x14c;
      constexpr std::ptrdiff_t m_bApplyFootRotationLimits = 0x150;
      constexpr std::ptrdiff_t m_bApplyHipShift = 0x151;
      constexpr std::ptrdiff_t m_bModulateStepHeight = 0x152;
      constexpr std::ptrdiff_t m_bResetChild = 0x153;
      constexpr std::ptrdiff_t m_bEnableVerticalCurvedPaths = 0x154;
      constexpr std::ptrdiff_t m_bEnableRootHeightDamping = 0x155;
    }
    namespace CFootMotion {
      constexpr std::ptrdiff_t m_strides = 0x0;
      constexpr std::ptrdiff_t m_name = 0x18;
      constexpr std::ptrdiff_t m_bAdditive = 0x20;
    }
    namespace CFootPinningUpdateNode {
      constexpr std::ptrdiff_t m_poseOpFixedData = 0x78;
      constexpr std::ptrdiff_t m_eTimingSource = 0xa8;
      constexpr std::ptrdiff_t m_params = 0xb0;
      constexpr std::ptrdiff_t m_bResetChild = 0xc8;
    }
    namespace CFootPositionMetricEvaluator {
      constexpr std::ptrdiff_t m_footIndices = 0x50;
      constexpr std::ptrdiff_t m_bIgnoreSlope = 0x68;
    }
    namespace CFootStepTriggerUpdateNode {
      constexpr std::ptrdiff_t m_triggers = 0x70;
      constexpr std::ptrdiff_t m_flTolerance = 0x8c;
    }
    namespace CFootStride {
      constexpr std::ptrdiff_t m_definition = 0x0;
      constexpr std::ptrdiff_t m_trajectories = 0x40;
    }
    namespace CFootTrajectories {
      constexpr std::ptrdiff_t m_trajectories = 0x0;
    }
    namespace CFootTrajectory {
      constexpr std::ptrdiff_t m_vOffset = 0x8;
      constexpr std::ptrdiff_t m_flRotationOffset = 0x14;
      constexpr std::ptrdiff_t m_flProgression = 0x18;
    }
    namespace CFootstepLandedAnimTag {
      constexpr std::ptrdiff_t m_FootstepType = 0x58;
      constexpr std::ptrdiff_t m_OverrideSoundName = 0x60;
      constexpr std::ptrdiff_t m_DebugAnimSourceString = 0x68;
      constexpr std::ptrdiff_t m_BoneName = 0x70;
      constexpr std::ptrdiff_t m_footstepJumpPhase = 0x78;
    }
    namespace CFutureFacingMetricEvaluator {
      constexpr std::ptrdiff_t m_flDistance = 0x50;
      constexpr std::ptrdiff_t m_flTime = 0x54;
    }
    namespace CFutureVelocityMetricEvaluator {
      constexpr std::ptrdiff_t m_flDistance = 0x50;
      constexpr std::ptrdiff_t m_flStoppingDistance = 0x54;
      constexpr std::ptrdiff_t m_flTargetSpeed = 0x58;
      constexpr std::ptrdiff_t m_eMode = 0x5c;
    }
    namespace CHandshakeAnimTagBase {
      constexpr std::ptrdiff_t m_bIsDisableTag = 0x50;
    }
    namespace CHitBox {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_sSurfaceProperty = 0x8;
      constexpr std::ptrdiff_t m_sBoneName = 0x10;
      constexpr std::ptrdiff_t m_vMinBounds = 0x18;
      constexpr std::ptrdiff_t m_vMaxBounds = 0x24;
      constexpr std::ptrdiff_t m_flShapeRadius = 0x30;
      constexpr std::ptrdiff_t m_nBoneNameHash = 0x34;
      constexpr std::ptrdiff_t m_nGroupId = 0x38;
      constexpr std::ptrdiff_t m_nShapeType = 0x3c;
      constexpr std::ptrdiff_t m_bTranslationOnly = 0x3d;
      constexpr std::ptrdiff_t m_CRC = 0x40;
      constexpr std::ptrdiff_t m_cRenderColor = 0x44;
      constexpr std::ptrdiff_t m_nHitBoxIndex = 0x48;
    }
    namespace CHitBoxSet {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_nNameHash = 0x8;
      constexpr std::ptrdiff_t m_HitBoxes = 0x10;
      constexpr std::ptrdiff_t m_SourceFilename = 0x28;
    }
    namespace CHitBoxSetList {
      constexpr std::ptrdiff_t m_HitBoxSets = 0x0;
    }
    namespace CHitReactUpdateNode {
      constexpr std::ptrdiff_t m_opFixedSettings = 0x70;
      constexpr std::ptrdiff_t m_triggerParam = 0xbc;
      constexpr std::ptrdiff_t m_hitBoneParam = 0xbe;
      constexpr std::ptrdiff_t m_hitOffsetParam = 0xc0;
      constexpr std::ptrdiff_t m_hitDirectionParam = 0xc2;
      constexpr std::ptrdiff_t m_hitStrengthParam = 0xc4;
      constexpr std::ptrdiff_t m_flMinDelayBetweenHits = 0xc8;
      constexpr std::ptrdiff_t m_bResetChild = 0xcc;
    }
    namespace CInputStreamUpdateNode {
    }
    namespace CIntAnimParameter {
      constexpr std::ptrdiff_t m_defaultValue = 0x80;
      constexpr std::ptrdiff_t m_minValue = 0x84;
      constexpr std::ptrdiff_t m_maxValue = 0x88;
    }
    namespace CJiggleBoneUpdateNode {
      constexpr std::ptrdiff_t m_opFixedData = 0x70;
    }
    namespace CJumpHelperUpdateNode {
      constexpr std::ptrdiff_t m_hTargetParam = 0xb0;
      constexpr std::ptrdiff_t m_flOriginalJumpMovement = 0xb4;
      constexpr std::ptrdiff_t m_flOriginalJumpDuration = 0xc0;
      constexpr std::ptrdiff_t m_flJumpStartCycle = 0xc4;
      constexpr std::ptrdiff_t m_flJumpEndCycle = 0xc8;
      constexpr std::ptrdiff_t m_eCorrectionMethod = 0xcc;
      constexpr std::ptrdiff_t m_bTranslationAxis = 0xd0;
      constexpr std::ptrdiff_t m_bScaleSpeed = 0xd3;
    }
    namespace CLODComponentUpdater {
      constexpr std::ptrdiff_t m_nServerLOD = 0x30;
    }
    namespace CLeafUpdateNode {
    }
    namespace CLeanMatrixUpdateNode {
      constexpr std::ptrdiff_t m_frameCorners = 0x5c;
      constexpr std::ptrdiff_t m_poses = 0x80;
      constexpr std::ptrdiff_t m_damping = 0xa8;
      constexpr std::ptrdiff_t m_blendSource = 0xc0;
      constexpr std::ptrdiff_t m_paramIndex = 0xc4;
      constexpr std::ptrdiff_t m_verticalAxis = 0xc8;
      constexpr std::ptrdiff_t m_horizontalAxis = 0xd4;
      constexpr std::ptrdiff_t m_hSequence = 0xe0;
      constexpr std::ptrdiff_t m_flMaxValue = 0xe4;
      constexpr std::ptrdiff_t m_nSequenceMaxFrame = 0xe8;
    }
    namespace CLookAtUpdateNode {
      constexpr std::ptrdiff_t m_opFixedSettings = 0x70;
      constexpr std::ptrdiff_t m_target = 0x148;
      constexpr std::ptrdiff_t m_paramIndex = 0x14c;
      constexpr std::ptrdiff_t m_weightParamIndex = 0x14e;
      constexpr std::ptrdiff_t m_bResetChild = 0x150;
      constexpr std::ptrdiff_t m_bLockWhenWaning = 0x151;
    }
    namespace CLookComponentUpdater {
      constexpr std::ptrdiff_t m_hLookHeading = 0x34;
      constexpr std::ptrdiff_t m_hLookHeadingNormalized = 0x36;
      constexpr std::ptrdiff_t m_hLookHeadingVelocity = 0x38;
      constexpr std::ptrdiff_t m_hLookPitch = 0x3a;
      constexpr std::ptrdiff_t m_hLookDistance = 0x3c;
      constexpr std::ptrdiff_t m_hLookDirection = 0x3e;
      constexpr std::ptrdiff_t m_hLookTarget = 0x40;
      constexpr std::ptrdiff_t m_hLookTargetWorldSpace = 0x42;
      constexpr std::ptrdiff_t m_bNetworkLookTarget = 0x44;
    }
    namespace CMaterialAttributeAnimTag {
      constexpr std::ptrdiff_t m_AttributeName = 0x58;
      constexpr std::ptrdiff_t m_AttributeType = 0x60;
      constexpr std::ptrdiff_t m_flValue = 0x64;
      constexpr std::ptrdiff_t m_Color = 0x68;
    }
    namespace CMaterialDrawDescriptor {
      constexpr std::ptrdiff_t m_flUvDensity = 0x0;
      constexpr std::ptrdiff_t m_vTintColor = 0x4;
      constexpr std::ptrdiff_t m_flAlpha = 0x10;
      constexpr std::ptrdiff_t m_nNumMeshlets = 0x16;
      constexpr std::ptrdiff_t m_nFirstMeshlet = 0x1c;
      constexpr std::ptrdiff_t m_nAppliedIndexOffset = 0x20;
      constexpr std::ptrdiff_t m_nDepthVertexBufferIndex = 0x24;
      constexpr std::ptrdiff_t m_nMeshletPackedIVBIndex = 0x25;
      constexpr std::ptrdiff_t m_rigidMeshParts = 0x28;
      constexpr std::ptrdiff_t m_nPrimitiveType = 0x38;
      constexpr std::ptrdiff_t m_nBaseVertex = 0x3c;
      constexpr std::ptrdiff_t m_nVertexCount = 0x40;
      constexpr std::ptrdiff_t m_nStartIndex = 0x44;
      constexpr std::ptrdiff_t m_nIndexCount = 0x48;
      constexpr std::ptrdiff_t m_indexBuffer = 0xb0;
      constexpr std::ptrdiff_t m_meshletPackedIVB = 0xd0;
      constexpr std::ptrdiff_t m_material = 0x100;
    }
    namespace CMaterialDrawDescriptor__RigidMeshPart_t {
      constexpr std::ptrdiff_t m_nRigidBLASIndex = 0x0;
      constexpr std::ptrdiff_t m_nBoneIndex = 0x2;
      constexpr std::ptrdiff_t m_nStartIndexOffset = 0x4;
      constexpr std::ptrdiff_t m_nPrimitiveCount = 0x8;
    }
    namespace CMeshletDescriptor {
      constexpr std::ptrdiff_t m_PackedAABB = 0x0;
      constexpr std::ptrdiff_t m_CullingData = 0x8;
      constexpr std::ptrdiff_t m_nVertexOffset = 0xc;
      constexpr std::ptrdiff_t m_nTriangleOffset = 0x10;
      constexpr std::ptrdiff_t m_nVertexCount = 0x14;
      constexpr std::ptrdiff_t m_nTriangleCount = 0x15;
    }
    namespace CModelConfig {
      constexpr std::ptrdiff_t m_ConfigName = 0x0;
      constexpr std::ptrdiff_t m_Elements = 0x8;
      constexpr std::ptrdiff_t m_bTopLevel = 0x20;
      constexpr std::ptrdiff_t m_bActiveInEditorByDefault = 0x21;
    }
    namespace CModelConfigElement {
      constexpr std::ptrdiff_t m_ElementName = 0x8;
      constexpr std::ptrdiff_t m_NestedElements = 0x10;
    }
    namespace CModelConfigElement_AttachedModel {
      constexpr std::ptrdiff_t m_InstanceName = 0x48;
      constexpr std::ptrdiff_t m_EntityClass = 0x50;
      constexpr std::ptrdiff_t m_hModel = 0x58;
      constexpr std::ptrdiff_t m_vOffset = 0x60;
      constexpr std::ptrdiff_t m_aAngOffset = 0x6c;
      constexpr std::ptrdiff_t m_AttachmentName = 0x78;
      constexpr std::ptrdiff_t m_LocalAttachmentOffsetName = 0x80;
      constexpr std::ptrdiff_t m_AttachmentType = 0x88;
      constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x8c;
      constexpr std::ptrdiff_t m_bUserSpecifiedColor = 0x8d;
      constexpr std::ptrdiff_t m_bUserSpecifiedMaterialGroup = 0x8e;
      constexpr std::ptrdiff_t m_BodygroupOnOtherModels = 0x90;
      constexpr std::ptrdiff_t m_MaterialGroupOnOtherModels = 0x98;
    }
    namespace CModelConfigElement_Command {
      constexpr std::ptrdiff_t m_Command = 0x48;
      constexpr std::ptrdiff_t m_Args = 0x50;
    }
    namespace CModelConfigElement_RandomColor {
      constexpr std::ptrdiff_t m_Gradient = 0x48;
    }
    namespace CModelConfigElement_RandomPick {
      constexpr std::ptrdiff_t m_Choices = 0x48;
      constexpr std::ptrdiff_t m_ChoiceWeights = 0x60;
    }
    namespace CModelConfigElement_SetBodygroup {
      constexpr std::ptrdiff_t m_GroupName = 0x48;
      constexpr std::ptrdiff_t m_nChoice = 0x50;
    }
    namespace CModelConfigElement_SetBodygroupOnAttachedModels {
      constexpr std::ptrdiff_t m_GroupName = 0x48;
      constexpr std::ptrdiff_t m_nChoice = 0x50;
    }
    namespace CModelConfigElement_SetMaterialGroup {
      constexpr std::ptrdiff_t m_MaterialGroupName = 0x48;
    }
    namespace CModelConfigElement_SetMaterialGroupOnAttachedModels {
      constexpr std::ptrdiff_t m_MaterialGroupName = 0x48;
    }
    namespace CModelConfigElement_SetRenderColor {
      constexpr std::ptrdiff_t m_Color = 0x48;
    }
    namespace CModelConfigElement_UserPick {
      constexpr std::ptrdiff_t m_Choices = 0x48;
    }
    namespace CModelConfigList {
      constexpr std::ptrdiff_t m_bHideMaterialGroupInTools = 0x0;
      constexpr std::ptrdiff_t m_bHideRenderColorInTools = 0x1;
      constexpr std::ptrdiff_t m_Configs = 0x8;
    }
    namespace CMoodVData {
      constexpr std::ptrdiff_t m_sModelName = 0x0;
      constexpr std::ptrdiff_t m_nMoodType = 0xe0;
      constexpr std::ptrdiff_t m_animationLayers = 0xe8;
    }
    namespace CMorphBundleData {
      constexpr std::ptrdiff_t m_flULeftSrc = 0x0;
      constexpr std::ptrdiff_t m_flVTopSrc = 0x4;
      constexpr std::ptrdiff_t m_offsets = 0x8;
      constexpr std::ptrdiff_t m_ranges = 0x20;
    }
    namespace CMorphConstraint {
      constexpr std::ptrdiff_t m_sTargetMorph = 0x60;
      constexpr std::ptrdiff_t m_nSlaveChannel = 0x68;
      constexpr std::ptrdiff_t m_flMin = 0x6c;
      constexpr std::ptrdiff_t m_flMax = 0x70;
    }
    namespace CMorphData {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_morphRectDatas = 0x8;
    }
    namespace CMorphRectData {
      constexpr std::ptrdiff_t m_nXLeftDst = 0x0;
      constexpr std::ptrdiff_t m_nYTopDst = 0x2;
      constexpr std::ptrdiff_t m_flUWidthSrc = 0x4;
      constexpr std::ptrdiff_t m_flVHeightSrc = 0x8;
      constexpr std::ptrdiff_t m_bundleDatas = 0x10;
    }
    namespace CMorphSetData {
      constexpr std::ptrdiff_t m_nWidth = 0x10;
      constexpr std::ptrdiff_t m_nHeight = 0x14;
      constexpr std::ptrdiff_t m_bundleTypes = 0x18;
      constexpr std::ptrdiff_t m_morphDatas = 0x30;
      constexpr std::ptrdiff_t m_pTextureAtlas = 0x48;
      constexpr std::ptrdiff_t m_FlexDesc = 0x50;
      constexpr std::ptrdiff_t m_FlexControllers = 0x68;
      constexpr std::ptrdiff_t m_FlexRules = 0x80;
    }
    namespace CMotionDataSet {
      constexpr std::ptrdiff_t m_groups = 0x0;
      constexpr std::ptrdiff_t m_nDimensionCount = 0x18;
    }
    namespace CMotionGraph {
      constexpr std::ptrdiff_t m_paramSpans = 0x10;
      constexpr std::ptrdiff_t m_tags = 0x28;
      constexpr std::ptrdiff_t m_pRootNode = 0x40;
      constexpr std::ptrdiff_t m_nParameterCount = 0x48;
      constexpr std::ptrdiff_t m_nConfigStartIndex = 0x4c;
      constexpr std::ptrdiff_t m_nConfigCount = 0x50;
      constexpr std::ptrdiff_t m_bLoop = 0x54;
    }
    namespace CMotionGraphConfig {
      constexpr std::ptrdiff_t m_paramValues = 0x0;
      constexpr std::ptrdiff_t m_flDuration = 0x10;
      constexpr std::ptrdiff_t m_nMotionIndex = 0x14;
      constexpr std::ptrdiff_t m_nSampleStart = 0x18;
      constexpr std::ptrdiff_t m_nSampleCount = 0x1c;
    }
    namespace CMotionGraphGroup {
      constexpr std::ptrdiff_t m_searchDB = 0x0;
      constexpr std::ptrdiff_t m_motionGraphs = 0xb8;
      constexpr std::ptrdiff_t m_motionGraphConfigs = 0xd0;
      constexpr std::ptrdiff_t m_sampleToConfig = 0xe8;
      constexpr std::ptrdiff_t m_hIsActiveScript = 0x100;
    }
    namespace CMotionGraphUpdateNode {
      constexpr std::ptrdiff_t m_pMotionGraph = 0x58;
    }
    namespace CMotionMatchingUpdateNode {
      constexpr std::ptrdiff_t m_dataSet = 0x58;
      constexpr std::ptrdiff_t m_metrics = 0x78;
      constexpr std::ptrdiff_t m_weights = 0x90;
      constexpr std::ptrdiff_t m_bSearchEveryTick = 0xe0;
      constexpr std::ptrdiff_t m_flSearchInterval = 0xe4;
      constexpr std::ptrdiff_t m_bSearchWhenClipEnds = 0xe8;
      constexpr std::ptrdiff_t m_bSearchWhenGoalChanges = 0xe9;
      constexpr std::ptrdiff_t m_blendCurve = 0xec;
      constexpr std::ptrdiff_t m_flSampleRate = 0xf4;
      constexpr std::ptrdiff_t m_flBlendTime = 0xf8;
      constexpr std::ptrdiff_t m_bLockClipWhenWaning = 0xfc;
      constexpr std::ptrdiff_t m_flSelectionThreshold = 0x100;
      constexpr std::ptrdiff_t m_flReselectionTimeWindow = 0x104;
      constexpr std::ptrdiff_t m_bEnableRotationCorrection = 0x108;
      constexpr std::ptrdiff_t m_bGoalAssist = 0x109;
      constexpr std::ptrdiff_t m_flGoalAssistDistance = 0x10c;
      constexpr std::ptrdiff_t m_flGoalAssistTolerance = 0x110;
      constexpr std::ptrdiff_t m_distanceScale_Damping = 0x118;
      constexpr std::ptrdiff_t m_flDistanceScale_OuterRadius = 0x130;
      constexpr std::ptrdiff_t m_flDistanceScale_InnerRadius = 0x134;
      constexpr std::ptrdiff_t m_flDistanceScale_MaxScale = 0x138;
      constexpr std::ptrdiff_t m_flDistanceScale_MinScale = 0x13c;
      constexpr std::ptrdiff_t m_bEnableDistanceScaling = 0x140;
    }
    namespace CMotionMetricEvaluator {
      constexpr std::ptrdiff_t m_means = 0x18;
      constexpr std::ptrdiff_t m_standardDeviations = 0x30;
      constexpr std::ptrdiff_t m_flWeight = 0x48;
      constexpr std::ptrdiff_t m_nDimensionStartIndex = 0x4c;
    }
    namespace CMotionNode {
      constexpr std::ptrdiff_t m_name = 0x18;
      constexpr std::ptrdiff_t m_id = 0x20;
    }
    namespace CMotionNodeBlend1D {
      constexpr std::ptrdiff_t m_blendItems = 0x28;
      constexpr std::ptrdiff_t m_nParamIndex = 0x40;
    }
    namespace CMotionNodeSequence {
      constexpr std::ptrdiff_t m_tags = 0x28;
      constexpr std::ptrdiff_t m_hSequence = 0x40;
      constexpr std::ptrdiff_t m_flPlaybackSpeed = 0x44;
    }
    namespace CMotionSearchDB {
      constexpr std::ptrdiff_t m_rootNode = 0x0;
      constexpr std::ptrdiff_t m_residualQuantizer = 0x80;
      constexpr std::ptrdiff_t m_codeIndices = 0xa0;
    }
    namespace CMotionSearchNode {
      constexpr std::ptrdiff_t m_children = 0x0;
      constexpr std::ptrdiff_t m_quantizer = 0x18;
      constexpr std::ptrdiff_t m_sampleCodes = 0x38;
      constexpr std::ptrdiff_t m_sampleIndices = 0x50;
      constexpr std::ptrdiff_t m_selectableSamples = 0x68;
    }
    namespace CMovementComponentUpdater {
      constexpr std::ptrdiff_t m_motors = 0x30;
      constexpr std::ptrdiff_t m_facingDamping = 0x48;
      constexpr std::ptrdiff_t m_nDefaultMotorIndex = 0x68;
      constexpr std::ptrdiff_t m_flDefaultRunSpeed = 0x6c;
      constexpr std::ptrdiff_t m_bMoveVarsDisabled = 0x70;
      constexpr std::ptrdiff_t m_bNetworkPath = 0x71;
      constexpr std::ptrdiff_t m_bNetworkFacing = 0x72;
      constexpr std::ptrdiff_t m_paramHandles = 0x73;
    }
    namespace CMovementHandshakeAnimTag {
    }
    namespace CMoverUpdateNode {
      constexpr std::ptrdiff_t m_damping = 0x78;
      constexpr std::ptrdiff_t m_facingTarget = 0x90;
      constexpr std::ptrdiff_t m_hMoveVecParam = 0x94;
      constexpr std::ptrdiff_t m_hMoveHeadingParam = 0x96;
      constexpr std::ptrdiff_t m_hTurnToFaceParam = 0x98;
      constexpr std::ptrdiff_t m_flTurnToFaceOffset = 0x9c;
      constexpr std::ptrdiff_t m_flTurnToFaceLimit = 0xa0;
      constexpr std::ptrdiff_t m_bAdditive = 0xa4;
      constexpr std::ptrdiff_t m_bApplyMovement = 0xa5;
      constexpr std::ptrdiff_t m_bOrientMovement = 0xa6;
      constexpr std::ptrdiff_t m_bApplyRotation = 0xa7;
      constexpr std::ptrdiff_t m_bLimitOnly = 0xa8;
    }
    namespace CNPCPhysicsHull {
      constexpr std::ptrdiff_t m_sName = 0x0;
      constexpr std::ptrdiff_t m_eType = 0x8;
      constexpr std::ptrdiff_t m_flCapsuleHeight = 0xc;
      constexpr std::ptrdiff_t m_flCapsuleRadius = 0x10;
      constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x14;
      constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0x20;
      constexpr std::ptrdiff_t m_flGroundBoxHeight = 0x2c;
      constexpr std::ptrdiff_t m_flGroundBoxWidth = 0x30;
    }
    namespace CNewParticleEffect {
      constexpr std::ptrdiff_t m_bShouldSimulateDuringGamePaused = 0x0;
      constexpr std::ptrdiff_t m_bSuppressScreenSpaceEffect = 0x0;
      constexpr std::ptrdiff_t m_bNeedsBBoxUpdate = 0x0;
      constexpr std::ptrdiff_t m_bShouldCheckFoW = 0x0;
      constexpr std::ptrdiff_t m_bCanFreeze = 0x0;
      constexpr std::ptrdiff_t m_bDontRemove = 0x0;
      constexpr std::ptrdiff_t m_bIsAsyncCreate = 0x0;
      constexpr std::ptrdiff_t m_bSimulate = 0x0;
      constexpr std::ptrdiff_t m_bShouldSave = 0x0;
      constexpr std::ptrdiff_t m_bShouldPerformCullCheck = 0x0;
      constexpr std::ptrdiff_t m_bFreezeTargetState = 0x0;
      constexpr std::ptrdiff_t m_bFreezeTransitionActive = 0x0;
      constexpr std::ptrdiff_t m_bForceNoDraw = 0x0;
      constexpr std::ptrdiff_t m_bRemove = 0x0;
      constexpr std::ptrdiff_t m_bAllocated = 0x0;
      constexpr std::ptrdiff_t m_bAutoUpdateBBox = 0x0;
      constexpr std::ptrdiff_t m_bIsFirstFrame = 0x0;
      constexpr std::ptrdiff_t m_pNext = 0x10;
      constexpr std::ptrdiff_t m_pPrev = 0x18;
      constexpr std::ptrdiff_t m_pParticles = 0x20;
      constexpr std::ptrdiff_t m_pDebugName = 0x28;
      constexpr std::ptrdiff_t m_vSortOrigin = 0x40;
      constexpr std::ptrdiff_t m_flScale = 0x4c;
      constexpr std::ptrdiff_t m_hOwner = 0x50;
      constexpr std::ptrdiff_t m_pOwningParticleProperty = 0x58;
      constexpr std::ptrdiff_t m_flFreezeTransitionStart = 0x70;
      constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x74;
      constexpr std::ptrdiff_t m_flFreezeTransitionOverride = 0x78;
      constexpr std::ptrdiff_t m_LastMin = 0x7c;
      constexpr std::ptrdiff_t m_LastMax = 0x88;
      constexpr std::ptrdiff_t m_nSplitScreenUser = 0x94;
      constexpr std::ptrdiff_t m_vecAggregationCenter = 0x98;
      constexpr std::ptrdiff_t m_RefCount = 0xd0;
    }
    namespace CNmAdditiveBlendTask {
    }
    namespace CNmAndNode__CDefinition {
      constexpr std::ptrdiff_t m_conditionNodeIndices = 0x10;
    }
    namespace CNmAnimationPoseNode__CDefinition {
      constexpr std::ptrdiff_t m_nPoseTimeValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_nDataSlotIdx = 0x12;
      constexpr std::ptrdiff_t m_inputTimeRemapRange = 0x14;
      constexpr std::ptrdiff_t m_flUserSpecifiedTime = 0x1c;
      constexpr std::ptrdiff_t m_bUseFramesAsInput = 0x20;
    }
    namespace CNmBitFlags {
      constexpr std::ptrdiff_t m_flags = 0x0;
    }
    namespace CNmBlend1DNode__CDefinition {
      constexpr std::ptrdiff_t m_parameterization = 0x40;
    }
    namespace CNmBlend2DNode__CDefinition {
      constexpr std::ptrdiff_t m_sourceNodeIndices = 0x10;
      constexpr std::ptrdiff_t m_nInputParameterNodeIdx0 = 0x38;
      constexpr std::ptrdiff_t m_nInputParameterNodeIdx1 = 0x3a;
      constexpr std::ptrdiff_t m_values = 0x40;
      constexpr std::ptrdiff_t m_indices = 0xa8;
      constexpr std::ptrdiff_t m_hullIndices = 0xe0;
      constexpr std::ptrdiff_t m_bAllowLooping = 0x108;
    }
    namespace CNmBlendTask {
    }
    namespace CNmBlendTaskBase {
    }
    namespace CNmBodyGroupEvent {
      constexpr std::ptrdiff_t m_groupName = 0x20;
      constexpr std::ptrdiff_t m_nGroupValue = 0x28;
    }
    namespace CNmBoneMaskBlendNode__CDefinition {
      constexpr std::ptrdiff_t m_nSourceMaskNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_nTargetMaskNodeIdx = 0x12;
      constexpr std::ptrdiff_t m_nBlendWeightValueNodeIdx = 0x14;
    }
    namespace CNmBoneMaskNode__CDefinition {
      constexpr std::ptrdiff_t m_boneMaskID = 0x10;
    }
    namespace CNmBoneMaskSelectorNode__CDefinition {
      constexpr std::ptrdiff_t m_defaultMaskNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_parameterValueNodeIdx = 0x12;
      constexpr std::ptrdiff_t m_bSwitchDynamically = 0x14;
      constexpr std::ptrdiff_t m_maskNodeIndices = 0x18;
      constexpr std::ptrdiff_t m_parameterValues = 0x40;
      constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x90;
    }
    namespace CNmBoneMaskSwitchNode__CDefinition {
      constexpr std::ptrdiff_t m_nSwitchValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_nTrueValueNodeIdx = 0x12;
      constexpr std::ptrdiff_t m_nFalseValueNodeIdx = 0x14;
      constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x18;
      constexpr std::ptrdiff_t m_bSwitchDynamically = 0x1c;
    }
    namespace CNmBoneMaskValueNode__CDefinition {
    }
    namespace CNmBoneWeightList {
      constexpr std::ptrdiff_t m_skeletonName = 0x0;
      constexpr std::ptrdiff_t m_boneIDs = 0xe0;
      constexpr std::ptrdiff_t m_weights = 0xf8;
    }
    namespace CNmBoolValueNode__CDefinition {
    }
    namespace CNmCachedBoolNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_mode = 0x14;
    }
    namespace CNmCachedFloatNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_mode = 0x14;
    }
    namespace CNmCachedIDNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_mode = 0x14;
    }
    namespace CNmCachedPoseReadTask {
    }
    namespace CNmCachedPoseWriteTask {
    }
    namespace CNmCachedTargetNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_mode = 0x14;
    }
    namespace CNmCachedVectorNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_mode = 0x14;
    }
    namespace CNmChainLookatNode__CDefinition {
      constexpr std::ptrdiff_t m_chainEndBoneID = 0x18;
      constexpr std::ptrdiff_t m_nLookatTargetNodeIdx = 0x20;
      constexpr std::ptrdiff_t m_nEnabledNodeIdx = 0x22;
      constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x24;
      constexpr std::ptrdiff_t m_nChainLength = 0x28;
      constexpr std::ptrdiff_t m_bIsTargetInWorldSpace = 0x29;
      constexpr std::ptrdiff_t m_chainForwardDir = 0x2c;
    }
    namespace CNmChainLookatTask {
      constexpr std::ptrdiff_t m_nChainEndBoneIdx = 0x58;
      constexpr std::ptrdiff_t m_nNumBonesInChain = 0x5c;
      constexpr std::ptrdiff_t m_chainForwardDir = 0x60;
      constexpr std::ptrdiff_t m_flBlendWeight = 0x6c;
      constexpr std::ptrdiff_t m_flHorizontalAngleLimitDegrees = 0x70;
      constexpr std::ptrdiff_t m_flVerticalAngleLimitDegrees = 0x74;
      constexpr std::ptrdiff_t m_lookatTarget = 0x78;
      constexpr std::ptrdiff_t m_bIsTargetInWorldSpace = 0x84;
      constexpr std::ptrdiff_t m_bIsRunningFromDeserializedData = 0x85;
      constexpr std::ptrdiff_t m_flHorizontalAngleDegrees = 0x88;
      constexpr std::ptrdiff_t m_flVerticalAngleDegrees = 0x8c;
    }
    namespace CNmChainSolverTask {
      constexpr std::ptrdiff_t m_nEffectorBoneIdx = 0x58;
      constexpr std::ptrdiff_t m_nEffectorTargetBoneIdx = 0x5c;
      constexpr std::ptrdiff_t m_targetTransform = 0x60;
      constexpr std::ptrdiff_t m_nNumBonesInChain = 0x80;
      constexpr std::ptrdiff_t m_effectorTarget = 0x90;
      constexpr std::ptrdiff_t m_blendMode = 0xc0;
      constexpr std::ptrdiff_t m_flBlendWeight = 0xc4;
      constexpr std::ptrdiff_t m_bIsTargetInWorldSpace = 0xc8;
      constexpr std::ptrdiff_t m_bIsRunningFromDeserializedData = 0xc9;
      constexpr std::ptrdiff_t m_debugEffectorBoneID = 0xd0;
      constexpr std::ptrdiff_t m_chainStartTransformMS = 0xe0;
      constexpr std::ptrdiff_t m_debugRequestedTargetTransformMS = 0x100;
      constexpr std::ptrdiff_t m_debugTotalChainLength = 0x120;
    }
    namespace CNmClip {
      constexpr std::ptrdiff_t m_skeleton = 0x0;
      constexpr std::ptrdiff_t m_nNumFrames = 0x8;
      constexpr std::ptrdiff_t m_flDuration = 0xc;
      constexpr std::ptrdiff_t m_compressedPoseData = 0x10;
      constexpr std::ptrdiff_t m_trackCompressionSettings = 0x20;
      constexpr std::ptrdiff_t m_compressedPoseOffsets = 0x38;
      constexpr std::ptrdiff_t m_floatCurveIDs = 0x50;
      constexpr std::ptrdiff_t m_floatCurveDefs = 0x68;
      constexpr std::ptrdiff_t m_compressedFloatCurveData = 0x80;
      constexpr std::ptrdiff_t m_compressedFloatCurveOffsets = 0x98;
      constexpr std::ptrdiff_t m_secondaryAnimations = 0xd8;
      constexpr std::ptrdiff_t m_syncTrack = 0xf8;
      constexpr std::ptrdiff_t m_rootMotion = 0x1b0;
      constexpr std::ptrdiff_t m_bIsAdditive = 0x200;
      constexpr std::ptrdiff_t m_modelSpaceSamplingChain = 0x208;
      constexpr std::ptrdiff_t m_modelSpaceBoneSamplingIndices = 0x220;
    }
    namespace CNmClip__ModelSpaceSamplingChainLink_t {
      constexpr std::ptrdiff_t m_nBoneIdx = 0x0;
      constexpr std::ptrdiff_t m_nParentBoneIdx = 0x4;
      constexpr std::ptrdiff_t m_nParentChainLinkIdx = 0x8;
    }
    namespace CNmClipNode__CDefinition {
      constexpr std::ptrdiff_t m_nPlayInReverseValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_nResetTimeValueNodeIdx = 0x12;
      constexpr std::ptrdiff_t m_bSampleRootMotion = 0x14;
      constexpr std::ptrdiff_t m_bAllowLooping = 0x15;
      constexpr std::ptrdiff_t m_nDataSlotIdx = 0x16;
      constexpr std::ptrdiff_t m_graphEvents = 0x18;
      constexpr std::ptrdiff_t m_flSpeedMultiplier = 0x40;
      constexpr std::ptrdiff_t m_nStartSyncEventOffset = 0x44;
    }
    namespace CNmClipReferenceNode__CDefinition {
    }
    namespace CNmClipSelectorNode__CDefinition {
      constexpr std::ptrdiff_t m_optionNodeIndices = 0x10;
      constexpr std::ptrdiff_t m_conditionNodeIndices = 0x28;
    }
    namespace CNmConstBoolNode__CDefinition {
      constexpr std::ptrdiff_t m_bValue = 0x10;
    }
    namespace CNmConstFloatNode__CDefinition {
      constexpr std::ptrdiff_t m_flValue = 0x10;
    }
    namespace CNmConstIDNode__CDefinition {
      constexpr std::ptrdiff_t m_value = 0x10;
    }
    namespace CNmConstTargetNode__CDefinition {
      constexpr std::ptrdiff_t m_value = 0x10;
    }
    namespace CNmConstVectorNode__CDefinition {
      constexpr std::ptrdiff_t m_value = 0x10;
    }
    namespace CNmControlParameterBoolNode__CDefinition {
    }
    namespace CNmControlParameterFloatNode__CDefinition {
    }
    namespace CNmControlParameterIDNode__CDefinition {
    }
    namespace CNmControlParameterTargetNode__CDefinition {
    }
    namespace CNmControlParameterVectorNode__CDefinition {
    }
    namespace CNmCurrentSyncEventIDNode__CDefinition {
      constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10;
    }
    namespace CNmCurrentSyncEventNode__CDefinition {
      constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_infoType = 0x12;
    }
    namespace CNmDurationScaleNode__CDefinition {
    }
    namespace CNmEntityAttributeEventBase {
      constexpr std::ptrdiff_t m_attributeName = 0x20;
    }
    namespace CNmEntityAttributeFloatEvent {
      constexpr std::ptrdiff_t m_FloatValue = 0x38;
    }
    namespace CNmEntityAttributeIntEvent {
      constexpr std::ptrdiff_t m_nIntValue = 0x38;
    }
    namespace CNmEvent {
      constexpr std::ptrdiff_t m_flStartTime = 0x8;
      constexpr std::ptrdiff_t m_flDuration = 0xc;
      constexpr std::ptrdiff_t m_syncID = 0x10;
      constexpr std::ptrdiff_t m_bClientOnly = 0x18;
    }
    namespace CNmExternalPoseNode__CDefinition {
      constexpr std::ptrdiff_t m_bShouldSampleRootMotion = 0x10;
    }
    namespace CNmFixedWeightBoneMaskNode__CDefinition {
      constexpr std::ptrdiff_t m_flBoneWeight = 0x10;
    }
    namespace CNmFloatAngleMathNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_operation = 0x12;
    }
    namespace CNmFloatClampNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_clampRange = 0x14;
    }
    namespace CNmFloatComparisonNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_nComparandValueNodeIdx = 0x12;
      constexpr std::ptrdiff_t m_comparison = 0x14;
      constexpr std::ptrdiff_t m_flEpsilon = 0x18;
      constexpr std::ptrdiff_t m_flComparisonValue = 0x1c;
    }
    namespace CNmFloatCurveEvent {
      constexpr std::ptrdiff_t m_ID = 0x20;
      constexpr std::ptrdiff_t m_curve = 0x28;
    }
    namespace CNmFloatCurveEventNode__CDefinition {
      constexpr std::ptrdiff_t m_eventID = 0x10;
      constexpr std::ptrdiff_t m_nDefaultNodeIdx = 0x18;
      constexpr std::ptrdiff_t m_flDefaultValue = 0x1c;
      constexpr std::ptrdiff_t m_eventConditionRules = 0x20;
    }
    namespace CNmFloatCurveNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_curve = 0x18;
    }
    namespace CNmFloatEaseNode__CDefinition {
      constexpr std::ptrdiff_t m_flEaseTime = 0x10;
      constexpr std::ptrdiff_t m_flStartValue = 0x14;
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x18;
      constexpr std::ptrdiff_t m_easingOp = 0x1a;
      constexpr std::ptrdiff_t m_bUseStartValue = 0x1b;
    }
    namespace CNmFloatMathNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdxA = 0x10;
      constexpr std::ptrdiff_t m_nInputValueNodeIdxB = 0x12;
      constexpr std::ptrdiff_t m_bReturnAbsoluteResult = 0x14;
      constexpr std::ptrdiff_t m_bReturnNegatedResult = 0x15;
      constexpr std::ptrdiff_t m_operator = 0x16;
      constexpr std::ptrdiff_t m_flValueB = 0x18;
    }
    namespace CNmFloatRangeComparisonNode__CDefinition {
      constexpr std::ptrdiff_t m_range = 0x10;
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x18;
      constexpr std::ptrdiff_t m_bIsInclusiveCheck = 0x1a;
    }
    namespace CNmFloatRemapNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_inputRange = 0x14;
      constexpr std::ptrdiff_t m_outputRange = 0x1c;
    }
    namespace CNmFloatRemapNode__RemapRange_t {
      constexpr std::ptrdiff_t m_flBegin = 0x0;
      constexpr std::ptrdiff_t m_flEnd = 0x4;
    }
    namespace CNmFloatSelectorNode__CDefinition {
      constexpr std::ptrdiff_t m_conditionNodeIndices = 0x10;
      constexpr std::ptrdiff_t m_values = 0x38;
      constexpr std::ptrdiff_t m_flDefaultValue = 0x68;
      constexpr std::ptrdiff_t m_flEaseTime = 0x6c;
      constexpr std::ptrdiff_t m_easingOp = 0x70;
    }
    namespace CNmFloatSwitchNode__CDefinition {
      constexpr std::ptrdiff_t m_nSwitchValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_nTrueValueNodeIdx = 0x12;
      constexpr std::ptrdiff_t m_nFalseValueNodeIdx = 0x14;
      constexpr std::ptrdiff_t m_flFalseValue = 0x18;
      constexpr std::ptrdiff_t m_flTrueValue = 0x1c;
    }
    namespace CNmFloatValueNode__CDefinition {
    }
    namespace CNmFollowBoneNode__CDefinition {
      constexpr std::ptrdiff_t m_bone = 0x18;
      constexpr std::ptrdiff_t m_followTargetBone = 0x20;
      constexpr std::ptrdiff_t m_nEnabledNodeIdx = 0x28;
      constexpr std::ptrdiff_t m_mode = 0x2a;
    }
    namespace CNmFollowBoneTask {
    }
    namespace CNmFootEvent {
      constexpr std::ptrdiff_t m_phase = 0x20;
    }
    namespace CNmFootEventConditionNode__CDefinition {
      constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_phaseCondition = 0x12;
      constexpr std::ptrdiff_t m_eventConditionRules = 0x14;
    }
    namespace CNmFootstepEventIDNode__CDefinition {
      constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_eventConditionRules = 0x14;
    }
    namespace CNmFootstepEventPercentageThroughNode__CDefinition {
      constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_phaseCondition = 0x12;
      constexpr std::ptrdiff_t m_eventConditionRules = 0x14;
    }
    namespace CNmFrameSnapEvent {
      constexpr std::ptrdiff_t m_frameSnapMode = 0x20;
    }
    namespace CNmGraphDefinition {
      constexpr std::ptrdiff_t m_variationID = 0x0;
      constexpr std::ptrdiff_t m_skeleton = 0x8;
      constexpr std::ptrdiff_t m_supportedSecondarySkeletons = 0x10;
      constexpr std::ptrdiff_t m_pUserData = 0x28;
      constexpr std::ptrdiff_t m_persistentNodeIndices = 0x30;
      constexpr std::ptrdiff_t m_nRootNodeIdx = 0x48;
      constexpr std::ptrdiff_t m_controlParameterIDs = 0x50;
      constexpr std::ptrdiff_t m_virtualParameterIDs = 0x68;
      constexpr std::ptrdiff_t m_virtualParameterNodeIndices = 0x80;
      constexpr std::ptrdiff_t m_referencedGraphSlots = 0x98;
      constexpr std::ptrdiff_t m_externalGraphSlots = 0xb0;
      constexpr std::ptrdiff_t m_externalPoseSlots = 0xc8;
      constexpr std::ptrdiff_t m_nodePaths = 0x150;
      constexpr std::ptrdiff_t m_resources = 0x168;
    }
    namespace CNmGraphDefinition__ExternalGraphSlot_t {
      constexpr std::ptrdiff_t m_nNodeIdx = 0x0;
      constexpr std::ptrdiff_t m_slotID = 0x8;
    }
    namespace CNmGraphDefinition__ExternalPoseSlot_t {
      constexpr std::ptrdiff_t m_nNodeIdx = 0x0;
      constexpr std::ptrdiff_t m_slotID = 0x8;
    }
    namespace CNmGraphDefinition__ReferencedGraphSlot_t {
      constexpr std::ptrdiff_t m_nNodeIdx = 0x0;
      constexpr std::ptrdiff_t m_dataSlotIdx = 0x2;
    }
    namespace CNmGraphEventConditionNode__CDefinition {
      constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_eventConditionRules = 0x14;
      constexpr std::ptrdiff_t m_conditions = 0x18;
    }
    namespace CNmGraphEventConditionNode__Condition_t {
      constexpr std::ptrdiff_t m_eventID = 0x0;
      constexpr std::ptrdiff_t m_eventTypeCondition = 0x8;
    }
    namespace CNmGraphNode__CDefinition {
      constexpr std::ptrdiff_t m_nNodeIdx = 0x8;
    }
    namespace CNmGraphVariationUserData {
    }
    namespace CNmIDBasedClipSelectorNode__CDefinition {
      constexpr std::ptrdiff_t m_optionNodeIndices = 0x10;
      constexpr std::ptrdiff_t m_optionIDs = 0x28;
      constexpr std::ptrdiff_t m_nParameterNodeIdx = 0x58;
      constexpr std::ptrdiff_t m_nFallbackNodeIdx = 0x5a;
      constexpr std::ptrdiff_t m_bIgnoreInvalidOptions = 0x5c;
    }
    namespace CNmIDBasedSelectorNode__CDefinition {
      constexpr std::ptrdiff_t m_optionNodeIndices = 0x10;
      constexpr std::ptrdiff_t m_optionIDs = 0x28;
      constexpr std::ptrdiff_t m_nParameterNodeIdx = 0x58;
      constexpr std::ptrdiff_t m_nFallbackNodeIdx = 0x5a;
      constexpr std::ptrdiff_t m_bIgnoreInvalidOptions = 0x5c;
    }
    namespace CNmIDComparisonNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_comparison = 0x12;
      constexpr std::ptrdiff_t m_comparisionIDs = 0x18;
    }
    namespace CNmIDEvent {
      constexpr std::ptrdiff_t m_ID = 0x20;
      constexpr std::ptrdiff_t m_secondaryID = 0x28;
    }
    namespace CNmIDEventConditionNode__CDefinition {
      constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_eventConditionRules = 0x14;
      constexpr std::ptrdiff_t m_eventIDs = 0x18;
    }
    namespace CNmIDEventNode__CDefinition {
      constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_eventConditionRules = 0x14;
      constexpr std::ptrdiff_t m_defaultValue = 0x18;
    }
    namespace CNmIDEventPercentageThroughNode__CDefinition {
      constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_eventConditionRules = 0x14;
      constexpr std::ptrdiff_t m_eventID = 0x18;
    }
    namespace CNmIDSelectorNode__CDefinition {
      constexpr std::ptrdiff_t m_conditionNodeIndices = 0x10;
      constexpr std::ptrdiff_t m_values = 0x38;
      constexpr std::ptrdiff_t m_defaultValue = 0x78;
    }
    namespace CNmIDSwitchNode__CDefinition {
      constexpr std::ptrdiff_t m_nSwitchValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_nTrueValueNodeIdx = 0x12;
      constexpr std::ptrdiff_t m_nFalseValueNodeIdx = 0x14;
      constexpr std::ptrdiff_t m_falseValue = 0x18;
      constexpr std::ptrdiff_t m_trueValue = 0x20;
    }
    namespace CNmIDToFloatNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_defaultValue = 0x14;
      constexpr std::ptrdiff_t m_IDs = 0x18;
      constexpr std::ptrdiff_t m_values = 0x48;
    }
    namespace CNmIDValueNode__CDefinition {
    }
    namespace CNmIsExternalGraphSlotFilledNode__CDefinition {
      constexpr std::ptrdiff_t m_nExternalGraphNodeIdx = 0x10;
    }
    namespace CNmIsExternalPoseSetNode__CDefinition {
      constexpr std::ptrdiff_t m_nExternalPoseNodeIdx = 0x10;
    }
    namespace CNmIsInactiveBranchConditionNode__CDefinition {
    }
    namespace CNmIsTargetSetNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10;
    }
    namespace CNmLayerBlendNode__CDefinition {
      constexpr std::ptrdiff_t m_nBaseNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_bOnlySampleBaseRootMotion = 0x12;
      constexpr std::ptrdiff_t m_layerDefinition = 0x18;
    }
    namespace CNmLayerBlendNode__LayerDefinition_t {
      constexpr std::ptrdiff_t m_nInputNodeIdx = 0x0;
      constexpr std::ptrdiff_t m_nWeightValueNodeIdx = 0x2;
      constexpr std::ptrdiff_t m_nBoneMaskValueNodeIdx = 0x4;
      constexpr std::ptrdiff_t m_nRootMotionWeightValueNodeIdx = 0x6;
      constexpr std::ptrdiff_t m_bIsSynchronized = 0x8;
      constexpr std::ptrdiff_t m_bIgnoreEvents = 0x9;
      constexpr std::ptrdiff_t m_bIsStateMachineLayer = 0xa;
      constexpr std::ptrdiff_t m_blendMode = 0xb;
    }
    namespace CNmLegacyEvent {
      constexpr std::ptrdiff_t m_animEventClassName = 0x20;
      constexpr std::ptrdiff_t m_KV = 0x28;
    }
    namespace CNmMaterialAttributeEvent {
      constexpr std::ptrdiff_t m_attributeName = 0x20;
      constexpr std::ptrdiff_t m_attributeNameToken = 0x28;
      constexpr std::ptrdiff_t m_x = 0x30;
      constexpr std::ptrdiff_t m_y = 0x70;
      constexpr std::ptrdiff_t m_z = 0xb0;
      constexpr std::ptrdiff_t m_w = 0xf0;
    }
    namespace CNmModelSpaceBlendTask {
    }
    namespace CNmNotNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10;
    }
    namespace CNmOrNode__CDefinition {
      constexpr std::ptrdiff_t m_conditionNodeIndices = 0x10;
    }
    namespace CNmOrientationWarpEvent {
    }
    namespace CNmOrientationWarpNode__CDefinition {
      constexpr std::ptrdiff_t m_nClipReferenceNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_nTargetValueNodeIdx = 0x12;
      constexpr std::ptrdiff_t m_bIsOffsetNode = 0x14;
      constexpr std::ptrdiff_t m_bIsOffsetRelativeToCharacter = 0x15;
      constexpr std::ptrdiff_t m_bWarpTranslation = 0x16;
      constexpr std::ptrdiff_t m_samplingMode = 0x17;
    }
    namespace CNmOverlayBlendTask {
    }
    namespace CNmParameterizedBlendNode__BlendRange_t {
      constexpr std::ptrdiff_t m_nInputIdx0 = 0x0;
      constexpr std::ptrdiff_t m_nInputIdx1 = 0x2;
      constexpr std::ptrdiff_t m_parameterValueRange = 0x4;
    }
    namespace CNmParameterizedBlendNode__CDefinition {
      constexpr std::ptrdiff_t m_sourceNodeIndices = 0x10;
      constexpr std::ptrdiff_t m_nInputParameterValueNodeIdx = 0x38;
      constexpr std::ptrdiff_t m_bAllowLooping = 0x3a;
    }
    namespace CNmParameterizedBlendNode__Parameterization_t {
      constexpr std::ptrdiff_t m_blendRanges = 0x0;
      constexpr std::ptrdiff_t m_parameterRange = 0x48;
    }
    namespace CNmParameterizedClipSelectorNode__CDefinition {
      constexpr std::ptrdiff_t m_optionNodeIndices = 0x10;
      constexpr std::ptrdiff_t m_optionWeights = 0x28;
      constexpr std::ptrdiff_t m_parameterNodeIdx = 0x38;
      constexpr std::ptrdiff_t m_bIgnoreInvalidOptions = 0x3a;
      constexpr std::ptrdiff_t m_bHasWeightsSet = 0x3b;
    }
    namespace CNmParameterizedSelectorNode__CDefinition {
      constexpr std::ptrdiff_t m_optionNodeIndices = 0x10;
      constexpr std::ptrdiff_t m_optionWeights = 0x28;
      constexpr std::ptrdiff_t m_parameterNodeIdx = 0x38;
      constexpr std::ptrdiff_t m_bIgnoreInvalidOptions = 0x3a;
      constexpr std::ptrdiff_t m_bHasWeightsSet = 0x3b;
    }
    namespace CNmParticleEvent {
      constexpr std::ptrdiff_t m_relevance = 0x20;
      constexpr std::ptrdiff_t m_type = 0x24;
      constexpr std::ptrdiff_t m_hParticleSystem = 0x28;
      constexpr std::ptrdiff_t m_tags = 0x30;
      constexpr std::ptrdiff_t m_bStopImmediately = 0x38;
      constexpr std::ptrdiff_t m_bDetachFromOwner = 0x39;
      constexpr std::ptrdiff_t m_bPlayEndCap = 0x3a;
      constexpr std::ptrdiff_t m_attachmentPoint0 = 0x40;
      constexpr std::ptrdiff_t m_attachmentType0 = 0x48;
      constexpr std::ptrdiff_t m_attachmentPoint1 = 0x50;
      constexpr std::ptrdiff_t m_attachmentType1 = 0x58;
      constexpr std::ptrdiff_t m_config = 0x60;
      constexpr std::ptrdiff_t m_effectForConfig = 0x68;
    }
    namespace CNmPassthroughNode__CDefinition {
      constexpr std::ptrdiff_t m_nChildNodeIdx = 0x10;
    }
    namespace CNmPoseNode__CDefinition {
    }
    namespace CNmPoseTask {
    }
    namespace CNmReferencePoseNode__CDefinition {
    }
    namespace CNmReferencePoseTask {
    }
    namespace CNmReferencedGraphNode__CDefinition {
      constexpr std::ptrdiff_t m_nReferencedGraphIdx = 0x10;
      constexpr std::ptrdiff_t m_nFallbackNodeIdx = 0x12;
    }
    namespace CNmRootMotionData {
      constexpr std::ptrdiff_t m_transforms = 0x0;
      constexpr std::ptrdiff_t m_nNumFrames = 0x18;
      constexpr std::ptrdiff_t m_flAverageLinearVelocity = 0x1c;
      constexpr std::ptrdiff_t m_flAverageAngularVelocityRadians = 0x20;
      constexpr std::ptrdiff_t m_totalDelta = 0x30;
    }
    namespace CNmRootMotionEvent {
      constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x20;
    }
    namespace CNmRootMotionOverrideNode__CDefinition {
      constexpr std::ptrdiff_t m_desiredMovingVelocityNodeIdx = 0x18;
      constexpr std::ptrdiff_t m_desiredFacingDirectionNodeIdx = 0x1a;
      constexpr std::ptrdiff_t m_linearVelocityLimitNodeIdx = 0x1c;
      constexpr std::ptrdiff_t m_angularVelocityLimitNodeIdx = 0x1e;
      constexpr std::ptrdiff_t m_maxLinearVelocity = 0x20;
      constexpr std::ptrdiff_t m_maxAngularVelocityRadians = 0x24;
      constexpr std::ptrdiff_t m_overrideFlags = 0x28;
    }
    namespace CNmSampleTask {
    }
    namespace CNmScaleNode__CDefinition {
      constexpr std::ptrdiff_t m_nMaskNodeIdx = 0x18;
      constexpr std::ptrdiff_t m_nEnableNodeIdx = 0x1a;
    }
    namespace CNmScaleTask {
    }
    namespace CNmSelectorNode__CDefinition {
      constexpr std::ptrdiff_t m_optionNodeIndices = 0x10;
      constexpr std::ptrdiff_t m_conditionNodeIndices = 0x28;
    }
    namespace CNmSkeleton {
      constexpr std::ptrdiff_t m_ID = 0x0;
      constexpr std::ptrdiff_t m_boneIDs = 0x8;
      constexpr std::ptrdiff_t m_parentIndices = 0x18;
      constexpr std::ptrdiff_t m_parentSpaceReferencePose = 0x30;
      constexpr std::ptrdiff_t m_modelSpaceReferencePose = 0x48;
      constexpr std::ptrdiff_t m_numBonesToSampleAtLowLOD = 0x60;
      constexpr std::ptrdiff_t m_maskDefinitions = 0x88;
      constexpr std::ptrdiff_t m_secondarySkeletons = 0xa8;
      constexpr std::ptrdiff_t m_bIsPropSkeleton = 0xb8;
    }
    namespace CNmSkeleton__SecondarySkeleton_t {
      constexpr std::ptrdiff_t m_attachToBoneID = 0x0;
      constexpr std::ptrdiff_t m_skeleton = 0x8;
    }
    namespace CNmSoundEvent {
      constexpr std::ptrdiff_t m_relevance = 0x20;
      constexpr std::ptrdiff_t m_name = 0x28;
      constexpr std::ptrdiff_t m_position = 0x30;
      constexpr std::ptrdiff_t m_attachmentName = 0x38;
      constexpr std::ptrdiff_t m_tags = 0x40;
      constexpr std::ptrdiff_t m_bContinuePlayingSoundAtDurationEnd = 0x48;
      constexpr std::ptrdiff_t m_flDurationInterruptionThreshold = 0x4c;
    }
    namespace CNmSpeedScaleBaseNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x18;
      constexpr std::ptrdiff_t m_flDefaultInputValue = 0x1c;
    }
    namespace CNmSpeedScaleNode__CDefinition {
    }
    namespace CNmStateCompletedConditionNode__CDefinition {
      constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_nTransitionDurationOverrideNodeIdx = 0x12;
      constexpr std::ptrdiff_t m_flTransitionDurationSeconds = 0x14;
    }
    namespace CNmStateMachineNode__CDefinition {
      constexpr std::ptrdiff_t m_stateDefinitions = 0x10;
      constexpr std::ptrdiff_t m_nDefaultStateIndex = 0x130;
    }
    namespace CNmStateMachineNode__StateDefinition_t {
      constexpr std::ptrdiff_t m_nStateNodeIdx = 0x0;
      constexpr std::ptrdiff_t m_nEntryConditionNodeIdx = 0x2;
      constexpr std::ptrdiff_t m_transitionDefinitions = 0x8;
    }
    namespace CNmStateMachineNode__TransitionDefinition_t {
      constexpr std::ptrdiff_t m_nTargetStateIdx = 0x0;
      constexpr std::ptrdiff_t m_nConditionNodeIdx = 0x2;
      constexpr std::ptrdiff_t m_nTransitionNodeIdx = 0x4;
      constexpr std::ptrdiff_t m_bCanBeForced = 0x6;
    }
    namespace CNmStateNode__CDefinition {
      constexpr std::ptrdiff_t m_nChildNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_entryEvents = 0x18;
      constexpr std::ptrdiff_t m_executeEvents = 0x38;
      constexpr std::ptrdiff_t m_exitEvents = 0x58;
      constexpr std::ptrdiff_t m_timedRemainingEvents = 0x78;
      constexpr std::ptrdiff_t m_timedElapsedEvents = 0x90;
      constexpr std::ptrdiff_t m_nLayerWeightNodeIdx = 0xa8;
      constexpr std::ptrdiff_t m_nLayerRootMotionWeightNodeIdx = 0xaa;
      constexpr std::ptrdiff_t m_nLayerBoneMaskNodeIdx = 0xac;
      constexpr std::ptrdiff_t m_bIsOffState = 0xae;
      constexpr std::ptrdiff_t m_bUseActualElapsedTimeInStateForTimedEvents = 0xaf;
    }
    namespace CNmStateNode__TimedEvent_t {
      constexpr std::ptrdiff_t m_ID = 0x0;
      constexpr std::ptrdiff_t m_flTimeValueSeconds = 0x8;
      constexpr std::ptrdiff_t m_comparisionOperator = 0xc;
    }
    namespace CNmSyncEventIndexConditionNode__CDefinition {
      constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_triggerMode = 0x12;
      constexpr std::ptrdiff_t m_syncEventIdx = 0x14;
    }
    namespace CNmSyncTrack {
      constexpr std::ptrdiff_t m_syncEvents = 0x0;
      constexpr std::ptrdiff_t m_nStartEventOffset = 0xa8;
    }
    namespace CNmSyncTrack__EventMarker_t {
      constexpr std::ptrdiff_t m_startTime = 0x0;
      constexpr std::ptrdiff_t m_ID = 0x8;
    }
    namespace CNmSyncTrack__Event_t {
      constexpr std::ptrdiff_t m_ID = 0x0;
      constexpr std::ptrdiff_t m_startTime = 0x8;
      constexpr std::ptrdiff_t m_duration = 0xc;
    }
    namespace CNmTarget {
      constexpr std::ptrdiff_t m_transform = 0x0;
      constexpr std::ptrdiff_t m_boneID = 0x20;
      constexpr std::ptrdiff_t m_bIsBoneTarget = 0x28;
      constexpr std::ptrdiff_t m_bIsUsingBoneSpaceOffsets = 0x29;
      constexpr std::ptrdiff_t m_bHasOffsets = 0x2a;
      constexpr std::ptrdiff_t m_bIsSet = 0x2b;
    }
    namespace CNmTargetInfoNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_infoType = 0x14;
      constexpr std::ptrdiff_t m_bIsWorldSpaceTarget = 0x18;
    }
    namespace CNmTargetOffsetNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_bIsBoneSpaceOffset = 0x12;
      constexpr std::ptrdiff_t m_rotationOffset = 0x20;
      constexpr std::ptrdiff_t m_translationOffset = 0x30;
    }
    namespace CNmTargetPointNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_bIsWorldSpaceTarget = 0x12;
    }
    namespace CNmTargetSelectorNode__CDefinition {
      constexpr std::ptrdiff_t m_optionNodeIndices = 0x10;
      constexpr std::ptrdiff_t m_flOrientationScoreWeight = 0x28;
      constexpr std::ptrdiff_t m_flPositionScoreWeight = 0x2c;
      constexpr std::ptrdiff_t m_parameterNodeIdx = 0x30;
      constexpr std::ptrdiff_t m_bIgnoreInvalidOptions = 0x32;
      constexpr std::ptrdiff_t m_bIsWorldSpaceTarget = 0x33;
    }
    namespace CNmTargetValueNode__CDefinition {
    }
    namespace CNmTargetWarpEvent {
      constexpr std::ptrdiff_t m_rule = 0x20;
      constexpr std::ptrdiff_t m_algorithm = 0x21;
    }
    namespace CNmTargetWarpNode__CDefinition {
      constexpr std::ptrdiff_t m_nClipReferenceNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_nTargetValueNodeIdx = 0x12;
      constexpr std::ptrdiff_t m_samplingMode = 0x14;
      constexpr std::ptrdiff_t m_targetUpdateRule = 0x15;
      constexpr std::ptrdiff_t m_bAlignWithTargetAtLastWarpEvent = 0x16;
      constexpr std::ptrdiff_t m_flSamplingPositionErrorThresholdSq = 0x18;
      constexpr std::ptrdiff_t m_flMaxTangentLength = 0x1c;
      constexpr std::ptrdiff_t m_flLerpFallbackDistanceThreshold = 0x20;
      constexpr std::ptrdiff_t m_flTargetUpdateDistanceThreshold = 0x24;
      constexpr std::ptrdiff_t m_flTargetUpdateAngleThresholdRadians = 0x28;
      constexpr std::ptrdiff_t m_alignmentBoneID = 0x30;
    }
    namespace CNmTimeConditionNode__CDefinition {
      constexpr std::ptrdiff_t m_sourceStateNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x12;
      constexpr std::ptrdiff_t m_flComparand = 0x14;
      constexpr std::ptrdiff_t m_type = 0x18;
      constexpr std::ptrdiff_t m_operator = 0x19;
    }
    namespace CNmTransitionEvent {
      constexpr std::ptrdiff_t m_rule = 0x20;
      constexpr std::ptrdiff_t m_ID = 0x28;
    }
    namespace CNmTransitionEventConditionNode__CDefinition {
      constexpr std::ptrdiff_t m_requireRuleID = 0x10;
      constexpr std::ptrdiff_t m_eventConditionRules = 0x18;
      constexpr std::ptrdiff_t m_nSourceStateNodeIdx = 0x1c;
      constexpr std::ptrdiff_t m_ruleCondition = 0x1e;
    }
    namespace CNmTransitionNode__CDefinition {
      constexpr std::ptrdiff_t m_nTargetStateNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_nDurationOverrideNodeIdx = 0x12;
      constexpr std::ptrdiff_t m_timeOffsetOverrideNodeIdx = 0x14;
      constexpr std::ptrdiff_t m_startBoneMaskNodeIdx = 0x16;
      constexpr std::ptrdiff_t m_flDuration = 0x18;
      constexpr std::ptrdiff_t m_boneMaskBlendInTimePercentage = 0x1c;
      constexpr std::ptrdiff_t m_flTimeOffset = 0x20;
      constexpr std::ptrdiff_t m_transitionOptions = 0x24;
      constexpr std::ptrdiff_t m_targetSyncIDNodeIdx = 0x28;
      constexpr std::ptrdiff_t m_blendWeightEasing = 0x2a;
      constexpr std::ptrdiff_t m_rootMotionBlend = 0x2b;
    }
    namespace CNmTwoBoneIKNode__CDefinition {
      constexpr std::ptrdiff_t m_effectorBoneID = 0x18;
      constexpr std::ptrdiff_t m_nEffectorTargetNodeIdx = 0x20;
      constexpr std::ptrdiff_t m_nEnabledNodeIdx = 0x22;
      constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x24;
      constexpr std::ptrdiff_t m_blendMode = 0x28;
      constexpr std::ptrdiff_t m_bIsTargetInWorldSpace = 0x29;
      constexpr std::ptrdiff_t m_flReferencePoseTwistWeight = 0x2c;
    }
    namespace CNmTwoBoneIKTask {
      constexpr std::ptrdiff_t m_nEffectorBoneIdx = 0x58;
      constexpr std::ptrdiff_t m_nEffectorTargetBoneIdx = 0x5c;
      constexpr std::ptrdiff_t m_targetTransform = 0x60;
      constexpr std::ptrdiff_t m_effectorTarget = 0x80;
      constexpr std::ptrdiff_t m_blendMode = 0xb0;
      constexpr std::ptrdiff_t m_flBlendWeight = 0xb4;
      constexpr std::ptrdiff_t m_bIsTargetInWorldSpace = 0xb8;
      constexpr std::ptrdiff_t m_bIsRunningFromDeserializedData = 0xb9;
      constexpr std::ptrdiff_t m_flReferencePoseTwistWeight = 0xbc;
      constexpr std::ptrdiff_t m_debugEffectorBoneID = 0xc0;
    }
    namespace CNmValueNode__CDefinition {
    }
    namespace CNmVectorCreateNode__CDefinition {
      constexpr std::ptrdiff_t m_inputVectorValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_inputValueXNodeIdx = 0x12;
      constexpr std::ptrdiff_t m_inputValueYNodeIdx = 0x14;
      constexpr std::ptrdiff_t m_inputValueZNodeIdx = 0x16;
    }
    namespace CNmVectorInfoNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10;
      constexpr std::ptrdiff_t m_desiredInfo = 0x12;
    }
    namespace CNmVectorNegateNode__CDefinition {
      constexpr std::ptrdiff_t m_nInputValueNodeIdx = 0x10;
    }
    namespace CNmVectorValueNode__CDefinition {
    }
    namespace CNmVelocityBasedSpeedScaleNode__CDefinition {
    }
    namespace CNmVelocityBlendNode__CDefinition {
    }
    namespace CNmVirtualParameterBoneMaskNode__CDefinition {
      constexpr std::ptrdiff_t m_nChildNodeIdx = 0x10;
    }
    namespace CNmVirtualParameterBoolNode__CDefinition {
      constexpr std::ptrdiff_t m_nChildNodeIdx = 0x10;
    }
    namespace CNmVirtualParameterFloatNode__CDefinition {
      constexpr std::ptrdiff_t m_nChildNodeIdx = 0x10;
    }
    namespace CNmVirtualParameterIDNode__CDefinition {
      constexpr std::ptrdiff_t m_nChildNodeIdx = 0x10;
    }
    namespace CNmVirtualParameterTargetNode__CDefinition {
      constexpr std::ptrdiff_t m_nChildNodeIdx = 0x10;
    }
    namespace CNmVirtualParameterVectorNode__CDefinition {
      constexpr std::ptrdiff_t m_nChildNodeIdx = 0x10;
    }
    namespace CNmZeroPoseNode__CDefinition {
    }
    namespace CNmZeroPoseTask {
    }
    namespace COrientConstraint {
    }
    namespace COrientationWarpUpdateNode {
      constexpr std::ptrdiff_t m_eMode = 0x74;
      constexpr std::ptrdiff_t m_hTargetParam = 0x78;
      constexpr std::ptrdiff_t m_hTargetPositionParam = 0x7a;
      constexpr std::ptrdiff_t m_hFallbackTargetPositionParam = 0x7c;
      constexpr std::ptrdiff_t m_eTargetOffsetMode = 0x80;
      constexpr std::ptrdiff_t m_flTargetOffset = 0x84;
      constexpr std::ptrdiff_t m_hTargetOffsetParam = 0x88;
      constexpr std::ptrdiff_t m_damping = 0x90;
      constexpr std::ptrdiff_t m_eRootMotionSource = 0xa8;
      constexpr std::ptrdiff_t m_flMaxRootMotionScale = 0xac;
      constexpr std::ptrdiff_t m_bEnablePreferredRotationDirection = 0xb0;
      constexpr std::ptrdiff_t m_ePreferredRotationDirection = 0xb4;
      constexpr std::ptrdiff_t m_flPreferredRotationThreshold = 0xb8;
    }
    namespace CPairedSequenceComponentUpdater {
    }
    namespace CPairedSequenceUpdateNode {
      constexpr std::ptrdiff_t m_sPairedSequenceRole = 0x78;
    }
    namespace CParamSpanUpdater {
      constexpr std::ptrdiff_t m_spans = 0x0;
    }
    namespace CParentConstraint {
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
    namespace CParticleCollectionFloatInput {
    }
    namespace CParticleCollectionRendererFloatInput {
    }
    namespace CParticleCollectionRendererVecInput {
    }
    namespace CParticleCollectionVecInput {
    }
    namespace CParticleFloatInput {
      constexpr std::ptrdiff_t m_nType = 0x10;
      constexpr std::ptrdiff_t m_nMapType = 0x14;
      constexpr std::ptrdiff_t m_flLiteralValue = 0x18;
      constexpr std::ptrdiff_t m_NamedValue = 0x20;
      constexpr std::ptrdiff_t m_nControlPoint = 0x60;
      constexpr std::ptrdiff_t m_nScalarAttribute = 0x64;
      constexpr std::ptrdiff_t m_nVectorAttribute = 0x68;
      constexpr std::ptrdiff_t m_nVectorComponent = 0x6c;
      constexpr std::ptrdiff_t m_bReverseOrder = 0x70;
      constexpr std::ptrdiff_t m_flRandomMin = 0x74;
      constexpr std::ptrdiff_t m_flRandomMax = 0x78;
      constexpr std::ptrdiff_t m_bHasRandomSignFlip = 0x7c;
      constexpr std::ptrdiff_t m_nRandomSeed = 0x80;
      constexpr std::ptrdiff_t m_nRandomMode = 0x84;
      constexpr std::ptrdiff_t m_strSnapshotSubset = 0x90;
      constexpr std::ptrdiff_t m_flLOD0 = 0x98;
      constexpr std::ptrdiff_t m_flLOD1 = 0x9c;
      constexpr std::ptrdiff_t m_flLOD2 = 0xa0;
      constexpr std::ptrdiff_t m_flLOD3 = 0xa4;
      constexpr std::ptrdiff_t m_nNoiseInputVectorAttribute = 0xa8;
      constexpr std::ptrdiff_t m_flNoiseOutputMin = 0xac;
      constexpr std::ptrdiff_t m_flNoiseOutputMax = 0xb0;
      constexpr std::ptrdiff_t m_flNoiseScale = 0xb4;
      constexpr std::ptrdiff_t m_vecNoiseOffsetRate = 0xb8;
      constexpr std::ptrdiff_t m_flNoiseOffset = 0xc4;
      constexpr std::ptrdiff_t m_nNoiseOctaves = 0xc8;
      constexpr std::ptrdiff_t m_nNoiseTurbulence = 0xcc;
      constexpr std::ptrdiff_t m_nNoiseType = 0xd0;
      constexpr std::ptrdiff_t m_nNoiseModifier = 0xd4;
      constexpr std::ptrdiff_t m_flNoiseTurbulenceScale = 0xd8;
      constexpr std::ptrdiff_t m_flNoiseTurbulenceMix = 0xdc;
      constexpr std::ptrdiff_t m_flNoiseImgPreviewScale = 0xe0;
      constexpr std::ptrdiff_t m_bNoiseImgPreviewLive = 0xe4;
      constexpr std::ptrdiff_t m_flNoCameraFallback = 0xf0;
      constexpr std::ptrdiff_t m_bUseBoundsCenter = 0xf4;
      constexpr std::ptrdiff_t m_nInputMode = 0xf8;
      constexpr std::ptrdiff_t m_flMultFactor = 0xfc;
      constexpr std::ptrdiff_t m_flInput0 = 0x100;
      constexpr std::ptrdiff_t m_flInput1 = 0x104;
      constexpr std::ptrdiff_t m_flOutput0 = 0x108;
      constexpr std::ptrdiff_t m_flOutput1 = 0x10c;
      constexpr std::ptrdiff_t m_flNotchedRangeMin = 0x110;
      constexpr std::ptrdiff_t m_flNotchedRangeMax = 0x114;
      constexpr std::ptrdiff_t m_flNotchedOutputOutside = 0x118;
      constexpr std::ptrdiff_t m_flNotchedOutputInside = 0x11c;
      constexpr std::ptrdiff_t m_nRoundType = 0x120;
      constexpr std::ptrdiff_t m_nBiasType = 0x124;
      constexpr std::ptrdiff_t m_flBiasParameter = 0x128;
      constexpr std::ptrdiff_t m_Curve = 0x130;
    }
    namespace CParticleInput {
    }
    namespace CParticleModelInput {
      constexpr std::ptrdiff_t m_nType = 0x10;
      constexpr std::ptrdiff_t m_NamedValue = 0x18;
      constexpr std::ptrdiff_t m_nControlPoint = 0x58;
    }
    namespace CParticleProperty {
    }
    namespace CParticleRemapFloatInput {
    }
    namespace CParticleTransformInput {
      constexpr std::ptrdiff_t m_nType = 0x10;
      constexpr std::ptrdiff_t m_NamedValue = 0x18;
      constexpr std::ptrdiff_t m_bFollowNamedValue = 0x58;
      constexpr std::ptrdiff_t m_bSupportsDisabled = 0x59;
      constexpr std::ptrdiff_t m_bUseOrientation = 0x5a;
      constexpr std::ptrdiff_t m_nControlPoint = 0x5c;
      constexpr std::ptrdiff_t m_nControlPointRangeMax = 0x60;
      constexpr std::ptrdiff_t m_flEndCPGrowthTime = 0x64;
    }
    namespace CParticleVariableRef {
      constexpr std::ptrdiff_t m_variableName = 0x0;
      constexpr std::ptrdiff_t m_variableType = 0x38;
    }
    namespace CParticleVecInput {
      constexpr std::ptrdiff_t m_nType = 0x10;
      constexpr std::ptrdiff_t m_vLiteralValue = 0x14;
      constexpr std::ptrdiff_t m_LiteralColor = 0x20;
      constexpr std::ptrdiff_t m_NamedValue = 0x28;
      constexpr std::ptrdiff_t m_bFollowNamedValue = 0x68;
      constexpr std::ptrdiff_t m_nVectorAttribute = 0x6c;
      constexpr std::ptrdiff_t m_vVectorAttributeScale = 0x70;
      constexpr std::ptrdiff_t m_nControlPoint = 0x7c;
      constexpr std::ptrdiff_t m_nDeltaControlPoint = 0x80;
      constexpr std::ptrdiff_t m_vCPValueScale = 0x84;
      constexpr std::ptrdiff_t m_vCPRelativePosition = 0x90;
      constexpr std::ptrdiff_t m_vCPRelativeDir = 0x9c;
      constexpr std::ptrdiff_t m_FloatComponentX = 0xa8;
      constexpr std::ptrdiff_t m_FloatComponentY = 0x218;
      constexpr std::ptrdiff_t m_FloatComponentZ = 0x388;
      constexpr std::ptrdiff_t m_FloatInterp = 0x4f8;
      constexpr std::ptrdiff_t m_flInterpInput0 = 0x668;
      constexpr std::ptrdiff_t m_flInterpInput1 = 0x66c;
      constexpr std::ptrdiff_t m_vInterpOutput0 = 0x670;
      constexpr std::ptrdiff_t m_vInterpOutput1 = 0x67c;
      constexpr std::ptrdiff_t m_Gradient = 0x688;
      constexpr std::ptrdiff_t m_vRandomMin = 0x6a0;
      constexpr std::ptrdiff_t m_vRandomMax = 0x6ac;
    }
    namespace CPathAnimMotorUpdater {
    }
    namespace CPathAnimMotorUpdaterBase {
      constexpr std::ptrdiff_t m_bLockToPath = 0x20;
    }
    namespace CPathHelperUpdateNode {
      constexpr std::ptrdiff_t m_flStoppingRadius = 0x70;
      constexpr std::ptrdiff_t m_flStoppingSpeedScale = 0x74;
    }
    namespace CPathMetricEvaluator {
      constexpr std::ptrdiff_t m_pathTimeSamples = 0x50;
      constexpr std::ptrdiff_t m_flDistance = 0x68;
      constexpr std::ptrdiff_t m_bExtrapolateMovement = 0x6c;
      constexpr std::ptrdiff_t m_flMinExtrapolationSpeed = 0x70;
    }
    namespace CPerParticleFloatInput {
    }
    namespace CPerParticleVecInput {
    }
    namespace CPhysSurfaceProperties {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_nameHash = 0x8;
      constexpr std::ptrdiff_t m_baseNameHash = 0xc;
      constexpr std::ptrdiff_t m_bHidden = 0x18;
      constexpr std::ptrdiff_t m_description = 0x20;
      constexpr std::ptrdiff_t m_physics = 0x28;
      constexpr std::ptrdiff_t m_vehicleParams = 0x40;
      constexpr std::ptrdiff_t m_audioSounds = 0x48;
      constexpr std::ptrdiff_t m_audioParams = 0xa8;
    }
    namespace CPhysSurfacePropertiesAudio {
      constexpr std::ptrdiff_t m_reflectivity = 0x0;
      constexpr std::ptrdiff_t m_hardnessFactor = 0x4;
      constexpr std::ptrdiff_t m_roughnessFactor = 0x8;
      constexpr std::ptrdiff_t m_roughThreshold = 0xc;
      constexpr std::ptrdiff_t m_hardThreshold = 0x10;
      constexpr std::ptrdiff_t m_hardVelocityThreshold = 0x14;
      constexpr std::ptrdiff_t m_flStaticImpactVolume = 0x18;
      constexpr std::ptrdiff_t m_flOcclusionFactor = 0x1c;
    }
    namespace CPhysSurfacePropertiesPhysics {
      constexpr std::ptrdiff_t m_friction = 0x0;
      constexpr std::ptrdiff_t m_elasticity = 0x4;
      constexpr std::ptrdiff_t m_density = 0x8;
      constexpr std::ptrdiff_t m_thickness = 0xc;
      constexpr std::ptrdiff_t m_softContactFrequency = 0x10;
      constexpr std::ptrdiff_t m_softContactDampingRatio = 0x14;
    }
    namespace CPhysSurfacePropertiesSoundNames {
      constexpr std::ptrdiff_t m_impactSoft = 0x0;
      constexpr std::ptrdiff_t m_impactHard = 0x8;
      constexpr std::ptrdiff_t m_scrapeSmooth = 0x10;
      constexpr std::ptrdiff_t m_scrapeRough = 0x18;
      constexpr std::ptrdiff_t m_bulletImpact = 0x20;
      constexpr std::ptrdiff_t m_rolling = 0x28;
      constexpr std::ptrdiff_t m_break = 0x30;
      constexpr std::ptrdiff_t m_strain = 0x38;
      constexpr std::ptrdiff_t m_meleeImpact = 0x40;
      constexpr std::ptrdiff_t m_pushOff = 0x48;
      constexpr std::ptrdiff_t m_skidStop = 0x50;
      constexpr std::ptrdiff_t m_resonant = 0x58;
    }
    namespace CPhysSurfacePropertiesVehicle {
      constexpr std::ptrdiff_t m_wheelDrag = 0x0;
      constexpr std::ptrdiff_t m_wheelFrictionScale = 0x4;
    }
    namespace CPlayerInputAnimMotorUpdater {
      constexpr std::ptrdiff_t m_sampleTimes = 0x20;
      constexpr std::ptrdiff_t m_flSpringConstant = 0x3c;
      constexpr std::ptrdiff_t m_flAnticipationDistance = 0x40;
      constexpr std::ptrdiff_t m_hAnticipationPosParam = 0x44;
      constexpr std::ptrdiff_t m_hAnticipationHeadingParam = 0x46;
      constexpr std::ptrdiff_t m_bUseAcceleration = 0x48;
    }
    namespace CPointConstraint {
    }
    namespace CPoseHandle {
      constexpr std::ptrdiff_t m_nIndex = 0x0;
      constexpr std::ptrdiff_t m_eType = 0x2;
    }
    namespace CProductQuantizer {
      constexpr std::ptrdiff_t m_subQuantizers = 0x0;
      constexpr std::ptrdiff_t m_nDimensions = 0x18;
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
    namespace CPulseGraphExecutionHistory {
      constexpr std::ptrdiff_t m_nInstanceID = 0x0;
      constexpr std::ptrdiff_t m_strFileName = 0x8;
      constexpr std::ptrdiff_t m_vecHistory = 0x10;
      constexpr std::ptrdiff_t m_mapCellDesc = 0x28;
      constexpr std::ptrdiff_t m_mapCursorDesc = 0x50;
    }
    namespace CPulseMathlib {
    }
    namespace CPulseRuntimeMethodArg {
      constexpr std::ptrdiff_t m_Name = 0x0;
      constexpr std::ptrdiff_t m_Description = 0x38;
      constexpr std::ptrdiff_t m_Type = 0x40;
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
    namespace CPulse_Chunk {
      constexpr std::ptrdiff_t m_Instructions = 0x0;
      constexpr std::ptrdiff_t m_Registers = 0x10;
      constexpr std::ptrdiff_t m_InstructionDebugInfos = 0x20;
    }
    namespace CPulse_Constant {
      constexpr std::ptrdiff_t m_Type = 0x0;
      constexpr std::ptrdiff_t m_Value = 0x18;
    }
    namespace CPulse_DomainValue {
      constexpr std::ptrdiff_t m_nType = 0x0;
      constexpr std::ptrdiff_t m_Value = 0x8;
      constexpr std::ptrdiff_t m_RequiredRuntimeType = 0x10;
    }
    namespace CPulse_InstructionDebug {
      constexpr std::ptrdiff_t m_nFlowNodeID = 0x0;
      constexpr std::ptrdiff_t m_nValueNodeID = 0x4;
      constexpr std::ptrdiff_t m_SequencePointName = 0x8;
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
    namespace CPulse_OutputConnection {
      constexpr std::ptrdiff_t m_SourceOutput = 0x0;
      constexpr std::ptrdiff_t m_TargetEntity = 0x10;
      constexpr std::ptrdiff_t m_TargetInput = 0x20;
      constexpr std::ptrdiff_t m_Param = 0x30;
    }
    namespace CPulse_PublicOutput {
      constexpr std::ptrdiff_t m_Name = 0x0;
      constexpr std::ptrdiff_t m_Description = 0x10;
      constexpr std::ptrdiff_t m_Args = 0x18;
    }
    namespace CPulse_RegisterInfo {
      constexpr std::ptrdiff_t m_nReg = 0x0;
      constexpr std::ptrdiff_t m_Type = 0x8;
      constexpr std::ptrdiff_t m_OriginName = 0x20;
      constexpr std::ptrdiff_t m_nWrittenByInstruction = 0x58;
      constexpr std::ptrdiff_t m_nLastReadByInstruction = 0x5c;
    }
    namespace CPulse_ResumePoint {
    }
    namespace CPulse_Variable {
      constexpr std::ptrdiff_t m_Name = 0x0;
      constexpr std::ptrdiff_t m_Description = 0x10;
      constexpr std::ptrdiff_t m_Type = 0x18;
      constexpr std::ptrdiff_t m_DefaultValue = 0x30;
      constexpr std::ptrdiff_t m_nKeysSource = 0x44;
      constexpr std::ptrdiff_t m_bIsPublicBlackboardVariable = 0x48;
      constexpr std::ptrdiff_t m_bIsObservable = 0x49;
      constexpr std::ptrdiff_t m_nEditorNodeID = 0x4c;
    }
    namespace CQuaternionAnimParameter {
      constexpr std::ptrdiff_t m_defaultValue = 0x80;
      constexpr std::ptrdiff_t m_bInterpolate = 0x90;
    }
    namespace CRagdollAnimTag {
      constexpr std::ptrdiff_t m_profileName = 0x58;
    }
    namespace CRagdollComponentUpdater {
      constexpr std::ptrdiff_t m_ragdollNodePaths = 0x30;
      constexpr std::ptrdiff_t m_followAttachmentNodePaths = 0x48;
      constexpr std::ptrdiff_t m_boneIndices = 0x60;
      constexpr std::ptrdiff_t m_boneNames = 0x78;
      constexpr std::ptrdiff_t m_weightLists = 0x90;
      constexpr std::ptrdiff_t m_boneToWeightIndices = 0xa8;
      constexpr std::ptrdiff_t m_flSpringFrequencyMin = 0xc0;
      constexpr std::ptrdiff_t m_flSpringFrequencyMax = 0xc4;
      constexpr std::ptrdiff_t m_flMaxStretch = 0xc8;
      constexpr std::ptrdiff_t m_bSolidCollisionAtZeroWeight = 0xcc;
    }
    namespace CRagdollUpdateNode {
      constexpr std::ptrdiff_t m_nWeightListIndex = 0x70;
      constexpr std::ptrdiff_t m_poseControlMethod = 0x74;
    }
    namespace CRangeFloat {
      constexpr std::ptrdiff_t m_pValue = 0x0;
    }
    namespace CRemapValueComponentUpdater {
      constexpr std::ptrdiff_t m_items = 0x30;
    }
    namespace CRemapValueUpdateItem {
      constexpr std::ptrdiff_t m_hParamIn = 0x0;
      constexpr std::ptrdiff_t m_hParamOut = 0x2;
      constexpr std::ptrdiff_t m_flMinInputValue = 0x4;
      constexpr std::ptrdiff_t m_flMaxInputValue = 0x8;
      constexpr std::ptrdiff_t m_flMinOutputValue = 0xc;
      constexpr std::ptrdiff_t m_flMaxOutputValue = 0x10;
    }
    namespace CRenderBufferBinding {
      constexpr std::ptrdiff_t m_hBuffer = 0x0;
      constexpr std::ptrdiff_t m_nBindOffsetBytes = 0x10;
    }
    namespace CRenderGroom {
      constexpr std::ptrdiff_t m_hairs = 0x0;
      constexpr std::ptrdiff_t m_hairPositionOffsets = 0x18;
      constexpr std::ptrdiff_t m_hSimParamsMat = 0x40;
      constexpr std::ptrdiff_t m_strandSegmentCountHist = 0x48;
      constexpr std::ptrdiff_t m_nMaxSegmentsPerHairStrand = 0x78;
      constexpr std::ptrdiff_t m_nGuideHairCount = 0x7c;
      constexpr std::ptrdiff_t m_nHairCount = 0x80;
      constexpr std::ptrdiff_t m_nTotalVertexCount = 0x84;
      constexpr std::ptrdiff_t m_nTotalSegmentCount = 0x88;
      constexpr std::ptrdiff_t m_nGroomGroupID = 0x8c;
      constexpr std::ptrdiff_t m_nAttachBoneIdx = 0x90;
      constexpr std::ptrdiff_t m_nAttachMeshIdx = 0x94;
      constexpr std::ptrdiff_t m_nAttachMeshDrawCallIdx = 0x98;
      constexpr std::ptrdiff_t m_bEnableSimulation = 0x9c;
    }
    namespace CRenderMesh {
      constexpr std::ptrdiff_t m_sceneObjects = 0x10;
      constexpr std::ptrdiff_t m_constraints = 0xb8;
      constexpr std::ptrdiff_t m_skeleton = 0xc8;
      constexpr std::ptrdiff_t m_bUseUV2ForCharting = 0x1d4;
      constexpr std::ptrdiff_t m_bEmbeddedMapMesh = 0x1d5;
      constexpr std::ptrdiff_t m_meshDeformParams = 0x1f8;
      constexpr std::ptrdiff_t m_pGroomData = 0x208;
    }
    namespace CRenderSkeleton {
      constexpr std::ptrdiff_t m_bones = 0x0;
      constexpr std::ptrdiff_t m_boneParents = 0x30;
      constexpr std::ptrdiff_t m_nBoneWeightCount = 0x48;
    }
    namespace CRootUpdateNode {
    }
    namespace CSceneObjectData {
      constexpr std::ptrdiff_t m_vMinBounds = 0x0;
      constexpr std::ptrdiff_t m_vMaxBounds = 0xc;
      constexpr std::ptrdiff_t m_drawCalls = 0x18;
      constexpr std::ptrdiff_t m_drawBounds = 0x28;
      constexpr std::ptrdiff_t m_meshlets = 0x38;
      constexpr std::ptrdiff_t m_rtProxyDrawCalls = 0x48;
      constexpr std::ptrdiff_t m_vTintColor = 0x58;
    }
    namespace CSceneObjectData__RTProxyDrawDescriptor_t {
      constexpr std::ptrdiff_t m_drawDesc = 0x0;
      constexpr std::ptrdiff_t m_mWorldFromLocal = 0x108;
      constexpr std::ptrdiff_t m_nVertexAlbedoFormat = 0x138;
      constexpr std::ptrdiff_t m_nVertexAlbedoVB = 0x139;
      constexpr std::ptrdiff_t m_nVertexAlbedoOffset = 0x13a;
      constexpr std::ptrdiff_t m_nVertexAlbedoStride = 0x13c;
    }
    namespace CSelectorUpdateNode {
      constexpr std::ptrdiff_t m_children = 0x60;
      constexpr std::ptrdiff_t m_tags = 0x78;
      constexpr std::ptrdiff_t m_blendCurve = 0x94;
      constexpr std::ptrdiff_t m_flBlendTime = 0x9c;
      constexpr std::ptrdiff_t m_hParameter = 0xa4;
      constexpr std::ptrdiff_t m_nTagIndex = 0xa8;
      constexpr std::ptrdiff_t m_eTagBehavior = 0xac;
      constexpr std::ptrdiff_t m_bResetOnChange = 0xb0;
      constexpr std::ptrdiff_t m_bLockWhenWaning = 0xb1;
      constexpr std::ptrdiff_t m_bSyncCyclesOnChange = 0xb2;
    }
    namespace CSeqAutoLayer {
      constexpr std::ptrdiff_t m_nLocalReference = 0x0;
      constexpr std::ptrdiff_t m_nLocalPose = 0x2;
      constexpr std::ptrdiff_t m_flags = 0x4;
      constexpr std::ptrdiff_t m_start = 0xc;
      constexpr std::ptrdiff_t m_peak = 0x10;
      constexpr std::ptrdiff_t m_tail = 0x14;
      constexpr std::ptrdiff_t m_end = 0x18;
    }
    namespace CSeqAutoLayerFlag {
      constexpr std::ptrdiff_t m_bPost = 0x0;
      constexpr std::ptrdiff_t m_bSpline = 0x1;
      constexpr std::ptrdiff_t m_bXFade = 0x2;
      constexpr std::ptrdiff_t m_bNoBlend = 0x3;
      constexpr std::ptrdiff_t m_bLocal = 0x4;
      constexpr std::ptrdiff_t m_bPose = 0x5;
      constexpr std::ptrdiff_t m_bFetchFrame = 0x6;
      constexpr std::ptrdiff_t m_bSubtract = 0x7;
    }
    namespace CSeqBoneMaskList {
      constexpr std::ptrdiff_t m_sName = 0x0;
      constexpr std::ptrdiff_t m_nLocalBoneArray = 0x10;
      constexpr std::ptrdiff_t m_flBoneWeightArray = 0x28;
      constexpr std::ptrdiff_t m_flDefaultMorphCtrlWeight = 0x40;
      constexpr std::ptrdiff_t m_morphCtrlWeightArray = 0x48;
    }
    namespace CSeqCmdLayer {
      constexpr std::ptrdiff_t m_cmd = 0x0;
      constexpr std::ptrdiff_t m_nLocalReference = 0x2;
      constexpr std::ptrdiff_t m_nLocalBonemask = 0x4;
      constexpr std::ptrdiff_t m_nDstResult = 0x6;
      constexpr std::ptrdiff_t m_nSrcResult = 0x8;
      constexpr std::ptrdiff_t m_bSpline = 0xa;
      constexpr std::ptrdiff_t m_flVar1 = 0xc;
      constexpr std::ptrdiff_t m_flVar2 = 0x10;
      constexpr std::ptrdiff_t m_nLineNumber = 0x14;
    }
    namespace CSeqCmdSeqDesc {
      constexpr std::ptrdiff_t m_sName = 0x0;
      constexpr std::ptrdiff_t m_flags = 0x10;
      constexpr std::ptrdiff_t m_transition = 0x1c;
      constexpr std::ptrdiff_t m_nFrameRangeSequence = 0x24;
      constexpr std::ptrdiff_t m_nFrameCount = 0x26;
      constexpr std::ptrdiff_t m_flFPS = 0x28;
      constexpr std::ptrdiff_t m_nSubCycles = 0x2c;
      constexpr std::ptrdiff_t m_numLocalResults = 0x2e;
      constexpr std::ptrdiff_t m_cmdLayerArray = 0x30;
      constexpr std::ptrdiff_t m_eventArray = 0x48;
      constexpr std::ptrdiff_t m_activityArray = 0x60;
      constexpr std::ptrdiff_t m_poseSettingArray = 0x78;
    }
    namespace CSeqIKLock {
      constexpr std::ptrdiff_t m_flPosWeight = 0x0;
      constexpr std::ptrdiff_t m_flAngleWeight = 0x4;
      constexpr std::ptrdiff_t m_nLocalBone = 0x8;
      constexpr std::ptrdiff_t m_bBonesOrientedAlongPositiveX = 0xa;
    }
    namespace CSeqMultiFetch {
      constexpr std::ptrdiff_t m_flags = 0x0;
      constexpr std::ptrdiff_t m_localReferenceArray = 0x8;
      constexpr std::ptrdiff_t m_nGroupSize = 0x20;
      constexpr std::ptrdiff_t m_nLocalPose = 0x28;
      constexpr std::ptrdiff_t m_poseKeyArray0 = 0x30;
      constexpr std::ptrdiff_t m_poseKeyArray1 = 0x48;
      constexpr std::ptrdiff_t m_nLocalCyclePoseParameter = 0x60;
      constexpr std::ptrdiff_t m_bCalculatePoseParameters = 0x64;
      constexpr std::ptrdiff_t m_bFixedBlendWeight = 0x65;
      constexpr std::ptrdiff_t m_flFixedBlendWeightVals = 0x68;
    }
    namespace CSeqMultiFetchFlag {
      constexpr std::ptrdiff_t m_bRealtime = 0x0;
      constexpr std::ptrdiff_t m_bCylepose = 0x1;
      constexpr std::ptrdiff_t m_b0D = 0x2;
      constexpr std::ptrdiff_t m_b1D = 0x3;
      constexpr std::ptrdiff_t m_b2D = 0x4;
      constexpr std::ptrdiff_t m_b2D_TRI = 0x5;
    }
    namespace CSeqPoseParamDesc {
      constexpr std::ptrdiff_t m_sName = 0x0;
      constexpr std::ptrdiff_t m_flStart = 0x10;
      constexpr std::ptrdiff_t m_flEnd = 0x14;
      constexpr std::ptrdiff_t m_flLoop = 0x18;
      constexpr std::ptrdiff_t m_bLooping = 0x1c;
    }
    namespace CSeqPoseSetting {
      constexpr std::ptrdiff_t m_sPoseParameter = 0x0;
      constexpr std::ptrdiff_t m_sAttachment = 0x10;
      constexpr std::ptrdiff_t m_sReferenceSequence = 0x20;
      constexpr std::ptrdiff_t m_flValue = 0x30;
      constexpr std::ptrdiff_t m_bX = 0x34;
      constexpr std::ptrdiff_t m_bY = 0x35;
      constexpr std::ptrdiff_t m_bZ = 0x36;
      constexpr std::ptrdiff_t m_eType = 0x38;
    }
    namespace CSeqS1SeqDesc {
      constexpr std::ptrdiff_t m_sName = 0x0;
      constexpr std::ptrdiff_t m_flags = 0x10;
      constexpr std::ptrdiff_t m_fetch = 0x20;
      constexpr std::ptrdiff_t m_nLocalWeightlist = 0x90;
      constexpr std::ptrdiff_t m_autoLayerArray = 0x98;
      constexpr std::ptrdiff_t m_IKLockArray = 0xb0;
      constexpr std::ptrdiff_t m_transition = 0xc8;
      constexpr std::ptrdiff_t m_SequenceKeys = 0xd0;
      constexpr std::ptrdiff_t m_LegacyKeyValueText = 0xe0;
      constexpr std::ptrdiff_t m_activityArray = 0xf0;
      constexpr std::ptrdiff_t m_footMotion = 0x108;
    }
    namespace CSeqScaleSet {
      constexpr std::ptrdiff_t m_sName = 0x0;
      constexpr std::ptrdiff_t m_bRootOffset = 0x10;
      constexpr std::ptrdiff_t m_vRootOffset = 0x14;
      constexpr std::ptrdiff_t m_nLocalBoneArray = 0x20;
      constexpr std::ptrdiff_t m_flBoneScaleArray = 0x38;
    }
    namespace CSeqSeqDescFlag {
      constexpr std::ptrdiff_t m_bLooping = 0x0;
      constexpr std::ptrdiff_t m_bSnap = 0x1;
      constexpr std::ptrdiff_t m_bAutoplay = 0x2;
      constexpr std::ptrdiff_t m_bPost = 0x3;
      constexpr std::ptrdiff_t m_bHidden = 0x4;
      constexpr std::ptrdiff_t m_bMulti = 0x5;
      constexpr std::ptrdiff_t m_bLegacyDelta = 0x6;
      constexpr std::ptrdiff_t m_bLegacyWorldspace = 0x7;
      constexpr std::ptrdiff_t m_bLegacyCyclepose = 0x8;
      constexpr std::ptrdiff_t m_bLegacyRealtime = 0x9;
      constexpr std::ptrdiff_t m_bModelDoc = 0xa;
    }
    namespace CSeqSynthAnimDesc {
      constexpr std::ptrdiff_t m_sName = 0x0;
      constexpr std::ptrdiff_t m_flags = 0x10;
      constexpr std::ptrdiff_t m_transition = 0x1c;
      constexpr std::ptrdiff_t m_nLocalBaseReference = 0x24;
      constexpr std::ptrdiff_t m_nLocalBoneMask = 0x26;
      constexpr std::ptrdiff_t m_activityArray = 0x28;
    }
    namespace CSeqTransition {
      constexpr std::ptrdiff_t m_flFadeInTime = 0x0;
      constexpr std::ptrdiff_t m_flFadeOutTime = 0x4;
    }
    namespace CSequenceFinishedAnimTag {
      constexpr std::ptrdiff_t m_sequenceName = 0x58;
    }
    namespace CSequenceGroupData {
      constexpr std::ptrdiff_t m_sName = 0x10;
      constexpr std::ptrdiff_t m_nFlags = 0x20;
      constexpr std::ptrdiff_t m_localSequenceNameArray = 0x28;
      constexpr std::ptrdiff_t m_localS1SeqDescArray = 0x40;
      constexpr std::ptrdiff_t m_localMultiSeqDescArray = 0x58;
      constexpr std::ptrdiff_t m_localSynthAnimDescArray = 0x70;
      constexpr std::ptrdiff_t m_localCmdSeqDescArray = 0x88;
      constexpr std::ptrdiff_t m_localBoneMaskArray = 0xa0;
      constexpr std::ptrdiff_t m_localScaleSetArray = 0xb8;
      constexpr std::ptrdiff_t m_localBoneNameArray = 0xd0;
      constexpr std::ptrdiff_t m_localNodeName = 0xe8;
      constexpr std::ptrdiff_t m_localPoseParamArray = 0xf8;
      constexpr std::ptrdiff_t m_keyValues = 0x110;
      constexpr std::ptrdiff_t m_localIKAutoplayLockArray = 0x120;
    }
    namespace CSequenceTagSpans {
      constexpr std::ptrdiff_t m_sSequenceName = 0x0;
      constexpr std::ptrdiff_t m_tags = 0x8;
    }
    namespace CSequenceUpdateNode {
      constexpr std::ptrdiff_t m_hSequence = 0x78;
      constexpr std::ptrdiff_t m_duration = 0x7c;
      constexpr std::ptrdiff_t m_paramSpans = 0x80;
      constexpr std::ptrdiff_t m_tags = 0x98;
    }
    namespace CSequenceUpdateNodeBase {
      constexpr std::ptrdiff_t m_playbackSpeed = 0x6c;
      constexpr std::ptrdiff_t m_bLoop = 0x70;
    }
    namespace CSetParameterActionUpdater {
      constexpr std::ptrdiff_t m_hParam = 0x18;
      constexpr std::ptrdiff_t m_value = 0x1a;
    }
    namespace CSingleFrameUpdateNode {
      constexpr std::ptrdiff_t m_actions = 0x58;
      constexpr std::ptrdiff_t m_hPoseCacheHandle = 0x70;
      constexpr std::ptrdiff_t m_hSequence = 0x74;
      constexpr std::ptrdiff_t m_flCycle = 0x78;
    }
    namespace CSlopeComponentUpdater {
      constexpr std::ptrdiff_t m_flTraceDistance = 0x34;
      constexpr std::ptrdiff_t m_hSlopeAngle = 0x38;
      constexpr std::ptrdiff_t m_hSlopeAngleFront = 0x3a;
      constexpr std::ptrdiff_t m_hSlopeAngleSide = 0x3c;
      constexpr std::ptrdiff_t m_hSlopeHeading = 0x3e;
      constexpr std::ptrdiff_t m_hSlopeNormal = 0x40;
      constexpr std::ptrdiff_t m_hSlopeNormal_WorldSpace = 0x42;
    }
    namespace CSlowDownOnSlopesUpdateNode {
      constexpr std::ptrdiff_t m_flSlowDownStrength = 0x70;
    }
    namespace CSolveIKChainUpdateNode {
      constexpr std::ptrdiff_t m_targetHandles = 0x70;
      constexpr std::ptrdiff_t m_opFixedData = 0x88;
    }
    namespace CSolveIKTargetHandle_t {
      constexpr std::ptrdiff_t m_positionHandle = 0x0;
      constexpr std::ptrdiff_t m_orientationHandle = 0x2;
    }
    namespace CSpeedScaleUpdateNode {
      constexpr std::ptrdiff_t m_paramIndex = 0x70;
    }
    namespace CStanceOverrideUpdateNode {
      constexpr std::ptrdiff_t m_footStanceInfo = 0x70;
      constexpr std::ptrdiff_t m_pStanceSourceNode = 0x88;
      constexpr std::ptrdiff_t m_hParameter = 0x98;
      constexpr std::ptrdiff_t m_eMode = 0x9c;
    }
    namespace CStanceScaleUpdateNode {
      constexpr std::ptrdiff_t m_hParam = 0x70;
    }
    namespace CStateActionUpdater {
      constexpr std::ptrdiff_t m_pAction = 0x0;
      constexpr std::ptrdiff_t m_eBehavior = 0x8;
    }
    namespace CStateMachineComponentUpdater {
      constexpr std::ptrdiff_t m_stateMachine = 0x30;
    }
    namespace CStateMachineUpdateNode {
      constexpr std::ptrdiff_t m_stateMachine = 0x70;
      constexpr std::ptrdiff_t m_stateData = 0xc8;
      constexpr std::ptrdiff_t m_transitionData = 0xe0;
      constexpr std::ptrdiff_t m_bBlockWaningTags = 0xfc;
      constexpr std::ptrdiff_t m_bLockStateWhenWaning = 0xfd;
      constexpr std::ptrdiff_t m_bResetWhenActivated = 0xfe;
    }
    namespace CStateNodeStateData {
      constexpr std::ptrdiff_t m_pChild = 0x0;
      constexpr std::ptrdiff_t m_bExclusiveRootMotion = 0x0;
      constexpr std::ptrdiff_t m_bExclusiveRootMotionFirstFrame = 0x0;
    }
    namespace CStateNodeTransitionData {
      constexpr std::ptrdiff_t m_bReset = 0x0;
      constexpr std::ptrdiff_t m_resetCycleOption = 0x0;
      constexpr std::ptrdiff_t m_curve = 0x0;
      constexpr std::ptrdiff_t m_blendDuration = 0x8;
      constexpr std::ptrdiff_t m_resetCycleValue = 0x10;
    }
    namespace CStateUpdateData {
      constexpr std::ptrdiff_t m_bPreEvaluatePassthroughTransitionPath = 0x0;
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_bIsStartState = 0x0;
      constexpr std::ptrdiff_t m_bIsPassthrough = 0x0;
      constexpr std::ptrdiff_t m_bIsEndState = 0x0;
      constexpr std::ptrdiff_t m_bIsPassthroughRootMotion = 0x0;
      constexpr std::ptrdiff_t m_hScript = 0x8;
      constexpr std::ptrdiff_t m_transitionIndices = 0x10;
      constexpr std::ptrdiff_t m_actions = 0x28;
      constexpr std::ptrdiff_t m_stateID = 0x40;
    }
    namespace CStaticPoseCache {
      constexpr std::ptrdiff_t m_poses = 0x10;
      constexpr std::ptrdiff_t m_nBoneCount = 0x28;
      constexpr std::ptrdiff_t m_nMorphCount = 0x2c;
    }
    namespace CStaticPoseCacheBuilder {
    }
    namespace CStepsRemainingMetricEvaluator {
      constexpr std::ptrdiff_t m_footIndices = 0x50;
      constexpr std::ptrdiff_t m_flMinStepsRemaining = 0x68;
    }
    namespace CStopAtGoalUpdateNode {
      constexpr std::ptrdiff_t m_flOuterRadius = 0x74;
      constexpr std::ptrdiff_t m_flInnerRadius = 0x78;
      constexpr std::ptrdiff_t m_flMaxScale = 0x7c;
      constexpr std::ptrdiff_t m_flMinScale = 0x80;
      constexpr std::ptrdiff_t m_damping = 0x88;
    }
    namespace CStringAnimTag {
    }
    namespace CSubtractUpdateNode {
      constexpr std::ptrdiff_t m_footMotionTiming = 0x94;
      constexpr std::ptrdiff_t m_bApplyToFootMotion = 0x98;
      constexpr std::ptrdiff_t m_bApplyChannelsSeparately = 0x99;
      constexpr std::ptrdiff_t m_bUseModelSpace = 0x9a;
    }
    namespace CSymbolAnimParameter {
      constexpr std::ptrdiff_t m_defaultValue = 0x80;
    }
    namespace CTargetSelectorUpdateNode {
      constexpr std::ptrdiff_t m_eAngleMode = 0x60;
      constexpr std::ptrdiff_t m_children = 0x68;
      constexpr std::ptrdiff_t m_hTargetPosition = 0x84;
      constexpr std::ptrdiff_t m_hTargetFacePositionParameter = 0x86;
      constexpr std::ptrdiff_t m_hMoveHeadingParameter = 0x88;
      constexpr std::ptrdiff_t m_hDesiredMoveHeadingParameter = 0x8a;
      constexpr std::ptrdiff_t m_bTargetPositionIsWorldSpace = 0x8c;
      constexpr std::ptrdiff_t m_bTargetFacePositionIsWorldSpace = 0x8d;
      constexpr std::ptrdiff_t m_bEnablePhaseMatching = 0x8e;
      constexpr std::ptrdiff_t m_flPhaseMatchingMaxRootMotionSkip = 0x90;
    }
    namespace CTargetWarpUpdateNode {
      constexpr std::ptrdiff_t m_eAngleMode = 0x74;
      constexpr std::ptrdiff_t m_hTargetPositionParameter = 0x78;
      constexpr std::ptrdiff_t m_hTargetUpVectorParameter = 0x7a;
      constexpr std::ptrdiff_t m_hTargetFacePositionParameter = 0x7c;
      constexpr std::ptrdiff_t m_hMoveHeadingParameter = 0x7e;
      constexpr std::ptrdiff_t m_hDesiredMoveHeadingParameter = 0x80;
      constexpr std::ptrdiff_t m_eCorrectionMethod = 0x84;
      constexpr std::ptrdiff_t m_eTargetWarpTimingMethod = 0x88;
      constexpr std::ptrdiff_t m_bTargetFacePositionIsWorldSpace = 0x8c;
      constexpr std::ptrdiff_t m_bTargetPositionIsWorldSpace = 0x8d;
      constexpr std::ptrdiff_t m_bOnlyWarpWhenTagIsFound = 0x8e;
      constexpr std::ptrdiff_t m_bWarpOrientationDuringTranslation = 0x8f;
      constexpr std::ptrdiff_t m_bWarpAroundCenter = 0x90;
      constexpr std::ptrdiff_t m_flMaxAngle = 0x94;
    }
    namespace CTaskHandshakeAnimTag {
    }
    namespace CTaskStatusAnimTag {
    }
    namespace CTiltTwistConstraint {
      constexpr std::ptrdiff_t m_nTargetAxis = 0x60;
      constexpr std::ptrdiff_t m_nSlaveAxis = 0x64;
    }
    namespace CTimeRemainingMetricEvaluator {
      constexpr std::ptrdiff_t m_bMatchByTimeRemaining = 0x50;
      constexpr std::ptrdiff_t m_flMaxTimeRemaining = 0x54;
      constexpr std::ptrdiff_t m_bFilterByTimeRemaining = 0x58;
      constexpr std::ptrdiff_t m_flMinTimeRemaining = 0x5c;
    }
    namespace CToggleComponentActionUpdater {
      constexpr std::ptrdiff_t m_componentID = 0x18;
      constexpr std::ptrdiff_t m_bSetEnabled = 0x1c;
    }
    namespace CTransitionUpdateData {
      constexpr std::ptrdiff_t m_bDisabled = 0x0;
      constexpr std::ptrdiff_t m_nHandshakeMaskToDisableFirst = 0x0;
      constexpr std::ptrdiff_t m_srcStateIndex = 0x0;
      constexpr std::ptrdiff_t m_destStateIndex = 0x1;
    }
    namespace CTurnHelperUpdateNode {
      constexpr std::ptrdiff_t m_facingTarget = 0x74;
      constexpr std::ptrdiff_t m_turnStartTimeOffset = 0x78;
      constexpr std::ptrdiff_t m_turnDuration = 0x7c;
      constexpr std::ptrdiff_t m_bMatchChildDuration = 0x80;
      constexpr std::ptrdiff_t m_manualTurnOffset = 0x84;
      constexpr std::ptrdiff_t m_bUseManualTurnOffset = 0x88;
    }
    namespace CTwistConstraint {
      constexpr std::ptrdiff_t m_bInverse = 0x60;
      constexpr std::ptrdiff_t m_qParentBindRotation = 0x70;
      constexpr std::ptrdiff_t m_qChildBindRotation = 0x80;
    }
    namespace CTwoBoneIKUpdateNode {
      constexpr std::ptrdiff_t m_opFixedData = 0x70;
    }
    namespace CUnaryUpdateNode {
      constexpr std::ptrdiff_t m_pChildNode = 0x60;
    }
    namespace CVPhysXSurfacePropertiesList {
      constexpr std::ptrdiff_t m_surfacePropertiesList = 0x0;
    }
    namespace CVectorAnimParameter {
      constexpr std::ptrdiff_t m_defaultValue = 0x80;
      constexpr std::ptrdiff_t m_bInterpolate = 0x8c;
      constexpr std::ptrdiff_t m_vectorType = 0x90;
    }
    namespace CVectorQuantizer {
      constexpr std::ptrdiff_t m_centroidVectors = 0x0;
      constexpr std::ptrdiff_t m_nCentroids = 0x18;
      constexpr std::ptrdiff_t m_nDimensions = 0x1c;
    }
    namespace CVirtualAnimParameter {
      constexpr std::ptrdiff_t m_expressionString = 0x70;
      constexpr std::ptrdiff_t m_eParamType = 0x78;
    }
    namespace CWarpSectionAnimTag {
      constexpr std::ptrdiff_t m_bWarpPosition = 0x50;
      constexpr std::ptrdiff_t m_bWarpOrientation = 0x51;
    }
    namespace CWarpSectionAnimTagBase {
    }
    namespace CWayPointHelperUpdateNode {
      constexpr std::ptrdiff_t m_flStartCycle = 0x74;
      constexpr std::ptrdiff_t m_flEndCycle = 0x78;
      constexpr std::ptrdiff_t m_bOnlyGoals = 0x7c;
      constexpr std::ptrdiff_t m_bPreventOvershoot = 0x7d;
      constexpr std::ptrdiff_t m_bPreventUndershoot = 0x7e;
    }
    namespace CZeroPoseUpdateNode {
    }
    namespace ChainToSolveData_t {
      constexpr std::ptrdiff_t m_nChainIndex = 0x0;
      constexpr std::ptrdiff_t m_SolverSettings = 0x4;
      constexpr std::ptrdiff_t m_TargetSettings = 0x10;
      constexpr std::ptrdiff_t m_DebugSetting = 0x38;
      constexpr std::ptrdiff_t m_flDebugNormalizedValue = 0x3c;
      constexpr std::ptrdiff_t m_vDebugOffset = 0x40;
    }
    namespace ConfigIndex {
      constexpr std::ptrdiff_t m_nGroup = 0x0;
      constexpr std::ptrdiff_t m_nConfig = 0x2;
    }
    namespace DynamicMeshDeformParams_t {
      constexpr std::ptrdiff_t m_flTensionCompressScale = 0x0;
      constexpr std::ptrdiff_t m_flTensionStretchScale = 0x4;
      constexpr std::ptrdiff_t m_bRecomputeSmoothNormalsAfterAnimation = 0x8;
      constexpr std::ptrdiff_t m_bComputeDynamicMeshTensionAfterAnimation = 0x9;
      constexpr std::ptrdiff_t m_bSmoothNormalsAcrossUvSeams = 0xa;
      constexpr std::ptrdiff_t m_bEnableEyeBulgeDeformation = 0xb;
    }
    namespace FollowAttachmentData {
      constexpr std::ptrdiff_t m_boneIndex = 0x0;
      constexpr std::ptrdiff_t m_attachmentHandle = 0x4;
    }
    namespace FollowAttachmentSettings_t {
      constexpr std::ptrdiff_t m_attachment = 0x0;
      constexpr std::ptrdiff_t m_boneIndex = 0x80;
      constexpr std::ptrdiff_t m_attachmentHandle = 0x84;
      constexpr std::ptrdiff_t m_bMatchTranslation = 0x85;
      constexpr std::ptrdiff_t m_bMatchRotation = 0x86;
    }
    namespace FollowTargetOpFixedSettings_t {
      constexpr std::ptrdiff_t m_boneIndex = 0x0;
      constexpr std::ptrdiff_t m_bBoneTarget = 0x4;
      constexpr std::ptrdiff_t m_boneTargetIndex = 0x8;
      constexpr std::ptrdiff_t m_bWorldCoodinateTarget = 0xc;
      constexpr std::ptrdiff_t m_bMatchTargetOrientation = 0xd;
    }
    namespace FootFixedData_t {
      constexpr std::ptrdiff_t m_vToeOffset = 0x0;
      constexpr std::ptrdiff_t m_vHeelOffset = 0x10;
      constexpr std::ptrdiff_t m_nTargetBoneIndex = 0x20;
      constexpr std::ptrdiff_t m_nAnkleBoneIndex = 0x24;
      constexpr std::ptrdiff_t m_nIKAnchorBoneIndex = 0x28;
      constexpr std::ptrdiff_t m_ikChainIndex = 0x2c;
      constexpr std::ptrdiff_t m_flMaxIKLength = 0x30;
      constexpr std::ptrdiff_t m_nFootIndex = 0x34;
      constexpr std::ptrdiff_t m_nTagIndex = 0x38;
      constexpr std::ptrdiff_t m_flMaxRotationLeft = 0x3c;
      constexpr std::ptrdiff_t m_flMaxRotationRight = 0x40;
    }
    namespace FootFixedSettings {
      constexpr std::ptrdiff_t m_traceSettings = 0x0;
      constexpr std::ptrdiff_t m_vFootBaseBindPosePositionMS = 0x10;
      constexpr std::ptrdiff_t m_flFootBaseLength = 0x20;
      constexpr std::ptrdiff_t m_flMaxRotationLeft = 0x24;
      constexpr std::ptrdiff_t m_flMaxRotationRight = 0x28;
      constexpr std::ptrdiff_t m_footstepLandedTagIndex = 0x2c;
      constexpr std::ptrdiff_t m_bEnableTracing = 0x30;
      constexpr std::ptrdiff_t m_flTraceAngleBlend = 0x34;
      constexpr std::ptrdiff_t m_nDisableTagIndex = 0x38;
      constexpr std::ptrdiff_t m_nFootIndex = 0x3c;
    }
    namespace FootLockPoseOpFixedSettings {
      constexpr std::ptrdiff_t m_footInfo = 0x0;
      constexpr std::ptrdiff_t m_hipDampingSettings = 0x18;
      constexpr std::ptrdiff_t m_nHipBoneIndex = 0x30;
      constexpr std::ptrdiff_t m_ikSolverType = 0x34;
      constexpr std::ptrdiff_t m_bApplyTilt = 0x38;
      constexpr std::ptrdiff_t m_bApplyHipDrop = 0x39;
      constexpr std::ptrdiff_t m_bAlwaysUseFallbackHinge = 0x3a;
      constexpr std::ptrdiff_t m_bApplyFootRotationLimits = 0x3b;
      constexpr std::ptrdiff_t m_bApplyLegTwistLimits = 0x3c;
      constexpr std::ptrdiff_t m_flMaxFootHeight = 0x40;
      constexpr std::ptrdiff_t m_flExtensionScale = 0x44;
      constexpr std::ptrdiff_t m_flMaxLegTwist = 0x48;
      constexpr std::ptrdiff_t m_bEnableLockBreaking = 0x4c;
      constexpr std::ptrdiff_t m_flLockBreakTolerance = 0x50;
      constexpr std::ptrdiff_t m_flLockBlendTime = 0x54;
      constexpr std::ptrdiff_t m_bEnableStretching = 0x58;
      constexpr std::ptrdiff_t m_flMaxStretchAmount = 0x5c;
      constexpr std::ptrdiff_t m_flStretchExtensionScale = 0x60;
    }
    namespace FootPinningPoseOpFixedData_t {
      constexpr std::ptrdiff_t m_footInfo = 0x0;
      constexpr std::ptrdiff_t m_flBlendTime = 0x18;
      constexpr std::ptrdiff_t m_flLockBreakDistance = 0x1c;
      constexpr std::ptrdiff_t m_flMaxLegTwist = 0x20;
      constexpr std::ptrdiff_t m_nHipBoneIndex = 0x24;
      constexpr std::ptrdiff_t m_bApplyLegTwistLimits = 0x28;
      constexpr std::ptrdiff_t m_bApplyFootRotationLimits = 0x29;
    }
    namespace FootStepTrigger {
      constexpr std::ptrdiff_t m_tags = 0x0;
      constexpr std::ptrdiff_t m_nFootIndex = 0x18;
      constexpr std::ptrdiff_t m_triggerPhase = 0x1c;
    }
    namespace HSequence {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace HitReactFixedSettings_t {
      constexpr std::ptrdiff_t m_nWeightListIndex = 0x0;
      constexpr std::ptrdiff_t m_nEffectedBoneCount = 0x4;
      constexpr std::ptrdiff_t m_flMaxImpactForce = 0x8;
      constexpr std::ptrdiff_t m_flMinImpactForce = 0xc;
      constexpr std::ptrdiff_t m_flWhipImpactScale = 0x10;
      constexpr std::ptrdiff_t m_flCounterRotationScale = 0x14;
      constexpr std::ptrdiff_t m_flDistanceFadeScale = 0x18;
      constexpr std::ptrdiff_t m_flPropagationScale = 0x1c;
      constexpr std::ptrdiff_t m_flWhipDelay = 0x20;
      constexpr std::ptrdiff_t m_flSpringStrength = 0x24;
      constexpr std::ptrdiff_t m_flWhipSpringStrength = 0x28;
      constexpr std::ptrdiff_t m_flMaxAngleRadians = 0x2c;
      constexpr std::ptrdiff_t m_nHipBoneIndex = 0x30;
      constexpr std::ptrdiff_t m_flHipBoneTranslationScale = 0x34;
      constexpr std::ptrdiff_t m_flHipDipSpringStrength = 0x38;
      constexpr std::ptrdiff_t m_flHipDipImpactScale = 0x3c;
      constexpr std::ptrdiff_t m_flHipDipDelay = 0x40;
    }
    namespace IAnimationGraphInstance {
    }
    namespace IKBoneNameAndIndex_t {
      constexpr std::ptrdiff_t m_Name = 0x0;
    }
    namespace IKDemoCaptureSettings_t {
      constexpr std::ptrdiff_t m_parentBoneName = 0x0;
      constexpr std::ptrdiff_t m_eMode = 0x8;
      constexpr std::ptrdiff_t m_ikChainName = 0x10;
      constexpr std::ptrdiff_t m_oneBoneStart = 0x18;
      constexpr std::ptrdiff_t m_oneBoneEnd = 0x20;
    }
    namespace IKSolverSettings_t {
      constexpr std::ptrdiff_t m_SolverType = 0x0;
      constexpr std::ptrdiff_t m_nNumIterations = 0x4;
      constexpr std::ptrdiff_t m_EndEffectorRotationFixUpMode = 0x8;
    }
    namespace IKTargetSettings_t {
      constexpr std::ptrdiff_t m_TargetSource = 0x0;
      constexpr std::ptrdiff_t m_Bone = 0x8;
      constexpr std::ptrdiff_t m_AnimgraphParameterNamePosition = 0x18;
      constexpr std::ptrdiff_t m_AnimgraphParameterNameOrientation = 0x1c;
      constexpr std::ptrdiff_t m_TargetCoordSystem = 0x20;
    }
    namespace IParticleCollection {
    }
    namespace IParticleEffect {
    }
    namespace JiggleBoneSettingsList_t {
      constexpr std::ptrdiff_t m_boneSettings = 0x0;
    }
    namespace JiggleBoneSettings_t {
      constexpr std::ptrdiff_t m_nBoneIndex = 0x0;
      constexpr std::ptrdiff_t m_flSpringStrength = 0x4;
      constexpr std::ptrdiff_t m_flMaxTimeStep = 0x8;
      constexpr std::ptrdiff_t m_flDamping = 0xc;
      constexpr std::ptrdiff_t m_vBoundsMaxLS = 0x10;
      constexpr std::ptrdiff_t m_vBoundsMinLS = 0x1c;
      constexpr std::ptrdiff_t m_eSimSpace = 0x28;
    }
    namespace LookAtBone_t {
      constexpr std::ptrdiff_t m_index = 0x0;
      constexpr std::ptrdiff_t m_weight = 0x4;
    }
    namespace LookAtOpFixedSettings_t {
      constexpr std::ptrdiff_t m_attachment = 0x0;
      constexpr std::ptrdiff_t m_damping = 0x80;
      constexpr std::ptrdiff_t m_bones = 0x98;
      constexpr std::ptrdiff_t m_flYawLimit = 0xb0;
      constexpr std::ptrdiff_t m_flPitchLimit = 0xb4;
      constexpr std::ptrdiff_t m_flHysteresisInnerAngle = 0xb8;
      constexpr std::ptrdiff_t m_flHysteresisOuterAngle = 0xbc;
      constexpr std::ptrdiff_t m_bRotateYawForward = 0xc0;
      constexpr std::ptrdiff_t m_bMaintainUpDirection = 0xc1;
      constexpr std::ptrdiff_t m_bTargetIsPosition = 0xc2;
      constexpr std::ptrdiff_t m_bUseHysteresis = 0xc3;
    }
    namespace MaterialGroup_t {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_materials = 0x8;
    }
    namespace ModelAnimGraph2Ref_t {
      constexpr std::ptrdiff_t m_sIdentifier = 0x0;
      constexpr std::ptrdiff_t m_hGraph = 0x8;
    }
    namespace ModelBoneFlexDriverControl_t {
      constexpr std::ptrdiff_t m_nBoneComponent = 0x0;
      constexpr std::ptrdiff_t m_flexController = 0x8;
      constexpr std::ptrdiff_t m_flexControllerToken = 0x10;
      constexpr std::ptrdiff_t m_flMin = 0x14;
      constexpr std::ptrdiff_t m_flMax = 0x18;
    }
    namespace ModelBoneFlexDriver_t {
      constexpr std::ptrdiff_t m_boneName = 0x0;
      constexpr std::ptrdiff_t m_boneNameToken = 0x8;
      constexpr std::ptrdiff_t m_controls = 0x10;
    }
    namespace ModelEmbeddedMesh_t {
      constexpr std::ptrdiff_t m_Name = 0x0;
      constexpr std::ptrdiff_t m_nMeshIndex = 0x10;
      constexpr std::ptrdiff_t m_nDataBlock = 0x14;
      constexpr std::ptrdiff_t m_nMorphBlock = 0x18;
      constexpr std::ptrdiff_t m_vertexBuffers = 0x20;
      constexpr std::ptrdiff_t m_indexBuffers = 0x38;
      constexpr std::ptrdiff_t m_toolsBuffers = 0x50;
      constexpr std::ptrdiff_t m_nVBIBBlock = 0x68;
      constexpr std::ptrdiff_t m_nToolsVBBlock = 0x6c;
    }
    namespace ModelMeshBufferData_t {
      constexpr std::ptrdiff_t m_nBlockIndex = 0x0;
      constexpr std::ptrdiff_t m_nElementCount = 0x4;
      constexpr std::ptrdiff_t m_nElementSizeInBytes = 0x8;
      constexpr std::ptrdiff_t m_bMeshoptCompressed = 0xc;
      constexpr std::ptrdiff_t m_bMeshoptIndexSequence = 0xd;
      constexpr std::ptrdiff_t m_bCompressedZSTD = 0xe;
      constexpr std::ptrdiff_t m_bCreateBufferSRV = 0xf;
      constexpr std::ptrdiff_t m_bCreateBufferUAV = 0x10;
      constexpr std::ptrdiff_t m_bCreateRawBuffer = 0x11;
      constexpr std::ptrdiff_t m_bCreatePooledBuffer = 0x12;
      constexpr std::ptrdiff_t m_nBufferUsage = 0x13;
      constexpr std::ptrdiff_t m_inputLayoutFields = 0x18;
    }
    namespace ModelSkeletonData_t {
      constexpr std::ptrdiff_t m_boneName = 0x0;
      constexpr std::ptrdiff_t m_nParent = 0x18;
      constexpr std::ptrdiff_t m_boneSphere = 0x30;
      constexpr std::ptrdiff_t m_nFlag = 0x48;
      constexpr std::ptrdiff_t m_bonePosParent = 0x60;
      constexpr std::ptrdiff_t m_boneRotParent = 0x78;
      constexpr std::ptrdiff_t m_boneScaleParent = 0x90;
    }
    namespace MoodAnimationLayer_t {
      constexpr std::ptrdiff_t m_sName = 0x0;
      constexpr std::ptrdiff_t m_bActiveListening = 0x8;
      constexpr std::ptrdiff_t m_bActiveTalking = 0x9;
      constexpr std::ptrdiff_t m_layerAnimations = 0x10;
      constexpr std::ptrdiff_t m_flIntensity = 0x28;
      constexpr std::ptrdiff_t m_flDurationScale = 0x30;
      constexpr std::ptrdiff_t m_bScaleWithInts = 0x38;
      constexpr std::ptrdiff_t m_flNextStart = 0x3c;
      constexpr std::ptrdiff_t m_flStartOffset = 0x44;
      constexpr std::ptrdiff_t m_flEndOffset = 0x4c;
      constexpr std::ptrdiff_t m_flFadeIn = 0x54;
      constexpr std::ptrdiff_t m_flFadeOut = 0x58;
    }
    namespace MoodAnimation_t {
      constexpr std::ptrdiff_t m_sName = 0x0;
      constexpr std::ptrdiff_t m_flWeight = 0x8;
    }
    namespace MotionBlendItem {
      constexpr std::ptrdiff_t m_pChild = 0x0;
      constexpr std::ptrdiff_t m_flKeyValue = 0x8;
    }
    namespace MotionDBIndex {
      constexpr std::ptrdiff_t m_nIndex = 0x0;
    }
    namespace MotionIndex {
      constexpr std::ptrdiff_t m_nGroup = 0x0;
      constexpr std::ptrdiff_t m_nMotion = 0x2;
    }
    namespace MovementGaitId_t {
      constexpr std::ptrdiff_t m_sId = 0x0;
    }
    namespace NmBoneMaskSetDefinition_t {
      constexpr std::ptrdiff_t m_ID = 0x0;
      constexpr std::ptrdiff_t m_primaryWeightList = 0x8;
      constexpr std::ptrdiff_t m_secondaryWeightLists = 0x118;
    }
    namespace NmCompressionSettings_t {
      constexpr std::ptrdiff_t m_translationRangeX = 0x0;
      constexpr std::ptrdiff_t m_translationRangeY = 0x8;
      constexpr std::ptrdiff_t m_translationRangeZ = 0x10;
      constexpr std::ptrdiff_t m_scaleRange = 0x18;
      constexpr std::ptrdiff_t m_constantRotation = 0x20;
      constexpr std::ptrdiff_t m_bIsRotationStatic = 0x30;
      constexpr std::ptrdiff_t m_bIsTranslationStatic = 0x31;
      constexpr std::ptrdiff_t m_bIsScaleStatic = 0x32;
    }
    namespace NmCompressionSettings_t__QuantizationRange_t {
      constexpr std::ptrdiff_t m_flRangeStart = 0x0;
      constexpr std::ptrdiff_t m_flRangeLength = 0x4;
    }
    namespace NmFloatCurveCompressionSettings_t {
      constexpr std::ptrdiff_t m_range = 0x0;
      constexpr std::ptrdiff_t m_bIsStatic = 0x8;
    }
    namespace NmPercent_t {
      constexpr std::ptrdiff_t m_flValue = 0x0;
    }
    namespace NmSyncTrackTimeRange_t {
      constexpr std::ptrdiff_t m_startTime = 0x0;
      constexpr std::ptrdiff_t m_endTime = 0x8;
    }
    namespace NmSyncTrackTime_t {
      constexpr std::ptrdiff_t m_nEventIdx = 0x0;
      constexpr std::ptrdiff_t m_percentageThrough = 0x4;
    }
    namespace OutflowWithRequirements_t {
      constexpr std::ptrdiff_t m_Connection = 0x0;
      constexpr std::ptrdiff_t m_DestinationFlowNodeID = 0x48;
      constexpr std::ptrdiff_t m_RequirementNodeIDs = 0x50;
      constexpr std::ptrdiff_t m_nCursorStateBlockIndex = 0x68;
    }
    namespace PARTICLE_EHANDLE__ {
      constexpr std::ptrdiff_t unused = 0x0;
    }
    namespace PGDInstruction_t {
      constexpr std::ptrdiff_t m_nCode = 0x0;
      constexpr std::ptrdiff_t m_nVar = 0x4;
      constexpr std::ptrdiff_t m_nReg0 = 0x8;
      constexpr std::ptrdiff_t m_nReg1 = 0xa;
      constexpr std::ptrdiff_t m_nReg2 = 0xc;
      constexpr std::ptrdiff_t m_nInvokeBindingIndex = 0x10;
      constexpr std::ptrdiff_t m_nChunk = 0x14;
      constexpr std::ptrdiff_t m_nDestInstruction = 0x18;
      constexpr std::ptrdiff_t m_nCallInfoIndex = 0x1c;
      constexpr std::ptrdiff_t m_nConstIdx = 0x20;
      constexpr std::ptrdiff_t m_nDomainValueIdx = 0x22;
      constexpr std::ptrdiff_t m_nBlackboardReferenceIdx = 0x24;
    }
    namespace ParamSpanSample_t {
      constexpr std::ptrdiff_t m_value = 0x0;
      constexpr std::ptrdiff_t m_flCycle = 0x14;
    }
    namespace ParamSpan_t {
      constexpr std::ptrdiff_t m_samples = 0x0;
      constexpr std::ptrdiff_t m_hParam = 0x18;
      constexpr std::ptrdiff_t m_eParamType = 0x1a;
      constexpr std::ptrdiff_t m_flStartCycle = 0x1c;
      constexpr std::ptrdiff_t m_flEndCycle = 0x20;
    }
    namespace ParticleAttributeIndex_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace ParticleNamedValueConfiguration_t {
      constexpr std::ptrdiff_t m_ConfigName = 0x0;
      constexpr std::ptrdiff_t m_ConfigValue = 0x8;
      constexpr std::ptrdiff_t m_BoundValuePath = 0x18;
      constexpr std::ptrdiff_t m_iAttachType = 0x20;
      constexpr std::ptrdiff_t m_strEntityScope = 0x28;
      constexpr std::ptrdiff_t m_strAttachmentName = 0x30;
    }
    namespace ParticleNamedValueSource_t {
      constexpr std::ptrdiff_t m_Name = 0x0;
      constexpr std::ptrdiff_t m_IsPublic = 0x8;
      constexpr std::ptrdiff_t m_ValueType = 0x10;
      constexpr std::ptrdiff_t m_DefaultConfig = 0x28;
    }
    namespace PermModelDataAnimatedMaterialAttribute_t {
      constexpr std::ptrdiff_t m_AttributeName = 0x0;
      constexpr std::ptrdiff_t m_nNumChannels = 0x8;
    }
    namespace PermModelData_t {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_modelInfo = 0x8;
      constexpr std::ptrdiff_t m_ExtParts = 0x60;
      constexpr std::ptrdiff_t m_refMeshes = 0x78;
      constexpr std::ptrdiff_t m_refMeshGroupMasks = 0x90;
      constexpr std::ptrdiff_t m_refPhysGroupMasks = 0xa8;
      constexpr std::ptrdiff_t m_refLODGroupMasks = 0xc0;
      constexpr std::ptrdiff_t m_lodGroupSwitchDistances = 0xd8;
      constexpr std::ptrdiff_t m_refPhysicsData = 0xf0;
      constexpr std::ptrdiff_t m_refPhysicsHitboxData = 0x108;
      constexpr std::ptrdiff_t m_refAnimGroups = 0x120;
      constexpr std::ptrdiff_t m_refSequenceGroups = 0x138;
      constexpr std::ptrdiff_t m_meshGroups = 0x150;
      constexpr std::ptrdiff_t m_materialGroups = 0x168;
      constexpr std::ptrdiff_t m_nDefaultMeshGroupMask = 0x180;
      constexpr std::ptrdiff_t m_modelSkeleton = 0x188;
      constexpr std::ptrdiff_t m_remappingTable = 0x230;
      constexpr std::ptrdiff_t m_remappingTableStarts = 0x248;
      constexpr std::ptrdiff_t m_boneFlexDrivers = 0x260;
      constexpr std::ptrdiff_t m_pModelConfigList = 0x278;
      constexpr std::ptrdiff_t m_BodyGroupsHiddenInTools = 0x280;
      constexpr std::ptrdiff_t m_refAnimIncludeModels = 0x298;
      constexpr std::ptrdiff_t m_AnimatedMaterialAttributes = 0x2b0;
      constexpr std::ptrdiff_t m_animGraph2Refs = 0x2c8;
      constexpr std::ptrdiff_t m_vecNmSkeletonRefs = 0x2e0;
    }
    namespace PermModelExtPart_t {
      constexpr std::ptrdiff_t m_Transform = 0x0;
      constexpr std::ptrdiff_t m_Name = 0x20;
      constexpr std::ptrdiff_t m_nParent = 0x28;
      constexpr std::ptrdiff_t m_refModel = 0x30;
    }
    namespace PermModelInfo_t {
      constexpr std::ptrdiff_t m_nFlags = 0x0;
      constexpr std::ptrdiff_t m_vHullMin = 0x4;
      constexpr std::ptrdiff_t m_vHullMax = 0x10;
      constexpr std::ptrdiff_t m_vViewMin = 0x1c;
      constexpr std::ptrdiff_t m_vViewMax = 0x28;
      constexpr std::ptrdiff_t m_flMass = 0x34;
      constexpr std::ptrdiff_t m_vEyePosition = 0x38;
      constexpr std::ptrdiff_t m_flMaxEyeDeflection = 0x44;
      constexpr std::ptrdiff_t m_sSurfaceProperty = 0x48;
      constexpr std::ptrdiff_t m_keyValueText = 0x50;
    }
    namespace PhysFeModelDesc_t {
      constexpr std::ptrdiff_t m_CtrlHash = 0x0;
      constexpr std::ptrdiff_t m_CtrlName = 0x18;
      constexpr std::ptrdiff_t m_nStaticNodeFlags = 0x30;
      constexpr std::ptrdiff_t m_nDynamicNodeFlags = 0x34;
      constexpr std::ptrdiff_t m_flLocalForce = 0x38;
      constexpr std::ptrdiff_t m_flLocalRotation = 0x3c;
      constexpr std::ptrdiff_t m_nNodeCount = 0x40;
      constexpr std::ptrdiff_t m_nStaticNodes = 0x42;
      constexpr std::ptrdiff_t m_nRotLockStaticNodes = 0x44;
      constexpr std::ptrdiff_t m_nFirstPositionDrivenNode = 0x46;
      constexpr std::ptrdiff_t m_nSimdTriCount1 = 0x48;
      constexpr std::ptrdiff_t m_nSimdTriCount2 = 0x4a;
      constexpr std::ptrdiff_t m_nSimdQuadCount1 = 0x4c;
      constexpr std::ptrdiff_t m_nSimdQuadCount2 = 0x4e;
      constexpr std::ptrdiff_t m_nQuadCount1 = 0x50;
      constexpr std::ptrdiff_t m_nQuadCount2 = 0x52;
      constexpr std::ptrdiff_t m_nTreeDepth = 0x54;
      constexpr std::ptrdiff_t m_nNodeBaseJiggleboneDependsCount = 0x56;
      constexpr std::ptrdiff_t m_nRopeCount = 0x58;
      constexpr std::ptrdiff_t m_Ropes = 0x60;
      constexpr std::ptrdiff_t m_NodeBases = 0x78;
      constexpr std::ptrdiff_t m_SimdNodeBases = 0x90;
      constexpr std::ptrdiff_t m_Quads = 0xa8;
      constexpr std::ptrdiff_t m_SimdQuads = 0xc0;
      constexpr std::ptrdiff_t m_SimdTris = 0xd8;
      constexpr std::ptrdiff_t m_SimdRods = 0xf0;
      constexpr std::ptrdiff_t m_SimdRodsAnim = 0x108;
      constexpr std::ptrdiff_t m_InitPose = 0x120;
      constexpr std::ptrdiff_t m_Rods = 0x138;
      constexpr std::ptrdiff_t m_Twists = 0x150;
      constexpr std::ptrdiff_t m_HingeLimits = 0x168;
      constexpr std::ptrdiff_t m_AntiTunnelBytecode = 0x180;
      constexpr std::ptrdiff_t m_DynKinLinks = 0x198;
      constexpr std::ptrdiff_t m_AntiTunnelProbes = 0x1b0;
      constexpr std::ptrdiff_t m_AntiTunnelTargetNodes = 0x1c8;
      constexpr std::ptrdiff_t m_NodeStrayBoxes = 0x1e0;
      constexpr std::ptrdiff_t m_AxialEdges = 0x1f8;
      constexpr std::ptrdiff_t m_NodeInvMasses = 0x210;
      constexpr std::ptrdiff_t m_CtrlOffsets = 0x228;
      constexpr std::ptrdiff_t m_CtrlOsOffsets = 0x240;
      constexpr std::ptrdiff_t m_FollowNodes = 0x258;
      constexpr std::ptrdiff_t m_CollisionPlanes = 0x270;
      constexpr std::ptrdiff_t m_NodeIntegrator = 0x288;
      constexpr std::ptrdiff_t m_SpringIntegrator = 0x2a0;
      constexpr std::ptrdiff_t m_SimdSpringIntegrator = 0x2b8;
      constexpr std::ptrdiff_t m_WorldCollisionParams = 0x2d0;
      constexpr std::ptrdiff_t m_LegacyStretchForce = 0x2e8;
      constexpr std::ptrdiff_t m_NodeCollisionRadii = 0x300;
      constexpr std::ptrdiff_t m_DynNodeFriction = 0x318;
      constexpr std::ptrdiff_t m_LocalRotation = 0x330;
      constexpr std::ptrdiff_t m_LocalForce = 0x348;
      constexpr std::ptrdiff_t m_TaperedCapsuleStretches = 0x360;
      constexpr std::ptrdiff_t m_TaperedCapsuleRigids = 0x378;
      constexpr std::ptrdiff_t m_SphereRigids = 0x390;
      constexpr std::ptrdiff_t m_WorldCollisionNodes = 0x3a8;
      constexpr std::ptrdiff_t m_TreeParents = 0x3c0;
      constexpr std::ptrdiff_t m_TreeCollisionMasks = 0x3d8;
      constexpr std::ptrdiff_t m_TreeChildren = 0x3f0;
      constexpr std::ptrdiff_t m_FreeNodes = 0x408;
      constexpr std::ptrdiff_t m_FitMatrices = 0x420;
      constexpr std::ptrdiff_t m_FitWeights = 0x438;
      constexpr std::ptrdiff_t m_ReverseOffsets = 0x450;
      constexpr std::ptrdiff_t m_AnimStrayRadii = 0x468;
      constexpr std::ptrdiff_t m_SimdAnimStrayRadii = 0x480;
      constexpr std::ptrdiff_t m_KelagerBends = 0x498;
      constexpr std::ptrdiff_t m_CtrlSoftOffsets = 0x4b0;
      constexpr std::ptrdiff_t m_JiggleBones = 0x4c8;
      constexpr std::ptrdiff_t m_SourceElems = 0x4e0;
      constexpr std::ptrdiff_t m_GoalDampedSpringIntegrators = 0x4f8;
      constexpr std::ptrdiff_t m_Tris = 0x510;
      constexpr std::ptrdiff_t m_nTriCount1 = 0x528;
      constexpr std::ptrdiff_t m_nTriCount2 = 0x52a;
      constexpr std::ptrdiff_t m_nReservedUint8 = 0x52c;
      constexpr std::ptrdiff_t m_nExtraPressureIterations = 0x52d;
      constexpr std::ptrdiff_t m_nExtraGoalIterations = 0x52e;
      constexpr std::ptrdiff_t m_nExtraIterations = 0x52f;
      constexpr std::ptrdiff_t m_SDFRigids = 0x530;
      constexpr std::ptrdiff_t m_BoxRigids = 0x548;
      constexpr std::ptrdiff_t m_DynNodeVertexSet = 0x560;
      constexpr std::ptrdiff_t m_VertexSetNames = 0x578;
      constexpr std::ptrdiff_t m_RigidColliderPriorities = 0x590;
      constexpr std::ptrdiff_t m_MorphLayers = 0x5a8;
      constexpr std::ptrdiff_t m_MorphSetData = 0x5c0;
      constexpr std::ptrdiff_t m_VertexMaps = 0x5d8;
      constexpr std::ptrdiff_t m_VertexMapValues = 0x5f0;
      constexpr std::ptrdiff_t m_Effects = 0x608;
      constexpr std::ptrdiff_t m_LockToParent = 0x620;
      constexpr std::ptrdiff_t m_LockToGoal = 0x638;
      constexpr std::ptrdiff_t m_SkelParents = 0x650;
      constexpr std::ptrdiff_t m_DynNodeWindBases = 0x668;
      constexpr std::ptrdiff_t m_SelfCollisionLayers = 0x680;
      constexpr std::ptrdiff_t m_flInternalPressure = 0x698;
      constexpr std::ptrdiff_t m_flDefaultTimeDilation = 0x69c;
      constexpr std::ptrdiff_t m_flWindage = 0x6a0;
      constexpr std::ptrdiff_t m_flWindDrag = 0x6a4;
      constexpr std::ptrdiff_t m_flDefaultSurfaceStretch = 0x6a8;
      constexpr std::ptrdiff_t m_flDefaultThreadStretch = 0x6ac;
      constexpr std::ptrdiff_t m_flDefaultGravityScale = 0x6b0;
      constexpr std::ptrdiff_t m_flDefaultVelAirDrag = 0x6b4;
      constexpr std::ptrdiff_t m_flDefaultExpAirDrag = 0x6b8;
      constexpr std::ptrdiff_t m_flDefaultVelQuadAirDrag = 0x6bc;
      constexpr std::ptrdiff_t m_flDefaultExpQuadAirDrag = 0x6c0;
      constexpr std::ptrdiff_t m_flRodVelocitySmoothRate = 0x6c4;
      constexpr std::ptrdiff_t m_flQuadVelocitySmoothRate = 0x6c8;
      constexpr std::ptrdiff_t m_flAddWorldCollisionRadius = 0x6cc;
      constexpr std::ptrdiff_t m_flDefaultVolumetricSolveAmount = 0x6d0;
      constexpr std::ptrdiff_t m_flMotionSmoothCDT = 0x6d4;
      constexpr std::ptrdiff_t m_flLocalDrag1 = 0x6d8;
      constexpr std::ptrdiff_t m_nRodVelocitySmoothIterations = 0x6dc;
      constexpr std::ptrdiff_t m_nQuadVelocitySmoothIterations = 0x6de;
    }
    namespace PhysShapeMarkup_t {
      constexpr std::ptrdiff_t m_nBodyInAggregate = 0x0;
      constexpr std::ptrdiff_t m_nShapeInBody = 0x4;
      constexpr std::ptrdiff_t m_sHitGroup = 0x8;
    }
    namespace PhysSoftbodyDesc_t {
      constexpr std::ptrdiff_t m_ParticleBoneHash = 0x0;
      constexpr std::ptrdiff_t m_Particles = 0x18;
      constexpr std::ptrdiff_t m_Springs = 0x30;
      constexpr std::ptrdiff_t m_Capsules = 0x48;
      constexpr std::ptrdiff_t m_InitPose = 0x60;
      constexpr std::ptrdiff_t m_ParticleBoneName = 0x78;
    }
    namespace PulseCursorID_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace PulseCursorYieldToken_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace PulseDocNodeID_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace PulseGraphExecutionHistoryCursorDesc_t {
      constexpr std::ptrdiff_t vecAncestorCursorIDs = 0x0;
      constexpr std::ptrdiff_t nSpawnNodeID = 0x18;
      constexpr std::ptrdiff_t nRetiredAtNodeID = 0x1c;
      constexpr std::ptrdiff_t flLastReferenced = 0x20;
      constexpr std::ptrdiff_t nLastValidEntryIdx = 0x24;
    }
    namespace PulseGraphExecutionHistoryEntry_t {
      constexpr std::ptrdiff_t nCursorID = 0x0;
      constexpr std::ptrdiff_t nEditorID = 0x4;
      constexpr std::ptrdiff_t flExecTime = 0x8;
      constexpr std::ptrdiff_t unFlags = 0xc;
      constexpr std::ptrdiff_t tagName = 0x10;
    }
    namespace PulseGraphExecutionHistoryNodeDesc_t {
      constexpr std::ptrdiff_t strCellDesc = 0x0;
      constexpr std::ptrdiff_t strBindingName = 0x10;
    }
    namespace PulseGraphInstanceID_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
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
    namespace PulseRegisterMap_t {
      constexpr std::ptrdiff_t m_Inparams = 0x0;
      constexpr std::ptrdiff_t m_InparamsWhichCanBeMoved = 0x10;
      constexpr std::ptrdiff_t m_Outparams = 0x20;
    }
    namespace PulseRuntimeBlackboardReferenceIndex_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace PulseRuntimeCallInfoIndex_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace PulseRuntimeCellIndex_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace PulseRuntimeChunkIndex_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace PulseRuntimeConstantIndex_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace PulseRuntimeDomainValueIndex_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace PulseRuntimeEntrypointIndex_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace PulseRuntimeInvokeIndex_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace PulseRuntimeOutputIndex_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace PulseRuntimeRegisterIndex_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace PulseRuntimeStateOffset_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace PulseRuntimeVarIndex_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace PulseSelectorOutflowList_t {
      constexpr std::ptrdiff_t m_Outflows = 0x0;
    }
    namespace RenderHairStrandInfo_t {
      constexpr std::ptrdiff_t m_nGuideHairIndices_nSurfaceTriIndex = 0x0;
      constexpr std::ptrdiff_t m_vGuideBary_vBaseBary = 0x8;
      constexpr std::ptrdiff_t m_vRootOffset_flLengthScale = 0x10;
      constexpr std::ptrdiff_t m_nPackedBaseUv = 0x18;
      constexpr std::ptrdiff_t m_nPackedSurfaceNormalOs = 0x1c;
      constexpr std::ptrdiff_t m_nPackedSurfaceTangentOs = 0x20;
      constexpr std::ptrdiff_t m_nDataOffset_Segments = 0x24;
    }
    namespace RenderSkeletonBone_t {
      constexpr std::ptrdiff_t m_boneName = 0x0;
      constexpr std::ptrdiff_t m_parentName = 0x8;
      constexpr std::ptrdiff_t m_invBindPose = 0x10;
      constexpr std::ptrdiff_t m_bbox = 0x40;
      constexpr std::ptrdiff_t m_flSphereRadius = 0x58;
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
    namespace SampleCode {
      constexpr std::ptrdiff_t m_subCode = 0x0;
    }
    namespace ScriptInfo_t {
      constexpr std::ptrdiff_t m_code = 0x0;
      constexpr std::ptrdiff_t m_paramsModified = 0x8;
      constexpr std::ptrdiff_t m_proxyReadParams = 0x20;
      constexpr std::ptrdiff_t m_proxyWriteParams = 0x38;
      constexpr std::ptrdiff_t m_eScriptType = 0x50;
    }
    namespace SignatureOutflow_Continue {
    }
    namespace SignatureOutflow_Resume {
    }
    namespace SkeletonAnimCapture_t {
      constexpr std::ptrdiff_t m_nEntIndex = 0x0;
      constexpr std::ptrdiff_t m_nEntParent = 0x4;
      constexpr std::ptrdiff_t m_ImportedCollision = 0x8;
      constexpr std::ptrdiff_t m_ModelName = 0x20;
      constexpr std::ptrdiff_t m_CaptureName = 0x28;
      constexpr std::ptrdiff_t m_ModelBindPose = 0x30;
      constexpr std::ptrdiff_t m_FeModelInitPose = 0x48;
      constexpr std::ptrdiff_t m_nFlexControllers = 0x60;
      constexpr std::ptrdiff_t m_bPredicted = 0x64;
      constexpr std::ptrdiff_t m_Frames = 0xa8;
    }
    namespace SkeletonAnimCapture_t__Bone_t {
      constexpr std::ptrdiff_t m_Name = 0x0;
      constexpr std::ptrdiff_t m_BindPose = 0x10;
      constexpr std::ptrdiff_t m_nParent = 0x30;
    }
    namespace SkeletonAnimCapture_t__Camera_t {
      constexpr std::ptrdiff_t m_tmCamera = 0x0;
      constexpr std::ptrdiff_t m_flTime = 0x20;
    }
    namespace SkeletonAnimCapture_t__FrameStamp_t {
      constexpr std::ptrdiff_t m_flTime = 0x0;
      constexpr std::ptrdiff_t m_flEntitySimTime = 0x4;
      constexpr std::ptrdiff_t m_bTeleportTick = 0x8;
      constexpr std::ptrdiff_t m_bPredicted = 0x9;
      constexpr std::ptrdiff_t m_flCurTime = 0xc;
      constexpr std::ptrdiff_t m_flRealTime = 0x10;
      constexpr std::ptrdiff_t m_nFrameCount = 0x14;
      constexpr std::ptrdiff_t m_nTickCount = 0x18;
    }
    namespace SkeletonAnimCapture_t__Frame_t {
      constexpr std::ptrdiff_t m_flTime = 0x0;
      constexpr std::ptrdiff_t m_Stamp = 0x4;
      constexpr std::ptrdiff_t m_Transform = 0x20;
      constexpr std::ptrdiff_t m_bTeleport = 0x40;
      constexpr std::ptrdiff_t m_CompositeBones = 0x48;
      constexpr std::ptrdiff_t m_SimStateBones = 0x60;
      constexpr std::ptrdiff_t m_FeModelAnims = 0x78;
      constexpr std::ptrdiff_t m_FeModelPos = 0x90;
      constexpr std::ptrdiff_t m_FlexControllerWeights = 0xa8;
    }
    namespace SkeletonBoneBounds_t {
      constexpr std::ptrdiff_t m_vecCenter = 0x0;
      constexpr std::ptrdiff_t m_vecSize = 0xc;
    }
    namespace SkeletonDemoDb_t {
      constexpr std::ptrdiff_t m_AnimCaptures = 0x0;
      constexpr std::ptrdiff_t m_CameraTrack = 0x18;
      constexpr std::ptrdiff_t m_flRecordingTime = 0x30;
    }
    namespace SolveIKChainPoseOpFixedSettings_t {
      constexpr std::ptrdiff_t m_ChainsToSolveData = 0x0;
    }
    namespace StanceInfo_t {
      constexpr std::ptrdiff_t m_vPosition = 0x0;
      constexpr std::ptrdiff_t m_flDirection = 0xc;
    }
    namespace TagSpan_t {
      constexpr std::ptrdiff_t m_tagIndex = 0x0;
      constexpr std::ptrdiff_t m_startCycle = 0x4;
      constexpr std::ptrdiff_t m_endCycle = 0x8;
    }
    namespace TraceSettings_t {
      constexpr std::ptrdiff_t m_flTraceHeight = 0x0;
      constexpr std::ptrdiff_t m_flTraceRadius = 0x4;
    }
    namespace TwoBoneIKSettings_t {
      constexpr std::ptrdiff_t m_endEffectorType = 0x0;
      constexpr std::ptrdiff_t m_endEffectorAttachment = 0x10;
      constexpr std::ptrdiff_t m_targetType = 0x90;
      constexpr std::ptrdiff_t m_targetAttachment = 0xa0;
      constexpr std::ptrdiff_t m_targetBoneIndex = 0x120;
      constexpr std::ptrdiff_t m_hPositionParam = 0x124;
      constexpr std::ptrdiff_t m_hRotationParam = 0x126;
      constexpr std::ptrdiff_t m_bAlwaysUseFallbackHinge = 0x128;
      constexpr std::ptrdiff_t m_vLsFallbackHingeAxis = 0x130;
      constexpr std::ptrdiff_t m_nFixedBoneIndex = 0x140;
      constexpr std::ptrdiff_t m_nMiddleBoneIndex = 0x144;
      constexpr std::ptrdiff_t m_nEndBoneIndex = 0x148;
      constexpr std::ptrdiff_t m_bMatchTargetOrientation = 0x14c;
      constexpr std::ptrdiff_t m_bConstrainTwist = 0x14d;
      constexpr std::ptrdiff_t m_flMaxTwist = 0x150;
    }
    namespace VPhysXAggregateData_t {
      constexpr std::ptrdiff_t m_nFlags = 0x0;
      constexpr std::ptrdiff_t m_nRefCounter = 0x2;
      constexpr std::ptrdiff_t m_bonesHash = 0x8;
      constexpr std::ptrdiff_t m_boneNames = 0x20;
      constexpr std::ptrdiff_t m_indexNames = 0x38;
      constexpr std::ptrdiff_t m_indexHash = 0x50;
      constexpr std::ptrdiff_t m_bindPose = 0x68;
      constexpr std::ptrdiff_t m_parts = 0x80;
      constexpr std::ptrdiff_t m_shapeMarkups = 0x98;
      constexpr std::ptrdiff_t m_constraints2 = 0xb0;
      constexpr std::ptrdiff_t m_joints = 0xc8;
      constexpr std::ptrdiff_t m_pFeModel = 0xe0;
      constexpr std::ptrdiff_t m_boneParents = 0xe8;
      constexpr std::ptrdiff_t m_surfacePropertyHashes = 0x100;
      constexpr std::ptrdiff_t m_collisionAttributes = 0x118;
      constexpr std::ptrdiff_t m_debugPartNames = 0x130;
      constexpr std::ptrdiff_t m_embeddedKeyvalues = 0x148;
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
    namespace VPhysXConstraintParams_t {
      constexpr std::ptrdiff_t m_nType = 0x0;
      constexpr std::ptrdiff_t m_nTranslateMotion = 0x1;
      constexpr std::ptrdiff_t m_nRotateMotion = 0x2;
      constexpr std::ptrdiff_t m_nFlags = 0x3;
      constexpr std::ptrdiff_t m_anchor = 0x4;
      constexpr std::ptrdiff_t m_axes = 0x1c;
      constexpr std::ptrdiff_t m_maxForce = 0x3c;
      constexpr std::ptrdiff_t m_maxTorque = 0x40;
      constexpr std::ptrdiff_t m_linearLimitValue = 0x44;
      constexpr std::ptrdiff_t m_linearLimitRestitution = 0x48;
      constexpr std::ptrdiff_t m_linearLimitSpring = 0x4c;
      constexpr std::ptrdiff_t m_linearLimitDamping = 0x50;
      constexpr std::ptrdiff_t m_twistLowLimitValue = 0x54;
      constexpr std::ptrdiff_t m_twistLowLimitRestitution = 0x58;
      constexpr std::ptrdiff_t m_twistLowLimitSpring = 0x5c;
      constexpr std::ptrdiff_t m_twistLowLimitDamping = 0x60;
      constexpr std::ptrdiff_t m_twistHighLimitValue = 0x64;
      constexpr std::ptrdiff_t m_twistHighLimitRestitution = 0x68;
      constexpr std::ptrdiff_t m_twistHighLimitSpring = 0x6c;
      constexpr std::ptrdiff_t m_twistHighLimitDamping = 0x70;
      constexpr std::ptrdiff_t m_swing1LimitValue = 0x74;
      constexpr std::ptrdiff_t m_swing1LimitRestitution = 0x78;
      constexpr std::ptrdiff_t m_swing1LimitSpring = 0x7c;
      constexpr std::ptrdiff_t m_swing1LimitDamping = 0x80;
      constexpr std::ptrdiff_t m_swing2LimitValue = 0x84;
      constexpr std::ptrdiff_t m_swing2LimitRestitution = 0x88;
      constexpr std::ptrdiff_t m_swing2LimitSpring = 0x8c;
      constexpr std::ptrdiff_t m_swing2LimitDamping = 0x90;
      constexpr std::ptrdiff_t m_goalPosition = 0x94;
      constexpr std::ptrdiff_t m_goalOrientation = 0xa0;
      constexpr std::ptrdiff_t m_goalAngularVelocity = 0xb0;
      constexpr std::ptrdiff_t m_driveSpringX = 0xbc;
      constexpr std::ptrdiff_t m_driveSpringY = 0xc0;
      constexpr std::ptrdiff_t m_driveSpringZ = 0xc4;
      constexpr std::ptrdiff_t m_driveDampingX = 0xc8;
      constexpr std::ptrdiff_t m_driveDampingY = 0xcc;
      constexpr std::ptrdiff_t m_driveDampingZ = 0xd0;
      constexpr std::ptrdiff_t m_driveSpringTwist = 0xd4;
      constexpr std::ptrdiff_t m_driveSpringSwing = 0xd8;
      constexpr std::ptrdiff_t m_driveSpringSlerp = 0xdc;
      constexpr std::ptrdiff_t m_driveDampingTwist = 0xe0;
      constexpr std::ptrdiff_t m_driveDampingSwing = 0xe4;
      constexpr std::ptrdiff_t m_driveDampingSlerp = 0xe8;
      constexpr std::ptrdiff_t m_solverIterationCount = 0xec;
      constexpr std::ptrdiff_t m_projectionLinearTolerance = 0xf0;
      constexpr std::ptrdiff_t m_projectionAngularTolerance = 0xf4;
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
    namespace VPhysXRange_t {
      constexpr std::ptrdiff_t m_flMin = 0x0;
      constexpr std::ptrdiff_t m_flMax = 0x4;
    }
    namespace VPhysics2ShapeDef_t {
      constexpr std::ptrdiff_t m_spheres = 0x0;
      constexpr std::ptrdiff_t m_capsules = 0x18;
      constexpr std::ptrdiff_t m_hulls = 0x30;
      constexpr std::ptrdiff_t m_meshes = 0x48;
      constexpr std::ptrdiff_t m_CollisionAttributeIndices = 0x60;
    }
    namespace WeightList {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_weights = 0x8;
    }
  }
}
