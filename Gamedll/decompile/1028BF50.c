/*
 * func-name: sub_1028BF50
 * func-address: 0x1028bf50
 * callers: 0x10010014
 * callees: 0x10003de1, 0x102c9ea8
 */

void __stdcall sub_1028BF50(int a1)
{
  CDlgMgr *v1; // eax
  struct CTYDialog *Dialog; // eax
  CStatusUI *v3; // eax

  v1 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v1);
  v3 = (CStatusUI *)_RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CStatusUI `RTTI Type Descriptor');
  if ( v3 )
    CStatusUI::OnRobotWeaponChanged(v3);
}
