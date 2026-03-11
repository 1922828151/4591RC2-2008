/*
 * func-name: sub_100A3510
 * func-address: 0x100a3510
 * callers: 0x1000fa42
 * callees: none
 */

char *__cdecl sub_100A3510(char *a1, char *a2, char *a3)
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
