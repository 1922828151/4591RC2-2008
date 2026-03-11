/*
 * func-name: ??0Logger@Utility@Outpop@@QAE@XZ
 * func-address: 0x10016600
 * callers: 0x10002410
 * callees: 0x100168a0
 */

struct _RTL_CRITICAL_SECTION *__thiscall Outpop::Utility::Logger::Logger(struct _RTL_CRITICAL_SECTION *this)
{
  sub_100168A0(this);
  sub_100168A0(&this[2]);
  sub_100168A0(&this[3].SpinCount);
  InitializeCriticalSection(this + 6);
  InitializeCriticalSectionAndSpinCount(this + 6, 0xAu);
  this[1].SpinCount = -1;
  setlocale(2, Locale);
  BYTE2(this[5].LockSemaphore) = 0;
  LOBYTE(this[5].SpinCount) = 0;
  BYTE1(this[5].SpinCount) = 0;
  BYTE2(this[5].SpinCount) = 0;
  HIBYTE(this[5].LockSemaphore) = 0;
  LOBYTE(this[5].LockSemaphore) = 0;
  BYTE1(this[5].LockSemaphore) = 0;
  LOBYTE(this[7].DebugInfo) = 0;
  return this;
}
