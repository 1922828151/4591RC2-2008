/*
 * func-name: sub_100075D0
 * func-address: 0x100075d0
 * callers: 0x100042e0, 0x10005580
 * callees: none
 */

int __stdcall sub_100075D0(int a1, int a2, const struct Outpop::IONetwork::INET_Addr *a3)
{
  std::string::string(a1, a2);
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 28), a3);
  return a1;
}
