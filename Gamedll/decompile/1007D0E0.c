/*
 * func-name: sub_1007D0E0
 * func-address: 0x1007d0e0
 * callers: 0x1000b41a
 * callees: none
 */

char *__usercall sub_1007D0E0@<eax>(char *result@<eax>, char *a2, int a3, const void *a4)
{
  int v4; // edx

  v4 = a3;
  if ( a3 )
  {
    result = a2;
    do
    {
      if ( result )
        qmemcpy(result, a4, 0x30u);
      --v4;
      result += 48;
    }
    while ( v4 );
  }
  return result;
}
