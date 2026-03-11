/*
 * func-name: sub_1001A3D0
 * func-address: 0x1001a3d0
 * callers: 0x1002ee00, 0x1005e7d0, 0x10169d00, 0x1016bc60
 * callees: none
 */

int __thiscall sub_1001A3D0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 52;
  return result;
}
