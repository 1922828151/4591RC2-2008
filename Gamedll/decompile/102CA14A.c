/*
 * func-name: _vswprintf
 * func-address: 0x102ca14a
 * callers: none
 * callees: none
 */

// attributes: thunk
int __cdecl vswprintf(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, va_list ArgList)
{
  return _vswprintf(Buffer, BufferCount, Format, ArgList);
}
