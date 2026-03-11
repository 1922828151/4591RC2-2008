/*
 * func-name: sub_1012B360
 * func-address: 0x1012b360
 * callers: 0x100ecf30, 0x1012b830, 0x1012b9e0
 * callees: none
 */

char *__cdecl sub_1012B360(char *a1, char *a2, char *a3)
{
  char *v3; // edx
  char *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 56 )
  {
    if ( result )
      qmemcpy(result, v3, 0x38u);
    v3 += 56;
  }
  return result;
}
