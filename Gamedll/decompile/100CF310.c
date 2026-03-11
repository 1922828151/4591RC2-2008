/*
 * func-name: sub_100CF310
 * func-address: 0x100cf310
 * callers: 0x10006ae1
 * callees: none
 */

char *__cdecl sub_100CF310(char *a1, char *a2, const void *a3)
{
  char *result; // eax
  void *v4; // edi

  for ( result = a1; result != a2; result += 64 )
  {
    v4 = result;
    qmemcpy(v4, a3, 0x40u);
  }
  return result;
}
