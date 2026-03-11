/*
 * func-name: gethostbyname
 * func-address: 0x100232a4
 * callers: 0x10011e40, 0x10011f30, 0x100125e0
 * callees: none
 */

// attributes: thunk
struct hostent *__stdcall gethostbyname(const char *name)
{
  return __imp_gethostbyname(name);
}
