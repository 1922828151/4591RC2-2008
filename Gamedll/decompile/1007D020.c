/*
 * func-name: sub_1007D020
 * func-address: 0x1007d020
 * callers: 0x1001a050
 * callees: none
 */

char *__cdecl sub_1007D020(char *a1, char *a2, const void *a3)
{
  char *result; // eax
  void *v4; // edi

  for ( result = a1; result != a2; result += 48 )
  {
    v4 = result;
    qmemcpy(v4, a3, 0x30u);
  }
  return result;
}
