/*
 * func-name: sub_1000B880
 * func-address: 0x1000b880
 * callers: 0x1000ada0, 0x1000be70
 * callees: none
 */

_DWORD *__userpurge sub_1000B880@<eax>(int a1@<eax>, _DWORD *a2@<ebx>, int a3)
{
  int v3; // esi
  int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // edi

  v3 = *(_DWORD *)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 8);
  if ( !v3 )
    invalid_parameter_noinfo();
  v5 = *(_DWORD *)(v3 + 12);
  v6 = a3 + v4;
  if ( v6 > v5 + *(_DWORD *)(v3 + 16) || v6 < v5 )
    invalid_parameter_noinfo();
  a2[2] = v6;
  a2[1] = v3;
  *a2 = 0;
  return a2;
}
