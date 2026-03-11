/*
 * func-name: ?IsOrderAvailable@Func_Store@GameClient@@QAE_NABV?$vector@UStockInfo@GameClient@@V?$allocator@UStockInfo@GameClient@@@std@@@std@@@Z_0
 * func-address: 0x101c51f0
 * callers: 0x1000a4e3
 * callees: 0x1000549d, 0x1000b0ff
 */

char __thiscall GameClient::Func_Store::IsOrderAvailable(char *this, int a2)
{
  unsigned int v4; // ebx
  int v5; // ecx
  char *v6; // edi
  int v7; // ebp
  int v8; // ecx
  char *v10; // [esp+14h] [ebp-8h] BYREF
  int v11; // [esp+18h] [ebp-4h]
  char *v12; // [esp+20h] [ebp+4h]

  v4 = 0;
  if ( !sub_1000549D() )
    return 1;
  v12 = this + 48;
  while ( 1 )
  {
    v5 = *(_DWORD *)(a2 + 4);
    if ( !v5 || v4 >= (*(_DWORD *)(a2 + 8) - v5) >> 3 )
      _invalid_parameter_noinfo();
    sub_1000B0FF((int)&v10, 8 * v4 + *(_DWORD *)(a2 + 4));
    v6 = v10;
    v7 = *((_DWORD *)v12 + 1);
    if ( !v10 || v10 != v12 )
      _invalid_parameter_noinfo();
    if ( v11 == v7 )
      break;
    if ( !v6 )
      _invalid_parameter_noinfo();
    if ( v11 == *((_DWORD *)v6 + 1) )
      _invalid_parameter_noinfo();
    if ( v11 == *((_DWORD *)v6 + 1) )
      _invalid_parameter_noinfo();
    v8 = *(_DWORD *)(a2 + 4);
    if ( !v8 || v4 >= (*(_DWORD *)(a2 + 8) - v8) >> 3 )
      _invalid_parameter_noinfo();
    if ( *(_DWORD *)(v11 + 12) - *(_DWORD *)(v11 + 16) < *(_DWORD *)(*(_DWORD *)(a2 + 4) + 8 * v4 + 4) )
      break;
    if ( ++v4 >= sub_1000549D() )
      return 1;
  }
  return 0;
}
