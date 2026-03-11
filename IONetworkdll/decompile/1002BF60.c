/*
 * func-name: sub_1002BF60
 * func-address: 0x1002bf60
 * callers: 0x10038060
 * callees: none
 */

bool __usercall sub_1002BF60@<al>(_DWORD *a1@<edi>, _DWORD *a2@<esi>)
{
  if ( !*a1 || *a1 != *a2 )
    invalid_parameter_noinfo();
  return a1[1] == a2[1];
}
