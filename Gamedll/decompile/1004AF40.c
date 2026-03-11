/*
 * func-name: sub_1004AF40
 * func-address: 0x1004af40
 * callers: 0x100185a2
 * callees: 0x102c9d98
 */

_DWORD *sub_1004AF40()
{
  _DWORD *result; // eax

  result = operator new(0x28u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
