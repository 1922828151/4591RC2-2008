/*
 * func-name: sub_10008270
 * func-address: 0x10008270
 * callers: 0x10009d70, 0x10009e90
 * callees: none
 */

int *__usercall sub_10008270@<eax>(int *a1@<esi>)
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
