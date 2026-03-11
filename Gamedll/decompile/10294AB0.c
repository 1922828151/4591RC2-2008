/*
 * func-name: sub_10294AB0
 * func-address: 0x10294ab0
 * callers: 0x10011045
 * callees: 0x10009d8b, 0x100107c6
 */

unsigned int __thiscall sub_10294AB0(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // edi
  unsigned int result; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // ebp
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // ebx
  int i; // ebp
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  _BYTE v18[8]; // [esp+10h] [ebp-8h] BYREF

  v3 = a2;
  *(_DWORD *)(a3 + 36) = *a2;
  *(_DWORD *)(a3 + 40) = *a2 + (27 - this[153]) / 2;
  *a2 += 27;
  result = *a2;
  if ( *(_BYTE *)(a3 + 28) )
  {
    *a2 = result + 2;
    v5 = *(_DWORD *)(a3 + 48);
    if ( v5 )
      result = (*(_DWORD *)(a3 + 52) - v5) >> 7;
    else
      result = 0;
    v6 = result - 1;
    if ( (int)(result - 1) >= 0 )
    {
      v7 = v6 << 7;
      do
      {
        v8 = *(_DWORD *)(a3 + 48);
        if ( !v8 || v6 >= (unsigned int)((*(_DWORD *)(a3 + 52) - v8) >> 7) )
          _invalid_parameter_noinfo();
        v9 = *(_DWORD *)(a3 + 48);
        v10 = *(_DWORD *)(v9 + v7 + 76);
        if ( !v10 || (result = (*(_DWORD *)(v9 + v7 + 80) - v10) / 76) == 0 )
        {
          v11 = *(_DWORD *)(a3 + 48);
          if ( v11 > *(_DWORD *)(a3 + 52) )
            _invalid_parameter_noinfo();
          v12 = v7 + v11;
          if ( v12 > *(_DWORD *)(a3 + 52) || v12 < *(_DWORD *)(a3 + 48) )
            _invalid_parameter_noinfo();
          result = sub_10009D8B((int)v18, a3 + 44, v12);
          v3 = a2;
        }
        --v6;
        v7 -= 128;
      }
      while ( v6 >= 0 );
    }
    v13 = 0;
    for ( i = 0; ; i += 128 )
    {
      v15 = *(_DWORD *)(a3 + 48);
      if ( !v15 )
        break;
      result = (*(_DWORD *)(a3 + 52) - v15) >> 7;
      if ( v13 >= result )
        break;
      sub_100107C6((int)v3, i + *(_DWORD *)(a3 + 48));
      v16 = *(_DWORD *)(a3 + 48);
      if ( v16 )
        v17 = (*(_DWORD *)(a3 + 52) - v16) >> 7;
      else
        v17 = 0;
      result = v17 - 1;
      if ( v13 != result )
        *v3 += 2;
      ++v13;
    }
  }
  return result;
}
