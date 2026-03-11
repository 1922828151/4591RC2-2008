/*
 * func-name: sub_100B5070
 * func-address: 0x100b5070
 * callers: 0x10014c8b
 * callees: none
 */

char *__usercall sub_100B5070@<eax>(char *result@<eax>, char *a2, int a3, const void *a4)
{
  int v4; // edx

  v4 = a3;
  if ( a3 )
  {
    result = a2;
    do
    {
      if ( result )
        qmemcpy(result, a4, 0x60u);
      --v4;
      result += 96;
    }
    while ( v4 );
  }
  return result;
}
