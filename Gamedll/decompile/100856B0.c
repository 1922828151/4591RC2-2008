/*
 * func-name: sub_100856B0
 * func-address: 0x100856b0
 * callers: 0x10002667
 * callees: none
 */

char *__cdecl sub_100856B0(char *a1, char *a2, char *a3)
{
  char *v3; // edx
  char *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 96 )
  {
    if ( result )
      qmemcpy(result, v3, 0x60u);
    v3 += 96;
  }
  return result;
}
