/*
 * func-name: _itoa
 * func-address: 0x102ca992
 * callers: none
 * callees: none
 */

// attributes: thunk
char *__cdecl itoa(int Value, char *Buffer, int Radix)
{
  return _itoa(Value, Buffer, Radix);
}
