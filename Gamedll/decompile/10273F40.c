/*
 * func-name: ?CancelByPlayer@CGroupQuickCallUI@@UAE_NXZ_0
 * func-address: 0x10273f40
 * callers: 0x10004c2d
 * callees: none
 */

char __thiscall CGroupQuickCallUI::CancelByPlayer(CGroupQuickCallUI *this)
{
  CDlgMgr *v1; // eax

  v1 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::ShowDialog(v1);
  return 1;
}
