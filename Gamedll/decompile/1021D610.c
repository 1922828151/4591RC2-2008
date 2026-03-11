/*
 * func-name: ?ClearBattleFieldIntro@BattleFieldManager@GameClient@@QAEXXZ_0
 * func-address: 0x1021d610
 * callers: 0x100025cc
 * callees: 0x10003fb7, 0x10007a81
 */

void __thiscall GameClient::BattleFieldManager::ClearBattleFieldIntro(GameClient::BattleFieldManager *this)
{
  char *v2; // edi
  _DWORD v3[2]; // [esp+8h] [ebp-8h] BYREF

  v2 = (char *)this + 48;
  sub_10003FB7();
  v3[1] = *((_DWORD *)v2 + 1);
  v3[0] = v2;
  sub_10007A81(9, (int)v3);
  *((_DWORD *)this + 19) = 1;
  *((_DWORD *)this + 20) = 1;
}
