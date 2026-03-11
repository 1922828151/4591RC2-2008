/*
 * func-name: ??0Acceptor_Manager@Message@Outpop@@QAE@AAVContext@12@@Z
 * func-address: 0x1000e240
 * callers: 0x100052a0
 * callees: 0x100278e0
 */

Outpop::Message::Acceptor_Manager *__thiscall Outpop::Message::Acceptor_Manager::Acceptor_Manager(
        Outpop::Message::Acceptor_Manager *this,
        struct Outpop::Message::Context *a2)
{
  *(_DWORD *)this = Outpop::IONetwork::Acceptor_Handler::`vftable';
  *(_DWORD *)this = &Outpop::Message::Acceptor_Manager::`vftable';
  sub_100278E0((char *)this + 4, &a2);
  *((_DWORD *)this + 12) = a2;
  Outpop::Utility::Lock::Lock((Outpop::Message::Acceptor_Manager *)((char *)this + 52));
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 11) = 0;
  return this;
}
