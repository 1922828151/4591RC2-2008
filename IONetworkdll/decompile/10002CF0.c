/*
 * func-name: ?set@INET_Addr@IONetwork@Outpop@@QAEHPBUsockaddr_in@@H@Z
 * func-address: 0x10002cf0
 * callers: none
 * callees: 0x1004f11e
 */

int __thiscall Outpop::IONetwork::INET_Addr::set(
        Outpop::IONetwork::INET_Addr *this,
        const struct sockaddr_in *Src,
        signed int Size)
{
  size_t v4; // edi

  if ( Src->sin_family != 2 )
    return -1;
  v4 = Size;
  if ( Size > 16 )
    v4 = 16;
  memcpy((char *)this + 12, Src, v4);
  *((_DWORD *)this + 2) = v4;
  *((_DWORD *)this + 1) = 2;
  return 0;
}
