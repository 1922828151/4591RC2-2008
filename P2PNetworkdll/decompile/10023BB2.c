/*
 * func-name: memcpy
 * func-address: 0x10023bb2
 * callers: 0x10011e40, 0x10011f30, 0x100125e0, 0x1001f2a0, 0x1001f3b0, 0x1001f4a0, 0x10020130, 0x100207f0, 0x10023100
 * callees: none
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}
