/*
 * func-name: sub_100FE670
 * func-address: 0x100fe670
 * callers: 0x100ff160
 * callees: none
 */

char *__cdecl sub_100FE670(char *a1, char *a2, const void *a3)
{
  char *result; // eax
  void *v4; // edi

  for ( result = a1; result != a2; result += 60 )
  {
    v4 = result;
    qmemcpy(v4, a3, 0x3Cu);
  }
  return result;
}
