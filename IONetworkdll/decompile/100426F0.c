/*
 * func-name: ?set_size@Addr@IONetwork@Outpop@@QAEXH@Z
 * func-address: 0x100426f0
 * callers: none
 * callees: none
 */

int __thiscall Outpop::IONetwork::Addr::set_size(Outpop::IONetwork::Addr *this, int a2)
{
  int result; // eax

  result = a2;
  *((_DWORD *)this + 2) = a2;
  return result;
}
