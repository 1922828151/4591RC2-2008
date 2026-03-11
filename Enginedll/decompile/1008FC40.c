/*
 * func-name: sub_1008FC40
 * func-address: 0x1008fc40
 * callers: 0x10090650, 0x10090820
 * callees: none
 */

char *__cdecl sub_1008FC40(char *a1, char *a2, char *a3)
{
  char *v3; // edx
  char *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 32 )
  {
    if ( result )
      qmemcpy(result, v3, 0x20u);
    v3 += 32;
  }
  return result;
}
