/*
 * func-name: ??1IO_Thread@Message@Outpop@@UAE@XZ
 * func-address: 0x10020420
 * callers: 0x10004c70
 * callees: none
 */

void __thiscall Outpop::Message::IO_Thread::~IO_Thread(Outpop::Message::IO_Thread *this)
{
  Outpop::IONetwork::WIN32_IoCompletionPort *v2; // edi

  *(_DWORD *)this = &Outpop::Message::IO_Thread::`vftable';
  v2 = (Outpop::Message::IO_Thread *)((char *)this + 76);
  Outpop::IONetwork::WIN32_IoCompletionPort::close((Outpop::Message::IO_Thread *)((char *)this + 76));
  Outpop::IONetwork::WIN32_IoCompletionPort::~WIN32_IoCompletionPort(v2);
  Outpop::Utility::Task::~Task(this);
}
