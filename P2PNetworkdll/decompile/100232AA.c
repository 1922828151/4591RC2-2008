/*
 * func-name: __WSAFDIsSet
 * func-address: 0x100232aa
 * callers: 0x10012120, 0x100121b0
 * callees: none
 */

// attributes: thunk
int __stdcall _WSAFDIsSet(SOCKET fd, fd_set *a2)
{
  return __WSAFDIsSet(fd, a2);
}
