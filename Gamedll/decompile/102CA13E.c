/*
 * func-name: memcpy
 * func-address: 0x102ca13e
 * callers: 0x100f5520, 0x100f7db0, 0x10137940, 0x101a4100, 0x101a5750, 0x101a81f0, 0x101e0510, 0x101f0ef0, 0x101f1170, 0x10203db0, 0x10203ec0, 0x10204120, 0x1020bcd0, 0x1020bd10, 0x10210a70, 0x10213460, 0x1021c6e0, 0x1025dcc0, 0x102b45a0
 * callees: none
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}
