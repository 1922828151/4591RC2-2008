/*
 * func-name: sendto
 * func-address: 0x100232b6
 * callers: 0x10011e40
 * callees: none
 */

// attributes: thunk
int __stdcall sendto(SOCKET s, const char *buf, int len, int flags, const struct sockaddr *to, int tolen)
{
  return __imp_sendto(s, buf, len, flags, to, tolen);
}
