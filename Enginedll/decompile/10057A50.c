/*
 * func-name: sub_10057A50
 * func-address: 0x10057a50
 * callers: 0x10058580, 0x1005a850, 0x10070240
 * callees: 0x10057210
 */

_DWORD *__cdecl sub_10057A50(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        _DWORD *a9,
        unsigned int a10)
{
  _DWORD *v10; // edi
  unsigned int v11; // esi
  unsigned int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ebp
  int v16; // [esp-20h] [ebp-30h]
  int v17; // [esp-1Ch] [ebp-2Ch]

  v10 = a9;
  v11 = a7 - a4;
  if ( !a9 )
    invalid_parameter_noinfo();
  v12 = v10[3];
  v13 = a10;
  v14 = a10 + v11;
  if ( a10 + v11 > v12 + v10[4] || v14 < v12 )
    invalid_parameter_noinfo();
  a8 = 0;
  v16 = a6;
  v17 = a7;
  *a1 = 0;
  a1[1] = v10;
  a1[2] = v14;
  sub_10057210(&a5, 0, a3, a4, 0, v16, v17, 0, v10, v13);
  return a1;
}
