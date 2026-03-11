/*
 * func-name: ?set_SOCKET_opt@TSocket@IONetwork@Outpop@@QAEHHHPBDH@Z
 * func-address: 0x1000d5f0
 * callers: none
 * callees: none
 */

int __thiscall Outpop::IONetwork::TSocket::set_SOCKET_opt(
        SOCKET *this,
        int level,
        int optname,
        char *optval,
        int optlen)
{
  return setsockopt(*this, level, optname, optval, optlen);
}
