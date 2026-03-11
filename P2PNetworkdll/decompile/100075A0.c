/*
 * func-name: sub_100075A0
 * func-address: 0x100075a0
 * callers: 0x10009d70, 0x10009e90
 * callees: none
 */

bool __usercall sub_100075A0@<al>(_DWORD *a1@<edi>, _DWORD *a2@<esi>)
{
  if ( !*a1 || *a1 != *a2 )
    invalid_parameter_noinfo();
  return a1[1] != a2[1];
}
