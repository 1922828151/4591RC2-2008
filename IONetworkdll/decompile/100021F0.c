/*
 * func-name: ??0Addr@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x100021f0
 * callers: none
 * callees: none
 */

Outpop::IONetwork::Addr *__thiscall Outpop::IONetwork::Addr::Addr(
        Outpop::IONetwork::Addr *this,
        const struct Outpop::IONetwork::Addr *a2)
{
  Outpop::IONetwork::Addr *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::IONetwork::Addr::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  return result;
}
