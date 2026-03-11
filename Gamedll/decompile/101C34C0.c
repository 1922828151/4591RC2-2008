/*
 * func-name: ?Active@Func_RobotReceive@GameClient@@UAEXXZ_0
 * func-address: 0x101c34c0
 * callers: 0x1001256c
 * callees: 0x1000ddaa, 0x10013458, 0x102c9ea8
 */

void __thiscall GameClient::Func_RobotReceive::Active(GameClient::Func_RobotReceive *this)
{
  CDlgMgr *v2; // eax
  CDlgMgr *v3; // eax
  struct CTYDialog *Dialog; // eax
  CRobotRoofUI *v5; // eax
  CDlgMgr *v6; // eax
  struct CTYDialog *v7; // eax

  v2 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::ShowDialog(v2);
  v3 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v3);
  v5 = (CRobotRoofUI *)_RTDynamicCast(Dialog, 2, 1, 0, 0.0);
  if ( v5 )
  {
    *((_DWORD *)v5 + 1006) = *((_DWORD *)this + 8);
    CRobotRoofUI::RefreshRobotEquip(v5);
  }
  v6 = (CDlgMgr *)CDlgMgr::Instance();
  v7 = CDlgMgr::GetDialog(v6);
  if ( _RTDynamicCast(v7, 0, &CTYDialog `RTTI Type Descriptor', &CFixtureUIHeader `RTTI Type Descriptor', 0) )
  {
    sub_1000DDAA(2);
    sub_10005CF4();
  }
}
