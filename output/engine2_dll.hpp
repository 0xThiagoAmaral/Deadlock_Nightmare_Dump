// Generated via Nightmare Oracle
#pragma once
#include <cstddef>

namespace deadlock_dumper {
  namespace engine2_dll {
    namespace  {
    }
    namespace Attribute_t {
    }
    namespace CEmptyEntityInstance {
    }
    namespace CEntityAttributeTable {
      constexpr std::ptrdiff_t m_Attributes = 0x0;
      constexpr std::ptrdiff_t m_Names = 0x28;
    }
    namespace CEntityComponent {
    }
    namespace CEntityComponentHelper {
      constexpr std::ptrdiff_t m_flags = 0x8;
      constexpr std::ptrdiff_t m_pInfo = 0x10;
      constexpr std::ptrdiff_t m_nPriority = 0x18;
      constexpr std::ptrdiff_t m_pNext = 0x20;
    }
    namespace CEntityIOOutput {
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
    namespace CNetworkVarChainer {
      constexpr std::ptrdiff_t m_PathIndex = 0x20;
    }
    namespace CScriptComponent {
      constexpr std::ptrdiff_t m_scriptClassName = 0x30;
    }
    namespace CVariantDefaultAllocator {
    }
    namespace ChangeAccessorFieldPathIndex_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace EngineLoopState_t {
      constexpr std::ptrdiff_t m_nPlatWindowWidth = 0x18;
      constexpr std::ptrdiff_t m_nPlatWindowHeight = 0x1c;
      constexpr std::ptrdiff_t m_nRenderWidth = 0x20;
      constexpr std::ptrdiff_t m_nRenderHeight = 0x24;
    }
    namespace EntComponentInfo_t {
      constexpr std::ptrdiff_t m_pName = 0x0;
      constexpr std::ptrdiff_t m_pCPPClassname = 0x8;
      constexpr std::ptrdiff_t m_pNetworkDataReferencedDescription = 0x10;
      constexpr std::ptrdiff_t m_pNetworkDataReferencedPtrPropDescription = 0x18;
      constexpr std::ptrdiff_t m_nRuntimeIndex = 0x20;
      constexpr std::ptrdiff_t m_nFlags = 0x24;
      constexpr std::ptrdiff_t m_pBaseClassComponentHelper = 0x60;
    }
    namespace EntInput_t {
    }
    namespace EntOutput_t {
    }
    namespace EventAdvanceTick_t {
      constexpr std::ptrdiff_t m_nCurrentTick = 0x30;
      constexpr std::ptrdiff_t m_nCurrentTickThisFrame = 0x34;
      constexpr std::ptrdiff_t m_nTotalTicksThisFrame = 0x38;
      constexpr std::ptrdiff_t m_nTotalTicks = 0x3c;
    }
    namespace EventAppShutdown_t {
      constexpr std::ptrdiff_t m_nDummy0 = 0x0;
    }
    namespace EventClientAdvanceNonRenderedFrame_t {
    }
    namespace EventClientAdvanceTick_t {
    }
    namespace EventClientFrameSimulate_t {
      constexpr std::ptrdiff_t m_LoopState = 0x0;
      constexpr std::ptrdiff_t m_flRealTime = 0x28;
      constexpr std::ptrdiff_t m_flFrameTime = 0x2c;
      constexpr std::ptrdiff_t m_bScheduleSendTickPacket = 0x30;
    }
    namespace EventClientOutput_t {
      constexpr std::ptrdiff_t m_LoopState = 0x0;
      constexpr std::ptrdiff_t m_flRenderTime = 0x28;
      constexpr std::ptrdiff_t m_flRealTime = 0x2c;
      constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x30;
      constexpr std::ptrdiff_t m_bRenderOnly = 0x34;
    }
    namespace EventClientPauseSimulate_t {
    }
    namespace EventClientPollInput_t {
      constexpr std::ptrdiff_t m_LoopState = 0x0;
      constexpr std::ptrdiff_t m_flRealTime = 0x28;
    }
    namespace EventClientPollNetworking_t {
      constexpr std::ptrdiff_t m_nTickCount = 0x0;
    }
    namespace EventClientPostAdvanceTick_t {
    }
    namespace EventClientPostOutput_t {
      constexpr std::ptrdiff_t m_LoopState = 0x0;
      constexpr std::ptrdiff_t m_flRenderTime = 0x28;
      constexpr std::ptrdiff_t m_flRenderFrameTime = 0x30;
      constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x34;
      constexpr std::ptrdiff_t m_bRenderOnly = 0x38;
    }
    namespace EventClientPostSimulate_t {
    }
    namespace EventClientPreOutputParallelWithServer_t {
    }
    namespace EventClientPreOutput_t {
      constexpr std::ptrdiff_t m_LoopState = 0x0;
      constexpr std::ptrdiff_t m_flRenderTime = 0x28;
      constexpr std::ptrdiff_t m_flRenderFrameTime = 0x30;
      constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x38;
      constexpr std::ptrdiff_t m_flRealTime = 0x40;
      constexpr std::ptrdiff_t m_bRenderOnly = 0x44;
    }
    namespace EventClientPreSimulate_t {
    }
    namespace EventClientProcessGameInput_t {
      constexpr std::ptrdiff_t m_LoopState = 0x0;
      constexpr std::ptrdiff_t m_flRealTime = 0x28;
      constexpr std::ptrdiff_t m_flFrameTime = 0x2c;
    }
    namespace EventClientProcessInput_t {
      constexpr std::ptrdiff_t m_LoopState = 0x0;
      constexpr std::ptrdiff_t m_flRealTime = 0x28;
      constexpr std::ptrdiff_t m_flTickInterval = 0x2c;
      constexpr std::ptrdiff_t m_flTickStartTime = 0x30;
    }
    namespace EventClientProcessNetworking_t {
      constexpr std::ptrdiff_t m_nTickCount = 0x0;
    }
    namespace EventClientSceneSystemThreadStateChange_t {
      constexpr std::ptrdiff_t m_bThreadsActive = 0x0;
    }
    namespace EventClientSimulate_t {
    }
    namespace EventFrameBoundary_t {
      constexpr std::ptrdiff_t m_flFrameTime = 0x0;
    }
    namespace EventModInitialized_t {
    }
    namespace EventPostAdvanceTick_t {
      constexpr std::ptrdiff_t m_nCurrentTick = 0x30;
      constexpr std::ptrdiff_t m_nCurrentTickThisFrame = 0x34;
      constexpr std::ptrdiff_t m_nTotalTicksThisFrame = 0x38;
      constexpr std::ptrdiff_t m_nTotalTicks = 0x3c;
    }
    namespace EventPostDataUpdate_t {
      constexpr std::ptrdiff_t m_nCount = 0x0;
    }
    namespace EventPreDataUpdate_t {
      constexpr std::ptrdiff_t m_nCount = 0x0;
    }
    namespace EventProfileStorageAvailable_t {
      constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x0;
    }
    namespace EventServerAdvanceTick_t {
    }
    namespace EventServerBeginAsyncPostTickWork_t {
      constexpr std::ptrdiff_t m_bIsOncePerFrameAsyncWorkPhase = 0x0;
    }
    namespace EventServerBeginSimulate_t {
    }
    namespace EventServerEndAsyncPostTickWork_t {
    }
    namespace EventServerEndSimulate_t {
      constexpr std::ptrdiff_t m_bLastTick = 0x0;
    }
    namespace EventServerPollNetworking_t {
    }
    namespace EventServerPostAdvanceTick_t {
      constexpr std::ptrdiff_t m_bLastTickBeforeClientUpdate = 0x40;
    }
    namespace EventServerPostSimulate_t {
      constexpr std::ptrdiff_t m_bLastTickBeforeClientUpdate = 0x30;
    }
    namespace EventServerProcessNetworking_t {
    }
    namespace EventSetTime_t {
      constexpr std::ptrdiff_t m_LoopState = 0x0;
      constexpr std::ptrdiff_t m_nClientOutputFrames = 0x28;
      constexpr std::ptrdiff_t m_flRealTime = 0x30;
      constexpr std::ptrdiff_t m_flRenderTime = 0x38;
      constexpr std::ptrdiff_t m_flRenderFrameTime = 0x40;
      constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x48;
      constexpr std::ptrdiff_t m_flRenderFrameTimeUnscaled = 0x50;
      constexpr std::ptrdiff_t m_flTickRemainder = 0x58;
    }
    namespace EventSimpleLoopFrameUpdate_t {
      constexpr std::ptrdiff_t m_LoopState = 0x0;
      constexpr std::ptrdiff_t m_flRealTime = 0x28;
      constexpr std::ptrdiff_t m_flFrameTime = 0x2c;
    }
    namespace EventSimulate_t {
      constexpr std::ptrdiff_t m_LoopState = 0x0;
      constexpr std::ptrdiff_t m_bFirstTick = 0x28;
      constexpr std::ptrdiff_t m_bLastTick = 0x29;
    }
    namespace EventSplitScreenStateChanged_t {
    }
    namespace GameTick_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace GameTime_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
  }
}
