/*
 * func-name: ??0ShellRunTask@Utility@Outpop@@QAE@AAVIServiceHandler@12@PAXAAVManual_Event@12@@Z
 * func-address: 0x10018660
 * callers: none
 * callees: 0x1000cdb0
 */

Outpop::Utility::ShellRunTask *__thiscall Outpop::Utility::ShellRunTask::ShellRunTask(
        Outpop::Utility::ShellRunTask *this,
        struct Outpop::Utility::IServiceHandler *a2,
        void *a3,
        struct Outpop::Utility::Manual_Event *a4)
{
  Outpop::Utility::Task::Task(this);
  *(_DWORD *)this = &Outpop::Utility::ShellRunTask::`vftable';
  *((_DWORD *)this + 19) = a2;
  *((_DWORD *)this + 20) = a3;
  *((_DWORD *)this + 21) = a4;
  return this;
}
