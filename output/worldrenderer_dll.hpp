// Generated via Nightmare Oracle
#pragma once
#include <cstddef>

namespace deadlock_dumper {
  namespace worldrenderer_dll {
    namespace AggregateInstanceStreamOnDiskData_t {
      constexpr std::ptrdiff_t m_DecodedSize = 0x0;
      constexpr std::ptrdiff_t m_BufferData = 0x8;
    }
    namespace AggregateLODSetup_t {
      constexpr std::ptrdiff_t m_vLODOrigin = 0x0;
      constexpr std::ptrdiff_t m_fMaxObjectScale = 0xc;
      constexpr std::ptrdiff_t m_fSwitchDistances = 0x10;
    }
    namespace AggregateMeshInfo_t {
      constexpr std::ptrdiff_t m_nVisClusterMemberOffset = 0x0;
      constexpr std::ptrdiff_t m_nVisClusterMemberCount = 0x4;
      constexpr std::ptrdiff_t m_bHasTransform = 0x5;
      constexpr std::ptrdiff_t m_nLODGroupMask = 0x6;
      constexpr std::ptrdiff_t m_nDrawCallIndex = 0x8;
      constexpr std::ptrdiff_t m_nLODSetupIndex = 0xa;
      constexpr std::ptrdiff_t m_vTintColor = 0xc;
      constexpr std::ptrdiff_t m_objectFlags = 0x10;
      constexpr std::ptrdiff_t m_nLightProbeVolumePrecomputedHandshake = 0x14;
      constexpr std::ptrdiff_t m_nInstanceStreamOffset = 0x18;
      constexpr std::ptrdiff_t m_nVertexAlbedoStreamOffset = 0x1c;
      constexpr std::ptrdiff_t m_instanceStreams = 0x20;
    }
    namespace AggregateRTProxySceneObject_t {
      constexpr std::ptrdiff_t m_nLayer = 0x0;
      constexpr std::ptrdiff_t m_BLASes = 0x8;
      constexpr std::ptrdiff_t m_Instances = 0x20;
      constexpr std::ptrdiff_t m_VBData = 0x38;
      constexpr std::ptrdiff_t m_IBData = 0x48;
      constexpr std::ptrdiff_t m_InstanceAlbedoData = 0x58;
    }
    namespace AggregateSceneObject_t {
      constexpr std::ptrdiff_t m_allFlags = 0x0;
      constexpr std::ptrdiff_t m_anyFlags = 0x4;
      constexpr std::ptrdiff_t m_nLayer = 0x8;
      constexpr std::ptrdiff_t m_instanceStream = 0xa;
      constexpr std::ptrdiff_t m_vertexAlbedoStream = 0xc;
      constexpr std::ptrdiff_t m_aggregateMeshes = 0x10;
      constexpr std::ptrdiff_t m_lodSetups = 0x28;
      constexpr std::ptrdiff_t m_visClusterMembership = 0x40;
      constexpr std::ptrdiff_t m_fragmentTransforms = 0x58;
      constexpr std::ptrdiff_t m_renderableModel = 0x70;
    }
    namespace AggregateVertexAlbedoStreamOnDiskData_t {
      constexpr std::ptrdiff_t m_BufferData = 0x0;
    }
    namespace BakedLightingInfo_t {
      constexpr std::ptrdiff_t m_nLightmapVersionNumber = 0x0;
      constexpr std::ptrdiff_t m_nLightmapGameVersionNumber = 0x4;
      constexpr std::ptrdiff_t m_vLightmapUvScale = 0x8;
      constexpr std::ptrdiff_t m_bHasLightmaps = 0x10;
      constexpr std::ptrdiff_t m_bBakedShadowsGamma20 = 0x11;
      constexpr std::ptrdiff_t m_bCompressionEnabled = 0x12;
      constexpr std::ptrdiff_t m_bSHLightmaps = 0x13;
      constexpr std::ptrdiff_t m_nChartPackIterations = 0x14;
      constexpr std::ptrdiff_t m_nVradQuality = 0x15;
      constexpr std::ptrdiff_t m_lightMaps = 0x18;
      constexpr std::ptrdiff_t m_bakedShadows = 0x30;
    }
    namespace BakedLightingInfo_t__BakedShadowAssignment_t {
      constexpr std::ptrdiff_t m_nLightHash = 0x0;
      constexpr std::ptrdiff_t m_nMapHash = 0x4;
      constexpr std::ptrdiff_t m_nShadowChannel = 0x8;
    }
    namespace BaseSceneObjectOverride_t {
      constexpr std::ptrdiff_t m_nSceneObjectIndex = 0x0;
    }
    namespace CEntityComponent {
    }
    namespace CEntityIdentity {
      constexpr std::ptrdiff_t m_nameStringableIndex = 0x14;
      constexpr std::ptrdiff_t m_name = 0x18;
      constexpr std::ptrdiff_t m_designerName = 0x20;
      constexpr std::ptrdiff_t m_flags = 0x30;
      constexpr std::ptrdiff_t m_worldGroupId = 0x38;
      constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3c;
      constexpr std::ptrdiff_t m_PathIndex = 0x40;
      constexpr std::ptrdiff_t m_pAttributes = 0x48;
      constexpr std::ptrdiff_t m_pPrev = 0x50;
      constexpr std::ptrdiff_t m_pNext = 0x58;
      constexpr std::ptrdiff_t m_pPrevByClass = 0x60;
      constexpr std::ptrdiff_t m_pNextByClass = 0x68;
    }
    namespace CEntityInstance {
      constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8;
      constexpr std::ptrdiff_t m_pEntity = 0x10;
      constexpr std::ptrdiff_t m_CScriptComponent = 0x28;
    }
    namespace CScriptComponent {
      constexpr std::ptrdiff_t m_scriptClassName = 0x30;
    }
    namespace CVoxelVisibility {
      constexpr std::ptrdiff_t m_nBaseClusterCount = 0x40;
      constexpr std::ptrdiff_t m_nPVSBytesPerCluster = 0x44;
      constexpr std::ptrdiff_t m_vMinBounds = 0x48;
      constexpr std::ptrdiff_t m_vMaxBounds = 0x54;
      constexpr std::ptrdiff_t m_flGridSize = 0x60;
      constexpr std::ptrdiff_t m_nSkyVisibilityCluster = 0x64;
      constexpr std::ptrdiff_t m_nSunVisibilityCluster = 0x68;
      constexpr std::ptrdiff_t m_NodeBlock = 0x6c;
      constexpr std::ptrdiff_t m_RegionBlock = 0x74;
      constexpr std::ptrdiff_t m_EnclosedClusterListBlock = 0x7c;
      constexpr std::ptrdiff_t m_EnclosedClustersBlock = 0x84;
      constexpr std::ptrdiff_t m_MasksBlock = 0x8c;
      constexpr std::ptrdiff_t m_nVisBlocks = 0x94;
    }
    namespace ClutterSceneObject_t {
      constexpr std::ptrdiff_t m_Bounds = 0x0;
      constexpr std::ptrdiff_t m_flags = 0x18;
      constexpr std::ptrdiff_t m_nLayer = 0x1c;
      constexpr std::ptrdiff_t m_instancePositions = 0x20;
      constexpr std::ptrdiff_t m_instanceScales = 0x50;
      constexpr std::ptrdiff_t m_instanceTintSrgb = 0x68;
      constexpr std::ptrdiff_t m_tiles = 0x80;
      constexpr std::ptrdiff_t m_renderableModel = 0x98;
      constexpr std::ptrdiff_t m_materialGroup = 0xa0;
      constexpr std::ptrdiff_t m_flBeginCullSize = 0xa4;
      constexpr std::ptrdiff_t m_flEndCullSize = 0xa8;
    }
    namespace ClutterTile_t {
      constexpr std::ptrdiff_t m_nFirstInstance = 0x0;
      constexpr std::ptrdiff_t m_nLastInstance = 0x4;
      constexpr std::ptrdiff_t m_BoundsWs = 0x8;
    }
    namespace EntityIOConnectionData_t {
      constexpr std::ptrdiff_t m_outputName = 0x0;
      constexpr std::ptrdiff_t m_targetType = 0x8;
      constexpr std::ptrdiff_t m_targetName = 0x10;
      constexpr std::ptrdiff_t m_inputName = 0x18;
      constexpr std::ptrdiff_t m_overrideParam = 0x20;
      constexpr std::ptrdiff_t m_flDelay = 0x28;
      constexpr std::ptrdiff_t m_nTimesToFire = 0x2c;
      constexpr std::ptrdiff_t m_paramMap = 0x30;
    }
    namespace EntityKeyValueData_t {
      constexpr std::ptrdiff_t m_connections = 0x8;
      constexpr std::ptrdiff_t m_keyValuesData = 0x20;
    }
    namespace ExtraVertexStreamOverride_t {
      constexpr std::ptrdiff_t m_nSubSceneObject = 0x4;
      constexpr std::ptrdiff_t m_nDrawCallIndex = 0x8;
      constexpr std::ptrdiff_t m_nAdditionalMeshDrawPrimitiveFlags = 0xc;
      constexpr std::ptrdiff_t m_extraBufferBinding = 0x10;
    }
    namespace InfoForResourceTypeVMapResourceData_t {
    }
    namespace MaterialOverride_t {
      constexpr std::ptrdiff_t m_nSubSceneObject = 0x4;
      constexpr std::ptrdiff_t m_nDrawCallIndex = 0x8;
      constexpr std::ptrdiff_t m_pMaterial = 0x10;
      constexpr std::ptrdiff_t m_vLinearTintColor = 0x18;
    }
    namespace NodeData_t {
      constexpr std::ptrdiff_t m_nParent = 0x0;
      constexpr std::ptrdiff_t m_vOrigin = 0x4;
      constexpr std::ptrdiff_t m_vMinBounds = 0x10;
      constexpr std::ptrdiff_t m_vMaxBounds = 0x1c;
      constexpr std::ptrdiff_t m_flMinimumDistance = 0x28;
      constexpr std::ptrdiff_t m_ChildNodeIndices = 0x30;
      constexpr std::ptrdiff_t m_worldNodePrefix = 0x48;
    }
    namespace PermEntityLumpData_t {
      constexpr std::ptrdiff_t m_name = 0x8;
      constexpr std::ptrdiff_t m_childLumps = 0x10;
      constexpr std::ptrdiff_t m_entityKeyValues = 0x28;
    }
    namespace RTProxyBLAS_t {
      constexpr std::ptrdiff_t m_nFirstIndex = 0x0;
      constexpr std::ptrdiff_t m_nIndexCount = 0x4;
      constexpr std::ptrdiff_t m_nVBByteOffset = 0x8;
      constexpr std::ptrdiff_t m_nBaseVertex = 0xc;
      constexpr std::ptrdiff_t m_nVertexCount = 0x10;
      constexpr std::ptrdiff_t m_albedoFormat = 0x12;
      constexpr std::ptrdiff_t m_boundLs = 0x14;
      constexpr std::ptrdiff_t m_vVertexOriginLs = 0x2c;
      constexpr std::ptrdiff_t m_vVertexExtentLs = 0x38;
    }
    namespace RTProxyInstanceInfo_t {
      constexpr std::ptrdiff_t m_nFlags = 0x0;
      constexpr std::ptrdiff_t m_albedoFormat = 0x1;
      constexpr std::ptrdiff_t m_nBLASCount = 0x2;
      constexpr std::ptrdiff_t m_nBLASIndex = 0x4;
      constexpr std::ptrdiff_t m_nVertexAlbedoByteOffset = 0x8;
      constexpr std::ptrdiff_t m_mWorldFromLocal = 0xc;
    }
    namespace SceneObject_t {
      constexpr std::ptrdiff_t m_nObjectID = 0x0;
      constexpr std::ptrdiff_t m_vTransform = 0x4;
      constexpr std::ptrdiff_t m_flFadeStartDistance = 0x34;
      constexpr std::ptrdiff_t m_flFadeEndDistance = 0x38;
      constexpr std::ptrdiff_t m_vTintColor = 0x3c;
      constexpr std::ptrdiff_t m_skin = 0x50;
      constexpr std::ptrdiff_t m_nObjectTypeFlags = 0x58;
      constexpr std::ptrdiff_t m_vLightingOrigin = 0x5c;
      constexpr std::ptrdiff_t m_nOverlayRenderOrder = 0x68;
      constexpr std::ptrdiff_t m_nLODOverride = 0x6a;
      constexpr std::ptrdiff_t m_nCubeMapPrecomputedHandshake = 0x6c;
      constexpr std::ptrdiff_t m_nLightProbeVolumePrecomputedHandshake = 0x70;
      constexpr std::ptrdiff_t m_renderableModel = 0x78;
      constexpr std::ptrdiff_t m_renderable = 0x80;
    }
    namespace VMapResourceData_t {
    }
    namespace VoxelVisBlockOffset_t {
      constexpr std::ptrdiff_t m_nOffset = 0x0;
      constexpr std::ptrdiff_t m_nElementCount = 0x4;
    }
    namespace WorldBuilderParams_t {
      constexpr std::ptrdiff_t m_flMinDrawVolumeSize = 0x0;
      constexpr std::ptrdiff_t m_bBuildBakedLighting = 0x4;
      constexpr std::ptrdiff_t m_bAggregateInstanceStreams = 0x5;
      constexpr std::ptrdiff_t m_bakedLightingInfo = 0x8;
      constexpr std::ptrdiff_t m_nCompileTimestamp = 0x50;
      constexpr std::ptrdiff_t m_nCompileFingerprint = 0x58;
    }
    namespace WorldNodeOnDiskBufferData_t {
      constexpr std::ptrdiff_t m_nElementCount = 0x0;
      constexpr std::ptrdiff_t m_nElementSizeInBytes = 0x4;
      constexpr std::ptrdiff_t m_inputLayoutFields = 0x8;
      constexpr std::ptrdiff_t m_pData = 0x20;
    }
    namespace WorldNode_t {
      constexpr std::ptrdiff_t m_sceneObjects = 0x0;
      constexpr std::ptrdiff_t m_visClusterMembership = 0x18;
      constexpr std::ptrdiff_t m_aggregateSceneObjects = 0x30;
      constexpr std::ptrdiff_t m_clutterSceneObjects = 0x48;
      constexpr std::ptrdiff_t m_rtProxies = 0x60;
      constexpr std::ptrdiff_t m_extraVertexStreamOverrides = 0x78;
      constexpr std::ptrdiff_t m_materialOverrides = 0x90;
      constexpr std::ptrdiff_t m_extraVertexStreams = 0xa8;
      constexpr std::ptrdiff_t m_aggregateInstanceStreams = 0xc0;
      constexpr std::ptrdiff_t m_vertexAlbedoStreams = 0xd8;
      constexpr std::ptrdiff_t m_layerNames = 0xf0;
      constexpr std::ptrdiff_t m_sceneObjectLayerIndices = 0x108;
      constexpr std::ptrdiff_t m_grassFileName = 0x120;
      constexpr std::ptrdiff_t m_nodeLightingInfo = 0x128;
      constexpr std::ptrdiff_t m_bHasBakedGeometryFlag = 0x170;
    }
    namespace World_t {
      constexpr std::ptrdiff_t m_builderParams = 0x0;
      constexpr std::ptrdiff_t m_worldNodes = 0x60;
      constexpr std::ptrdiff_t m_worldLightingInfo = 0x78;
      constexpr std::ptrdiff_t m_entityLumps = 0xc0;
    }
  }
}
