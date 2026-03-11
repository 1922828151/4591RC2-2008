/*
 * func-name: sub_100CF3A0
 * func-address: 0x100cf3a0
 * callers: 0x10013d8b
 * callees: none
 */

char *__usercall sub_100CF3A0@<eax>(char *result@<eax>, char *a2, int a3, const void *a4)
{
  int v4; // edx

  v4 = a3;
  if ( a3 )
  {
    result = a2;
    do
    {
      if ( result )
        qmemcpy(result, a4, 0x40u);
      --v4;
      result += 64;
    }
    while ( v4 );
  }
  return result;
}
