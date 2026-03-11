/*
 * func-name: sub_10001520
 * func-address: 0x10001520
 * callers: 0x10001160
 * callees: none
 */

char __thiscall sub_10001520(LPCRITICAL_SECTION *this)
{
  EnterCriticalSection(*this);
  InterlockedCompareExchange((volatile LONG *)&(*this)[1], 1, 0);
  (*this)[1].LockCount = GetCurrentThreadId();
  return 1;
}
