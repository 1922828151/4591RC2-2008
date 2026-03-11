/*
 * func-name: sub_10007490
 * func-address: 0x10007490
 * callers: 0x100086c0, 0x10008950, 0x10008a80, 0x1000b550, 0x10010cb0, 0x10014830, 0x10014920
 * callees: none
 */

int *__usercall sub_10007490@<eax>(int *a1@<esi>)
{
  int v1; // eax
  int v2; // ecx

  if ( !*a1 )
    invalid_parameter_noinfo();
  v1 = *(_DWORD *)(a1[1] + 4);
  v2 = *a1;
  a1[1] = v1;
  if ( v1 == *(_DWORD *)(v2 + 4) )
    invalid_parameter_noinfo();
  return a1;
}
