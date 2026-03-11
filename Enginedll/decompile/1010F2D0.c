/*
 * func-name: sub_1010F2D0
 * func-address: 0x1010f2d0
 * callers: 0x10111bb0
 * callees: 0x101a2534
 */

_DWORD *sub_1010F2D0()
{
  _DWORD *result; // eax

  result = operator new(0x40u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
