/*
 * func-name: sub_10014070
 * func-address: 0x10014070
 * callers: 0x100067f0, 0x10006fd0, 0x10010540, 0x100139b0, 0x10013c70
 * callees: none
 */

_DWORD *__usercall sub_10014070@<eax>(int a1@<edi>, _DWORD *a2@<esi>)
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
