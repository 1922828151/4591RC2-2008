/*
 * func-name: ?synch_connet@TSocket@IONetwork@Outpop@@QAEHAAVINET_Addr@23@@Z
 * func-address: 0x1000d750
 * callers: none
 * callees: none
 */

int __thiscall Outpop::IONetwork::TSocket::synch_connet(SOCKET *this, struct Outpop::IONetwork::INET_Addr *a2)
{
  const struct sockaddr *v3; // eax
  int v5; // [esp-4h] [ebp-8h]

  v5 = *((_DWORD *)a2 + 2);
  v3 = (const struct sockaddr *)(*(int (__thiscall **)(struct Outpop::IONetwork::INET_Addr *))(*(_DWORD *)a2 + 16))(a2);
  return connect(*this, v3, v5);
}
