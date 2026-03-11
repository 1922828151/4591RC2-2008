/*
 * func-name: ??0Barrier_T@Utility@Outpop@@QAE@IPBDPAX@Z
 * func-address: 0x10009580
 * callers: 0x1000d3c0
 * callees: 0x10009490
 */

struct _RTL_CRITICAL_SECTION *__thiscall Outpop::Utility::Barrier_T::Barrier_T(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        const char *a3,
        void *a4)
{
  InitializeCriticalSection(this);
  this[1].DebugInfo = 0;
  this[1].LockCount = a2;
  Outpop::Utility::Sub_Barrier_T::Sub_Barrier_T(
    (Outpop::Utility::Sub_Barrier_T *)&this[1].RecursionCount,
    a2,
    (struct Outpop::Utility::Thread_Mutex *)this,
    a4);
  Outpop::Utility::Sub_Barrier_T::Sub_Barrier_T(
    (Outpop::Utility::Sub_Barrier_T *)&this[3].LockSemaphore,
    a2,
    (struct Outpop::Utility::Thread_Mutex *)this,
    a4);
  this[6].RecursionCount = (LONG)a3;
  this[6].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&this[1].RecursionCount;
  this[6].LockCount = (LONG)&this[3].LockSemaphore;
  return this;
}
