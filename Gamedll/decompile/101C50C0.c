/*
 * func-name: ?CanAddStock@Func_Store@GameClient@@QAE_NKJ@Z_0
 * func-address: 0x101c50c0
 * callers: 0x100073ab
 * callees: 0x1000b0ff
 */

char __thiscall GameClient::Func_Store::CanAddStock(GameClient::Func_Store *this, char a2, int a3)
{
  GameClient::Func_Store *v5; // edi
  int v6; // ebx
  int v7; // ebp
  GameClient::Func_Store *v8; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h]

  if ( a3 + *((_DWORD *)this + 22) > *((_DWORD *)this + 21) )
    return 0;
  sub_1000B0FF((int)&v8, (int)&a2);
  v5 = v8;
  v6 = *((_DWORD *)this + 13);
  if ( !v8 || v8 != (GameClient::Func_Store *)((char *)this + 48) )
    _invalid_parameter_noinfo();
  v7 = v9;
  if ( v9 == v6 )
  {
    if ( a3 > *((_DWORD *)this + 23) )
      return 0;
  }
  else
  {
    if ( !v5 )
      _invalid_parameter_noinfo();
    if ( v7 == *((_DWORD *)v5 + 1) )
      _invalid_parameter_noinfo();
    if ( a3 + *(_DWORD *)(v7 + 12) > *((_DWORD *)this + 23) )
      return 0;
  }
  return 1;
}
