/*
 * func-name: sub_101E84C0
 * func-address: 0x101e84c0
 * callers: 0x1000c9dc
 * callees: 0x102c9d98
 */

_DWORD *sub_101E84C0()
{
  _DWORD *result; // eax

  result = operator new(0x10u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
