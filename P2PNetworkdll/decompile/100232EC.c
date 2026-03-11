/*
 * func-name: inet_addr
 * func-address: 0x100232ec
 * callers: 0x10012640
 * callees: none
 */

// attributes: thunk
unsigned int __stdcall inet_addr(const char *cp)
{
  return __imp_inet_addr(cp);
}
