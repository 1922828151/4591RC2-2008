/*
 * func-name: sub_100084E0
 * func-address: 0x100084e0
 * callers: 0x100079c0, 0x10007e60
 * callees: none
 */

_DWORD *__usercall sub_100084E0@<eax>(int a1@<edi>, _DWORD *a2@<esi>)
{
  unsigned int v2; // ebx
  bool v3; // cc

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 4) <= v2;
  *a2 = 0;
  if ( !v3 )
    invalid_parameter_noinfo();
  a2[1] = v2;
  *a2 = a1;
  return a2;
}
