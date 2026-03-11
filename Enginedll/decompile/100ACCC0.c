/*
 * func-name: ?FinalizeString@CREIMEEditBox@@IAEX_N@Z
 * func-address: 0x100accc0
 * callers: 0x100ace50
 * callees: 0x1006a760, 0x1006ad40, 0x1006ad60, 0x100971c0, 0x101a251c
 */

void __thiscall CREIMEEditBox::FinalizeString(CREIMEEditBox *this, bool a2)
{
  struct Engine *v2; // eax
  const int *Context; // eax
  HIMC v4; // esi
  struct Engine *v5; // eax
  struct Engine *v6; // eax
  int v7; // [esp-4h] [ebp-8h]

  v2 = Engine::Instance();
  Context = CREIMEEditBox::_ImmGetContext(*((void **)v2 + 35));
  v4 = (HIMC)Context;
  if ( Context )
  {
    if ( byte_11240B0D )
    {
      v7 = (int)Context;
      v5 = Engine::Instance();
      CREIMEEditBox::_ImmReleaseContext(*((HIMC *)v5 + 35), v7);
    }
    else
    {
      byte_11240B0D = 1;
      if ( !CREIMEEditBox::s_bInsertOnType && a2 )
        lstrlenW(CREIMEEditBox::s_CompString);
      CREIMEEditBox::s_nCompCaret = 0;
      byte_1123E238 = 1;
      *CREIMEEditBox::s_CompString = 0;
      memset(&CREIMEEditBox::s_abCompStringAttr, 0, 0x100u);
      CREIMEEditBox::_ImmNotifyIME(v4, 0x15u, 4u, 0);
      CREIMEEditBox::_ImmNotifyIME(v4, 0x11u, 0, 0);
      v6 = Engine::Instance();
      CREIMEEditBox::_ImmReleaseContext(*((HIMC *)v6 + 35), (int)v4);
      byte_11240B0D = 0;
    }
  }
}
