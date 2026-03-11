/*
 * func-name: sub_101D5E60
 * func-address: 0x101d5e60
 * callers: 0x1000e50c
 * callees: none
 */

void __cdecl sub_101D5E60(_DWORD *a1, int a2, _DWORD *a3)
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
