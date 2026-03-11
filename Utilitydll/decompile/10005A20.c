/*
 * func-name: sub_10005A20
 * func-address: 0x10005a20
 * callers: 0x10002bd0, 0x10002d20
 * callees: 0x10018cf2
 */

void __stdcall sub_10005A20(int a1)
{
  _DWORD *v1; // [esp-4h] [ebp-18h]

  while ( *(_DWORD *)(a1 + 40) )
  {
    v1 = *(_DWORD **)(a1 + 40);
    *(_DWORD *)(a1 + 40) = v1[1];
    operator delete(v1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 12));
}
