/*
 * func-name: sub_1012B410
 * func-address: 0x1012b410
 * callers: 0x100ecf30, 0x1012b9e0
 * callees: none
 */

char *__cdecl sub_1012B410(char *a1, char *a2, const void *a3)
{
  char *result; // eax
  void *v4; // edi

  for ( result = a1; result != a2; result += 56 )
  {
    v4 = result;
    qmemcpy(v4, a3, 0x38u);
  }
  return result;
}
