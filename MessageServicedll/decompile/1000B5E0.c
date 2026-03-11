/*
 * func-name: sub_1000B5E0
 * func-address: 0x1000b5e0
 * callers: 0x10002ee0, 0x1000aa50, 0x1000ab40, 0x1000ac30, 0x1000ad20, 0x1000ae10, 0x1000af00
 * callees: none
 */

int *__usercall sub_1000B5E0@<eax>(int *a1@<esi>)
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
