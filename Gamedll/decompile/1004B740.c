/*
 * func-name: sub_1004B740
 * func-address: 0x1004b740
 * callers: 0x1000c9f0
 * callees: 0x102c9d98
 */

_DWORD *sub_1004B740()
{
  _DWORD *result; // eax

  result = operator new(0x28u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
