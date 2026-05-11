// Generated via Nightmare Oracle
#pragma once
#include <cstddef>

namespace deadlock_dumper {
  namespace soundsystem_dll {
    namespace CAudioEmphasisSample {
      constexpr std::ptrdiff_t m_flTime = 0x0;
      constexpr std::ptrdiff_t m_flValue = 0x4;
    }
    namespace CAudioMorphData {
      constexpr std::ptrdiff_t m_times = 0x0;
      constexpr std::ptrdiff_t m_nameHashCodes = 0x18;
      constexpr std::ptrdiff_t m_nameStrings = 0x30;
      constexpr std::ptrdiff_t m_samples = 0x48;
      constexpr std::ptrdiff_t m_flEaseIn = 0x60;
      constexpr std::ptrdiff_t m_flEaseOut = 0x64;
    }
    namespace CAudioPhonemeTag {
      constexpr std::ptrdiff_t m_flStartTime = 0x0;
      constexpr std::ptrdiff_t m_flEndTime = 0x4;
      constexpr std::ptrdiff_t m_nPhonemeCode = 0x8;
    }
    namespace CAudioSentence {
      constexpr std::ptrdiff_t m_bShouldVoiceDuck = 0x0;
      constexpr std::ptrdiff_t m_RunTimePhonemes = 0x8;
      constexpr std::ptrdiff_t m_EmphasisSamples = 0x20;
      constexpr std::ptrdiff_t m_morphData = 0x38;
    }
    namespace CDSPMixgroupModifier {
      constexpr std::ptrdiff_t m_mixgroup = 0x0;
      constexpr std::ptrdiff_t m_flModifier = 0x8;
      constexpr std::ptrdiff_t m_flModifierMin = 0xc;
      constexpr std::ptrdiff_t m_flSourceModifier = 0x10;
      constexpr std::ptrdiff_t m_flSourceModifierMin = 0x14;
      constexpr std::ptrdiff_t m_flListenerReverbModifierWhenSourceReverbIsActive = 0x18;
    }
    namespace CDSPPresetMixgroupModifierTable {
      constexpr std::ptrdiff_t m_table = 0x0;
    }
    namespace CDspPresetModifierList {
      constexpr std::ptrdiff_t m_dspName = 0x0;
      constexpr std::ptrdiff_t m_modifiers = 0x8;
    }
    namespace CSosGroupActionLimitSchema {
      constexpr std::ptrdiff_t m_nMaxCount = 0x8;
      constexpr std::ptrdiff_t m_nStopType = 0xc;
      constexpr std::ptrdiff_t m_nSortType = 0x10;
      constexpr std::ptrdiff_t m_bStopImmediate = 0x14;
      constexpr std::ptrdiff_t m_bCountStopped = 0x15;
    }
    namespace CSosGroupActionMemberCountEnvelopeSchema {
      constexpr std::ptrdiff_t m_nBaseCount = 0x8;
      constexpr std::ptrdiff_t m_nTargetCount = 0xc;
      constexpr std::ptrdiff_t m_flBaseValue = 0x10;
      constexpr std::ptrdiff_t m_flTargetValue = 0x14;
      constexpr std::ptrdiff_t m_flAttack = 0x18;
      constexpr std::ptrdiff_t m_flDecay = 0x1c;
      constexpr std::ptrdiff_t m_resultVarName = 0x20;
      constexpr std::ptrdiff_t m_bSaveToGroup = 0x28;
    }
    namespace CSosGroupActionOcclusionSchema {
      constexpr std::ptrdiff_t m_flCalculationInterval = 0x8;
      constexpr std::ptrdiff_t m_flRadius = 0xc;
      constexpr std::ptrdiff_t m_flOcclusionScale = 0x10;
      constexpr std::ptrdiff_t m_flOcclusionMin = 0x14;
      constexpr std::ptrdiff_t m_flOcclusionMax = 0x18;
      constexpr std::ptrdiff_t m_flTestDepth = 0x1c;
    }
    namespace CSosGroupActionSchema {
    }
    namespace CSosGroupActionSetSoundeventParameterSchema {
      constexpr std::ptrdiff_t m_nMaxCount = 0x8;
      constexpr std::ptrdiff_t m_flMinValue = 0xc;
      constexpr std::ptrdiff_t m_flMaxValue = 0x10;
      constexpr std::ptrdiff_t m_opvarName = 0x18;
      constexpr std::ptrdiff_t m_nSortType = 0x20;
    }
    namespace CSosGroupActionSoundeventClusterSchema {
      constexpr std::ptrdiff_t m_nMinNearby = 0x8;
      constexpr std::ptrdiff_t m_flClusterEpsilon = 0xc;
      constexpr std::ptrdiff_t m_shouldPlayOpvar = 0x10;
      constexpr std::ptrdiff_t m_shouldPlayClusterChild = 0x18;
      constexpr std::ptrdiff_t m_clusterSizeOpvar = 0x20;
      constexpr std::ptrdiff_t m_groupBoundingBoxMinsOpvar = 0x28;
      constexpr std::ptrdiff_t m_groupBoundingBoxMaxsOpvar = 0x30;
    }
    namespace CSosGroupActionSoundeventCountSchema {
      constexpr std::ptrdiff_t m_bExcludeStoppedSounds = 0x8;
      constexpr std::ptrdiff_t m_strCountKeyName = 0x10;
    }
    namespace CSosGroupActionSoundeventMinMaxValuesSchema {
      constexpr std::ptrdiff_t m_strQueryPublicFieldName = 0x8;
      constexpr std::ptrdiff_t m_strDelayPublicFieldName = 0x10;
      constexpr std::ptrdiff_t m_bExcludeStoppedSounds = 0x18;
      constexpr std::ptrdiff_t m_bExcludeDelayedSounds = 0x19;
      constexpr std::ptrdiff_t m_bExcludeSoundsBelowThreshold = 0x1a;
      constexpr std::ptrdiff_t m_flExcludeSoundsMinThresholdValue = 0x1c;
      constexpr std::ptrdiff_t m_bExcludSoundsAboveThreshold = 0x20;
      constexpr std::ptrdiff_t m_flExcludeSoundsMaxThresholdValue = 0x24;
      constexpr std::ptrdiff_t m_strMinValueName = 0x28;
      constexpr std::ptrdiff_t m_strMaxValueName = 0x30;
    }
    namespace CSosGroupActionSoundeventPrioritySchema {
      constexpr std::ptrdiff_t m_priorityValue = 0x8;
      constexpr std::ptrdiff_t m_priorityVolumeScalar = 0x10;
      constexpr std::ptrdiff_t m_priorityContributeButDontRead = 0x18;
      constexpr std::ptrdiff_t m_bPriorityReadButDontContribute = 0x20;
    }
    namespace CSosGroupActionTimeBlockLimitSchema {
      constexpr std::ptrdiff_t m_nMaxCount = 0x8;
      constexpr std::ptrdiff_t m_flMaxDuration = 0xc;
    }
    namespace CSosGroupActionTimeLimitSchema {
      constexpr std::ptrdiff_t m_flMaxDuration = 0x8;
    }
    namespace CSosSoundEventGroupSchema {
      constexpr std::ptrdiff_t m_nGroupType = 0x8;
      constexpr std::ptrdiff_t m_bBlocksEvents = 0xc;
      constexpr std::ptrdiff_t m_nBlockMaxCount = 0x10;
      constexpr std::ptrdiff_t m_flMemberLifespanTime = 0x14;
      constexpr std::ptrdiff_t m_bInvertMatch = 0x18;
      constexpr std::ptrdiff_t m_Behavior_EventName = 0x1c;
      constexpr std::ptrdiff_t m_matchSoundEventName = 0x20;
      constexpr std::ptrdiff_t m_bMatchEventSubString = 0x28;
      constexpr std::ptrdiff_t m_matchSoundEventSubString = 0x30;
      constexpr std::ptrdiff_t m_Behavior_EntIndex = 0x38;
      constexpr std::ptrdiff_t m_flEntIndex = 0x3c;
      constexpr std::ptrdiff_t m_Behavior_Opvar = 0x40;
      constexpr std::ptrdiff_t m_flOpvar = 0x44;
      constexpr std::ptrdiff_t m_Behavior_String = 0x48;
      constexpr std::ptrdiff_t m_opvarString = 0x50;
      constexpr std::ptrdiff_t m_vActions = 0x58;
    }
    namespace CSoundContainerReference {
      constexpr std::ptrdiff_t m_namespace = 0x0;
      constexpr std::ptrdiff_t m_bUseReference = 0x8;
      constexpr std::ptrdiff_t m_sound = 0x10;
      constexpr std::ptrdiff_t m_pSound = 0x18;
    }
    namespace CSoundContainerReferenceArray {
      constexpr std::ptrdiff_t m_bUseReference = 0x0;
      constexpr std::ptrdiff_t m_sounds = 0x8;
      constexpr std::ptrdiff_t m_pSounds = 0x20;
    }
    namespace CSoundEventMetaData {
      constexpr std::ptrdiff_t m_soundEventVMix = 0x0;
    }
    namespace CSoundInfoHeader {
    }
    namespace CVMixAdditionalOutput {
      constexpr std::ptrdiff_t m_name = 0x0;
    }
    namespace CVMixAudioMeter {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_displayName = 0x8;
    }
    namespace CVMixAutoFilterProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixAutomaticControlInput {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_nControlInputIndex = 0x8;
      constexpr std::ptrdiff_t m_bIsTrackSend = 0xc;
      constexpr std::ptrdiff_t m_bIsStackVar = 0xd;
    }
    namespace CVMixBaseProcessorDesc {
      constexpr std::ptrdiff_t m_name = 0x8;
      constexpr std::ptrdiff_t m_nChannels = 0x14;
      constexpr std::ptrdiff_t m_flxfade = 0x18;
    }
    namespace CVMixBoxverb2ProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixBoxverbProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixCommand {
      constexpr std::ptrdiff_t m_nCommand = 0x0;
      constexpr std::ptrdiff_t m_nParameterNameHash = 0x4;
      constexpr std::ptrdiff_t m_nOutputSubmix = 0x8;
      constexpr std::ptrdiff_t m_nInputSubmix0 = 0xc;
      constexpr std::ptrdiff_t m_nInputSubmix1 = 0x10;
      constexpr std::ptrdiff_t m_nProcessor = 0x14;
      constexpr std::ptrdiff_t m_nInputValue0 = 0x18;
      constexpr std::ptrdiff_t m_nInputValue1 = 0x1c;
    }
    namespace CVMixControlInput {
      constexpr std::ptrdiff_t m_flDefaultValue = 0x10;
    }
    namespace CVMixControlInputArray {
      constexpr std::ptrdiff_t m_nArrayIndex = 0x10;
    }
    namespace CVMixControlMeter {
      constexpr std::ptrdiff_t m_nValueIndex = 0x10;
    }
    namespace CVMixControlOutput {
      constexpr std::ptrdiff_t m_flDefaultValue = 0x10;
    }
    namespace CVMixConvolutionProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixCurveHeader {
      constexpr std::ptrdiff_t m_nControlPointCount = 0x0;
      constexpr std::ptrdiff_t m_nControlPointStart = 0x4;
    }
    namespace CVMixDelayProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixDiffusorProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixDualCompressorProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixDynamics3BandProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixDynamicsCompressorProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixDynamicsProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixEQ8ProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixEffectChainProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixEnvelopeProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixFilterProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixFlangerProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixFreeverbProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixGraphDescData {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_nGraphOutputChannels = 0x8;
      constexpr std::ptrdiff_t m_bIsMainGraph = 0xc;
    }
    namespace CVMixImpulseResponseInput {
    }
    namespace CVMixInputBase {
      constexpr std::ptrdiff_t m_name = 0x0;
    }
    namespace CVMixModDelayProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixNameInput {
      constexpr std::ptrdiff_t m_defaultValue = 0x10;
    }
    namespace CVMixNameInputMeter {
      constexpr std::ptrdiff_t m_nValueIndex = 0x10;
    }
    namespace CVMixOscProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixPannerProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixPitchShiftProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixPlateReverbProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixPresetDSPProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixShaperProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixSteamAudioDirectProcessorDesc {
    }
    namespace CVMixSteamAudioHRTFProcessorDesc {
    }
    namespace CVMixSteamAudioHybridReverbProcessorDesc {
    }
    namespace CVMixSteamAudioPathingProcessorDesc {
    }
    namespace CVMixStereoDelayProcessorDesc {
    }
    namespace CVMixSubgraphSwitchProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixUtilityProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixVocoderProcessorDesc {
      constexpr std::ptrdiff_t m_desc = 0x20;
    }
    namespace CVMixVsndInput {
      constexpr std::ptrdiff_t m_defaultValue = 0x10;
      constexpr std::ptrdiff_t m_nProcessor = 0x18;
    }
    namespace CVSound {
      constexpr std::ptrdiff_t m_nRate = 0x0;
      constexpr std::ptrdiff_t m_nFormat = 0x4;
      constexpr std::ptrdiff_t m_nChannels = 0x8;
      constexpr std::ptrdiff_t m_nLoopStart = 0xc;
      constexpr std::ptrdiff_t m_nSampleCount = 0x10;
      constexpr std::ptrdiff_t m_flDuration = 0x14;
      constexpr std::ptrdiff_t m_Sentences = 0x18;
      constexpr std::ptrdiff_t m_nStreamingSize = 0x30;
      constexpr std::ptrdiff_t m_nSeekTable = 0x38;
      constexpr std::ptrdiff_t m_nLoopEnd = 0x50;
      constexpr std::ptrdiff_t m_encodedHeader = 0x58;
    }
    namespace CVoiceContainerAmpedDecayingSineWave {
      constexpr std::ptrdiff_t m_flGainAmount = 0xb0;
    }
    namespace CVoiceContainerAnalysisBase {
      constexpr std::ptrdiff_t m_bRegenerateCurveOnCompile = 0x8;
      constexpr std::ptrdiff_t m_curve = 0x10;
    }
    namespace CVoiceContainerAsyncGenerator {
    }
    namespace CVoiceContainerBase {
      constexpr std::ptrdiff_t m_vSound = 0x28;
      constexpr std::ptrdiff_t m_pEnvelopeAnalyzer = 0xa0;
    }
    namespace CVoiceContainerBlender {
      constexpr std::ptrdiff_t m_firstSound = 0xa8;
      constexpr std::ptrdiff_t m_secondSound = 0xc8;
      constexpr std::ptrdiff_t m_flBlendFactor = 0xe8;
    }
    namespace CVoiceContainerDecayingSineWave {
      constexpr std::ptrdiff_t m_flFrequency = 0xa8;
      constexpr std::ptrdiff_t m_flDecayTime = 0xac;
    }
    namespace CVoiceContainerDefault {
    }
    namespace CVoiceContainerEnum {
      constexpr std::ptrdiff_t m_soundsToPlay = 0xa8;
      constexpr std::ptrdiff_t m_iSelection = 0xe0;
      constexpr std::ptrdiff_t m_flCrossfadeTime = 0xe4;
    }
    namespace CVoiceContainerEnvelope {
      constexpr std::ptrdiff_t m_sound = 0xa8;
      constexpr std::ptrdiff_t m_analysisContainer = 0xb0;
    }
    namespace CVoiceContainerEnvelopeAnalyzer {
      constexpr std::ptrdiff_t m_mode = 0x50;
      constexpr std::ptrdiff_t m_fAnalysisWindowMs = 0x54;
      constexpr std::ptrdiff_t m_flThreshold = 0x58;
    }
    namespace CVoiceContainerGenerator {
    }
    namespace CVoiceContainerGranulator {
      constexpr std::ptrdiff_t m_flGrainLength = 0xb8;
      constexpr std::ptrdiff_t m_flGrainCrossfadeAmount = 0xbc;
      constexpr std::ptrdiff_t m_flStartJitter = 0xc0;
      constexpr std::ptrdiff_t m_flPlaybackJitter = 0xc4;
      constexpr std::ptrdiff_t m_bShouldWraparound = 0xc8;
      constexpr std::ptrdiff_t m_sourceAudio = 0xd0;
    }
    namespace CVoiceContainerLoopTrigger {
      constexpr std::ptrdiff_t m_sound = 0xa8;
      constexpr std::ptrdiff_t m_flRetriggerTimeMin = 0xc8;
      constexpr std::ptrdiff_t m_flRetriggerTimeMax = 0xcc;
      constexpr std::ptrdiff_t m_flFadeTime = 0xd0;
      constexpr std::ptrdiff_t m_bCrossFade = 0xd4;
    }
    namespace CVoiceContainerLoopXFade {
      constexpr std::ptrdiff_t m_sound = 0xa8;
      constexpr std::ptrdiff_t m_flLoopEnd = 0xc8;
      constexpr std::ptrdiff_t m_flLoopStart = 0xcc;
      constexpr std::ptrdiff_t m_flFadeOut = 0xd0;
      constexpr std::ptrdiff_t m_flFadeIn = 0xd4;
      constexpr std::ptrdiff_t m_bPlayHead = 0xd8;
      constexpr std::ptrdiff_t m_bPlayTail = 0xd9;
      constexpr std::ptrdiff_t m_bEqualPow = 0xda;
    }
    namespace CVoiceContainerMultiBlender {
      constexpr std::ptrdiff_t m_soundsToPlay = 0xa8;
      constexpr std::ptrdiff_t m_flBlendFactor = 0xe0;
      constexpr std::ptrdiff_t m_flCrossover = 0xe4;
    }
    namespace CVoiceContainerNull {
    }
    namespace CVoiceContainerParameterBlender {
      constexpr std::ptrdiff_t m_firstSound = 0xa8;
      constexpr std::ptrdiff_t m_secondSound = 0xc8;
      constexpr std::ptrdiff_t m_bEnableOcclusionBlend = 0xe8;
      constexpr std::ptrdiff_t m_curve1 = 0xf0;
      constexpr std::ptrdiff_t m_curve2 = 0x130;
      constexpr std::ptrdiff_t m_bEnableDistanceBlend = 0x170;
      constexpr std::ptrdiff_t m_curve3 = 0x178;
      constexpr std::ptrdiff_t m_curve4 = 0x1b8;
    }
    namespace CVoiceContainerRandomSampler {
      constexpr std::ptrdiff_t m_flAmplitude = 0xb8;
      constexpr std::ptrdiff_t m_flAmplitudeJitter = 0xbc;
      constexpr std::ptrdiff_t m_flTimeJitter = 0xc0;
      constexpr std::ptrdiff_t m_flMaxLength = 0xc4;
      constexpr std::ptrdiff_t m_nNumDelayVariations = 0xc8;
      constexpr std::ptrdiff_t m_grainResources = 0xd0;
    }
    namespace CVoiceContainerRealtimeFMSineWave {
      constexpr std::ptrdiff_t m_flCarrierFrequency = 0xa8;
      constexpr std::ptrdiff_t m_flModulatorFrequency = 0xac;
      constexpr std::ptrdiff_t m_flModulatorAmount = 0xb0;
    }
    namespace CVoiceContainerSelector {
      constexpr std::ptrdiff_t m_mode = 0xa8;
      constexpr std::ptrdiff_t m_soundsToPlay = 0xb0;
      constexpr std::ptrdiff_t m_fProbabilityWeights = 0xe8;
    }
    namespace CVoiceContainerSet {
      constexpr std::ptrdiff_t m_soundsToPlay = 0xa8;
    }
    namespace CVoiceContainerSetElement {
      constexpr std::ptrdiff_t m_sound = 0x0;
      constexpr std::ptrdiff_t m_flVolumeDB = 0x20;
    }
    namespace CVoiceContainerShapedNoise {
      constexpr std::ptrdiff_t m_bUseCurveForFrequency = 0xa8;
      constexpr std::ptrdiff_t m_flFrequency = 0xac;
      constexpr std::ptrdiff_t m_frequencySweep = 0xb0;
      constexpr std::ptrdiff_t m_bUseCurveForResonance = 0xf0;
      constexpr std::ptrdiff_t m_flResonance = 0xf4;
      constexpr std::ptrdiff_t m_resonanceSweep = 0xf8;
      constexpr std::ptrdiff_t m_bUseCurveForAmplitude = 0x138;
      constexpr std::ptrdiff_t m_flGainInDecibels = 0x13c;
      constexpr std::ptrdiff_t m_gainSweep = 0x140;
    }
    namespace CVoiceContainerStaticAdditiveSynth {
      constexpr std::ptrdiff_t m_tones = 0xb8;
    }
    namespace CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance {
      constexpr std::ptrdiff_t m_flMinVolume = 0x0;
      constexpr std::ptrdiff_t m_nInstancesAtMinVolume = 0x4;
      constexpr std::ptrdiff_t m_flMaxVolume = 0x8;
      constexpr std::ptrdiff_t m_nInstancesAtMaxVolume = 0xc;
    }
    namespace CVoiceContainerStaticAdditiveSynth__CHarmonic {
      constexpr std::ptrdiff_t m_nWaveform = 0x0;
      constexpr std::ptrdiff_t m_nFundamental = 0x1;
      constexpr std::ptrdiff_t m_nOctave = 0x4;
      constexpr std::ptrdiff_t m_flCents = 0x8;
      constexpr std::ptrdiff_t m_flPhase = 0xc;
      constexpr std::ptrdiff_t m_curve = 0x10;
      constexpr std::ptrdiff_t m_volumeScaling = 0x50;
    }
    namespace CVoiceContainerStaticAdditiveSynth__CTone {
      constexpr std::ptrdiff_t m_harmonics = 0x0;
      constexpr std::ptrdiff_t m_curve = 0x18;
      constexpr std::ptrdiff_t m_bSyncInstances = 0x58;
    }
    namespace CVoiceContainerSwitch {
      constexpr std::ptrdiff_t m_soundsToPlay = 0xa8;
    }
    namespace CVoiceContainerTapePlayer {
      constexpr std::ptrdiff_t m_bShouldWraparound = 0xb8;
      constexpr std::ptrdiff_t m_sourceAudio = 0xc0;
      constexpr std::ptrdiff_t m_flTapeSpeedAttackTime = 0xc8;
      constexpr std::ptrdiff_t m_flTapeSpeedReleaseTime = 0xcc;
    }
    namespace SelectedEditItemInfo_t {
      constexpr std::ptrdiff_t m_EditItems = 0x0;
    }
    namespace SosEditItemInfo_t {
      constexpr std::ptrdiff_t itemType = 0x0;
      constexpr std::ptrdiff_t itemName = 0x8;
      constexpr std::ptrdiff_t itemTypeName = 0x10;
      constexpr std::ptrdiff_t itemKVString = 0x20;
      constexpr std::ptrdiff_t itemPos = 0x28;
    }
    namespace VMixAutoFilterDesc_t {
      constexpr std::ptrdiff_t m_flEnvelopeAmount = 0x0;
      constexpr std::ptrdiff_t m_flAttackTimeMS = 0x4;
      constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x8;
      constexpr std::ptrdiff_t m_filter = 0xc;
      constexpr std::ptrdiff_t m_flLFOAmount = 0x1c;
      constexpr std::ptrdiff_t m_flLFORate = 0x20;
      constexpr std::ptrdiff_t m_flPhase = 0x24;
      constexpr std::ptrdiff_t m_nLFOShape = 0x28;
    }
    namespace VMixBoxverbDesc_t {
      constexpr std::ptrdiff_t m_flSizeMax = 0x0;
      constexpr std::ptrdiff_t m_flSizeMin = 0x4;
      constexpr std::ptrdiff_t m_flComplexity = 0x8;
      constexpr std::ptrdiff_t m_flDiffusion = 0xc;
      constexpr std::ptrdiff_t m_flModDepth = 0x10;
      constexpr std::ptrdiff_t m_flModRate = 0x14;
      constexpr std::ptrdiff_t m_bParallel = 0x18;
      constexpr std::ptrdiff_t m_filterType = 0x1c;
      constexpr std::ptrdiff_t m_flWidth = 0x2c;
      constexpr std::ptrdiff_t m_flHeight = 0x30;
      constexpr std::ptrdiff_t m_flDepth = 0x34;
      constexpr std::ptrdiff_t m_flFeedbackScale = 0x38;
      constexpr std::ptrdiff_t m_flFeedbackWidth = 0x3c;
      constexpr std::ptrdiff_t m_flFeedbackHeight = 0x40;
      constexpr std::ptrdiff_t m_flFeedbackDepth = 0x44;
      constexpr std::ptrdiff_t m_flOutputGain = 0x48;
      constexpr std::ptrdiff_t m_flTaps = 0x4c;
    }
    namespace VMixConvolutionDesc_t {
      constexpr std::ptrdiff_t m_fldbGain = 0x0;
      constexpr std::ptrdiff_t m_flPreDelayMS = 0x4;
      constexpr std::ptrdiff_t m_flWetMix = 0x8;
      constexpr std::ptrdiff_t m_fldbLow = 0xc;
      constexpr std::ptrdiff_t m_fldbMid = 0x10;
      constexpr std::ptrdiff_t m_fldbHigh = 0x14;
      constexpr std::ptrdiff_t m_flLowCutoffFreq = 0x18;
      constexpr std::ptrdiff_t m_flHighCutoffFreq = 0x1c;
    }
    namespace VMixDelayDesc_t {
      constexpr std::ptrdiff_t m_feedbackFilter = 0x0;
      constexpr std::ptrdiff_t m_bEnableFilter = 0x10;
      constexpr std::ptrdiff_t m_flDelay = 0x14;
      constexpr std::ptrdiff_t m_flDirectGain = 0x18;
      constexpr std::ptrdiff_t m_flDelayGain = 0x1c;
      constexpr std::ptrdiff_t m_flFeedbackGain = 0x20;
      constexpr std::ptrdiff_t m_flWidth = 0x24;
    }
    namespace VMixDiffusorDesc_t {
      constexpr std::ptrdiff_t m_flSize = 0x0;
      constexpr std::ptrdiff_t m_flComplexity = 0x4;
      constexpr std::ptrdiff_t m_flFeedback = 0x8;
      constexpr std::ptrdiff_t m_flOutputGain = 0xc;
    }
    namespace VMixDualCompressorDesc_t {
      constexpr std::ptrdiff_t m_flRMSTimeMS = 0x0;
      constexpr std::ptrdiff_t m_fldbKneeWidth = 0x4;
      constexpr std::ptrdiff_t m_flWetMix = 0x8;
      constexpr std::ptrdiff_t m_bPeakMode = 0xc;
      constexpr std::ptrdiff_t m_bandDesc = 0x10;
    }
    namespace VMixDynamics3BandDesc_t {
      constexpr std::ptrdiff_t m_fldbGainOutput = 0x0;
      constexpr std::ptrdiff_t m_flRMSTimeMS = 0x4;
      constexpr std::ptrdiff_t m_fldbKneeWidth = 0x8;
      constexpr std::ptrdiff_t m_flDepth = 0xc;
      constexpr std::ptrdiff_t m_flWetMix = 0x10;
      constexpr std::ptrdiff_t m_flTimeScale = 0x14;
      constexpr std::ptrdiff_t m_flLowCutoffFreq = 0x18;
      constexpr std::ptrdiff_t m_flHighCutoffFreq = 0x1c;
      constexpr std::ptrdiff_t m_bPeakMode = 0x20;
      constexpr std::ptrdiff_t m_bandDesc = 0x24;
    }
    namespace VMixDynamicsBand_t {
      constexpr std::ptrdiff_t m_fldbGainInput = 0x0;
      constexpr std::ptrdiff_t m_fldbGainOutput = 0x4;
      constexpr std::ptrdiff_t m_fldbThresholdBelow = 0x8;
      constexpr std::ptrdiff_t m_fldbThresholdAbove = 0xc;
      constexpr std::ptrdiff_t m_flRatioBelow = 0x10;
      constexpr std::ptrdiff_t m_flRatioAbove = 0x14;
      constexpr std::ptrdiff_t m_flAttackTimeMS = 0x18;
      constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x1c;
      constexpr std::ptrdiff_t m_bEnable = 0x20;
      constexpr std::ptrdiff_t m_bSolo = 0x21;
    }
    namespace VMixDynamicsCompressorDesc_t {
      constexpr std::ptrdiff_t m_fldbOutputGain = 0x0;
      constexpr std::ptrdiff_t m_fldbCompressionThreshold = 0x4;
      constexpr std::ptrdiff_t m_fldbKneeWidth = 0x8;
      constexpr std::ptrdiff_t m_flCompressionRatio = 0xc;
      constexpr std::ptrdiff_t m_flAttackTimeMS = 0x10;
      constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x14;
      constexpr std::ptrdiff_t m_flRMSTimeMS = 0x18;
      constexpr std::ptrdiff_t m_flWetMix = 0x1c;
      constexpr std::ptrdiff_t m_bPeakMode = 0x20;
    }
    namespace VMixDynamicsDesc_t {
      constexpr std::ptrdiff_t m_fldbGain = 0x0;
      constexpr std::ptrdiff_t m_fldbNoiseGateThreshold = 0x4;
      constexpr std::ptrdiff_t m_fldbCompressionThreshold = 0x8;
      constexpr std::ptrdiff_t m_fldbLimiterThreshold = 0xc;
      constexpr std::ptrdiff_t m_fldbKneeWidth = 0x10;
      constexpr std::ptrdiff_t m_flRatio = 0x14;
      constexpr std::ptrdiff_t m_flLimiterRatio = 0x18;
      constexpr std::ptrdiff_t m_flAttackTimeMS = 0x1c;
      constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x20;
      constexpr std::ptrdiff_t m_flRMSTimeMS = 0x24;
      constexpr std::ptrdiff_t m_flWetMix = 0x28;
      constexpr std::ptrdiff_t m_bPeakMode = 0x2c;
    }
    namespace VMixEQ8Desc_t {
      constexpr std::ptrdiff_t m_stages = 0x0;
    }
    namespace VMixEffectChainDesc_t {
      constexpr std::ptrdiff_t m_effectName = 0x0;
    }
    namespace VMixEnvelopeDesc_t {
      constexpr std::ptrdiff_t m_flAttackTimeMS = 0x0;
      constexpr std::ptrdiff_t m_flHoldTimeMS = 0x4;
      constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x8;
    }
    namespace VMixFilterDesc_t {
      constexpr std::ptrdiff_t m_nFilterType = 0x0;
      constexpr std::ptrdiff_t m_nFilterSlope = 0x2;
      constexpr std::ptrdiff_t m_bEnabled = 0x3;
      constexpr std::ptrdiff_t m_fldbGain = 0x4;
      constexpr std::ptrdiff_t m_flCutoffFreq = 0x8;
      constexpr std::ptrdiff_t m_flQ = 0xc;
    }
    namespace VMixFlangerDesc_t {
      constexpr std::ptrdiff_t m_bPhaseInvert = 0x0;
      constexpr std::ptrdiff_t m_flGlideTime = 0x4;
      constexpr std::ptrdiff_t m_flDelay = 0x8;
      constexpr std::ptrdiff_t m_flOutputGain = 0xc;
      constexpr std::ptrdiff_t m_flFeedbackGain = 0x10;
      constexpr std::ptrdiff_t m_flFeedforwardGain = 0x14;
      constexpr std::ptrdiff_t m_flModRate = 0x18;
      constexpr std::ptrdiff_t m_flModDepth = 0x1c;
      constexpr std::ptrdiff_t m_bApplyAntialiasing = 0x20;
    }
    namespace VMixFreeverbDesc_t {
      constexpr std::ptrdiff_t m_flRoomSize = 0x0;
      constexpr std::ptrdiff_t m_flDamp = 0x4;
      constexpr std::ptrdiff_t m_flWidth = 0x8;
      constexpr std::ptrdiff_t m_flLateReflections = 0xc;
    }
    namespace VMixModDelayDesc_t {
      constexpr std::ptrdiff_t m_feedbackFilter = 0x0;
      constexpr std::ptrdiff_t m_bPhaseInvert = 0x10;
      constexpr std::ptrdiff_t m_flGlideTime = 0x14;
      constexpr std::ptrdiff_t m_flDelay = 0x18;
      constexpr std::ptrdiff_t m_flOutputGain = 0x1c;
      constexpr std::ptrdiff_t m_flFeedbackGain = 0x20;
      constexpr std::ptrdiff_t m_flModRate = 0x24;
      constexpr std::ptrdiff_t m_flModDepth = 0x28;
      constexpr std::ptrdiff_t m_bApplyAntialiasing = 0x2c;
    }
    namespace VMixOscDesc_t {
      constexpr std::ptrdiff_t oscType = 0x0;
      constexpr std::ptrdiff_t m_freq = 0x4;
      constexpr std::ptrdiff_t m_flPhase = 0x8;
    }
    namespace VMixPannerDesc_t {
      constexpr std::ptrdiff_t m_type = 0x0;
      constexpr std::ptrdiff_t m_flStrength = 0x4;
    }
    namespace VMixPitchShiftDesc_t {
      constexpr std::ptrdiff_t m_nGrainSampleCount = 0x0;
      constexpr std::ptrdiff_t m_flPitchShift = 0x4;
      constexpr std::ptrdiff_t m_nQuality = 0x8;
      constexpr std::ptrdiff_t m_nProcType = 0xc;
    }
    namespace VMixPlateverbDesc_t {
      constexpr std::ptrdiff_t m_flPrefilter = 0x0;
      constexpr std::ptrdiff_t m_flInputDiffusion1 = 0x4;
      constexpr std::ptrdiff_t m_flInputDiffusion2 = 0x8;
      constexpr std::ptrdiff_t m_flDecay = 0xc;
      constexpr std::ptrdiff_t m_flDamp = 0x10;
      constexpr std::ptrdiff_t m_flFeedbackDiffusion1 = 0x14;
      constexpr std::ptrdiff_t m_flFeedbackDiffusion2 = 0x18;
    }
    namespace VMixPresetDSPDesc_t {
      constexpr std::ptrdiff_t m_effectName = 0x0;
    }
    namespace VMixShaperDesc_t {
      constexpr std::ptrdiff_t m_nShape = 0x0;
      constexpr std::ptrdiff_t m_fldbDrive = 0x4;
      constexpr std::ptrdiff_t m_fldbOutputGain = 0x8;
      constexpr std::ptrdiff_t m_flWetMix = 0xc;
      constexpr std::ptrdiff_t m_nOversampleFactor = 0x10;
    }
    namespace VMixSubgraphSwitchDesc_t {
      constexpr std::ptrdiff_t m_name = 0x0;
      constexpr std::ptrdiff_t m_effectName = 0x8;
      constexpr std::ptrdiff_t m_subgraphs = 0x10;
      constexpr std::ptrdiff_t m_interpolationMode = 0x28;
      constexpr std::ptrdiff_t m_bOnlyTailsOnFadeOut = 0x2c;
      constexpr std::ptrdiff_t m_flInterpolationTime = 0x30;
    }
    namespace VMixUtilityDesc_t {
      constexpr std::ptrdiff_t m_nOp = 0x0;
      constexpr std::ptrdiff_t m_flInputPan = 0x4;
      constexpr std::ptrdiff_t m_flOutputBalance = 0x8;
      constexpr std::ptrdiff_t m_fldbOutputGain = 0xc;
      constexpr std::ptrdiff_t m_bBassMono = 0x10;
      constexpr std::ptrdiff_t m_flBassFreq = 0x14;
    }
    namespace VMixVocoderDesc_t {
      constexpr std::ptrdiff_t m_nBandCount = 0x0;
      constexpr std::ptrdiff_t m_flBandwidth = 0x4;
      constexpr std::ptrdiff_t m_fldBModGain = 0x8;
      constexpr std::ptrdiff_t m_flFreqRangeStart = 0xc;
      constexpr std::ptrdiff_t m_flFreqRangeEnd = 0x10;
      constexpr std::ptrdiff_t m_fldBUnvoicedGain = 0x14;
      constexpr std::ptrdiff_t m_flAttackTimeMS = 0x18;
      constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x1c;
      constexpr std::ptrdiff_t m_nDebugBand = 0x20;
      constexpr std::ptrdiff_t m_bPeakMode = 0x24;
    }
  }
}
