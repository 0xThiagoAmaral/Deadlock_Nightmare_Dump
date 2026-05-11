// Generated via Nightmare Oracle
#pragma once
#include <cstddef>

namespace deadlock_dumper {
  namespace rendersystemdx11_dll {
    namespace RenderInputLayoutField_t {
      constexpr std::ptrdiff_t m_pSemanticName = 0x0;
      constexpr std::ptrdiff_t m_nSemanticIndex = 0x20;
      constexpr std::ptrdiff_t m_nOffset = 0x28;
      constexpr std::ptrdiff_t m_nSlot = 0x2a;
      constexpr std::ptrdiff_t m_nSlotType = 0x2b;
      constexpr std::ptrdiff_t m_szShaderSemantic = 0x2c;
    }
    namespace RsBlendStateDesc_t {
      constexpr std::ptrdiff_t m_bIndependentBlendEnable = 0x0;
      constexpr std::ptrdiff_t m_blendOpBits = 0x0;
      constexpr std::ptrdiff_t m_bAlphaToCoverageEnable = 0x0;
      constexpr std::ptrdiff_t m_srcBlendBits = 0x0;
      constexpr std::ptrdiff_t m_destBlendBits = 0x4;
      constexpr std::ptrdiff_t m_srcBlendAlphaBits = 0x8;
      constexpr std::ptrdiff_t m_destBlendAlphaBits = 0xc;
      constexpr std::ptrdiff_t m_renderTargetWriteMaskBits = 0x10;
      constexpr std::ptrdiff_t m_blendOpAlphaBits = 0x18;
      constexpr std::ptrdiff_t m_blendEnableBits = 0x1c;
      constexpr std::ptrdiff_t m_srgbWriteEnableBits = 0x1d;
    }
    namespace RsDepthStencilStateDesc_t {
      constexpr std::ptrdiff_t m_bDepthTestEnable = 0x0;
      constexpr std::ptrdiff_t m_bDepthWriteEnable = 0x0;
      constexpr std::ptrdiff_t m_depthFunc = 0x1;
      constexpr std::ptrdiff_t m_stencilState = 0x2;
    }
    namespace RsRasterizerStateDesc_t {
      constexpr std::ptrdiff_t m_nFillMode = 0x0;
      constexpr std::ptrdiff_t m_nCullMode = 0x1;
      constexpr std::ptrdiff_t m_bDepthClipEnable = 0x2;
      constexpr std::ptrdiff_t m_bMultisampleEnable = 0x3;
      constexpr std::ptrdiff_t m_nDepthBias = 0x4;
      constexpr std::ptrdiff_t m_flDepthBiasClamp = 0x8;
      constexpr std::ptrdiff_t m_flSlopeScaledDepthBias = 0xc;
    }
    namespace RsStencilStateDesc_t {
      constexpr std::ptrdiff_t m_backStencilPassOp = 0x0;
      constexpr std::ptrdiff_t m_backStencilFailOp = 0x0;
      constexpr std::ptrdiff_t m_bStencilEnable = 0x0;
      constexpr std::ptrdiff_t m_frontStencilPassOp = 0x0;
      constexpr std::ptrdiff_t m_backStencilDepthFailOp = 0x0;
      constexpr std::ptrdiff_t m_frontStencilFailOp = 0x0;
      constexpr std::ptrdiff_t m_frontStencilFunc = 0x0;
      constexpr std::ptrdiff_t m_frontStencilDepthFailOp = 0x0;
      constexpr std::ptrdiff_t m_backStencilFunc = 0x0;
      constexpr std::ptrdiff_t m_nStencilReadMask = 0x4;
      constexpr std::ptrdiff_t m_nStencilWriteMask = 0x5;
    }
    namespace SheetSequenceIntegerId_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace VsInputSignatureElement_t {
      constexpr std::ptrdiff_t m_pName = 0x0;
      constexpr std::ptrdiff_t m_pSemantic = 0x40;
      constexpr std::ptrdiff_t m_pD3DSemanticName = 0x80;
      constexpr std::ptrdiff_t m_nD3DSemanticIndex = 0xc0;
    }
    namespace VsInputSignature_t {
      constexpr std::ptrdiff_t m_elems = 0x0;
      constexpr std::ptrdiff_t m_depth_elems = 0x18;
    }
  }
}
