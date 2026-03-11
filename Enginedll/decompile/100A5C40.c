/*
 * func-name: ?UninitializeImm@CREIMEEditBox@@CAXXZ
 * func-address: 0x100a5c40
 * callers: 0x100ce860, 0x101b8e70
 * callees: none
 */

void __cdecl CREIMEEditBox::UninitializeImm()
{
  if ( CREIMEEditBox::s_hDllImm32 )
  {
    CREIMEEditBox::_ImmLockIMC = CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    CREIMEEditBox::_ImmUnlockIMC = CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    CREIMEEditBox::_ImmLockIMCC = CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    CREIMEEditBox::_ImmUnlockIMCC = CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    CREIMEEditBox::_ImmDisableTextFrameService = (int (__stdcall *)(unsigned int))CREIMEEditBox::Dummy_ImmDisableTextFrameService;
    CREIMEEditBox::_ImmGetCompositionStringW = (int (__stdcall *)(HIMC, unsigned int, void *, unsigned int))CREIMEEditBox::Dummy_ImmGetCompositionStringW;
    CREIMEEditBox::_ImmGetCandidateListW = (unsigned int (__stdcall *)(HIMC, unsigned int, struct tagCANDIDATELIST *, unsigned int))CREIMEEditBox::Dummy_VerQueryValueA;
    CREIMEEditBox::_ImmGetContext = CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    CREIMEEditBox::_ImmReleaseContext = CREIMEEditBox::Dummy_ShowReadingWindow;
    CREIMEEditBox::_ImmAssociateContext = (HIMC (__stdcall *)(HWND, HIMC))CREIMEEditBox::Dummy_ShowReadingWindow;
    CREIMEEditBox::_ImmGetOpenStatus = CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    CREIMEEditBox::_ImmSetOpenStatus = (int (__stdcall *)(HIMC, int))CREIMEEditBox::Dummy_ShowReadingWindow;
    CREIMEEditBox::_ImmGetConversionStatus = CREIMEEditBox::Dummy_ImmSetConversionStatus;
    CREIMEEditBox::_ImmGetDefaultIMEWnd = (HWND (__stdcall *)(HWND))CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    CREIMEEditBox::_ImmGetIMEFileNameA = CREIMEEditBox::Dummy_ImmSetConversionStatus;
    CREIMEEditBox::_ImmGetVirtualKey = (unsigned int (__stdcall *)(HWND))CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    CREIMEEditBox::_ImmNotifyIME = (int (__stdcall *)(HIMC, unsigned int, unsigned int, unsigned int))CREIMEEditBox::Dummy_VerQueryValueA;
    CREIMEEditBox::_ImmSetConversionStatus = (int (__stdcall *)(HIMC, unsigned int, unsigned int))CREIMEEditBox::Dummy_ImmSetConversionStatus;
    CREIMEEditBox::_ImmSimulateHotKey = (int (__stdcall *)(HWND, unsigned int))CREIMEEditBox::Dummy_ShowReadingWindow;
    CREIMEEditBox::_ImmIsIME = CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    FreeLibrary(CREIMEEditBox::s_hDllImm32);
    CREIMEEditBox::s_hDllImm32 = 0;
  }
  if ( CREIMEEditBox::s_hDllIme )
  {
    CREIMEEditBox::_GetReadingString = (unsigned int (__stdcall *)(HIMC, unsigned int, wchar_t *, int *, int *, unsigned int *))CREIMEEditBox::Dummy_GetReadingString;
    CREIMEEditBox::_ShowReadingWindow = (int (__stdcall *)(HIMC, int))CREIMEEditBox::Dummy_ShowReadingWindow;
    FreeLibrary(CREIMEEditBox::s_hDllIme);
    CREIMEEditBox::s_hDllIme = 0;
  }
  if ( CREIMEEditBox::s_hDllVer )
  {
    CREIMEEditBox::_VerQueryValueA = CREIMEEditBox::Dummy_VerQueryValueA;
    CREIMEEditBox::_GetFileVersionInfoA = CREIMEEditBox::Dummy_VerQueryValueA;
    CREIMEEditBox::_GetFileVersionInfoSizeA = CREIMEEditBox::Dummy_ShowReadingWindow;
    FreeLibrary(CREIMEEditBox::s_hDllVer);
    CREIMEEditBox::s_hDllVer = 0;
  }
}
