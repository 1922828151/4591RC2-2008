/*
 * func-name: ??1TSocket@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x1000d6e0
 * callers: 0x1000e250, 0x1000e490, 0x1000e720, 0x100192b0, 0x100195e0, 0x10019db0, 0x10019f20, 0x1001f2c0, 0x1001fde0, 0x1002ab40, 0x1002acb0
 * callees: none
 */

int __thiscall Outpop::IONetwork::TSocket::~TSocket(SOCKET *this)
{
  int result; // eax

  result = *this;
  if ( *this != -1 )
    return closesocket(*this);
  return result;
}
