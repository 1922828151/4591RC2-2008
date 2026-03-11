/*
 * func-name: ??0Sub_Barrier_T@Utility@Outpop@@QAE@IAAVThread_Mutex@12@PAX@Z
 * func-address: 0x10009490
 * callers: 0x10009580, 0x10009630
 * callees: none
 */

Outpop::Utility::Sub_Barrier_T *__thiscall Outpop::Utility::Sub_Barrier_T::Sub_Barrier_T(
        Outpop::Utility::Sub_Barrier_T *this,
        unsigned int a2,
        struct Outpop::Utility::Thread_Mutex *a3,
        void *a4)
{
  *((_DWORD *)this + 10) = a3;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 9) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 7) = CreateSemaphoreA(0, 0, 0x10000, 0);
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 4));
  *((_DWORD *)this + 8) = CreateEventA(0, 0, 0, 0);
  *((_DWORD *)this + 13) = a2;
  return this;
}
