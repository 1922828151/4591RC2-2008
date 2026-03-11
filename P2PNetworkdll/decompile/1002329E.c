/*
 * func-name: send
 * func-address: 0x1002329e
 * callers: 0x10012040
 * callees: none
 */

// attributes: thunk
int __stdcall send(SOCKET s, const char *buf, int len, int flags)
{
  return __imp_send(s, buf, len, flags);
}
