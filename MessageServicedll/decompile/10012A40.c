/*
 * func-name: sub_10012A40
 * func-address: 0x10012a40
 * callers: 0x100129e0
 * callees: 0x10012bd0
 */

_DWORD *__userpurge sub_10012A40@<eax>(int a1@<eax>, _DWORD *a2, int a3, int a4, void *Source)
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
    v8 = (int)((int)Source - v6) >> 2;
  }
  else
  {
    v8 = 0;
  }
  sub_10012BD0(a3, a4, Source);
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
