/*
 * func-name: ?RemoveStock@Func_Store@GameClient@@QAE_NKJ@Z_0
 * func-address: 0x101c5160
 * callers: 0x1000eb79
 * callees: 0x1000b0ff
 */

char __thiscall GameClient::Func_Store::RemoveStock(GameClient::Func_Store *this, char a2, int a3)
{
  GameClient::Func_Store *v4; // ebx
  int v5; // ebp
  int v6; // esi
  int v7; // ebp
  GameClient::Func_Store *v9; // [esp+10h] [ebp-8h] BYREF
  int v10; // [esp+14h] [ebp-4h]

  sub_1000B0FF((int)&v9, (int)&a2);
  v4 = v9;
  v5 = *((_DWORD *)this + 13);
  if ( !v9 || v9 != (GameClient::Func_Store *)((char *)this + 48) )
    _invalid_parameter_noinfo();
  v6 = v10;
  if ( v10 == v5 )
    return 0;
  if ( !v4 )
    _invalid_parameter_noinfo();
  if ( v6 == *((_DWORD *)v4 + 1) )
  {
    _invalid_parameter_noinfo();
    if ( v6 == *((_DWORD *)v4 + 1) )
      _invalid_parameter_noinfo();
  }
  v7 = a3;
  if ( a3 > *(_DWORD *)(v6 + 12) - *(_DWORD *)(v6 + 16) )
    return 0;
  if ( v6 == *((_DWORD *)v4 + 1) )
    _invalid_parameter_noinfo();
  *(_DWORD *)(v6 + 12) -= v7;
  *((_DWORD *)this + 22) -= v7;
  return 1;
}
