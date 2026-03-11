/*
 * func-name: sub_100356A0
 * func-address: 0x100356a0
 * callers: 0x100328d0, 0x10035ba0, 0x10046860
 * callees: 0x10035760
 */

_DWORD *__userpurge sub_100356A0@<eax>(int a1@<eax>, _DWORD *a2, int a3, int a4, void *a5)
{
  unsigned int v6; // edi
  unsigned int v7; // eax
  int v8; // ebx
  unsigned int v9; // edi
  unsigned int v10; // edi
  _DWORD *result; // eax

  v6 = *(_DWORD *)(a1 + 4);
  if ( v6 && (v7 = *(_DWORD *)(a1 + 8), (int)(*(_DWORD *)(a1 + 8) - v6) >> 1) )
  {
    if ( v6 > v7 )
      invalid_parameter_noinfo();
    if ( !a4 || a4 != a1 )
      invalid_parameter_noinfo();
    v8 = (int)((int)a5 - v6) >> 1;
  }
  else
  {
    v8 = 0;
  }
  sub_10035760(a3, a4, a5);
  v9 = *(_DWORD *)(a1 + 4);
  if ( v9 > *(_DWORD *)(a1 + 8) )
    invalid_parameter_noinfo();
  v10 = v9 + 2 * v8;
  if ( v10 > *(_DWORD *)(a1 + 8) || v10 < *(_DWORD *)(a1 + 4) )
    invalid_parameter_noinfo();
  result = a2;
  a2[1] = v10;
  *a2 = a1;
  return result;
}
