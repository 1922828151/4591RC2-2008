/*
 * func-name: ?acquire_read@RW_Thread_Mutex@Utility@Outpop@@QAEHXZ
 * func-address: 0x1000ccc0
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Utility::RW_Thread_Mutex::acquire_read(char *lpCriticalSection)
{
  char *v2; // eax
  BOOL v3; // ebx

  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  v2 = (char *)*((_DWORD *)lpCriticalSection + 28);
  if ( (int)v2 >= 0 && *((int *)lpCriticalSection + 27) <= 0 )
  {
    *((_DWORD *)lpCriticalSection + 28) = v2 + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return 0;
  }
  else
  {
    ++*((_DWORD *)lpCriticalSection + 16);
    EnterCriticalSection((LPCRITICAL_SECTION)(lpCriticalSection + 28));
    ++*((_DWORD *)lpCriticalSection + 6);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lpCriticalSection + 28));
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    WaitForSingleObject(*((HANDLE *)lpCriticalSection + 13), 0xFFFFFFFF);
    EnterCriticalSection((LPCRITICAL_SECTION)(lpCriticalSection + 28));
    --*((_DWORD *)lpCriticalSection + 6);
    v3 = *((_DWORD *)lpCriticalSection + 15) && !*((_DWORD *)lpCriticalSection + 6);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lpCriticalSection + 28));
    if ( v3 )
      SetEvent(*((HANDLE *)lpCriticalSection + 14));
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return -2;
  }
}
