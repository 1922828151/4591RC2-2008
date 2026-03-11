/*
 * func-name: sub_100168A0
 * func-address: 0x100168a0
 * callers: 0x10016600
 * callees: none
 */

int __stdcall sub_100168A0(int a1)
{
  *(_DWORD *)a1 = -1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 4));
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  return a1;
}
