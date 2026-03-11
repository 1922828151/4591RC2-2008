/*
 * func-name: sub_102AC870
 * func-address: 0x102ac870
 * callers: 0x10017deb
 * callees: none
 */

LONG __thiscall sub_102AC870(volatile LONG *this, LONG Value)
{
  return InterlockedExchange(this + 38, Value);
}
