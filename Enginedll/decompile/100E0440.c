/*
 * func-name: sub_100E0440
 * func-address: 0x100e0440
 * callers: 0x100e0520, 0x100e0d40
 * callees: none
 */

char *__usercall sub_100E0440@<eax>(char *result@<eax>, char *a2, int a3, const void *a4)
{
  int v4; // edx

  v4 = a3;
  if ( a3 )
  {
    result = a2;
    do
    {
      if ( result )
        qmemcpy(result, a4, 0x48u);
      --v4;
      result += 72;
    }
    while ( v4 );
  }
  return result;
}
