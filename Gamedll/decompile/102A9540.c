/*
 * func-name: sub_102A9540
 * func-address: 0x102a9540
 * callers: 0x10008044
 * callees: 0x102c9d98
 */

_DWORD *sub_102A9540()
{
  _DWORD *result; // eax

  result = operator new(0x10u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
