/*
 * func-name: sub_1012B390
 * func-address: 0x1012b390
 * callers: 0x1012b860, 0x1012bcb0, 0x10134ab0
 * callees: none
 */

char *__cdecl sub_1012B390(char *a1, char *a2, char *a3)
{
  char *v3; // edx
  char *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 176 )
  {
    if ( result )
      qmemcpy(result, v3, 0xB0u);
    v3 += 176;
  }
  return result;
}
