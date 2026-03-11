/*
 * func-name: ?acquire_read@TF_RW_Thread_Mutex@Utility@Outpop@@QAE_NXZ
 * func-address: 0x1000c6b0
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::Utility::TF_RW_Thread_Mutex::acquire_read(LPCRITICAL_SECTION lpCriticalSection)
{
  DWORD v2; // ebx

  EnterCriticalSection(lpCriticalSection);
  if ( (int)lpCriticalSection[1].LockSemaphore <= 0 )
  {
    ++lpCriticalSection[1].OwningThread;
    LeaveCriticalSection(lpCriticalSection);
    return 1;
  }
  else
  {
    ++lpCriticalSection[1].RecursionCount;
    LeaveCriticalSection(lpCriticalSection);
    v2 = WaitForSingleObject(lpCriticalSection[1].DebugInfo, 0xFFFFFFFF);
    EnterCriticalSection(lpCriticalSection);
    LeaveCriticalSection(lpCriticalSection);
    return v2 == 0;
  }
}
