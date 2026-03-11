/*
 * func-name: ?release@RW_Thread_Mutex@Utility@Outpop@@QAEHXZ
 * func-address: 0x1000cd50
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Utility::RW_Thread_Mutex::release(LPCRITICAL_SECTION lpCriticalSection)
{
  char *LockSemaphore; // eax

  EnterCriticalSection(lpCriticalSection);
  LockSemaphore = (char *)lpCriticalSection[4].LockSemaphore;
  if ( (int)LockSemaphore <= 0 )
  {
    if ( LockSemaphore == (char *)-1 )
    {
      lpCriticalSection[4].LockSemaphore = 0;
      return 0;
    }
    else
    {
      return -1;
    }
  }
  else
  {
    lpCriticalSection[4].LockSemaphore = LockSemaphore - 1;
    return 0;
  }
}
