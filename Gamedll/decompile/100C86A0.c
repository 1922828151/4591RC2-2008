/*
 * func-name: sub_100C86A0
 * func-address: 0x100c86a0
 * callers: 0x10015217
 * callees: none
 */

char *__usercall sub_100C86A0@<eax>(char *result@<eax>, char *a2, int a3, const void *a4)
{
  int v4; // edx

  v4 = a3;
  if ( a3 )
  {
    result = a2;
    do
    {
      if ( result )
        qmemcpy(result, a4, 0x38u);
      --v4;
      result += 56;
    }
    while ( v4 );
  }
  return result;
}
