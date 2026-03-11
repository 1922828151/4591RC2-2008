/*
 * func-name: ?OnFocusOut@CMLIMEEditBox@@UAEXXZ
 * func-address: 0x100a89a0
 * callers: none
 * callees: 0x1006a760, 0x100971c0, 0x100a81f0, 0x100d6d20
 */

void __thiscall CMLIMEEditBox::OnFocusOut(CMLIMEEditBox *this)
{
  struct GUISystem *v2; // eax
  struct Engine *v3; // eax

  *((_DWORD *)this + 189) = *((_DWORD *)this + 187);
  *((_BYTE *)this + 92) = 0;
  v2 = GUISystem::Instance();
  (*(void (__thiscall **)(struct GUISystem *, _DWORD))(*(_DWORD *)v2 + 40))(v2, 0);
  CMLIMEEditBox::FinalizeString(this, 0);
  v3 = Engine::Instance();
  CMLIMEEditBox::_ImmAssociateContext(*((HIMC *)v3 + 35), 0);
}
