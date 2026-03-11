/*
 * func-name: ??0Dgram_Acceptor@IONetwork@Outpop@@QAE@PAVAcceptor_Handler@12@PAVWIN32_IoCompletionPort@12@@Z
 * func-address: 0x100261f0
 * callers: none
 * callees: 0x10002600, 0x100049d0, 0x1002ba30
 */

Outpop::IONetwork::Dgram_Acceptor *__thiscall Outpop::IONetwork::Dgram_Acceptor::Dgram_Acceptor(
        Outpop::IONetwork::Dgram_Acceptor *this,
        struct Outpop::IONetwork::Acceptor_Handler *a2,
        struct Outpop::IONetwork::WIN32_IoCompletionPort *a3)
{
  char v5; // [esp+Fh] [ebp-15h] BYREF
  Outpop::IONetwork::Dgram_Acceptor *v6; // [esp+10h] [ebp-14h]
  char *v7; // [esp+14h] [ebp-10h]
  int v8; // [esp+20h] [ebp-4h]

  v6 = this;
  Outpop::IONetwork::Acceptor::Acceptor(this);
  v8 = 0;
  *(_DWORD *)this = &Outpop::IONetwork::Dgram_Acceptor::`vftable';
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 156));
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 184));
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 208));
  *((_DWORD *)this + 58) = a2;
  *((_DWORD *)this + 59) = 0;
  v7 = (char *)this + 248;
  sub_1002BA30((char *)this + 248, &a2);
  a2 = (Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 288);
  sub_1002BA30((char *)this + 288, &a3);
  LOBYTE(v8) = 7;
  a2 = (Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 328);
  sub_1002BA30((char *)this + 328, &v5);
  *((_DWORD *)this + 31) = a3;
  *((_DWORD *)this + 60) = 0;
  return this;
}
