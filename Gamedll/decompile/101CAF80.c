/*
 * func-name: ?OnBegin@NeedPasswordObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x101caf80
 * callers: 0x1001aaa0
 * callees: 0x102c9ea8
 */

void __thiscall GameClient::NeedPasswordObserver::OnBegin(GameClient::NeedPasswordObserver *this, struct Event *a2)
{
  CDlgMgr *v2; // eax
  struct CTYDialog *Dialog; // eax
  int v4; // eax
  CDlgMgr *v5; // eax

  v2 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v2);
  v4 = _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CPasswordInputUI `RTTI Type Descriptor', 0);
  if ( v4 )
    *(_BYTE *)(v4 + 3876) = 1;
  v5 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::ShowDialog(v5);
}
