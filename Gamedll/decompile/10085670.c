/*
 * func-name: sub_10085670
 * func-address: 0x10085670
 * callers: 0x1001376e
 * callees: none
 */

char *__cdecl sub_10085670(char *a1, char *a2, char *a3)
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
