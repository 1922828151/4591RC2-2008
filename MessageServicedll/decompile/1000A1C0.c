/*
 * func-name: sub_1000A1C0
 * func-address: 0x1000a1c0
 * callers: 0x100029f0, 0x10003220, 0x10008540, 0x10008860, 0x10008b40, 0x10008df0, 0x100090e0, 0x10009320, 0x10009550, 0x10009780
 * callees: none
 */

_DWORD *__usercall sub_1000A1C0@<eax>(int a1@<edi>, _DWORD *a2@<esi>)
{
  unsigned int v2; // ebx
  bool v3; // cc

  v2 = *(_DWORD *)(a1 + 4);
  v3 = v2 <= *(_DWORD *)(a1 + 8);
  *a2 = 0;
  if ( !v3 )
    invalid_parameter_noinfo();
  a2[1] = v2;
  *a2 = a1;
  return a2;
}
