/*
 * func-name: sub_1006BD90
 * func-address: 0x1006bd90
 * callers: 0x100268d0, 0x10052860, 0x1006f570, 0x10077c20, 0x100786b0, 0x100d1230, 0x100d1cc0, 0x100ff430, 0x10146700, 0x10157d40
 * callees: none
 */

int __thiscall sub_1006BD90(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 12;
  return result;
}
