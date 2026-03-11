/*
 * func-name: sub_100046C0
 * func-address: 0x100046c0
 * callers: 0x100042e0, 0x10005580, 0x10008060
 * callees: none
 */

int __stdcall sub_100046C0(int a1)
{
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 28));
  return std::string::~string(a1);
}
