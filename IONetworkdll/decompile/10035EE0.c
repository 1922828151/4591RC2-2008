/*
 * func-name: sub_10035EE0
 * func-address: 0x10035ee0
 * callers: 0x10015e70, 0x10025660, 0x10025750, 0x10025840, 0x10027c50, 0x10028900, 0x1002c6a0, 0x100377c0, 0x10038060, 0x1004a540, 0x1004a630
 * callees: none
 */

int __usercall sub_10035EE0@<eax>(_DWORD *a1@<esi>)
{
  if ( !*a1 )
    invalid_parameter_noinfo();
  if ( a1[1] == *(_DWORD *)(*a1 + 4) )
    invalid_parameter_noinfo();
  return a1[1] + 8;
}
