/*
 * func-name: ?get_host_addr@INET_Addr@IONetwork@Outpop@@QAEPBDXZ
 * func-address: 0x100037d0
 * callers: 0x1001baf0, 0x1001dec0, 0x10027c50, 0x10028900, 0x10038060, 0x1004c0d0
 * callees: none
 */

char *__thiscall Outpop::IONetwork::INET_Addr::get_host_addr(struct in_addr *this)
{
  return inet_ntoa(this[4]);
}
