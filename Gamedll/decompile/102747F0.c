/*
 * func-name: ?GetBFLocInGUI@CHallMapUI@@QAE_NJAAJ0@Z_0
 * func-address: 0x102747f0
 * callers: 0x10007c07
 * callees: 0x1000a105
 */

char __thiscall CHallMapUI::GetBFLocInGUI(CHallMapUI *this, int a2, int *a3, int *a4)
{
  const struct GameClient::BATTLE_FIELD_INFO *BattleFieldIntro; // eax
  int v6; // ecx

  BattleFieldIntro = GameClient::BattleFieldManager::GetBattleFieldIntro(
                       GameClient::BattleFieldManager::s_pInstance,
                       a2,
                       1);
  if ( !BattleFieldIntro )
    return 0;
  v6 = *((_DWORD *)BattleFieldIntro + 17);
  *a3 = *(_DWORD *)(*((_DWORD *)this + 968) + 96) + *((_DWORD *)BattleFieldIntro + 16) + *((_DWORD *)this + 173);
  *a4 = v6 + *(_DWORD *)(*((_DWORD *)this + 968) + 100) + *((_DWORD *)this + 174);
  return 1;
}
