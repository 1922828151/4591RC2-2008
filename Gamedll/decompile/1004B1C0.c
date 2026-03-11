/*
 * func-name: sub_1004B1C0
 * func-address: 0x1004b1c0
 * callers: 0x1001251c
 * callees: 0x102c9d98
 */

_DWORD *sub_1004B1C0()
{
  _DWORD *result; // eax

  result = operator new(0x10u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
