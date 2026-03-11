/*
 * func-name: sub_1027C980
 * func-address: 0x1027c980
 * callers: 0x1000c400
 * callees: 0x10011c2a, 0x102c9ea8
 */

void __stdcall sub_1027C980(int a1)
{
  CDlgMgr *v1; // eax
  struct CTYDialog *Dialog; // eax
  CRadarMapUI *v3; // eax

  v1 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v1);
  v3 = (CRadarMapUI *)_RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CRadarMapUI `RTTI Type Descriptor');
  if ( v3 )
    CRadarMapUI::OnCorpCmdUpdated(v3);
}
