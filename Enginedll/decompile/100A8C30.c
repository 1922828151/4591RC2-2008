/*
 * func-name: ?UninitializeImm@CMLIMEEditBox@@CAXXZ
 * func-address: 0x100a8c30
 * callers: 0x100ce860, 0x101b8e70
 * callees: none
 */

void __cdecl CMLIMEEditBox::UninitializeImm()
{
  if ( CMLIMEEditBox::s_hDllImm32 )
  {
    CMLIMEEditBox::_ImmLockIMC = CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    CMLIMEEditBox::_ImmUnlockIMC = CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    CMLIMEEditBox::_ImmLockIMCC = CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    CMLIMEEditBox::_ImmUnlockIMCC = CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    CMLIMEEditBox::_ImmDisableTextFrameService = (int (__stdcall *)(unsigned int))CREIMEEditBox::Dummy_ImmDisableTextFrameService;
    CMLIMEEditBox::_ImmGetCompositionStringW = (int (__stdcall *)(HIMC, unsigned int, void *, unsigned int))CREIMEEditBox::Dummy_ImmGetCompositionStringW;
    CMLIMEEditBox::_ImmGetCandidateListW = (unsigned int (__stdcall *)(HIMC, unsigned int, struct tagCANDIDATELIST *, unsigned int))CREIMEEditBox::Dummy_VerQueryValueA;
    CMLIMEEditBox::_ImmGetContext = CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    CMLIMEEditBox::_ImmReleaseContext = CREIMEEditBox::Dummy_ShowReadingWindow;
    CMLIMEEditBox::_ImmAssociateContext = CREIMEEditBox::Dummy_ShowReadingWindow;
    CMLIMEEditBox::_ImmGetOpenStatus = CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    CMLIMEEditBox::_ImmSetOpenStatus = (int (__stdcall *)(HIMC, int))CREIMEEditBox::Dummy_ShowReadingWindow;
    CMLIMEEditBox::_ImmGetConversionStatus = CREIMEEditBox::Dummy_ImmSetConversionStatus;
    CMLIMEEditBox::_ImmGetDefaultIMEWnd = (HWND (__stdcall *)(HWND))CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    CMLIMEEditBox::_ImmGetIMEFileNameA = CREIMEEditBox::Dummy_ImmSetConversionStatus;
    CMLIMEEditBox::_ImmGetVirtualKey = (unsigned int (__stdcall *)(HWND))CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    CMLIMEEditBox::_ImmNotifyIME = CREIMEEditBox::Dummy_VerQueryValueA;
    CMLIMEEditBox::_ImmSetConversionStatus = (int (__stdcall *)(HIMC, unsigned int, unsigned int))CREIMEEditBox::Dummy_ImmSetConversionStatus;
    CMLIMEEditBox::_ImmSimulateHotKey = (int (__stdcall *)(HWND, unsigned int))CREIMEEditBox::Dummy_ShowReadingWindow;
    CMLIMEEditBox::_ImmIsIME = CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    FreeLibrary(CMLIMEEditBox::s_hDllImm32);
    CMLIMEEditBox::s_hDllImm32 = 0;
  }
  if ( CMLIMEEditBox::s_hDllIme )
  {
    CMLIMEEditBox::_GetReadingString = (unsigned int (__stdcall *)(HIMC, unsigned int, wchar_t *, int *, int *, unsigned int *))CREIMEEditBox::Dummy_GetReadingString;
    CMLIMEEditBox::_ShowReadingWindow = (int (__stdcall *)(HIMC, int))CREIMEEditBox::Dummy_ShowReadingWindow;
    FreeLibrary(CMLIMEEditBox::s_hDllIme);
    CMLIMEEditBox::s_hDllIme = 0;
  }
  if ( CMLIMEEditBox::s_hDllVer )
  {
    CMLIMEEditBox::_VerQueryValueA = CREIMEEditBox::Dummy_VerQueryValueA;
    CMLIMEEditBox::_GetFileVersionInfoA = CREIMEEditBox::Dummy_VerQueryValueA;
    CMLIMEEditBox::_GetFileVersionInfoSizeA = CREIMEEditBox::Dummy_ShowReadingWindow;
    FreeLibrary(CMLIMEEditBox::s_hDllVer);
    CMLIMEEditBox::s_hDllVer = 0;
  }
}
