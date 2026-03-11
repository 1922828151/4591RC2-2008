/*
 * func-name: sub_100B4FC0
 * func-address: 0x100b4fc0
 * callers: 0x1001ace9
 * callees: none
 */

char *__cdecl sub_100B4FC0(char *a1, char *a2, const void *a3)
{
  char *result; // eax
  void *v4; // edi

  for ( result = a1; result != a2; result += 96 )
  {
    v4 = result;
    qmemcpy(v4, a3, 0x60u);
  }
  return result;
}
