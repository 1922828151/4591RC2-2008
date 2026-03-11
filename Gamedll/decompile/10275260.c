/*
 * func-name: ?OnBegin@CharacterExploitUpdateObserver@@UAEXAAVEvent@@@Z_0
 * func-address: 0x10275260
 * callers: 0x10010447
 * callees: 0x10018b92, 0x102c9ea8
 */

void __thiscall CharacterExploitUpdateObserver::OnBegin(CharacterExploitUpdateObserver *this, struct Event *a2)
{
  CDlgMgr *v2; // eax
  struct CTYDialog *Dialog; // eax
  CHallMapUI *v4; // eax

  v2 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v2);
  v4 = (CHallMapUI *)_RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CHallMapUI `RTTI Type Descriptor');
  if ( v4 )
    CHallMapUI::OnExploitUpdated(v4);
}
