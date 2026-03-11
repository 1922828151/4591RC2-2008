/*
 * func-name: ??0Acceptor@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x100049d0
 * callers: 0x10016bf0, 0x100261f0
 * callees: 0x10004270
 */

Outpop::IONetwork::Acceptor *__thiscall Outpop::IONetwork::Acceptor::Acceptor(Outpop::IONetwork::Acceptor *this)
{
  Outpop::Utility::Timer_Handler::Timer_Handler(this);
  *(_DWORD *)this = &Outpop::IONetwork::Acceptor::`vftable';
  Outpop::IONetwork::Acceptor_Config::Acceptor_Config((Outpop::IONetwork::Acceptor *)((char *)this + 8));
  *((_DWORD *)this + 32) = -1;
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::IONetwork::Acceptor *)((char *)this + 132));
  return this;
}
