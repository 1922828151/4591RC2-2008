/*
 * func-name: ioctlsocket
 * func-address: 0x100303b4
 * callers: 0x10001af0
 * callees: none
 */

// attributes: thunk
int __stdcall ioctlsocket(SOCKET s, int cmd, u_long *argp)
{
  return __imp_ioctlsocket(s, cmd, argp);
}
