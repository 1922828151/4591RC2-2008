/*
 * func-name: ?svc@IO_Thread@Message@Outpop@@UAEHXZ
 * func-address: 0x100204a0
 * callers: none
 * callees: 0x10023490
 */

int __thiscall Outpop::Message::IO_Thread::svc(Outpop::Message::IO_Thread *this)
{
  _DWORD v3[9]; // [esp+0h] [ebp-24h] BYREF

  v3[5] = v3;
  Outpop::Utility::structure_exception::install();
  v3[8] = 0;
  Outpop::IONetwork::WIN32_IoCompletionPort::run_event_loop((Outpop::Message::IO_Thread *)((char *)this + 76));
  return 0;
}
