/*
 * func-name: ?add_to_string@INET_Addr@IONetwork@Outpop@@UAEHQADIH@Z
 * func-address: 0x10002420
 * callers: none
 * callees: 0x100035c0
 */

int __thiscall Outpop::IONetwork::INET_Addr::add_to_string(
        struct in_addr *this,
        char *const Buffer,
        unsigned int a3,
        int a4)
{
  char *host_name; // eax
  char *v7; // eax
  const char *v8; // edi
  u_short v9; // ax

  if ( a4 )
    host_name = inet_ntoa(this[4]);
  else
    host_name = (char *)Outpop::IONetwork::INET_Addr::get_host_name((Outpop::IONetwork::INET_Addr *)this);
  if ( a3 < strlen(host_name) + 7 )
    return -1;
  if ( a4 )
    v7 = inet_ntoa(this[4]);
  else
    v7 = (char *)Outpop::IONetwork::INET_Addr::get_host_name((Outpop::IONetwork::INET_Addr *)this);
  v8 = v7;
  v9 = ntohs(this[3].S_un.S_un_w.s_w2);
  sprintf(Buffer, "%s:%d", v8, v9);
  return 0;
}
