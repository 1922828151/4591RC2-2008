/*
 * func-name: sub_102895F0
 * func-address: 0x102895f0
 * callers: 0x1001508c
 * callees: 0x1000f709, 0x102c9ea8
 */

void __thiscall sub_102895F0(int *this)
{
  CDlgMgr *v2; // eax
  struct CTYDialog *Dialog; // eax
  CRobotRoofUI *v4; // eax

  v2 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v2);
  v4 = (CRobotRoofUI *)_RTDynamicCast(
                         Dialog,
                         0,
                         &CTYDialog `RTTI Type Descriptor',
                         &CRobotRoofUI `RTTI Type Descriptor');
  if ( v4 )
    CRobotRoofUI::OnSelectSuite(v4, this[1], 0);
}
