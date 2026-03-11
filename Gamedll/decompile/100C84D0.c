/*
 * func-name: sub_100C84D0
 * func-address: 0x100c84d0
 * callers: 0x10009ead
 * callees: none
 */

char *__cdecl sub_100C84D0(char *a1, char *a2, const void *a3)
{
  char *result; // eax
  void *v4; // edi

  for ( result = a1; result != a2; result += 28 )
  {
    v4 = result;
    qmemcpy(v4, a3, 0x1Cu);
  }
  return result;
}
