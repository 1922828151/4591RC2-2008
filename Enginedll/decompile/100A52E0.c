/*
 * func-name: ?InitializeUniscribe@CUniBuffer@CREEditBox@@CAHXZ
 * func-address: 0x100a52e0
 * callers: 0x100ce840, 0x101b81a0
 * callees: none
 */

int __cdecl CREEditBox::CUniBuffer::InitializeUniscribe()
{
  HMODULE LibraryW; // eax
  HRESULT (__stdcall *ScriptApplyDigitSubstitution)(const SCRIPT_DIGITSUBSTITUTE *, SCRIPT_CONTROL *, SCRIPT_STATE *); // eax
  HRESULT (__stdcall *ScriptStringAnalyse)(HDC, const void *, int, int, int, DWORD, int, SCRIPT_CONTROL *, SCRIPT_STATE *, const int *, SCRIPT_TABDEF *, const BYTE *, SCRIPT_STRING_ANALYSIS *); // eax
  HRESULT (__stdcall *ScriptStringCPtoX)(SCRIPT_STRING_ANALYSIS, int, BOOL, int *); // eax
  HRESULT (__stdcall *ScriptStringXtoCP)(SCRIPT_STRING_ANALYSIS, int, int *, int *); // eax
  HRESULT (__stdcall *ScriptStringFree)(SCRIPT_STRING_ANALYSIS *); // eax
  const SCRIPT_LOGATTR *(__stdcall *ScriptString_pLogAttr)(SCRIPT_STRING_ANALYSIS); // eax
  const int *(__stdcall *ScriptString_pcOutChars)(SCRIPT_STRING_ANALYSIS); // eax

  LibraryW = LoadLibraryW(L"usp10.dll");
  CREEditBox::CUniBuffer::s_hDll = LibraryW;
  if ( LibraryW )
  {
    ScriptApplyDigitSubstitution = (HRESULT (__stdcall *)(const SCRIPT_DIGITSUBSTITUTE *, SCRIPT_CONTROL *, SCRIPT_STATE *))GetProcAddress(LibraryW, "ScriptApplyDigitSubstitution");
    if ( ScriptApplyDigitSubstitution )
      CREEditBox::CUniBuffer::_ScriptApplyDigitSubstitution = (int (__stdcall *)(const struct tag_SCRIPT_DIGITSUBSTITUTE *, struct tag_SCRIPT_CONTROL *, struct tag_SCRIPT_STATE *))ScriptApplyDigitSubstitution;
    ScriptStringAnalyse = (HRESULT (__stdcall *)(HDC, const void *, int, int, int, DWORD, int, SCRIPT_CONTROL *, SCRIPT_STATE *, const int *, SCRIPT_TABDEF *, const BYTE *, SCRIPT_STRING_ANALYSIS *))GetProcAddress(CREEditBox::CUniBuffer::s_hDll, "ScriptStringAnalyse");
    if ( ScriptStringAnalyse )
      CREEditBox::CUniBuffer::_ScriptStringAnalyse = (int (__stdcall *)(HDC, const void *, int, int, int, unsigned int, int, struct tag_SCRIPT_CONTROL *, struct tag_SCRIPT_STATE *, const int *, struct tag_SCRIPT_TABDEF *, const unsigned __int8 *, void **))ScriptStringAnalyse;
    ScriptStringCPtoX = (HRESULT (__stdcall *)(SCRIPT_STRING_ANALYSIS, int, BOOL, int *))GetProcAddress(
                                                                                           CREEditBox::CUniBuffer::s_hDll,
                                                                                           "ScriptStringCPtoX");
    if ( ScriptStringCPtoX )
      CREEditBox::CUniBuffer::_ScriptStringCPtoX = (int (__stdcall *)(void *, int, int, int *))ScriptStringCPtoX;
    ScriptStringXtoCP = (HRESULT (__stdcall *)(SCRIPT_STRING_ANALYSIS, int, int *, int *))GetProcAddress(
                                                                                            CREEditBox::CUniBuffer::s_hDll,
                                                                                            "ScriptStringXtoCP");
    if ( ScriptStringXtoCP )
      CREEditBox::CUniBuffer::_ScriptStringXtoCP = (int (__stdcall *)(void *, int, int *, int *))ScriptStringXtoCP;
    ScriptStringFree = (HRESULT (__stdcall *)(SCRIPT_STRING_ANALYSIS *))GetProcAddress(
                                                                          CREEditBox::CUniBuffer::s_hDll,
                                                                          "ScriptStringFree");
    if ( ScriptStringFree )
      CREEditBox::CUniBuffer::_ScriptStringFree = (int (__stdcall *)(void **))ScriptStringFree;
    ScriptString_pLogAttr = (const SCRIPT_LOGATTR *(__stdcall *)(SCRIPT_STRING_ANALYSIS))GetProcAddress(
                                                                                           CREEditBox::CUniBuffer::s_hDll,
                                                                                           "ScriptString_pLogAttr");
    if ( ScriptString_pLogAttr )
      CREEditBox::CUniBuffer::_ScriptString_pLogAttr = (const struct tag_SCRIPT_LOGATTR *(__stdcall *)(void *))ScriptString_pLogAttr;
    ScriptString_pcOutChars = (const int *(__stdcall *)(SCRIPT_STRING_ANALYSIS))GetProcAddress(
                                                                                  CREEditBox::CUniBuffer::s_hDll,
                                                                                  "ScriptString_pcOutChars");
    if ( ScriptString_pcOutChars )
      CREEditBox::CUniBuffer::_ScriptString_pcOutChars = (const int *(__stdcall *)(void *))ScriptString_pcOutChars;
  }
  return 0;
}
