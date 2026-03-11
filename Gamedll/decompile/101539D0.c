/*
 * func-name: sub_101539D0
 * func-address: 0x101539d0
 * callers: 0x10018804
 * callees: none
 */

void __cdecl sub_101539D0(_DWORD *a1, int a2, _DWORD *a3)
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
