/*
 * func-name: sub_1004A7F0
 * func-address: 0x1004a7f0
 * callers: 0x100117b0, 0x10015e70, 0x10025540, 0x10025660, 0x10025750, 0x10025840, 0x10027c50, 0x10028900, 0x1002c6a0, 0x100377c0, 0x10038060, 0x1004a540, 0x1004a630, 0x1004c0d0
 * callees: none
 */

bool __usercall sub_1004A7F0@<al>(_DWORD *a1@<edi>, _DWORD *a2@<esi>)
{
  if ( !*a1 || *a1 != *a2 )
    invalid_parameter_noinfo();
  return a1[1] != a2[1];
}
