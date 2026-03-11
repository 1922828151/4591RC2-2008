/*
 * func-name: sub_100C7FA0
 * func-address: 0x100c7fa0
 * callers: 0x1000ffc4
 * callees: none
 */

char *__cdecl sub_100C7FA0(char *a1, char *a2, char *a3)
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
