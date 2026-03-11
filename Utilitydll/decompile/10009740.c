/*
 * func-name: ?wait@Barrier_T@Utility@Outpop@@QAEHXZ
 * func-address: 0x10009740
 * callers: 0x1000d0e0, 0x1000d3c0
 * callees: 0x10009820, 0x100098a0
 */

int __thiscall Outpop::Utility::Barrier_T::wait(LPCRITICAL_SECTION lpCriticalSection)
{
  int v2; // esi
  int v4; // eax
  int v5; // eax

  EnterCriticalSection(lpCriticalSection);
  v2 = *((_DWORD *)&lpCriticalSection[6].DebugInfo + (int)lpCriticalSection[1].DebugInfo);
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 52);
    if ( v4 == 1 )
    {
      *(_DWORD *)(v2 + 52) = lpCriticalSection[1].LockCount;
      lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)(1 - (unsigned int)lpCriticalSection[1].DebugInfo);
      sub_100098A0();
    }
    else
    {
      v5 = v4 - 1;
      *(_DWORD *)(v2 + 52) = v5;
      while ( *(_DWORD *)(v2 + 52) != lpCriticalSection[1].LockCount )
        sub_10009820();
    }
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  else
  {
    LeaveCriticalSection(lpCriticalSection);
    return -1;
  }
}
