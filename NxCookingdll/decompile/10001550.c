/*
 * func-name: sub_10001550
 * func-address: 0x10001550
 * callers: 0x10001160
 * callees: none
 */

char __thiscall sub_10001550(LPCRITICAL_SECTION *this)
{
  InterlockedCompareExchange((volatile LONG *)&(*this)[1], 0, 1);
  LeaveCriticalSection(*this);
  return 1;
}
