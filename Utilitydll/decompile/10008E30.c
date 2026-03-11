/*
 * func-name: sub_10008E30
 * func-address: 0x10008e30
 * callers: 0x100086c0, 0x10008950, 0x10008a80, 0x1000b550, 0x10010cb0, 0x10014830, 0x10014920
 * callees: none
 */

bool __usercall sub_10008E30@<al>(_DWORD *a1@<edi>, _DWORD *a2@<esi>)
{
  if ( !*a1 || *a1 != *a2 )
    invalid_parameter_noinfo();
  return a1[1] != a2[1];
}
