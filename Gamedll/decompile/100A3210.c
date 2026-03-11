/*
 * func-name: sub_100A3210
 * func-address: 0x100a3210
 * callers: 0x1000166d
 * callees: 0x102c9d98
 */

_DWORD *sub_100A3210()
{
  _DWORD *result; // eax

  result = operator new(0x30u);
  if ( result )
    *result = 0;
  if ( result != (_DWORD *)-4 )
    result[1] = 0;
  if ( result != (_DWORD *)-8 )
    result[2] = 0;
  *((_BYTE *)result + 44) = 1;
  *((_BYTE *)result + 45) = 0;
  return result;
}
