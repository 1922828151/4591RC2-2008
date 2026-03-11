/*
 * func-name: sub_10292D10
 * func-address: 0x10292d10
 * callers: 0x1000e232
 * callees: none
 */

unsigned int __thiscall sub_10292D10(_DWORD *this)
{
  unsigned int v1; // ebp
  int i; // edi
  unsigned int result; // eax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // edi
  int v13; // ecx
  int j; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  v1 = 0;
  for ( i = 0; ; i += 60 )
  {
    result = this[134];
    v15 = i;
    if ( !result )
      break;
    result = (int)(this[135] - result) / 60;
    if ( v1 >= result )
      break;
    v5 = this[134];
    if ( !v5 || v1 >= (this[135] - v5) / 60 )
      _invalid_parameter_noinfo();
    v6 = 0;
    *(_BYTE *)(this[134] + i + 28) = 1;
    for ( j = 0; ; j += 128 )
    {
      v7 = this[134];
      if ( !v7 || v1 >= (this[135] - v7) / 60 )
        _invalid_parameter_noinfo();
      v8 = *(_DWORD *)(i + this[134] + 48);
      if ( !v8 || v6 >= (*(_DWORD *)(i + this[134] + 52) - v8) >> 7 )
        break;
      v9 = this[134];
      if ( !v9 || v1 >= (this[135] - v9) / 60 )
        _invalid_parameter_noinfo();
      v10 = this[134];
      v11 = *(_DWORD *)(v10 + i + 48);
      v12 = v10 + i + 44;
      if ( !v11 || v6 >= (*(_DWORD *)(v12 + 8) - v11) >> 7 )
        _invalid_parameter_noinfo();
      v13 = *(_DWORD *)(v12 + 4);
      i = v15;
      *(_BYTE *)(v13 + j + 108) = 0;
      ++v6;
    }
    ++v1;
  }
  return result;
}
