/*
 * func-name: ?CheckToggleState@CMLIMEEditBox@@KAXXZ
 * func-address: 0x100a7ea0
 * callers: 0x100af1f0, 0x100b4480, 0x100ca110
 * callees: 0x1006a760, 0x1006ad40, 0x100971c0, 0x100a7da0, 0x10140aa0
 */

void __cdecl CMLIMEEditBox::CheckToggleState()
{
  const int *v0; // eax
  bool v1; // bl
  struct Engine *v2; // eax
  HIMC Context; // eax
  int v4; // esi
  const int *OpenStatus; // eax
  struct Engine *v6; // eax
  unsigned int v7; // [esp+8h] [ebp-8h] BYREF
  unsigned int v8; // [esp+Ch] [ebp-4h] BYREF

  CMLIMEEditBox::CheckInputLocale();
  v0 = CMLIMEEditBox::_ImmIsIME(CMLIMEEditBox::s_hklCurrent);
  v1 = v0 != 0;
  if ( ((unsigned __int16)CMLIMEEditBox::s_hklCurrent & 0x3FF) != 4 || (CMLIMEEditBox::s_bChineseIME = 1, !v0) )
    CMLIMEEditBox::s_bChineseIME = 0;
  v2 = Engine::Instance();
  Context = (HIMC)CMLIMEEditBox::_ImmGetContext(*((void **)v2 + 35));
  v4 = (int)Context;
  if ( Context )
  {
    if ( CMLIMEEditBox::s_bChineseIME )
    {
      CMLIMEEditBox::_ImmGetConversionStatus(Context, (unsigned int)&v7, (unsigned int)&v8);
      CMLIMEEditBox::s_ImeState = 2 - ((v7 & 1) != 0);
    }
    else if ( !v1
           || (OpenStatus = CMLIMEEditBox::_ImmGetOpenStatus(Context), CMLIMEEditBox::s_ImeState = 1, !OpenStatus) )
    {
      CMLIMEEditBox::s_ImeState = 0;
    }
    v6 = Engine::Instance();
    CMLIMEEditBox::_ImmReleaseContext(*((HIMC *)v6 + 35), v4);
  }
  else
  {
    CMLIMEEditBox::s_ImeState = 0;
  }
}
