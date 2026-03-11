/*
 * func-name: inet_addr
 * func-address: 0x100303d2
 * callers: 0x10001af0
 * callees: none
 */

// attributes: thunk
unsigned int __stdcall inet_addr(const char *cp)
{
  return __imp_inet_addr(cp);
}
