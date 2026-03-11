/*
 * func-name: sub_1006CF30
 * func-address: 0x1006cf30
 * callers: 0x1006ff40, 0x100d46f0
 * callees: 0x101a2534
 */

_DWORD *sub_1006CF30()
{
  _DWORD *result; // eax

  result = operator new(0x54u);
  if ( result )
    *result = 0;
  if ( result != (_DWORD *)-4 )
    result[1] = 0;
  if ( result != (_DWORD *)-8 )
    result[2] = 0;
  *((_BYTE *)result + 80) = 1;
  *((_BYTE *)result + 81) = 0;
  return result;
}
