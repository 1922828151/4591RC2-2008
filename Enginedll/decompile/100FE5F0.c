/*
 * func-name: sub_100FE5F0
 * func-address: 0x100fe5f0
 * callers: 0x100faa40, 0x100fb800, 0x100fc250, 0x100fccd0
 * callees: 0x101a2534
 */

_DWORD *sub_100FE5F0()
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
