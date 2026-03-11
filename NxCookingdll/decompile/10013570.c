/*
 * func-name: sub_10013570
 * func-address: 0x10013570
 * callers: 0x100179f0, 0x10022c20, 0x1002fc50
 * callees: none
 */

unsigned int __cdecl sub_10013570(unsigned int *a1, int a2)
{
  int v2; // esi
  unsigned int result; // eax
  unsigned int v5; // ecx

  v2 = a2;
  result = 0;
  while ( v2 )
  {
    v5 = *a1;
    --v2;
    ++a1;
    if ( v5 > result )
      result = v5;
  }
  return result;
}
