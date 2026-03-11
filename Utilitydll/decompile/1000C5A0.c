/*
 * func-name: ??1TF_RW_Thread_Mutex@Utility@Outpop@@QAE@XZ
 * func-address: 0x1000c5a0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::TF_RW_Thread_Mutex::~TF_RW_Thread_Mutex(LPCRITICAL_SECTION lpCriticalSection)
{
  if ( lpCriticalSection[1].SpinCount )
  {
    CloseHandle(lpCriticalSection[1].DebugInfo);
    CloseHandle((HANDLE)lpCriticalSection[1].LockCount);
    lpCriticalSection[1].SpinCount = 0;
  }
  DeleteCriticalSection(lpCriticalSection);
}
