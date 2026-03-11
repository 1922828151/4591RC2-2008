/*
 * func-name: sub_1000B5B0
 * func-address: 0x1000b5b0
 * callers: 0x10002d90, 0x10002ee0, 0x1000a940, 0x1000aa50, 0x1000ab40, 0x1000ac30, 0x1000ad20, 0x1000ae10, 0x1000af00, 0x1000aff0, 0x1001f040
 * callees: none
 */

int __usercall sub_1000B5B0@<eax>(_DWORD *a1@<esi>)
{
  if ( !*a1 )
    invalid_parameter_noinfo();
  if ( a1[1] == *(_DWORD *)(*a1 + 4) )
    invalid_parameter_noinfo();
  return a1[1] + 8;
}
