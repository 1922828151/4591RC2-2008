/*
 * func-name: sub_10005AF0
 * func-address: 0x10005af0
 * callers: 0x10003250, 0x10003390
 * callees: none
 */

void __usercall sub_10005AF0(_DWORD *a1@<ebx>, int a2@<esi>)
{
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 12));
  *a1 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = a1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 12));
}
