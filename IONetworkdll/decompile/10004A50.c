/*
 * func-name: ??1Acceptor@IONetwork@Outpop@@UAE@XZ
 * func-address: 0x10004a50
 * callers: 0x10004c40, 0x10016bf0, 0x10016ca0, 0x10016e90, 0x10025eb0, 0x100261f0, 0x100262f0
 * callees: none
 */

void __thiscall Outpop::IONetwork::Acceptor::~Acceptor(Outpop::IONetwork::Acceptor *this)
{
  *(_DWORD *)this = &Outpop::IONetwork::Acceptor::`vftable';
  Outpop::Utility::Thread_Mutex::~Thread_Mutex((Outpop::IONetwork::Acceptor *)((char *)this + 132));
  std::string::~string((char *)this + 52);
  Outpop::Utility::Timer_Handler::~Timer_Handler(this);
}
