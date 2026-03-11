/*
 * func-name: ?OnFocusOut@CREEditBox@@UAEXXZ
 * func-address: 0x100a4490
 * callers: none
 * callees: 0x100d6d20
 */

void __thiscall CREEditBox::OnFocusOut(CREEditBox *this)
{
  struct GUISystem *v1; // eax

  *((_DWORD *)this + 189) = *((_DWORD *)this + 187);
  *((_BYTE *)this + 92) = 0;
  v1 = GUISystem::Instance();
  (*(void (__thiscall **)(struct GUISystem *, _DWORD))(*(_DWORD *)v1 + 40))(v1, 0);
}
