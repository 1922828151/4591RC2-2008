/*
 * func-name: strtol
 * func-address: 0x102ca4c8
 * callers: none
 * callees: none
 */

// attributes: thunk
int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  return __imp_strtol(String, EndPtr, Radix);
}
