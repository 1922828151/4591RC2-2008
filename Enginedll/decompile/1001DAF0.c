/*
 * func-name: sub_1001DAF0
 * func-address: 0x1001daf0
 * callers: 0x1002c4a0, 0x1013a9b0
 * callees: 0x101a2534
 */

_DWORD *sub_1001DAF0()
{
  _DWORD *result; // eax

  result = operator new(0x34u);
  if ( result )
    *result = 0;
  if ( result != (_DWORD *)-4 )
    result[1] = 0;
  if ( result != (_DWORD *)-8 )
    result[2] = 0;
  *((_BYTE *)result + 48) = 1;
  *((_BYTE *)result + 49) = 0;
  return result;
}
