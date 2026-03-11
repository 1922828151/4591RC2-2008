/*
 * func-name: sub_10293160
 * func-address: 0x10293160
 * callers: 0x100107c6
 * callees: none
 */

unsigned int __thiscall sub_10293160(_DWORD *this, unsigned int *a2, int a3)
{
  _DWORD *v4; // ebp
  int v5; // eax
  unsigned int result; // eax
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  _DWORD *v12; // ecx
  int v13; // eax
  int i; // [esp+14h] [ebp+4h]

  v4 = this;
  *(_DWORD *)(a3 + 44) = *a2;
  v5 = *a2 + (this[171] - this[155]) / 2;
  *(_DWORD *)(a3 + 48) = v5;
  *(_DWORD *)(a3 + 52) = v5;
  *a2 += this[171];
  result = *a2;
  if ( *(_BYTE *)(a3 + 108) )
  {
    v7 = result + 2;
    *a2 = v7;
    *(_DWORD *)(a3 + 56) = v7;
    v8 = *(_DWORD *)(a3 + 32);
    if ( v8 )
      v8 = (*(_DWORD *)(a3 + 36) - v8) / 28;
    *a2 += v8 * *(_DWORD *)(a3 + 64);
    v9 = *(_DWORD *)(a3 + 32);
    if ( v9 )
      v9 = (*(_DWORD *)(a3 + 36) - v9) / 28;
    v10 = 0;
    *a2 += v9 + 2 * v9;
    for ( i = 0; ; i += 76 )
    {
      result = *(_DWORD *)(a3 + 76);
      if ( !result )
        break;
      result = (int)(*(_DWORD *)(a3 + 80) - result) / 76;
      if ( v10 >= result )
        break;
      v11 = *(_DWORD *)(a3 + 76);
      if ( !v11 || v10 >= (*(_DWORD *)(a3 + 80) - v11) / 76 )
        _invalid_parameter_noinfo();
      v12 = (_DWORD *)(i + *(_DWORD *)(a3 + 76));
      v12[15] = *a2;
      v12[16] = *a2 + (15 - v4[157]) / 2;
      v12[17] = (15 - v4[159]) / 2 + *a2 + 15;
      *a2 += 30;
      v13 = *(_DWORD *)(a3 + 76);
      if ( v13 )
        v13 = (*(_DWORD *)(a3 + 80) - v13) / 76;
      if ( v10 != v13 - 1 )
        *a2 += 2;
      v4 = this;
      ++v10;
    }
    if ( v4[161] )
    {
      *a2 += 11;
      result = *a2;
      *(_DWORD *)(a3 + 60) = *a2;
      *a2 += *(_DWORD *)(v4[161] + 108) + 9;
    }
  }
  return result;
}
