/*
 * func-name: gethostbyname
 * func-address: 0x100303d8
 * callers: 0x10001af0
 * callees: none
 */

// attributes: thunk
struct hostent *__stdcall gethostbyname(const char *name)
{
  return __imp_gethostbyname(name);
}
