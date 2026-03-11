/*
 * func-name: sub_10135A50
 * func-address: 0x10135a50
 * callers: 0x10027400, 0x10027650, 0x100278a0, 0x10027af0, 0x10027d40, 0x10027f90, 0x100281e0, 0x10028430, 0x1003bbe0, 0x10090d20, 0x10095110, 0x100d0fe0, 0x100f66b0, 0x100f70d0, 0x101108c0, 0x10110b10, 0x10110d60, 0x10110fb0, 0x10111200, 0x10111450, 0x101116a0, 0x10135d20, 0x10175990
 * callees: none
 */

int __cdecl sub_10135A50(int a1, int a2, int a3)
{
  int v3; // ecx
  int result; // eax
  int v5; // edx
  int v6; // edi

  v3 = a2;
  result = a3 - 8 * ((a2 - a1) >> 3);
  if ( a1 != a2 )
  {
    v5 = a3 - a2;
    do
    {
      v6 = *(_DWORD *)(v3 - 8);
      v3 -= 8;
      *(_DWORD *)(v5 + v3) = v6;
      *(_DWORD *)(v5 + v3 + 4) = *(_DWORD *)(v3 + 4);
    }
    while ( v3 != a1 );
  }
  return result;
}
