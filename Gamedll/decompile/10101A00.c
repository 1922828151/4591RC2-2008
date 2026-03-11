/*
 * func-name: sub_10101A00
 * func-address: 0x10101a00
 * callers: 0x10013fc0
 * callees: none
 */

void __cdecl sub_10101A00(_DWORD *a1, int a2, _DWORD *a3)
{
  int i; // ecx

  for ( i = a2; i; a1 += 2 )
  {
    if ( a1 )
    {
      *a1 = *a3;
      a1[1] = a3[1];
    }
    --i;
  }
}
