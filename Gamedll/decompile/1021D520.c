/*
 * func-name: ?AddBattleField@BattleFieldManager@GameClient@@QAEKABUBATTLE_FIELD@2@@Z_0
 * func-address: 0x1021d520
 * callers: 0x10018949
 * callees: 0x1000b38e, 0x1001a794
 */

unsigned int __thiscall GameClient::BattleFieldManager::AddBattleField(
        GameClient::BattleFieldManager *this,
        const struct GameClient::BATTLE_FIELD *a2)
{
  const struct GameClient::BATTLE_FIELD *v2; // ebx
  char *v4; // eax
  char *v5; // esi
  char *v7; // [esp+Ch] [ebp-14h] BYREF
  char *v8; // [esp+10h] [ebp-10h]
  char v9[12]; // [esp+14h] [ebp-Ch] BYREF

  v2 = a2;
  a2 = *(const struct GameClient::BATTLE_FIELD **)a2;
  sub_1001A794((int)&v7, (int)&a2);
  v4 = (char *)this + 8;
  v5 = (char *)*((_DWORD *)this + 3);
  if ( !v7 || v7 != v4 )
    _invalid_parameter_noinfo();
  if ( v8 != v5 )
    return 0;
  v7 = *(char **)v2;
  v8 = v7;
  sub_1000B38E((int)v9, (int)&v7);
  return 1;
}
