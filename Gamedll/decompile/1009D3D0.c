/*
 * func-name: sub_1009D3D0
 * func-address: 0x1009d3d0
 * callers: 0x10003490
 * callees: none
 */

char *__cdecl sub_1009D3D0(char *a1, char *a2, char *a3)
{
  char *v3; // edx
  char *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 64 )
  {
    if ( result )
      qmemcpy(result, v3, 0x40u);
    v3 += 64;
  }
  return result;
}
