/*
 * func-name: ??0Dgram_Acceptor@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10025eb0
 * callers: none
 * callees: 0x10002e10, 0x10004b00, 0x1002a450
 */

Outpop::IONetwork::Dgram_Acceptor *__thiscall Outpop::IONetwork::Dgram_Acceptor::Dgram_Acceptor(
        Outpop::IONetwork::Dgram_Acceptor *this,
        const struct Outpop::IONetwork::Dgram_Acceptor *a2)
{
  Outpop::IONetwork::Acceptor::Acceptor(this, a2);
  *(_DWORD *)this = &Outpop::IONetwork::Dgram_Acceptor::`vftable';
  Outpop::IONetwork::INET_Addr::INET_Addr(
    (Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 156),
    (const struct Outpop::IONetwork::Dgram_Acceptor *)((char *)a2 + 156));
  *((_DWORD *)this + 46) = *((_DWORD *)a2 + 46);
  *((_DWORD *)this + 47) = *((_DWORD *)a2 + 47);
  *((_DWORD *)this + 48) = *((_DWORD *)a2 + 48);
  *((_DWORD *)this + 49) = *((_DWORD *)a2 + 49);
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 50);
  *((_DWORD *)this + 51) = *((_DWORD *)a2 + 51);
  *((_DWORD *)this + 52) = *((_DWORD *)a2 + 52);
  *((_DWORD *)this + 53) = *((_DWORD *)a2 + 53);
  *((_DWORD *)this + 54) = *((_DWORD *)a2 + 54);
  *((_DWORD *)this + 55) = *((_DWORD *)a2 + 55);
  *((_DWORD *)this + 56) = *((_DWORD *)a2 + 56);
  *((_DWORD *)this + 57) = *((_DWORD *)a2 + 57);
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 58);
  *((_DWORD *)this + 59) = *((_DWORD *)a2 + 59);
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 60);
  sub_1002A450((char *)this + 248);
  sub_1002A450((char *)this + 288);
  sub_1002A450((char *)this + 328);
  return this;
}
