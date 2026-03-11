/*
 * func-name: _itow
 * func-address: 0x102ca16e
 * callers: none
 * callees: none
 */

// attributes: thunk
wchar_t *__cdecl itow(int Value, wchar_t *Buffer, int Radix)
{
  return _itow(Value, Buffer, Radix);
}
