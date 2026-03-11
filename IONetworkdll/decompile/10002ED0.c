/*
 * func-name: ??0INET_Addr@IONetwork@Outpop@@QAE@PBUsockaddr_in@@H@Z
 * func-address: 0x10002ed0
 * callers: none
 * callees: 0x1004f11e
 */

Outpop::IONetwork::INET_Addr *__thiscall Outpop::IONetwork::INET_Addr::INET_Addr(
        Outpop::IONetwork::INET_Addr *this,
        const struct sockaddr_in *Src,
        signed int Size)
{
  size_t v4; // edi

  *(_DWORD *)this = &Outpop::IONetwork::Addr::`vftable';
  *((_DWORD *)this + 2) = 16;
  *((_DWORD *)this + 1) = 2;
  *(_DWORD *)this = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  if ( *((_DWORD *)this + 1) == 2 )
    *((_WORD *)this + 6) = 2;
  v4 = Size;
  if ( Src->sin_family == 2 )
  {
    if ( Size > 16 )
      v4 = 16;
    memcpy((char *)this + 12, Src, v4);
    *((_DWORD *)this + 2) = v4;
    *((_DWORD *)this + 1) = 2;
  }
  return this;
}
