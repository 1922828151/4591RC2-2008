/*
 * func-name: sub_1007B6D0
 * func-address: 0x1007b6d0
 * callers: 0x1007b7d0, 0x1007b800
 * callees: none
 */

char *__cdecl sub_1007B6D0(char *a1, char *a2, char *a3)
{
  char *v3; // edx
  char *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 92 )
  {
    if ( result )
      qmemcpy(result, v3, 0x5Cu);
    v3 += 92;
  }
  return result;
}
