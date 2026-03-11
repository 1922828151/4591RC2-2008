/*
 * func-name: sub_1004B620
 * func-address: 0x1004b620
 * callers: 0x1000a7fe
 * callees: 0x102c9d98
 */

_DWORD *sub_1004B620()
{
  _DWORD *result; // eax

  result = operator new(0x10u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
