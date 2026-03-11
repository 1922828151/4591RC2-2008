/*
 * func-name: sub_1000B220
 * func-address: 0x1000b220
 * callers: 0x1000a280, 0x1000ac30, 0x10010440, 0x10013cb0, 0x1002d330, 0x1002e210, 0x10030ba0, 0x10032340, 0x10042eb0, 0x10043720, 0x100447a0
 * callees: 0x1000b8d0
 */

_DWORD *__userpurge sub_1000B220@<eax>(int a1@<eax>, _DWORD *a2, int a3, int a4, int a5)
{
  unsigned int v6; // edi
  unsigned int v7; // eax
  int v8; // ebx
  unsigned int v9; // edi
  unsigned int v10; // edi
  _DWORD *result; // eax

  v6 = *(_DWORD *)(a1 + 4);
  if ( v6 && (v7 = *(_DWORD *)(a1 + 8), (int)(*(_DWORD *)(a1 + 8) - v6) >> 2) )
  {
    if ( v6 > v7 )
      invalid_parameter_noinfo();
    if ( !a4 || a4 != a1 )
      invalid_parameter_noinfo();
    v8 = (int)(a5 - v6) >> 2;
  }
  else
  {
    v8 = 0;
  }
  sub_1000B8D0(a1, a3, a4, a5);
  v9 = *(_DWORD *)(a1 + 4);
  if ( v9 > *(_DWORD *)(a1 + 8) )
    invalid_parameter_noinfo();
  v10 = v9 + 4 * v8;
  if ( v10 > *(_DWORD *)(a1 + 8) || v10 < *(_DWORD *)(a1 + 4) )
    invalid_parameter_noinfo();
  result = a2;
  a2[1] = v10;
  *a2 = a1;
  return result;
}
