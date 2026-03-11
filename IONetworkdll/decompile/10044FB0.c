/*
 * func-name: ?set_builder@P2P_Channel@IONetwork@Outpop@@QAEXAAVP2PUdpBuilder@23@@Z
 * func-address: 0x10044fb0
 * callers: none
 * callees: none
 */

struct Outpop::IONetwork::P2PUdpBuilder *__thiscall Outpop::IONetwork::P2P_Channel::set_builder(
        Outpop::IONetwork::P2P_Channel *this,
        struct Outpop::IONetwork::P2PUdpBuilder *a2)
{
  struct Outpop::IONetwork::P2PUdpBuilder *result; // eax

  result = a2;
  *((_DWORD *)this + 45) = a2;
  return result;
}
