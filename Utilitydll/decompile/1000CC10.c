/*
 * func-name: ??1RW_Thread_Mutex@Utility@Outpop@@QAE@XZ
 * func-address: 0x1000cc10
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::RW_Thread_Mutex::~RW_Thread_Mutex(char *lpCriticalSection)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)(lpCriticalSection + 28));
  if ( *((_DWORD *)lpCriticalSection + 13) )
    CloseHandle(*((HANDLE *)lpCriticalSection + 13));
  if ( *((_DWORD *)lpCriticalSection + 14) )
    CloseHandle(*((HANDLE *)lpCriticalSection + 14));
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection + 3);
  if ( *((_DWORD *)lpCriticalSection + 24) )
    CloseHandle(*((HANDLE *)lpCriticalSection + 24));
  if ( *((_DWORD *)lpCriticalSection + 25) )
    CloseHandle(*((HANDLE *)lpCriticalSection + 25));
  DeleteCriticalSection((LPCRITICAL_SECTION)(lpCriticalSection + 124));
  if ( *((_DWORD *)lpCriticalSection + 37) )
    CloseHandle(*((HANDLE *)lpCriticalSection + 37));
  if ( *((_DWORD *)lpCriticalSection + 38) )
    CloseHandle(*((HANDLE *)lpCriticalSection + 38));
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
}
