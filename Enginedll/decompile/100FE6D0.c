/*
 * func-name: sub_100FE6D0
 * func-address: 0x100fe6d0
 * callers: 0x100fedd0, 0x100ffec0
 * callees: none
 */

char *__usercall sub_100FE6D0@<eax>(char *result@<eax>, char *a2, int a3, const void *a4)
{
  int v4; // edx

  v4 = a3;
  if ( a3 )
  {
    result = a2;
    do
    {
      if ( result )
        qmemcpy(result, a4, 0x3Cu);
      --v4;
      result += 60;
    }
    while ( v4 );
  }
  return result;
}
