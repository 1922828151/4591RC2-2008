/*
 * func-name: memset
 * func-address: 0x1004f124
 * callers: 0x1000d260, 0x1000d2f0, 0x1000d340, 0x1000d390, 0x1000d420, 0x1003ade0, 0x1003dd30, 0x1003eff0, 0x1003ffb0, 0x10040f80, 0x10041850, 0x1004bb00
 * callees: none
 */

// attributes: thunk
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  return __imp_memset(a1, Val, Size);
}
