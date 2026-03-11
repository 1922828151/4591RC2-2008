/*
 * func-name: sub_10017CB0
 * func-address: 0x10017cb0
 * callers: none
 * callees: 0x1000ce30, 0x10018cf2, 0x10018d56, 0x10018e1c
 */

Outpop::Utility::Task *__thiscall sub_10017CB0(Outpop::Utility::Task *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x58u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Utility::ShellRunTask::~ShellRunTask);
    if ( (a2 & 1) != 0 )
      operator delete[]((char *)this - 4);
    return (Outpop::Utility::Task *)((char *)this - 4);
  }
  else
  {
    *(_DWORD *)this = &Outpop::Utility::ShellRunTask::`vftable';
    Outpop::Utility::Task::~Task(this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
