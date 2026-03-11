/*
 * func-name: ?SetupImeApi@CREIMEEditBox@@KAXXZ
 * func-address: 0x100a4a40
 * callers: 0x100b3960
 * callees: 0x10140aa0
 */

void __cdecl CREIMEEditBox::SetupImeApi()
{
  HMODULE LibraryA; // eax
  CHAR LibFileName[264]; // [esp+4h] [ebp-108h] BYREF

  CREIMEEditBox::_GetReadingString = 0;
  CREIMEEditBox::_ShowReadingWindow = 0;
  if ( CREIMEEditBox::_ImmGetIMEFileNameA(CREIMEEditBox::s_hklCurrent, (unsigned int)LibFileName, 0x104u) )
  {
    if ( CREIMEEditBox::s_hDllIme )
      FreeLibrary(CREIMEEditBox::s_hDllIme);
    LibraryA = LoadLibraryA(LibFileName);
    CREIMEEditBox::s_hDllIme = LibraryA;
    if ( LibraryA )
    {
      CREIMEEditBox::_GetReadingString = (unsigned int (__stdcall *)(HIMC, unsigned int, wchar_t *, int *, int *, unsigned int *))GetProcAddress(LibraryA, "GetReadingString");
      CREIMEEditBox::_ShowReadingWindow = (int (__stdcall *)(HIMC, int))GetProcAddress(
                                                                          CREIMEEditBox::s_hDllIme,
                                                                          "ShowReadingWindow");
    }
  }
}
