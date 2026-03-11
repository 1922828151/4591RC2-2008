/*
 * func-name: ??0Dispatch_Thread@Utility@Outpop@@QAE@XZ
 * func-address: 0x1000a7c0
 * callers: 0x1000ada0, 0x10016de0
 * callees: 0x10007360, 0x1000cdb0
 */

Outpop::Utility::Dispatch_Thread *__thiscall Outpop::Utility::Dispatch_Thread::Dispatch_Thread(
        Outpop::Utility::Dispatch_Thread *this)
{
  Outpop::Utility::Task::Task(this);
  *(_DWORD *)this = &Outpop::Utility::Dispatch_Thread::`vftable';
  *((_DWORD *)this + 20) = sub_10007360();
  *((_DWORD *)this + 21) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  *((_DWORD *)this + 38) = (char *)this + 88;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 35) = CreateSemaphoreA(0, 0, 0x10000, 0);
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 116));
  *((_DWORD *)this + 36) = CreateEventA(0, 0, 0, 0);
  return this;
}
