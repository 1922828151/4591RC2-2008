/*
 * func-name: ?ChangeFX@OccupyIcon@GameClient@@QAEXW4NATION_TYPE@@@Z_0
 * func-address: 0x10169410
 * callers: 0x1000b5f0
 * callees: 0x10006e29, 0x1000ae2a, 0x1000bf05, 0x1001a5d2
 */

void __thiscall GameClient::OccupyIcon::ChangeFX(_DWORD **this, char a2)
{
  _DWORD **v2; // esi
  _DWORD *i; // edi
  _DWORD **v4; // edi
  _DWORD *v5; // ebx
  _DWORD *v6; // esi
  _DWORD **v8; // [esp+14h] [ebp-8h] BYREF
  _DWORD *v9; // [esp+18h] [ebp-4h]

  v2 = this + 119;
  for ( i = (_DWORD *)*this[120]; i != v2[1]; i = (_DWORD *)*i )
  {
    if ( sub_1000BF05() )
    {
      sub_1000BF05();
      sub_1001A5D2(0);
    }
    if ( i == v2[1] )
      _invalid_parameter_noinfo();
  }
  sub_10006E29((int)&v8, (int)&a2);
  v4 = v8;
  v5 = v2[1];
  if ( !v8 || v8 != v2 )
    _invalid_parameter_noinfo();
  v6 = v9;
  if ( v9 != v5 )
  {
    if ( !v4 )
      _invalid_parameter_noinfo();
    if ( v6 == v4[1] )
      _invalid_parameter_noinfo();
    if ( sub_1000BF05() )
    {
      sub_1000BF05();
      sub_1001A5D2(1);
      sub_1000BF05();
      sub_1000AE2A((int)(this + 128));
    }
  }
}
