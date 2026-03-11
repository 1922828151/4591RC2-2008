/*
 * func-name: sub_1012B4A0
 * func-address: 0x1012b4a0
 * callers: 0x1012b5a0, 0x10134cb0
 * callees: none
 */

char *__usercall sub_1012B4A0@<eax>(char *result@<eax>, char *a2, int a3, const void *a4)
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
