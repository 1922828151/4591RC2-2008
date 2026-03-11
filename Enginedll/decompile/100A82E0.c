/*
 * func-name: ?GetReadingWindowOrientation@CMLIMEEditBox@@KAXK@Z
 * func-address: 0x100a82e0
 * callers: 0x100a8400
 * callees: none
 */

void __cdecl CMLIMEEditBox::GetReadingWindowOrientation(unsigned int a1)
{
  unsigned int v1; // esi
  const WCHAR *v2; // eax
  HKEY phkResult; // [esp+0h] [ebp-218h] BYREF
  BYTE Data[4]; // [esp+4h] [ebp-214h] BYREF
  DWORD cbData; // [esp+8h] [ebp-210h] BYREF
  DWORD Type; // [esp+Ch] [ebp-20Ch] BYREF
  WCHAR String1[260]; // [esp+10h] [ebp-208h] BYREF

  if ( CMLIMEEditBox::s_hklCurrent == (HIMC)-535951356 || CMLIMEEditBox::s_hklCurrent == (HIMC)-536280060 || !a1 )
  {
    CMLIMEEditBox::s_bHorizontalReading = 1;
  }
  else
  {
    CMLIMEEditBox::s_bHorizontalReading = 0;
    if ( (unsigned __int16)a1 == 1028 )
    {
      v1 = a1 & 0xFFFF0000;
      lstrcpyW(String1, L"software\\microsoft\\windows\\currentversion\\");
      v2 = L"MSTCIPH";
      if ( (a1 & 0xFFFF0000) < 0x5010000 )
        v2 = L"TINTLGNT";
      lstrcatW(String1, v2);
      if ( !RegOpenKeyExW(HKEY_CURRENT_USER, String1, 0, 0x20019u, &phkResult) )
      {
        cbData = 4;
        if ( !RegQueryValueExW(phkResult, L"Keyboard Mapping", 0, &Type, Data, &cbData)
          && (v1 <= 0x5000000 && (Data[0] == 34 || Data[0] == 35)
           || (v1 == 83951616 || v1 == 84017152) && (unsigned __int8)(Data[0] - 34) <= 2u) )
        {
          CMLIMEEditBox::s_bHorizontalReading = 1;
        }
        RegCloseKey(phkResult);
      }
    }
  }
}
