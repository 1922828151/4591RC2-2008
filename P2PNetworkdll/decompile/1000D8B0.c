/*
 * func-name: sub_1000D8B0
 * func-address: 0x1000d8b0
 * callers: 0x1000c0c0
 * callees: none
 */

int __usercall sub_1000D8B0@<eax>(_DWORD *a1@<esi>)
{
  if ( !*a1 )
    invalid_parameter_noinfo();
  if ( a1[1] == *(_DWORD *)(*a1 + 4) )
    invalid_parameter_noinfo();
  return a1[1] + 8;
}
