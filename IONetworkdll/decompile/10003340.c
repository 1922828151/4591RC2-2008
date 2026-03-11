/*
 * func-name: ??0INET_Addr@IONetwork@Outpop@@QAE@QB_W00@Z
 * func-address: 0x10003340
 * callers: none
 * callees: 0x10002af0
 */

Outpop::IONetwork::INET_Addr *__thiscall Outpop::IONetwork::INET_Addr::INET_Addr(
        Outpop::IONetwork::INET_Addr *this,
        const wchar_t *a2,
        wchar_t *a3,
        const wchar_t *a4)
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
  Outpop::IONetwork::INET_Addr::set(this, a2, a3, a4);
  return this;
}
