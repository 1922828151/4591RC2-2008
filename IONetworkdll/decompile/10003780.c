/*
 * func-name: ?get_host_addr@INET_Addr@IONetwork@Outpop@@QAEPBDPADH@Z
 * func-address: 0x10003780
 * callers: none
 * callees: none
 */

char *__thiscall Outpop::IONetwork::INET_Addr::get_host_addr(struct in_addr *this, char *Destination, int a3)
{
  char *v3; // eax

  v3 = inet_ntoa(this[4]);
  if ( !a3 )
    return Destination;
  if ( Destination == v3 )
  {
    Destination[a3 - 1] = 0;
    return Destination;
  }
  else
  {
    *Destination = 0;
    if ( v3 )
      strncat(Destination, v3, a3 - 1);
    return Destination;
  }
}
