/*
 * func-name: sub_10289640
 * func-address: 0x10289640
 * callers: 0x1000b726
 * callees: 0x1000f709, 0x102c9ea8
 */

void __thiscall sub_10289640(int *this)
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
    CRobotRoofUI::OnSelectSuite(v4, this[1], 1);
}
