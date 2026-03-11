/*
 * func-name: sub_101B4100
 * func-address: 0x101b4100
 * callers: 0x10016aa9
 * callees: 0x102c9d98
 */

_DWORD *sub_101B4100()
{
  _DWORD *result; // eax

  result = operator new(0x10u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
