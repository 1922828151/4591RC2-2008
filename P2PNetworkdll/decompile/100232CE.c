/*
 * func-name: inet_ntoa
 * func-address: 0x100232ce
 * callers: 0x10012240
 * callees: none
 */

// attributes: thunk
char *__stdcall inet_ntoa(struct in_addr in)
{
  return __imp_inet_ntoa(in);
}
