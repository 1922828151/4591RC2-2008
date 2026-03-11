/*
 * func-name: ?detach_socket@TSocket@IONetwork@Outpop@@QAEPAXXZ
 * func-address: 0x1000d660
 * callers: none
 * callees: none
 */

int __thiscall Outpop::IONetwork::TSocket::detach_socket(Outpop::IONetwork::TSocket *this)
{
  int result; // eax

  result = *(_DWORD *)this;
  *(_DWORD *)this = -1;
  return result;
}
