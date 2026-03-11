/*
 * func-name: ?release_read@TF_RW_Thread_Mutex@Utility@Outpop@@QAE_NXZ
 * func-address: 0x1000c850
 * callers: none
 * callees: 0x100074c0
 */

char __thiscall Outpop::Utility::TF_RW_Thread_Mutex::release_read(LPCRITICAL_SECTION lpCriticalSection)
{
  HANDLE LockSemaphore; // eax
  bool v4; // bl
  void *RecursionCount; // eax
  bool v7; // bl
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // [esp-Ch] [ebp-38h]
  LPCRITICAL_SECTION v9; // [esp+14h] [ebp-18h] BYREF
  int v10; // [esp+18h] [ebp-14h]
  int v11; // [esp+28h] [ebp-4h]

  v9 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  v10 = 0;
  v11 = 0;
  if ( lpCriticalSection[1].OwningThread-- != HANDLE_FLAG_INHERIT )
    goto LABEL_7;
  LockSemaphore = lpCriticalSection[1].LockSemaphore;
  if ( (int)LockSemaphore > 0 )
  {
    v4 = ReleaseSemaphore((HANDLE)lpCriticalSection[1].LockCount, 1, 0);
    v11 = -1;
    v10 = -1;
    LeaveCriticalSection(lpCriticalSection);
    return v4;
  }
  if ( LockSemaphore || (RecursionCount = (void *)lpCriticalSection[1].RecursionCount, (int)RecursionCount <= 0) )
  {
LABEL_7:
    LeaveCriticalSection(lpCriticalSection);
    return 1;
  }
  else
  {
    DebugInfo = lpCriticalSection[1].DebugInfo;
    lpCriticalSection[1].RecursionCount = 0;
    lpCriticalSection[1].OwningThread = RecursionCount;
    v7 = ReleaseSemaphore(DebugInfo, (LONG)RecursionCount, 0);
    v11 = -1;
    sub_100074C0((int)&v9);
    return v7;
  }
}
