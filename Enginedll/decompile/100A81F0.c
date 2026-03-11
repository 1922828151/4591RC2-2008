/*
 * func-name: ?FinalizeString@CMLIMEEditBox@@IAEX_N@Z
 * func-address: 0x100a81f0
 * callers: 0x100a89a0
 * callees: 0x1006a760, 0x1006ad40, 0x1006ad60, 0x100971c0, 0x100a8190, 0x101a251c
 */

void __thiscall CMLIMEEditBox::FinalizeString(CMLIMEEditBox *this, bool a2)
{
  struct Engine *v3; // eax
  const int *Context; // eax
  int *v5; // esi
  struct Engine *v6; // eax
  struct Engine *v7; // eax
  int v8; // [esp-4h] [ebp-Ch]

  v3 = Engine::Instance();
  Context = CMLIMEEditBox::_ImmGetContext(*((void **)v3 + 35));
  v5 = (int *)Context;
  if ( Context )
  {
    if ( byte_11240AFC )
    {
      v8 = (int)Context;
      v6 = Engine::Instance();
      CMLIMEEditBox::_ImmReleaseContext(*((HIMC *)v6 + 35), v8);
    }
    else
    {
      byte_11240AFC = 1;
      if ( !CMLIMEEditBox::s_bInsertOnType && a2 )
      {
        lstrlenW(CMLIMEEditBox::s_CompString);
        if ( (_WORD)CMLIMEEditBox::s_hklCurrent == 1028 )
          byte_1123E21C = 1;
        CMLIMEEditBox::SendCompString(this);
      }
      CMLIMEEditBox::s_nCompCaret = 0;
      byte_1123E21C = 1;
      *CMLIMEEditBox::s_CompString = 0;
      memset(&CMLIMEEditBox::s_abCompStringAttr, 0, 0x100u);
      CMLIMEEditBox::_ImmNotifyIME(v5, (char *)0x15, (void **)4, 0);
      CMLIMEEditBox::_ImmNotifyIME(v5, (char *)0x11, 0, 0);
      v7 = Engine::Instance();
      CMLIMEEditBox::_ImmReleaseContext(*((HIMC *)v7 + 35), (int)v5);
      byte_11240AFC = 0;
    }
  }
}
