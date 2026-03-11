/*
 * func-name: ??0IO_Thread@Message@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10004bd0
 * callers: none
 * callees: none
 */

Outpop::Message::IO_Thread *__thiscall Outpop::Message::IO_Thread::IO_Thread(
        Outpop::Message::IO_Thread *this,
        const struct Outpop::Message::IO_Thread *a2)
{
  Outpop::Utility::Task::Task(this, a2);
  *(_DWORD *)this = &Outpop::Message::IO_Thread::`vftable';
  qmemcpy((char *)this + 76, (char *)a2 + 76, 0x24u);
  return this;
}
