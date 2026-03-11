/*
 * func-name: sub_1002D8B0
 * func-address: 0x1002d8b0
 * callers: 0x1002dc10
 * callees: none
 */

int __usercall sub_1002D8B0@<eax>(int a1@<esi>, const char *a2)
{
  int result; // eax
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
    return 0;
  result = *(_DWORD *)(a1 + 12);
  if ( !result )
    return 0;
  while ( strcmp(*(const char **)result, a2) )
  {
    result = *(_DWORD *)(result + 12);
    if ( !result )
      return 0;
  }
  if ( result != *(_DWORD *)(a1 + 12) )
  {
    *(_DWORD *)(*(_DWORD *)(result + 16) + 12) = *(_DWORD *)(result + 12);
    v3 = *(_DWORD *)(result + 12);
    if ( v3 )
      *(_DWORD *)(v3 + 16) = *(_DWORD *)(result + 16);
    *(_DWORD *)(result + 12) = *(_DWORD *)(a1 + 12);
    v4 = *(_DWORD *)(a1 + 12);
    if ( v4 )
      *(_DWORD *)(v4 + 16) = result;
    *(_DWORD *)(a1 + 12) = result;
  }
  return result;
}
