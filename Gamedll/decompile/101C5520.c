/*
 * func-name: ?BookStock@Func_Store@GameClient@@QAE_NABV?$vector@UStockInfo@GameClient@@V?$allocator@UStockInfo@GameClient@@@std@@@std@@@Z_0
 * func-address: 0x101c5520
 * callers: 0x10009804
 * callees: 0x1000549d, 0x1000b0ff
 */

char __thiscall GameClient::Func_Store::BookStock(_DWORD *this, int a2)
{
  _DWORD *v2; // ebx
  unsigned int v3; // edi
  int v4; // ecx
  int v5; // ebp
  int v6; // ebx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  unsigned int i; // ebx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  _DWORD *v18; // [esp+14h] [ebp-10h] BYREF
  int v19; // [esp+18h] [ebp-Ch]
  int v20; // [esp+20h] [ebp-4h]

  v2 = this;
  v3 = 0;
  if ( sub_1000549D() )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(a2 + 4);
      if ( !v4 || v3 >= (*(_DWORD *)(a2 + 8) - v4) >> 3 )
        _invalid_parameter_noinfo();
      v5 = 8 * v3;
      sub_1000B0FF((int)&v18, 8 * v3 + *(_DWORD *)(a2 + 4));
      v20 = v2[13];
      if ( !v18 || v18 != v2 + 12 )
        _invalid_parameter_noinfo();
      v6 = v19;
      if ( v19 == v20 )
        break;
      if ( !v18 )
        _invalid_parameter_noinfo();
      if ( v6 == v18[1] )
        _invalid_parameter_noinfo();
      if ( v6 == v18[1] )
        _invalid_parameter_noinfo();
      v7 = *(_DWORD *)(a2 + 4);
      if ( !v7 || v3 >= (*(_DWORD *)(a2 + 8) - v7) >> 3 )
        _invalid_parameter_noinfo();
      if ( *(_DWORD *)(v6 + 12) - *(_DWORD *)(v6 + 16) < *(_DWORD *)(*(_DWORD *)(a2 + 4) + v5 + 4) )
        break;
      if ( v6 == v18[1] )
        _invalid_parameter_noinfo();
      v8 = *(_DWORD *)(a2 + 4);
      if ( !v8 || v3 >= (*(_DWORD *)(a2 + 8) - v8) >> 3 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(v6 + 16) += *(_DWORD *)(*(_DWORD *)(a2 + 4) + v5 + 4);
      v9 = *(_DWORD *)(a2 + 4);
      if ( !v9 || v3 >= (*(_DWORD *)(a2 + 8) - v9) >> 3 )
        _invalid_parameter_noinfo();
      this[22] -= *(_DWORD *)(*(_DWORD *)(a2 + 4) + v5 + 4);
      if ( ++v3 >= sub_1000549D() )
        break;
      v2 = this;
    }
  }
  v10 = *(_DWORD *)(a2 + 4);
  if ( v10 )
    v11 = (*(_DWORD *)(a2 + 8) - v10) >> 3;
  else
    v11 = 0;
  if ( v3 == v11 )
    return 1;
  for ( i = 0; (int)i < (int)v3; ++i )
  {
    v13 = *(_DWORD *)(a2 + 4);
    if ( !v13 || i >= (*(_DWORD *)(a2 + 8) - v13) >> 3 )
      _invalid_parameter_noinfo();
    sub_1000B0FF((int)&v18, 8 * i + *(_DWORD *)(a2 + 4));
    if ( !v18 )
      _invalid_parameter_noinfo();
    if ( v19 == v18[1] )
      _invalid_parameter_noinfo();
    v14 = *(_DWORD *)(a2 + 4);
    if ( !v14 || i >= (*(_DWORD *)(a2 + 8) - v14) >> 3 )
      _invalid_parameter_noinfo();
    *(_DWORD *)(v19 + 16) -= *(_DWORD *)(*(_DWORD *)(a2 + 4) + 8 * i + 4);
    v15 = *(_DWORD *)(a2 + 4);
    if ( !v15 || v3 >= (*(_DWORD *)(a2 + 8) - v15) >> 3 )
      _invalid_parameter_noinfo();
    this[22] += *(_DWORD *)(*(_DWORD *)(a2 + 4) + 8 * v3 + 4);
  }
  return 0;
}
