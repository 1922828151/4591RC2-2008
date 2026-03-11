/*
 * func-name: ?get_local_addr@TSocket@IONetwork@Outpop@@QAEHAAVINET_Addr@23@@Z
 * func-address: 0x1000d800
 * callers: 0x1004d210
 * callees: 0x1004e861, 0x1004f11e
 */

int __thiscall Outpop::IONetwork::TSocket::get_local_addr(SOCKET *this, struct Outpop::IONetwork::INET_Addr *a2)
{
  size_t v3; // esi
  SOCKET v4; // [esp-Ch] [ebp-28h]
  int namelen; // [esp+4h] [ebp-18h] BYREF
  sockaddr name; // [esp+8h] [ebp-14h] BYREF

  v4 = *this;
  namelen = 16;
  if ( getsockname(v4, &name, &namelen) < 0 )
    return -1;
  v3 = namelen;
  if ( name.sa_family == 2 )
  {
    if ( namelen > 16 )
      v3 = 16;
    memcpy((char *)a2 + 12, &name, v3);
    *((_DWORD *)a2 + 2) = v3;
    *((_DWORD *)a2 + 1) = 2;
  }
  return 0;
}
