/*
 * func-name: ?CheckInputLocale@CMLIMEEditBox@@KAXXZ
 * func-address: 0x100a7da0
 * callers: 0x100a7ea0
 * callees: 0x100a7b40
 */

void __cdecl CMLIMEEditBox::CheckInputLocale()
{
  HKL KeyboardLayout; // eax
  WCHAR LCData[6]; // [esp+0h] [ebp-Ch] BYREF

  KeyboardLayout = GetKeyboardLayout(0);
  CMLIMEEditBox::s_hklCurrent = (HIMC)KeyboardLayout;
  if ( (HKL)dword_11240AF8 != KeyboardLayout )
  {
    dword_11240AF8 = (int)KeyboardLayout;
    switch ( (unsigned __int16)KeyboardLayout & 0x3FF )
    {
      case 4:
        CMLIMEEditBox::s_bVerticalCand = 1;
        if ( (unsigned __int16)KeyboardLayout >> 10 == 1 )
        {
          CMLIMEEditBox::s_wszCurrIndicator = &word_10281670;
          return;
        }
        if ( (unsigned __int16)KeyboardLayout >> 10 == 2 )
        {
          CMLIMEEditBox::s_wszCurrIndicator = (wchar_t *)&unk_1028166A;
          CMLIMEEditBox::s_bVerticalCand = CMLIMEEditBox::GetImeId(0) == 0;
          if ( CMLIMEEditBox::s_wszCurrIndicator != (wchar_t *)&CMLIMEEditBox::s_aszIndicator )
            return;
          LOWORD(KeyboardLayout) = (_WORD)CMLIMEEditBox::s_hklCurrent;
          goto LABEL_12;
        }
        break;
      case 17:
        CMLIMEEditBox::s_wszCurrIndicator = (wchar_t *)&unk_1028167C;
        CMLIMEEditBox::s_bVerticalCand = 1;
        return;
      case 18:
        CMLIMEEditBox::s_wszCurrIndicator = (wchar_t *)&unk_10281676;
        CMLIMEEditBox::s_bVerticalCand = 0;
        return;
    }
    CMLIMEEditBox::s_wszCurrIndicator = (wchar_t *)&CMLIMEEditBox::s_aszIndicator;
LABEL_12:
    GetLocaleInfoW((unsigned __int16)KeyboardLayout, 3u, LCData, 5);
    *CMLIMEEditBox::s_wszCurrIndicator = LCData[0];
    CMLIMEEditBox::s_wszCurrIndicator[1] = towlower(LCData[1]);
  }
}
