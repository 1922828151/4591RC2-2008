/*
 * func-name: ?acquire_write@TF_RW_Thread_Mutex@Utility@Outpop@@QAE_NXZ
 * func-address: 0x1000c710
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::Utility::TF_RW_Thread_Mutex::acquire_write(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
  ++lpCriticalSection[1].LockSemaphore;
  if ( lpCriticalSection[1].OwningThread || lpCriticalSection[1].LockSemaphore != HANDLE_FLAG_INHERIT )
  {
    LeaveCriticalSection(lpCriticalSection);
    return WaitForSingleObject((HANDLE)lpCriticalSection[1].LockCount, 0xFFFFFFFF) == 0;
  }
  else
  {
    LeaveCriticalSection(lpCriticalSection);
    return 1;
  }
}
