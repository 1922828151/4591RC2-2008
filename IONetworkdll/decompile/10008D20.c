/*
 * func-name: ??0Bluid_Pakcet@IONetwork@Outpop@@QAE@PAXAAVINET_Addr@12@V312@@Z
 * func-address: 0x10008d20
 * callers: 0x10017730, 0x10027c50
 * callees: 0x10002e10
 */

_DWORD *__thiscall Outpop::IONetwork::Bluid_Pakcet::Bluid_Pakcet(
        _DWORD *this,
        int a2,
        const struct Outpop::IONetwork::INET_Addr *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  *this = a2;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(this + 1), a3);
  Outpop::IONetwork::INET_Addr::INET_Addr(
    (Outpop::IONetwork::INET_Addr *)(this + 8),
    (const struct Outpop::IONetwork::INET_Addr *)&a4);
  return this;
}
