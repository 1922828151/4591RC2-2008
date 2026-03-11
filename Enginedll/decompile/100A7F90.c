/*
 * func-name: ?SetupImeApi@CMLIMEEditBox@@KAXXZ
 * func-address: 0x100a7f90
 * callers: 0x100b4480
 * callees: 0x10140aa0
 */

void __cdecl CMLIMEEditBox::SetupImeApi()
{
  HMODULE LibraryA; // eax
  CHAR LibFileName[264]; // [esp+4h] [ebp-108h] BYREF

  CMLIMEEditBox::_GetReadingString = 0;
  CMLIMEEditBox::_ShowReadingWindow = 0;
  if ( CMLIMEEditBox::_ImmGetIMEFileNameA(CMLIMEEditBox::s_hklCurrent, (unsigned int)LibFileName, 0x104u) )
  {
    if ( CMLIMEEditBox::s_hDllIme )
      FreeLibrary(CMLIMEEditBox::s_hDllIme);
    LibraryA = LoadLibraryA(LibFileName);
    CMLIMEEditBox::s_hDllIme = LibraryA;
    if ( LibraryA )
    {
      CMLIMEEditBox::_GetReadingString = (unsigned int (__stdcall *)(HIMC, unsigned int, wchar_t *, int *, int *, unsigned int *))GetProcAddress(LibraryA, "GetReadingString");
      CMLIMEEditBox::_ShowReadingWindow = (int (__stdcall *)(HIMC, int))GetProcAddress(
                                                                          CMLIMEEditBox::s_hDllIme,
                                                                          "ShowReadingWindow");
    }
  }
}
