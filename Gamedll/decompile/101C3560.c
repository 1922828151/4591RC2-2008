/*
 * func-name: ?DeActive@Func_RobotReceive@GameClient@@UAEXXZ_0
 * func-address: 0x101c3560
 * callers: 0x1000539e
 * callees: 0x102c9ea8
 */

void __thiscall GameClient::Func_RobotReceive::DeActive(GameClient::Func_RobotReceive *this)
{
  CDlgMgr *v1; // eax
  struct CTYDialog *Dialog; // eax
  int v3; // eax
  CDlgMgr *v4; // eax
  CDlgMgr *v5; // eax
  struct CTYDialog *v6; // eax
  int v7; // eax

  v1 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v1);
  v3 = _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CFixtureUIHeader `RTTI Type Descriptor', 0);
  if ( v3 && *(_DWORD *)(v3 + 3896) == 2 )
  {
    v4 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::ShowDialog(v4);
    v5 = (CDlgMgr *)CDlgMgr::Instance();
    v6 = CDlgMgr::GetDialog(v5);
    v7 = _RTDynamicCast(v6, 2, 1, 0, 0.0);
    if ( v7 )
      *(_DWORD *)(v7 + 4024) = -1;
    sub_10017A44();
  }
}
