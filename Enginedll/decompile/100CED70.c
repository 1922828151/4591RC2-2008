/*
 * func-name: sub_100CED70
 * func-address: 0x100ced70
 * callers: 0x10075070, 0x100d0c80, 0x100d0d10, 0x1014a2e0
 * callees: 0x101a2534
 */

_DWORD *sub_100CED70()
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
