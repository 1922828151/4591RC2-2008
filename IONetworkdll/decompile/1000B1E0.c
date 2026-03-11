/*
 * func-name: sub_1000B1E0
 * func-address: 0x1000b1e0
 * callers: 0x1000be70
 * callees: none
 */

bool __usercall sub_1000B1E0@<al>(int a1@<edi>, int a2@<esi>)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 4);
  if ( !v2 || v2 != *(_DWORD *)(a2 + 4) )
    invalid_parameter_noinfo();
  return *(_DWORD *)(a1 + 8) != *(_DWORD *)(a2 + 8);
}
