/*
 * func-name: ?recv_n@TSocket@IONetwork@Outpop@@QAEHPADHH@Z
 * func-address: 0x1000d790
 * callers: none
 * callees: none
 */

int __thiscall Outpop::IONetwork::TSocket::recv_n(SOCKET *this, char *a2, int a3, int flags)
{
  int v5; // esi
  int v6; // eax

  if ( a3 < 0 )
    return -2;
  v5 = 0;
  if ( a3 <= 0 )
    return v5;
  while ( 1 )
  {
    v6 = recv(*this, &a2[v5], a3 - v5, flags);
    if ( v6 == -1 )
      break;
    v5 += v6;
    if ( v5 >= a3 )
      return v5;
  }
  return -1;
}
