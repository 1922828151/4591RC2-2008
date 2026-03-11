/*
 * func-name: ?InitializeImm@CMLIMEEditBox@@CAXXZ
 * func-address: 0x100a89f0
 * callers: 0x100ce840, 0x101b81a0
 * callees: none
 */

void __cdecl CMLIMEEditBox::InitializeImm()
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
  CMLIMEEditBox::s_hDllImm32 = LibraryW;
  if ( LibraryW )
  {
    ImmLockIMC = (LPINPUTCONTEXT (__stdcall *)(HIMC))GetProcAddress(LibraryW, "ImmLockIMC");
    if ( ImmLockIMC )
      CMLIMEEditBox::_ImmLockIMC = (const int *(__stdcall *)(void *))ImmLockIMC;
    ImmUnlockIMC = (BOOL (__stdcall *)(HIMC))GetProcAddress(CMLIMEEditBox::s_hDllImm32, "ImmUnlockIMC");
    if ( ImmUnlockIMC )
      CMLIMEEditBox::_ImmUnlockIMC = (const int *(__stdcall *)(void *))ImmUnlockIMC;
    ImmLockIMCC = (LPVOID (__stdcall *)(HIMCC))GetProcAddress(CMLIMEEditBox::s_hDllImm32, "ImmLockIMCC");
    if ( ImmLockIMCC )
      CMLIMEEditBox::_ImmLockIMCC = (const int *(__stdcall *)(void *))ImmLockIMCC;
    ImmUnlockIMCC = (BOOL (__stdcall *)(HIMCC))GetProcAddress(CMLIMEEditBox::s_hDllImm32, "ImmUnlockIMCC");
    if ( ImmUnlockIMCC )
      CMLIMEEditBox::_ImmUnlockIMCC = (const int *(__stdcall *)(void *))ImmUnlockIMCC;
    ImmDisableTextFrameService = (BOOL (__stdcall *)(DWORD))GetProcAddress(
                                                              CMLIMEEditBox::s_hDllImm32,
                                                              "ImmDisableTextFrameService");
    if ( ImmDisableTextFrameService )
      CMLIMEEditBox::_ImmDisableTextFrameService = (int (__stdcall *)(unsigned int))ImmDisableTextFrameService;
    ImmGetCompositionStringW = (LONG (__stdcall *)(HIMC, DWORD, LPVOID, DWORD))GetProcAddress(
                                                                                 CMLIMEEditBox::s_hDllImm32,
                                                                                 "ImmGetCompositionStringW");
    if ( ImmGetCompositionStringW )
      CMLIMEEditBox::_ImmGetCompositionStringW = (int (__stdcall *)(HIMC, unsigned int, void *, unsigned int))ImmGetCompositionStringW;
    ImmGetCandidateListW = (DWORD (__stdcall *)(HIMC, DWORD, LPCANDIDATELIST, DWORD))GetProcAddress(
                                                                                       CMLIMEEditBox::s_hDllImm32,
                                                                                       "ImmGetCandidateListW");
    if ( ImmGetCandidateListW )
      CMLIMEEditBox::_ImmGetCandidateListW = (unsigned int (__stdcall *)(HIMC, unsigned int, struct tagCANDIDATELIST *, unsigned int))ImmGetCandidateListW;
    ImmGetContext = (HIMC (__stdcall *)(HWND))GetProcAddress(CMLIMEEditBox::s_hDllImm32, "ImmGetContext");
    if ( ImmGetContext )
      CMLIMEEditBox::_ImmGetContext = (const int *(__stdcall *)(void *))ImmGetContext;
    ImmReleaseContext = (BOOL (__stdcall *)(HWND, HIMC))GetProcAddress(CMLIMEEditBox::s_hDllImm32, "ImmReleaseContext");
    if ( ImmReleaseContext )
      CMLIMEEditBox::_ImmReleaseContext = (int (__stdcall *)(HIMC, int))ImmReleaseContext;
    ImmAssociateContext = (HIMC (__stdcall *)(HWND, HIMC))GetProcAddress(
                                                            CMLIMEEditBox::s_hDllImm32,
                                                            "ImmAssociateContext");
    if ( ImmAssociateContext )
      CMLIMEEditBox::_ImmAssociateContext = (int (__stdcall *)(HIMC, int))ImmAssociateContext;
    ImmGetOpenStatus = (BOOL (__stdcall *)(HIMC))GetProcAddress(CMLIMEEditBox::s_hDllImm32, "ImmGetOpenStatus");
    if ( ImmGetOpenStatus )
      CMLIMEEditBox::_ImmGetOpenStatus = (const int *(__stdcall *)(void *))ImmGetOpenStatus;
    ImmSetOpenStatus = (BOOL (__stdcall *)(HIMC, BOOL))GetProcAddress(CMLIMEEditBox::s_hDllImm32, "ImmSetOpenStatus");
    if ( ImmSetOpenStatus )
      CMLIMEEditBox::_ImmSetOpenStatus = (int (__stdcall *)(HIMC, int))ImmSetOpenStatus;
    ImmGetConversionStatus = (BOOL (__stdcall *)(HIMC, LPDWORD, LPDWORD))GetProcAddress(
                                                                           CMLIMEEditBox::s_hDllImm32,
                                                                           "ImmGetConversionStatus");
    if ( ImmGetConversionStatus )
      CMLIMEEditBox::_ImmGetConversionStatus = (int (__stdcall *)(HIMC, unsigned int, unsigned int))ImmGetConversionStatus;
    ImmGetDefaultIMEWnd = (HWND (__stdcall *)(HWND))GetProcAddress(CMLIMEEditBox::s_hDllImm32, "ImmGetDefaultIMEWnd");
    if ( ImmGetDefaultIMEWnd )
      CMLIMEEditBox::_ImmGetDefaultIMEWnd = (HWND (__stdcall *)(HWND))ImmGetDefaultIMEWnd;
    ImmGetIMEFileNameA = (UINT (__stdcall *)(HKL, LPSTR, UINT))GetProcAddress(
                                                                 CMLIMEEditBox::s_hDllImm32,
                                                                 "ImmGetIMEFileNameA");
    if ( ImmGetIMEFileNameA )
      CMLIMEEditBox::_ImmGetIMEFileNameA = (int (__stdcall *)(HIMC, unsigned int, unsigned int))ImmGetIMEFileNameA;
    ImmGetVirtualKey = (UINT (__stdcall *)(HWND))GetProcAddress(CMLIMEEditBox::s_hDllImm32, "ImmGetVirtualKey");
    if ( ImmGetVirtualKey )
      CMLIMEEditBox::_ImmGetVirtualKey = (unsigned int (__stdcall *)(HWND))ImmGetVirtualKey;
    ImmNotifyIME = (BOOL (__stdcall *)(HIMC, DWORD, DWORD, DWORD))GetProcAddress(
                                                                    CMLIMEEditBox::s_hDllImm32,
                                                                    "ImmNotifyIME");
    if ( ImmNotifyIME )
      CMLIMEEditBox::_ImmNotifyIME = (int (__stdcall *)(void *const, char *, void **, unsigned int *))ImmNotifyIME;
    ImmSetConversionStatus = (BOOL (__stdcall *)(HIMC, DWORD, DWORD))GetProcAddress(
                                                                       CMLIMEEditBox::s_hDllImm32,
                                                                       "ImmSetConversionStatus");
    if ( ImmSetConversionStatus )
      CMLIMEEditBox::_ImmSetConversionStatus = (int (__stdcall *)(HIMC, unsigned int, unsigned int))ImmSetConversionStatus;
    ImmSimulateHotKey = (BOOL (__stdcall *)(HWND, DWORD))GetProcAddress(CMLIMEEditBox::s_hDllImm32, "ImmSimulateHotKey");
    if ( ImmSimulateHotKey )
      CMLIMEEditBox::_ImmSimulateHotKey = (int (__stdcall *)(HWND, unsigned int))ImmSimulateHotKey;
    ImmIsIME = (BOOL (__stdcall *)(HKL))GetProcAddress(CMLIMEEditBox::s_hDllImm32, "ImmIsIME");
    if ( ImmIsIME )
      CMLIMEEditBox::_ImmIsIME = (const int *(__stdcall *)(void *))ImmIsIME;
  }
  v21 = LoadLibraryW(L"version.dll");
  CMLIMEEditBox::s_hDllVer = v21;
  if ( v21 )
  {
    VerQueryValueA = (BOOL (__stdcall *)(LPCVOID, LPCSTR, LPVOID *, PUINT))GetProcAddress(v21, "VerQueryValueA");
    if ( VerQueryValueA )
      CMLIMEEditBox::_VerQueryValueA = (int (__stdcall *)(void *const, char *, void **, unsigned int *))VerQueryValueA;
    GetFileVersionInfoA = (BOOL (__stdcall *)(LPCSTR, DWORD, DWORD, LPVOID))GetProcAddress(
                                                                              CMLIMEEditBox::s_hDllVer,
                                                                              "GetFileVersionInfoA");
    if ( GetFileVersionInfoA )
      CMLIMEEditBox::_GetFileVersionInfoA = (int (__stdcall *)(void *const, char *, void **, unsigned int *))GetFileVersionInfoA;
    GetFileVersionInfoSizeA = (DWORD (__stdcall *)(LPCSTR, LPDWORD))GetProcAddress(
                                                                      CMLIMEEditBox::s_hDllVer,
                                                                      "GetFileVersionInfoSizeA");
    if ( GetFileVersionInfoSizeA )
      CMLIMEEditBox::_GetFileVersionInfoSizeA = (int (__stdcall *)(HIMC, int))GetFileVersionInfoSizeA;
  }
}
