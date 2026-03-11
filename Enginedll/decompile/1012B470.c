/*
 * func-name: sub_1012B470
 * func-address: 0x1012b470
 * callers: 0x100eca60, 0x100ed6f0, 0x10140370
 * callees: none
 */

char *__usercall sub_1012B470@<eax>(char *result@<eax>, char *a2, int a3, const void *a4)
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
