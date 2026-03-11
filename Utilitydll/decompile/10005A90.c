/*
 * func-name: sub_10005A90
 * func-address: 0x10005a90
 * callers: 0x10002f40, 0x10004190, 0x10004430, 0x1000e3a0, 0x1000e4c0, 0x1000e520, 0x1000ec50, 0x1000f2f0, 0x1000f3d0
 * callees: 0x10006a30
 */

_DWORD *__usercall sub_10005A90@<eax>(int a1@<eax>)
{
  struct _RTL_CRITICAL_SECTION *v2; // ebx
  _DWORD *v3; // esi

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 12);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 12));
  v3 = *(_DWORD **)(a1 + 8);
  if ( v3 || (sub_10006A30(), (v3 = *(_DWORD **)(a1 + 8)) != 0) )
  {
    *(_DWORD *)(a1 + 8) = *v3;
    LeaveCriticalSection(v2);
    return v3;
  }
  else
  {
    LeaveCriticalSection(v2);
    return 0;
  }
}
