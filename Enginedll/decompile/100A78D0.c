/*
 * func-name: ?ToggleVisible@CTYDialog@@QAEXXZ
 * func-address: 0x100a78d0
 * callers: none
 * callees: 0x100d5710, 0x100d5750, 0x100d6d20
 */

void __thiscall CTYDialog::ToggleVisible(CTYDialog *this)
{
  struct GUISystem *v2; // eax
  CGUIWindow *v3; // eax
  CGUIWindow *v4; // esi
  bool Visible; // al

  v2 = GUISystem::Instance();
  v3 = (CGUIWindow *)(*(int (__thiscall **)(struct GUISystem *, CTYDialog *))(*(_DWORD *)v2 + 76))(v2, this);
  v4 = v3;
  if ( v3 )
  {
    Visible = CGUIWindow::GetVisible(v3);
    CGUIWindow::SetVisible(v4, !Visible);
  }
}
