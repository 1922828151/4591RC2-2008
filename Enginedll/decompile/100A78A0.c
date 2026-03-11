/*
 * func-name: ?GetVisible@CTYDialog@@QAE_NXZ
 * func-address: 0x100a78a0
 * callers: 0x100d64b0, 0x10149a60, 0x1014d460, 0x101543d0
 * callees: 0x100d6d20
 */

bool __thiscall CTYDialog::GetVisible(CTYDialog *this)
{
  struct GUISystem *v2; // eax
  CGUIWindow *v3; // eax

  v2 = GUISystem::Instance();
  v3 = (CGUIWindow *)(*(int (__thiscall **)(struct GUISystem *, CTYDialog *))(*(_DWORD *)v2 + 76))(v2, this);
  return v3 && CGUIWindow::GetVisible(v3);
}
