/*
 * func-name: sub_100E1640
 * func-address: 0x100e1640
 * callers: 0x1001165d
 * callees: 0x102c9d98
 */

_DWORD *sub_100E1640()
{
  _DWORD *result; // eax

  result = operator new(0x18u);
  if ( result )
    *result = 0;
  if ( result != (_DWORD *)-4 )
    result[1] = 0;
  if ( result != (_DWORD *)-8 )
    result[2] = 0;
  *((_BYTE *)result + 20) = 1;
  *((_BYTE *)result + 21) = 0;
  return result;
}
