/*
 * func-name: sub_100C8550
 * func-address: 0x100c8550
 * callers: 0x1000cac2
 * callees: none
 */

char *__cdecl sub_100C8550(char *a1, char *a2, const void *a3)
{
  char *result; // eax
  void *v4; // edi

  for ( result = a1; result != a2; result += 176 )
  {
    v4 = result;
    qmemcpy(v4, a3, 0xB0u);
  }
  return result;
}
