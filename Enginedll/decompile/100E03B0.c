/*
 * func-name: sub_100E03B0
 * func-address: 0x100e03b0
 * callers: 0x100e07e0
 * callees: none
 */

char *__cdecl sub_100E03B0(char *a1, char *a2, const void *a3)
{
  char *result; // eax
  void *v4; // edi

  for ( result = a1; result != a2; result += 72 )
  {
    v4 = result;
    qmemcpy(v4, a3, 0x48u);
  }
  return result;
}
