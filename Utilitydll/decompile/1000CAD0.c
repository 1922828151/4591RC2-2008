/*
 * func-name: ??0RW_Thread_Mutex@Utility@Outpop@@QAE@XZ
 * func-address: 0x1000cad0
 * callers: none
 * callees: 0x1000c970, 0x1000ca80
 */

Outpop::Utility::RW_Thread_Mutex *__thiscall Outpop::Utility::RW_Thread_Mutex::RW_Thread_Mutex(
        Outpop::Utility::RW_Thread_Mutex *this)
{
  HANDLE SemaphoreA; // eax
  HANDLE EventA; // eax
  HANDLE v4; // eax
  HANDLE v5; // eax

  Outpop::Utility::TF_rwlock_t::TF_rwlock_t((LPCRITICAL_SECTION)this);
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 15) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 28));
  SemaphoreA = CreateSemaphoreA(0, 0, 0xFFFF, 0);
  *((_DWORD *)this + 13) = SemaphoreA;
  if ( !SemaphoreA )
    goto LABEL_7;
  EventA = CreateEventA(0, 0, 0, 0);
  *((_DWORD *)this + 14) = EventA;
  if ( !EventA )
    goto LABEL_7;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 26) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 3);
  v4 = CreateSemaphoreA(0, 0, 0xFFFF, 0);
  *((_DWORD *)this + 24) = v4;
  if ( v4 && (v5 = CreateEventA(0, 0, 0, 0), (*((_DWORD *)this + 25) = v5) != 0) && !sub_1000CA80((int)this + 120) )
  {
    *((_DWORD *)this + 28) = 0;
    *((_DWORD *)this + 27) = 0;
    *((_DWORD *)this + 16) = 0;
    *((_DWORD *)this + 29) = 0;
  }
  else
  {
LABEL_7:
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 28));
    if ( *((_DWORD *)this + 13) )
      CloseHandle(*((HANDLE *)this + 13));
    if ( *((_DWORD *)this + 14) )
      CloseHandle(*((HANDLE *)this + 14));
    DeleteCriticalSection((LPCRITICAL_SECTION)this + 3);
    if ( *((_DWORD *)this + 24) )
      CloseHandle(*((HANDLE *)this + 24));
    if ( *((_DWORD *)this + 25) )
      CloseHandle(*((HANDLE *)this + 25));
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 124));
    if ( *((_DWORD *)this + 37) )
      CloseHandle(*((HANDLE *)this + 37));
    if ( *((_DWORD *)this + 38) )
      CloseHandle(*((HANDLE *)this + 38));
  }
  return this;
}
