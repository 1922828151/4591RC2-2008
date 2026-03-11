/*
 * func-name: ??0INET_Addr@IONetwork@Outpop@@QAE@GQBDH@Z
 * func-address: 0x10003050
 * callers: none
 * callees: 0x10002880
 */

Outpop::IONetwork::INET_Addr *__thiscall Outpop::IONetwork::INET_Addr::INET_Addr(
        Outpop::IONetwork::INET_Addr *this,
        u_short a2,
        char *a3,
        int a4)
{
  *(_DWORD *)this = &Outpop::IONetwork::Addr::`vftable';
  *((_DWORD *)this + 2) = 16;
  *((_DWORD *)this + 1) = 2;
  *(_DWORD *)this = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  Outpop::IONetwork::INET_Addr::set(this, a2, a3, 1, a4);
  return this;
}
