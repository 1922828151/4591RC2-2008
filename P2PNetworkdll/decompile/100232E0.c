/*
 * func-name: ioctlsocket
 * func-address: 0x100232e0
 * callers: 0x100122f0, 0x10012390
 * callees: none
 */

// attributes: thunk
int __stdcall ioctlsocket(SOCKET s, int cmd, u_long *argp)
{
  return __imp_ioctlsocket(s, cmd, argp);
}
