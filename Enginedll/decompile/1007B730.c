/*
 * func-name: sub_1007B730
 * func-address: 0x1007b730
 * callers: 0x1007b790, 0x1007bb70
 * callees: none
 */

char *__usercall sub_1007B730@<eax>(char *result@<eax>, char *a2, int a3, const void *a4)
{
  int v4; // edx

  v4 = a3;
  if ( a3 )
  {
    result = a2;
    do
    {
      if ( result )
        qmemcpy(result, a4, 0x5Cu);
      --v4;
      result += 92;
    }
    while ( v4 );
  }
  return result;
}
