/*
 * func-name: sub_1006D640
 * func-address: 0x1006d640
 * callers: 0x1006e0b0
 * callees: 0x1006d090
 */

_DWORD *__cdecl sub_1006D640(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        unsigned int a7,
        char a8,
        _DWORD *a9,
        unsigned int a10)
{
  _DWORD *v10; // edi
  unsigned int v11; // ebp
  unsigned int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ebp
  _DWORD *v16; // [esp-20h] [ebp-30h]
  unsigned int v17; // [esp-1Ch] [ebp-2Ch]

  v10 = a9;
  v11 = a4 - a7;
  if ( !a9 )
    invalid_parameter_noinfo();
  v12 = v10[3];
  v13 = a10;
  v14 = a10 + v11;
  if ( v14 > v12 + v10[4] || v14 < v12 )
    invalid_parameter_noinfo();
  a8 = 0;
  v16 = a6;
  v17 = a7;
  *a1 = 0;
  a1[1] = v10;
  a1[2] = v14;
  sub_1006D090(&a5, 0, a3, a4, 0, v16, v17, 0, v10, v13);
  return a1;
}
