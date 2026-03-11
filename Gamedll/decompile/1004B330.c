/*
 * func-name: sub_1004B330
 * func-address: 0x1004b330
 * callers: 0x10014fb5
 * callees: 0x102c9d98
 */

_DWORD *sub_1004B330()
{
  _DWORD *result; // eax

  result = operator new(0x10u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
