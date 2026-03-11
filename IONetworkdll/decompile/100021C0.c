/*
 * func-name: ?base_set@Addr@IONetwork@Outpop@@QAEXHH@Z
 * func-address: 0x100021c0
 * callers: none
 * callees: none
 */

int __thiscall Outpop::IONetwork::Addr::base_set(Outpop::IONetwork::Addr *this, int a2, int a3)
{
  int result; // eax

  result = a3;
  *((_DWORD *)this + 2) = a3;
  *((_DWORD *)this + 1) = a2;
  return result;
}
