/*
 * func-name: connect
 * func-address: 0x100303c0
 * callers: 0x10001af0
 * callees: none
 */

// attributes: thunk
int __stdcall connect(SOCKET s, const struct sockaddr *name, int namelen)
{
  return __imp_connect(s, name, namelen);
}
