/*
 * func-name: sub_100C8720
 * func-address: 0x100c8720
 * callers: 0x1001662b
 * callees: none
 */

char *__usercall sub_100C8720@<eax>(char *result@<eax>, char *a2, int a3, const void *a4)
{
  int v4; // edx

  v4 = a3;
  if ( a3 )
  {
    result = a2;
    do
    {
      if ( result )
        qmemcpy(result, a4, 0xB0u);
      --v4;
      result += 176;
    }
    while ( v4 );
  }
  return result;
}
