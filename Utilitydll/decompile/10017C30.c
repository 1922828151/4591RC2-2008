/*
 * func-name: ??0ShellRunTask@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10017c30
 * callers: none
 * callees: 0x10002810
 */

Outpop::Utility::ShellRunTask *__thiscall Outpop::Utility::ShellRunTask::ShellRunTask(
        Outpop::Utility::ShellRunTask *this,
        const struct Outpop::Utility::ShellRunTask *a2)
{
  Outpop::Utility::Task::Task(this, a2);
  *(_DWORD *)this = &Outpop::Utility::ShellRunTask::`vftable';
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 21) = *((_DWORD *)a2 + 21);
  return this;
}
