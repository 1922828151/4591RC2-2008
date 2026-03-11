/*
 * func-name: ?OnFocusOut@CREIMEEditBox@@UAEXXZ
 * func-address: 0x100ace50
 * callers: none
 * callees: 0x1006a760, 0x100971c0, 0x100accc0, 0x100d6d20, 0x101a251c
 */

void __thiscall CREIMEEditBox::OnFocusOut(CREIMEEditBox *this)
{
  struct GUISystem *v2; // eax
  struct Engine *v3; // eax

  *((_DWORD *)this + 189) = *((_DWORD *)this + 187);
  *((_BYTE *)this + 92) = 0;
  v2 = GUISystem::Instance();
  (*(void (__thiscall **)(struct GUISystem *, _DWORD))(*(_DWORD *)v2 + 40))(v2, 0);
  byte_11240AC8 = 0;
  if ( !CREIMEEditBox::s_bShowReadingWindow )
  {
    dword_11240AB8 = 0;
    memset(&CREIMEEditBox::s_CandList, 0, 0x1400u);
  }
  CREIMEEditBox::FinalizeString(this, 0);
  v3 = Engine::Instance();
  CREIMEEditBox::_ImmAssociateContext(*((HWND *)v3 + 35), 0);
}
