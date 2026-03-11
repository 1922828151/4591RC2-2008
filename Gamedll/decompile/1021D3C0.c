/*
 * func-name: ?RemoveBattleField@BattleFieldManager@GameClient@@QAE_NK@Z_0
 * func-address: 0x1021d3c0
 * callers: 0x1000bd1b
 * callees: 0x10009f1b, 0x1001a794
 */

char __thiscall GameClient::BattleFieldManager::RemoveBattleField(
        GameClient::BattleFieldManager *this,
        unsigned int a2)
{
  void *v3; // ebx
  char *v4; // eax
  int v5; // esi
  int v7; // [esp+Ch] [ebp-8h] BYREF
  void *v8; // [esp+10h] [ebp-4h]

  sub_1001A794((int)&v7, (int)&a2);
  v3 = (void *)*((_DWORD *)this + 3);
  v4 = (char *)this + 8;
  v5 = v7;
  if ( !v7 || (char *)v7 != v4 )
    _invalid_parameter_noinfo();
  if ( v8 == v3 )
    return 0;
  sub_10009F1B((int)&v7, v5, v8);
  return 1;
}
