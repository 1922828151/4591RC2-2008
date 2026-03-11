/*
 * func-name: ??0Acceptor_Manager@Message@Outpop@@QAE@ABV012@@Z
 * func-address: 0x100039d0
 * callers: none
 * callees: 0x10006f00, 0x10006ff0
 */

Outpop::Message::Acceptor_Manager *__thiscall Outpop::Message::Acceptor_Manager::Acceptor_Manager(
        Outpop::Message::Acceptor_Manager *this,
        const struct Outpop::Message::Acceptor_Manager *a2)
{
  *(_DWORD *)this = Outpop::IONetwork::Acceptor_Handler::`vftable';
  *(_DWORD *)this = &Outpop::Message::Acceptor_Manager::`vftable';
  sub_10006F00((char *)this + 4);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  sub_10006FF0((char *)this + 76);
  return this;
}
