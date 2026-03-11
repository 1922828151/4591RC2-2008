/*
 * func-name: sub_100179B0
 * func-address: 0x100179b0
 * callers: 0x10017e30
 * callees: 0x100149b0
 */

char __cdecl sub_100179B0(int a1, int a2, _DWORD *a3)
{
  if ( (*(_DWORD *)(a1 + 24) & 0xFFFFFFFE) == 0 )
  {
    if ( a3[1] == *a3 )
      sub_100149B0(a3, 1);
    *(_DWORD *)(a3[2] + 4 * a3[1]++) = a1;
  }
  return 1;
}
