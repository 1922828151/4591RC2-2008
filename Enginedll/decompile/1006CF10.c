/*
 * func-name: sub_1006CF10
 * func-address: 0x1006cf10
 * callers: 0x10068320, 0x10091230
 * callees: 0x101a2534
 */

_DWORD *sub_1006CF10()
{
  _DWORD *result; // eax

  result = operator new(0x24u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
