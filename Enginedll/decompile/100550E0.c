/*
 * func-name: sub_100550E0
 * func-address: 0x100550e0
 * callers: 0x10055990
 * callees: none
 */

BOOL __cdecl sub_100550E0(int a1, int a2)
{
  return *(float *)(a2 + 268) < (double)*(float *)(a1 + 268)
      && *(_DWORD *)(*(_DWORD *)(a1 + 52) + 212) <= *(_DWORD *)(*(_DWORD *)(a2 + 52) + 212)
      || *(_DWORD *)(*(_DWORD *)(a1 + 52) + 212) < *(_DWORD *)(*(_DWORD *)(a2 + 52) + 212);
}
