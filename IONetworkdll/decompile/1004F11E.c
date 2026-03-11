/*
 * func-name: memcpy
 * func-address: 0x1004f11e
 * callers: 0x10002680, 0x10002880, 0x10002cf0, 0x10002e10, 0x10002ed0, 0x10003640, 0x100036f0, 0x10009580, 0x1000d260, 0x1000d2f0, 0x1000d340, 0x1000d390, 0x1000d420, 0x1000d800, 0x10013cb0, 0x10018650, 0x1001f0d0, 0x10023520, 0x1003eff0, 0x10040f80
 * callees: none
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}
