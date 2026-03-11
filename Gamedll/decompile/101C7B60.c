/*
 * func-name: sub_101C7B60
 * func-address: 0x101c7b60
 * callers: 0x1001a44c
 * callees: none
 */

void __cdecl sub_101C7B60(_DWORD *a1, int a2, _DWORD *a3)
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
