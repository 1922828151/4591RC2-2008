/*
 * func-name: ?get_port_number@INET_Addr@IONetwork@Outpop@@QAEGXZ
 * func-address: 0x100022d0
 * callers: none
 * callees: none
 */

u_short __thiscall Outpop::IONetwork::INET_Addr::get_port_number(Outpop::IONetwork::INET_Addr *this)
{
  return ntohs(*((_WORD *)this + 7));
}
