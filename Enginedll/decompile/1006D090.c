/*
 * func-name: sub_1006D090
 * func-address: 0x1006d090
 * callers: 0x1006d640
 * callees: none
 */

_DWORD *__cdecl sub_1006D090(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        unsigned int a7,
        int a8,
        _DWORD *a9,
        unsigned int a10)
{
  unsigned int v11; // eax
  unsigned int v12; // esi
  int v13; // edi
  unsigned int v14; // eax
  int v15; // ecx
  _DWORD *v16; // eax
  unsigned int v17; // esi
  unsigned int v18; // ecx
  _DWORD *result; // eax
  _DWORD *v20; // [esp+10h] [ebp-4h]

  while ( a4 != a7 )
  {
    v11 = a7 - 1;
    v12 = (a7 - 1) >> 2;
    v13 = ((_BYTE)a7-- - 1) & 3;
    if ( !a6 )
    {
      invalid_parameter_noinfo();
      v11 = a7;
    }
    if ( v11 >= a6[3] + a6[4] )
      invalid_parameter_noinfo();
    v14 = a6[2];
    if ( v14 <= v12 )
      v12 -= v14;
    v15 = *(_DWORD *)(a6[1] + 4 * v12) + 4 * v13;
    v16 = a9;
    v17 = --a10 >> 2;
    v20 = (_DWORD *)v15;
    if ( !a9 )
    {
      invalid_parameter_noinfo();
      v16 = 0;
    }
    if ( a10 >= v16[3] + v16[4] )
    {
      invalid_parameter_noinfo();
      v16 = a9;
    }
    v18 = v16[2];
    if ( v18 <= v17 )
      v17 -= v18;
    *(_DWORD *)(*(_DWORD *)(v16[1] + 4 * v17) + 4 * (a10 & 3)) = *v20;
  }
  result = a1;
  a1[2] = a10;
  *a1 = 0;
  a1[1] = a9;
  return result;
}
