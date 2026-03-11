/*
 * func-name: ?InitializeImm@CREIMEEditBox@@CAXXZ
 * func-address: 0x100a5a00
 * callers: 0x100ce840, 0x101b81a0
 * callees: none
 */

void __cdecl CREIMEEditBox::InitializeImm()
{
  HMODULE LibraryW; // eax
  LPINPUTCONTEXT (__stdcall *ImmLockIMC)(HIMC); // eax
  BOOL (__stdcall *ImmUnlockIMC)(HIMC); // eax
  LPVOID (__stdcall *ImmLockIMCC)(HIMCC); // eax
  BOOL (__stdcall *ImmUnlockIMCC)(HIMCC); // eax
  BOOL (__stdcall *ImmDisableTextFrameService)(DWORD); // eax
  LONG (__stdcall *ImmGetCompositionStringW)(HIMC, DWORD, LPVOID, DWORD); // eax
  DWORD (__stdcall *ImmGetCandidateListW)(HIMC, DWORD, LPCANDIDATELIST, DWORD); // eax
  HIMC (__stdcall *ImmGetContext)(HWND); // eax
  BOOL (__stdcall *ImmReleaseContext)(HWND, HIMC); // eax
  HIMC (__stdcall *ImmAssociateContext)(HWND, HIMC); // eax
  BOOL (__stdcall *ImmGetOpenStatus)(HIMC); // eax
  BOOL (__stdcall *ImmSetOpenStatus)(HIMC, BOOL); // eax
  BOOL (__stdcall *ImmGetConversionStatus)(HIMC, LPDWORD, LPDWORD); // eax
  HWND (__stdcall *ImmGetDefaultIMEWnd)(HWND); // eax
  UINT (__stdcall *ImmGetIMEFileNameA)(HKL, LPSTR, UINT); // eax
  UINT (__stdcall *ImmGetVirtualKey)(HWND); // eax
  BOOL (__stdcall *ImmNotifyIME)(HIMC, DWORD, DWORD, DWORD); // eax
  BOOL (__stdcall *ImmSetConversionStatus)(HIMC, DWORD, DWORD); // eax
  BOOL (__stdcall *ImmSimulateHotKey)(HWND, DWORD); // eax
  BOOL (__stdcall *ImmIsIME)(HKL); // eax
  HMODULE v21; // eax
  BOOL (__stdcall *VerQueryValueA)(LPCVOID, LPCSTR, LPVOID *, PUINT); // eax
  BOOL (__stdcall *GetFileVersionInfoA)(LPCSTR, DWORD, DWORD, LPVOID); // eax
  DWORD (__stdcall *GetFileVersionInfoSizeA)(LPCSTR, LPDWORD); // eax

  LibraryW = LoadLibraryW(L"imm32.dll");
  CREIMEEditBox::s_hDllImm32 = LibraryW;
  if ( LibraryW )
  {
    ImmLockIMC = (LPINPUTCONTEXT (__stdcall *)(HIMC))GetProcAddress(LibraryW, "ImmLockIMC");
    if ( ImmLockIMC )
      CREIMEEditBox::_ImmLockIMC = (const int *(__stdcall *)(void *))ImmLockIMC;
    ImmUnlockIMC = (BOOL (__stdcall *)(HIMC))GetProcAddress(CREIMEEditBox::s_hDllImm32, "ImmUnlockIMC");
    if ( ImmUnlockIMC )
      CREIMEEditBox::_ImmUnlockIMC = (const int *(__stdcall *)(void *))ImmUnlockIMC;
    ImmLockIMCC = (LPVOID (__stdcall *)(HIMCC))GetProcAddress(CREIMEEditBox::s_hDllImm32, "ImmLockIMCC");
    if ( ImmLockIMCC )
      CREIMEEditBox::_ImmLockIMCC = (const int *(__stdcall *)(void *))ImmLockIMCC;
    ImmUnlockIMCC = (BOOL (__stdcall *)(HIMCC))GetProcAddress(CREIMEEditBox::s_hDllImm32, "ImmUnlockIMCC");
    if ( ImmUnlockIMCC )
      CREIMEEditBox::_ImmUnlockIMCC = (const int *(__stdcall *)(void *))ImmUnlockIMCC;
    ImmDisableTextFrameService = (BOOL (__stdcall *)(DWORD))GetProcAddress(
                                                              CREIMEEditBox::s_hDllImm32,
                                                              "ImmDisableTextFrameService");
    if ( ImmDisableTextFrameService )
      CREIMEEditBox::_ImmDisableTextFrameService = (int (__stdcall *)(unsigned int))ImmDisableTextFrameService;
    ImmGetCompositionStringW = (LONG (__stdcall *)(HIMC, DWORD, LPVOID, DWORD))GetProcAddress(
                                                                                 CREIMEEditBox::s_hDllImm32,
                                                                                 "ImmGetCompositionStringW");
    if ( ImmGetCompositionStringW )
      CREIMEEditBox::_ImmGetCompositionStringW = (int (__stdcall *)(HIMC, unsigned int, void *, unsigned int))ImmGetCompositionStringW;
    ImmGetCandidateListW = (DWORD (__stdcall *)(HIMC, DWORD, LPCANDIDATELIST, DWORD))GetProcAddress(
                                                                                       CREIMEEditBox::s_hDllImm32,
                                                                                       "ImmGetCandidateListW");
    if ( ImmGetCandidateListW )
      CREIMEEditBox::_ImmGetCandidateListW = (unsigned int (__stdcall *)(HIMC, unsigned int, struct tagCANDIDATELIST *, unsigned int))ImmGetCandidateListW;
    ImmGetContext = (HIMC (__stdcall *)(HWND))GetProcAddress(CREIMEEditBox::s_hDllImm32, "ImmGetContext");
    if ( ImmGetContext )
      CREIMEEditBox::_ImmGetContext = (const int *(__stdcall *)(void *))ImmGetContext;
    ImmReleaseContext = (BOOL (__stdcall *)(HWND, HIMC))GetProcAddress(CREIMEEditBox::s_hDllImm32, "ImmReleaseContext");
    if ( ImmReleaseContext )
      CREIMEEditBox::_ImmReleaseContext = (int (__stdcall *)(HIMC, int))ImmReleaseContext;
    ImmAssociateContext = (HIMC (__stdcall *)(HWND, HIMC))GetProcAddress(
                                                            CREIMEEditBox::s_hDllImm32,
                                                            "ImmAssociateContext");
    if ( ImmAssociateContext )
      CREIMEEditBox::_ImmAssociateContext = (HIMC (__stdcall *)(HWND, HIMC))ImmAssociateContext;
    ImmGetOpenStatus = (BOOL (__stdcall *)(HIMC))GetProcAddress(CREIMEEditBox::s_hDllImm32, "ImmGetOpenStatus");
    if ( ImmGetOpenStatus )
      CREIMEEditBox::_ImmGetOpenStatus = (const int *(__stdcall *)(void *))ImmGetOpenStatus;
    ImmSetOpenStatus = (BOOL (__stdcall *)(HIMC, BOOL))GetProcAddress(CREIMEEditBox::s_hDllImm32, "ImmSetOpenStatus");
    if ( ImmSetOpenStatus )
      CREIMEEditBox::_ImmSetOpenStatus = (int (__stdcall *)(HIMC, int))ImmSetOpenStatus;
    ImmGetConversionStatus = (BOOL (__stdcall *)(HIMC, LPDWORD, LPDWORD))GetProcAddress(
                                                                           CREIMEEditBox::s_hDllImm32,
                                                                           "ImmGetConversionStatus");
    if ( ImmGetConversionStatus )
      CREIMEEditBox::_ImmGetConversionStatus = (int (__stdcall *)(HIMC, unsigned int, unsigned int))ImmGetConversionStatus;
    ImmGetDefaultIMEWnd = (HWND (__stdcall *)(HWND))GetProcAddress(CREIMEEditBox::s_hDllImm32, "ImmGetDefaultIMEWnd");
    if ( ImmGetDefaultIMEWnd )
      CREIMEEditBox::_ImmGetDefaultIMEWnd = (HWND (__stdcall *)(HWND))ImmGetDefaultIMEWnd;
    ImmGetIMEFileNameA = (UINT (__stdcall *)(HKL, LPSTR, UINT))GetProcAddress(
                                                                 CREIMEEditBox::s_hDllImm32,
                                                                 "ImmGetIMEFileNameA");
    if ( ImmGetIMEFileNameA )
      CREIMEEditBox::_ImmGetIMEFileNameA = (int (__stdcall *)(HIMC, unsigned int, unsigned int))ImmGetIMEFileNameA;
    ImmGetVirtualKey = (UINT (__stdcall *)(HWND))GetProcAddress(CREIMEEditBox::s_hDllImm32, "ImmGetVirtualKey");
    if ( ImmGetVirtualKey )
      CREIMEEditBox::_ImmGetVirtualKey = (unsigned int (__stdcall *)(HWND))ImmGetVirtualKey;
    ImmNotifyIME = (BOOL (__stdcall *)(HIMC, DWORD, DWORD, DWORD))GetProcAddress(
                                                                    CREIMEEditBox::s_hDllImm32,
                                                                    "ImmNotifyIME");
    if ( ImmNotifyIME )
      CREIMEEditBox::_ImmNotifyIME = (int (__stdcall *)(HIMC, unsigned int, unsigned int, unsigned int))ImmNotifyIME;
    ImmSetConversionStatus = (BOOL (__stdcall *)(HIMC, DWORD, DWORD))GetProcAddress(
                                                                       CREIMEEditBox::s_hDllImm32,
                                                                       "ImmSetConversionStatus");
    if ( ImmSetConversionStatus )
      CREIMEEditBox::_ImmSetConversionStatus = (int (__stdcall *)(HIMC, unsigned int, unsigned int))ImmSetConversionStatus;
    ImmSimulateHotKey = (BOOL (__stdcall *)(HWND, DWORD))GetProcAddress(CREIMEEditBox::s_hDllImm32, "ImmSimulateHotKey");
    if ( ImmSimulateHotKey )
      CREIMEEditBox::_ImmSimulateHotKey = (int (__stdcall *)(HWND, unsigned int))ImmSimulateHotKey;
    ImmIsIME = (BOOL (__stdcall *)(HKL))GetProcAddress(CREIMEEditBox::s_hDllImm32, "ImmIsIME");
    if ( ImmIsIME )
      CREIMEEditBox::_ImmIsIME = (const int *(__stdcall *)(void *))ImmIsIME;
  }
  v21 = LoadLibraryW(L"version.dll");
  CREIMEEditBox::s_hDllVer = v21;
  if ( v21 )
  {
    VerQueryValueA = (BOOL (__stdcall *)(LPCVOID, LPCSTR, LPVOID *, PUINT))GetProcAddress(v21, "VerQueryValueA");
    if ( VerQueryValueA )
      CREIMEEditBox::_VerQueryValueA = (int (__stdcall *)(void *const, char *, void **, unsigned int *))VerQueryValueA;
    GetFileVersionInfoA = (BOOL (__stdcall *)(LPCSTR, DWORD, DWORD, LPVOID))GetProcAddress(
                                                                              CREIMEEditBox::s_hDllVer,
                                                                              "GetFileVersionInfoA");
    if ( GetFileVersionInfoA )
      CREIMEEditBox::_GetFileVersionInfoA = (int (__stdcall *)(void *const, char *, void **, unsigned int *))GetFileVersionInfoA;
    GetFileVersionInfoSizeA = (DWORD (__stdcall *)(LPCSTR, LPDWORD))GetProcAddress(
                                                                      CREIMEEditBox::s_hDllVer,
                                                                      "GetFileVersionInfoSizeA");
    if ( GetFileVersionInfoSizeA )
      CREIMEEditBox::_GetFileVersionInfoSizeA = (int (__stdcall *)(HIMC, int))GetFileVersionInfoSizeA;
  }
}
