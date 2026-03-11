/*
 * func-name: connect
 * func-address: 0x1002328c
 * callers: 0x10012390
 * callees: none
 */

// attributes: thunk
int __stdcall connect(SOCKET s, const struct sockaddr *name, int namelen)
{
  return __imp_connect(s, name, namelen);
}
