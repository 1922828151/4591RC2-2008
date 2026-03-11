/*
 * func-name: ?DeActive@Func_Power@GameClient@@UAEXXZ_0
 * func-address: 0x101bf720
 * callers: 0x10003df5
 * callees: none
 */

void __thiscall GameClient::Func_Power::DeActive(GameClient::Func_Power *this)
{
  CDlgMgr *v1; // eax

  v1 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::ShowDialog(v1);
}
