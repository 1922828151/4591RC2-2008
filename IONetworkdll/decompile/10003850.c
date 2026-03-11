/*
 * func-name: ?get_ip_address@INET_Addr@IONetwork@Outpop@@QAEIXZ
 * func-address: 0x10003850
 * callers: 0x10027c50
 * callees: none
 */

u_long __thiscall Outpop::IONetwork::INET_Addr::get_ip_address(Outpop::IONetwork::INET_Addr *this)
{
  return ntohl(*((_DWORD *)this + 4));
}
