/*
 * func-name: ?get_local_addr@P2PUdpBuilder@IONetwork@Outpop@@QAEHAAVINET_Addr@23@@Z
 * func-address: 0x1004d210
 * callers: none
 * callees: none
 */

int __thiscall Outpop::IONetwork::P2PUdpBuilder::get_local_addr(SOCKET **this, struct Outpop::IONetwork::INET_Addr *a2)
{
  return Outpop::IONetwork::TSocket::get_local_addr(this[48], a2);
}
