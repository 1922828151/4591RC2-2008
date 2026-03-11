/*
 * func-name: ?set@INET_Addr@IONetwork@Outpop@@QAEHGQBDHH@Z
 * func-address: 0x10002880
 * callers: 0x100026d0, 0x10002950, 0x10002a60, 0x10003050, 0x100175c0, 0x1004b7c0, 0x1004b8b0
 * callees: 0x10002800, 0x1004f11e
 */

int __thiscall Outpop::IONetwork::INET_Addr::set(
        Outpop::IONetwork::INET_Addr *this,
        u_short a2,
        char *cp,
        int a4,
        int a5)
{
  const char *v5; // edi
  const char *v8; // eax
  int v9; // edi
  u_long v10; // eax
  struct hostent *v11; // eax
  u_long v12; // eax

  v5 = cp;
  if ( !cp )
    return -1;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 1) = 2;
  *((_WORD *)this + 6) = 2;
  v8 = (const char *)inet_addr(v5);
  if ( !v8 || v8 == (const char *)-1 )
  {
    v11 = gethostbyname(v5);
    if ( !v11 )
      return -1;
    memcpy(&cp, *(const void **)v11->h_addr_list, v11->h_length);
    v9 = a4;
    if ( a4 )
    {
      v12 = ntohl((u_long)cp);
      return Outpop::IONetwork::INET_Addr::set(this, a2, v12, v9, 0);
    }
    v8 = cp;
  }
  else
  {
    v9 = a4;
    if ( a4 )
    {
      v10 = ntohl((u_long)v8);
      return Outpop::IONetwork::INET_Addr::set(this, a2, v10, v9, 0);
    }
  }
  return Outpop::IONetwork::INET_Addr::set(this, a2, (unsigned int)v8, v9, 0);
}
