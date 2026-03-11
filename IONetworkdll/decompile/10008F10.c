/*
 * func-name: ??0Bluid_Pakcet@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10008f10
 * callers: none
 * callees: 0x10002e10
 */

Outpop::IONetwork::Bluid_Pakcet *__thiscall Outpop::IONetwork::Bluid_Pakcet::Bluid_Pakcet(
        Outpop::IONetwork::Bluid_Pakcet *this,
        const struct Outpop::IONetwork::Bluid_Pakcet *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  Outpop::IONetwork::INET_Addr::INET_Addr(
    (Outpop::IONetwork::Bluid_Pakcet *)((char *)this + 4),
    (const struct Outpop::IONetwork::Bluid_Pakcet *)((char *)a2 + 4));
  Outpop::IONetwork::INET_Addr::INET_Addr(
    (Outpop::IONetwork::Bluid_Pakcet *)((char *)this + 32),
    (const struct Outpop::IONetwork::Bluid_Pakcet *)((char *)a2 + 32));
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  return this;
}
