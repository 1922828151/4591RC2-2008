/*
 * func-name: recv
 * func-address: 0x100232b0
 * callers: 0x10012090
 * callees: none
 */

// attributes: thunk
int __stdcall recv(SOCKET s, char *buf, int len, int flags)
{
  return __imp_recv(s, buf, len, flags);
}
