/*
 * func-name: ?set_port_number@INET_Addr@IONetwork@Outpop@@QAEXGH@Z
 * func-address: 0x10003610
 * callers: none
 * callees: none
 */

void __thiscall Outpop::IONetwork::INET_Addr::set_port_number(
        Outpop::IONetwork::INET_Addr *this,
        u_short hostshort,
        int a3)
{
  if ( a3 )
    *((_WORD *)this + 7) = htons(hostshort);
  else
    *((_WORD *)this + 7) = hostshort;
}
