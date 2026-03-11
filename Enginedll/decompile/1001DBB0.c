/*
 * func-name: sub_1001DBB0
 * func-address: 0x1001dbb0
 * callers: 0x10030f60, 0x10030fd0, 0x10059b50, 0x101655b0, 0x10170080, 0x10170100
 * callees: 0x101a2534
 */

_DWORD *sub_1001DBB0()
{
  _DWORD *result; // eax

  result = operator new(0x10u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
