/*
 * func-name: ??0Dispatch_Thread@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10003c80
 * callers: 0x10003d90, 0x10016c00
 * callees: 0x10002810, 0x10006550
 */

Outpop::Utility::Dispatch_Thread *__thiscall Outpop::Utility::Dispatch_Thread::Dispatch_Thread(
        Outpop::Utility::Dispatch_Thread *this,
        const struct Outpop::Utility::Dispatch_Thread *a2)
{
  Outpop::Utility::Task::Task(this, a2);
  *(_DWORD *)this = &Outpop::Utility::Dispatch_Thread::`vftable';
  sub_10006550((char *)this + 76);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 23);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  *((_DWORD *)this + 25) = *((_DWORD *)a2 + 25);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  qmemcpy((char *)this + 112, (char *)a2 + 112, 0x34u);
  return this;
}
