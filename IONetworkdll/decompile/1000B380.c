/*
 * func-name: sub_1000B380
 * func-address: 0x1000b380
 * callers: 0x1000acf0
 * callees: none
 */

_DWORD *__usercall sub_1000B380@<eax>(int a1@<ebx>, _DWORD *a2@<edi>)
{
  unsigned int v2; // eax
  unsigned int v3; // esi

  v2 = *(_DWORD *)(a1 + 12);
  v3 = v2 + *(_DWORD *)(a1 + 16);
  *a2 = 0;
  if ( v2 > v3 )
    invalid_parameter_noinfo();
  a2[2] = v3;
  a2[1] = a1;
  return a2;
}
