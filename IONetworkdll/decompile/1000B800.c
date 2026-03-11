/*
 * func-name: sub_1000B800
 * func-address: 0x1000b800
 * callers: 0x1000be70
 * callees: none
 */

int __usercall sub_1000B800@<eax>(int a1@<eax>)
{
  unsigned int v2; // esi
  int v3; // ebx
  int v4; // edi
  unsigned int v5; // eax

  v2 = *(_DWORD *)(a1 + 8) >> 2;
  v3 = *(_DWORD *)(a1 + 8) & 3;
  if ( !*(_DWORD *)(a1 + 4) )
    invalid_parameter_noinfo();
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 12)
                                           + *(_DWORD *)(*(_DWORD *)(a1 + 4) + 16)) )
    invalid_parameter_noinfo();
  v4 = *(_DWORD *)(a1 + 4);
  v5 = *(_DWORD *)(v4 + 8);
  if ( v5 <= v2 )
    v2 -= v5;
  return *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v2) + 4 * v3;
}
