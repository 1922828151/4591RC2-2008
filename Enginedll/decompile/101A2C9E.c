/*
 * func-name: _vsnwprintf
 * func-address: 0x101a2c9e
 * callers: 0x1017ea69
 * callees: none
 */

// attributes: thunk
int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return _vsnwprintf(Buffer, BufferCount, Format, Args);
}
