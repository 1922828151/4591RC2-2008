/*
 * func-name: ?hash@INET_Addr@IONetwork@Outpop@@UAEKXZ
 * func-address: 0x10003860
 * callers: none
 * callees: none
 */

u_long __thiscall Outpop::IONetwork::INET_Addr::hash(Outpop::IONetwork::INET_Addr *this)
{
  u_long v2; // edi

  v2 = ntohl(*((_DWORD *)this + 4));
  return v2 + ntohs(*((_WORD *)this + 7));
}
