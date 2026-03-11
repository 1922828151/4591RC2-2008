/*
 * func-name: ??0INET_Addr@IONetwork@Outpop@@QAE@QBDI0@Z
 * func-address: 0x10003180
 * callers: none
 * callees: 0x100029d0
 */

Outpop::IONetwork::INET_Addr *__thiscall Outpop::IONetwork::INET_Addr::INET_Addr(
        Outpop::IONetwork::INET_Addr *this,
        char *a2,
        u_long hostlong,
        char *a4)
{
  u_long v5; // eax

  *(_DWORD *)this = &Outpop::IONetwork::Addr::`vftable';
  *((_DWORD *)this + 2) = -1;
  *((_DWORD *)this + 1) = -1;
  *(_DWORD *)this = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  if ( *((_DWORD *)this + 1) == 2 )
    *((_WORD *)this + 6) = 2;
  v5 = htonl(hostlong);
  Outpop::IONetwork::INET_Addr::set(this, a2, v5, a4);
  return this;
}
