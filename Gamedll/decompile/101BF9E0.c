/*
 * func-name: ?Active@Func_Power@GameClient@@UAEXXZ_0
 * func-address: 0x101bf9e0
 * callers: 0x1000d89b
 * callees: 0x1000d251, 0x102c9ea8
 */

void __thiscall GameClient::Func_Power::Active(GameClient::Func_Power *this)
{
  CDlgMgr *v1; // eax
  struct CTYDialog *Dialog; // eax
  CDlgMgr *v3; // eax

  v1 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v1);
  if ( _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CFixtureUIHeader `RTTI Type Descriptor', 0) )
    sub_1000D251(7);
  v3 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::ShowDialog(v3);
}
