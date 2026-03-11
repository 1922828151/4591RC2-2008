/*
 * func-name: ?Tick@CTYDialog@@UAEXM@Z
 * func-address: 0x100a7a60
 * callers: none
 * callees: 0x100d5750, 0x100d6d20
 */

void __thiscall CTYDialog::Tick(CTYDialog *this, float a2)
{
  struct GUISystem *v3; // eax
  CGUIWindow *v4; // eax

  v3 = GUISystem::Instance();
  v4 = (CGUIWindow *)(*(int (__thiscall **)(struct GUISystem *, CTYDialog *))(*(_DWORD *)v3 + 76))(v3, this);
  if ( v4 )
  {
    if ( CGUIWindow::GetVisible(v4) )
      (*(void (__thiscall **)(CTYDialog *, _DWORD))(*(_DWORD *)this + 40))(this, LODWORD(a2));
  }
}
