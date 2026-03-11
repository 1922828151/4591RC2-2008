/*
 * func-name: ?CheckToggleState@CREIMEEditBox@@KAXXZ
 * func-address: 0x100a4950
 * callers: 0x100acd90, 0x100acec0, 0x100b3960
 * callees: 0x1006a760, 0x1006ad40, 0x100971c0, 0x100a4870, 0x10140aa0
 */

void __cdecl CREIMEEditBox::CheckToggleState()
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

  CREIMEEditBox::CheckInputLocale();
  v0 = CREIMEEditBox::_ImmIsIME(CREIMEEditBox::s_hklCurrent);
  v1 = v0 != 0;
  if ( ((unsigned __int16)CREIMEEditBox::s_hklCurrent & 0x3FF) != 4 || (CREIMEEditBox::s_bChineseIME = 1, !v0) )
    CREIMEEditBox::s_bChineseIME = 0;
  v2 = Engine::Instance();
  Context = (HIMC)CREIMEEditBox::_ImmGetContext(*((void **)v2 + 35));
  v4 = (int)Context;
  if ( Context )
  {
    if ( CREIMEEditBox::s_bChineseIME )
    {
      CREIMEEditBox::_ImmGetConversionStatus(Context, (unsigned int)&v7, (unsigned int)&v8);
      CREIMEEditBox::s_ImeState = 2 - ((v7 & 1) != 0);
    }
    else if ( !v1
           || (OpenStatus = CREIMEEditBox::_ImmGetOpenStatus(Context), CREIMEEditBox::s_ImeState = 1, !OpenStatus) )
    {
      CREIMEEditBox::s_ImeState = 0;
    }
    v6 = Engine::Instance();
    CREIMEEditBox::_ImmReleaseContext(*((HIMC *)v6 + 35), v4);
  }
  else
  {
    CREIMEEditBox::s_ImeState = 0;
  }
}
