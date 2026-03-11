/*
 * func-name: ?UpdateEntryPoint@BattleFieldManager@GameClient@@QAEXJABV?$vector@UBATTLE_ENTRY@GameClient@@V?$allocator@UBATTLE_ENTRY@GameClient@@@std@@@std@@@Z_0
 * func-address: 0x1021db70
 * callers: 0x10008e59
 * callees: 0x100074c3, 0x1000a515, 0x1000adee, 0x1000e5ed, 0x1000f6fa, 0x1001a4d8, 0x102c9d62
 */

int __thiscall GameClient::BattleFieldManager::UpdateEntryPoint(_DWORD *this, int a2, int a3)
{
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v8; // [esp+0h] [ebp-E8h]
  int v9; // [esp+0h] [ebp-E8h]
  int v10; // [esp+4h] [ebp-E4h]
  int v11; // [esp+4h] [ebp-E4h]
  int v12; // [esp+14h] [ebp-D4h] BYREF
  int v13; // [esp+18h] [ebp-D0h]
  _DWORD *v14; // [esp+1Ch] [ebp-CCh] BYREF
  int v15; // [esp+20h] [ebp-C8h]
  char v16[120]; // [esp+24h] [ebp-C4h] BYREF
  int v17; // [esp+D4h] [ebp-14h]
  int v18; // [esp+E4h] [ebp-4h]

  v12 = a2;
  sub_1000F6FA((int)&v14, (int)&v12);
  v4 = this[13];
  v5 = this + 12;
  v6 = v14;
  v13 = v4;
  if ( !v14 || v14 != v5 )
    _invalid_parameter_noinfo();
  if ( v15 == v13 )
  {
    sub_1000E5ED(v8, v10);
    v18 = 0;
    sub_1000ADEE(a3);
    v17 = 0;
    v12 = a2;
    sub_1000A515((int)&v12);
    sub_1001A4D8((int)v16);
    v18 = -1;
    return sub_100074C3(v9, v11);
  }
  else
  {
    if ( !v6 )
      _invalid_parameter_noinfo();
    if ( v15 == v6[1] )
      _invalid_parameter_noinfo();
    return sub_1000ADEE(a3);
  }
}
