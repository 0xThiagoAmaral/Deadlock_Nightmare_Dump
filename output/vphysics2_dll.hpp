// Generated via Nightmare Oracle
#pragma once
#include <cstddef>

namespace deadlock_dumper {
  namespace vphysics2_dll {
    namespace AnimNodeNetworkMode {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace AnimParamNetworkSetting {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace AnimParamType_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace AnimValueSource {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace CFeIndexedJiggleBone {
      constexpr std::ptrdiff_t m_nNode = 0x0;
      constexpr std::ptrdiff_t m_nJiggleParent = 0x4;
      constexpr std::ptrdiff_t m_jiggleBone = 0x8;
    }
    namespace CFeJiggleBone {
      constexpr std::ptrdiff_t m_nFlags = 0x0;
      constexpr std::ptrdiff_t m_flLength = 0x4;
      constexpr std::ptrdiff_t m_flTipMass = 0x8;
      constexpr std::ptrdiff_t m_flYawStiffness = 0xc;
      constexpr std::ptrdiff_t m_flYawDamping = 0x10;
      constexpr std::ptrdiff_t m_flPitchStiffness = 0x14;
      constexpr std::ptrdiff_t m_flPitchDamping = 0x18;
      constexpr std::ptrdiff_t m_flAlongStiffness = 0x1c;
      constexpr std::ptrdiff_t m_flAlongDamping = 0x20;
      constexpr std::ptrdiff_t m_flAngleLimit = 0x24;
      constexpr std::ptrdiff_t m_flMinYaw = 0x28;
      constexpr std::ptrdiff_t m_flMaxYaw = 0x2c;
      constexpr std::ptrdiff_t m_flYawFriction = 0x30;
      constexpr std::ptrdiff_t m_flYawBounce = 0x34;
      constexpr std::ptrdiff_t m_flMinPitch = 0x38;
      constexpr std::ptrdiff_t m_flMaxPitch = 0x3c;
      constexpr std::ptrdiff_t m_flPitchFriction = 0x40;
      constexpr std::ptrdiff_t m_flPitchBounce = 0x44;
      constexpr std::ptrdiff_t m_flBaseMass = 0x48;
      constexpr std::ptrdiff_t m_flBaseStiffness = 0x4c;
      constexpr std::ptrdiff_t m_flBaseDamping = 0x50;
      constexpr std::ptrdiff_t m_flBaseMinLeft = 0x54;
      constexpr std::ptrdiff_t m_flBaseMaxLeft = 0x58;
      constexpr std::ptrdiff_t m_flBaseLeftFriction = 0x5c;
      constexpr std::ptrdiff_t m_flBaseMinUp = 0x60;
      constexpr std::ptrdiff_t m_flBaseMaxUp = 0x64;
      constexpr std::ptrdiff_t m_flBaseUpFriction = 0x68;
      constexpr std::ptrdiff_t m_flBaseMinForward = 0x6c;
      constexpr std::ptrdiff_t m_flBaseMaxForward = 0x70;
      constexpr std::ptrdiff_t m_flBaseForwardFriction = 0x74;
      constexpr std::ptrdiff_t m_flRadius0 = 0x78;
      constexpr std::ptrdiff_t m_flRadius1 = 0x7c;
      constexpr std::ptrdiff_t m_vPoint0 = 0x80;
      constexpr std::ptrdiff_t m_vPoint1 = 0x8c;
      constexpr std::ptrdiff_t m_nCollisionMask = 0x98;
    }
    namespace CFeMorphLayer {
      constexpr std::ptrdiff_t m_Name = 0x0;
      constexpr std::ptrdiff_t m_nNameHash = 0x8;
      constexpr std::ptrdiff_t m_Nodes = 0x10;
      constexpr std::ptrdiff_t m_InitPos = 0x28;
      constexpr std::ptrdiff_t m_Gravity = 0x40;
      constexpr std::ptrdiff_t m_GoalStrength = 0x58;
      constexpr std::ptrdiff_t m_GoalDamping = 0x70;
    }
    namespace CFeNamedJiggleBone {
      constexpr std::ptrdiff_t m_strParentBone = 0x0;
      constexpr std::ptrdiff_t m_transform = 0x10;
      constexpr std::ptrdiff_t m_nJiggleParent = 0x30;
      constexpr std::ptrdiff_t m_jiggleBone = 0x34;
    }
    namespace CFeVertexMapBuildArray {
      constexpr std::ptrdiff_t m_Array = 0x0;
    }
    namespace CNmFloatMathNode__Operator_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace CNmRootMotionData__SamplingMode_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace CNmStateNode__TimedEvent_t__Comparison_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace CNmSyncEventIndexConditionNode__TriggerMode_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace CNmTimeConditionNode__Operator_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace CRegionSVM {
      constexpr std::ptrdiff_t m_Planes = 0x0;
      constexpr std::ptrdiff_t m_Nodes = 0x18;
    }
    namespace CastSphereSATParams_t {
      constexpr std::ptrdiff_t m_vRayStart = 0x0;
      constexpr std::ptrdiff_t m_vRayDelta = 0xc;
      constexpr std::ptrdiff_t m_flRadius = 0x18;
      constexpr std::ptrdiff_t m_flMaxFraction = 0x1c;
      constexpr std::ptrdiff_t m_flScale = 0x20;
      constexpr std::ptrdiff_t m_pHull = 0x28;
    }
    namespace CollisionDetailLayerInfo_t {
      constexpr std::ptrdiff_t m_sDescription = 0x0;
      constexpr std::ptrdiff_t m_sFriendlyName = 0x8;
      constexpr std::ptrdiff_t m_bIsQueryOnly = 0x10;
      constexpr std::ptrdiff_t m_sParentDetailLayer = 0x18;
      constexpr std::ptrdiff_t m_vecSubtreeDetailLayers = 0x20;
      constexpr std::ptrdiff_t m_bNotPickable = 0x38;
    }
    namespace CollisionDetailLayerInfo_t__Name_t {
      constexpr std::ptrdiff_t m_nNameToken = 0x0;
      constexpr std::ptrdiff_t m_sNameString = 0x8;
    }
    namespace CovMatrix3 {
      constexpr std::ptrdiff_t m_vDiag = 0x0;
      constexpr std::ptrdiff_t m_flXY = 0xc;
      constexpr std::ptrdiff_t m_flXZ = 0x10;
      constexpr std::ptrdiff_t m_flYZ = 0x14;
    }
    namespace Dop26_t {
      constexpr std::ptrdiff_t m_flSupport = 0x0;
    }
    namespace EPulseGraphExecutionHistoryFlag {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace FeAnimStrayRadius_t {
      constexpr std::ptrdiff_t nNode = 0x0;
      constexpr std::ptrdiff_t flMaxDist = 0x4;
      constexpr std::ptrdiff_t flRelaxationFactor = 0x8;
    }
    namespace FeAntiTunnelGroupBuild_t {
      constexpr std::ptrdiff_t m_nVertexMapHash = 0x0;
      constexpr std::ptrdiff_t m_nCollisionMask = 0x4;
    }
    namespace FeAntiTunnelProbeBuild_t {
      constexpr std::ptrdiff_t flWeight = 0x0;
      constexpr std::ptrdiff_t flActivationDistance = 0x4;
      constexpr std::ptrdiff_t flBias = 0x8;
      constexpr std::ptrdiff_t flCurvature = 0xc;
      constexpr std::ptrdiff_t nFlags = 0x10;
      constexpr std::ptrdiff_t nProbeNode = 0x14;
      constexpr std::ptrdiff_t targetNodes = 0x18;
    }
    namespace FeAntiTunnelProbe_t {
      constexpr std::ptrdiff_t flWeight = 0x0;
      constexpr std::ptrdiff_t nFlags = 0x4;
      constexpr std::ptrdiff_t nProbeNode = 0x8;
      constexpr std::ptrdiff_t nCount = 0xa;
      constexpr std::ptrdiff_t nBegin = 0xc;
      constexpr std::ptrdiff_t flActivationDistance = 0x10;
      constexpr std::ptrdiff_t flCurvatureRadius = 0x14;
      constexpr std::ptrdiff_t flBias = 0x18;
    }
    namespace FeAxialEdgeBend_t {
      constexpr std::ptrdiff_t te = 0x0;
      constexpr std::ptrdiff_t tv = 0x4;
      constexpr std::ptrdiff_t flDist = 0x8;
      constexpr std::ptrdiff_t flWeight = 0xc;
      constexpr std::ptrdiff_t nNode = 0x1c;
    }
    namespace FeBandBendLimit_t {
      constexpr std::ptrdiff_t flDistMin = 0x0;
      constexpr std::ptrdiff_t flDistMax = 0x4;
      constexpr std::ptrdiff_t nNode = 0x8;
    }
    namespace FeBoxRigid_t {
      constexpr std::ptrdiff_t tmFrame2 = 0x0;
      constexpr std::ptrdiff_t nNode = 0x20;
      constexpr std::ptrdiff_t nCollisionMask = 0x22;
      constexpr std::ptrdiff_t vSize = 0x24;
      constexpr std::ptrdiff_t nVertexMapIndex = 0x30;
      constexpr std::ptrdiff_t nFlags = 0x32;
    }
    namespace FeBuildBoxRigid_t {
      constexpr std::ptrdiff_t m_nPriority = 0x40;
      constexpr std::ptrdiff_t m_nVertexMapHash = 0x44;
      constexpr std::ptrdiff_t m_nAntitunnelGroupBits = 0x48;
    }
    namespace FeBuildSDFRigid_t {
      constexpr std::ptrdiff_t m_nPriority = 0x50;
      constexpr std::ptrdiff_t m_nVertexMapHash = 0x54;
      constexpr std::ptrdiff_t m_nAntitunnelGroupBits = 0x58;
    }
    namespace FeBuildSphereRigid_t {
      constexpr std::ptrdiff_t m_nPriority = 0x20;
      constexpr std::ptrdiff_t m_nVertexMapHash = 0x24;
      constexpr std::ptrdiff_t m_nAntitunnelGroupBits = 0x28;
    }
    namespace FeBuildTaperedCapsuleRigid_t {
      constexpr std::ptrdiff_t m_nPriority = 0x30;
      constexpr std::ptrdiff_t m_nVertexMapHash = 0x34;
      constexpr std::ptrdiff_t m_nAntitunnelGroupBits = 0x38;
    }
    namespace FeCollisionPlane_t {
      constexpr std::ptrdiff_t nCtrlParent = 0x0;
      constexpr std::ptrdiff_t nChildNode = 0x2;
      constexpr std::ptrdiff_t m_Plane = 0x4;
      constexpr std::ptrdiff_t flStrength = 0x14;
    }
    namespace FeCtrlOffset_t {
      constexpr std::ptrdiff_t vOffset = 0x0;
      constexpr std::ptrdiff_t nCtrlParent = 0xc;
      constexpr std::ptrdiff_t nCtrlChild = 0xe;
    }
    namespace FeCtrlOsOffset_t {
      constexpr std::ptrdiff_t nCtrlParent = 0x0;
      constexpr std::ptrdiff_t nCtrlChild = 0x2;
    }
    namespace FeCtrlSoftOffset_t {
      constexpr std::ptrdiff_t nCtrlParent = 0x0;
      constexpr std::ptrdiff_t nCtrlChild = 0x2;
      constexpr std::ptrdiff_t vOffset = 0x4;
      constexpr std::ptrdiff_t flAlpha = 0x10;
    }
    namespace FeDynKinLink_t {
      constexpr std::ptrdiff_t m_nParent = 0x0;
      constexpr std::ptrdiff_t m_nChild = 0x2;
    }
    namespace FeEdgeDesc_t {
      constexpr std::ptrdiff_t nEdge = 0x0;
      constexpr std::ptrdiff_t nSide = 0x4;
      constexpr std::ptrdiff_t nVirtElem = 0xc;
    }
    namespace FeEffectDesc_t {
      constexpr std::ptrdiff_t sName = 0x0;
      constexpr std::ptrdiff_t nNameHash = 0x8;
      constexpr std::ptrdiff_t nType = 0xc;
      constexpr std::ptrdiff_t m_Params = 0x10;
    }
    namespace FeFitInfluence_t {
      constexpr std::ptrdiff_t nVertexNode = 0x0;
      constexpr std::ptrdiff_t flWeight = 0x4;
      constexpr std::ptrdiff_t nMatrixNode = 0x8;
    }
    namespace FeFitMatrix_t {
      constexpr std::ptrdiff_t bone = 0x0;
      constexpr std::ptrdiff_t vCenter = 0x20;
      constexpr std::ptrdiff_t nEnd = 0x2c;
      constexpr std::ptrdiff_t nNode = 0x2e;
      constexpr std::ptrdiff_t nBeginDynamic = 0x30;
    }
    namespace FeFitWeight_t {
      constexpr std::ptrdiff_t flWeight = 0x0;
      constexpr std::ptrdiff_t nNode = 0x4;
      constexpr std::ptrdiff_t nDummy = 0x6;
    }
    namespace FeFollowNode_t {
      constexpr std::ptrdiff_t nParentNode = 0x0;
      constexpr std::ptrdiff_t nChildNode = 0x2;
      constexpr std::ptrdiff_t flWeight = 0x4;
    }
    namespace FeHingeLimitBuild_t {
      constexpr std::ptrdiff_t nNode = 0x0;
      constexpr std::ptrdiff_t nFlags = 0xc;
      constexpr std::ptrdiff_t flLimitCW = 0x10;
      constexpr std::ptrdiff_t flLimitCCW = 0x14;
    }
    namespace FeHingeLimit_t {
      constexpr std::ptrdiff_t nNode = 0x0;
      constexpr std::ptrdiff_t nFlags = 0xc;
      constexpr std::ptrdiff_t flWeight4 = 0x10;
      constexpr std::ptrdiff_t flWeight5 = 0x14;
      constexpr std::ptrdiff_t flAngleCenter = 0x18;
      constexpr std::ptrdiff_t flAngleExtents = 0x1c;
    }
    namespace FeKelagerBend2_t {
      constexpr std::ptrdiff_t flWeight = 0x0;
      constexpr std::ptrdiff_t flHeight0 = 0xc;
      constexpr std::ptrdiff_t nNode = 0x10;
      constexpr std::ptrdiff_t nReserved = 0x16;
    }
    namespace FeModelSelfCollisionLayer_t {
      constexpr std::ptrdiff_t m_Name = 0x0;
      constexpr std::ptrdiff_t m_Nodes = 0x8;
      constexpr std::ptrdiff_t m_flParentReaction = 0x20;
      constexpr std::ptrdiff_t m_nFlags = 0x24;
      constexpr std::ptrdiff_t m_nEndIdx = 0x28;
    }
    namespace FeMorphLayerDepr_t {
      constexpr std::ptrdiff_t m_Name = 0x0;
      constexpr std::ptrdiff_t m_nNameHash = 0x8;
      constexpr std::ptrdiff_t m_Nodes = 0x10;
      constexpr std::ptrdiff_t m_InitPos = 0x28;
      constexpr std::ptrdiff_t m_Gravity = 0x40;
      constexpr std::ptrdiff_t m_GoalStrength = 0x58;
      constexpr std::ptrdiff_t m_GoalDamping = 0x70;
      constexpr std::ptrdiff_t m_nFlags = 0x88;
    }
    namespace FeNodeBase_t {
      constexpr std::ptrdiff_t nNode = 0x0;
      constexpr std::ptrdiff_t nDummy = 0x2;
      constexpr std::ptrdiff_t nNodeX0 = 0x8;
      constexpr std::ptrdiff_t nNodeX1 = 0xa;
      constexpr std::ptrdiff_t nNodeY0 = 0xc;
      constexpr std::ptrdiff_t nNodeY1 = 0xe;
      constexpr std::ptrdiff_t qAdjust = 0x10;
    }
    namespace FeNodeIntegrator_t {
      constexpr std::ptrdiff_t flPointDamping = 0x0;
      constexpr std::ptrdiff_t flAnimationForceAttraction = 0x4;
      constexpr std::ptrdiff_t flAnimationVertexAttraction = 0x8;
      constexpr std::ptrdiff_t flGravity = 0xc;
    }
    namespace FeNodeReverseOffset_t {
      constexpr std::ptrdiff_t vOffset = 0x0;
      constexpr std::ptrdiff_t nBoneCtrl = 0xc;
      constexpr std::ptrdiff_t nTargetNode = 0xe;
    }
    namespace FeNodeStrayBox_t {
      constexpr std::ptrdiff_t vMin = 0x0;
      constexpr std::ptrdiff_t nFlags = 0xc;
      constexpr std::ptrdiff_t vMax = 0x10;
      constexpr std::ptrdiff_t nNode = 0x1c;
    }
    namespace FeNodeWindBase_t {
      constexpr std::ptrdiff_t nNodeX0 = 0x0;
      constexpr std::ptrdiff_t nNodeX1 = 0x2;
      constexpr std::ptrdiff_t nNodeY0 = 0x4;
      constexpr std::ptrdiff_t nNodeY1 = 0x6;
    }
    namespace FeProxyVertexMap_t {
      constexpr std::ptrdiff_t m_Name = 0x0;
      constexpr std::ptrdiff_t m_flWeight = 0x8;
    }
    namespace FeQuad_t {
      constexpr std::ptrdiff_t nNode = 0x0;
      constexpr std::ptrdiff_t flSlack = 0x8;
      constexpr std::ptrdiff_t vShape = 0xc;
    }
    namespace FeRigidColliderIndices_t {
      constexpr std::ptrdiff_t m_nTaperedCapsuleRigidIndex = 0x0;
      constexpr std::ptrdiff_t m_nSphereRigidIndex = 0x2;
      constexpr std::ptrdiff_t m_nBoxRigidIndex = 0x4;
      constexpr std::ptrdiff_t m_nSDFRigidIndex = 0x6;
      constexpr std::ptrdiff_t m_nCollisionPlaneIndex = 0x8;
    }
    namespace FeRodConstraint_t {
      constexpr std::ptrdiff_t nNode = 0x0;
      constexpr std::ptrdiff_t flMaxDist = 0x4;
      constexpr std::ptrdiff_t flMinDist = 0x8;
      constexpr std::ptrdiff_t flWeight0 = 0xc;
      constexpr std::ptrdiff_t flRelaxationFactor = 0x10;
    }
    namespace FeSDFRigid_t {
      constexpr std::ptrdiff_t vLocalMin = 0x0;
      constexpr std::ptrdiff_t vLocalMax = 0xc;
      constexpr std::ptrdiff_t flBounciness = 0x18;
      constexpr std::ptrdiff_t nNode = 0x1c;
      constexpr std::ptrdiff_t nCollisionMask = 0x1e;
      constexpr std::ptrdiff_t nVertexMapIndex = 0x20;
      constexpr std::ptrdiff_t nFlags = 0x22;
      constexpr std::ptrdiff_t m_Distances = 0x28;
      constexpr std::ptrdiff_t m_nWidth = 0x40;
      constexpr std::ptrdiff_t m_nHeight = 0x44;
      constexpr std::ptrdiff_t m_nDepth = 0x48;
    }
    namespace FeSimdAnimStrayRadius_t {
      constexpr std::ptrdiff_t nNode = 0x0;
      constexpr std::ptrdiff_t flMaxDist = 0x10;
      constexpr std::ptrdiff_t flRelaxationFactor = 0x20;
    }
    namespace FeSimdNodeBase_t {
      constexpr std::ptrdiff_t nNode = 0x0;
      constexpr std::ptrdiff_t nNodeX0 = 0x8;
      constexpr std::ptrdiff_t nNodeX1 = 0x10;
      constexpr std::ptrdiff_t nNodeY0 = 0x18;
      constexpr std::ptrdiff_t nNodeY1 = 0x20;
      constexpr std::ptrdiff_t nDummy = 0x28;
      constexpr std::ptrdiff_t qAdjust = 0x30;
    }
    namespace FeSimdQuad_t {
      constexpr std::ptrdiff_t nNode = 0x0;
      constexpr std::ptrdiff_t f4Slack = 0x20;
      constexpr std::ptrdiff_t vShape = 0x30;
      constexpr std::ptrdiff_t f4Weights = 0xf0;
    }
    namespace FeSimdRodConstraintAnim_t {
      constexpr std::ptrdiff_t nNode = 0x0;
      constexpr std::ptrdiff_t f4Weight0 = 0x10;
      constexpr std::ptrdiff_t f4RelaxationFactor = 0x20;
    }
    namespace FeSimdRodConstraint_t {
      constexpr std::ptrdiff_t nNode = 0x0;
      constexpr std::ptrdiff_t f4MaxDist = 0x10;
      constexpr std::ptrdiff_t f4MinDist = 0x20;
      constexpr std::ptrdiff_t f4Weight0 = 0x30;
      constexpr std::ptrdiff_t f4RelaxationFactor = 0x40;
    }
    namespace FeSimdSpringIntegrator_t {
      constexpr std::ptrdiff_t nNode = 0x0;
      constexpr std::ptrdiff_t flSpringRestLength = 0x10;
      constexpr std::ptrdiff_t flSpringConstant = 0x20;
      constexpr std::ptrdiff_t flSpringDamping = 0x30;
      constexpr std::ptrdiff_t flNodeWeight0 = 0x40;
    }
    namespace FeSimdTri_t {
      constexpr std::ptrdiff_t nNode = 0x0;
      constexpr std::ptrdiff_t w1 = 0x30;
      constexpr std::ptrdiff_t w2 = 0x40;
      constexpr std::ptrdiff_t v1x = 0x50;
      constexpr std::ptrdiff_t v2 = 0x60;
    }
    namespace FeSoftParent_t {
      constexpr std::ptrdiff_t nParent = 0x0;
      constexpr std::ptrdiff_t flAlpha = 0x4;
    }
    namespace FeSourceEdge_t {
      constexpr std::ptrdiff_t nNode = 0x0;
    }
    namespace FeSphereRigid_t {
      constexpr std::ptrdiff_t vSphere = 0x0;
      constexpr std::ptrdiff_t nNode = 0x10;
      constexpr std::ptrdiff_t nCollisionMask = 0x12;
      constexpr std::ptrdiff_t nVertexMapIndex = 0x14;
      constexpr std::ptrdiff_t nFlags = 0x16;
    }
    namespace FeSpringIntegrator_t {
      constexpr std::ptrdiff_t nNode = 0x0;
      constexpr std::ptrdiff_t flSpringRestLength = 0x4;
      constexpr std::ptrdiff_t flSpringConstant = 0x8;
      constexpr std::ptrdiff_t flSpringDamping = 0xc;
      constexpr std::ptrdiff_t flNodeWeight0 = 0x10;
    }
    namespace FeStiffHingeBuild_t {
      constexpr std::ptrdiff_t flMaxAngle = 0x0;
      constexpr std::ptrdiff_t flStrength = 0x4;
      constexpr std::ptrdiff_t flMotionBias = 0x8;
      constexpr std::ptrdiff_t nNode = 0x14;
    }
    namespace FeTaperedCapsuleRigid_t {
      constexpr std::ptrdiff_t vSphere = 0x0;
      constexpr std::ptrdiff_t nNode = 0x20;
      constexpr std::ptrdiff_t nCollisionMask = 0x22;
      constexpr std::ptrdiff_t nVertexMapIndex = 0x24;
      constexpr std::ptrdiff_t nFlags = 0x26;
    }
    namespace FeTaperedCapsuleStretch_t {
      constexpr std::ptrdiff_t nNode = 0x0;
      constexpr std::ptrdiff_t nCollisionMask = 0x4;
      constexpr std::ptrdiff_t nDummy = 0x6;
      constexpr std::ptrdiff_t flRadius = 0x8;
    }
    namespace FeTreeChildren_t {
      constexpr std::ptrdiff_t nChild = 0x0;
    }
    namespace FeTri_t {
      constexpr std::ptrdiff_t nNode = 0x0;
      constexpr std::ptrdiff_t w1 = 0x8;
      constexpr std::ptrdiff_t w2 = 0xc;
      constexpr std::ptrdiff_t v1x = 0x10;
      constexpr std::ptrdiff_t v2 = 0x14;
    }
    namespace FeTwistConstraint_t {
      constexpr std::ptrdiff_t nNodeOrient = 0x0;
      constexpr std::ptrdiff_t nNodeEnd = 0x2;
      constexpr std::ptrdiff_t flTwistRelax = 0x4;
      constexpr std::ptrdiff_t flSwingRelax = 0x8;
    }
    namespace FeVertexMapBuild_t {
      constexpr std::ptrdiff_t m_VertexMapName = 0x0;
      constexpr std::ptrdiff_t m_nNameHash = 0x8;
      constexpr std::ptrdiff_t m_Color = 0xc;
      constexpr std::ptrdiff_t m_flVolumetricSolveStrength = 0x10;
      constexpr std::ptrdiff_t m_nScaleSourceNode = 0x14;
      constexpr std::ptrdiff_t m_Weights = 0x18;
    }
    namespace FeVertexMapDesc_t {
      constexpr std::ptrdiff_t sName = 0x0;
      constexpr std::ptrdiff_t nNameHash = 0x8;
      constexpr std::ptrdiff_t nColor = 0xc;
      constexpr std::ptrdiff_t nFlags = 0x10;
      constexpr std::ptrdiff_t nVertexBase = 0x14;
      constexpr std::ptrdiff_t nVertexCount = 0x16;
      constexpr std::ptrdiff_t nMapOffset = 0x18;
      constexpr std::ptrdiff_t nNodeListOffset = 0x1c;
      constexpr std::ptrdiff_t vCenterOfMass = 0x20;
      constexpr std::ptrdiff_t flVolumetricSolveStrength = 0x2c;
      constexpr std::ptrdiff_t nScaleSourceNode = 0x30;
      constexpr std::ptrdiff_t nNodeListCount = 0x32;
    }
    namespace FeWeightedNode_t {
      constexpr std::ptrdiff_t nNode = 0x0;
      constexpr std::ptrdiff_t nWeight = 0x2;
    }
    namespace FeWorldCollisionParams_t {
      constexpr std::ptrdiff_t flWorldFriction = 0x0;
      constexpr std::ptrdiff_t flGroundFriction = 0x4;
      constexpr std::ptrdiff_t nListBegin = 0x8;
      constexpr std::ptrdiff_t nListEnd = 0xa;
    }
    namespace FlexOpCode_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace FourCovMatrices3 {
      constexpr std::ptrdiff_t m_vDiag = 0x0;
      constexpr std::ptrdiff_t m_flXY = 0x30;
      constexpr std::ptrdiff_t m_flXZ = 0x40;
      constexpr std::ptrdiff_t m_flYZ = 0x50;
    }
    namespace FourVectors2D {
      constexpr std::ptrdiff_t x = 0x0;
      constexpr std::ptrdiff_t y = 0x10;
    }
    namespace IKTargetSource {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace IPhysAggregateInstance {
      constexpr std::ptrdiff_t m_pSkeleton = 0x8;
      constexpr std::ptrdiff_t m_bIsAxisAligned = 0x10;
    }
    namespace IPhysicsBody {
    }
    namespace IPhysicsBodyList {
    }
    namespace IPhysicsJoint {
    }
    namespace IPhysicsMotionController {
    }
    namespace IPhysicsParticleRope {
    }
    namespace IPhysicsPlayerController {
    }
    namespace IPhysicsRagdollControl {
    }
    namespace MeshDrawPrimitiveFlags_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace ModelBoneFlexComponent_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace MorphFlexControllerRemapType_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace NmCachedValueMode_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace NmEasingFunction_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace NmEventConditionRules_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace NmIKBlendMode_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace OldFeEdge_t {
      constexpr std::ptrdiff_t m_flK = 0x0;
      constexpr std::ptrdiff_t invA = 0xc;
      constexpr std::ptrdiff_t t = 0x10;
      constexpr std::ptrdiff_t flThetaRelaxed = 0x14;
      constexpr std::ptrdiff_t flThetaFactor = 0x18;
      constexpr std::ptrdiff_t c01 = 0x1c;
      constexpr std::ptrdiff_t c02 = 0x20;
      constexpr std::ptrdiff_t c03 = 0x24;
      constexpr std::ptrdiff_t c04 = 0x28;
      constexpr std::ptrdiff_t flAxialModelDist = 0x2c;
      constexpr std::ptrdiff_t flAxialModelWeights = 0x30;
      constexpr std::ptrdiff_t m_nNode = 0x40;
    }
    namespace PFNoiseType_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace ParticleFloatRoundType_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace ParticleModelType_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace PermModelInfo_t__FlagEnum {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace PhysicsParticleId_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace PoseType_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace RnBlendVertex_t {
      constexpr std::ptrdiff_t m_nWeight0 = 0x0;
      constexpr std::ptrdiff_t m_nIndex0 = 0x2;
      constexpr std::ptrdiff_t m_nWeight1 = 0x4;
      constexpr std::ptrdiff_t m_nIndex1 = 0x6;
      constexpr std::ptrdiff_t m_nWeight2 = 0x8;
      constexpr std::ptrdiff_t m_nIndex2 = 0xa;
      constexpr std::ptrdiff_t m_nFlags = 0xc;
      constexpr std::ptrdiff_t m_nTargetIndex = 0xe;
    }
    namespace RnBodyDesc_t {
      constexpr std::ptrdiff_t m_sDebugName = 0x0;
      constexpr std::ptrdiff_t m_vPosition = 0x8;
      constexpr std::ptrdiff_t m_qOrientation = 0x14;
      constexpr std::ptrdiff_t m_vLinearVelocity = 0x24;
      constexpr std::ptrdiff_t m_vAngularVelocity = 0x30;
      constexpr std::ptrdiff_t m_vLocalMassCenter = 0x3c;
      constexpr std::ptrdiff_t m_LocalInertiaInv = 0x48;
      constexpr std::ptrdiff_t m_flMassInv = 0x6c;
      constexpr std::ptrdiff_t m_flGameMass = 0x70;
      constexpr std::ptrdiff_t m_flMassScaleInv = 0x74;
      constexpr std::ptrdiff_t m_flInertiaScaleInv = 0x78;
      constexpr std::ptrdiff_t m_flLinearDamping = 0x7c;
      constexpr std::ptrdiff_t m_flAngularDamping = 0x80;
      constexpr std::ptrdiff_t m_flLinearDragScale = 0x84;
      constexpr std::ptrdiff_t m_flAngularDragScale = 0x88;
      constexpr std::ptrdiff_t m_flLinearFluidDragScale = 0x8c;
      constexpr std::ptrdiff_t m_flAngularFluidDragScale = 0x90;
      constexpr std::ptrdiff_t m_vLastAwakeForceAccum = 0x94;
      constexpr std::ptrdiff_t m_vLastAwakeTorqueAccum = 0xa0;
      constexpr std::ptrdiff_t m_flBuoyancyScale = 0xac;
      constexpr std::ptrdiff_t m_flGravityScale = 0xb0;
      constexpr std::ptrdiff_t m_flTimeScale = 0xb4;
      constexpr std::ptrdiff_t m_nBodyType = 0xb8;
      constexpr std::ptrdiff_t m_nGameIndex = 0xbc;
      constexpr std::ptrdiff_t m_nGameFlags = 0xc0;
      constexpr std::ptrdiff_t m_nMinVelocityIterations = 0xc4;
      constexpr std::ptrdiff_t m_nMinPositionIterations = 0xc5;
      constexpr std::ptrdiff_t m_nMassPriority = 0xc6;
      constexpr std::ptrdiff_t m_bEnabled = 0xc7;
      constexpr std::ptrdiff_t m_bSleeping = 0xc8;
      constexpr std::ptrdiff_t m_bIsContinuousEnabled = 0xc9;
      constexpr std::ptrdiff_t m_bDragEnabled = 0xca;
      constexpr std::ptrdiff_t m_vGravity = 0xcc;
      constexpr std::ptrdiff_t m_bSpeculativeEnabled = 0xd8;
      constexpr std::ptrdiff_t m_bHasShadowController = 0xd9;
      constexpr std::ptrdiff_t m_nDynamicContinuousContactBehavior = 0xda;
    }
    namespace RnCapsule_t {
      constexpr std::ptrdiff_t m_vCenter = 0x0;
      constexpr std::ptrdiff_t m_flRadius = 0x18;
    }
    namespace RnFace_t {
      constexpr std::ptrdiff_t m_nEdge = 0x0;
    }
    namespace RnHalfEdge_t {
      constexpr std::ptrdiff_t m_nNext = 0x0;
      constexpr std::ptrdiff_t m_nTwin = 0x1;
      constexpr std::ptrdiff_t m_nOrigin = 0x2;
      constexpr std::ptrdiff_t m_nFace = 0x3;
    }
    namespace RnHull_t {
      constexpr std::ptrdiff_t m_vCentroid = 0x0;
      constexpr std::ptrdiff_t m_flMaxAngularRadius = 0xc;
      constexpr std::ptrdiff_t m_Bounds = 0x10;
      constexpr std::ptrdiff_t m_vOrthographicAreas = 0x28;
      constexpr std::ptrdiff_t m_MassProperties = 0x34;
      constexpr std::ptrdiff_t m_flVolume = 0x64;
      constexpr std::ptrdiff_t m_flSurfaceArea = 0x68;
      constexpr std::ptrdiff_t m_Vertices = 0x70;
      constexpr std::ptrdiff_t m_VertexPositions = 0x88;
      constexpr std::ptrdiff_t m_Edges = 0xa0;
      constexpr std::ptrdiff_t m_Faces = 0xb8;
      constexpr std::ptrdiff_t m_FacePlanes = 0xd0;
      constexpr std::ptrdiff_t m_nFlags = 0xe8;
      constexpr std::ptrdiff_t m_pRegionSVM = 0xf0;
    }
    namespace RnMesh_t {
      constexpr std::ptrdiff_t m_vMin = 0x0;
      constexpr std::ptrdiff_t m_vMax = 0xc;
      constexpr std::ptrdiff_t m_Nodes = 0x18;
      constexpr std::ptrdiff_t m_Vertices = 0x30;
      constexpr std::ptrdiff_t m_Triangles = 0x48;
      constexpr std::ptrdiff_t m_Wings = 0x60;
      constexpr std::ptrdiff_t m_TriangleEdgeFlags = 0x78;
      constexpr std::ptrdiff_t m_Materials = 0x90;
      constexpr std::ptrdiff_t m_vOrthographicAreas = 0xa8;
      constexpr std::ptrdiff_t m_nFlags = 0xb4;
      constexpr std::ptrdiff_t m_nDebugFlags = 0xb8;
    }
    namespace RnNode_t {
      constexpr std::ptrdiff_t m_vMin = 0x0;
      constexpr std::ptrdiff_t m_nChildren = 0xc;
      constexpr std::ptrdiff_t m_vMax = 0x10;
      constexpr std::ptrdiff_t m_nTriangleOffset = 0x1c;
    }
    namespace RnPlane_t {
      constexpr std::ptrdiff_t m_vNormal = 0x0;
      constexpr std::ptrdiff_t m_flOffset = 0xc;
    }
    namespace RnShapeDesc_t {
      constexpr std::ptrdiff_t m_nCollisionAttributeIndex = 0x0;
      constexpr std::ptrdiff_t m_nSurfacePropertyIndex = 0x4;
      constexpr std::ptrdiff_t m_UserFriendlyName = 0x8;
      constexpr std::ptrdiff_t m_bUserFriendlyNameSealed = 0x10;
      constexpr std::ptrdiff_t m_bUserFriendlyNameLong = 0x11;
      constexpr std::ptrdiff_t m_nToolMaterialHash = 0x14;
    }
    namespace RnTriangle_t {
      constexpr std::ptrdiff_t m_nIndex = 0x0;
    }
    namespace RnVertex_t {
      constexpr std::ptrdiff_t m_nEdge = 0x0;
    }
    namespace RnWing_t {
      constexpr std::ptrdiff_t m_nIndex = 0x0;
    }
    namespace StepPhase {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace TargetWarpAngleMode_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace VPhysXBodyPart_t__VPhysXFlagEnum_t {
      constexpr std::ptrdiff_t  = 0x0;
    }
    namespace VertexPositionColor_t {
      constexpr std::ptrdiff_t m_vPosition = 0x0;
    }
    namespace VertexPositionNormal_t {
      constexpr std::ptrdiff_t m_vPosition = 0x0;
      constexpr std::ptrdiff_t m_vNormal = 0xc;
    }
    namespace constraint_axislimit_t {
      constexpr std::ptrdiff_t flMinRotation = 0x0;
      constexpr std::ptrdiff_t flMaxRotation = 0x4;
      constexpr std::ptrdiff_t flMotorTargetAngSpeed = 0x8;
      constexpr std::ptrdiff_t flMotorMaxTorque = 0xc;
    }
    namespace constraint_breakableparams_t {
      constexpr std::ptrdiff_t strength = 0x0;
      constexpr std::ptrdiff_t forceLimit = 0x4;
      constexpr std::ptrdiff_t torqueLimit = 0x8;
      constexpr std::ptrdiff_t bodyMassScale = 0xc;
      constexpr std::ptrdiff_t isActive = 0x14;
    }
    namespace constraint_hingeparams_t {
      constexpr std::ptrdiff_t worldPosition = 0x0;
      constexpr std::ptrdiff_t worldAxisDirection = 0xc;
      constexpr std::ptrdiff_t hingeAxis = 0x18;
      constexpr std::ptrdiff_t constraint = 0x28;
    }
    namespace vphysics_save_cphysicsbody_t {
      constexpr std::ptrdiff_t m_nOldPointer = 0xe0;
    }
    namespace vphysics_save_ragdoll_control_t {
      constexpr std::ptrdiff_t m_flMinSpringFrequency = 0x0;
      constexpr std::ptrdiff_t m_flMaxSpringFrequency = 0x4;
      constexpr std::ptrdiff_t m_flMaxStretch = 0x8;
      constexpr std::ptrdiff_t m_bSolidCollisionAtZeroWeight = 0xc;
      constexpr std::ptrdiff_t m_bRequiresDynamicBodies = 0xd;
      constexpr std::ptrdiff_t m_bIgnoreTeleport = 0xe;
      constexpr std::ptrdiff_t m_vLinearVelocityAccumulator = 0x10;
      constexpr std::ptrdiff_t m_vAngularVelocityAccumulator = 0x1c;
      constexpr std::ptrdiff_t m_vForceAccumulator = 0x28;
      constexpr std::ptrdiff_t m_nBodyCount = 0x34;
    }
  }
}
