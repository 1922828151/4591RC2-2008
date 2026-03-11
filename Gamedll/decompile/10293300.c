/*
 * func-name: sub_10293300
 * func-address: 0x10293300
 * callers: 0x1000146a
 * callees: 0x100066a9
 */

int __thiscall sub_10293300(_DWORD *this, int a2)
{
  int result; // eax
  unsigned int v5; // edi
  int i; // ebp
  int v7; // eax
  int v8; // eax
  unsigned int j; // edi
  int v10; // eax
  int v11; // eax
  int v12; // [esp+Ch] [ebp+4h]

  result = this[171];
  if ( *(_BYTE *)(a2 + 108) )
  {
    v5 = 0;
    v12 = this[171];
    for ( i = 0; ; i += 28 )
    {
      v7 = *(_DWORD *)(a2 + 32);
      if ( !v7 || v5 >= (*(_DWORD *)(a2 + 36) - v7) / 28 )
        break;
      v8 = *(_DWORD *)(a2 + 32);
      if ( !v8 || v5 >= (*(_DWORD *)(a2 + 36) - v8) / 28 )
        _invalid_parameter_noinfo();
      v12 += sub_100066A9(i + *(_DWORD *)(a2 + 32), this[43] - this[41]);
      ++v5;
    }
    for ( j = 0; ; ++j )
    {
      v10 = *(_DWORD *)(a2 + 76);
      if ( !v10 || j >= (*(_DWORD *)(a2 + 80) - v10) / 76 )
        break;
      v11 = *(_DWORD *)(a2 + 76);
      if ( !v11 || j >= (*(_DWORD *)(a2 + 80) - v11) / 76 )
        _invalid_parameter_noinfo();
      v12 += 32;
    }
    return v12;
  }
  return result;
}
