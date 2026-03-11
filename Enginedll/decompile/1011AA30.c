/*
 * func-name: sub_1011AA30
 * func-address: 0x1011aa30
 * callers: none
 * callees: 0x101a252e
 */

void *__cdecl sub_1011AA30(void *a1, size_t Size, const void **a3)
{
  void *result; // eax

  result = memcpy(a1, *a3, Size);
  *a3 = (char *)*a3 + Size;
  return result;
}
