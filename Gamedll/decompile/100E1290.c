/*
 * func-name: sub_100E1290
 * func-address: 0x100e1290
 * callers: 0x10019556
 * callees: 0x102c9d98
 */

_DWORD *sub_100E1290()
{
  _DWORD *result; // eax

  result = operator new(0x24u);
  if ( result )
    *result = 0;
  if ( result != (_DWORD *)-4 )
    result[1] = 0;
  if ( result != (_DWORD *)-8 )
    result[2] = 0;
  *((_BYTE *)result + 32) = 1;
  *((_BYTE *)result + 33) = 0;
  return result;
}
