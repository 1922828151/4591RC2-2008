/*
 * func-name: sub_1000C4D0
 * func-address: 0x1000c4d0
 * callers: 0x1000be70
 * callees: none
 */

_DWORD *__userpurge sub_1000C4D0@<eax>(int a1@<eax>, int a2@<ecx>, _DWORD *a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // ebx
  unsigned int v6; // eax
  unsigned int v7; // edi

  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 8);
  v5 = -a1;
  if ( !v3 )
    invalid_parameter_noinfo();
  v6 = *(_DWORD *)(v3 + 12);
  v7 = v5 + v4;
  if ( v7 > v6 + *(_DWORD *)(v3 + 16) || v7 < v6 )
    invalid_parameter_noinfo();
  a3[2] = v7;
  a3[1] = v3;
  *a3 = 0;
  return a3;
}
