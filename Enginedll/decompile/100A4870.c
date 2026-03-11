/*
 * func-name: ?CheckInputLocale@CREIMEEditBox@@KAXXZ
 * func-address: 0x100a4870
 * callers: 0x100a4950
 * callees: none
 */

void __cdecl CREIMEEditBox::CheckInputLocale()
{
  HKL KeyboardLayout; // eax
  LCID v1; // ecx
  int v2; // eax
  int v3; // eax
  WCHAR LCData[6]; // [esp+0h] [ebp-Ch] BYREF

  KeyboardLayout = GetKeyboardLayout(0);
  CREIMEEditBox::s_hklCurrent = (HIMC)KeyboardLayout;
  if ( (HKL)dword_11240AE8 != KeyboardLayout )
  {
    v1 = (unsigned __int16)KeyboardLayout;
    dword_11240AE8 = (int)KeyboardLayout;
    v2 = ((unsigned __int16)KeyboardLayout & 0x3FF) - 4;
    if ( v2 )
    {
      v3 = v2 - 13;
      if ( !v3 )
      {
        CREIMEEditBox::s_wszCurrIndicator = (wchar_t *)&unk_102815F4;
        CREIMEEditBox::s_bVerticalCand = 1;
        return;
      }
      if ( v3 == 1 )
      {
        CREIMEEditBox::s_wszCurrIndicator = (wchar_t *)&unk_102815EE;
        CREIMEEditBox::s_bVerticalCand = 0;
        return;
      }
    }
    else
    {
      CREIMEEditBox::s_bVerticalCand = 1;
      if ( v1 >> 10 == 1 )
      {
        CREIMEEditBox::s_wszCurrIndicator = &word_102815E8;
        return;
      }
      if ( v1 >> 10 == 2 )
      {
        CREIMEEditBox::s_wszCurrIndicator = (wchar_t *)&unk_102815E2;
        return;
      }
    }
    CREIMEEditBox::s_wszCurrIndicator = CREIMEEditBox::s_aszIndicator;
    GetLocaleInfoW(v1, 3u, LCData, 5);
    *CREIMEEditBox::s_wszCurrIndicator = LCData[0];
    CREIMEEditBox::s_wszCurrIndicator[1] = towlower(LCData[1]);
  }
}
