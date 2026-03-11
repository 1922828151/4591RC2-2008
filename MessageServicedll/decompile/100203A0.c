/*
 * func-name: ??0IO_Thread@Message@Outpop@@QAE@XZ
 * func-address: 0x100203a0
 * callers: 0x100052a0
 * callees: none
 */

Outpop::Message::IO_Thread *__thiscall Outpop::Message::IO_Thread::IO_Thread(Outpop::Message::IO_Thread *this)
{
  Outpop::Utility::Task::Task(this);
  *(_DWORD *)this = &Outpop::Message::IO_Thread::`vftable';
  Outpop::IONetwork::WIN32_IoCompletionPort::WIN32_IoCompletionPort((Outpop::Message::IO_Thread *)((char *)this + 76));
  Outpop::IONetwork::WIN32_IoCompletionPort::open((Outpop::Message::IO_Thread *)((char *)this + 76), 0);
  return this;
}
