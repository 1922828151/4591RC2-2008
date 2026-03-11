/*
 * func-name: sub_1007B700
 * func-address: 0x1007b700
 * callers: 0x1007b800
 * callees: none
 */

char *__cdecl sub_1007B700(char *a1, char *a2, const void *a3)
{
  char *result; // eax
  void *v4; // edi

  for ( result = a1; result != a2; result += 92 )
  {
    v4 = result;
    qmemcpy(v4, a3, 0x5Cu);
  }
  return result;
}
