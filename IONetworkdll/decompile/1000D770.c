/*
 * func-name: ?close@TSocket@IONetwork@Outpop@@QAEXXZ
 * func-address: 0x1000d770
 * callers: 0x1001c940, 0x100216e0
 * callees: none
 */

int __thiscall Outpop::IONetwork::TSocket::close(SOCKET *this)
{
  int result; // eax

  result = *this;
  if ( *this != -1 )
  {
    result = closesocket(*this);
    *this = -1;
  }
  return result;
}
