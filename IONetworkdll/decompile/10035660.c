/*
 * func-name: sub_10035660
 * func-address: 0x10035660
 * callers: 0x100117b0, 0x10013430, 0x10014eb0, 0x10024980, 0x1002bd30, 0x100490f0, 0x10049b20, 0x10049d30
 * callees: none
 */

_DWORD *__usercall sub_10035660@<eax>(int a1@<edi>, _DWORD *a2@<esi>)
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
