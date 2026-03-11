/*
 * func-name: strtod
 * func-address: 0x102ca4d4
 * callers: none
 * callees: none
 */

// attributes: thunk
double __cdecl strtod(const char *String, char **EndPtr)
{
  return __imp_strtod(String, EndPtr);
}
