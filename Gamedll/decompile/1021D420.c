/*
 * func-name: ?GetBattleField@BattleFieldManager@GameClient@@QAE_NKAAUBATTLE_FIELD@2@@Z_0
 * func-address: 0x1021d420
 * callers: 0x10004eda
 * callees: 0x1001a794
 */

char __thiscall GameClient::BattleFieldManager::GetBattleField(
        GameClient::BattleFieldManager *this,
        char a2,
        struct GameClient::BATTLE_FIELD *a3)
{
  int v4; // edi
  char *v5; // eax
  char *v6; // esi
  int v7; // ebx
  char *v9; // [esp+10h] [ebp-8h] BYREF
  int v10; // [esp+14h] [ebp-4h]

  sub_1001A794((int)&v9, (int)&a2);
  v4 = *((_DWORD *)this + 3);
  v5 = (char *)this + 8;
  v6 = v9;
  if ( !v9 || v9 != v5 )
    _invalid_parameter_noinfo();
  v7 = v10;
  if ( v10 == v4 )
    return 0;
  if ( !v6 )
    _invalid_parameter_noinfo();
  if ( v7 == *((_DWORD *)v6 + 1) )
    _invalid_parameter_noinfo();
  *(_DWORD *)a3 = *(_DWORD *)(v7 + 12);
  return 1;
}
