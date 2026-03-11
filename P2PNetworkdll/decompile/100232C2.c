/*
 * func-name: select
 * func-address: 0x100232c2
 * callers: 0x10012120, 0x100121b0
 * callees: none
 */

// attributes: thunk
int __stdcall select(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, const struct timeval *timeout)
{
  return __imp_select(nfds, readfds, writefds, exceptfds, timeout);
}
