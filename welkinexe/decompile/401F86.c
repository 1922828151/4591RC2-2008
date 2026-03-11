/*
 * func-name: SetUnhandledExceptionFilter
 * func-address: 0x401f86
 * callers: none
 * callees: none
 */

// attributes: thunk
LPTOP_LEVEL_EXCEPTION_FILTER __stdcall SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)
{
  return __imp_SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
}
