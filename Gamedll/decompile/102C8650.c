/*
 * func-name: strstr
 * func-address: 0x102c8650
 * callers: none
 * callees: none
 */

// attributes: thunk
char *__cdecl strstr(const char *Str, const char *SubStr)
{
  return __imp_strstr(Str, SubStr);
}
