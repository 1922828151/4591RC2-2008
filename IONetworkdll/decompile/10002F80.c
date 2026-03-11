/*
 * func-name: ??0INET_Addr@IONetwork@Outpop@@QAE@GI@Z
 * func-address: 0x10002f80
 * callers: none
 * callees: none
 */

Outpop::IONetwork::INET_Addr *__thiscall Outpop::IONetwork::INET_Addr::INET_Addr(
        Outpop::IONetwork::INET_Addr *this,
        u_short hostshort,
        unsigned int a3)
{
  *(_DWORD *)this = &Outpop::IONetwork::Addr::`vftable';
  *((_DWORD *)this + 2) = 4;
  *((_DWORD *)this + 1) = 2;
  *(_DWORD *)this = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  if ( *((_DWORD *)this + 1) == 2 )
  {
    *((_WORD *)this + 6) = 2;
    *((_DWORD *)this + 1) = 2;
    *((_WORD *)this + 6) = 2;
    *((_DWORD *)this + 2) = 16;
    *((_DWORD *)this + 4) = (((a3 << 16) | a3 & 0xFF00) << 8) | ((HIWORD(a3) | a3 & 0xFF0000) >> 8);
  }
  *((_WORD *)this + 7) = htons(hostshort);
  return this;
}
