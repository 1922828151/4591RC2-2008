/*
 * func-name: sub_1007CCD0
 * func-address: 0x1007ccd0
 * callers: 0x10018e12
 * callees: none
 */

char *__cdecl sub_1007CCD0(char *a1, char *a2, char *a3)
{
  char *v3; // edx
  char *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 48 )
  {
    if ( result )
      qmemcpy(result, v3, 0x30u);
    v3 += 48;
  }
  return result;
}
