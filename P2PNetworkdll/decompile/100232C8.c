/*
 * func-name: recvfrom
 * func-address: 0x100232c8
 * callers: 0x10011f30
 * callees: none
 */

// attributes: thunk
int __stdcall recvfrom(SOCKET s, char *buf, int len, int flags, struct sockaddr *from, int *fromlen)
{
  return __imp_recvfrom(s, buf, len, flags, from, fromlen);
}
