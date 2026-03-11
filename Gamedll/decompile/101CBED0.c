/*
 * func-name: sub_101CBED0
 * func-address: 0x101cbed0
 * callers: 0x1001294a
 * callees: none
 */

void __cdecl sub_101CBED0(_DWORD *a1, int a2, _DWORD *a3)
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
