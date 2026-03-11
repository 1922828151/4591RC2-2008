/*
 * func-name: ?AddStock@Func_Store@GameClient@@QAE_NKJ@Z_0
 * func-address: 0x101c5ca0
 * callers: 0x100053d0
 * callees: 0x1000b0ff, 0x1000da99
 */

char __thiscall GameClient::Func_Store::AddStock(GameClient::Func_Store *this, unsigned int a2, int a3)
{
  int v3; // ebp
  int v6; // ebx
  GameClient::Func_Store *v7; // edi
  GameClient::Func_Store *v8; // [esp+8h] [ebp-18h] BYREF
  int v9; // [esp+Ch] [ebp-14h]
  unsigned int v10; // [esp+14h] [ebp-Ch] BYREF
  int v11; // [esp+18h] [ebp-8h]
  int v12; // [esp+1Ch] [ebp-4h]

  v3 = a3;
  if ( a3 + *((_DWORD *)this + 22) > *((_DWORD *)this + 21) )
    return 0;
  sub_1000B0FF((int)&v8, (int)&a2);
  v11 = *((_DWORD *)this + 13);
  if ( !v8 || v8 != (GameClient::Func_Store *)((char *)this + 48) )
    _invalid_parameter_noinfo();
  v6 = v9;
  if ( v9 == v11 )
  {
    if ( v3 <= *((_DWORD *)this + 23) )
    {
      v12 = 0;
      v10 = a2;
      v11 = v3;
      sub_1000DA99((int)&v8, (int)&v10);
      *((_DWORD *)this + 22) += v3;
      return 1;
    }
    return 0;
  }
  v7 = v8;
  if ( !v8 )
    _invalid_parameter_noinfo();
  if ( v6 == *((_DWORD *)v7 + 1) )
    _invalid_parameter_noinfo();
  if ( v3 + *(_DWORD *)(v6 + 12) > *((_DWORD *)this + 23) )
    return 0;
  if ( v6 == *((_DWORD *)v7 + 1) )
    _invalid_parameter_noinfo();
  *(_DWORD *)(v6 + 12) += v3;
  *((_DWORD *)this + 22) += v3;
  return 1;
}
