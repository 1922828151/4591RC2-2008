/*
 * func-name: ??0Stream_Acceptor@IONetwork@Outpop@@QAE@PAVAcceptor_Handler@12@PAVWIN32_IoCompletionPort@12@@Z
 * func-address: 0x10016bf0
 * callers: none
 * callees: 0x10002600, 0x100049d0, 0x1002ba30
 */

Outpop::IONetwork::Stream_Acceptor *__thiscall Outpop::IONetwork::Stream_Acceptor::Stream_Acceptor(
        Outpop::IONetwork::Stream_Acceptor *this,
        struct Outpop::IONetwork::Acceptor_Handler *a2,
        struct Outpop::IONetwork::WIN32_IoCompletionPort *a3)
{
  Outpop::IONetwork::Acceptor::Acceptor(this);
  *(_DWORD *)this = &Outpop::IONetwork::Stream_Acceptor::`vftable';
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::Stream_Acceptor *)((char *)this + 156));
  *((_DWORD *)this + 46) = a2;
  sub_1002BA30((char *)this + 192, &a2);
  *((_DWORD *)this + 31) = a3;
  return this;
}
