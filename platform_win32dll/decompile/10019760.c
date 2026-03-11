/*
 * func-name: memset
 * func-address: 0x10019760
 * callers: 0x10001360, 0x10002830, 0x10003150, 0x10004ac0
 * callees: none
 */

// attributes: thunk
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  return __imp_memset(a1, Val, Size);
}
