/*
 * func-name: ??0Addr@IONetwork@Outpop@@QAE@HH@Z
 * func-address: 0x10002110
 * callers: none
 * callees: none
 */

Outpop::IONetwork::Addr *__thiscall Outpop::IONetwork::Addr::Addr(Outpop::IONetwork::Addr *this, int a2, int a3)
{
  Outpop::IONetwork::Addr *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::IONetwork::Addr::`vftable';
  *((_DWORD *)this + 2) = a3;
  *((_DWORD *)this + 1) = a2;
  return result;
}
