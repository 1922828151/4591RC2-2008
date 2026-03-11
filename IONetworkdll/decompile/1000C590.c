/*
 * func-name: sub_1000C590
 * func-address: 0x1000c590
 * callers: 0x1000be70
 * callees: none
 */

void __usercall sub_1000C590(int a1@<edi>, int a2@<esi>)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // edx

  if ( !*(_DWORD *)(a2 + 4) )
    invalid_parameter_noinfo();
  v2 = *(_DWORD *)(a2 + 4);
  v3 = *(_DWORD *)(v2 + 12);
  v4 = a1 + *(_DWORD *)(a2 + 8);
  if ( v4 > v3 + *(_DWORD *)(v2 + 16) || v4 < v3 )
    invalid_parameter_noinfo();
  *(_DWORD *)(a2 + 8) += a1;
}
