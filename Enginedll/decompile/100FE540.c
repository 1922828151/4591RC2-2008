/*
 * func-name: sub_100FE540
 * func-address: 0x100fe540
 * callers: 0x100ff0a0, 0x100ff160
 * callees: none
 */

char *__cdecl sub_100FE540(char *a1, char *a2, char *a3)
{
  char *v3; // edx
  char *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 60 )
  {
    if ( result )
      qmemcpy(result, v3, 0x3Cu);
    v3 += 60;
  }
  return result;
}
