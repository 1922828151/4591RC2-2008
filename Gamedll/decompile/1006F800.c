/*
 * func-name: sub_1006F800
 * func-address: 0x1006f800
 * callers: 0x1001462d
 * callees: 0x102c9d98
 */

_DWORD *sub_1006F800()
{
  _DWORD *result; // eax

  result = operator new(0x28u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
