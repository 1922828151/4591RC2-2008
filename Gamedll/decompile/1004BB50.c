/*
 * func-name: sub_1004BB50
 * func-address: 0x1004bb50
 * callers: 0x100105be
 * callees: 0x102c9d98
 */

_DWORD *sub_1004BB50()
{
  _DWORD *result; // eax

  result = operator new(0x10u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
