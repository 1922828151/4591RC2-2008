/*
 * func-name: ?UninitializeUniscribe@CUniBuffer@CREEditBox@@CAHXZ
 * func-address: 0x100a53a0
 * callers: 0x100ce860, 0x101b8e70
 * callees: none
 */

int __cdecl CREEditBox::CUniBuffer::UninitializeUniscribe()
{
  if ( CREEditBox::CUniBuffer::s_hDll )
  {
    CREEditBox::CUniBuffer::_ScriptApplyDigitSubstitution = (int (__stdcall *)(const struct tag_SCRIPT_DIGITSUBSTITUTE *, struct tag_SCRIPT_CONTROL *, struct tag_SCRIPT_STATE *))CREEditBox::CUniBuffer::Dummy_ScriptApplyDigitSubstitution;
    CREEditBox::CUniBuffer::_ScriptStringAnalyse = (int (__stdcall *)(HDC, const void *, int, int, int, unsigned int, int, struct tag_SCRIPT_CONTROL *, struct tag_SCRIPT_STATE *, const int *, struct tag_SCRIPT_TABDEF *, const unsigned __int8 *, void **))CREEditBox::CUniBuffer::Dummy_ScriptStringAnalyse;
    CREEditBox::CUniBuffer::_ScriptStringCPtoX = (int (__stdcall *)(void *, int, int, int *))CREEditBox::CUniBuffer::Dummy_ScriptStringXtoCP;
    CREEditBox::CUniBuffer::_ScriptStringXtoCP = (int (__stdcall *)(void *, int, int *, int *))CREEditBox::CUniBuffer::Dummy_ScriptStringXtoCP;
    CREEditBox::CUniBuffer::_ScriptStringFree = (int (__stdcall *)(void **))CREEditBox::CUniBuffer::Dummy_ScriptStringFree;
    CREEditBox::CUniBuffer::_ScriptString_pLogAttr = (const struct tag_SCRIPT_LOGATTR *(__stdcall *)(void *))CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    CREEditBox::CUniBuffer::_ScriptString_pcOutChars = (const int *(__stdcall *)(void *))CREEditBox::CUniBuffer::Dummy_ScriptString_pcOutChars;
    FreeLibrary(CREEditBox::CUniBuffer::s_hDll);
    CREEditBox::CUniBuffer::s_hDll = 0;
  }
  return 0;
}
