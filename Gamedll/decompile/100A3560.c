/*
 * func-name: sub_100A3560
 * func-address: 0x100a3560
 * callers: 0x1000620d
 * callees: none
 */

char *__cdecl sub_100A3560(char *a1, char *a2, char *a3)
{
  char *v3; // edx
  char *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 28 )
  {
    if ( result )
      qmemcpy(result, v3, 0x1Cu);
    v3 += 28;
  }
  return result;
}
