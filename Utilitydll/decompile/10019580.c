/*
 * func-name: memcpy
 * func-address: 0x10019580
 * callers: 0x1000eb00, 0x1000eb40, 0x1000ef90, 0x1000f090, 0x1000f2f0, 0x1000f830, 0x10016fc0
 * callees: none
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}
