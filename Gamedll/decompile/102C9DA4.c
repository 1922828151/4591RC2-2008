/*
 * func-name: malloc
 * func-address: 0x102c9da4
 * callers: none
 * callees: none
 */

// attributes: thunk
void *__cdecl malloc(size_t Size)
{
  return __imp_malloc(Size);
}
