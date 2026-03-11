/*
 * func-name: sub_1008FFD0
 * func-address: 0x1008ffd0
 * callers: 0x10090820
 * callees: none
 */

char *__cdecl sub_1008FFD0(char *a1, char *a2, const void *a3)
{
  char *result; // eax
  void *v4; // edi

  for ( result = a1; result != a2; result += 32 )
  {
    v4 = result;
    qmemcpy(v4, a3, 0x20u);
  }
  return result;
}
