/*
 * func-name: sub_1006FA10
 * func-address: 0x1006fa10
 * callers: 0x10015401
 * callees: 0x102c9d98
 */

_DWORD *sub_1006FA10()
{
  _DWORD *result; // eax

  result = operator new(0x14u);
  if ( result )
    *result = 0;
  if ( result != (_DWORD *)-4 )
    result[1] = 0;
  if ( result != (_DWORD *)-8 )
    result[2] = 0;
  *((_BYTE *)result + 16) = 1;
  *((_BYTE *)result + 17) = 0;
  return result;
}
