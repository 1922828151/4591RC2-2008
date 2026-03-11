/*
 * func-name: ?get_host_name@INET_Addr@IONetwork@Outpop@@QAEPBDXZ
 * func-address: 0x100035c0
 * callers: 0x10002420
 * callees: 0x10003640
 */

int *__thiscall Outpop::IONetwork::INET_Addr::get_host_name(Outpop::IONetwork::INET_Addr *this)
{
  int host_name_i; // eax

  host_name_i = Outpop::IONetwork::INET_Addr::get_host_name_i(this, (LPSTR)&dword_1007DDA8, 0x101u);
  if ( host_name_i < 0 )
  {
    if ( host_name_i == -2 )
    {
LABEL_5:
      strcpy((char *)&dword_1007DDA8, "<unknow>");
      return &dword_1007DDA8;
    }
    LOBYTE(dword_1007DDA8) = 0;
  }
  if ( host_name_i == -1 )
    goto LABEL_5;
  return &dword_1007DDA8;
}
