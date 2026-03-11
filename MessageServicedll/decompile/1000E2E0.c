/*
 * func-name: ??1Acceptor_Manager@Message@Outpop@@UAE@XZ
 * func-address: 0x1000e2e0
 * callers: 0x10003a90
 * callees: 0x10006f70, 0x10008810
 */

void __thiscall Outpop::Message::Acceptor_Manager::~Acceptor_Manager(Outpop::Message::Acceptor_Manager *this)
{
  *(_DWORD *)this = &Outpop::Message::Acceptor_Manager::`vftable';
  sub_10008810((int)this + 76);
  Outpop::Utility::Lock::~Lock((Outpop::Message::Acceptor_Manager *)((char *)this + 52));
  sub_10006F70((int)this + 4);
  *(_DWORD *)this = Outpop::IONetwork::Acceptor_Handler::`vftable';
}
