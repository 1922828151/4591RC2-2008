/*
 * func-name: ??0TF_RW_Thread_Mutex@Utility@Outpop@@QAE@XZ
 * func-address: 0x1000c530
 * callers: none
 * callees: 0x1000c620
 */

struct _RTL_CRITICAL_SECTION *__thiscall Outpop::Utility::TF_RW_Thread_Mutex::TF_RW_Thread_Mutex(
        struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  this[1].RecursionCount = 0;
  this[1].OwningThread = 0;
  this[1].LockSemaphore = 0;
  this[1].SpinCount = 0;
  Outpop::Utility::TF_RW_Thread_Mutex::Init_RW_Cont((Outpop::Utility::TF_RW_Thread_Mutex *)this);
  return this;
}
