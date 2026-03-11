/*
 * func-name: ?GetFlyweightID@ProductManager@GameClient@@QAEXKAAV?$vector@KV?$allocator@K@std@@@std@@@Z_0
 * func-address: 0x1016e600
 * callers: 0x1000ab82
 * callees: 0x10007059, 0x1000c252
 */

void __thiscall GameClient::ProductManager::GetFlyweightID(_DWORD *this, char a2, int a3)
{
  int v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // ebx
  _DWORD *v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  sub_10007059((int)&v8, (int)&a2);
  v4 = this[13];
  v5 = this + 12;
  v6 = v8;
  if ( !v8 || v8 != v5 )
    _invalid_parameter_noinfo();
  v7 = v9;
  if ( v9 != v4 )
  {
    if ( !v6 )
      _invalid_parameter_noinfo();
    if ( v7 == v6[1] )
      _invalid_parameter_noinfo();
    sub_1000C252(v7 + 12);
  }
}
