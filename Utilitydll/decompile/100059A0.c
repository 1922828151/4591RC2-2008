/*
 * func-name: sub_100059A0
 * func-address: 0x100059a0
 * callers: 0x10002bd0
 * callees: 0x10006a30
 */

int __stdcall sub_100059A0(int a1, int a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 12));
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)a1 = a2 + 1;
  *(_DWORD *)(a1 + 4) = 32;
  sub_10006A30();
  return a1;
}
