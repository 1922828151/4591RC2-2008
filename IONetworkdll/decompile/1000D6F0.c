/*
 * func-name: ?bind_addr@TSocket@IONetwork@Outpop@@QAEHAAVINET_Addr@23@@Z
 * func-address: 0x1000d6f0
 * callers: 0x10026420, 0x1004ab10
 * callees: none
 */

int __thiscall Outpop::IONetwork::TSocket::bind_addr(SOCKET *this, struct Outpop::IONetwork::INET_Addr *a2)
{
  const struct sockaddr *v3; // eax

  v3 = (const struct sockaddr *)(*(int (__thiscall **)(struct Outpop::IONetwork::INET_Addr *))(*(_DWORD *)a2 + 16))(a2);
  return bind(*this, v3, 16);
}
