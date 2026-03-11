/*
 * func-name: ??0INET_Addr@IONetwork@Outpop@@QAE@QBD@Z
 * func-address: 0x10002d80
 * callers: none
 * callees: none
 */

Outpop::IONetwork::INET_Addr *__thiscall Outpop::IONetwork::INET_Addr::INET_Addr(
        Outpop::IONetwork::INET_Addr *this,
        const char *a2)
{
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
  (*(void (__thiscall **)(Outpop::IONetwork::INET_Addr *, const char *))(*(_DWORD *)this + 28))(this, a2);
  return this;
}
