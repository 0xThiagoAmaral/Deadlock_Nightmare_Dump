// Generated via Nightmare Oracle
#pragma once
#include <cstddef>

namespace deadlock_dumper {
  namespace scenesystem_dll {
    namespace CSSDSEndFrameViewInfo {
      constexpr std::ptrdiff_t m_nViewId = 0x0;
      constexpr std::ptrdiff_t m_ViewName = 0x8;
    }
    namespace CSSDSMsg_EndFrame {
      constexpr std::ptrdiff_t m_Views = 0x0;
    }
    namespace CSSDSMsg_LayerBase {
      constexpr std::ptrdiff_t m_viewId = 0x0;
      constexpr std::ptrdiff_t m_ViewName = 0x10;
      constexpr std::ptrdiff_t m_nLayerId = 0x18;
      constexpr std::ptrdiff_t m_LayerName = 0x20;
      constexpr std::ptrdiff_t m_displayText = 0x28;
    }
    namespace CSSDSMsg_PostLayer {
    }
    namespace CSSDSMsg_PreLayer {
    }
    namespace CSSDSMsg_ViewRender {
      constexpr std::ptrdiff_t m_viewId = 0x0;
      constexpr std::ptrdiff_t m_ViewName = 0x10;
    }
    namespace CSSDSMsg_ViewTarget {
      constexpr std::ptrdiff_t m_Name = 0x0;
      constexpr std::ptrdiff_t m_TextureId = 0x8;
      constexpr std::ptrdiff_t m_nWidth = 0x10;
      constexpr std::ptrdiff_t m_nHeight = 0x14;
      constexpr std::ptrdiff_t m_nRequestedWidth = 0x18;
      constexpr std::ptrdiff_t m_nRequestedHeight = 0x1c;
      constexpr std::ptrdiff_t m_nNumMipLevels = 0x20;
      constexpr std::ptrdiff_t m_nDepth = 0x24;
      constexpr std::ptrdiff_t m_nMultisampleNumSamples = 0x28;
      constexpr std::ptrdiff_t m_nFormat = 0x2c;
    }
    namespace CSSDSMsg_ViewTargetList {
      constexpr std::ptrdiff_t m_viewId = 0x0;
      constexpr std::ptrdiff_t m_ViewName = 0x10;
      constexpr std::ptrdiff_t m_Targets = 0x18;
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
    namespace CSteamAudioProbeGrid {
      constexpr std::ptrdiff_t m_aabb = 0x0;
      constexpr std::ptrdiff_t m_flSpacing = 0x18;
      constexpr std::ptrdiff_t m_nx = 0x1c;
      constexpr std::ptrdiff_t m_ny = 0x20;
      constexpr std::ptrdiff_t m_nz = 0x24;
      constexpr std::ptrdiff_t m_vecLineSegments = 0x28;
      constexpr std::ptrdiff_t m_vecProbes = 0x40;
    }
    namespace SceneViewId_t {
      constexpr std::ptrdiff_t m_nViewId = 0x0;
      constexpr std::ptrdiff_t m_nFrameCount = 0x8;
    }
  }
}
