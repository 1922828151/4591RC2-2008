/*
 * func-name: ?set_type@Addr@IONetwork@Outpop@@QAEXH@Z
 * func-address: 0x10002140
 * callers: none
 * callees: none
 */

int __thiscall Outpop::IONetwork::Addr::set_type(Outpop::IONetwork::Addr *this, int a2)
{
  int result; // eax

  result = a2;
  *((_DWORD *)this + 1) = a2;
  return result;
}
