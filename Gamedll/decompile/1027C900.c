/*
 * func-name: sub_1027C900
 * func-address: 0x1027c900
 * callers: 0x10019dbc
 * callees: 0x10008edb, 0x102c9ea8
 */

void __stdcall sub_1027C900(int a1)
{
  CDlgMgr *v1; // eax
  struct CTYDialog *Dialog; // eax
  CRadarMapUI *v3; // eax

  v1 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v1);
  v3 = (CRadarMapUI *)_RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CRadarMapUI `RTTI Type Descriptor');
  if ( v3 )
    CRadarMapUI::OnGroupCmdUpdated(v3);
}
