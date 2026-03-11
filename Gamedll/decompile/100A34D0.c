/*
 * func-name: sub_100A34D0
 * func-address: 0x100a34d0
 * callers: 0x1000f605
 * callees: none
 */

char *__cdecl sub_100A34D0(char *a1, char *a2, char *a3)
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
