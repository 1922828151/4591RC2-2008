/*
 * func-name: ?interlocked_decrementcount@Task@Utility@Outpop@@IAEXXZ
 * func-address: 0x1000d550
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Task::interlocked_decrementcount(volatile LONG *this)
{
  InterlockedDecrement(this + 1);
}
