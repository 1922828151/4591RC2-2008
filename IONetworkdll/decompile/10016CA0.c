/*
 * func-name: ??0Stream_Acceptor@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10016ca0
 * callers: none
 * callees: 0x10002e10, 0x10004b00, 0x1002a450
 */

Outpop::IONetwork::Stream_Acceptor *__thiscall Outpop::IONetwork::Stream_Acceptor::Stream_Acceptor(
        Outpop::IONetwork::Stream_Acceptor *this,
        const struct Outpop::IONetwork::Stream_Acceptor *a2)
{
  Outpop::IONetwork::Acceptor::Acceptor(this, a2);
  *(_DWORD *)this = &Outpop::IONetwork::Stream_Acceptor::`vftable';
  Outpop::IONetwork::INET_Addr::INET_Addr(
    (Outpop::IONetwork::Stream_Acceptor *)((char *)this + 156),
    (const struct Outpop::IONetwork::Stream_Acceptor *)((char *)a2 + 156));
  *((_DWORD *)this + 46) = *((_DWORD *)a2 + 46);
  *((_DWORD *)this + 47) = *((_DWORD *)a2 + 47);
  sub_1002A450((char *)this + 192);
  return this;
}
