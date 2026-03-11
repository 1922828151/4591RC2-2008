/*
 * func-name: sub_10009B20
 * func-address: 0x10009b20
 * callers: 0x10008fa0
 * callees: none
 */

int __thiscall sub_10009B20(int this, int a2)
{
  std::string::string(a2, this);
  Outpop::IONetwork::INET_Addr::INET_Addr(
    (Outpop::IONetwork::INET_Addr *)(a2 + 28),
    (const struct Outpop::IONetwork::INET_Addr *)(this + 28));
  return a2;
}
