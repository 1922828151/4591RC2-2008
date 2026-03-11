/*
 * func-name: sub_1016A3C0
 * func-address: 0x1016a3c0
 * callers: 0x10161810, 0x10166fb0, 0x10169020
 * callees: 0x101a2534
 */

_DWORD *sub_1016A3C0()
{
  _DWORD *result; // eax

  result = operator new(0x20u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
