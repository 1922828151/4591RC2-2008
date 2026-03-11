/*
 * func-name: ?get_SOCKET_opt@TSocket@IONetwork@Outpop@@QAEHHHPADPAH@Z
 * func-address: 0x1000d610
 * callers: none
 * callees: none
 */

int __thiscall Outpop::IONetwork::TSocket::get_SOCKET_opt(
        SOCKET *this,
        int level,
        int optname,
        char *optval,
        int *optlen)
{
  return getsockopt(*this, level, optname, optval, optlen);
}
