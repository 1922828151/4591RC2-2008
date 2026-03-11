/*
 * func-name: sub_10009340
 * func-address: 0x10009340
 * callers: 0x10008960
 * callees: 0x100234ce
 */

_DWORD *sub_10009340()
{
  _DWORD *result; // eax

  result = operator new(0x10u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
