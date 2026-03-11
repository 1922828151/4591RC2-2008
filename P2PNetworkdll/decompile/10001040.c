/*
 * func-name: ?set_detector_server_address@P2P_Context@P2P@Outpop@@QAEXABVINET_Addr@IONetwork@3@@Z
 * func-address: 0x10001040
 * callers: none
 * callees: none
 */

void __thiscall Outpop::P2P::P2P_Context::set_detector_server_address(
        Outpop::P2P::P2P_Context *this,
        const struct Outpop::IONetwork::INET_Addr *a2)
{
  Outpop::IONetwork::INET_Addr::operator=((char *)this + 48, a2);
}
