/*
 * func-name: bind
 * func-address: 0x100232e6
 * callers: 0x10012640
 * callees: none
 */

// attributes: thunk
int __stdcall bind(SOCKET s, const struct sockaddr *name, int namelen)
{
  return __imp_bind(s, name, namelen);
}
