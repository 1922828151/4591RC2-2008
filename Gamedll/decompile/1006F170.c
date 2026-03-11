/*
 * func-name: sub_1006F170
 * func-address: 0x1006f170
 * callers: 0x10008373
 * callees: 0x102c9d98
 */

_DWORD *sub_1006F170()
{
  _DWORD *result; // eax

  result = operator new(0x44u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
