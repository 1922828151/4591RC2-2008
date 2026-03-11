/*
 * func-name: sub_1000B610
 * func-address: 0x1000b610
 * callers: 0x10002d90, 0x10002ee0, 0x1000a940, 0x1000aa50, 0x1000ab40, 0x1000ac30, 0x1000ad20, 0x1000ae10, 0x1000af00, 0x1000aff0, 0x1000b0f0
 * callees: none
 */

bool __usercall sub_1000B610@<al>(_DWORD *a1@<edi>, _DWORD *a2@<esi>)
{
  if ( !*a1 || *a1 != *a2 )
    invalid_parameter_noinfo();
  return a1[1] != a2[1];
}
