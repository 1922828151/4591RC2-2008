/*
 * func-name: sub_1001D800
 * func-address: 0x1001d800
 * callers: 0x10032d30, 0x10174800
 * callees: 0x101a2534
 */

_DWORD *sub_1001D800()
{
  _DWORD *result; // eax

  result = operator new(0x84u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
