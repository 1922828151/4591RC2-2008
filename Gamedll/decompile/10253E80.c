/*
 * func-name: ?CancelByPlayer@CBattleFieldDetailUI@@UAE_NXZ_0
 * func-address: 0x10253e80
 * callers: 0x10010ff0
 * callees: 0x10004886, 0x10009e6c
 */

char __thiscall CBattleFieldDetailUI::CancelByPlayer(CBattleFieldDetailUI *this)
{
  CDlgMgr *v1; // eax
  int v3; // [esp+0h] [ebp-4h]

  v1 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::ShowDialog(v1);
  v3 = *(_DWORD *)(sub_10009E6C() + 28);
  sub_10009E6C();
  sub_10004886(v3);
  return 1;
}
