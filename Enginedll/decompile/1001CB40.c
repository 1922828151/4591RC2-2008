/*
 * func-name: sub_1001CB40
 * func-address: 0x1001cb40
 * callers: 0x100230f0, 0x10027400, 0x10027650, 0x100278a0, 0x10027af0, 0x10027d40, 0x10027f90, 0x100281e0, 0x10028430, 0x1003bbe0, 0x1006e7d0, 0x100906b0, 0x10090d20, 0x10095110, 0x100d0fe0, 0x100f66b0, 0x100f70d0, 0x101108c0, 0x10110b10, 0x10110d60, 0x10110fb0, 0x10111200, 0x10111450, 0x101116a0, 0x10135d20, 0x10175990
 * callees: none
 */

_DWORD *__cdecl sub_1001CB40(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ecx
  _DWORD *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 2 )
  {
    if ( result )
    {
      *result = *v3;
      result[1] = v3[1];
    }
    v3 += 2;
  }
  return result;
}
