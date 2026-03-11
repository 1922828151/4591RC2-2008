/*
 * func-name: ?GetBattleFieldIntro@BattleFieldManager@GameClient@@QAEPBUBATTLE_FIELD_INFO@2@J_N@Z_0
 * func-address: 0x1021d490
 * callers: 0x1000a105
 * callees: 0x10001438, 0x1000f6fa
 */

const struct GameClient::BATTLE_FIELD_INFO *__thiscall GameClient::BattleFieldManager::GetBattleFieldIntro(
        GameClient::BattleFieldManager *this,
        int a2,
        bool a3)
{
  int v3; // ebp
  GameClient::BattleFieldManager *v5; // edi
  int v6; // ebx
  GameClient::BattleFieldManager *v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  v3 = a2;
  sub_1000F6FA((int)&v8, (int)&a2);
  v5 = v8;
  v6 = *((_DWORD *)this + 13);
  if ( !v8 || v8 != (GameClient::BattleFieldManager *)((char *)this + 48) )
    _invalid_parameter_noinfo();
  if ( v9 == v6 )
  {
    if ( a3 )
      GameClient::BattleFieldManager::RequestMapInfo(this, v3);
    return 0;
  }
  else
  {
    if ( !v5 )
      _invalid_parameter_noinfo();
    if ( v9 == *((_DWORD *)v5 + 1) )
      _invalid_parameter_noinfo();
    return (const struct GameClient::BATTLE_FIELD_INFO *)(v9 + 12);
  }
}
