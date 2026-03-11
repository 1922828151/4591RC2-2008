/*
 * func-name: UnhandledExceptionFilter
 * func-address: 0x401f80
 * callers: none
 * callees: none
 */

// attributes: thunk
LONG __stdcall UnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  return __imp_UnhandledExceptionFilter(ExceptionInfo);
}
