/*
 * func-name: ?CancelByPlayer@CControlCenterListUI@@UAE_NXZ_0
 * func-address: 0x1025d630
 * callers: 0x100148b7
 * callees: none
 */

bool __thiscall CControlCenterListUI::CancelByPlayer(CControlCenterListUI *this)
{
  CDlgMgr *v1; // eax

  v1 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::ShowDialog(v1);
  return 0;
}
