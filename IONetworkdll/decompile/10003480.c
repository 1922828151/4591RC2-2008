/*
 * func-name: ?get_host_name@INET_Addr@IONetwork@Outpop@@QAEHQADI@Z
 * func-address: 0x10003480
 * callers: none
 * callees: 0x10003640
 */

int __thiscall Outpop::IONetwork::INET_Addr::get_host_name(
        Outpop::IONetwork::INET_Addr *this,
        char *const a2,
        unsigned int a3)
{
  int result; // eax

  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      *a2 = 0;
    return -1;
  }
  else
  {
    result = Outpop::IONetwork::INET_Addr::get_host_name_i(this, a2, a3);
    if ( result < 0 )
    {
      if ( result == -2 )
        return -1;
      else
        *a2 = 0;
    }
  }
  return result;
}
