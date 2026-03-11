/*
 * func-name: ?interlock_addcount@Task@Utility@Outpop@@IAEXXZ
 * func-address: 0x1000d540
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Task::interlock_addcount(volatile LONG *this)
{
  InterlockedIncrement(this + 1);
}
