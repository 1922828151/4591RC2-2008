/*
 * func-name: ?get_thread_num@Task@Utility@Outpop@@IAEJXZ
 * func-address: 0x1000d560
 * callers: none
 * callees: none
 */

LONG __thiscall Outpop::Utility::Task::get_thread_num(Outpop::Utility::Task *this)
{
  LONG v2; // [esp-4h] [ebp-8h]
  LONG Target; // [esp+0h] [ebp-4h] BYREF

  Target = (LONG)this;
  v2 = *((_DWORD *)this + 1);
  Target = 0;
  InterlockedExchange(&Target, v2);
  return Target;
}
