/*
 * func-name: ?release_write@TF_RW_Thread_Mutex@Utility@Outpop@@QAE_NXZ
 * func-address: 0x1000c760
 * callers: none
 * callees: none
 */

char __thiscall Outpop::Utility::TF_RW_Thread_Mutex::release_write(LPCRITICAL_SECTION lpCriticalSection)
{
  HANDLE v2; // eax
  bool v3; // bl
  int RecursionCount; // eax
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // ecx
  bool v7; // bl

  EnterCriticalSection(lpCriticalSection);
  v2 = --lpCriticalSection[1].LockSemaphore;
  if ( (int)v2 <= 0 )
  {
    if ( v2 || (RecursionCount = lpCriticalSection[1].RecursionCount, RecursionCount <= 0) )
    {
      LeaveCriticalSection(lpCriticalSection);
      return 1;
    }
    else
    {
      DebugInfo = lpCriticalSection[1].DebugInfo;
      lpCriticalSection[1].OwningThread = (char *)lpCriticalSection[1].OwningThread + RecursionCount;
      lpCriticalSection[1].RecursionCount = 0;
      v7 = ReleaseSemaphore(DebugInfo, RecursionCount, 0);
      LeaveCriticalSection(lpCriticalSection);
      return v7;
    }
  }
  else
  {
    v3 = ReleaseSemaphore((HANDLE)lpCriticalSection[1].LockCount, 1, 0);
    LeaveCriticalSection(lpCriticalSection);
    return v3;
  }
}
