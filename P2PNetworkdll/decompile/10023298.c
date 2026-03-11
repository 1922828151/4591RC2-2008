/*
 * func-name: getsockname
 * func-address: 0x10023298
 * callers: 0x10011f30, 0x10012240
 * callees: none
 */

// attributes: thunk
int __stdcall getsockname(SOCKET s, struct sockaddr *name, int *namelen)
{
  return __imp_getsockname(s, name, namelen);
}
