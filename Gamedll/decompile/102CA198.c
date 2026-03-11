/*
 * func-name: vsprintf
 * func-address: 0x102ca198
 * callers: none
 * callees: none
 */

// attributes: thunk
int __cdecl vsprintf(char *const Buffer, const char *const Format, va_list ArgList)
{
  return __imp_vsprintf(Buffer, Format, ArgList);
}
