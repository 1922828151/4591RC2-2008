/*
 * func-name: ?GetBattleFields@BattleFieldManager@GameClient@@QAEXAAV?$vector@UBATTLE_FIELD@GameClient@@V?$allocator@UBATTLE_FIELD@GameClient@@@std@@@std@@@Z_0
 * func-address: 0x1021d5a0
 * callers: 0x10019c68
 * callees: 0x1000f7c7
 */

void __thiscall GameClient::BattleFieldManager::GetBattleFields(_DWORD **this, int a2)
{
  _DWORD *v2; // esi
  _DWORD **v3; // edi

  v2 = (_DWORD *)*this[3];
  v3 = this + 2;
  while ( v2 != v3[1] )
  {
    sub_1000F7C7((int)(v2 + 3));
    if ( v2 == v3[1] )
      _invalid_parameter_noinfo();
    v2 = (_DWORD *)*v2;
  }
}
