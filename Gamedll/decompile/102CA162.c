/*
 * func-name: _vswprintf_c_l
 * func-address: 0x102ca162
 * callers: none
 * callees: none
 */

// attributes: thunk
int __cdecl vswprintf_c_l(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const wchar_t *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  return _vswprintf_c_l(Buffer, BufferCount, Format, Locale, ArgList);
}
