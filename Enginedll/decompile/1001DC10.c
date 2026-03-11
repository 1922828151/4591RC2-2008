/*
 * func-name: sub_1001DC10
 * func-address: 0x1001dc10
 * callers: 0x10031ff0, 0x10170ed0
 * callees: 0x101a2534
 */

_DWORD *sub_1001DC10()
{
  _DWORD *result; // eax

  result = operator new(0x18u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
