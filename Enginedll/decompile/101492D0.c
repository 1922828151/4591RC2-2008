/*
 * func-name: sub_101492D0
 * func-address: 0x101492d0
 * callers: none
 * callees: 0x101a252e
 */

void *__thiscall sub_101492D0(const void **this, void *a2, size_t Size)
{
  void *result; // eax

  result = memcpy(a2, this[1], Size);
  this[1] = (char *)this[1] + Size;
  return result;
}
