/*
 * func-name: ?CancelBookStock@Func_Store@GameClient@@QAE_NABV?$vector@UStockInfo@GameClient@@V?$allocator@UStockInfo@GameClient@@@std@@@std@@@Z_0
 * func-address: 0x101c5750
 * callers: 0x1000680c
 * callees: 0x1000549d, 0x1000b0ff
 */

char __thiscall GameClient::Func_Store::CancelBookStock(char *this, int a2)
{
  unsigned int v4; // ebx
  char *v5; // edi
  int v6; // ecx
  int v7; // ebp
  char *v8; // ebx
  int v9; // edi
  int v10; // ecx
  unsigned int v12; // [esp+Ch] [ebp-18h]
  char *v13; // [esp+14h] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-Ch]
  int v15; // [esp+20h] [ebp-4h]
  char *v16; // [esp+28h] [ebp+4h]

  v4 = 0;
  v12 = 0;
  if ( sub_1000549D() )
  {
    v5 = this + 48;
    v16 = v5;
    while ( 1 )
    {
      v6 = *(_DWORD *)(a2 + 4);
      if ( !v6 || v4 >= (*(_DWORD *)(a2 + 8) - v6) >> 3 )
        _invalid_parameter_noinfo();
      v7 = 8 * v4;
      sub_1000B0FF((int)&v13, 8 * v4 + *(_DWORD *)(a2 + 4));
      v8 = v13;
      v15 = *((_DWORD *)v5 + 1);
      if ( !v13 || v13 != v5 )
        _invalid_parameter_noinfo();
      v9 = v14;
      if ( v14 != v15 )
      {
        if ( !v8 )
          _invalid_parameter_noinfo();
        if ( v9 == *((_DWORD *)v8 + 1) )
          _invalid_parameter_noinfo();
        v10 = *(_DWORD *)(a2 + 4);
        if ( !v10 || v12 >= (*(_DWORD *)(a2 + 8) - v10) >> 3 )
          _invalid_parameter_noinfo();
        *(_DWORD *)(v9 + 16) -= *(_DWORD *)(*(_DWORD *)(a2 + 4) + v7 + 4);
        if ( v9 == *((_DWORD *)v8 + 1) )
          _invalid_parameter_noinfo();
        if ( *(int *)(v9 + 16) < 0 )
        {
          if ( v9 == *((_DWORD *)v8 + 1) )
            _invalid_parameter_noinfo();
          *(_DWORD *)(v9 + 16) = 0;
        }
      }
      if ( ++v12 >= sub_1000549D() )
        break;
      v5 = v16;
      v4 = v12;
    }
  }
  return 1;
}
