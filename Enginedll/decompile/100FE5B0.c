/*
 * func-name: sub_100FE5B0
 * func-address: 0x100fe5b0
 * callers: 0x100fb5d0
 * callees: 0x101a2534
 */

_DWORD *sub_100FE5B0()
{
  _DWORD *result; // eax

  result = operator new(0x2Cu);
  if ( result )
    *result = 0;
  if ( result != (_DWORD *)-4 )
    result[1] = 0;
  if ( result != (_DWORD *)-8 )
    result[2] = 0;
  *((_BYTE *)result + 40) = 1;
  *((_BYTE *)result + 41) = 0;
  return result;
}
