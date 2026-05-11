// Generated via Nightmare Oracle
#pragma once
#include <cstddef>

namespace deadlock_dumper {
  namespace steamaudio_dll {
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
    namespace CDSPPresetMixgroupModifierTable {
      constexpr std::ptrdiff_t m_table = 0x0;
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
    namespace CSoundInfoHeader {
    }
    namespace CSteamAudioAmbisonicsField {
      constexpr std::ptrdiff_t m_field = 0x0;
    }
    namespace CSteamAudioBakedDimensionsData {
      constexpr std::ptrdiff_t m_settings = 0x0;
      constexpr std::ptrdiff_t m_probes = 0x18;
      constexpr std::ptrdiff_t m_vecInOut = 0x20;
      constexpr std::ptrdiff_t m_vecSize = 0x38;
      constexpr std::ptrdiff_t m_vecOutsideField = 0x50;
      constexpr std::ptrdiff_t m_vecInsideSmallSizeField = 0x68;
      constexpr std::ptrdiff_t m_movables = 0x80;
    }
    namespace CSteamAudioBakedMaterialsData {
      constexpr std::ptrdiff_t m_probes = 0x0;
      constexpr std::ptrdiff_t m_vecMaterialTokens = 0x8;
      constexpr std::ptrdiff_t m_vecMaterialWeights = 0x20;
    }
    namespace CSteamAudioBakedOcclusionData {
      constexpr std::ptrdiff_t m_settings = 0x0;
      constexpr std::ptrdiff_t m_probes = 0x10;
      constexpr std::ptrdiff_t m_vecPathingRatio = 0x18;
      constexpr std::ptrdiff_t m_vecPathingDeviation = 0x30;
      constexpr std::ptrdiff_t m_vecReflectionRatio = 0x48;
    }
    namespace CSteamAudioBakedPathingData {
      constexpr std::ptrdiff_t m_nBands = 0x0;
      constexpr std::ptrdiff_t m_probes = 0x8;
      constexpr std::ptrdiff_t m_movables = 0x10;
    }
    namespace CSteamAudioBakedReverbData {
      constexpr std::ptrdiff_t m_nBands = 0x0;
      constexpr std::ptrdiff_t m_scene = 0x8;
      constexpr std::ptrdiff_t m_probes = 0x18;
      constexpr std::ptrdiff_t m_grid = 0x20;
      constexpr std::ptrdiff_t m_reverbSettings = 0x78;
      constexpr std::ptrdiff_t m_reverbClusteringSettings = 0x8c;
      constexpr std::ptrdiff_t m_reverbCompressionSettings = 0x98;
      constexpr std::ptrdiff_t m_clusteredProbes = 0xa0;
      constexpr std::ptrdiff_t m_vecClusterForProbe = 0xa8;
      constexpr std::ptrdiff_t m_compressedData = 0xc0;
      constexpr std::ptrdiff_t m_compressedClusteredData = 0x120;
      constexpr std::ptrdiff_t m_movables = 0x180;
    }
    namespace CSteamAudioCompressedReverb {
      constexpr std::ptrdiff_t m_nChannels = 0x0;
      constexpr std::ptrdiff_t m_nBands = 0x4;
      constexpr std::ptrdiff_t m_nBins = 0x8;
      constexpr std::ptrdiff_t m_nProbes = 0xc;
      constexpr std::ptrdiff_t m_vecNumSingularValues = 0x10;
      constexpr std::ptrdiff_t m_vecDictionary = 0x28;
      constexpr std::ptrdiff_t m_vecCompressedData = 0x40;
      constexpr std::ptrdiff_t m_pCompressedData = 0x58;
    }
    namespace CSteamAudioProbeData {
      constexpr std::ptrdiff_t m_pProbeBatch = 0x0;
    }
    namespace CSteamAudioProbeGrid {
      constexpr std::ptrdiff_t m_aabb = 0x0;
      constexpr std::ptrdiff_t m_flSpacing = 0x18;
      constexpr std::ptrdiff_t m_nx = 0x1c;
      constexpr std::ptrdiff_t m_ny = 0x20;
      constexpr std::ptrdiff_t m_nz = 0x24;
      constexpr std::ptrdiff_t m_vecLineSegments = 0x28;
      constexpr std::ptrdiff_t m_vecProbes = 0x40;
    }
    namespace CSteamAudioProbeLineSegment {
      constexpr std::ptrdiff_t m_vStart = 0x0;
      constexpr std::ptrdiff_t m_vEnd = 0xc;
      constexpr std::ptrdiff_t m_vecIntervals = 0x18;
      constexpr std::ptrdiff_t m_vecProbeIndices = 0x30;
    }
    namespace CSteamAudioSceneData {
      constexpr std::ptrdiff_t m_pScene = 0x0;
      constexpr std::ptrdiff_t m_pStaticMesh = 0x8;
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
    namespace CVoiceContainerDefault {
    }
    namespace CVoiceContainerGenerator {
    }
    namespace CVoiceContainerNull {
    }
    namespace SteamAudioCustomDataDimensionsSettings_t {
      constexpr std::ptrdiff_t m_nAmbisonicsOrderOutsideField = 0x0;
      constexpr std::ptrdiff_t m_nAmbisonicsOrderInsideSizeField = 0x4;
      constexpr std::ptrdiff_t m_flOutsideThreshold = 0x8;
      constexpr std::ptrdiff_t m_flSizeThreshold = 0xc;
      constexpr std::ptrdiff_t m_flInsideThreshold = 0x10;
    }
    namespace SteamAudioCustomDataOcclusionSettings_t {
      constexpr std::ptrdiff_t m_bEnablePathing = 0x0;
      constexpr std::ptrdiff_t m_bEnableReflections = 0x1;
      constexpr std::ptrdiff_t m_nReflectionRays = 0x4;
      constexpr std::ptrdiff_t m_nReflectionBounces = 0x8;
    }
    namespace SteamAudioPathSettings_t {
      constexpr std::ptrdiff_t m_nNumVisSamples = 0x0;
      constexpr std::ptrdiff_t m_flProbeVisRadius = 0x4;
      constexpr std::ptrdiff_t m_flProbeVisThreshold = 0x8;
      constexpr std::ptrdiff_t m_flProbePathRange = 0xc;
    }
    namespace SteamAudioReverbClusteringSettings_t {
      constexpr std::ptrdiff_t m_bEnableClustering = 0x0;
      constexpr std::ptrdiff_t m_nCubeMapResolution = 0x4;
      constexpr std::ptrdiff_t m_flDepthThreshold = 0x8;
    }
    namespace SteamAudioReverbCompressionSettings_t {
      constexpr std::ptrdiff_t m_bEnableCompression = 0x0;
      constexpr std::ptrdiff_t m_flQuality = 0x4;
    }
    namespace SteamAudioReverbSettings_t {
      constexpr std::ptrdiff_t m_nNumRays = 0x0;
      constexpr std::ptrdiff_t m_nNumBounces = 0x4;
      constexpr std::ptrdiff_t m_flIRDuration = 0x8;
      constexpr std::ptrdiff_t m_nAmbisonicsOrder = 0xc;
      constexpr std::ptrdiff_t m_bExportScene = 0x10;
    }
  }
}
