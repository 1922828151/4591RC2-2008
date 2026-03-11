/*
 * func-name: ?OnFocusIn@CREEditBox@@UAEXXZ
 * func-address: 0x100ac960
 * callers: none
 * callees: 0x1007e540, 0x1007e670, 0x100d6d20
 */

void __thiscall CREEditBox::OnFocusIn(CREEditBox *this)
{
  struct GUISystem *v2; // eax
  CRETimer *v3; // eax

  *((_BYTE *)this + 92) = 1;
  CREDialog::s_pControlFocus = this;
  v2 = GUISystem::Instance();
  (*(void (__thiscall **)(struct GUISystem *, int))(*(_DWORD *)v2 + 40))(v2, 1);
  *((_BYTE *)this + 92) = 1;
  *((_BYTE *)this + 744) = 1;
  v3 = REGetGlobalTimer();
  *((double *)this + 92) = CRETimer::GetAbsoluteTime(v3);
}
