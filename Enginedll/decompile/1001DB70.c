/*
 * func-name: sub_1001DB70
 * func-address: 0x1001db70
 * callers: 0x10030ef0, 0x10175fb0
 * callees: 0x101a2534
 */

_DWORD *sub_1001DB70()
{
  _DWORD *result; // eax

  result = operator new(0x34u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
