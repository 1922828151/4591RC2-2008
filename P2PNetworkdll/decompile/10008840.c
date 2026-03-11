/*
 * func-name: sub_10008840
 * func-address: 0x10008840
 * callers: 0x10006ab0, 0x10007ba0
 * callees: 0x100234ce
 */

_DWORD *sub_10008840()
{
  _DWORD *result; // eax

  result = operator new(0x40u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
