/*
 * func-name: ?set_p2p_accept_handler@P2PUdpBuilder@IONetwork@Outpop@@QAEXPAVP2P_Acceptor_Handler@23@@Z
 * func-address: 0x100426d0
 * callers: none
 * callees: none
 */

struct Outpop::IONetwork::P2P_Acceptor_Handler *__thiscall Outpop::IONetwork::P2PUdpBuilder::set_p2p_accept_handler(
        Outpop::IONetwork::P2PUdpBuilder *this,
        struct Outpop::IONetwork::P2P_Acceptor_Handler *a2)
{
  struct Outpop::IONetwork::P2P_Acceptor_Handler *result; // eax

  result = a2;
  *((_DWORD *)this + 28) = a2;
  return result;
}
