/*
 * func-name: gethostbyaddr
 * func-address: 0x100303cc
 * callers: 0x10001af0
 * callees: none
 */

// attributes: thunk
struct hostent *__stdcall gethostbyaddr(const char *addr, int len, int type)
{
  return __imp_gethostbyaddr(addr, len, type);
}
