/*
 * func-name: sub_100950E0
 * func-address: 0x100950e0
 * callers: 0x1003b960, 0x100905a0, 0x100953f0, 0x100f62a0, 0x100f6350, 0x100f7fc0, 0x1010fed0, 0x1010ff80, 0x10110030, 0x10110150, 0x10110200, 0x101102b0, 0x10110360, 0x10135a90, 0x10136000, 0x1016fe70, 0x1016ff20, 0x1016ffd0, 0x10175be0, 0x10175c90, 0x10175d40, 0x10175df0
 * callees: none
 */

void __cdecl sub_100950E0(_DWORD *a1, int a2, _DWORD *a3)
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
