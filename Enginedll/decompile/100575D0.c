/*
 * func-name: sub_100575D0
 * func-address: 0x100575d0
 * callers: 0x1005b2d0, 0x1012ffd0
 * callees: 0x101a2534
 */

_DWORD *sub_100575D0()
{
  _DWORD *result; // eax

  result = operator new(0x38u);
  if ( result )
    *result = 0;
  if ( result != (_DWORD *)-4 )
    result[1] = 0;
  if ( result != (_DWORD *)-8 )
    result[2] = 0;
  *((_BYTE *)result + 52) = 1;
  *((_BYTE *)result + 53) = 0;
  return result;
}
