/*
 * func-name: sub_1000FB40
 * func-address: 0x1000fb40
 * callers: 0x1000fa50
 * callees: 0x1000fc90
 */

_DWORD *__userpurge sub_1000FB40@<eax>(int a1@<eax>, _DWORD *a2, int a3, int a4, int a5)
{
  unsigned int v6; // esi
  int v7; // ebx
  int v8; // esi
  unsigned int v9; // ebx
  unsigned int v10; // esi
  _DWORD *result; // eax

  v6 = *(_DWORD *)(a1 + 4);
  if ( v6 && (int)(*(_DWORD *)(a1 + 8) - v6) / 116 )
  {
    if ( v6 > *(_DWORD *)(a1 + 8) )
      invalid_parameter_noinfo();
    v7 = a4;
    if ( !a4 || a4 != a1 )
      invalid_parameter_noinfo();
    v8 = (int)(a5 - v6) / 116;
  }
  else
  {
    v7 = a4;
    v8 = 0;
  }
  sub_1000FC90(a3, v7, a5);
  v9 = *(_DWORD *)(a1 + 4);
  if ( v9 > *(_DWORD *)(a1 + 8) )
    invalid_parameter_noinfo();
  v10 = v9 + 116 * v8;
  if ( v10 > *(_DWORD *)(a1 + 8) || v10 < *(_DWORD *)(a1 + 4) )
    invalid_parameter_noinfo();
  result = a2;
  *a2 = a1;
  a2[1] = v10;
  return result;
}
