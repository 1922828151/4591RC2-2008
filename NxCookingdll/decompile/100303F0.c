/*
 * func-name: send
 * func-address: 0x100303f0
 * callers: 0x10001c50
 * callees: none
 */

// attributes: thunk
int __stdcall send(SOCKET s, const char *buf, int len, int flags)
{
  return __imp_send(s, buf, len, flags);
}
