/*
 * func-name: sub_1000C2D0
 * func-address: 0x1000c2d0
 * callers: 0x1000bd90
 * callees: 0x1000c600
 */

_DWORD *__usercall sub_1000C2D0@<eax>(
        _DWORD *a1@<edi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        int a9,
        int a10)
{
  int v10; // esi
  int v11; // ebp
  unsigned int v12; // eax
  int v13; // ebx
  unsigned int v14; // ebp
  int v16; // [esp-20h] [ebp-30h]
  int v17; // [esp-1Ch] [ebp-2Ch]

  v10 = a9;
  v11 = a4 - a7;
  if ( !a9 )
    invalid_parameter_noinfo();
  v12 = *(_DWORD *)(v10 + 12);
  v13 = a10;
  v14 = a10 + v11;
  if ( v14 > v12 + *(_DWORD *)(v10 + 16) || v14 < v12 )
    invalid_parameter_noinfo();
  a8 = 0;
  v16 = a6;
  v17 = a7;
  *a1 = 0;
  a1[1] = v10;
  a1[2] = v14;
  sub_1000C600(&a5, 0, a3, a4, 0, v16, v17, 0, v10, v13);
  return a1;
}
