/*
 * func-name: ?FetchBookedStock@Func_Store@GameClient@@QAE_NABV?$vector@UStockInfo@GameClient@@V?$allocator@UStockInfo@GameClient@@@std@@@std@@@Z_0
 * func-address: 0x101c5860
 * callers: 0x10019470
 * callees: 0x1000549d, 0x1000b0ff
 */

char __thiscall GameClient::Func_Store::FetchBookedStock(_DWORD *this, int a2)
{
  unsigned int v2; // ebp
  int v3; // ecx
  _DWORD *v4; // edi
  int v5; // ebx
  int v6; // edi
  int v7; // ecx
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // ecx
  int v16; // ebp
  int v17; // edi
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  signed int v22; // edi
  unsigned int v24; // [esp+10h] [ebp-14h] BYREF
  int v25; // [esp+14h] [ebp-10h]
  _DWORD *v26; // [esp+18h] [ebp-Ch]
  int v27; // [esp+1Ch] [ebp-8h] BYREF
  int v28; // [esp+20h] [ebp-4h]

  v26 = this;
  v2 = 0;
  v24 = 0;
  if ( sub_1000549D() )
  {
    do
    {
      v3 = *(_DWORD *)(a2 + 4);
      if ( !v3 || v2 >= (*(_DWORD *)(a2 + 8) - v3) >> 3 )
        _invalid_parameter_noinfo();
      v4 = v26;
      v5 = 8 * v2;
      sub_1000B0FF((int)&v24, 8 * v2 + *(_DWORD *)(a2 + 4));
      v28 = v4[13];
      if ( !v24 || (_DWORD *)v24 != v4 + 12 )
        _invalid_parameter_noinfo();
      v6 = v25;
      if ( v25 == v28 )
        break;
      if ( !v24 )
        _invalid_parameter_noinfo();
      if ( v6 == *(_DWORD *)(v24 + 4) )
        _invalid_parameter_noinfo();
      v7 = *(_DWORD *)(a2 + 4);
      if ( !v7 || v2 >= (*(_DWORD *)(a2 + 8) - v7) >> 3 )
        _invalid_parameter_noinfo();
      if ( *(_DWORD *)(v6 + 16) < *(_DWORD *)(v5 + *(_DWORD *)(a2 + 4) + 4) )
        break;
      if ( v6 == *(_DWORD *)(v24 + 4) )
        _invalid_parameter_noinfo();
      v8 = *(_DWORD *)(a2 + 4);
      if ( !v8 || v2 >= (*(_DWORD *)(a2 + 8) - v8) >> 3 )
        _invalid_parameter_noinfo();
      v9 = v24;
      *(_DWORD *)(v6 + 16) -= *(_DWORD *)(v5 + *(_DWORD *)(a2 + 4) + 4);
      if ( v6 == *(_DWORD *)(v9 + 4) )
        _invalid_parameter_noinfo();
      v10 = *(_DWORD *)(a2 + 4);
      if ( !v10 || v2 >= (*(_DWORD *)(a2 + 8) - v10) >> 3 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(v6 + 12) -= *(_DWORD *)(v5 + *(_DWORD *)(a2 + 4) + 4);
      v11 = *(_DWORD *)(a2 + 4);
      if ( !v11 || v2 >= (*(_DWORD *)(a2 + 8) - v11) >> 3 )
        _invalid_parameter_noinfo();
      v26[22] -= *(_DWORD *)(v5 + *(_DWORD *)(a2 + 4) + 4);
      ++v2;
    }
    while ( v2 < sub_1000549D() );
    v24 = v2;
  }
  v12 = *(_DWORD *)(a2 + 4);
  if ( v12 )
    v13 = (*(_DWORD *)(a2 + 8) - v12) >> 3;
  else
    v13 = 0;
  if ( v2 == v13 )
    return 1;
  v14 = 0;
  if ( (int)v2 > 0 )
  {
    do
    {
      v15 = *(_DWORD *)(a2 + 4);
      if ( !v15 || v14 >= (*(_DWORD *)(a2 + 8) - v15) >> 3 )
        _invalid_parameter_noinfo();
      v16 = 8 * v14;
      sub_1000B0FF((int)&v27, 8 * v14 + *(_DWORD *)(a2 + 4));
      if ( !v27 )
        _invalid_parameter_noinfo();
      v17 = v28;
      if ( v28 == *(_DWORD *)(v27 + 4) )
        _invalid_parameter_noinfo();
      v18 = *(_DWORD *)(a2 + 4);
      if ( !v18 || v14 >= (*(_DWORD *)(a2 + 8) - v18) >> 3 )
        _invalid_parameter_noinfo();
      v19 = v27;
      *(_DWORD *)(v17 + 12) += *(_DWORD *)(*(_DWORD *)(a2 + 4) + v16 + 4);
      if ( v17 == *(_DWORD *)(v19 + 4) )
        _invalid_parameter_noinfo();
      v20 = *(_DWORD *)(a2 + 4);
      if ( !v20 || v14 >= (*(_DWORD *)(a2 + 8) - v20) >> 3 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(v17 + 16) += *(_DWORD *)(*(_DWORD *)(a2 + 4) + v16 + 4);
      v21 = *(_DWORD *)(a2 + 4);
      v22 = v24;
      if ( !v21 || v24 >= (*(_DWORD *)(a2 + 8) - v21) >> 3 )
        _invalid_parameter_noinfo();
      v26[22] += *(_DWORD *)(*(_DWORD *)(a2 + 4) + 8 * v22 + 4);
      ++v14;
    }
    while ( (int)v14 < v22 );
  }
  return 0;
}
