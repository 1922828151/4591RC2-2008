/*
 * func-name: ?IsMsgDlgVisible@CDlgMgr@@QAE_NXZ
 * func-address: 0x100ce810
 * callers: none
 * callees: 0x100d6d20
 */

bool __thiscall CDlgMgr::IsMsgDlgVisible(CDlgMgr *this)
{
  int v1; // esi
  struct GUISystem *v2; // eax
  CGUIWindow *v3; // eax

  v1 = *((_DWORD *)this + 5);
  v2 = GUISystem::Instance();
  v3 = (CGUIWindow *)(*(int (__thiscall **)(struct GUISystem *, int))(*(_DWORD *)v2 + 76))(v2, v1);
  return v3 && CGUIWindow::GetVisible(v3);
}
