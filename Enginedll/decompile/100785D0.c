/*
 * func-name: sub_100785D0
 * func-address: 0x100785d0
 * callers: 0x100913d0, 0x100d0040, 0x100d2db0, 0x100fff70, 0x10146aa0, 0x10158cf0
 * callees: none
 */

void __cdecl sub_100785D0(_DWORD *a1, int a2, _DWORD *a3)
{
  int i; // ecx

  for ( i = a2; i; a1 += 3 )
  {
    if ( a1 )
    {
      *a1 = *a3;
      a1[1] = a3[1];
      a1[2] = a3[2];
    }
    --i;
  }
}
