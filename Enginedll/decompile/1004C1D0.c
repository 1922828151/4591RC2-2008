/*
 * func-name: sub_1004C1D0
 * func-address: 0x1004c1d0
 * callers: 0x1004c410, 0x1004c6f0, 0x1007b800
 * callees: none
 */

int __thiscall sub_1004C1D0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 92;
  return result;
}
