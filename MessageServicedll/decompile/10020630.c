/*
 * func-name: ?stop@IO_Thread@Message@Outpop@@QAEXXZ
 * func-address: 0x10020630
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Message::IO_Thread::stop(Outpop::Message::IO_Thread *this)
{
  Outpop::IONetwork::WIN32_IoCompletionPort::end_event_loop((Outpop::Message::IO_Thread *)((char *)this + 76));
}
