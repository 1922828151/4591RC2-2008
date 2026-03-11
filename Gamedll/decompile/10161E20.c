/*
 * func-name: sub_10161E20
 * func-address: 0x10161e20
 * callers: 0x1000154b
 * callees: none
 */

bool __cdecl sub_10161E20(int a1, int a2)
{
  int v2; // ecx
  bool result; // al

  v2 = *(_DWORD *)(a1 + 112);
  result = 1;
  if ( v2 != 1 || *(_DWORD *)(a2 + 112) == 1 )
    return (*(_DWORD *)(a2 + 112) != 1 || v2 == 1) && *(_DWORD *)(a1 + 12) < *(_DWORD *)(a2 + 12);
  return result;
}
