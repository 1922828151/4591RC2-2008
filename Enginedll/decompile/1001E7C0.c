/*
 * func-name: sub_1001E7C0
 * func-address: 0x1001e7c0
 * callers: 0x100208d0, 0x10023740, 0x100e07e0
 * callees: none
 */

char *__cdecl sub_1001E7C0(char *a1, char *a2, char *a3)
{
  char *v3; // edx
  char *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 72 )
  {
    if ( result )
      qmemcpy(result, v3, 0x48u);
    v3 += 72;
  }
  return result;
}
