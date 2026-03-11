/*
 * func-name: sub_101E8E30
 * func-address: 0x101e8e30
 * callers: 0x1001962d
 * callees: none
 */

void __cdecl sub_101E8E30(_DWORD *a1, int a2, _DWORD *a3)
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
