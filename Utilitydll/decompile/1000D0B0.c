/*
 * func-name: ?erase_thread_from_hash@Task@Utility@Outpop@@QAEXK@Z
 * func-address: 0x1000d0b0
 * callers: none
 * callees: 0x1000db10
 */

void __thiscall Outpop::Utility::Task::erase_thread_from_hash(Outpop::Utility::Task *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // edi

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 52);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 52));
  sub_1000DB10((int)this + 12);
  LeaveCriticalSection(v3);
}
