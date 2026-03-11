/*
 * func-name: sub_10057610
 * func-address: 0x10057610
 * callers: 0x1005b360, 0x10075070, 0x1012ffd0, 0x1016c920, 0x101b7f20
 * callees: 0x101a2534
 */

_DWORD *sub_10057610()
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
