/*
 * func-name: sub_10090000
 * func-address: 0x10090000
 * callers: 0x10090160, 0x10091470
 * callees: none
 */

char *__usercall sub_10090000@<eax>(char *result@<eax>, char *a2, int a3, const void *a4)
{
  int v4; // edx

  v4 = a3;
  if ( a3 )
  {
    result = a2;
    do
    {
      if ( result )
        qmemcpy(result, a4, 0x20u);
      --v4;
      result += 32;
    }
    while ( v4 );
  }
  return result;
}
