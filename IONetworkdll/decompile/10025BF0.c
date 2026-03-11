/*
 * func-name: sub_10025BF0
 * func-address: 0x10025bf0
 * callers: 0x10015e70, 0x10025660, 0x10025750, 0x1002c6a0, 0x1004a540, 0x1004a630
 * callees: none
 */

int *__usercall sub_10025BF0@<eax>(int *a1@<esi>)
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
