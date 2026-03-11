/*
 * func-name: ?OnBegin@HallMapBattleFieldInfoUpdatedObserver@@UAEXAAVEvent@@@Z_0
 * func-address: 0x10275440
 * callers: 0x100103de
 * callees: 0x100182fa, 0x102c9ea8
 */

void __thiscall HallMapBattleFieldInfoUpdatedObserver::OnBegin(
        HallMapBattleFieldInfoUpdatedObserver *this,
        struct Event *a2)
{
  CDlgMgr *v2; // eax
  struct CTYDialog *Dialog; // eax
  CHallMapUI *v4; // eax

  v2 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v2);
  v4 = (CHallMapUI *)_RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CHallMapUI `RTTI Type Descriptor');
  if ( v4 )
    CHallMapUI::RefreshBattleLoc(v4);
}
