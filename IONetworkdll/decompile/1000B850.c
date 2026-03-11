/*
 * func-name: sub_1000B850
 * func-address: 0x1000b850
 * callers: 0x1000be70
 * callees: none
 */

int __usercall sub_1000B850@<eax>(int a1@<esi>)
{
  if ( !*(_DWORD *)(a1 + 4) )
    invalid_parameter_noinfo();
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 12)
                                           + *(_DWORD *)(*(_DWORD *)(a1 + 4) + 16)) )
    invalid_parameter_noinfo();
  ++*(_DWORD *)(a1 + 8);
  return a1;
}
