/*
 * func-name: ?GetFreeStockCount@Func_Store@GameClient@@QAEJK@Z_0
 * func-address: 0x101c5b60
 * callers: 0x10008ea4
 * callees: 0x1000b0ff
 */

int __thiscall GameClient::Func_Store::GetFreeStockCount(GameClient::Func_Store *this, unsigned int a2)
{
  int v3; // edi
  char *v4; // eax
  char *v5; // esi
  int v6; // ebx
  char *v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  sub_1000B0FF((int)&v8, (int)&a2);
  v3 = *((_DWORD *)this + 13);
  v4 = (char *)this + 48;
  v5 = v8;
  if ( !v8 || v8 != v4 )
    _invalid_parameter_noinfo();
  v6 = v9;
  if ( v9 == v3 )
    return 0;
  if ( !v5 )
    _invalid_parameter_noinfo();
  if ( v6 == *((_DWORD *)v5 + 1) )
  {
    _invalid_parameter_noinfo();
    if ( v6 == *((_DWORD *)v5 + 1) )
      _invalid_parameter_noinfo();
  }
  return *(_DWORD *)(v6 + 12) - *(_DWORD *)(v6 + 16);
}
